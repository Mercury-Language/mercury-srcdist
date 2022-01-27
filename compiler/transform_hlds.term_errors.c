/*
** Automatically generated from `term_errors.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 133 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_0;

#line 136 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_1;

#line 139 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_2[2];

#line 142 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_2;

#line 145 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_3[2];

#line 148 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_3;

#line 151 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_4;

#line 154 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_5;

#line 157 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_6[2];

#line 160 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_6;

#line 163 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 166 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_7[2];

#line 169 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_7;

#line 172 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 175 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 178 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_8[3];

#line 181 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_8;

#line 184 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_9[2];

#line 187 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_9;

#line 190 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_errors__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0;

#line 193 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0;

#line 196 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_10[2];

#line 199 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_10;

#line 202 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_11;

#line 205 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_12;

#line 208 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_13;

#line 211 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_14[1];

#line 214 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_14;

#line 217 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_15[1];

#line 220 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_15;

#line 223 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_16;

#line 226 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_17[1];

#line 229 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_17;

#line 232 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_termination_error_0_0[8];

#line 235 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_termination_error_0_1[1];

#line 238 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_termination_error_0_2[1];

#line 241 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_termination_error_0_3[8];

#line 244 "transform_hlds.term_errors.c"
static const MR_DuPtagLayout transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_termination_error_0[4];

#line 247 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_termination_error_0[18];

#line 250 "transform_hlds.term_errors.c"
static const MR_Integer transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_termination_error_0[18];

#line 253 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_context_0_0[2];

#line 256 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_context_0_0;

#line 259 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_termination_error_context_0_0[1];

#line 262 "transform_hlds.term_errors.c"
static const MR_DuPtagLayout transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_termination_error_context_0[1];

#line 265 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_termination_error_context_0[1];

#line 268 "transform_hlds.term_errors.c"
static const MR_Integer transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_termination_error_context_0[1];

#line 271 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0;

#line 274 "transform_hlds.term_errors.c"
static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____termination_error_0_0_10001(
#line 277 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 279 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2);

#line 282 "transform_hlds.term_errors.c"
static void MR_CALL 
transform_hlds__term_errors____Compare____termination_error_0_0_10001(
#line 285 "transform_hlds.term_errors.c"
  MR_Box * transform_hlds__term_errors__wrapper_arg_1,
#line 287 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2,
#line 289 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_3);

#line 292 "transform_hlds.term_errors.c"
static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____termination_error_context_0_0_10001(
#line 295 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 297 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2);

#line 300 "transform_hlds.term_errors.c"
static void MR_CALL 
transform_hlds__term_errors____Compare____termination_error_context_0_0_10001(
#line 303 "transform_hlds.term_errors.c"
  MR_Box * transform_hlds__term_errors__wrapper_arg_1,
#line 305 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2,
#line 307 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_3);

#line 310 "transform_hlds.term_errors.c"
static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____termination_error_contexts_0_0_10001(
#line 313 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 315 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2);

#line 318 "transform_hlds.term_errors.c"
static void MR_CALL 
transform_hlds__term_errors____Compare____termination_error_contexts_0_0_10001(
#line 321 "transform_hlds.term_errors.c"
  MR_Box * transform_hlds__term_errors__wrapper_arg_1,
#line 323 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2,
#line 325 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_3);

#line 486 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__description__486__1_2_p_0(
#line 486 "term_errors.m"
  MR_String transform_hlds__term_errors__HeadVar__1_231,
#line 486 "term_errors.m"
  MR_Word * transform_hlds__term_errors__HeadVar__2_232);

#line 482 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__description__482__1_2_p_0(
#line 482 "term_errors.m"
  MR_String transform_hlds__term_errors__HeadVar__1_225,
#line 482 "term_errors.m"
  MR_Word * transform_hlds__term_errors__HeadVar__2_226);

#line 421 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__description__421__1_2_p_0(
#line 421 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_137,
#line 421 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_138);

#line 359 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__description__359__1_2_p_0(
#line 359 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_37,
#line 359 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_39);

#line 403 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__description__403__1_2_p_0(
#line 403 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_108,
#line 403 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_110);

#line 442 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__description__442__1_2_p_0(
#line 442 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_164,
#line 442 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_166);

#line 541 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__description__541__1_2_p_0(
#line 541 "term_errors.m"
  MR_Word transform_hlds__term_errors__PredId_316,
#line 541 "term_errors.m"
  MR_Word transform_hlds__term_errors__SCCPredId_322);

#line 378 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__description__378__1_2_p_0(
#line 378 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_68,
#line 378 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_70);

#line 570 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__term_errors_var_bag_description_2_4_p_0(
#line 570 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__1_1,
#line 570 "term_errors.m"
  MR_Word transform_hlds__term_errors__Varset_2,
#line 570 "term_errors.m"
  MR_Word transform_hlds__term_errors__First_3,
#line 570 "term_errors.m"
  MR_Word * transform_hlds__term_errors__HeadVar__4_4);

#line 562 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__term_errors_var_bag_description_3_p_0(
#line 562 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVars_4,
#line 562 "term_errors.m"
  MR_Word transform_hlds__term_errors__Varset_5,
#line 562 "term_errors.m"
  MR_Word * transform_hlds__term_errors__Pieces_6);

#line 486 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__description_5_p_0_8(
#line 486 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg,
#line 486 "term_errors.m"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 486 "term_errors.m"
  MR_Box * transform_hlds__term_errors__wrapper_arg_2);

#line 482 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__description_5_p_0_7(
#line 482 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg,
#line 482 "term_errors.m"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 482 "term_errors.m"
  MR_Box * transform_hlds__term_errors__wrapper_arg_2);

#line 421 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__description_5_p_0_6(
#line 421 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg);

#line 359 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__description_5_p_0_5(
#line 359 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg);

#line 442 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__description_5_p_0_4(
#line 442 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg);

#line 541 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__description_5_p_0_3(
#line 541 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg);

#line 403 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__description_5_p_0_2(
#line 403 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg);

#line 378 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__description_5_p_0_1(
#line 378 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg);

#line 337 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__description_5_p_0(
#line 337 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__1_1,
#line 337 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__2_2,
#line 337 "term_errors.m"
  MR_Word transform_hlds__term_errors__Module_3,
#line 337 "term_errors.m"
  MR_Word * transform_hlds__term_errors__Pieces_4,
#line 337 "term_errors.m"
  MR_Word * transform_hlds__term_errors__HeadVar__5_5);

#line 304 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__output_term_error_7_p_0(
#line 304 "term_errors.m"
  MR_Word transform_hlds__term_errors__TermErrorContext_8,
#line 304 "term_errors.m"
  MR_Word transform_hlds__term_errors__Single_9,
#line 304 "term_errors.m"
  MR_Word transform_hlds__term_errors__ErrorNum_10,
#line 304 "term_errors.m"
  MR_Integer transform_hlds__term_errors__Indent_11,
#line 304 "term_errors.m"
  MR_Word transform_hlds__term_errors__Module_12);

#line 295 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__output_term_errors_7_p_0(
#line 295 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__1_1,
#line 295 "term_errors.m"
  MR_Word transform_hlds__term_errors__Single_2,
#line 295 "term_errors.m"
  MR_Integer transform_hlds__term_errors__ErrNum0_3,
#line 295 "term_errors.m"
  MR_Integer transform_hlds__term_errors__Indent_4,
#line 295 "term_errors.m"
  MR_Word transform_hlds__term_errors__Module_5);

#line 260 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__report_arg_size_errors_5_p_0(
#line 260 "term_errors.m"
  MR_Word transform_hlds__term_errors__SCC_6,
#line 260 "term_errors.m"
  MR_Word transform_hlds__term_errors__Errors_7,
#line 260 "term_errors.m"
  MR_Word transform_hlds__term_errors__Module_8);


static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_1[119][2];

static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_2[3][3];

static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_3[1][1];

static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_4[3][5];




static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_1[119][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "mutually recursive procedures"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Termination of the "))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "of the mutually recursive procedures"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Termination constants"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "not guaranteed to decrease in size."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "the arguments are"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "through the calls to"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In the recursive cycle"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "may make one or more calls back to Mercury."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "It contains foreign code that"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "does_not_terminate"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) ((MR_String) "imported from another module."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "predicates and/or functions"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "It contains one or more"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in the size of the input arguments."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "with an unbounded increase"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "between the arguments of this group of procedures."))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The analysis was unable to form any constraints"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "its output supplier variables"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The set of"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[46])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "foreign_proc"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "foreign language code included via a"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "It depends on the properties of"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[54])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "by the analysis to be infeasible."))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The solver found the constraints produced"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[58])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "for the analysis to process."))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "There are too many execution paths"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[62])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Termination of"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "not proven, for unknown reason(s)."))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "not proven for the following reason:"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "not proven for the following reasons:"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Termination constant of"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "set to infinity for the following"))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "reason:"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[77])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "reasons:"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[80])))
  },
  /* row 82 */
  {
    ((MR_Box) ((MR_String) ":")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "It contains a higher order call."))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The termination pragmas are inconsistent."))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "It contains a typeclass method call."))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "It"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "calls"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "which could not be proven to terminate."))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "with one or more higher order arguments."))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "At the recursive call to"))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "it."))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "makes one or more higher-order calls."))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Each of these higher-order calls has a"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "termination constant of infinity."))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[104]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[106])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[107])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "which has a termination constant of infinity."))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "It is a builtin predicate."))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The set of output supplier variables of"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The set of"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "output supplier variables of"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is not a subset of the head variables"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 118 */
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
    ((MR_Box) (transform_hlds__term_errors__description_5_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__term_errors__description_5_p_0_8)),
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



#line 1204 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_0 = {
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

#line 1219 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_1 = {
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

#line 1234 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_2[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1240 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_2 = {
  (MR_String) "can_loop_proc_called",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_2,
  NULL,
  NULL,
  NULL
};

#line 1255 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_3[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1261 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_3 = {
  (MR_String) "horder_args",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 3,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_3,
  NULL,
  NULL,
  NULL
};

#line 1276 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_4 = {
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

#line 1291 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_5 = {
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

#line 1306 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_6[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1312 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_6 = {
  (MR_String) "inf_termination_const",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 6,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_6,
  NULL,
  NULL,
  NULL
};

#line 1327 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1335 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_7[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_errors__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1341 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_7 = {
  (MR_String) "ho_inf_termination_const",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 7,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_7,
  NULL,
  NULL,
  NULL
};

#line 1356 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1364 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1372 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_8[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_errors__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_errors__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1379 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_8 = {
  (MR_String) "not_subset",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 8,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_8,
  NULL,
  NULL,
  NULL
};

#line 1394 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_9[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1400 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_9 = {
  (MR_String) "inf_call",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 9,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_9,
  NULL,
  NULL,
  NULL
};

#line 1415 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_errors__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 1424 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0
  }
};

#line 1432 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_10[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_errors__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0
};

#line 1438 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_10 = {
  (MR_String) "cycle",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 10,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_10,
  NULL,
  NULL,
  NULL
};

#line 1453 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_11 = {
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

#line 1468 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_12 = {
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

#line 1483 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_13 = {
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

#line 1498 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_14[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 1503 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_14 = {
  (MR_String) "is_builtin",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 14,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_14,
  NULL,
  NULL,
  NULL
};

#line 1518 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_15[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 1523 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_15 = {
  (MR_String) "does_not_term_pragma",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 15,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_15,
  NULL,
  NULL,
  NULL
};

#line 1538 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_16 = {
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

#line 1553 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_17[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1558 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_17 = {
  (MR_String) "does_not_term_foreign",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 17,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_0_17,
  NULL,
  NULL,
  NULL
};

#line 1573 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_termination_error_0_0[8] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_0,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_1,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_4,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_5,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_11,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_12,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_13,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_16
};

#line 1585 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_termination_error_0_1[1] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_2
};

#line 1590 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_termination_error_0_2[1] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_3
};

#line 1595 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_termination_error_0_3[8] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_6,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_7,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_8,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_9,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_10,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_14,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_15,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_17
};

#line 1607 "transform_hlds.term_errors.c"
static const MR_DuPtagLayout transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_termination_error_0[4] = {
  {
    (MR_Integer) 8,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_termination_error_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_termination_error_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_termination_error_0_2
  },
  {
    (MR_Integer) 8,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_termination_error_0_3
  }
};

#line 1631 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_termination_error_0[18] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_2,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_10,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_17,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_15,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_7,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_3,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_4,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_1,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_16,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_9,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_6,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_14,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_5,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_11,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_8,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_0,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_13,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_0_12
};

#line 1653 "transform_hlds.term_errors.c"
static const MR_Integer transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_termination_error_0[18] = {
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

#line 1675 "transform_hlds.term_errors.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_errors____Unify____termination_error_0_0_10001)),
  ((MR_Box) (transform_hlds__term_errors____Compare____termination_error_0_0_10001)),
  (MR_String) "transform_hlds.term_errors",
  (MR_String) "termination_error",
  {
    transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_termination_error_0
  },
  {
    transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_termination_error_0
  },
  (MR_Integer) 18,
  (MR_Integer) 4,
  transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_termination_error_0
};

#line 1696 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_context_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1702 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_context_0_0 = {
  (MR_String) "termination_error_context",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_termination_error_context_0_0,
  NULL,
  NULL,
  NULL
};

#line 1717 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_termination_error_context_0_0[1] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_context_0_0
};

#line 1722 "transform_hlds.term_errors.c"
static const MR_DuPtagLayout transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_termination_error_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_termination_error_context_0_0
  }
};

#line 1731 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_termination_error_context_0[1] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_termination_error_context_0_0
};

#line 1736 "transform_hlds.term_errors.c"
static const MR_Integer transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_termination_error_context_0[1] = {
  (MR_Integer) 0
};

#line 1741 "transform_hlds.term_errors.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_errors____Unify____termination_error_context_0_0_10001)),
  ((MR_Box) (transform_hlds__term_errors____Compare____termination_error_context_0_0_10001)),
  (MR_String) "transform_hlds.term_errors",
  (MR_String) "termination_error_context",
  {
    transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_termination_error_context_0
  },
  {
    transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_termination_error_context_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_termination_error_context_0
};

#line 1762 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0
  }
};

#line 1770 "transform_hlds.term_errors.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_contexts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_errors____Unify____termination_error_contexts_0_0_10001)),
  ((MR_Box) (transform_hlds__term_errors____Compare____termination_error_contexts_0_0_10001)),
  (MR_String) "transform_hlds.term_errors",
  (MR_String) "termination_error_contexts",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_errors__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1791 "transform_hlds.term_errors.c"
static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____termination_error_0_0_10001(
#line 1794 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 1796 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2)
#line 1798 "transform_hlds.term_errors.c"
{
#line 1800 "transform_hlds.term_errors.c"
  {
#line 1802 "transform_hlds.term_errors.c"
    MR_bool transform_hlds__term_errors__succeeded;

#line 1805 "transform_hlds.term_errors.c"
    {
#line 1807 "transform_hlds.term_errors.c"
      transform_hlds__term_errors__succeeded = transform_hlds__term_errors____Unify____termination_error_0_0(((MR_Word) transform_hlds__term_errors__wrapper_arg_1), ((MR_Word) transform_hlds__term_errors__wrapper_arg_2));
    }
#line 1810 "transform_hlds.term_errors.c"
    return transform_hlds__term_errors__succeeded;
#line 1812 "transform_hlds.term_errors.c"
  }
#line 1814 "transform_hlds.term_errors.c"
}

#line 1817 "transform_hlds.term_errors.c"
static void MR_CALL 
transform_hlds__term_errors____Compare____termination_error_0_0_10001(
#line 1820 "transform_hlds.term_errors.c"
  MR_Box * transform_hlds__term_errors__wrapper_arg_1,
#line 1822 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2,
#line 1824 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_3)
#line 1826 "transform_hlds.term_errors.c"
{
#line 1828 "transform_hlds.term_errors.c"
  {
#line 1830 "transform_hlds.term_errors.c"
    MR_Word transform_hlds__term_errors__conv0_HeadVar__1_1;

#line 1833 "transform_hlds.term_errors.c"
    {
#line 1835 "transform_hlds.term_errors.c"
      transform_hlds__term_errors____Compare____termination_error_0_0(&transform_hlds__term_errors__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_errors__wrapper_arg_2), ((MR_Word) transform_hlds__term_errors__wrapper_arg_3));
    }
#line 1838 "transform_hlds.term_errors.c"
    *transform_hlds__term_errors__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_errors__conv0_HeadVar__1_1));
#line 1840 "transform_hlds.term_errors.c"
  }
#line 1842 "transform_hlds.term_errors.c"
}

#line 1845 "transform_hlds.term_errors.c"
static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____termination_error_context_0_0_10001(
#line 1848 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 1850 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2)
#line 1852 "transform_hlds.term_errors.c"
{
#line 1854 "transform_hlds.term_errors.c"
  {
#line 1856 "transform_hlds.term_errors.c"
    MR_bool transform_hlds__term_errors__succeeded;

#line 1859 "transform_hlds.term_errors.c"
    {
#line 1861 "transform_hlds.term_errors.c"
      transform_hlds__term_errors__succeeded = transform_hlds__term_errors____Unify____termination_error_context_0_0(((MR_Word) transform_hlds__term_errors__wrapper_arg_1), ((MR_Word) transform_hlds__term_errors__wrapper_arg_2));
    }
#line 1864 "transform_hlds.term_errors.c"
    return transform_hlds__term_errors__succeeded;
#line 1866 "transform_hlds.term_errors.c"
  }
#line 1868 "transform_hlds.term_errors.c"
}

#line 1871 "transform_hlds.term_errors.c"
static void MR_CALL 
transform_hlds__term_errors____Compare____termination_error_context_0_0_10001(
#line 1874 "transform_hlds.term_errors.c"
  MR_Box * transform_hlds__term_errors__wrapper_arg_1,
#line 1876 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2,
#line 1878 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_3)
#line 1880 "transform_hlds.term_errors.c"
{
#line 1882 "transform_hlds.term_errors.c"
  {
#line 1884 "transform_hlds.term_errors.c"
    MR_Word transform_hlds__term_errors__conv0_HeadVar__1_1;

#line 1887 "transform_hlds.term_errors.c"
    {
#line 1889 "transform_hlds.term_errors.c"
      transform_hlds__term_errors____Compare____termination_error_context_0_0(&transform_hlds__term_errors__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_errors__wrapper_arg_2), ((MR_Word) transform_hlds__term_errors__wrapper_arg_3));
    }
#line 1892 "transform_hlds.term_errors.c"
    *transform_hlds__term_errors__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_errors__conv0_HeadVar__1_1));
#line 1894 "transform_hlds.term_errors.c"
  }
#line 1896 "transform_hlds.term_errors.c"
}

#line 1899 "transform_hlds.term_errors.c"
static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____termination_error_contexts_0_0_10001(
#line 1902 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 1904 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2)
#line 1906 "transform_hlds.term_errors.c"
{
#line 1908 "transform_hlds.term_errors.c"
  {
#line 1910 "transform_hlds.term_errors.c"
    MR_bool transform_hlds__term_errors__succeeded;

#line 1913 "transform_hlds.term_errors.c"
    {
#line 1915 "transform_hlds.term_errors.c"
      transform_hlds__term_errors__succeeded = transform_hlds__term_errors____Unify____termination_error_contexts_0_0(((MR_Word) transform_hlds__term_errors__wrapper_arg_1), ((MR_Word) transform_hlds__term_errors__wrapper_arg_2));
    }
#line 1918 "transform_hlds.term_errors.c"
    return transform_hlds__term_errors__succeeded;
#line 1920 "transform_hlds.term_errors.c"
  }
#line 1922 "transform_hlds.term_errors.c"
}

#line 1925 "transform_hlds.term_errors.c"
static void MR_CALL 
transform_hlds__term_errors____Compare____termination_error_contexts_0_0_10001(
#line 1928 "transform_hlds.term_errors.c"
  MR_Box * transform_hlds__term_errors__wrapper_arg_1,
#line 1930 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2,
#line 1932 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_3)
#line 1934 "transform_hlds.term_errors.c"
{
#line 1936 "transform_hlds.term_errors.c"
  {
#line 1938 "transform_hlds.term_errors.c"
    MR_Word transform_hlds__term_errors__conv0_HeadVar__1_1;

#line 1941 "transform_hlds.term_errors.c"
    {
#line 1943 "transform_hlds.term_errors.c"
      transform_hlds__term_errors____Compare____termination_error_contexts_0_0(&transform_hlds__term_errors__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_errors__wrapper_arg_2), ((MR_Word) transform_hlds__term_errors__wrapper_arg_3));
    }
#line 1946 "transform_hlds.term_errors.c"
    *transform_hlds__term_errors__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_errors__conv0_HeadVar__1_1));
#line 1948 "transform_hlds.term_errors.c"
  }
#line 1950 "transform_hlds.term_errors.c"
}

#line 486 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__description__486__1_2_p_0(
#line 486 "term_errors.m"
  MR_String transform_hlds__term_errors__HeadVar__1_231,
#line 486 "term_errors.m"
  MR_Word * transform_hlds__term_errors__HeadVar__2_232)
#line 486 "term_errors.m"
{
#line 486 "term_errors.m"
  {
#line 486 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 486 "term_errors.m"
    {
#line 486 "term_errors.m"
      MR_Word base;
#line 486 "term_errors.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 486 "term_errors.m"
      *transform_hlds__term_errors__HeadVar__2_232 = base;
#line 486 "term_errors.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_errors__HeadVar__1_231));
#line 486 "term_errors.m"
    }
#line 486 "term_errors.m"
  }
#line 486 "term_errors.m"
}

#line 482 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__description__482__1_2_p_0(
#line 482 "term_errors.m"
  MR_String transform_hlds__term_errors__HeadVar__1_225,
#line 482 "term_errors.m"
  MR_Word * transform_hlds__term_errors__HeadVar__2_226)
#line 482 "term_errors.m"
{
#line 482 "term_errors.m"
  {
#line 482 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 482 "term_errors.m"
    {
#line 482 "term_errors.m"
      MR_Word base;
#line 482 "term_errors.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 482 "term_errors.m"
      *transform_hlds__term_errors__HeadVar__2_226 = base;
#line 482 "term_errors.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_errors__HeadVar__1_225));
#line 482 "term_errors.m"
    }
#line 482 "term_errors.m"
  }
#line 482 "term_errors.m"
}

#line 421 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__description__421__1_2_p_0(
#line 421 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_137,
#line 421 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_138)
#line 421 "term_errors.m"
{
#line 421 "term_errors.m"
  {
#line 421 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 421 "term_errors.m"
    {
#line 421 "term_errors.m"
      return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__PPId_138, transform_hlds__term_errors__CallerPPId_137);
    }
#line 421 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 421 "term_errors.m"
  }
#line 421 "term_errors.m"
}

#line 359 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__description__359__1_2_p_0(
#line 359 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_37,
#line 359 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_39)
#line 359 "term_errors.m"
{
#line 359 "term_errors.m"
  {
#line 359 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 359 "term_errors.m"
    {
#line 359 "term_errors.m"
      return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__PPId_39, transform_hlds__term_errors__CallerPPId_37);
    }
#line 359 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 359 "term_errors.m"
  }
#line 359 "term_errors.m"
}

#line 403 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__description__403__1_2_p_0(
#line 403 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_108,
#line 403 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_110)
#line 403 "term_errors.m"
{
#line 403 "term_errors.m"
  {
#line 403 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 403 "term_errors.m"
    {
#line 403 "term_errors.m"
      return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__PPId_110, transform_hlds__term_errors__CallerPPId_108);
    }
#line 403 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 403 "term_errors.m"
  }
#line 403 "term_errors.m"
}

#line 442 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__description__442__1_2_p_0(
#line 442 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_164,
#line 442 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_166)
#line 442 "term_errors.m"
{
#line 442 "term_errors.m"
  {
#line 442 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 442 "term_errors.m"
    {
#line 442 "term_errors.m"
      return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__PPId_166, transform_hlds__term_errors__CallerPPId_164);
    }
#line 442 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 442 "term_errors.m"
  }
#line 442 "term_errors.m"
}

#line 541 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__description__541__1_2_p_0(
#line 541 "term_errors.m"
  MR_Word transform_hlds__term_errors__PredId_316,
#line 541 "term_errors.m"
  MR_Word transform_hlds__term_errors__SCCPredId_322)
#line 541 "term_errors.m"
{
#line 541 "term_errors.m"
  {
#line 541 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 541 "term_errors.m"
    {
#line 541 "term_errors.m"
      return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__term_errors__PredId_316, transform_hlds__term_errors__SCCPredId_322);
    }
#line 541 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 541 "term_errors.m"
  }
#line 541 "term_errors.m"
}

#line 378 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__description__378__1_2_p_0(
#line 378 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_68,
#line 378 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_70)
#line 378 "term_errors.m"
{
#line 378 "term_errors.m"
  {
#line 378 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 378 "term_errors.m"
    {
#line 378 "term_errors.m"
      return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__PPId_70, transform_hlds__term_errors__CallerPPId_68);
    }
#line 378 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 378 "term_errors.m"
  }
#line 378 "term_errors.m"
}

#line 141 "term_errors.m"
void MR_CALL 
transform_hlds__term_errors____Compare____termination_error_contexts_0_0(
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
    MR_Word transform_hlds__term_errors__Cast_HeadVar1_4 = transform_hlds__term_errors__HeadVar__2_2;
#line 141 "term_errors.m"
    MR_Word transform_hlds__term_errors__Cast_HeadVar2_5 = transform_hlds__term_errors__HeadVar__3_3;

#line 141 "term_errors.m"
    {
#line 141 "term_errors.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_errors_scalar_common_1[4], transform_hlds__term_errors__HeadVar__1_1, ((MR_Box) (transform_hlds__term_errors__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_errors__Cast_HeadVar2_5)));
#line 141 "term_errors.m"
      return;
    }
#line 141 "term_errors.m"
  }
#line 141 "term_errors.m"
}

#line 141 "term_errors.m"
MR_bool MR_CALL 
transform_hlds__term_errors____Unify____termination_error_contexts_0_0(
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
    MR_Word transform_hlds__term_errors__Cast_HeadVar1_3 = transform_hlds__term_errors__HeadVar__1_1;
#line 141 "term_errors.m"
    MR_Word transform_hlds__term_errors__Cast_HeadVar2_4 = transform_hlds__term_errors__HeadVar__2_2;

#line 141 "term_errors.m"
    {
#line 141 "term_errors.m"
      return transform_hlds__term_errors__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_errors_scalar_common_1[4], ((MR_Box) (transform_hlds__term_errors__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_errors__Cast_HeadVar2_4)));
    }
#line 141 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 141 "term_errors.m"
  }
#line 141 "term_errors.m"
}

#line 142 "term_errors.m"
void MR_CALL 
transform_hlds__term_errors____Compare____termination_error_context_0_0(
#line 142 "term_errors.m"
  MR_Word * transform_hlds__term_errors__HeadVar__1_1,
#line 142 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__2_2,
#line 142 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__3_3)
#line 142 "term_errors.m"
{
#line 142 "term_errors.m"
  {
#line 142 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 142 "term_errors.m"
    MR_Integer transform_hlds__term_errors__CastX_9 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;
#line 142 "term_errors.m"
    MR_Integer transform_hlds__term_errors__CastY_10 = (MR_Integer) transform_hlds__term_errors__HeadVar__3_3;

#line 142 "term_errors.m"
    transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastX_9 == transform_hlds__term_errors__CastY_10);
#line 142 "term_errors.m"
    if (transform_hlds__term_errors__succeeded)
#line 2257 "transform_hlds.term_errors.c"
      *transform_hlds__term_errors__HeadVar__1_1 = (MR_Integer) 0;
#line 142 "term_errors.m"
    else
#line 142 "term_errors.m"
      {
#line 142 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 142 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 142 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)));
#line 142 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 142 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_8_8;

#line 142 "term_errors.m"
        {
#line 142 "term_errors.m"
          transform_hlds__term_errors____Compare____termination_error_0_0(&transform_hlds__term_errors__V_8_8, transform_hlds__term_errors__V_4_4, transform_hlds__term_errors__V_6_6);
        }
#line 2279 "transform_hlds.term_errors.c"
        transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_8_8 == (MR_Integer) 0);
#line 142 "term_errors.m"
        transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
#line 142 "term_errors.m"
        if (transform_hlds__term_errors__succeeded)
#line 142 "term_errors.m"
          *transform_hlds__term_errors__HeadVar__1_1 = transform_hlds__term_errors__V_8_8;
#line 142 "term_errors.m"
        else
#line 142 "term_errors.m"
          {
#line 142 "term_errors.m"
            mercury__term____Compare____context_0_0(transform_hlds__term_errors__HeadVar__1_1, transform_hlds__term_errors__V_5_5, transform_hlds__term_errors__V_7_7);
#line 142 "term_errors.m"
            return;
          }
#line 142 "term_errors.m"
      }
#line 142 "term_errors.m"
  }
#line 142 "term_errors.m"
}

#line 142 "term_errors.m"
MR_bool MR_CALL 
transform_hlds__term_errors____Unify____termination_error_context_0_0(
#line 142 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__1_1,
#line 142 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__2_2)
#line 142 "term_errors.m"
{
#line 142 "term_errors.m"
  {
#line 142 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 142 "term_errors.m"
    MR_Integer transform_hlds__term_errors__CastX_7 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
#line 142 "term_errors.m"
    MR_Integer transform_hlds__term_errors__CastY_8 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

#line 142 "term_errors.m"
    transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastX_7 == transform_hlds__term_errors__CastY_8);
#line 142 "term_errors.m"
    if (transform_hlds__term_errors__succeeded)
#line 142 "term_errors.m"
      transform_hlds__term_errors__succeeded = MR_TRUE;
#line 142 "term_errors.m"
    else
#line 142 "term_errors.m"
      {
#line 142 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 142 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 142 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 142 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));

#line 2340 "transform_hlds.term_errors.c"
        {
#line 2342 "transform_hlds.term_errors.c"
          transform_hlds__term_errors__succeeded = transform_hlds__term_errors____Unify____termination_error_0_0(transform_hlds__term_errors__V_3_3, transform_hlds__term_errors__V_5_5);
        }
#line 142 "term_errors.m"
        if (transform_hlds__term_errors__succeeded)
#line 2347 "transform_hlds.term_errors.c"
          {
#line 2349 "transform_hlds.term_errors.c"
            return transform_hlds__term_errors__succeeded = mercury__term____Unify____context_0_0(transform_hlds__term_errors__V_4_4, transform_hlds__term_errors__V_6_6);
          }
#line 142 "term_errors.m"
      }
#line 142 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 142 "term_errors.m"
  }
#line 142 "term_errors.m"
}

#line 32 "term_errors.m"
void MR_CALL 
transform_hlds__term_errors____Compare____termination_error_0_0(
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
#line 2385 "transform_hlds.term_errors.c"
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
          transform_hlds__term_errors____Index____termination_error_0_0(transform_hlds__term_errors__HeadVar__2_2, &transform_hlds__term_errors__V_4_4);
        }
#line 32 "term_errors.m"
        {
#line 32 "term_errors.m"
          transform_hlds__term_errors____Index____termination_error_0_0(transform_hlds__term_errors__HeadVar__3_3, &transform_hlds__term_errors__V_5_5);
        }
#line 32 "term_errors.m"
        transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_4_4 < transform_hlds__term_errors__V_5_5);
#line 32 "term_errors.m"
        if (transform_hlds__term_errors__succeeded)
#line 2410 "transform_hlds.term_errors.c"
          *transform_hlds__term_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 32 "term_errors.m"
        else
#line 32 "term_errors.m"
          {
#line 32 "term_errors.m"
            transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_4_4 > transform_hlds__term_errors__V_5_5);
#line 32 "term_errors.m"
            if (transform_hlds__term_errors__succeeded)
#line 2420 "transform_hlds.term_errors.c"
              *transform_hlds__term_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 32 "term_errors.m"
            else
#line 32 "term_errors.m"
              {
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_6_6;

#line 32 "term_errors.m"
                if ((transform_hlds__term_errors__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 32 "term_errors.m"
                  {
#line 32 "term_errors.m"
                    transform_hlds__term_errors__V_6_6 = (MR_Integer) 0;
#line 32 "term_errors.m"
                    transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                  }
#line 32 "term_errors.m"
                else
#line 32 "term_errors.m"
                  if ((transform_hlds__term_errors__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 32 "term_errors.m"
                    {
#line 32 "term_errors.m"
                      transform_hlds__term_errors__V_6_6 = (MR_Integer) 0;
#line 32 "term_errors.m"
                      transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                    }
#line 32 "term_errors.m"
                  else
#line 32 "term_errors.m"
                    if ((transform_hlds__term_errors__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 32 "term_errors.m"
                      {
#line 32 "term_errors.m"
                        transform_hlds__term_errors__V_6_6 = (MR_Integer) 0;
#line 32 "term_errors.m"
                        transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                      }
#line 32 "term_errors.m"
                    else
#line 32 "term_errors.m"
                      if ((transform_hlds__term_errors__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 32 "term_errors.m"
                        {
#line 32 "term_errors.m"
                          transform_hlds__term_errors__V_6_6 = (MR_Integer) 0;
#line 32 "term_errors.m"
                          transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                        }
#line 32 "term_errors.m"
                      else
#line 32 "term_errors.m"
                        if ((transform_hlds__term_errors__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 32 "term_errors.m"
                          {
#line 32 "term_errors.m"
                            transform_hlds__term_errors__V_6_6 = (MR_Integer) 0;
#line 32 "term_errors.m"
                            transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                          }
#line 32 "term_errors.m"
                        else
#line 32 "term_errors.m"
                          if ((transform_hlds__term_errors__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 32 "term_errors.m"
                            {
#line 32 "term_errors.m"
                              transform_hlds__term_errors__V_6_6 = (MR_Integer) 0;
#line 32 "term_errors.m"
                              transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                            }
#line 32 "term_errors.m"
                          else
#line 32 "term_errors.m"
                            if ((transform_hlds__term_errors__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 32 "term_errors.m"
                              {
#line 32 "term_errors.m"
                                transform_hlds__term_errors__V_6_6 = (MR_Integer) 0;
#line 32 "term_errors.m"
                                transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                              }
#line 32 "term_errors.m"
                            else
#line 32 "term_errors.m"
                              if ((transform_hlds__term_errors__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 32 "term_errors.m"
                                {
#line 32 "term_errors.m"
                                  transform_hlds__term_errors__V_6_6 = (MR_Integer) 0;
#line 32 "term_errors.m"
                                  transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                                }
#line 32 "term_errors.m"
                              else
#line 32 "term_errors.m"
                                if (((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
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
#line 2555 "transform_hlds.term_errors.c"
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
                                else
#line 32 "term_errors.m"
                                  if (((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
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
#line 2608 "transform_hlds.term_errors.c"
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
                                  else
#line 32 "term_errors.m"
                                    if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
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
#line 2661 "transform_hlds.term_errors.c"
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
                                    else
#line 32 "term_errors.m"
                                      if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7))))
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
                                      else
#line 32 "term_errors.m"
                                        if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
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
                                        else
#line 32 "term_errors.m"
                                          if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
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
#line 2778 "transform_hlds.term_errors.c"
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
                                          else
#line 32 "term_errors.m"
                                            if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
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
#line 2835 "transform_hlds.term_errors.c"
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
                                            else
#line 32 "term_errors.m"
                                              if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
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
#line 2888 "transform_hlds.term_errors.c"
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
                                              else
#line 32 "term_errors.m"
                                                if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
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
                                                else
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
#line 2975 "transform_hlds.term_errors.c"
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
#line 2995 "transform_hlds.term_errors.c"
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
transform_hlds__term_errors____Index____termination_error_0_0(
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
    if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 3062 "transform_hlds.term_errors.c"
      *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 4;
#line 32 "term_errors.m"
    else
#line 32 "term_errors.m"
      if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3068 "transform_hlds.term_errors.c"
        *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 1;
#line 32 "term_errors.m"
      else
#line 32 "term_errors.m"
        if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 3074 "transform_hlds.term_errors.c"
          *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 16;
#line 32 "term_errors.m"
        else
#line 32 "term_errors.m"
          if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 3080 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 5;
#line 32 "term_errors.m"
          else
#line 32 "term_errors.m"
            if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 3086 "transform_hlds.term_errors.c"
              *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 11;
#line 32 "term_errors.m"
            else
#line 32 "term_errors.m"
              if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3092 "transform_hlds.term_errors.c"
                *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 32 "term_errors.m"
              else
#line 32 "term_errors.m"
                if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 3098 "transform_hlds.term_errors.c"
                  *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 13;
#line 32 "term_errors.m"
                else
#line 32 "term_errors.m"
                  if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 3104 "transform_hlds.term_errors.c"
                    *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 12;
#line 32 "term_errors.m"
                  else
#line 32 "term_errors.m"
                    if (((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 3110 "transform_hlds.term_errors.c"
                      *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 2;
#line 32 "term_errors.m"
                    else
#line 32 "term_errors.m"
                      if (((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 3116 "transform_hlds.term_errors.c"
                        *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 3;
#line 32 "term_errors.m"
                      else
#line 32 "term_errors.m"
                        if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 3122 "transform_hlds.term_errors.c"
                          *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 10;
#line 32 "term_errors.m"
                        else
#line 32 "term_errors.m"
                          if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 3128 "transform_hlds.term_errors.c"
                            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 17;
#line 32 "term_errors.m"
                          else
#line 32 "term_errors.m"
                            if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 3134 "transform_hlds.term_errors.c"
                              *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 15;
#line 32 "term_errors.m"
                            else
#line 32 "term_errors.m"
                              if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3140 "transform_hlds.term_errors.c"
                                *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 7;
#line 32 "term_errors.m"
                              else
#line 32 "term_errors.m"
                                if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 3146 "transform_hlds.term_errors.c"
                                  *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 9;
#line 32 "term_errors.m"
                                else
#line 32 "term_errors.m"
                                  if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 3152 "transform_hlds.term_errors.c"
                                    *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 6;
#line 32 "term_errors.m"
                                  else
#line 32 "term_errors.m"
                                    if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 3158 "transform_hlds.term_errors.c"
                                      *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 14;
#line 32 "term_errors.m"
                                    else
#line 3162 "transform_hlds.term_errors.c"
                                      *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 8;
#line 32 "term_errors.m"
  }
#line 32 "term_errors.m"
}

#line 32 "term_errors.m"
MR_bool MR_CALL 
transform_hlds__term_errors____Unify____termination_error_0_0(
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
      if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
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
      else
#line 32 "term_errors.m"
        if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
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
        else
#line 32 "term_errors.m"
          if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
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
          else
#line 32 "term_errors.m"
            if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
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
            else
#line 32 "term_errors.m"
              if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
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
              else
#line 32 "term_errors.m"
                if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
                else
#line 32 "term_errors.m"
                  if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
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
                  else
#line 32 "term_errors.m"
                    if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
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
                    else
#line 32 "term_errors.m"
                      if (((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
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
#line 3338 "transform_hlds.term_errors.c"
                              {
#line 3340 "transform_hlds.term_errors.c"
                                transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_7_7, transform_hlds__term_errors__V_9_9);
                              }
#line 32 "term_errors.m"
                              if (transform_hlds__term_errors__succeeded)
#line 3345 "transform_hlds.term_errors.c"
                                {
#line 3347 "transform_hlds.term_errors.c"
                                  return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_8_8, transform_hlds__term_errors__V_10_10);
                                }
#line 32 "term_errors.m"
                            }
#line 32 "term_errors.m"
                        }
#line 32 "term_errors.m"
                      else
#line 32 "term_errors.m"
                        if (((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
#line 3379 "transform_hlds.term_errors.c"
                                {
#line 3381 "transform_hlds.term_errors.c"
                                  transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_11_11, transform_hlds__term_errors__V_13_13);
                                }
#line 32 "term_errors.m"
                                if (transform_hlds__term_errors__succeeded)
#line 3386 "transform_hlds.term_errors.c"
                                  {
#line 3388 "transform_hlds.term_errors.c"
                                    return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_12_12, transform_hlds__term_errors__V_14_14);
                                  }
#line 32 "term_errors.m"
                              }
#line 32 "term_errors.m"
                          }
#line 32 "term_errors.m"
                        else
#line 32 "term_errors.m"
                          if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
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
#line 3422 "transform_hlds.term_errors.c"
                                  {
#line 3424 "transform_hlds.term_errors.c"
                                    transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_37_37, transform_hlds__term_errors__V_39_39);
                                  }
#line 32 "term_errors.m"
                                  if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                                    {
#line 3431 "transform_hlds.term_errors.c"
                                      transform_hlds__term_errors__TypeInfo_60_60 = (MR_Word) &transform_hlds__term_errors_scalar_common_1[3];
#line 3433 "transform_hlds.term_errors.c"
                                      {
#line 3435 "transform_hlds.term_errors.c"
                                        return transform_hlds__term_errors__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_errors__TypeInfo_60_60, ((MR_Box) (transform_hlds__term_errors__V_38_38)), ((MR_Box) (transform_hlds__term_errors__V_40_40)));
                                      }
#line 32 "term_errors.m"
                                    }
#line 32 "term_errors.m"
                                }
#line 32 "term_errors.m"
                            }
#line 32 "term_errors.m"
                          else
#line 32 "term_errors.m"
                            if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
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
#line 3463 "transform_hlds.term_errors.c"
                                    {
#line 3465 "transform_hlds.term_errors.c"
                                      return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_53_53, transform_hlds__term_errors__V_54_54);
                                    }
#line 32 "term_errors.m"
                                  }
#line 32 "term_errors.m"
                              }
#line 32 "term_errors.m"
                            else
#line 32 "term_errors.m"
                              if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
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
#line 3491 "transform_hlds.term_errors.c"
                                      {
#line 3493 "transform_hlds.term_errors.c"
                                        return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__term_errors__V_49_49, transform_hlds__term_errors__V_50_50);
                                      }
#line 32 "term_errors.m"
                                    }
#line 32 "term_errors.m"
                                }
#line 32 "term_errors.m"
                              else
#line 32 "term_errors.m"
                                if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
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
#line 3527 "transform_hlds.term_errors.c"
                                        {
#line 3529 "transform_hlds.term_errors.c"
                                          transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_23_23, transform_hlds__term_errors__V_25_25);
                                        }
#line 32 "term_errors.m"
                                        if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                                          {
#line 3536 "transform_hlds.term_errors.c"
                                            transform_hlds__term_errors__TypeInfo_64_64 = (MR_Word) &transform_hlds__term_errors_scalar_common_1[1];
#line 3538 "transform_hlds.term_errors.c"
                                            {
#line 3540 "transform_hlds.term_errors.c"
                                              return transform_hlds__term_errors__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_errors__TypeInfo_64_64, ((MR_Box) (transform_hlds__term_errors__V_24_24)), ((MR_Box) (transform_hlds__term_errors__V_26_26)));
                                            }
#line 32 "term_errors.m"
                                          }
#line 32 "term_errors.m"
                                      }
#line 32 "term_errors.m"
                                  }
#line 32 "term_errors.m"
                                else
#line 32 "term_errors.m"
                                  if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
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
#line 3574 "transform_hlds.term_errors.c"
                                          {
#line 3576 "transform_hlds.term_errors.c"
                                            transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_33_33, transform_hlds__term_errors__V_35_35);
                                          }
#line 32 "term_errors.m"
                                          if (transform_hlds__term_errors__succeeded)
#line 3581 "transform_hlds.term_errors.c"
                                            {
#line 3583 "transform_hlds.term_errors.c"
                                              return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_34_34, transform_hlds__term_errors__V_36_36);
                                            }
#line 32 "term_errors.m"
                                        }
#line 32 "term_errors.m"
                                    }
#line 32 "term_errors.m"
                                  else
#line 32 "term_errors.m"
                                    if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
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
#line 3615 "transform_hlds.term_errors.c"
                                            {
#line 3617 "transform_hlds.term_errors.c"
                                              transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_19_19, transform_hlds__term_errors__V_21_21);
                                            }
#line 32 "term_errors.m"
                                            if (transform_hlds__term_errors__succeeded)
#line 3622 "transform_hlds.term_errors.c"
                                              {
#line 3624 "transform_hlds.term_errors.c"
                                                return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_20_20, transform_hlds__term_errors__V_22_22);
                                              }
#line 32 "term_errors.m"
                                          }
#line 32 "term_errors.m"
                                      }
#line 32 "term_errors.m"
                                    else
#line 32 "term_errors.m"
                                      if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
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
#line 3650 "transform_hlds.term_errors.c"
                                              {
#line 3652 "transform_hlds.term_errors.c"
                                                return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__term_errors__V_47_47, transform_hlds__term_errors__V_48_48);
                                              }
#line 32 "term_errors.m"
                                            }
#line 32 "term_errors.m"
                                        }
#line 32 "term_errors.m"
                                      else
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
#line 3692 "transform_hlds.term_errors.c"
                                              {
#line 3694 "transform_hlds.term_errors.c"
                                                transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_27_27, transform_hlds__term_errors__V_30_30);
                                              }
#line 32 "term_errors.m"
                                              if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                                                {
#line 3701 "transform_hlds.term_errors.c"
                                                  transform_hlds__term_errors__TypeInfo_73_73 = (MR_Word) &transform_hlds__term_errors_scalar_common_1[2];
#line 3703 "transform_hlds.term_errors.c"
                                                  {
#line 3705 "transform_hlds.term_errors.c"
                                                    transform_hlds__term_errors__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_errors__TypeInfo_73_73, ((MR_Box) (transform_hlds__term_errors__V_28_28)), ((MR_Box) (transform_hlds__term_errors__V_31_31)));
                                                  }
#line 32 "term_errors.m"
                                                  if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                                                    {
#line 3712 "transform_hlds.term_errors.c"
                                                      transform_hlds__term_errors__TypeInfo_74_74 = (MR_Word) &transform_hlds__term_errors_scalar_common_1[2];
#line 3714 "transform_hlds.term_errors.c"
                                                      {
#line 3716 "transform_hlds.term_errors.c"
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
    return transform_hlds__term_errors__succeeded;
#line 32 "term_errors.m"
  }
#line 32 "term_errors.m"
}

#line 570 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__term_errors_var_bag_description_2_4_p_0(
#line 570 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__1_1,
#line 570 "term_errors.m"
  MR_Word transform_hlds__term_errors__Varset_2,
#line 570 "term_errors.m"
  MR_Word transform_hlds__term_errors__First_3,
#line 570 "term_errors.m"
  MR_Word * transform_hlds__term_errors__HeadVar__4_4)
#line 570 "term_errors.m"
{
#line 573 "term_errors.m"
  {
#line 573 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 573 "term_errors.m"
    if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 573 "term_errors.m"
      {
#line 573 "term_errors.m"
        *transform_hlds__term_errors__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[118]);
#line 573 "term_errors.m"
      }
#line 573 "term_errors.m"
    else
#line 575 "term_errors.m"
      {
#line 575 "term_errors.m"
        MR_Word transform_hlds__term_errors__Var_9;
#line 575 "term_errors.m"
        MR_Integer transform_hlds__term_errors__Count_10;
#line 575 "term_errors.m"
        MR_Word transform_hlds__term_errors__VarCounts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 575 "term_errors.m"
        MR_String transform_hlds__term_errors__Piece_14;
#line 575 "term_errors.m"
        MR_Word transform_hlds__term_errors__Pieces_15;
#line 575 "term_errors.m"
        MR_String transform_hlds__term_errors__VarName_16;
#line 575 "term_errors.m"
        MR_String transform_hlds__term_errors__VarCountPiece_19;
#line 575 "term_errors.m"
        MR_String transform_hlds__term_errors__Piece0_20;
#line 575 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)));

#line 574 "term_errors.m"
        transform_hlds__term_errors__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_23_23, (MR_Integer) 0)));
#line 574 "term_errors.m"
        transform_hlds__term_errors__Count_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_23_23, (MR_Integer) 1)));
#line 576 "term_errors.m"
        {
#line 576 "term_errors.m"
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__term_errors__Varset_2, transform_hlds__term_errors__Var_9, &transform_hlds__term_errors__VarName_16);
        }
#line 577 "term_errors.m"
        transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__Count_10 > (MR_Integer) 1);
#line 581 "term_errors.m"
        if (transform_hlds__term_errors__succeeded)
#line 578 "term_errors.m"
          {
#line 578 "term_errors.m"
            MR_String transform_hlds__term_errors__VarCountPiece0_17;
#line 578 "term_errors.m"
            MR_String transform_hlds__term_errors__CountStr_18;

#line 578 "term_errors.m"
            {
#line 578 "term_errors.m"
              mercury__string__append_3_p_2(transform_hlds__term_errors__VarName_16, (MR_String) "*", &transform_hlds__term_errors__VarCountPiece0_17);
            }
#line 579 "term_errors.m"
            {
#line 579 "term_errors.m"
              mercury__string__int_to_string_2_p_0(transform_hlds__term_errors__Count_10, &transform_hlds__term_errors__CountStr_18);
            }
#line 580 "term_errors.m"
            {
#line 580 "term_errors.m"
              mercury__string__append_3_p_2(transform_hlds__term_errors__VarCountPiece0_17, transform_hlds__term_errors__CountStr_18, &transform_hlds__term_errors__VarCountPiece_19);
            }
#line 578 "term_errors.m"
          }
#line 581 "term_errors.m"
        else
#line 582 "term_errors.m"
          transform_hlds__term_errors__VarCountPiece_19 = transform_hlds__term_errors__VarName_16;
#line 587 "term_errors.m"
        if ((transform_hlds__term_errors__First_3 == (MR_Integer) 0))
#line 589 "term_errors.m"
          transform_hlds__term_errors__Piece0_20 = transform_hlds__term_errors__VarCountPiece_19;
#line 587 "term_errors.m"
        else
#line 585 "term_errors.m"
          {
#line 586 "term_errors.m"
            {
#line 586 "term_errors.m"
              mercury__string__append_3_p_2((MR_String) "{", transform_hlds__term_errors__VarCountPiece_19, &transform_hlds__term_errors__Piece0_20);
            }
#line 585 "term_errors.m"
          }
#line 595 "term_errors.m"
        if ((transform_hlds__term_errors__VarCounts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 592 "term_errors.m"
          {
#line 593 "term_errors.m"
            {
#line 593 "term_errors.m"
              mercury__string__append_3_p_2(transform_hlds__term_errors__Piece0_20, (MR_String) "}.", &transform_hlds__term_errors__Piece_14);
            }
#line 594 "term_errors.m"
            transform_hlds__term_errors__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 592 "term_errors.m"
          }
#line 595 "term_errors.m"
        else
#line 596 "term_errors.m"
          {
#line 597 "term_errors.m"
            transform_hlds__term_errors__Piece_14 = transform_hlds__term_errors__Piece0_20;
#line 598 "term_errors.m"
            {
#line 598 "term_errors.m"
              transform_hlds__term_errors__term_errors_var_bag_description_2_4_p_0(transform_hlds__term_errors__VarCounts_11, transform_hlds__term_errors__Varset_2, transform_hlds__term_errors__First_3, &transform_hlds__term_errors__Pieces_15);
            }
#line 596 "term_errors.m"
          }
#line 575 "term_errors.m"
        {
#line 575 "term_errors.m"
          MR_Word base;
#line 575 "term_errors.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "term_errors.m"
          *transform_hlds__term_errors__HeadVar__4_4 = base;
#line 575 "term_errors.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_errors__Piece_14));
#line 575 "term_errors.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_errors__Pieces_15));
#line 575 "term_errors.m"
        }
#line 575 "term_errors.m"
      }
#line 573 "term_errors.m"
  }
#line 570 "term_errors.m"
}

#line 562 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__term_errors_var_bag_description_3_p_0(
#line 562 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVars_4,
#line 562 "term_errors.m"
  MR_Word transform_hlds__term_errors__Varset_5,
#line 562 "term_errors.m"
  MR_Word * transform_hlds__term_errors__Pieces_6)
#line 562 "term_errors.m"
{
#line 565 "term_errors.m"
  {
#line 565 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 565 "term_errors.m"
    MR_Word transform_hlds__term_errors__HeadVarCountList_7;

#line 566 "term_errors.m"
    {
#line 566 "term_errors.m"
      mercury__bag__to_assoc_list_2_p_0((MR_Word) &transform_hlds__term_errors_scalar_common_1[0], transform_hlds__term_errors__HeadVars_4, &transform_hlds__term_errors__HeadVarCountList_7);
    }
#line 567 "term_errors.m"
    {
#line 567 "term_errors.m"
      transform_hlds__term_errors__term_errors_var_bag_description_2_4_p_0(transform_hlds__term_errors__HeadVarCountList_7, transform_hlds__term_errors__Varset_5, (MR_Integer) 1, transform_hlds__term_errors__Pieces_6);
#line 567 "term_errors.m"
      return;
    }
#line 565 "term_errors.m"
  }
#line 562 "term_errors.m"
}

#line 486 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__description_5_p_0_8(
#line 486 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg,
#line 486 "term_errors.m"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 486 "term_errors.m"
  MR_Box * transform_hlds__term_errors__wrapper_arg_2)
#line 486 "term_errors.m"
{
#line 486 "term_errors.m"
  {
#line 486 "term_errors.m"
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;
#line 486 "term_errors.m"
    MR_Word transform_hlds__term_errors__conv1_HeadVar__2_232;

#line 486 "term_errors.m"
    {
#line 486 "term_errors.m"
      transform_hlds__term_errors__IntroducedFrom__pred__description__486__1_2_p_0(((MR_String) transform_hlds__term_errors__wrapper_arg_1), &transform_hlds__term_errors__conv1_HeadVar__2_232);
    }
#line 486 "term_errors.m"
    *transform_hlds__term_errors__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_errors__conv1_HeadVar__2_232));
#line 486 "term_errors.m"
  }
#line 486 "term_errors.m"
}

#line 482 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__description_5_p_0_7(
#line 482 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg,
#line 482 "term_errors.m"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 482 "term_errors.m"
  MR_Box * transform_hlds__term_errors__wrapper_arg_2)
#line 482 "term_errors.m"
{
#line 482 "term_errors.m"
  {
#line 482 "term_errors.m"
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;
#line 482 "term_errors.m"
    MR_Word transform_hlds__term_errors__conv0_HeadVar__2_226;

#line 482 "term_errors.m"
    {
#line 482 "term_errors.m"
      transform_hlds__term_errors__IntroducedFrom__pred__description__482__1_2_p_0(((MR_String) transform_hlds__term_errors__wrapper_arg_1), &transform_hlds__term_errors__conv0_HeadVar__2_226);
    }
#line 482 "term_errors.m"
    *transform_hlds__term_errors__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_errors__conv0_HeadVar__2_226));
#line 482 "term_errors.m"
  }
#line 482 "term_errors.m"
}

#line 421 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__description_5_p_0_6(
#line 421 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg)
#line 421 "term_errors.m"
{
#line 421 "term_errors.m"
  {
#line 421 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 421 "term_errors.m"
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;

#line 421 "term_errors.m"
    {
#line 421 "term_errors.m"
      return transform_hlds__term_errors__succeeded = transform_hlds__term_errors__IntroducedFrom__pred__description__421__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 4))));
    }
#line 421 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 421 "term_errors.m"
  }
#line 421 "term_errors.m"
}

#line 359 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__description_5_p_0_5(
#line 359 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg)
#line 359 "term_errors.m"
{
#line 359 "term_errors.m"
  {
#line 359 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 359 "term_errors.m"
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;

#line 359 "term_errors.m"
    {
#line 359 "term_errors.m"
      return transform_hlds__term_errors__succeeded = transform_hlds__term_errors__IntroducedFrom__pred__description__359__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 4))));
    }
#line 359 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 359 "term_errors.m"
  }
#line 359 "term_errors.m"
}

#line 442 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__description_5_p_0_4(
#line 442 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg)
#line 442 "term_errors.m"
{
#line 442 "term_errors.m"
  {
#line 442 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 442 "term_errors.m"
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;

#line 442 "term_errors.m"
    {
#line 442 "term_errors.m"
      return transform_hlds__term_errors__succeeded = transform_hlds__term_errors__IntroducedFrom__pred__description__442__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 4))));
    }
#line 442 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 442 "term_errors.m"
  }
#line 442 "term_errors.m"
}

#line 541 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__description_5_p_0_3(
#line 541 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg)
#line 541 "term_errors.m"
{
#line 541 "term_errors.m"
  {
#line 541 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 541 "term_errors.m"
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;

#line 541 "term_errors.m"
    {
#line 541 "term_errors.m"
      return transform_hlds__term_errors__succeeded = transform_hlds__term_errors__IntroducedFrom__pred__description__541__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 4))));
    }
#line 541 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 541 "term_errors.m"
  }
#line 541 "term_errors.m"
}

#line 403 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__description_5_p_0_2(
#line 403 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg)
#line 403 "term_errors.m"
{
#line 403 "term_errors.m"
  {
#line 403 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 403 "term_errors.m"
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;

#line 403 "term_errors.m"
    {
#line 403 "term_errors.m"
      return transform_hlds__term_errors__succeeded = transform_hlds__term_errors__IntroducedFrom__pred__description__403__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 4))));
    }
#line 403 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 403 "term_errors.m"
  }
#line 403 "term_errors.m"
}

#line 378 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__description_5_p_0_1(
#line 378 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg)
#line 378 "term_errors.m"
{
#line 378 "term_errors.m"
  {
#line 378 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 378 "term_errors.m"
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;

#line 378 "term_errors.m"
    {
#line 378 "term_errors.m"
      return transform_hlds__term_errors__succeeded = transform_hlds__term_errors__IntroducedFrom__pred__description__378__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 4))));
    }
#line 378 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 378 "term_errors.m"
  }
#line 378 "term_errors.m"
}

#line 337 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__description_5_p_0(
#line 337 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__1_1,
#line 337 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__2_2,
#line 337 "term_errors.m"
  MR_Word transform_hlds__term_errors__Module_3,
#line 337 "term_errors.m"
  MR_Word * transform_hlds__term_errors__Pieces_4,
#line 337 "term_errors.m"
  MR_Word * transform_hlds__term_errors__HeadVar__5_5)
#line 337 "term_errors.m"
{
#line 341 "term_errors.m"
  {
#line 341 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 341 "term_errors.m"
    if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 341 "term_errors.m"
      {
#line 341 "term_errors.m"
        *transform_hlds__term_errors__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 342 "term_errors.m"
        *transform_hlds__term_errors__Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[84]);
#line 341 "term_errors.m"
      }
#line 341 "term_errors.m"
    else
#line 341 "term_errors.m"
      if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 392 "term_errors.m"
        {
#line 392 "term_errors.m"
          *transform_hlds__term_errors__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 393 "term_errors.m"
          *transform_hlds__term_errors__Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[36]);
#line 392 "term_errors.m"
        }
#line 341 "term_errors.m"
      else
#line 341 "term_errors.m"
        if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 551 "term_errors.m"
          {
#line 551 "term_errors.m"
            *transform_hlds__term_errors__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 552 "term_errors.m"
            *transform_hlds__term_errors__Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[86]);
#line 551 "term_errors.m"
          }
#line 341 "term_errors.m"
        else
#line 341 "term_errors.m"
          if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 344 "term_errors.m"
            {
#line 344 "term_errors.m"
              *transform_hlds__term_errors__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 345 "term_errors.m"
              *transform_hlds__term_errors__Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[88]);
#line 344 "term_errors.m"
            }
#line 341 "term_errors.m"
          else
#line 341 "term_errors.m"
            if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 516 "term_errors.m"
              {
#line 516 "term_errors.m"
                *transform_hlds__term_errors__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 517 "term_errors.m"
                *transform_hlds__term_errors__Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[44]);
#line 516 "term_errors.m"
              }
#line 341 "term_errors.m"
            else
#line 341 "term_errors.m"
              if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 347 "term_errors.m"
                {
#line 347 "term_errors.m"
                  *transform_hlds__term_errors__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 348 "term_errors.m"
                  *transform_hlds__term_errors__Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[56]);
#line 347 "term_errors.m"
                }
#line 341 "term_errors.m"
              else
#line 341 "term_errors.m"
                if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 522 "term_errors.m"
                  {
#line 522 "term_errors.m"
                    *transform_hlds__term_errors__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 523 "term_errors.m"
                    *transform_hlds__term_errors__Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[60]);
#line 522 "term_errors.m"
                  }
#line 341 "term_errors.m"
                else
#line 341 "term_errors.m"
                  if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 510 "term_errors.m"
                    {
#line 510 "term_errors.m"
                      *transform_hlds__term_errors__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 511 "term_errors.m"
                      *transform_hlds__term_errors__Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[64]);
#line 510 "term_errors.m"
                    }
#line 341 "term_errors.m"
                  else
#line 341 "term_errors.m"
                    if (((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 374 "term_errors.m"
                      {
#line 374 "term_errors.m"
                        MR_Word transform_hlds__term_errors__TypeCtorInfo_366_366;
#line 374 "term_errors.m"
                        MR_Word transform_hlds__term_errors__CallerPPId_68;
#line 374 "term_errors.m"
                        MR_Word transform_hlds__term_errors__CalleePPId_69;
#line 374 "term_errors.m"
                        MR_Word transform_hlds__term_errors__Pieces1_71;
#line 374 "term_errors.m"
                        MR_Word transform_hlds__term_errors__CalleePieces_73;
#line 374 "term_errors.m"
                        MR_Word transform_hlds__term_errors__V_86_86;
#line 374 "term_errors.m"
                        MR_Word transform_hlds__term_errors__V_89_89;

#line 374 "term_errors.m"
                        *transform_hlds__term_errors__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 375 "term_errors.m"
                        transform_hlds__term_errors__CallerPPId_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 375 "term_errors.m"
                        transform_hlds__term_errors__CalleePPId_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 381 "term_errors.m"
                        if ((transform_hlds__term_errors__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 382 "term_errors.m"
                          {
#line 383 "term_errors.m"
                            {
#line 383 "term_errors.m"
                              transform_hlds__term_errors__Pieces1_71 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__Module_3, (MR_Integer) 0, transform_hlds__term_errors__CallerPPId_68);
                            }
#line 382 "term_errors.m"
                          }
#line 381 "term_errors.m"
                        else
#line 377 "term_errors.m"
                          {
#line 377 "term_errors.m"
                            MR_Word transform_hlds__term_errors__PPId_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 377 "term_errors.m"
                            MR_Word transform_hlds__term_errors__V_76_76;

#line 378 "term_errors.m"
                            {
#line 378 "term_errors.m"
                              transform_hlds__term_errors__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 378 "term_errors.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_76_76, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[0]));
#line 378 "term_errors.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_76_76, 1) = ((MR_Box) (transform_hlds__term_errors__description_5_p_0_1));
#line 378 "term_errors.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 378 "term_errors.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_76_76, 3) = ((MR_Box) (transform_hlds__term_errors__CallerPPId_68));
#line 378 "term_errors.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_76_76, 4) = ((MR_Box) (transform_hlds__term_errors__PPId_70));
#line 378 "term_errors.m"
                            }
#line 378 "term_errors.m"
                            {
#line 378 "term_errors.m"
                              mercury__require__expect_4_p_0(transform_hlds__term_errors__V_76_76, (MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.description\'/5", (MR_String) "can_loop_proc_called: caller outside this SCC");
                            }
#line 380 "term_errors.m"
                            transform_hlds__term_errors__Pieces1_71 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[90]);
#line 377 "term_errors.m"
                          }
#line 387 "term_errors.m"
                        {
#line 387 "term_errors.m"
                          transform_hlds__term_errors__CalleePieces_73 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__Module_3, (MR_Integer) 0, transform_hlds__term_errors__CalleePPId_69);
                        }
#line 4328 "transform_hlds.term_errors.c"
                        transform_hlds__term_errors__TypeCtorInfo_366_366 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 390 "term_errors.m"
                        {
#line 390 "term_errors.m"
                          transform_hlds__term_errors__V_89_89 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_366_366, transform_hlds__term_errors__CalleePieces_73, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[94]));
                        }
#line 390 "term_errors.m"
                        {
#line 390 "term_errors.m"
                          transform_hlds__term_errors__V_86_86 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_366_366, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[93]), transform_hlds__term_errors__V_89_89);
                        }
#line 390 "term_errors.m"
                        {
#line 390 "term_errors.m"
                          *transform_hlds__term_errors__Pieces_4 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_366_366, transform_hlds__term_errors__Pieces1_71, transform_hlds__term_errors__V_86_86);
                        }
#line 374 "term_errors.m"
                      }
#line 341 "term_errors.m"
                    else
#line 341 "term_errors.m"
                      if (((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 399 "term_errors.m"
                        {
#line 399 "term_errors.m"
                          MR_Word transform_hlds__term_errors__TypeCtorInfo_368_368;
#line 399 "term_errors.m"
                          MR_Word transform_hlds__term_errors__CallerPPId_108;
#line 399 "term_errors.m"
                          MR_Word transform_hlds__term_errors__CalleePPId_109;
#line 399 "term_errors.m"
                          MR_Word transform_hlds__term_errors__Pieces1_111;
#line 399 "term_errors.m"
                          MR_Word transform_hlds__term_errors__CalleePieces_113;
#line 399 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_126_126;
#line 399 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_129_129;

#line 399 "term_errors.m"
                          *transform_hlds__term_errors__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 400 "term_errors.m"
                          transform_hlds__term_errors__CallerPPId_108 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 400 "term_errors.m"
                          transform_hlds__term_errors__CalleePPId_109 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 406 "term_errors.m"
                          if ((transform_hlds__term_errors__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 407 "term_errors.m"
                            {
#line 408 "term_errors.m"
                              {
#line 408 "term_errors.m"
                                transform_hlds__term_errors__Pieces1_111 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__Module_3, (MR_Integer) 0, transform_hlds__term_errors__CallerPPId_108);
                              }
#line 407 "term_errors.m"
                            }
#line 406 "term_errors.m"
                          else
#line 402 "term_errors.m"
                            {
#line 402 "term_errors.m"
                              MR_Word transform_hlds__term_errors__PPId_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 402 "term_errors.m"
                              MR_Word transform_hlds__term_errors__V_116_116;

#line 403 "term_errors.m"
                              {
#line 403 "term_errors.m"
                                transform_hlds__term_errors__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 403 "term_errors.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_116_116, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[0]));
#line 403 "term_errors.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_116_116, 1) = ((MR_Box) (transform_hlds__term_errors__description_5_p_0_2));
#line 403 "term_errors.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_116_116, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 403 "term_errors.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_116_116, 3) = ((MR_Box) (transform_hlds__term_errors__CallerPPId_108));
#line 403 "term_errors.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_116_116, 4) = ((MR_Box) (transform_hlds__term_errors__PPId_110));
#line 403 "term_errors.m"
                              }
#line 403 "term_errors.m"
                              {
#line 403 "term_errors.m"
                                mercury__require__expect_4_p_0(transform_hlds__term_errors__V_116_116, (MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.description\'/5", (MR_String) "horder_args: caller outside this SCC");
                              }
#line 405 "term_errors.m"
                              transform_hlds__term_errors__Pieces1_111 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[90]);
#line 402 "term_errors.m"
                            }
#line 412 "term_errors.m"
                          {
#line 412 "term_errors.m"
                            transform_hlds__term_errors__CalleePieces_113 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__Module_3, (MR_Integer) 0, transform_hlds__term_errors__CalleePPId_109);
                          }
#line 4424 "transform_hlds.term_errors.c"
                          transform_hlds__term_errors__TypeCtorInfo_368_368 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 415 "term_errors.m"
                          {
#line 415 "term_errors.m"
                            transform_hlds__term_errors__V_129_129 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_368_368, transform_hlds__term_errors__CalleePieces_113, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[96]));
                          }
#line 415 "term_errors.m"
                          {
#line 415 "term_errors.m"
                            transform_hlds__term_errors__V_126_126 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_368_368, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[93]), transform_hlds__term_errors__V_129_129);
                          }
#line 415 "term_errors.m"
                          {
#line 415 "term_errors.m"
                            *transform_hlds__term_errors__Pieces_4 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_368_368, transform_hlds__term_errors__Pieces1_111, transform_hlds__term_errors__V_126_126);
                          }
#line 399 "term_errors.m"
                        }
#line 341 "term_errors.m"
                      else
#line 341 "term_errors.m"
                        if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 491 "term_errors.m"
                          {
#line 491 "term_errors.m"
                            MR_Word transform_hlds__term_errors__CallSites_244 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 491 "term_errors.m"
                            MR_Word transform_hlds__term_errors___StartPPId_243 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 500 "term_errors.m"
                            MR_Word transform_hlds__term_errors__DirectCall_248;
#line 492 "term_errors.m"
                            MR_Word transform_hlds__term_errors__V_252_252;

#line 491 "term_errors.m"
                            *transform_hlds__term_errors__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 492 "term_errors.m"
                            transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__CallSites_244)) == (MR_mktag((MR_Integer) 1)));
#line 492 "term_errors.m"
                            if (transform_hlds__term_errors__succeeded)
#line 492 "term_errors.m"
                              {
#line 492 "term_errors.m"
                                transform_hlds__term_errors__DirectCall_248 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__CallSites_244, (MR_Integer) 0)));
#line 492 "term_errors.m"
                                transform_hlds__term_errors__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__CallSites_244, (MR_Integer) 1)));
#line 492 "term_errors.m"
                                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_252_252 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 492 "term_errors.m"
                              }
#line 500 "term_errors.m"
                            if (transform_hlds__term_errors__succeeded)
#line 494 "term_errors.m"
                              {
#line 494 "term_errors.m"
                                MR_Word transform_hlds__term_errors__SitePieces_249;
#line 494 "term_errors.m"
                                MR_Word transform_hlds__term_errors__V_254_254;

#line 493 "term_errors.m"
                                {
#line 493 "term_errors.m"
                                  transform_hlds__term_errors__SitePieces_249 = hlds__hlds_error_util__describe_one_call_site_3_f_0(transform_hlds__term_errors__Module_3, (MR_Integer) 0, transform_hlds__term_errors__DirectCall_248);
                                }
#line 495 "term_errors.m"
                                {
#line 495 "term_errors.m"
                                  transform_hlds__term_errors__V_254_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "term_errors.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_254_254, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[97])));
#line 495 "term_errors.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_254_254, 1) = ((MR_Box) (transform_hlds__term_errors__SitePieces_249));
#line 495 "term_errors.m"
                                }
#line 495 "term_errors.m"
                                {
#line 495 "term_errors.m"
                                  *transform_hlds__term_errors__Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__V_254_254, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[16]));
                                }
#line 494 "term_errors.m"
                              }
#line 500 "term_errors.m"
                            else
#line 502 "term_errors.m"
                              {
#line 502 "term_errors.m"
                                MR_Word transform_hlds__term_errors__V_277_277;
#line 502 "term_errors.m"
                                MR_Word transform_hlds__term_errors__V_278_278;
#line 502 "term_errors.m"
                                MR_Word transform_hlds__term_errors__SitePieces_281;

#line 503 "term_errors.m"
                                {
#line 503 "term_errors.m"
                                  transform_hlds__term_errors__SitePieces_281 = hlds__hlds_error_util__describe_several_call_sites_3_f_0(transform_hlds__term_errors__Module_3, (MR_Integer) 0, transform_hlds__term_errors__CallSites_244);
                                }
#line 507 "term_errors.m"
                                {
#line 507 "term_errors.m"
                                  transform_hlds__term_errors__V_278_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "term_errors.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_278_278, 0) = ((MR_Box) (transform_hlds__term_errors__SitePieces_281));
#line 507 "term_errors.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_278_278, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[98])));
#line 507 "term_errors.m"
                                }
#line 507 "term_errors.m"
                                {
#line 507 "term_errors.m"
                                  transform_hlds__term_errors__V_277_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "term_errors.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_277_277, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[20])));
#line 507 "term_errors.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_277_277, 1) = ((MR_Box) (transform_hlds__term_errors__V_278_278));
#line 507 "term_errors.m"
                                }
#line 507 "term_errors.m"
                                {
#line 507 "term_errors.m"
                                  mercury__list__condense_2_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__V_277_277, transform_hlds__term_errors__Pieces_4);
#line 507 "term_errors.m"
                                  return;
                                }
#line 502 "term_errors.m"
                              }
#line 491 "term_errors.m"
                          }
#line 341 "term_errors.m"
                        else
#line 341 "term_errors.m"
                          if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 554 "term_errors.m"
                            {
#line 554 "term_errors.m"
                              *transform_hlds__term_errors__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 555 "term_errors.m"
                              *transform_hlds__term_errors__Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[24]);
#line 554 "term_errors.m"
                            }
#line 341 "term_errors.m"
                          else
#line 341 "term_errors.m"
                            if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 534 "term_errors.m"
                              {
#line 534 "term_errors.m"
                                MR_Word transform_hlds__term_errors__PredId_316 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 534 "term_errors.m"
                                MR_Word transform_hlds__term_errors__Pieces2_324;

#line 534 "term_errors.m"
                                *transform_hlds__term_errors__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 544 "term_errors.m"
                                if ((transform_hlds__term_errors__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 545 "term_errors.m"
                                  {
#line 545 "term_errors.m"
                                    MR_Word transform_hlds__term_errors__V_334_334;

#line 546 "term_errors.m"
                                    {
#line 546 "term_errors.m"
                                      transform_hlds__term_errors__V_334_334 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(transform_hlds__term_errors__Module_3, (MR_Integer) 0, transform_hlds__term_errors__PredId_316);
                                    }
#line 547 "term_errors.m"
                                    {
#line 547 "term_errors.m"
                                      transform_hlds__term_errors__Pieces2_324 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__V_334_334, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[100]));
                                    }
#line 545 "term_errors.m"
                                  }
#line 544 "term_errors.m"
                                else
#line 539 "term_errors.m"
                                  {
#line 539 "term_errors.m"
                                    MR_Word transform_hlds__term_errors__PPId_321 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 539 "term_errors.m"
                                    MR_Word transform_hlds__term_errors__SCCPredId_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__PPId_321, (MR_Integer) 0)));
#line 539 "term_errors.m"
                                    MR_Word transform_hlds__term_errors__V_340_340;
#line 540 "term_errors.m"
                                    MR_Integer transform_hlds__term_errors__V_323_323 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__PPId_321, (MR_Integer) 1)));

#line 541 "term_errors.m"
                                    {
#line 541 "term_errors.m"
                                      transform_hlds__term_errors__V_340_340 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 541 "term_errors.m"
                                      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_340_340, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[1]));
#line 541 "term_errors.m"
                                      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_340_340, 1) = ((MR_Box) (transform_hlds__term_errors__description_5_p_0_3));
#line 541 "term_errors.m"
                                      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_340_340, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 541 "term_errors.m"
                                      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_340_340, 3) = ((MR_Box) (transform_hlds__term_errors__PredId_316));
#line 541 "term_errors.m"
                                      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_340_340, 4) = ((MR_Box) (transform_hlds__term_errors__SCCPredId_322));
#line 541 "term_errors.m"
                                    }
#line 541 "term_errors.m"
                                    {
#line 541 "term_errors.m"
                                      mercury__require__expect_4_p_0(transform_hlds__term_errors__V_340_340, (MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.description\'/5", (MR_String) "does not terminate pragma outside this SCC");
                                    }
#line 543 "term_errors.m"
                                    transform_hlds__term_errors__Pieces2_324 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[102]);
#line 539 "term_errors.m"
                                  }
#line 549 "term_errors.m"
                                {
#line 549 "term_errors.m"
                                  mercury__list__append_3_p_1((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[30]), transform_hlds__term_errors__Pieces2_324, transform_hlds__term_errors__Pieces_4);
#line 549 "term_errors.m"
                                  return;
                                }
#line 534 "term_errors.m"
                              }
#line 341 "term_errors.m"
                            else
#line 341 "term_errors.m"
                              if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 435 "term_errors.m"
                                {
#line 435 "term_errors.m"
                                  MR_Word transform_hlds__term_errors__CallerPPId_164;
#line 435 "term_errors.m"
                                  MR_Word transform_hlds__term_errors__Pieces1_167;
#line 439 "term_errors.m"
                                  MR_Word transform_hlds__term_errors___ClosurePPIds_165;

#line 435 "term_errors.m"
                                  *transform_hlds__term_errors__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 439 "term_errors.m"
                                  transform_hlds__term_errors__CallerPPId_164 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 439 "term_errors.m"
                                  transform_hlds__term_errors___ClosurePPIds_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 445 "term_errors.m"
                                  if ((transform_hlds__term_errors__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 446 "term_errors.m"
                                    {
#line 447 "term_errors.m"
                                      {
#line 447 "term_errors.m"
                                        transform_hlds__term_errors__Pieces1_167 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__Module_3, (MR_Integer) 0, transform_hlds__term_errors__CallerPPId_164);
                                      }
#line 446 "term_errors.m"
                                    }
#line 445 "term_errors.m"
                                  else
#line 441 "term_errors.m"
                                    {
#line 441 "term_errors.m"
                                      MR_Word transform_hlds__term_errors__PPId_166 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 441 "term_errors.m"
                                      MR_Word transform_hlds__term_errors__V_172_172;

#line 442 "term_errors.m"
                                      {
#line 442 "term_errors.m"
                                        transform_hlds__term_errors__V_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 442 "term_errors.m"
                                        MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_172_172, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[0]));
#line 442 "term_errors.m"
                                        MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_172_172, 1) = ((MR_Box) (transform_hlds__term_errors__description_5_p_0_4));
#line 442 "term_errors.m"
                                        MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_172_172, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 442 "term_errors.m"
                                        MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_172_172, 3) = ((MR_Box) (transform_hlds__term_errors__CallerPPId_164));
#line 442 "term_errors.m"
                                        MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_172_172, 4) = ((MR_Box) (transform_hlds__term_errors__PPId_166));
#line 442 "term_errors.m"
                                      }
#line 442 "term_errors.m"
                                      {
#line 442 "term_errors.m"
                                        mercury__require__expect_4_p_0(transform_hlds__term_errors__V_172_172, (MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.description\'/5", (MR_String) "ho_info_termination_const: caller outside this SCC");
                                      }
#line 444 "term_errors.m"
                                      transform_hlds__term_errors__Pieces1_167 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[90]);
#line 441 "term_errors.m"
                                    }
#line 453 "term_errors.m"
                                  {
#line 453 "term_errors.m"
                                    *transform_hlds__term_errors__Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Pieces1_167, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[108]));
                                  }
#line 435 "term_errors.m"
                                }
#line 341 "term_errors.m"
                              else
#line 341 "term_errors.m"
                                if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 355 "term_errors.m"
                                  {
#line 355 "term_errors.m"
                                    MR_Word transform_hlds__term_errors__TypeCtorInfo_364_364;
#line 355 "term_errors.m"
                                    MR_Word transform_hlds__term_errors__CallerPPId_37;
#line 355 "term_errors.m"
                                    MR_Word transform_hlds__term_errors__CalleePPId_38;
#line 355 "term_errors.m"
                                    MR_Word transform_hlds__term_errors__Pieces1_40;
#line 355 "term_errors.m"
                                    MR_Word transform_hlds__term_errors__CalleePieces_42;
#line 355 "term_errors.m"
                                    MR_Word transform_hlds__term_errors__V_60_60;
#line 355 "term_errors.m"
                                    MR_Word transform_hlds__term_errors__V_63_63;

#line 355 "term_errors.m"
                                    *transform_hlds__term_errors__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 356 "term_errors.m"
                                    transform_hlds__term_errors__CallerPPId_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 356 "term_errors.m"
                                    transform_hlds__term_errors__CalleePPId_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 362 "term_errors.m"
                                    if ((transform_hlds__term_errors__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 363 "term_errors.m"
                                      {
#line 364 "term_errors.m"
                                        {
#line 364 "term_errors.m"
                                          transform_hlds__term_errors__Pieces1_40 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__Module_3, (MR_Integer) 0, transform_hlds__term_errors__CallerPPId_37);
                                        }
#line 363 "term_errors.m"
                                      }
#line 362 "term_errors.m"
                                    else
#line 358 "term_errors.m"
                                      {
#line 358 "term_errors.m"
                                        MR_Word transform_hlds__term_errors__PPId_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 358 "term_errors.m"
                                        MR_Word transform_hlds__term_errors__V_45_45;

#line 359 "term_errors.m"
                                        {
#line 359 "term_errors.m"
                                          transform_hlds__term_errors__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 359 "term_errors.m"
                                          MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_45_45, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[0]));
#line 359 "term_errors.m"
                                          MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_45_45, 1) = ((MR_Box) (transform_hlds__term_errors__description_5_p_0_5));
#line 359 "term_errors.m"
                                          MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 359 "term_errors.m"
                                          MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_45_45, 3) = ((MR_Box) (transform_hlds__term_errors__CallerPPId_37));
#line 359 "term_errors.m"
                                          MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_45_45, 4) = ((MR_Box) (transform_hlds__term_errors__PPId_39));
#line 359 "term_errors.m"
                                        }
#line 359 "term_errors.m"
                                        {
#line 359 "term_errors.m"
                                          mercury__require__expect_4_p_0(transform_hlds__term_errors__V_45_45, (MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.description\'/5", (MR_String) "inf_call: caller outside this SCC");
                                        }
#line 361 "term_errors.m"
                                        transform_hlds__term_errors__Pieces1_40 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[90]);
#line 358 "term_errors.m"
                                      }
#line 368 "term_errors.m"
                                    {
#line 368 "term_errors.m"
                                      transform_hlds__term_errors__CalleePieces_42 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__Module_3, (MR_Integer) 0, transform_hlds__term_errors__CalleePPId_38);
                                    }
#line 4791 "transform_hlds.term_errors.c"
                                    transform_hlds__term_errors__TypeCtorInfo_364_364 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 372 "term_errors.m"
                                    {
#line 372 "term_errors.m"
                                      transform_hlds__term_errors__V_63_63 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_364_364, transform_hlds__term_errors__CalleePieces_42, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[40]));
                                    }
#line 372 "term_errors.m"
                                    {
#line 372 "term_errors.m"
                                      transform_hlds__term_errors__V_60_60 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_364_364, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[93]), transform_hlds__term_errors__V_63_63);
                                    }
#line 372 "term_errors.m"
                                    {
#line 372 "term_errors.m"
                                      *transform_hlds__term_errors__Pieces_4 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_364_364, transform_hlds__term_errors__Pieces1_40, transform_hlds__term_errors__V_60_60);
                                    }
#line 355 "term_errors.m"
                                  }
#line 341 "term_errors.m"
                                else
#line 341 "term_errors.m"
                                  if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 417 "term_errors.m"
                                    {
#line 417 "term_errors.m"
                                      MR_Word transform_hlds__term_errors__TypeCtorInfo_370_370;
#line 417 "term_errors.m"
                                      MR_Word transform_hlds__term_errors__CalleePPId_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 417 "term_errors.m"
                                      MR_Word transform_hlds__term_errors__CallerPPId_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 417 "term_errors.m"
                                      MR_Word transform_hlds__term_errors__Pieces1_139;
#line 417 "term_errors.m"
                                      MR_Word transform_hlds__term_errors__CalleePieces_141;
#line 417 "term_errors.m"
                                      MR_Word transform_hlds__term_errors__V_154_154;
#line 417 "term_errors.m"
                                      MR_Word transform_hlds__term_errors__V_157_157;

#line 417 "term_errors.m"
                                      {
#line 417 "term_errors.m"
                                        MR_Word base;
#line 417 "term_errors.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 417 "term_errors.m"
                                        *transform_hlds__term_errors__HeadVar__5_5 = base;
#line 417 "term_errors.m"
                                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_errors__CalleePPId_136));
#line 417 "term_errors.m"
                                      }
#line 424 "term_errors.m"
                                      if ((transform_hlds__term_errors__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 425 "term_errors.m"
                                        {
#line 426 "term_errors.m"
                                          {
#line 426 "term_errors.m"
                                            transform_hlds__term_errors__Pieces1_139 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__Module_3, (MR_Integer) 0, transform_hlds__term_errors__CallerPPId_137);
                                          }
#line 425 "term_errors.m"
                                        }
#line 424 "term_errors.m"
                                      else
#line 420 "term_errors.m"
                                        {
#line 420 "term_errors.m"
                                          MR_Word transform_hlds__term_errors__PPId_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 420 "term_errors.m"
                                          MR_Word transform_hlds__term_errors__V_144_144;

#line 421 "term_errors.m"
                                          {
#line 421 "term_errors.m"
                                            transform_hlds__term_errors__V_144_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 421 "term_errors.m"
                                            MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_144_144, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[0]));
#line 421 "term_errors.m"
                                            MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_144_144, 1) = ((MR_Box) (transform_hlds__term_errors__description_5_p_0_6));
#line 421 "term_errors.m"
                                            MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_144_144, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 421 "term_errors.m"
                                            MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_144_144, 3) = ((MR_Box) (transform_hlds__term_errors__CallerPPId_137));
#line 421 "term_errors.m"
                                            MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_144_144, 4) = ((MR_Box) (transform_hlds__term_errors__PPId_138));
#line 421 "term_errors.m"
                                          }
#line 421 "term_errors.m"
                                          {
#line 421 "term_errors.m"
                                            mercury__require__expect_4_p_0(transform_hlds__term_errors__V_144_144, (MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.description\'/5", (MR_String) "inf_termination_const: caller outside this SCC");
                                          }
#line 423 "term_errors.m"
                                          transform_hlds__term_errors__Pieces1_139 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[90]);
#line 420 "term_errors.m"
                                        }
#line 430 "term_errors.m"
                                      {
#line 430 "term_errors.m"
                                        transform_hlds__term_errors__CalleePieces_141 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__Module_3, (MR_Integer) 0, transform_hlds__term_errors__CalleePPId_136);
                                      }
#line 4893 "transform_hlds.term_errors.c"
                                      transform_hlds__term_errors__TypeCtorInfo_370_370 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 433 "term_errors.m"
                                      {
#line 433 "term_errors.m"
                                        transform_hlds__term_errors__V_157_157 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_370_370, transform_hlds__term_errors__CalleePieces_141, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[110]));
                                      }
#line 433 "term_errors.m"
                                      {
#line 433 "term_errors.m"
                                        transform_hlds__term_errors__V_154_154 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_370_370, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[93]), transform_hlds__term_errors__V_157_157);
                                      }
#line 433 "term_errors.m"
                                      {
#line 433 "term_errors.m"
                                        *transform_hlds__term_errors__Pieces_4 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_370_370, transform_hlds__term_errors__Pieces1_139, transform_hlds__term_errors__V_154_154);
                                      }
#line 417 "term_errors.m"
                                    }
#line 341 "term_errors.m"
                                  else
#line 341 "term_errors.m"
                                    if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 528 "term_errors.m"
                                      {
#line 528 "term_errors.m"
                                        *transform_hlds__term_errors__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 531 "term_errors.m"
                                        *transform_hlds__term_errors__Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[112]);
#line 528 "term_errors.m"
                                      }
#line 341 "term_errors.m"
                                    else
#line 456 "term_errors.m"
                                      {
#line 456 "term_errors.m"
                                        MR_Word transform_hlds__term_errors__TypeCtorInfo_373_373;
#line 456 "term_errors.m"
                                        MR_Word transform_hlds__term_errors__TypeCtorInfo_374_374;
#line 456 "term_errors.m"
                                        MR_Word transform_hlds__term_errors__ProcPPId_186 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 456 "term_errors.m"
                                        MR_Word transform_hlds__term_errors__OutputSuppliers_187 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 456 "term_errors.m"
                                        MR_Word transform_hlds__term_errors__HeadVars_188 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 3)));
#line 456 "term_errors.m"
                                        MR_Word transform_hlds__term_errors__Pieces1_193;
#line 456 "term_errors.m"
                                        MR_Word transform_hlds__term_errors__PredId_195;
#line 456 "term_errors.m"
                                        MR_Integer transform_hlds__term_errors__ProcId_196;
#line 456 "term_errors.m"
                                        MR_Word transform_hlds__term_errors__ProcInfo_198;
#line 456 "term_errors.m"
                                        MR_Word transform_hlds__term_errors__Varset_199;
#line 456 "term_errors.m"
                                        MR_Word transform_hlds__term_errors__OutputSuppliersNames_200;
#line 456 "term_errors.m"
                                        MR_Word transform_hlds__term_errors__OutputSuppliersPieces_203;
#line 456 "term_errors.m"
                                        MR_Word transform_hlds__term_errors__HeadVarsNames_205;
#line 456 "term_errors.m"
                                        MR_Word transform_hlds__term_errors__HeadVarsPieces_208;
#line 456 "term_errors.m"
                                        MR_Word transform_hlds__term_errors__V_233_233;
#line 456 "term_errors.m"
                                        MR_Word transform_hlds__term_errors__V_234_234;
#line 456 "term_errors.m"
                                        MR_Word transform_hlds__term_errors__V_235_235;
#line 456 "term_errors.m"
                                        MR_Word transform_hlds__term_errors__V_236_236;
#line 478 "term_errors.m"
                                        MR_Word transform_hlds__term_errors__V_197_197;

#line 456 "term_errors.m"
                                        *transform_hlds__term_errors__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 470 "term_errors.m"
                                        if ((transform_hlds__term_errors__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 471 "term_errors.m"
                                          {
#line 471 "term_errors.m"
                                            MR_Word transform_hlds__term_errors__PPIdPieces_238;

#line 472 "term_errors.m"
                                            {
#line 472 "term_errors.m"
                                              transform_hlds__term_errors__PPIdPieces_238 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__Module_3, (MR_Integer) 0, transform_hlds__term_errors__ProcPPId_186);
                                            }
#line 474 "term_errors.m"
                                            {
#line 474 "term_errors.m"
                                              transform_hlds__term_errors__Pieces1_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "term_errors.m"
                                              MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Pieces1_193, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[113])));
#line 474 "term_errors.m"
                                              MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Pieces1_193, 1) = ((MR_Box) (transform_hlds__term_errors__PPIdPieces_238));
#line 474 "term_errors.m"
                                            }
#line 471 "term_errors.m"
                                          }
#line 470 "term_errors.m"
                                        else
#line 458 "term_errors.m"
                                          {
#line 458 "term_errors.m"
                                            MR_Word transform_hlds__term_errors__PPId_192 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));

#line 459 "term_errors.m"
                                            {
#line 459 "term_errors.m"
                                              transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__PPId_192, transform_hlds__term_errors__ProcPPId_186);
                                            }
#line 462 "term_errors.m"
                                            if (transform_hlds__term_errors__succeeded)
#line 460 "term_errors.m"
                                              transform_hlds__term_errors__Pieces1_193 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[48]);
#line 462 "term_errors.m"
                                            else
#line 466 "term_errors.m"
                                              {
#line 466 "term_errors.m"
                                                MR_Word transform_hlds__term_errors__PPIdPieces_194;
#line 466 "term_errors.m"
                                                MR_Word transform_hlds__term_errors__V_221_221;

#line 465 "term_errors.m"
                                                {
#line 465 "term_errors.m"
                                                  transform_hlds__term_errors__PPIdPieces_194 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__Module_3, (MR_Integer) 0, transform_hlds__term_errors__ProcPPId_186);
                                                }
#line 468 "term_errors.m"
                                                {
#line 468 "term_errors.m"
                                                  transform_hlds__term_errors__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "term_errors.m"
                                                  MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_221_221, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[115])));
#line 468 "term_errors.m"
                                                  MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_221_221, 1) = ((MR_Box) (transform_hlds__term_errors__PPIdPieces_194));
#line 468 "term_errors.m"
                                                }
#line 467 "term_errors.m"
                                                {
#line 467 "term_errors.m"
                                                  transform_hlds__term_errors__Pieces1_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "term_errors.m"
                                                  MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Pieces1_193, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[114])));
#line 467 "term_errors.m"
                                                  MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Pieces1_193, 1) = ((MR_Box) (transform_hlds__term_errors__V_221_221));
#line 467 "term_errors.m"
                                                }
#line 466 "term_errors.m"
                                              }
#line 458 "term_errors.m"
                                          }
#line 477 "term_errors.m"
                                        transform_hlds__term_errors__PredId_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__ProcPPId_186, (MR_Integer) 0)));
#line 477 "term_errors.m"
                                        transform_hlds__term_errors__ProcId_196 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__ProcPPId_186, (MR_Integer) 1)));
#line 478 "term_errors.m"
                                        {
#line 478 "term_errors.m"
                                          hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__term_errors__Module_3, transform_hlds__term_errors__PredId_195, transform_hlds__term_errors__ProcId_196, &transform_hlds__term_errors__V_197_197, &transform_hlds__term_errors__ProcInfo_198);
                                        }
#line 479 "term_errors.m"
                                        {
#line 479 "term_errors.m"
                                          hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__term_errors__ProcInfo_198, &transform_hlds__term_errors__Varset_199);
                                        }
#line 480 "term_errors.m"
                                        {
#line 480 "term_errors.m"
                                          transform_hlds__term_errors__term_errors_var_bag_description_3_p_0(transform_hlds__term_errors__OutputSuppliers_187, transform_hlds__term_errors__Varset_199, &transform_hlds__term_errors__OutputSuppliersNames_200);
                                        }
#line 5066 "transform_hlds.term_errors.c"
                                        transform_hlds__term_errors__TypeCtorInfo_373_373 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 5068 "transform_hlds.term_errors.c"
                                        transform_hlds__term_errors__TypeCtorInfo_374_374 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 482 "term_errors.m"
                                        {
#line 482 "term_errors.m"
                                          mercury__list__map_3_p_0(transform_hlds__term_errors__TypeCtorInfo_373_373, transform_hlds__term_errors__TypeCtorInfo_374_374, (MR_Word) &transform_hlds__term_errors_scalar_common_2[1], transform_hlds__term_errors__OutputSuppliersNames_200, &transform_hlds__term_errors__OutputSuppliersPieces_203);
                                        }
#line 485 "term_errors.m"
                                        {
#line 485 "term_errors.m"
                                          transform_hlds__term_errors__term_errors_var_bag_description_3_p_0(transform_hlds__term_errors__HeadVars_188, transform_hlds__term_errors__Varset_199, &transform_hlds__term_errors__HeadVarsNames_205);
                                        }
#line 486 "term_errors.m"
                                        {
#line 486 "term_errors.m"
                                          mercury__list__map_3_p_0(transform_hlds__term_errors__TypeCtorInfo_373_373, transform_hlds__term_errors__TypeCtorInfo_374_374, (MR_Word) &transform_hlds__term_errors_scalar_common_2[2], transform_hlds__term_errors__HeadVarsNames_205, &transform_hlds__term_errors__HeadVarsPieces_208);
                                        }
#line 489 "term_errors.m"
                                        {
#line 489 "term_errors.m"
                                          transform_hlds__term_errors__V_236_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "term_errors.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_236_236, 0) = ((MR_Box) (transform_hlds__term_errors__HeadVarsPieces_208));
#line 489 "term_errors.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_236_236, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 489 "term_errors.m"
                                        }
#line 488 "term_errors.m"
                                        {
#line 488 "term_errors.m"
                                          transform_hlds__term_errors__V_235_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "term_errors.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_235_235, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[117])));
#line 488 "term_errors.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_235_235, 1) = ((MR_Box) (transform_hlds__term_errors__V_236_236));
#line 488 "term_errors.m"
                                        }
#line 488 "term_errors.m"
                                        {
#line 488 "term_errors.m"
                                          transform_hlds__term_errors__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "term_errors.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_234_234, 0) = ((MR_Box) (transform_hlds__term_errors__OutputSuppliersPieces_203));
#line 488 "term_errors.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_234_234, 1) = ((MR_Box) (transform_hlds__term_errors__V_235_235));
#line 488 "term_errors.m"
                                        }
#line 488 "term_errors.m"
                                        {
#line 488 "term_errors.m"
                                          transform_hlds__term_errors__V_233_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "term_errors.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_233_233, 0) = ((MR_Box) (transform_hlds__term_errors__Pieces1_193));
#line 488 "term_errors.m"
                                          MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_233_233, 1) = ((MR_Box) (transform_hlds__term_errors__V_234_234));
#line 488 "term_errors.m"
                                        }
#line 488 "term_errors.m"
                                        {
#line 488 "term_errors.m"
                                          mercury__list__condense_2_p_0(transform_hlds__term_errors__TypeCtorInfo_374_374, transform_hlds__term_errors__V_233_233, transform_hlds__term_errors__Pieces_4);
#line 488 "term_errors.m"
                                          return;
                                        }
#line 456 "term_errors.m"
                                      }
#line 341 "term_errors.m"
  }
#line 337 "term_errors.m"
}

#line 304 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__output_term_error_7_p_0(
#line 304 "term_errors.m"
  MR_Word transform_hlds__term_errors__TermErrorContext_8,
#line 304 "term_errors.m"
  MR_Word transform_hlds__term_errors__Single_9,
#line 304 "term_errors.m"
  MR_Word transform_hlds__term_errors__ErrorNum_10,
#line 304 "term_errors.m"
  MR_Integer transform_hlds__term_errors__Indent_11,
#line 304 "term_errors.m"
  MR_Word transform_hlds__term_errors__Module_12)
#line 304 "term_errors.m"
{
#line 308 "term_errors.m"
  {
#line 308 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 308 "term_errors.m"
    MR_Word transform_hlds__term_errors__Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__TermErrorContext_8, (MR_Integer) 0)));
#line 308 "term_errors.m"
    MR_Word transform_hlds__term_errors__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__TermErrorContext_8, (MR_Integer) 1)));
#line 308 "term_errors.m"
    MR_Word transform_hlds__term_errors__Pieces0_16;
#line 308 "term_errors.m"
    MR_Word transform_hlds__term_errors__Reason_17;
#line 308 "term_errors.m"
    MR_Word transform_hlds__term_errors__Pieces_21;
#line 308 "term_errors.m"
    MR_Word transform_hlds__term_errors__Globals_22;

#line 310 "term_errors.m"
    {
#line 310 "term_errors.m"
      transform_hlds__term_errors__description_5_p_0(transform_hlds__term_errors__Error_14, transform_hlds__term_errors__Single_9, transform_hlds__term_errors__Module_12, &transform_hlds__term_errors__Pieces0_16, &transform_hlds__term_errors__Reason_17);
    }
#line 316 "term_errors.m"
    if ((transform_hlds__term_errors__ErrorNum_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 318 "term_errors.m"
      transform_hlds__term_errors__Pieces_21 = transform_hlds__term_errors__Pieces0_16;
#line 316 "term_errors.m"
    else
#line 312 "term_errors.m"
      {
#line 312 "term_errors.m"
        MR_Integer transform_hlds__term_errors__N_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ErrorNum_10, (MR_Integer) 0)));
#line 312 "term_errors.m"
        MR_String transform_hlds__term_errors__Nstr_19;
#line 312 "term_errors.m"
        MR_String transform_hlds__term_errors__Preamble_20;
#line 312 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_29_29;
#line 312 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_31_31;
#line 312 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_35_35;

#line 313 "term_errors.m"
        {
#line 313 "term_errors.m"
          mercury__string__int_to_string_2_p_0(transform_hlds__term_errors__N_18, &transform_hlds__term_errors__Nstr_19);
        }
#line 314 "term_errors.m"
        {
#line 314 "term_errors.m"
          transform_hlds__term_errors__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "term_errors.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_31_31, 0) = ((MR_Box) (transform_hlds__term_errors__Nstr_19));
#line 314 "term_errors.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[82])));
#line 314 "term_errors.m"
        }
#line 314 "term_errors.m"
        {
#line 314 "term_errors.m"
          transform_hlds__term_errors__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "term_errors.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_29_29, 0) = ((MR_Box) ((MR_String) "Reason "));
#line 314 "term_errors.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_29_29, 1) = ((MR_Box) (transform_hlds__term_errors__V_31_31));
#line 314 "term_errors.m"
        }
#line 314 "term_errors.m"
        {
#line 314 "term_errors.m"
          mercury__string__append_list_2_p_0(transform_hlds__term_errors__V_29_29, &transform_hlds__term_errors__Preamble_20);
        }
#line 315 "term_errors.m"
        {
#line 315 "term_errors.m"
          transform_hlds__term_errors__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 315 "term_errors.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_35_35, 0) = ((MR_Box) (transform_hlds__term_errors__Preamble_20));
#line 315 "term_errors.m"
        }
#line 315 "term_errors.m"
        {
#line 315 "term_errors.m"
          transform_hlds__term_errors__Pieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "term_errors.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Pieces_21, 0) = ((MR_Box) (transform_hlds__term_errors__V_35_35));
#line 315 "term_errors.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Pieces_21, 1) = ((MR_Box) (transform_hlds__term_errors__Pieces0_16));
#line 315 "term_errors.m"
        }
#line 312 "term_errors.m"
      }
#line 320 "term_errors.m"
    {
#line 320 "term_errors.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_errors__Module_12, &transform_hlds__term_errors__Globals_22);
    }
#line 321 "term_errors.m"
    {
#line 321 "term_errors.m"
      parse_tree__error_util__write_error_pieces_6_p_0(transform_hlds__term_errors__Globals_22, transform_hlds__term_errors__Context_15, transform_hlds__term_errors__Indent_11, transform_hlds__term_errors__Pieces_21);
    }
#line 333 "term_errors.m"
    if ((transform_hlds__term_errors__Reason_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "term_errors.m"
      {
#line 334 "term_errors.m"
      }
#line 333 "term_errors.m"
    else
#line 323 "term_errors.m"
      {
#line 323 "term_errors.m"
        MR_Word transform_hlds__term_errors__InfArgSizePPId_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Reason_17, (MR_Integer) 0)));
#line 323 "term_errors.m"
        MR_Word transform_hlds__term_errors__ArgSize_24;
#line 329 "term_errors.m"
        MR_Word transform_hlds__term_errors__ArgSizeErrors_25;
#line 325 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_37_37;

#line 324 "term_errors.m"
        {
#line 324 "term_errors.m"
          transform_hlds__term_util__lookup_proc_arg_size_info_3_p_0(transform_hlds__term_errors__Module_12, transform_hlds__term_errors__InfArgSizePPId_23, &transform_hlds__term_errors__ArgSize_24);
        }
#line 325 "term_errors.m"
        transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__ArgSize_24)) == (MR_mktag((MR_Integer) 1)));
#line 325 "term_errors.m"
        if (transform_hlds__term_errors__succeeded)
#line 325 "term_errors.m"
          {
#line 325 "term_errors.m"
            transform_hlds__term_errors__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ArgSize_24, (MR_Integer) 0)));
#line 325 "term_errors.m"
            transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 325 "term_errors.m"
            if (transform_hlds__term_errors__succeeded)
#line 325 "term_errors.m"
              transform_hlds__term_errors__ArgSizeErrors_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_37_37, (MR_Integer) 0)));
#line 325 "term_errors.m"
          }
#line 329 "term_errors.m"
        if (transform_hlds__term_errors__succeeded)
#line 327 "term_errors.m"
          {
#line 327 "term_errors.m"
            MR_Word transform_hlds__term_errors__ArgSizePPIdSCC_26;

#line 327 "term_errors.m"
            {
#line 327 "term_errors.m"
              transform_hlds__term_errors__ArgSizePPIdSCC_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "term_errors.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ArgSizePPIdSCC_26, 0) = ((MR_Box) (transform_hlds__term_errors__InfArgSizePPId_23));
#line 327 "term_errors.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ArgSizePPIdSCC_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 327 "term_errors.m"
            }
#line 328 "term_errors.m"
            {
#line 328 "term_errors.m"
              transform_hlds__term_errors__report_arg_size_errors_5_p_0(transform_hlds__term_errors__ArgSizePPIdSCC_26, transform_hlds__term_errors__ArgSizeErrors_25, transform_hlds__term_errors__Module_12);
#line 328 "term_errors.m"
              return;
            }
#line 327 "term_errors.m"
          }
#line 329 "term_errors.m"
        else
#line 330 "term_errors.m"
          {
#line 330 "term_errors.m"
            {
#line 330 "term_errors.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.output_term_error\'/7", (MR_String) "inf arg size procedure does not have inf arg size");
#line 330 "term_errors.m"
              return;
            }
#line 330 "term_errors.m"
          }
#line 323 "term_errors.m"
      }
#line 308 "term_errors.m"
  }
#line 304 "term_errors.m"
}

#line 295 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__output_term_errors_7_p_0(
#line 295 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__1_1,
#line 295 "term_errors.m"
  MR_Word transform_hlds__term_errors__Single_2,
#line 295 "term_errors.m"
  MR_Integer transform_hlds__term_errors__ErrNum0_3,
#line 295 "term_errors.m"
  MR_Integer transform_hlds__term_errors__Indent_4,
#line 295 "term_errors.m"
  MR_Word transform_hlds__term_errors__Module_5)
#line 295 "term_errors.m"
{
#line 299 "term_errors.m"
  while (MR_TRUE)
#line 299 "term_errors.m"
    {
#line 299 "term_errors.m"
      /* tailcall optimized into a loop */
#line 299 "term_errors.m"
      {
#line 299 "term_errors.m"
        MR_bool transform_hlds__term_errors__succeeded;

#line 299 "term_errors.m"
        if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 299 "term_errors.m"
          {
#line 299 "term_errors.m"
          }
#line 299 "term_errors.m"
        else
#line 300 "term_errors.m"
          {
#line 300 "term_errors.m"
            MR_Word transform_hlds__term_errors__Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 300 "term_errors.m"
            MR_Word transform_hlds__term_errors__Errors_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 300 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_24_24;
#line 300 "term_errors.m"
            MR_Integer transform_hlds__term_errors__V_26_26;

#line 301 "term_errors.m"
            {
#line 301 "term_errors.m"
              transform_hlds__term_errors__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 301 "term_errors.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_24_24, 0) = ((MR_Box) (transform_hlds__term_errors__ErrNum0_3));
#line 301 "term_errors.m"
            }
#line 301 "term_errors.m"
            {
#line 301 "term_errors.m"
              transform_hlds__term_errors__output_term_error_7_p_0(transform_hlds__term_errors__Error_15, transform_hlds__term_errors__Single_2, transform_hlds__term_errors__V_24_24, transform_hlds__term_errors__Indent_4, transform_hlds__term_errors__Module_5);
            }
#line 302 "term_errors.m"
            transform_hlds__term_errors__V_26_26 = (transform_hlds__term_errors__ErrNum0_3 + (MR_Integer) 1);
#line 302 "term_errors.m"
            /* direct tailcall eliminated */
#line 302 "term_errors.m"
            {
#line 302 "term_errors.m"
              MR_Word transform_hlds__term_errors__HeadVar__1__tmp_copy_1 = transform_hlds__term_errors__Errors_16;
#line 302 "term_errors.m"
              MR_Integer transform_hlds__term_errors__ErrNum0__tmp_copy_3 = transform_hlds__term_errors__V_26_26;

#line 302 "term_errors.m"
              transform_hlds__term_errors__ErrNum0_3 = transform_hlds__term_errors__ErrNum0__tmp_copy_3;
#line 302 "term_errors.m"
              transform_hlds__term_errors__HeadVar__1_1 = transform_hlds__term_errors__HeadVar__1__tmp_copy_1;
#line 302 "term_errors.m"
            }
#line 302 "term_errors.m"
            continue;
#line 300 "term_errors.m"
          }
#line 299 "term_errors.m"
      }
#line 299 "term_errors.m"
      break;
#line 299 "term_errors.m"
    }
#line 295 "term_errors.m"
}

#line 260 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__report_arg_size_errors_5_p_0(
#line 260 "term_errors.m"
  MR_Word transform_hlds__term_errors__SCC_6,
#line 260 "term_errors.m"
  MR_Word transform_hlds__term_errors__Errors_7,
#line 260 "term_errors.m"
  MR_Word transform_hlds__term_errors__Module_8)
#line 260 "term_errors.m"
{
#line 264 "term_errors.m"
  {
#line 264 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 264 "term_errors.m"
    MR_Word transform_hlds__term_errors__Globals_10;
#line 264 "term_errors.m"
    MR_Word transform_hlds__term_errors__Context_11;
#line 264 "term_errors.m"
    MR_Word transform_hlds__term_errors__Pieces1_13;
#line 264 "term_errors.m"
    MR_Word transform_hlds__term_errors__Single_14;
#line 271 "term_errors.m"
    MR_Word transform_hlds__term_errors__PPId_12;
#line 267 "term_errors.m"
    MR_Word transform_hlds__term_errors__V_24_24;

#line 265 "term_errors.m"
    {
#line 265 "term_errors.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_errors__Module_8, &transform_hlds__term_errors__Globals_10);
    }
#line 266 "term_errors.m"
    {
#line 266 "term_errors.m"
      transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__term_errors__SCC_6, transform_hlds__term_errors__Module_8, &transform_hlds__term_errors__Context_11);
    }
#line 267 "term_errors.m"
    transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__SCC_6)) == (MR_mktag((MR_Integer) 1)));
#line 267 "term_errors.m"
    if (transform_hlds__term_errors__succeeded)
#line 267 "term_errors.m"
      {
#line 267 "term_errors.m"
        transform_hlds__term_errors__PPId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__SCC_6, (MR_Integer) 0)));
#line 267 "term_errors.m"
        transform_hlds__term_errors__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__SCC_6, (MR_Integer) 1)));
#line 267 "term_errors.m"
        transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 267 "term_errors.m"
      }
#line 271 "term_errors.m"
    if (transform_hlds__term_errors__succeeded)
#line 269 "term_errors.m"
      {
#line 269 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_29_29;

#line 269 "term_errors.m"
        {
#line 269 "term_errors.m"
          transform_hlds__term_errors__V_29_29 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__Module_8, (MR_Integer) 0, transform_hlds__term_errors__PPId_12);
        }
#line 268 "term_errors.m"
        {
#line 268 "term_errors.m"
          transform_hlds__term_errors__Pieces1_13 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[74]), transform_hlds__term_errors__V_29_29);
        }
#line 270 "term_errors.m"
        {
#line 270 "term_errors.m"
          transform_hlds__term_errors__Single_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 270 "term_errors.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_14, 0) = ((MR_Box) (transform_hlds__term_errors__PPId_12));
#line 270 "term_errors.m"
        }
#line 269 "term_errors.m"
      }
#line 271 "term_errors.m"
    else
#line 274 "term_errors.m"
      {
#line 274 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_38_38;

#line 274 "term_errors.m"
        {
#line 274 "term_errors.m"
          transform_hlds__term_errors__V_38_38 = hlds__hlds_error_util__describe_several_proc_names_3_f_0(transform_hlds__term_errors__Module_8, (MR_Integer) 0, transform_hlds__term_errors__SCC_6);
        }
#line 273 "term_errors.m"
        {
#line 273 "term_errors.m"
          transform_hlds__term_errors__Pieces1_13 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12]), transform_hlds__term_errors__V_38_38);
        }
#line 275 "term_errors.m"
        transform_hlds__term_errors__Single_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 274 "term_errors.m"
      }
#line 281 "term_errors.m"
    if ((transform_hlds__term_errors__Errors_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 279 "term_errors.m"
      {
#line 280 "term_errors.m"
        {
#line 280 "term_errors.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.report_arg_size_errors\'/5", (MR_String) "empty list of errors");
#line 280 "term_errors.m"
          return;
        }
#line 279 "term_errors.m"
      }
#line 281 "term_errors.m"
    else
#line 281 "term_errors.m"
      {
#line 281 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_7, (MR_Integer) 1)));
#line 281 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_7, (MR_Integer) 0)));

#line 281 "term_errors.m"
        if ((transform_hlds__term_errors__V_70_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 282 "term_errors.m"
          {
#line 282 "term_errors.m"
            MR_Word transform_hlds__term_errors__Pieces_18;

#line 284 "term_errors.m"
            {
#line 284 "term_errors.m"
              mercury__list__append_3_p_1((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Pieces1_13, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[78]), &transform_hlds__term_errors__Pieces_18);
            }
#line 285 "term_errors.m"
            {
#line 285 "term_errors.m"
              parse_tree__error_util__write_error_pieces_6_p_0(transform_hlds__term_errors__Globals_10, transform_hlds__term_errors__Context_11, (MR_Integer) 0, transform_hlds__term_errors__Pieces_18);
            }
#line 286 "term_errors.m"
            {
#line 286 "term_errors.m"
              transform_hlds__term_errors__output_term_error_7_p_0(transform_hlds__term_errors__V_71_71, transform_hlds__term_errors__Single_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, transform_hlds__term_errors__Module_8);
#line 286 "term_errors.m"
              return;
            }
#line 282 "term_errors.m"
          }
#line 281 "term_errors.m"
        else
#line 288 "term_errors.m"
          {
#line 288 "term_errors.m"
            MR_Word transform_hlds__term_errors__Pieces_65;
#line 288 "term_errors.m"
            MR_Word transform_hlds__term_errors__Error_79;
#line 288 "term_errors.m"
            MR_Word transform_hlds__term_errors__Errors_80;

#line 290 "term_errors.m"
            {
#line 290 "term_errors.m"
              mercury__list__append_3_p_1((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Pieces1_13, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[81]), &transform_hlds__term_errors__Pieces_65);
            }
#line 291 "term_errors.m"
            {
#line 291 "term_errors.m"
              parse_tree__error_util__write_error_pieces_6_p_0(transform_hlds__term_errors__Globals_10, transform_hlds__term_errors__Context_11, (MR_Integer) 0, transform_hlds__term_errors__Pieces_65);
            }
#line 300 "term_errors.m"
            transform_hlds__term_errors__Error_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_7, (MR_Integer) 0)));
#line 300 "term_errors.m"
            transform_hlds__term_errors__Errors_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_7, (MR_Integer) 1)));
#line 301 "term_errors.m"
            {
#line 301 "term_errors.m"
              transform_hlds__term_errors__output_term_error_7_p_0(transform_hlds__term_errors__Error_79, transform_hlds__term_errors__Single_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_3[0]), (MR_Integer) 0, transform_hlds__term_errors__Module_8);
            }
#line 302 "term_errors.m"
            {
#line 302 "term_errors.m"
              transform_hlds__term_errors__output_term_errors_7_p_0(transform_hlds__term_errors__Errors_80, transform_hlds__term_errors__Single_14, (MR_Integer) 2, (MR_Integer) 0, transform_hlds__term_errors__Module_8);
#line 302 "term_errors.m"
              return;
            }
#line 288 "term_errors.m"
          }
#line 281 "term_errors.m"
      }
#line 264 "term_errors.m"
  }
#line 260 "term_errors.m"
}

#line 160 "term_errors.m"
MR_Word MR_CALL 
transform_hlds__term_errors__is_fatal_error_1_f_0(
#line 160 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__1_1)
#line 160 "term_errors.m"
{
#line 205 "term_errors.m"
  {
#line 205 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 205 "term_errors.m"
    MR_Word transform_hlds__term_errors__HeadVar__2_2;

#line 205 "term_errors.m"
    if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 205 "term_errors.m"
      transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 1;
#line 205 "term_errors.m"
    else
#line 205 "term_errors.m"
      if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 207 "term_errors.m"
        transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 1;
#line 205 "term_errors.m"
      else
#line 205 "term_errors.m"
        if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 222 "term_errors.m"
          transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 205 "term_errors.m"
        else
#line 205 "term_errors.m"
          if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 208 "term_errors.m"
            transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 1;
#line 205 "term_errors.m"
          else
#line 205 "term_errors.m"
            if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 218 "term_errors.m"
              transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 205 "term_errors.m"
            else
#line 205 "term_errors.m"
              if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 209 "term_errors.m"
                transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 205 "term_errors.m"
              else
#line 205 "term_errors.m"
                if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 220 "term_errors.m"
                  transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 205 "term_errors.m"
                else
#line 205 "term_errors.m"
                  if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 221 "term_errors.m"
                    transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 205 "term_errors.m"
                  else
#line 205 "term_errors.m"
                    if (((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 210 "term_errors.m"
                      transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 205 "term_errors.m"
                    else
#line 205 "term_errors.m"
                      if (((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 206 "term_errors.m"
                        transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 1;
#line 205 "term_errors.m"
                      else
#line 205 "term_errors.m"
                        if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 212 "term_errors.m"
                          transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 205 "term_errors.m"
                        else
#line 205 "term_errors.m"
                          if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 213 "term_errors.m"
                            transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 205 "term_errors.m"
                          else
#line 205 "term_errors.m"
                            if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 211 "term_errors.m"
                              transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 205 "term_errors.m"
                            else
#line 205 "term_errors.m"
                              if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 214 "term_errors.m"
                                transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 205 "term_errors.m"
                              else
#line 205 "term_errors.m"
                                if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 215 "term_errors.m"
                                  transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 205 "term_errors.m"
                                else
#line 205 "term_errors.m"
                                  if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 216 "term_errors.m"
                                    transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 205 "term_errors.m"
                                  else
#line 205 "term_errors.m"
                                    if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 217 "term_errors.m"
                                      transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 205 "term_errors.m"
                                    else
#line 219 "term_errors.m"
                                      transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 205 "term_errors.m"
    return transform_hlds__term_errors__HeadVar__2_2;
#line 205 "term_errors.m"
  }
#line 160 "term_errors.m"
}

#line 156 "term_errors.m"
MR_Word MR_CALL 
transform_hlds__term_errors__is_indirect_error_1_f_0(
#line 156 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__1_1)
#line 156 "term_errors.m"
{
#line 186 "term_errors.m"
  {
#line 186 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 186 "term_errors.m"
    MR_Word transform_hlds__term_errors__HeadVar__2_2;

#line 186 "term_errors.m"
    if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 186 "term_errors.m"
      transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 1;
#line 186 "term_errors.m"
    else
#line 186 "term_errors.m"
      if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 189 "term_errors.m"
        transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 1;
#line 186 "term_errors.m"
      else
#line 186 "term_errors.m"
        if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 203 "term_errors.m"
          transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 186 "term_errors.m"
        else
#line 186 "term_errors.m"
          if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 187 "term_errors.m"
            transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 1;
#line 186 "term_errors.m"
          else
#line 186 "term_errors.m"
            if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 199 "term_errors.m"
              transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 186 "term_errors.m"
            else
#line 186 "term_errors.m"
              if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 188 "term_errors.m"
                transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 1;
#line 186 "term_errors.m"
              else
#line 186 "term_errors.m"
                if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 201 "term_errors.m"
                  transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 186 "term_errors.m"
                else
#line 186 "term_errors.m"
                  if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 202 "term_errors.m"
                    transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 186 "term_errors.m"
                  else
#line 186 "term_errors.m"
                    if (((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 190 "term_errors.m"
                      transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 1;
#line 186 "term_errors.m"
                    else
#line 186 "term_errors.m"
                      if (((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 191 "term_errors.m"
                        transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 1;
#line 186 "term_errors.m"
                      else
#line 186 "term_errors.m"
                        if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 193 "term_errors.m"
                          transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 186 "term_errors.m"
                        else
#line 186 "term_errors.m"
                          if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 194 "term_errors.m"
                            transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 186 "term_errors.m"
                          else
#line 186 "term_errors.m"
                            if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 192 "term_errors.m"
                              transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 1;
#line 186 "term_errors.m"
                            else
#line 186 "term_errors.m"
                              if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 195 "term_errors.m"
                                transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 186 "term_errors.m"
                              else
#line 186 "term_errors.m"
                                if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 196 "term_errors.m"
                                  transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 186 "term_errors.m"
                                else
#line 186 "term_errors.m"
                                  if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 197 "term_errors.m"
                                    transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 186 "term_errors.m"
                                  else
#line 186 "term_errors.m"
                                    if (((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 198 "term_errors.m"
                                      transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 186 "term_errors.m"
                                    else
#line 200 "term_errors.m"
                                      transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 186 "term_errors.m"
    return transform_hlds__term_errors__HeadVar__2_2;
#line 186 "term_errors.m"
  }
#line 156 "term_errors.m"
}

#line 145 "term_errors.m"
void MR_CALL 
transform_hlds__term_errors__report_term_errors_5_p_0(
#line 145 "term_errors.m"
  MR_Word transform_hlds__term_errors__SCC_6,
#line 145 "term_errors.m"
  MR_Word transform_hlds__term_errors__Errors_7,
#line 145 "term_errors.m"
  MR_Word transform_hlds__term_errors__Module_8)
#line 145 "term_errors.m"
{
#line 226 "term_errors.m"
  {
#line 226 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 226 "term_errors.m"
    MR_Word transform_hlds__term_errors__Globals_10;
#line 226 "term_errors.m"
    MR_Word transform_hlds__term_errors__Context_11;
#line 226 "term_errors.m"
    MR_Word transform_hlds__term_errors__Pieces1_13;
#line 226 "term_errors.m"
    MR_Word transform_hlds__term_errors__Single_14;
#line 233 "term_errors.m"
    MR_Word transform_hlds__term_errors__PPId_12;
#line 229 "term_errors.m"
    MR_Word transform_hlds__term_errors__V_23_23;

#line 227 "term_errors.m"
    {
#line 227 "term_errors.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_errors__Module_8, &transform_hlds__term_errors__Globals_10);
    }
#line 228 "term_errors.m"
    {
#line 228 "term_errors.m"
      transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__term_errors__SCC_6, transform_hlds__term_errors__Module_8, &transform_hlds__term_errors__Context_11);
    }
#line 229 "term_errors.m"
    transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__SCC_6)) == (MR_mktag((MR_Integer) 1)));
#line 229 "term_errors.m"
    if (transform_hlds__term_errors__succeeded)
#line 229 "term_errors.m"
      {
#line 229 "term_errors.m"
        transform_hlds__term_errors__PPId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__SCC_6, (MR_Integer) 0)));
#line 229 "term_errors.m"
        transform_hlds__term_errors__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__SCC_6, (MR_Integer) 1)));
#line 229 "term_errors.m"
        transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 229 "term_errors.m"
      }
#line 233 "term_errors.m"
    if (transform_hlds__term_errors__succeeded)
#line 231 "term_errors.m"
      {
#line 231 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_28_28;

#line 231 "term_errors.m"
        {
#line 231 "term_errors.m"
          transform_hlds__term_errors__V_28_28 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__Module_8, (MR_Integer) 0, transform_hlds__term_errors__PPId_12);
        }
#line 230 "term_errors.m"
        {
#line 230 "term_errors.m"
          transform_hlds__term_errors__Pieces1_13 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[66]), transform_hlds__term_errors__V_28_28);
        }
#line 232 "term_errors.m"
        {
#line 232 "term_errors.m"
          transform_hlds__term_errors__Single_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 232 "term_errors.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_14, 0) = ((MR_Box) (transform_hlds__term_errors__PPId_12));
#line 232 "term_errors.m"
        }
#line 231 "term_errors.m"
      }
#line 233 "term_errors.m"
    else
#line 236 "term_errors.m"
      {
#line 236 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_37_37;

#line 236 "term_errors.m"
        {
#line 236 "term_errors.m"
          transform_hlds__term_errors__V_37_37 = hlds__hlds_error_util__describe_several_proc_names_3_f_0(transform_hlds__term_errors__Module_8, (MR_Integer) 0, transform_hlds__term_errors__SCC_6);
        }
#line 235 "term_errors.m"
        {
#line 235 "term_errors.m"
          transform_hlds__term_errors__Pieces1_13 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[8]), transform_hlds__term_errors__V_37_37);
        }
#line 237 "term_errors.m"
        transform_hlds__term_errors__Single_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 236 "term_errors.m"
      }
#line 246 "term_errors.m"
    if ((transform_hlds__term_errors__Errors_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 240 "term_errors.m"
      {
#line 240 "term_errors.m"
        MR_Word transform_hlds__term_errors__Pieces_16;

#line 244 "term_errors.m"
        {
#line 244 "term_errors.m"
          mercury__list__append_3_p_1((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Pieces1_13, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[68]), &transform_hlds__term_errors__Pieces_16);
        }
#line 245 "term_errors.m"
        {
#line 245 "term_errors.m"
          parse_tree__error_util__write_error_pieces_6_p_0(transform_hlds__term_errors__Globals_10, transform_hlds__term_errors__Context_11, (MR_Integer) 0, transform_hlds__term_errors__Pieces_16);
#line 245 "term_errors.m"
          return;
        }
#line 240 "term_errors.m"
      }
#line 246 "term_errors.m"
    else
#line 246 "term_errors.m"
      {
#line 246 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_7, (MR_Integer) 1)));
#line 246 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_7, (MR_Integer) 0)));

#line 246 "term_errors.m"
        if ((transform_hlds__term_errors__V_71_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 247 "term_errors.m"
          {
#line 247 "term_errors.m"
            MR_Word transform_hlds__term_errors__Pieces_63;

#line 249 "term_errors.m"
            {
#line 249 "term_errors.m"
              mercury__list__append_3_p_1((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Pieces1_13, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[70]), &transform_hlds__term_errors__Pieces_63);
            }
#line 250 "term_errors.m"
            {
#line 250 "term_errors.m"
              parse_tree__error_util__write_error_pieces_6_p_0(transform_hlds__term_errors__Globals_10, transform_hlds__term_errors__Context_11, (MR_Integer) 0, transform_hlds__term_errors__Pieces_63);
            }
#line 251 "term_errors.m"
            {
#line 251 "term_errors.m"
              transform_hlds__term_errors__output_term_error_7_p_0(transform_hlds__term_errors__V_72_72, transform_hlds__term_errors__Single_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, transform_hlds__term_errors__Module_8);
#line 251 "term_errors.m"
              return;
            }
#line 247 "term_errors.m"
          }
#line 246 "term_errors.m"
        else
#line 253 "term_errors.m"
          {
#line 253 "term_errors.m"
            MR_Word transform_hlds__term_errors__Pieces_65;
#line 253 "term_errors.m"
            MR_Word transform_hlds__term_errors__Error_80;
#line 253 "term_errors.m"
            MR_Word transform_hlds__term_errors__Errors_81;

#line 255 "term_errors.m"
            {
#line 255 "term_errors.m"
              mercury__list__append_3_p_1((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Pieces1_13, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[72]), &transform_hlds__term_errors__Pieces_65);
            }
#line 256 "term_errors.m"
            {
#line 256 "term_errors.m"
              parse_tree__error_util__write_error_pieces_6_p_0(transform_hlds__term_errors__Globals_10, transform_hlds__term_errors__Context_11, (MR_Integer) 0, transform_hlds__term_errors__Pieces_65);
            }
#line 300 "term_errors.m"
            transform_hlds__term_errors__Error_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_7, (MR_Integer) 0)));
#line 300 "term_errors.m"
            transform_hlds__term_errors__Errors_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_7, (MR_Integer) 1)));
#line 301 "term_errors.m"
            {
#line 301 "term_errors.m"
              transform_hlds__term_errors__output_term_error_7_p_0(transform_hlds__term_errors__Error_80, transform_hlds__term_errors__Single_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_3[0]), (MR_Integer) 0, transform_hlds__term_errors__Module_8);
            }
#line 302 "term_errors.m"
            {
#line 302 "term_errors.m"
              transform_hlds__term_errors__output_term_errors_7_p_0(transform_hlds__term_errors__Errors_81, transform_hlds__term_errors__Single_14, (MR_Integer) 2, (MR_Integer) 0, transform_hlds__term_errors__Module_8);
#line 302 "term_errors.m"
              return;
            }
#line 253 "term_errors.m"
          }
#line 246 "term_errors.m"
      }
#line 226 "term_errors.m"
  }
#line 145 "term_errors.m"
}

void mercury__transform_hlds__term_errors__init(void)
{
}

void mercury__transform_hlds__term_errors__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_0);
	MR_register_type_ctor_info(&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0);
	MR_register_type_ctor_info(&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_contexts_0);
}

void mercury__transform_hlds__term_errors__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.term_errors. */
