/*
** Automatically generated from `mode_robdd.implications.m'
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


/* :- module mode_robdd.implications. */
/* :- implementation. */

/*
INIT mercury__mode_robdd__implications__init
ENDINIT
*/

#include "mode_robdd.implications.mih"


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
#include "mode_robdd.equiv_vars.mih"
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
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 292 "mode_robdd.implications.m"
struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s {
#line 292 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_for_T_11;
#line 292 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__EQVars_4;
#line 295 "mode_robdd.implications.m"
  MR_bool mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded;
#line 295 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__ImpMap_7;
#line 297 "mode_robdd.implications.m"
  jmp_buf mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__commit_0;
#line 297 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_13_13;
#line 297 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__BaseTypeClassInfo_for_enum_16;
#line 297 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeClassInfo_for_enum_17;
#line 297 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__VA_8;
#line 297 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__VB_9;
#line 297 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__Vs_10;
#line 300 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv1_VA_8;
#line 300 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv0_Vs_10;
#line 300 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv2_VB_9;
#line 292 "mode_robdd.implications.m"
};


#line 173 "mode_robdd.implications.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__term__pti_var_1__pseudo_1;

#line 176 "mode_robdd.implications.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__robdd__pti_literal_1__pseudo_1;

#line 179 "mode_robdd.implications.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1;

#line 182 "mode_robdd.implications.c"
static const MR_FA_PseudoTypeInfo_Struct2 mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1;

#line 185 "mode_robdd.implications.c"
static const MR_VA_PseudoTypeInfo_Struct1 mode_robdd__implications____vpti_pred_1__pseudo_term__pti_var_1__pseudo_1;

#line 188 "mode_robdd.implications.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__robdd__pti_imp_vars_1__pseudo_1;

#line 191 "mode_robdd.implications.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__robdd__pti_equiv_vars_1__pseudo_1;

#line 194 "mode_robdd.implications.c"
static const MR_VA_PseudoTypeInfo_Struct4 mode_robdd__implications____vpti_tuple_4__plain_bool__type_ctor_info_bool_0__pseudo_robdd__pti_equiv_vars_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1;

#line 197 "mode_robdd.implications.c"
static const MR_VA_PseudoTypeInfo_Struct4 mode_robdd__implications____vpti_tuple_4__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__plain_bool__type_ctor_info_bool_0;

#line 200 "mode_robdd.implications.c"
static const MR_VA_PseudoTypeInfo_Struct2 mode_robdd__implications____vpti_tuple_2__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__plain_bool__type_ctor_info_bool_0;

#line 203 "mode_robdd.implications.c"
static const MR_VA_PseudoTypeInfo_Struct2 mode_robdd__implications____vpti_tuple_2__pseudo_robdd__pti_literal_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1;

#line 206 "mode_robdd.implications.c"
static const MR_VA_PseudoTypeInfo_Struct2 mode_robdd__implications____vpti_func_2__pseudo_term__pti_var_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1;

#line 209 "mode_robdd.implications.c"
static const MR_EnumFunctorDesc mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_0;

#line 212 "mode_robdd.implications.c"
static const MR_EnumFunctorDesc mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_1;

#line 215 "mode_robdd.implications.c"
static const MR_EnumFunctorDescPtr mode_robdd__implications__mode_robdd__implications__enum_value_ordered_extract_0[2];

#line 218 "mode_robdd.implications.c"
static const MR_EnumFunctorDescPtr mode_robdd__implications__mode_robdd__implications__enum_name_ordered_extract_0[2];

#line 221 "mode_robdd.implications.c"
static const MR_Integer mode_robdd__implications__mode_robdd__implications__functor_number_map_extract_0[2];

#line 224 "mode_robdd.implications.c"
static MR_bool MR_CALL 
mode_robdd__implications____Unify____bin_clause_1_0_10001(
#line 227 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 229 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 231 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_3);

#line 234 "mode_robdd.implications.c"
static void MR_CALL 
mode_robdd__implications____Compare____bin_clause_1_0_10001(
#line 237 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 239 "mode_robdd.implications.c"
  MR_Box * mode_robdd__implications__wrapper_arg_2,
#line 241 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_3,
#line 243 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_4);

#line 246 "mode_robdd.implications.c"
static MR_bool MR_CALL 
mode_robdd__implications____Unify____extract_0_0_10001(
#line 249 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 251 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_2);

#line 254 "mode_robdd.implications.c"
static void MR_CALL 
mode_robdd__implications____Compare____extract_0_0_10001(
#line 257 "mode_robdd.implications.c"
  MR_Box * mode_robdd__implications__wrapper_arg_1,
#line 259 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 261 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_3);

#line 264 "mode_robdd.implications.c"
static MR_bool MR_CALL 
mode_robdd__implications____Unify____mklit_1_0_10001(
#line 267 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 269 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 271 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_3);

#line 274 "mode_robdd.implications.c"
static void MR_CALL 
mode_robdd__implications____Compare____mklit_1_0_10001(
#line 277 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 279 "mode_robdd.implications.c"
  MR_Box * mode_robdd__implications__wrapper_arg_2,
#line 281 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_3,
#line 283 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_4);

#line 587 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__586__1_6_f_0_1(
#line 587 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 587 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 587 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2);

#line 586 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__586__1_6_f_0(
#line 586 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_32,
#line 586 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__MkLitA_6,
#line 586 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__MkLitB_7,
#line 586 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_16,
#line 586 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__2_17,
#line 586 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__3_18);

#line 587 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__587__1_6_f_0(
#line 587 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_32,
#line 587 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__MkLitA_6,
#line 587 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__MkLitB_7,
#line 587 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_16,
#line 587 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_21,
#line 587 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__2_22);

#line 565 "mode_robdd.implications.m"
static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__get_resolvents_2__565__1_3_f_0(
#line 565 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_15,
#line 565 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LitB_6,
#line 565 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_12);

#line 477 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__477__1_5_f_0(
#line 477 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
#line 477 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Var_4,
#line 477 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_11,
#line 477 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__2_12,
#line 477 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__3_13);

#line 466 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__466__1_4_f_0(
#line 466 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_16,
#line 466 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_8,
#line 466 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__2_9,
#line 466 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__3_10);

#line 454 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__imp_map_difference__454__1_4_f_0(
#line 454 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
#line 454 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_11,
#line 454 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__2_12,
#line 454 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__3_13);

#line 446 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__intersect__446__1_3_f_0(
#line 446 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_8,
#line 446 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_13,
#line 446 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_14);

#line 289 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_f_0_1(
#line 289 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 289 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 287 "mode_robdd.implications.m"
static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_f_0(
#line 287 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_30,
#line 287 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__EQVars_5,
#line 287 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_16,
#line 287 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__2_17,
#line 287 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__LambdaHeadVar__3_18);

#line 262 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__normalise_pairs__262__1_3_f_0(
#line 262 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
#line 262 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_35,
#line 262 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_36);

#line 199 "mode_robdd.implications.m"
static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__199__1_5_f_0(
#line 199 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_46,
#line 199 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IsDisImp_9,
#line 199 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_32,
#line 199 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__2_33,
#line 199 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__LambdaHeadVar__3_34);

#line 122 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__filter_imp_map__122__1_5_f_0(
#line 122 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
#line 122 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__P_4,
#line 122 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_10,
#line 122 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__2_11,
#line 122 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__3_12);

#line 362 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_equalities_to_imp_vars__362__1_4_f_0(
#line 362 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
#line 362 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_10,
#line 362 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__2_11,
#line 362 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__3_12);

#line 317 "mode_robdd.implications.m"
static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_f_0(
#line 317 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_46,
#line 317 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_31,
#line 317 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__2_32,
#line 317 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__LambdaHeadVar__3_33);

#line 100 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__restrict_threshold__100__1_3_f_0(
#line 100 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_13,
#line 100 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Threshold_4,
#line 100 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_8);

#line 509 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications____Compare____mklit_1_0(
#line 509 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_6,
#line 509 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__HeadVar__1_1,
#line 509 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_2,
#line 509 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_3);

#line 509 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications____Unify____mklit_1_0(
#line 509 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_5,
#line 509 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__1_1,
#line 509 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_2);

#line 244 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications____Compare____extract_0_0(
#line 244 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__HeadVar__1_1,
#line 244 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_2,
#line 244 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_3);

#line 244 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications____Unify____extract_0_0(
#line 244 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_1,
#line 244 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_2);

#line 519 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications____Compare____bin_clause_1_0(
#line 519 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_6,
#line 519 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__HeadVar__1_1,
#line 519 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__2_2,
#line 519 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__3_3);

#line 519 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications____Unify____bin_clause_1_0(
#line 519 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_5,
#line 519 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__1_1,
#line 519 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__2_2);

#line 586 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__add_imp_map_clauses_4_f_0_1(
#line 586 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 586 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 586 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 586 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3);

#line 582 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__add_imp_map_clauses_4_f_0(
#line 582 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_32,
#line 582 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__MkLitA_6,
#line 582 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__MkLitB_7,
#line 582 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IM_8,
#line 582 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_9);

#line 571 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__get_literals_2_f_0_2(
#line 571 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 571 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 570 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__get_literals_2_f_0_1(
#line 570 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 570 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 567 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__get_literals_2_f_0(
#line 567 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_32,
#line 567 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LitA_4,
#line 567 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_5);

#line 565 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__get_resolvents_2_3_f_0_1(
#line 565 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 565 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 560 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__get_resolvents_2_3_f_0(
#line 560 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_15,
#line 560 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LitA_5,
#line 560 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LitB_6,
#line 560 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_7);

#line 554 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__get_resolvents_2_f_0(
#line 554 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_9,
#line 554 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__1_1,
#line 554 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_6);

#line 539 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications__add_clause_2_2_f_0(
#line 539 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_100,
#line 539 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__1_1,
#line 539 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_2,
#line 539 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__HeadVar__3_3);

#line 526 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__add_clauses_2_f_0(
#line 526 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_12,
#line 526 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__1_1,
#line 526 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_2);

#line 521 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__add_clause_2_f_0(
#line 521 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_8,
#line 521 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__Clause_4,
#line 521 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_5);

#line 515 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__mkneg_1_f_0(
#line 515 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_4,
#line 515 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__V_3);

#line 511 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__mkpos_1_f_0(
#line 511 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_4,
#line 511 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__V_3);

#line 477 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__delete_var_from_imp_map_2_f_0_1(
#line 477 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 477 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 477 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 477 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3);

#line 474 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__delete_var_from_imp_map_2_f_0(
#line 474 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
#line 474 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Var_4,
#line 474 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IM0_5);

#line 466 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__remove_empty_sets_1_f_0_1(
#line 466 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 466 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 466 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 466 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3);

#line 463 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__remove_empty_sets_1_f_0(
#line 463 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_16,
#line 463 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IM_3);

#line 454 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__imp_map_difference_2_f_0_1(
#line 454 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 454 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 454 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 454 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3);

#line 448 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__imp_map_difference_2_f_0(
#line 448 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
#line 448 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IMA_4,
#line 448 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IMB_5);

#line 446 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__intersect_2_f_0_1(
#line 446 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 446 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 446 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2);

#line 444 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__intersect_2_f_0(
#line 444 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_8,
#line 444 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IMA_4,
#line 444 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IMB_5);

#line 432 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__apply_to_coresp_imp_maps_3_f_0(
#line 432 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_21,
#line 432 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__F_5,
#line 432 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVarsA_6,
#line 432 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVarsB_7);

#line 425 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__apply_to_imp_maps_2_f_0(
#line 425 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_15,
#line 425 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__F_4,
#line 425 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars0_5);

#line 415 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications__empty_1_p_0(
#line 415 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_6,
#line 415 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__1_1);

#line 395 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(
#line 395 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_12,
#line 395 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__VA_5,
#line 395 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__M0_6,
#line 395 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__VB_7,
#line 395 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__M_8);

#line 377 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(
#line 377 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_8,
#line 377 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__V_5,
#line 377 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__M_6,
#line 377 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Vs_7);

#line 368 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__entry_2_f_0(
#line 368 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_7,
#line 368 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__V_4,
#line 368 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__M_5);

#line 297 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_1(
#line 297 "mode_robdd.implications.m"
  void * mode_robdd__implications__env_ptr_arg);

#line 300 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_3(
#line 300 "mode_robdd.implications.m"
  void * mode_robdd__implications__env_ptr_arg);

#line 300 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_5(
#line 300 "mode_robdd.implications.m"
  void * mode_robdd__implications__env_ptr_arg);

#line 297 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_4(
#line 297 "mode_robdd.implications.m"
  void * mode_robdd__implications__env_ptr_arg);

#line 297 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_2(
#line 297 "mode_robdd.implications.m"
  void * mode_robdd__implications__env_ptr_arg);

#line 297 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_6(
#line 297 "mode_robdd.implications.m"
  void * mode_robdd__implications__env_ptr_arg);

#line 292 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0(
#line 292 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_11,
#line 292 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__EQVars_4,
#line 292 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__DisImps_5,
#line 292 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__RevDisImps_6);

#line 287 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0_1(
#line 287 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 287 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 287 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 287 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3);

#line 283 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0(
#line 283 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_30,
#line 283 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__EQVars_5,
#line 283 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__Changed_6,
#line 283 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpMap0_7,
#line 283 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__ImpMap_8);

#line 262 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__normalise_pairs_6_p_0_1(
#line 262 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 262 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 262 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2);

#line 246 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__normalise_pairs_6_p_0(
#line 246 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
#line 246 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Extract_7,
#line 246 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Imps_8,
#line 246 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__DisImps_9,
#line 246 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__Changed_10,
#line 246 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__FalseVars0_11,
#line 246 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__FalseVars_12);

#line 199 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__normalise_true_false_imp_map_8_p_0_1(
#line 199 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 199 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 199 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 199 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3);

#line 193 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__normalise_true_false_imp_map_8_p_0(
#line 193 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_46,
#line 193 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IsDisImp_9,
#line 193 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__Changed_10,
#line 193 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TrueVars0_11,
#line 193 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__TrueVars_12,
#line 193 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__FalseVars0_13,
#line 193 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__FalseVars_14,
#line 193 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpMap0_15,
#line 193 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__ImpMap_16);

#line 122 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__filter_imp_map_2_f_0_1(
#line 122 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 122 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 122 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 122 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3);

#line 119 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__filter_imp_map_2_f_0(
#line 119 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
#line 119 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__P_4,
#line 119 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IM_5);

#line 104 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__restrict_threshold_2_3_f_0(
#line 104 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_16,
#line 104 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__1_1,
#line 104 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_2,
#line 104 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IM_3);

#line 362 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__add_equalities_to_imp_vars_2_f_0_1(
#line 362 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 362 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 362 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 362 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3);

#line 317 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__propagate_implications_into_equivalences_5_p_0_1(
#line 317 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 317 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 317 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 317 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3);

#line 138 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__at_most_one_of_2_f_0_1(
#line 138 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 138 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 138 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2);

#line 116 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__filter_2_f_0_1(
#line 116 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 116 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 100 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__restrict_threshold_2_f_0_1(
#line 100 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 100 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 96 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__delete_2_f_0_1(
#line 96 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 96 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 93 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__difference_2_f_0_1(
#line 93 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 93 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 93 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2);

#line 90 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_plus_2_f_0_1(
#line 90 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 90 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 90 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2);

#line 87 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_8(
#line 87 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 87 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 87 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_7(
#line 87 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 87 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 86 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_6(
#line 86 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 86 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 86 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_5(
#line 86 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 86 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 85 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_4(
#line 85 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 85 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 85 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_3(
#line 85 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 85 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 84 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_2(
#line 84 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 84 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 84 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_1(
#line 84 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 84 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);


static /* final */ const MR_Integer mode_robdd__implications_scalar_common_1[1][2];

static /* final */ const MR_Box mode_robdd__implications_scalar_common_2[1][6];

static /* final */ const MR_Box mode_robdd__implications_scalar_common_3[6][7];

static /* final */ const MR_Box mode_robdd__implications_scalar_common_4[3][8];

static /* final */ const MR_Box mode_robdd__implications_scalar_common_5[4][9];

static /* final */ const MR_Box mode_robdd__implications_scalar_common_6[2][10];




static /* final */ const MR_Integer mode_robdd__implications_scalar_common_1[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mode_robdd__implications_scalar_common_2[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_literal_1__pseudo_1))
  },
};

static /* final */ const MR_Box mode_robdd__implications_scalar_common_3[6][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications____vpti_pred_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_literal_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_literal_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications____vpti_tuple_2__pseudo_robdd__pti_literal_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_equiv_vars_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1))
  },
};

static /* final */ const MR_Box mode_robdd__implications_scalar_common_4[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_imp_vars_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_imp_vars_1__pseudo_1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications____vpti_tuple_4__plain_bool__type_ctor_info_bool_0__pseudo_robdd__pti_equiv_vars_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications____vpti_tuple_4__plain_bool__type_ctor_info_bool_0__pseudo_robdd__pti_equiv_vars_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
};

static /* final */ const MR_Box mode_robdd__implications_scalar_common_5[4][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications____vpti_pred_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications____vpti_tuple_4__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mode_robdd__implications____vpti_tuple_4__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__plain_bool__type_ctor_info_bool_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_equiv_vars_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications____vpti_tuple_2__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mode_robdd__implications____vpti_tuple_2__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__plain_bool__type_ctor_info_bool_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1))
  },
};

static /* final */ const MR_Box mode_robdd__implications_scalar_common_6[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications____vpti_func_2__pseudo_term__pti_var_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications____vpti_func_2__pseudo_term__pti_var_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_imp_vars_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_imp_vars_1__pseudo_1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__implications_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__implications____vpti_func_2__pseudo_term__pti_var_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications____vpti_func_2__pseudo_term__pti_var_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_imp_vars_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__implications__robdd__pti_imp_vars_1__pseudo_1))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1358 "mode_robdd.implications.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1366 "mode_robdd.implications.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__robdd__pti_literal_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_literal_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1374 "mode_robdd.implications.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &mode_robdd__implications__term__pti_var_1__pseudo_1
  }
};

#line 1382 "mode_robdd.implications.c"
static const MR_FA_PseudoTypeInfo_Struct2 mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mode_robdd__implications__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1
  }
};

#line 1391 "mode_robdd.implications.c"
static const MR_VA_PseudoTypeInfo_Struct1 mode_robdd__implications____vpti_pred_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &mode_robdd__implications__term__pti_var_1__pseudo_1
  }
};

#line 1400 "mode_robdd.implications.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__robdd__pti_imp_vars_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_imp_vars_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1408 "mode_robdd.implications.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__robdd__pti_equiv_vars_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_equiv_vars_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1416 "mode_robdd.implications.c"
static const MR_VA_PseudoTypeInfo_Struct4 mode_robdd__implications____vpti_tuple_4__plain_bool__type_ctor_info_bool_0__pseudo_robdd__pti_equiv_vars_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &mode_robdd__implications__robdd__pti_equiv_vars_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1
  }
};

#line 1428 "mode_robdd.implications.c"
static const MR_VA_PseudoTypeInfo_Struct4 mode_robdd__implications____vpti_tuple_4__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__plain_bool__type_ctor_info_bool_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) &mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 1440 "mode_robdd.implications.c"
static const MR_VA_PseudoTypeInfo_Struct2 mode_robdd__implications____vpti_tuple_2__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__plain_bool__type_ctor_info_bool_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 1450 "mode_robdd.implications.c"
static const MR_VA_PseudoTypeInfo_Struct2 mode_robdd__implications____vpti_tuple_2__pseudo_robdd__pti_literal_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mode_robdd__implications__robdd__pti_literal_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__implications__robdd__pti_literal_1__pseudo_1
  }
};

#line 1460 "mode_robdd.implications.c"
static const MR_VA_PseudoTypeInfo_Struct2 mode_robdd__implications____vpti_func_2__pseudo_term__pti_var_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mode_robdd__implications__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__implications__robdd__pti_literal_1__pseudo_1
  }
};

#line 1470 "mode_robdd.implications.c"
const MR_TypeCtorInfo_Struct mode_robdd__implications__mode_robdd__implications__type_ctor_info_bin_clause_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mode_robdd__implications____Unify____bin_clause_1_0_10001)),
  ((MR_Box) (mode_robdd__implications____Compare____bin_clause_1_0_10001)),
  (MR_String) "mode_robdd.implications",
  (MR_String) "bin_clause",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mode_robdd__implications____vpti_tuple_2__pseudo_robdd__pti_literal_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1487 "mode_robdd.implications.c"
static const MR_EnumFunctorDesc mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_0 = {
  (MR_String) "keys",
  (MR_Integer) 0
};

#line 1493 "mode_robdd.implications.c"
static const MR_EnumFunctorDesc mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_1 = {
  (MR_String) "values",
  (MR_Integer) 1
};

#line 1499 "mode_robdd.implications.c"
static const MR_EnumFunctorDescPtr mode_robdd__implications__mode_robdd__implications__enum_value_ordered_extract_0[2] = {
  &mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_0,
  &mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_1
};

#line 1505 "mode_robdd.implications.c"
static const MR_EnumFunctorDescPtr mode_robdd__implications__mode_robdd__implications__enum_name_ordered_extract_0[2] = {
  &mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_0,
  &mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_1
};

#line 1511 "mode_robdd.implications.c"
static const MR_Integer mode_robdd__implications__mode_robdd__implications__functor_number_map_extract_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1517 "mode_robdd.implications.c"
const MR_TypeCtorInfo_Struct mode_robdd__implications__mode_robdd__implications__type_ctor_info_extract_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mode_robdd__implications____Unify____extract_0_0_10001)),
  ((MR_Box) (mode_robdd__implications____Compare____extract_0_0_10001)),
  (MR_String) "mode_robdd.implications",
  (MR_String) "extract",
  {     mode_robdd__implications__mode_robdd__implications__enum_name_ordered_extract_0 },
  {     mode_robdd__implications__mode_robdd__implications__enum_value_ordered_extract_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mode_robdd__implications__mode_robdd__implications__functor_number_map_extract_0
};

#line 1534 "mode_robdd.implications.c"
const MR_TypeCtorInfo_Struct mode_robdd__implications__mode_robdd__implications__type_ctor_info_mklit_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mode_robdd__implications____Unify____mklit_1_0_10001)),
  ((MR_Box) (mode_robdd__implications____Compare____mklit_1_0_10001)),
  (MR_String) "mode_robdd.implications",
  (MR_String) "mklit",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mode_robdd__implications____vpti_func_2__pseudo_term__pti_var_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1551 "mode_robdd.implications.c"
static MR_bool MR_CALL 
mode_robdd__implications____Unify____bin_clause_1_0_10001(
#line 1554 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 1556 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 1558 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_3)
#line 1560 "mode_robdd.implications.c"
{
#line 1562 "mode_robdd.implications.c"
  {
#line 1564 "mode_robdd.implications.c"
    MR_bool mode_robdd__implications__succeeded;

#line 1567 "mode_robdd.implications.c"
    {
#line 1569 "mode_robdd.implications.c"
      mode_robdd__implications__succeeded = mode_robdd__implications____Unify____bin_clause_1_0(((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Tuple) mode_robdd__implications__wrapper_arg_2), ((MR_Tuple) mode_robdd__implications__wrapper_arg_3));
    }
#line 1572 "mode_robdd.implications.c"
    return mode_robdd__implications__succeeded;
#line 1574 "mode_robdd.implications.c"
  }
#line 1576 "mode_robdd.implications.c"
}

#line 1579 "mode_robdd.implications.c"
static void MR_CALL 
mode_robdd__implications____Compare____bin_clause_1_0_10001(
#line 1582 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 1584 "mode_robdd.implications.c"
  MR_Box * mode_robdd__implications__wrapper_arg_2,
#line 1586 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_3,
#line 1588 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_4)
#line 1590 "mode_robdd.implications.c"
{
#line 1592 "mode_robdd.implications.c"
  {
#line 1594 "mode_robdd.implications.c"
    MR_Word mode_robdd__implications__conv0_HeadVar__1_1;

#line 1597 "mode_robdd.implications.c"
    {
#line 1599 "mode_robdd.implications.c"
      mode_robdd__implications____Compare____bin_clause_1_0(((MR_Word) mode_robdd__implications__wrapper_arg_1), &mode_robdd__implications__conv0_HeadVar__1_1, ((MR_Tuple) mode_robdd__implications__wrapper_arg_3), ((MR_Tuple) mode_robdd__implications__wrapper_arg_4));
    }
#line 1602 "mode_robdd.implications.c"
    *mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__1_1));
#line 1604 "mode_robdd.implications.c"
  }
#line 1606 "mode_robdd.implications.c"
}

#line 1609 "mode_robdd.implications.c"
static MR_bool MR_CALL 
mode_robdd__implications____Unify____extract_0_0_10001(
#line 1612 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 1614 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_2)
#line 1616 "mode_robdd.implications.c"
{
#line 1618 "mode_robdd.implications.c"
  {
#line 1620 "mode_robdd.implications.c"
    MR_bool mode_robdd__implications__succeeded;

#line 1623 "mode_robdd.implications.c"
    {
#line 1625 "mode_robdd.implications.c"
      mode_robdd__implications__succeeded = mode_robdd__implications____Unify____extract_0_0(((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2));
    }
#line 1628 "mode_robdd.implications.c"
    return mode_robdd__implications__succeeded;
#line 1630 "mode_robdd.implications.c"
  }
#line 1632 "mode_robdd.implications.c"
}

#line 1635 "mode_robdd.implications.c"
static void MR_CALL 
mode_robdd__implications____Compare____extract_0_0_10001(
#line 1638 "mode_robdd.implications.c"
  MR_Box * mode_robdd__implications__wrapper_arg_1,
#line 1640 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 1642 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_3)
#line 1644 "mode_robdd.implications.c"
{
#line 1646 "mode_robdd.implications.c"
  {
#line 1648 "mode_robdd.implications.c"
    MR_Word mode_robdd__implications__conv0_HeadVar__1_1;

#line 1651 "mode_robdd.implications.c"
    {
#line 1653 "mode_robdd.implications.c"
      mode_robdd__implications____Compare____extract_0_0(&mode_robdd__implications__conv0_HeadVar__1_1, ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Word) mode_robdd__implications__wrapper_arg_3));
    }
#line 1656 "mode_robdd.implications.c"
    *mode_robdd__implications__wrapper_arg_1 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__1_1));
#line 1658 "mode_robdd.implications.c"
  }
#line 1660 "mode_robdd.implications.c"
}

#line 1663 "mode_robdd.implications.c"
static MR_bool MR_CALL 
mode_robdd__implications____Unify____mklit_1_0_10001(
#line 1666 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 1668 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 1670 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_3)
#line 1672 "mode_robdd.implications.c"
{
#line 1674 "mode_robdd.implications.c"
  {
#line 1676 "mode_robdd.implications.c"
    MR_bool mode_robdd__implications__succeeded;

#line 1679 "mode_robdd.implications.c"
    {
#line 1681 "mode_robdd.implications.c"
      mode_robdd__implications__succeeded = mode_robdd__implications____Unify____mklit_1_0(((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Word) mode_robdd__implications__wrapper_arg_3));
    }
#line 1684 "mode_robdd.implications.c"
    return mode_robdd__implications__succeeded;
#line 1686 "mode_robdd.implications.c"
  }
#line 1688 "mode_robdd.implications.c"
}

#line 1691 "mode_robdd.implications.c"
static void MR_CALL 
mode_robdd__implications____Compare____mklit_1_0_10001(
#line 1694 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 1696 "mode_robdd.implications.c"
  MR_Box * mode_robdd__implications__wrapper_arg_2,
#line 1698 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_3,
#line 1700 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_4)
#line 1702 "mode_robdd.implications.c"
{
#line 1704 "mode_robdd.implications.c"
  {
#line 1706 "mode_robdd.implications.c"
    MR_Word mode_robdd__implications__conv0_HeadVar__1_1;

#line 1709 "mode_robdd.implications.c"
    {
#line 1711 "mode_robdd.implications.c"
      mode_robdd__implications____Compare____mklit_1_0(((MR_Word) mode_robdd__implications__wrapper_arg_1), &mode_robdd__implications__conv0_HeadVar__1_1, ((MR_Word) mode_robdd__implications__wrapper_arg_3), ((MR_Word) mode_robdd__implications__wrapper_arg_4));
    }
#line 1714 "mode_robdd.implications.c"
    *mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__1_1));
#line 1716 "mode_robdd.implications.c"
  }
#line 1718 "mode_robdd.implications.c"
}

#line 587 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__586__1_6_f_0_1(
#line 587 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 587 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 587 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2)
#line 587 "mode_robdd.implications.m"
{
#line 587 "mode_robdd.implications.m"
  {
#line 587 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_3;
#line 587 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 587 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_LambdaHeadVar__3_23;

#line 587 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 587 "mode_robdd.implications.m"
    {
#line 587 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_LambdaHeadVar__3_23 = mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__587__1_6_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 6))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2));
    }
#line 587 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_3 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__3_23));
#line 587 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_3;
#line 587 "mode_robdd.implications.m"
  }
#line 587 "mode_robdd.implications.m"
}

#line 586 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__586__1_6_f_0(
#line 586 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_32,
#line 586 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__MkLitA_6,
#line 586 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__MkLitB_7,
#line 586 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_16,
#line 586 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__2_17,
#line 586 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__3_18)
#line 586 "mode_robdd.implications.m"
{
#line 586 "mode_robdd.implications.m"
  {
#line 586 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 586 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__LambdaHeadVar__4_19;
#line 586 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_39_39;
#line 586 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_40_40;
#line 586 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_41;
#line 586 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeClassInfo_for_enum_42;
#line 586 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_43_43;
#line 586 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_44_44;
#line 586 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_20_20;
#line 587 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv1_LambdaHeadVar__4_19;

#line 1797 "mode_robdd.implications.c"
    mode_robdd__implications__BaseTypeClassInfo_for_enum_41 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 1799 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_39_39 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1801 "mode_robdd.implications.c"
    {
#line 1803 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1805 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_40_40, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_39_39));
#line 1807 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_40_40, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
#line 1809 "mode_robdd.implications.c"
    }
#line 1811 "mode_robdd.implications.c"
    {
#line 1813 "mode_robdd.implications.c"
      mode_robdd__implications__TypeClassInfo_for_enum_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1815 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_42, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_41));
#line 1817 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_42, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
#line 1819 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_42, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_40_40));
#line 1821 "mode_robdd.implications.c"
    }
#line 1823 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_43_43 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_imp_vars_1;
#line 1825 "mode_robdd.implications.c"
    {
#line 1827 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1829 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_44_44, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_43_43));
#line 1831 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_44_44, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
#line 1833 "mode_robdd.implications.c"
    }
#line 587 "mode_robdd.implications.m"
    {
#line 587 "mode_robdd.implications.m"
      mode_robdd__implications__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 587 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_6[1]));
#line 587 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 1) = ((MR_Box) (mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__586__1_6_f_0_1));
#line 587 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 587 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
#line 587 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 4) = ((MR_Box) (mode_robdd__implications__MkLitA_6));
#line 587 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 5) = ((MR_Box) (mode_robdd__implications__MkLitB_7));
#line 587 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 6) = ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_16));
#line 587 "mode_robdd.implications.m"
    }
#line 587 "mode_robdd.implications.m"
    {
#line 587 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_LambdaHeadVar__4_19 = mercury__sparse_bitset__foldl_3_f_0(mode_robdd__implications__TypeInfo_44_44, mode_robdd__implications__TypeClassInfo_for_enum_42, (MR_Word) mode_robdd__implications__V_20_20, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_17, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__3_18)));
    }
#line 587 "mode_robdd.implications.m"
    mode_robdd__implications__LambdaHeadVar__4_19 = ((MR_Word) mode_robdd__implications__conv1_LambdaHeadVar__4_19);
#line 586 "mode_robdd.implications.m"
    return mode_robdd__implications__LambdaHeadVar__4_19;
#line 586 "mode_robdd.implications.m"
  }
#line 586 "mode_robdd.implications.m"
}

#line 587 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__587__1_6_f_0(
#line 587 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_32,
#line 587 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__MkLitA_6,
#line 587 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__MkLitB_7,
#line 587 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_16,
#line 587 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_21,
#line 587 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__2_22)
#line 587 "mode_robdd.implications.m"
{
#line 587 "mode_robdd.implications.m"
  {
#line 587 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 587 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__LambdaHeadVar__3_23;
#line 587 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__V_24_24;
#line 587 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_25_25;
#line 587 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_26_26;
#line 588 "mode_robdd.implications.m"
    MR_Box MR_CALL (* mode_robdd__implications__func_0)(MR_Box, MR_Box);
#line 588 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv1_V_25_25;
#line 588 "mode_robdd.implications.m"
    MR_Box MR_CALL (* mode_robdd__implications__func_2)(MR_Box, MR_Box);
#line 588 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv3_V_26_26;

#line 588 "mode_robdd.implications.m"
    mode_robdd__implications__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__MkLitA_6, (MR_Integer) 1)));
#line 588 "mode_robdd.implications.m"
    {
#line 588 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_V_25_25 = mode_robdd__implications__func_0(((MR_Box) mode_robdd__implications__MkLitA_6), ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_16)));
    }
#line 588 "mode_robdd.implications.m"
    mode_robdd__implications__V_25_25 = ((MR_Word) mode_robdd__implications__conv1_V_25_25);
#line 588 "mode_robdd.implications.m"
    mode_robdd__implications__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__MkLitB_7, (MR_Integer) 1)));
#line 588 "mode_robdd.implications.m"
    {
#line 588 "mode_robdd.implications.m"
      mode_robdd__implications__conv3_V_26_26 = mode_robdd__implications__func_2(((MR_Box) mode_robdd__implications__MkLitB_7), ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_21)));
    }
#line 588 "mode_robdd.implications.m"
    mode_robdd__implications__V_26_26 = ((MR_Word) mode_robdd__implications__conv3_V_26_26);
#line 588 "mode_robdd.implications.m"
    {
#line 588 "mode_robdd.implications.m"
      mode_robdd__implications__V_24_24 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 588 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_24_24, 0) = ((MR_Box) (mode_robdd__implications__V_25_25));
#line 588 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_24_24, 1) = ((MR_Box) (mode_robdd__implications__V_26_26));
#line 588 "mode_robdd.implications.m"
    }
#line 588 "mode_robdd.implications.m"
    {
#line 588 "mode_robdd.implications.m"
      mode_robdd__implications__LambdaHeadVar__3_23 = mode_robdd__implications__add_clause_2_f_0(mode_robdd__implications__TypeInfo_for_T_32, mode_robdd__implications__V_24_24, mode_robdd__implications__LambdaHeadVar__2_22);
    }
#line 587 "mode_robdd.implications.m"
    return mode_robdd__implications__LambdaHeadVar__3_23;
#line 587 "mode_robdd.implications.m"
  }
#line 587 "mode_robdd.implications.m"
}

#line 565 "mode_robdd.implications.m"
static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__get_resolvents_2__565__1_3_f_0(
#line 565 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_15,
#line 565 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LitB_6,
#line 565 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_12)
#line 565 "mode_robdd.implications.m"
{
#line 565 "mode_robdd.implications.m"
  {
#line 565 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 565 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__LambdaHeadVar__2_13;

#line 565 "mode_robdd.implications.m"
    {
#line 565 "mode_robdd.implications.m"
      mode_robdd__implications__LambdaHeadVar__2_13 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 565 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__2_13, 0) = ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_12));
#line 565 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__2_13, 1) = ((MR_Box) (mode_robdd__implications__LitB_6));
#line 565 "mode_robdd.implications.m"
    }
#line 565 "mode_robdd.implications.m"
    return mode_robdd__implications__LambdaHeadVar__2_13;
#line 565 "mode_robdd.implications.m"
  }
#line 565 "mode_robdd.implications.m"
}

#line 477 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__477__1_5_f_0(
#line 477 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
#line 477 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Var_4,
#line 477 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_11,
#line 477 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__2_12,
#line 477 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__3_13)
#line 477 "mode_robdd.implications.m"
{
#line 477 "mode_robdd.implications.m"
  {
#line 477 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 477 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__LambdaHeadVar__4_14;
#line 478 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_27_27;
#line 478 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_28_28;
#line 478 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_29;
#line 478 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeClassInfo_for_enum_30;

#line 2012 "mode_robdd.implications.c"
    mode_robdd__implications__BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 2014 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2016 "mode_robdd.implications.c"
    {
#line 2018 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2020 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_28_28, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_27_27));
#line 2022 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 2024 "mode_robdd.implications.c"
    }
#line 2026 "mode_robdd.implications.c"
    {
#line 2028 "mode_robdd.implications.c"
      mode_robdd__implications__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2030 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_29));
#line 2032 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 2034 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_28_28));
#line 2036 "mode_robdd.implications.c"
    }
#line 478 "mode_robdd.implications.m"
    {
#line 478 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__sparse_bitset__contains_2_p_0(mode_robdd__implications__TypeClassInfo_for_enum_30, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_12, ((MR_Box) (mode_robdd__implications__Var_4)));
    }
#line 477 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 479 "mode_robdd.implications.m"
      {
#line 479 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_31_31;
#line 479 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_32_32;
#line 479 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_33;
#line 479 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_34;
#line 479 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_15_15;
#line 479 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv0_V_15_15;

#line 2060 "mode_robdd.implications.c"
        mode_robdd__implications__BaseTypeClassInfo_for_enum_33 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 2062 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2064 "mode_robdd.implications.c"
        {
#line 2066 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2068 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_32_32, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_31_31));
#line 2070 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_32_32, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 2072 "mode_robdd.implications.c"
        }
#line 2074 "mode_robdd.implications.c"
        {
#line 2076 "mode_robdd.implications.c"
          mode_robdd__implications__TypeClassInfo_for_enum_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2078 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_34, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_33));
#line 2080 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_34, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 2082 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_34, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_32_32));
#line 2084 "mode_robdd.implications.c"
        }
#line 479 "mode_robdd.implications.m"
        {
#line 479 "mode_robdd.implications.m"
          mode_robdd__implications__conv0_V_15_15 = mercury__sparse_bitset__delete_2_f_0(mode_robdd__implications__TypeClassInfo_for_enum_34, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_12, ((MR_Box) (mode_robdd__implications__Var_4)));
        }
#line 479 "mode_robdd.implications.m"
        mode_robdd__implications__V_15_15 = (MR_Word) mode_robdd__implications__conv0_V_15_15;
#line 477 "mode_robdd.implications.m"
        {
#line 477 "mode_robdd.implications.m"
          mode_robdd__implications__LambdaHeadVar__4_14 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_20, mode_robdd__implications__LambdaHeadVar__1_11, mode_robdd__implications__LambdaHeadVar__3_13, mode_robdd__implications__V_15_15);
        }
#line 479 "mode_robdd.implications.m"
      }
#line 477 "mode_robdd.implications.m"
    else
#line 481 "mode_robdd.implications.m"
      mode_robdd__implications__LambdaHeadVar__4_14 = mode_robdd__implications__LambdaHeadVar__3_13;
#line 477 "mode_robdd.implications.m"
    return mode_robdd__implications__LambdaHeadVar__4_14;
#line 477 "mode_robdd.implications.m"
  }
#line 477 "mode_robdd.implications.m"
}

#line 466 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__466__1_4_f_0(
#line 466 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_16,
#line 466 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_8,
#line 466 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__2_9,
#line 466 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__3_10)
#line 466 "mode_robdd.implications.m"
{
#line 466 "mode_robdd.implications.m"
  {
#line 466 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 466 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__LambdaHeadVar__4_11;
#line 467 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_23_23;
#line 467 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_24_24;

#line 2135 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2137 "mode_robdd.implications.c"
    {
#line 2139 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2141 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_24_24, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_23_23));
#line 2143 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_16));
#line 2145 "mode_robdd.implications.c"
    }
#line 467 "mode_robdd.implications.m"
    {
#line 467 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__implications__TypeInfo_24_24, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_9);
    }
#line 466 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 468 "mode_robdd.implications.m"
      {
#line 468 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_25_25;
#line 468 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_26_26;
#line 468 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_27_27;
#line 468 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_28_28;
#line 468 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv0_LambdaHeadVar__4_11;

#line 2167 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2169 "mode_robdd.implications.c"
        {
#line 2171 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2173 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_25_25));
#line 2175 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_16));
#line 2177 "mode_robdd.implications.c"
        }
#line 2179 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_27_27 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 2181 "mode_robdd.implications.c"
        {
#line 2183 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2185 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_28_28, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_27_27));
#line 2187 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_26_26));
#line 2189 "mode_robdd.implications.c"
        }
#line 468 "mode_robdd.implications.m"
        {
#line 468 "mode_robdd.implications.m"
          mode_robdd__implications__conv0_LambdaHeadVar__4_11 = mercury__map__delete_2_f_0(mode_robdd__implications__TypeInfo_26_26, mode_robdd__implications__TypeInfo_28_28, (MR_Word) mode_robdd__implications__LambdaHeadVar__3_10, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_8)));
        }
#line 468 "mode_robdd.implications.m"
        mode_robdd__implications__LambdaHeadVar__4_11 = (MR_Word) mode_robdd__implications__conv0_LambdaHeadVar__4_11;
#line 468 "mode_robdd.implications.m"
      }
#line 466 "mode_robdd.implications.m"
    else
#line 470 "mode_robdd.implications.m"
      mode_robdd__implications__LambdaHeadVar__4_11 = mode_robdd__implications__LambdaHeadVar__3_10;
#line 466 "mode_robdd.implications.m"
    return mode_robdd__implications__LambdaHeadVar__4_11;
#line 466 "mode_robdd.implications.m"
  }
#line 466 "mode_robdd.implications.m"
}

#line 454 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__imp_map_difference__454__1_4_f_0(
#line 454 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
#line 454 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_11,
#line 454 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__2_12,
#line 454 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__3_13)
#line 454 "mode_robdd.implications.m"
{
#line 454 "mode_robdd.implications.m"
  {
#line 454 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 454 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__LambdaHeadVar__4_14;
#line 454 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__VsA_9;
#line 455 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_30_30;
#line 455 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_31_31;
#line 455 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_32_32;
#line 455 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_33_33;
#line 455 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv0_VsA_9;

#line 2243 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_30_30 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2245 "mode_robdd.implications.c"
    {
#line 2247 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2249 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_31_31, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_30_30));
#line 2251 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_31_31, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 2253 "mode_robdd.implications.c"
    }
#line 2255 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_32_32 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 2257 "mode_robdd.implications.c"
    {
#line 2259 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2261 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_33_33, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_32_32));
#line 2263 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_33_33, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_31_31));
#line 2265 "mode_robdd.implications.c"
    }
#line 455 "mode_robdd.implications.m"
    {
#line 455 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__map__elem_2_f_0(mode_robdd__implications__TypeInfo_31_31, mode_robdd__implications__TypeInfo_33_33, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_11)), (MR_Word) mode_robdd__implications__LambdaHeadVar__3_13, &mode_robdd__implications__conv0_VsA_9);
    }
#line 455 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 455 "mode_robdd.implications.m"
      {
#line 455 "mode_robdd.implications.m"
        mode_robdd__implications__VsA_9 = ((MR_Word) mode_robdd__implications__conv0_VsA_9);
#line 455 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = MR_TRUE;
#line 455 "mode_robdd.implications.m"
      }
#line 454 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 456 "mode_robdd.implications.m"
      {
#line 456 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_34_34;
#line 456 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_35_35;
#line 456 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_15_15;
#line 456 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv1_V_15_15;

#line 2295 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_34_34 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2297 "mode_robdd.implications.c"
        {
#line 2299 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2301 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_35_35, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_34_34));
#line 2303 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_35_35, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 2305 "mode_robdd.implications.c"
        }
#line 456 "mode_robdd.implications.m"
        {
#line 456 "mode_robdd.implications.m"
          mode_robdd__implications__conv1_V_15_15 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__implications__TypeInfo_35_35, (MR_Word) mode_robdd__implications__VsA_9, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_12);
        }
#line 456 "mode_robdd.implications.m"
        mode_robdd__implications__V_15_15 = (MR_Word) mode_robdd__implications__conv1_V_15_15;
#line 454 "mode_robdd.implications.m"
        {
#line 454 "mode_robdd.implications.m"
          mode_robdd__implications__LambdaHeadVar__4_14 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_19, mode_robdd__implications__LambdaHeadVar__1_11, mode_robdd__implications__LambdaHeadVar__3_13, mode_robdd__implications__V_15_15);
        }
#line 456 "mode_robdd.implications.m"
      }
#line 454 "mode_robdd.implications.m"
    else
#line 458 "mode_robdd.implications.m"
      mode_robdd__implications__LambdaHeadVar__4_14 = mode_robdd__implications__LambdaHeadVar__3_13;
#line 454 "mode_robdd.implications.m"
    return mode_robdd__implications__LambdaHeadVar__4_14;
#line 454 "mode_robdd.implications.m"
  }
#line 454 "mode_robdd.implications.m"
}

#line 446 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__intersect__446__1_3_f_0(
#line 446 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_8,
#line 446 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_13,
#line 446 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_14)
#line 446 "mode_robdd.implications.m"
{
#line 446 "mode_robdd.implications.m"
  {
#line 446 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 446 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__4_15;
#line 446 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_16_16;
#line 446 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_17_17;
#line 446 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__4_15;

#line 2356 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2358 "mode_robdd.implications.c"
    {
#line 2360 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2362 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_16_16));
#line 2364 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_8));
#line 2366 "mode_robdd.implications.c"
    }
#line 446 "mode_robdd.implications.m"
    {
#line 446 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__4_15 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__implications__TypeInfo_17_17, (MR_Word) mode_robdd__implications__HeadVar__2_13, (MR_Word) mode_robdd__implications__HeadVar__3_14);
    }
#line 446 "mode_robdd.implications.m"
    mode_robdd__implications__HeadVar__4_15 = (MR_Word) mode_robdd__implications__conv0_HeadVar__4_15;
#line 446 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__4_15;
#line 446 "mode_robdd.implications.m"
  }
#line 446 "mode_robdd.implications.m"
}

#line 289 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_f_0_1(
#line 289 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 289 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1)
#line 289 "mode_robdd.implications.m"
{
#line 289 "mode_robdd.implications.m"
  {
#line 289 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 289 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;

#line 289 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 289 "mode_robdd.implications.m"
    {
#line 289 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mode_robdd__equiv_vars__vars_are_not_equivalent_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 5))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 289 "mode_robdd.implications.m"
    return mode_robdd__implications__succeeded;
#line 289 "mode_robdd.implications.m"
  }
#line 289 "mode_robdd.implications.m"
}

#line 287 "mode_robdd.implications.m"
static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_f_0(
#line 287 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_30,
#line 287 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__EQVars_5,
#line 287 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_16,
#line 287 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__2_17,
#line 287 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__LambdaHeadVar__3_18)
#line 287 "mode_robdd.implications.m"
{
#line 287 "mode_robdd.implications.m"
  {
#line 287 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 287 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__LambdaHeadVar__4_19;
#line 287 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_41_41;
#line 287 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_42_42;
#line 287 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_43;
#line 287 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeClassInfo_for_enum_44;
#line 287 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Vs_13;
#line 287 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_20_20;
#line 287 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_21_21;
#line 287 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_22_22;
#line 287 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__IM_28;
#line 287 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__C_29;
#line 289 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_Vs_13;
#line 288 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_46_46;
#line 288 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_47_47;
#line 288 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_48_48;
#line 288 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_49_49;

#line 287 "mode_robdd.implications.m"
    mode_robdd__implications__IM_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__3_18, (MR_Integer) 0)));
#line 287 "mode_robdd.implications.m"
    mode_robdd__implications__C_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__3_18, (MR_Integer) 1)));
#line 2468 "mode_robdd.implications.c"
    mode_robdd__implications__BaseTypeClassInfo_for_enum_43 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 2470 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_41_41 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2472 "mode_robdd.implications.c"
    {
#line 2474 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2476 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_42_42, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_41_41));
#line 2478 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_42_42, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_30));
#line 2480 "mode_robdd.implications.c"
    }
#line 2482 "mode_robdd.implications.c"
    {
#line 2484 "mode_robdd.implications.c"
      mode_robdd__implications__TypeClassInfo_for_enum_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2486 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_44, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_43));
#line 2488 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_44, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_30));
#line 2490 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_44, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_42_42));
#line 2492 "mode_robdd.implications.c"
    }
#line 289 "mode_robdd.implications.m"
    {
#line 289 "mode_robdd.implications.m"
      mode_robdd__implications__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 289 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[5]));
#line 289 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 1) = ((MR_Box) (mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_f_0_1));
#line 289 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 289 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_30));
#line 289 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 4) = ((MR_Box) (mode_robdd__implications__EQVars_5));
#line 289 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 5) = ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_16));
#line 289 "mode_robdd.implications.m"
    }
#line 289 "mode_robdd.implications.m"
    {
#line 289 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_Vs_13 = mercury__sparse_bitset__filter_2_f_0(mode_robdd__implications__TypeClassInfo_for_enum_44, (MR_Word) mode_robdd__implications__V_20_20, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_17);
    }
#line 289 "mode_robdd.implications.m"
    mode_robdd__implications__Vs_13 = (MR_Word) mode_robdd__implications__conv0_Vs_13;
#line 288 "mode_robdd.implications.m"
    {
#line 288 "mode_robdd.implications.m"
      mode_robdd__implications__V_21_21 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_30, mode_robdd__implications__LambdaHeadVar__1_16, mode_robdd__implications__IM_28, mode_robdd__implications__Vs_13);
    }
#line 2524 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_48_48 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 2526 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_46_46 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2528 "mode_robdd.implications.c"
    {
#line 2530 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2532 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_47_47, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_46_46));
#line 2534 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_47_47, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_30));
#line 2536 "mode_robdd.implications.c"
    }
#line 2538 "mode_robdd.implications.c"
    {
#line 2540 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2542 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_49_49, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_48_48));
#line 2544 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_49_49, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_47_47));
#line 2546 "mode_robdd.implications.c"
    }
#line 288 "mode_robdd.implications.m"
    {
#line 288 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__builtin__unify_2_p_0(mode_robdd__implications__TypeInfo_49_49, ((MR_Box) (mode_robdd__implications__Vs_13)), ((MR_Box) (mode_robdd__implications__LambdaHeadVar__2_17)));
    }
#line 288 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 288 "mode_robdd.implications.m"
      mode_robdd__implications__V_22_22 = mode_robdd__implications__C_29;
#line 288 "mode_robdd.implications.m"
    else
#line 288 "mode_robdd.implications.m"
      mode_robdd__implications__V_22_22 = (MR_Integer) 1;
#line 288 "mode_robdd.implications.m"
    {
#line 288 "mode_robdd.implications.m"
      mode_robdd__implications__LambdaHeadVar__4_19 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 288 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__4_19, 0) = ((MR_Box) (mode_robdd__implications__V_21_21));
#line 288 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__4_19, 1) = ((MR_Box) (mode_robdd__implications__V_22_22));
#line 288 "mode_robdd.implications.m"
    }
#line 287 "mode_robdd.implications.m"
    return mode_robdd__implications__LambdaHeadVar__4_19;
#line 287 "mode_robdd.implications.m"
  }
#line 287 "mode_robdd.implications.m"
}

#line 262 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__normalise_pairs__262__1_3_f_0(
#line 262 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
#line 262 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_35,
#line 262 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_36)
#line 262 "mode_robdd.implications.m"
{
#line 262 "mode_robdd.implications.m"
  {
#line 262 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 262 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__4_37;
#line 262 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_38_38;
#line 262 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_39_39;
#line 262 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__4_37;

#line 2602 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_38_38 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2604 "mode_robdd.implications.c"
    {
#line 2606 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2608 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_39_39, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_38_38));
#line 2610 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_39_39, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 2612 "mode_robdd.implications.c"
    }
#line 262 "mode_robdd.implications.m"
    {
#line 262 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__4_37 = mercury__sparse_bitset__union_2_f_0(mode_robdd__implications__TypeInfo_39_39, (MR_Word) mode_robdd__implications__HeadVar__2_35, (MR_Word) mode_robdd__implications__HeadVar__3_36);
    }
#line 262 "mode_robdd.implications.m"
    mode_robdd__implications__HeadVar__4_37 = (MR_Word) mode_robdd__implications__conv0_HeadVar__4_37;
#line 262 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__4_37;
#line 262 "mode_robdd.implications.m"
  }
#line 262 "mode_robdd.implications.m"
}

#line 199 "mode_robdd.implications.m"
static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__199__1_5_f_0(
#line 199 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_46,
#line 199 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IsDisImp_9,
#line 199 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_32,
#line 199 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__2_33,
#line 199 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__LambdaHeadVar__3_34)
#line 199 "mode_robdd.implications.m"
{
#line 199 "mode_robdd.implications.m"
  {
#line 199 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 199 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__LambdaHeadVar__4_35;
#line 199 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Ts_23;
#line 199 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Fs_24;
#line 199 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__IMs_25;
#line 199 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__C_26;
#line 199 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Ts0_42;
#line 199 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Fs0_43;
#line 199 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__IMs0_44;
#line 199 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__C0_45;
#line 202 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_57_57;
#line 202 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_58_58;
#line 202 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_59;
#line 202 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeClassInfo_for_enum_60;
#line 202 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_36_36;

#line 200 "mode_robdd.implications.m"
    mode_robdd__implications__Ts0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__3_34, (MR_Integer) 0)));
#line 200 "mode_robdd.implications.m"
    mode_robdd__implications__Fs0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__3_34, (MR_Integer) 1)));
#line 200 "mode_robdd.implications.m"
    mode_robdd__implications__IMs0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__3_34, (MR_Integer) 2)));
#line 200 "mode_robdd.implications.m"
    mode_robdd__implications__C0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__3_34, (MR_Integer) 3)));
#line 202 "mode_robdd.implications.m"
    mode_robdd__implications__succeeded = (mode_robdd__implications__IsDisImp_9 == (MR_Integer) 1);
#line 202 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 202 "mode_robdd.implications.m"
      mode_robdd__implications__V_36_36 = mode_robdd__implications__Fs0_43;
#line 202 "mode_robdd.implications.m"
    else
#line 202 "mode_robdd.implications.m"
      mode_robdd__implications__V_36_36 = mode_robdd__implications__Ts0_42;
#line 2694 "mode_robdd.implications.c"
    mode_robdd__implications__BaseTypeClassInfo_for_enum_59 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 2696 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_57_57 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2698 "mode_robdd.implications.c"
    {
#line 2700 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2702 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_58_58, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_57_57));
#line 2704 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_58_58, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 2706 "mode_robdd.implications.c"
    }
#line 2708 "mode_robdd.implications.c"
    {
#line 2710 "mode_robdd.implications.c"
      mode_robdd__implications__TypeClassInfo_for_enum_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2712 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_60, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_59));
#line 2714 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_60, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 2716 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_60, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_58_58));
#line 2718 "mode_robdd.implications.c"
    }
#line 202 "mode_robdd.implications.m"
    {
#line 202 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__sparse_bitset__contains_2_p_0(mode_robdd__implications__TypeClassInfo_for_enum_60, (MR_Word) mode_robdd__implications__V_36_36, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_32)));
    }
#line 208 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 204 "mode_robdd.implications.m"
      {
#line 204 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_61_61;
#line 204 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_62_62;
#line 204 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_63_63;
#line 204 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_64_64;
#line 204 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv0_Ts_23;
#line 206 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv1_IMs_25;

#line 2742 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_61_61 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2744 "mode_robdd.implications.c"
        {
#line 2746 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2748 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_62_62, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_61_61));
#line 2750 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_62_62, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 2752 "mode_robdd.implications.c"
        }
#line 204 "mode_robdd.implications.m"
        {
#line 204 "mode_robdd.implications.m"
          mode_robdd__implications__conv0_Ts_23 = mercury__sparse_bitset__union_2_f_0(mode_robdd__implications__TypeInfo_62_62, (MR_Word) mode_robdd__implications__Ts0_42, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_33);
        }
#line 204 "mode_robdd.implications.m"
        mode_robdd__implications__Ts_23 = (MR_Word) mode_robdd__implications__conv0_Ts_23;
#line 205 "mode_robdd.implications.m"
        mode_robdd__implications__Fs_24 = mode_robdd__implications__Fs0_43;
#line 2763 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_63_63 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 2765 "mode_robdd.implications.c"
        {
#line 2767 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2769 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_64_64, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_63_63));
#line 2771 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_64_64, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_62_62));
#line 2773 "mode_robdd.implications.c"
        }
#line 206 "mode_robdd.implications.m"
        {
#line 206 "mode_robdd.implications.m"
          mode_robdd__implications__conv1_IMs_25 = mercury__map__delete_2_f_0(mode_robdd__implications__TypeInfo_62_62, mode_robdd__implications__TypeInfo_64_64, (MR_Word) mode_robdd__implications__IMs0_44, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_32)));
        }
#line 206 "mode_robdd.implications.m"
        mode_robdd__implications__IMs_25 = (MR_Word) mode_robdd__implications__conv1_IMs_25;
#line 207 "mode_robdd.implications.m"
        mode_robdd__implications__C_26 = (MR_Integer) 1;
#line 204 "mode_robdd.implications.m"
      }
#line 208 "mode_robdd.implications.m"
    else
#line 215 "mode_robdd.implications.m"
      {
#line 209 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_65_65;
#line 209 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_66_66;
#line 209 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_67;
#line 209 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_68;
#line 209 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_37_37;

#line 209 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = (mode_robdd__implications__IsDisImp_9 == (MR_Integer) 1);
#line 209 "mode_robdd.implications.m"
        if (mode_robdd__implications__succeeded)
#line 209 "mode_robdd.implications.m"
          mode_robdd__implications__V_37_37 = mode_robdd__implications__Ts0_42;
#line 209 "mode_robdd.implications.m"
        else
#line 209 "mode_robdd.implications.m"
          mode_robdd__implications__V_37_37 = mode_robdd__implications__Fs0_43;
#line 2811 "mode_robdd.implications.c"
        mode_robdd__implications__BaseTypeClassInfo_for_enum_67 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 2813 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_65_65 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2815 "mode_robdd.implications.c"
        {
#line 2817 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2819 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_66_66, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_65_65));
#line 2821 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_66_66, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 2823 "mode_robdd.implications.c"
        }
#line 2825 "mode_robdd.implications.c"
        {
#line 2827 "mode_robdd.implications.c"
          mode_robdd__implications__TypeClassInfo_for_enum_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2829 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_68, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_67));
#line 2831 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_68, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 2833 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_68, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_66_66));
#line 2835 "mode_robdd.implications.c"
        }
#line 209 "mode_robdd.implications.m"
        {
#line 209 "mode_robdd.implications.m"
          mode_robdd__implications__succeeded = mercury__sparse_bitset__contains_2_p_0(mode_robdd__implications__TypeClassInfo_for_enum_68, (MR_Word) mode_robdd__implications__V_37_37, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_32)));
        }
#line 215 "mode_robdd.implications.m"
        if (mode_robdd__implications__succeeded)
#line 211 "mode_robdd.implications.m"
          {
#line 211 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeCtorInfo_69_69;
#line 211 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeInfo_70_70;
#line 211 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeCtorInfo_71_71;
#line 211 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeInfo_72_72;
#line 213 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__conv2_IMs_25;

#line 211 "mode_robdd.implications.m"
            mode_robdd__implications__Ts_23 = mode_robdd__implications__Ts0_42;
#line 212 "mode_robdd.implications.m"
            mode_robdd__implications__Fs_24 = mode_robdd__implications__Fs0_43;
#line 2861 "mode_robdd.implications.c"
            mode_robdd__implications__TypeCtorInfo_69_69 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2863 "mode_robdd.implications.c"
            {
#line 2865 "mode_robdd.implications.c"
              mode_robdd__implications__TypeInfo_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2867 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_70_70, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_69_69));
#line 2869 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_70_70, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 2871 "mode_robdd.implications.c"
            }
#line 2873 "mode_robdd.implications.c"
            mode_robdd__implications__TypeCtorInfo_71_71 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 2875 "mode_robdd.implications.c"
            {
#line 2877 "mode_robdd.implications.c"
              mode_robdd__implications__TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2879 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_72_72, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_71_71));
#line 2881 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_72_72, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_70_70));
#line 2883 "mode_robdd.implications.c"
            }
#line 213 "mode_robdd.implications.m"
            {
#line 213 "mode_robdd.implications.m"
              mode_robdd__implications__conv2_IMs_25 = mercury__map__delete_2_f_0(mode_robdd__implications__TypeInfo_70_70, mode_robdd__implications__TypeInfo_72_72, (MR_Word) mode_robdd__implications__IMs0_44, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_32)));
            }
#line 213 "mode_robdd.implications.m"
            mode_robdd__implications__IMs_25 = (MR_Word) mode_robdd__implications__conv2_IMs_25;
#line 214 "mode_robdd.implications.m"
            mode_robdd__implications__C_26 = (MR_Integer) 1;
#line 211 "mode_robdd.implications.m"
          }
#line 215 "mode_robdd.implications.m"
        else
#line 223 "mode_robdd.implications.m"
          {
#line 216 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeCtorInfo_73_73;
#line 216 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeInfo_74_74;
#line 216 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__FVs_27;
#line 216 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__conv3_FVs_27;

#line 2909 "mode_robdd.implications.c"
            mode_robdd__implications__TypeCtorInfo_73_73 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2911 "mode_robdd.implications.c"
            {
#line 2913 "mode_robdd.implications.c"
              mode_robdd__implications__TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2915 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_74_74, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_73_73));
#line 2917 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_74_74, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 2919 "mode_robdd.implications.c"
            }
#line 216 "mode_robdd.implications.m"
            {
#line 216 "mode_robdd.implications.m"
              mode_robdd__implications__conv3_FVs_27 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__implications__TypeInfo_74_74, (MR_Word) mode_robdd__implications__Fs0_43, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_33);
            }
#line 216 "mode_robdd.implications.m"
            mode_robdd__implications__FVs_27 = (MR_Word) mode_robdd__implications__conv3_FVs_27;
#line 217 "mode_robdd.implications.m"
            {
#line 217 "mode_robdd.implications.m"
              mode_robdd__implications__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__implications__TypeInfo_74_74, (MR_Word) mode_robdd__implications__FVs_27);
            }
#line 217 "mode_robdd.implications.m"
            mode_robdd__implications__succeeded = !(mode_robdd__implications__succeeded);
#line 223 "mode_robdd.implications.m"
            if (mode_robdd__implications__succeeded)
#line 219 "mode_robdd.implications.m"
              {
#line 219 "mode_robdd.implications.m"
                MR_Word mode_robdd__implications__TypeCtorInfo_83_83;
#line 219 "mode_robdd.implications.m"
                MR_Word mode_robdd__implications__TypeInfo_84_84;
#line 219 "mode_robdd.implications.m"
                MR_Word mode_robdd__implications__TypeCtorInfo_85_85;
#line 219 "mode_robdd.implications.m"
                MR_Word mode_robdd__implications__TypeInfo_86_86;
#line 221 "mode_robdd.implications.m"
                MR_Word mode_robdd__implications__conv6_IMs_25;

#line 219 "mode_robdd.implications.m"
                mode_robdd__implications__succeeded = (mode_robdd__implications__IsDisImp_9 == (MR_Integer) 1);
#line 219 "mode_robdd.implications.m"
                if (mode_robdd__implications__succeeded)
#line 219 "mode_robdd.implications.m"
                  {
#line 219 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__TypeCtorInfo_75_75;
#line 219 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__TypeInfo_76_76;
#line 219 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_77;
#line 219 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__TypeClassInfo_for_enum_78;
#line 219 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__conv4_Ts_23;

#line 2967 "mode_robdd.implications.c"
                    mode_robdd__implications__BaseTypeClassInfo_for_enum_77 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 2969 "mode_robdd.implications.c"
                    mode_robdd__implications__TypeCtorInfo_75_75 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2971 "mode_robdd.implications.c"
                    {
#line 2973 "mode_robdd.implications.c"
                      mode_robdd__implications__TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2975 "mode_robdd.implications.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_76_76, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_75_75));
#line 2977 "mode_robdd.implications.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_76_76, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 2979 "mode_robdd.implications.c"
                    }
#line 2981 "mode_robdd.implications.c"
                    {
#line 2983 "mode_robdd.implications.c"
                      mode_robdd__implications__TypeClassInfo_for_enum_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2985 "mode_robdd.implications.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_78, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_77));
#line 2987 "mode_robdd.implications.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_78, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 2989 "mode_robdd.implications.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_78, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_76_76));
#line 2991 "mode_robdd.implications.c"
                    }
#line 219 "mode_robdd.implications.m"
                    {
#line 219 "mode_robdd.implications.m"
                      mode_robdd__implications__conv4_Ts_23 = mercury__sparse_bitset__insert_2_f_0(mode_robdd__implications__TypeClassInfo_for_enum_78, (MR_Word) mode_robdd__implications__Ts0_42, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_32)));
                    }
#line 219 "mode_robdd.implications.m"
                    mode_robdd__implications__Ts_23 = (MR_Word) mode_robdd__implications__conv4_Ts_23;
#line 219 "mode_robdd.implications.m"
                  }
#line 219 "mode_robdd.implications.m"
                else
#line 219 "mode_robdd.implications.m"
                  mode_robdd__implications__Ts_23 = mode_robdd__implications__Ts0_42;
#line 220 "mode_robdd.implications.m"
                mode_robdd__implications__succeeded = (mode_robdd__implications__IsDisImp_9 == (MR_Integer) 1);
#line 220 "mode_robdd.implications.m"
                if (mode_robdd__implications__succeeded)
#line 220 "mode_robdd.implications.m"
                  mode_robdd__implications__Fs_24 = mode_robdd__implications__Fs0_43;
#line 220 "mode_robdd.implications.m"
                else
#line 220 "mode_robdd.implications.m"
                  {
#line 220 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__TypeCtorInfo_79_79;
#line 220 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__TypeInfo_80_80;
#line 220 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_81;
#line 220 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__TypeClassInfo_for_enum_82;
#line 220 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__conv5_Fs_24;

#line 3027 "mode_robdd.implications.c"
                    mode_robdd__implications__BaseTypeClassInfo_for_enum_81 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 3029 "mode_robdd.implications.c"
                    mode_robdd__implications__TypeCtorInfo_79_79 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3031 "mode_robdd.implications.c"
                    {
#line 3033 "mode_robdd.implications.c"
                      mode_robdd__implications__TypeInfo_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3035 "mode_robdd.implications.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_80_80, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_79_79));
#line 3037 "mode_robdd.implications.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_80_80, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 3039 "mode_robdd.implications.c"
                    }
#line 3041 "mode_robdd.implications.c"
                    {
#line 3043 "mode_robdd.implications.c"
                      mode_robdd__implications__TypeClassInfo_for_enum_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3045 "mode_robdd.implications.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_82, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_81));
#line 3047 "mode_robdd.implications.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_82, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 3049 "mode_robdd.implications.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_82, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_80_80));
#line 3051 "mode_robdd.implications.c"
                    }
#line 220 "mode_robdd.implications.m"
                    {
#line 220 "mode_robdd.implications.m"
                      mode_robdd__implications__conv5_Fs_24 = mercury__sparse_bitset__insert_2_f_0(mode_robdd__implications__TypeClassInfo_for_enum_82, (MR_Word) mode_robdd__implications__Fs0_43, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_32)));
                    }
#line 220 "mode_robdd.implications.m"
                    mode_robdd__implications__Fs_24 = (MR_Word) mode_robdd__implications__conv5_Fs_24;
#line 220 "mode_robdd.implications.m"
                  }
#line 3062 "mode_robdd.implications.c"
                mode_robdd__implications__TypeCtorInfo_83_83 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3064 "mode_robdd.implications.c"
                {
#line 3066 "mode_robdd.implications.c"
                  mode_robdd__implications__TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3068 "mode_robdd.implications.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_84_84, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_83_83));
#line 3070 "mode_robdd.implications.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_84_84, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 3072 "mode_robdd.implications.c"
                }
#line 3074 "mode_robdd.implications.c"
                mode_robdd__implications__TypeCtorInfo_85_85 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 3076 "mode_robdd.implications.c"
                {
#line 3078 "mode_robdd.implications.c"
                  mode_robdd__implications__TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3080 "mode_robdd.implications.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_86_86, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_85_85));
#line 3082 "mode_robdd.implications.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_86_86, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_84_84));
#line 3084 "mode_robdd.implications.c"
                }
#line 221 "mode_robdd.implications.m"
                {
#line 221 "mode_robdd.implications.m"
                  mode_robdd__implications__conv6_IMs_25 = mercury__map__delete_2_f_0(mode_robdd__implications__TypeInfo_84_84, mode_robdd__implications__TypeInfo_86_86, (MR_Word) mode_robdd__implications__IMs0_44, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_32)));
                }
#line 221 "mode_robdd.implications.m"
                mode_robdd__implications__IMs_25 = (MR_Word) mode_robdd__implications__conv6_IMs_25;
#line 222 "mode_robdd.implications.m"
                mode_robdd__implications__C_26 = (MR_Integer) 1;
#line 219 "mode_robdd.implications.m"
              }
#line 223 "mode_robdd.implications.m"
            else
#line 236 "mode_robdd.implications.m"
              {
#line 236 "mode_robdd.implications.m"
                MR_Word mode_robdd__implications__TVs_28;
#line 224 "mode_robdd.implications.m"
                MR_Word mode_robdd__implications__TypeCtorInfo_87_87;
#line 224 "mode_robdd.implications.m"
                MR_Word mode_robdd__implications__TypeInfo_88_88;
#line 224 "mode_robdd.implications.m"
                MR_Word mode_robdd__implications__conv7_TVs_28;

#line 3110 "mode_robdd.implications.c"
                mode_robdd__implications__TypeCtorInfo_87_87 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3112 "mode_robdd.implications.c"
                {
#line 3114 "mode_robdd.implications.c"
                  mode_robdd__implications__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3116 "mode_robdd.implications.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_88_88, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_87_87));
#line 3118 "mode_robdd.implications.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_88_88, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 3120 "mode_robdd.implications.c"
                }
#line 224 "mode_robdd.implications.m"
                {
#line 224 "mode_robdd.implications.m"
                  mode_robdd__implications__conv7_TVs_28 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__implications__TypeInfo_88_88, (MR_Word) mode_robdd__implications__Ts0_42, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_33);
                }
#line 224 "mode_robdd.implications.m"
                mode_robdd__implications__TVs_28 = (MR_Word) mode_robdd__implications__conv7_TVs_28;
#line 225 "mode_robdd.implications.m"
                {
#line 225 "mode_robdd.implications.m"
                  mode_robdd__implications__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__implications__TypeInfo_88_88, (MR_Word) mode_robdd__implications__TVs_28);
                }
#line 225 "mode_robdd.implications.m"
                mode_robdd__implications__succeeded = !(mode_robdd__implications__succeeded);
#line 236 "mode_robdd.implications.m"
                if (mode_robdd__implications__succeeded)
#line 227 "mode_robdd.implications.m"
                  {
#line 227 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__TypeCtorInfo_89_89;
#line 227 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__TypeInfo_90_90;
#line 227 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__UTVs_29;
#line 229 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__conv8_UTVs_29;

#line 227 "mode_robdd.implications.m"
                    mode_robdd__implications__Ts_23 = mode_robdd__implications__Ts0_42;
#line 228 "mode_robdd.implications.m"
                    mode_robdd__implications__Fs_24 = mode_robdd__implications__Fs0_43;
#line 3153 "mode_robdd.implications.c"
                    mode_robdd__implications__TypeCtorInfo_89_89 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3155 "mode_robdd.implications.c"
                    {
#line 3157 "mode_robdd.implications.c"
                      mode_robdd__implications__TypeInfo_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3159 "mode_robdd.implications.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_90_90, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_89_89));
#line 3161 "mode_robdd.implications.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_90_90, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 3163 "mode_robdd.implications.c"
                    }
#line 229 "mode_robdd.implications.m"
                    {
#line 229 "mode_robdd.implications.m"
                      mode_robdd__implications__conv8_UTVs_29 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__implications__TypeInfo_90_90, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_33, (MR_Word) mode_robdd__implications__TVs_28);
                    }
#line 229 "mode_robdd.implications.m"
                    mode_robdd__implications__UTVs_29 = (MR_Word) mode_robdd__implications__conv8_UTVs_29;
#line 230 "mode_robdd.implications.m"
                    {
#line 230 "mode_robdd.implications.m"
                      mode_robdd__implications__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__implications__TypeInfo_90_90, (MR_Word) mode_robdd__implications__UTVs_29);
                    }
#line 230 "mode_robdd.implications.m"
                    if (mode_robdd__implications__succeeded)
#line 231 "mode_robdd.implications.m"
                      {
#line 231 "mode_robdd.implications.m"
                        MR_Word mode_robdd__implications__TypeCtorInfo_91_91;
#line 231 "mode_robdd.implications.m"
                        MR_Word mode_robdd__implications__TypeInfo_92_92;
#line 231 "mode_robdd.implications.m"
                        MR_Word mode_robdd__implications__conv9_IMs_25;

#line 3188 "mode_robdd.implications.c"
                        mode_robdd__implications__TypeCtorInfo_91_91 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 3190 "mode_robdd.implications.c"
                        {
#line 3192 "mode_robdd.implications.c"
                          mode_robdd__implications__TypeInfo_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3194 "mode_robdd.implications.c"
                          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_92_92, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_91_91));
#line 3196 "mode_robdd.implications.c"
                          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_92_92, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_90_90));
#line 3198 "mode_robdd.implications.c"
                        }
#line 231 "mode_robdd.implications.m"
                        {
#line 231 "mode_robdd.implications.m"
                          mode_robdd__implications__conv9_IMs_25 = mercury__map__delete_2_f_0(mode_robdd__implications__TypeInfo_90_90, mode_robdd__implications__TypeInfo_92_92, (MR_Word) mode_robdd__implications__IMs0_44, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_32)));
                        }
#line 231 "mode_robdd.implications.m"
                        mode_robdd__implications__IMs_25 = (MR_Word) mode_robdd__implications__conv9_IMs_25;
#line 231 "mode_robdd.implications.m"
                      }
#line 230 "mode_robdd.implications.m"
                    else
#line 233 "mode_robdd.implications.m"
                      {
#line 233 "mode_robdd.implications.m"
                        MR_Word mode_robdd__implications__TypeCtorInfo_93_93;
#line 233 "mode_robdd.implications.m"
                        MR_Word mode_robdd__implications__TypeInfo_94_94;
#line 233 "mode_robdd.implications.m"
                        MR_Word mode_robdd__implications__conv10_IMs_25;

#line 3220 "mode_robdd.implications.c"
                        mode_robdd__implications__TypeCtorInfo_93_93 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 3222 "mode_robdd.implications.c"
                        {
#line 3224 "mode_robdd.implications.c"
                          mode_robdd__implications__TypeInfo_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3226 "mode_robdd.implications.c"
                          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_94_94, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_93_93));
#line 3228 "mode_robdd.implications.c"
                          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_94_94, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_90_90));
#line 3230 "mode_robdd.implications.c"
                        }
#line 233 "mode_robdd.implications.m"
                        {
#line 233 "mode_robdd.implications.m"
                          mode_robdd__implications__conv10_IMs_25 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_90_90, mode_robdd__implications__TypeInfo_94_94, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_32)), (MR_Word) mode_robdd__implications__IMs0_44, ((MR_Box) (mode_robdd__implications__UTVs_29)));
                        }
#line 233 "mode_robdd.implications.m"
                        mode_robdd__implications__IMs_25 = (MR_Word) mode_robdd__implications__conv10_IMs_25;
#line 233 "mode_robdd.implications.m"
                      }
#line 235 "mode_robdd.implications.m"
                    mode_robdd__implications__C_26 = (MR_Integer) 1;
#line 227 "mode_robdd.implications.m"
                  }
#line 236 "mode_robdd.implications.m"
                else
#line 237 "mode_robdd.implications.m"
                  {
#line 237 "mode_robdd.implications.m"
                    mode_robdd__implications__Ts_23 = mode_robdd__implications__Ts0_42;
#line 238 "mode_robdd.implications.m"
                    mode_robdd__implications__Fs_24 = mode_robdd__implications__Fs0_43;
#line 239 "mode_robdd.implications.m"
                    mode_robdd__implications__IMs_25 = mode_robdd__implications__IMs0_44;
#line 240 "mode_robdd.implications.m"
                    mode_robdd__implications__C_26 = mode_robdd__implications__C0_45;
#line 237 "mode_robdd.implications.m"
                  }
#line 236 "mode_robdd.implications.m"
              }
#line 223 "mode_robdd.implications.m"
          }
#line 215 "mode_robdd.implications.m"
      }
#line 200 "mode_robdd.implications.m"
    {
#line 200 "mode_robdd.implications.m"
      mode_robdd__implications__LambdaHeadVar__4_35 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 200 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__4_35, 0) = ((MR_Box) (mode_robdd__implications__Ts_23));
#line 200 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__4_35, 1) = ((MR_Box) (mode_robdd__implications__Fs_24));
#line 200 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__4_35, 2) = ((MR_Box) (mode_robdd__implications__IMs_25));
#line 200 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__4_35, 3) = ((MR_Box) (mode_robdd__implications__C_26));
#line 200 "mode_robdd.implications.m"
    }
#line 199 "mode_robdd.implications.m"
    return mode_robdd__implications__LambdaHeadVar__4_35;
#line 199 "mode_robdd.implications.m"
  }
#line 199 "mode_robdd.implications.m"
}

#line 122 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__filter_imp_map__122__1_5_f_0(
#line 122 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
#line 122 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__P_4,
#line 122 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_10,
#line 122 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__2_11,
#line 122 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__3_12)
#line 122 "mode_robdd.implications.m"
{
#line 122 "mode_robdd.implications.m"
  {
#line 122 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 122 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__LambdaHeadVar__4_13;
#line 123 "mode_robdd.implications.m"
    MR_bool MR_CALL (* mode_robdd__implications__func_0)(MR_Box, MR_Box);

#line 123 "mode_robdd.implications.m"
    mode_robdd__implications__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__P_4, (MR_Integer) 1)));
#line 123 "mode_robdd.implications.m"
    {
#line 123 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mode_robdd__implications__func_0(((MR_Box) mode_robdd__implications__P_4), ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_10)));
    }
#line 122 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 124 "mode_robdd.implications.m"
      {
#line 124 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_26_26;
#line 124 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_27_27;
#line 124 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_28;
#line 124 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_29;
#line 124 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_14_14;
#line 124 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv1_V_14_14;

#line 3334 "mode_robdd.implications.c"
        mode_robdd__implications__BaseTypeClassInfo_for_enum_28 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 3336 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_26_26 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3338 "mode_robdd.implications.c"
        {
#line 3340 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3342 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_27_27, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_26_26));
#line 3344 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_27_27, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 3346 "mode_robdd.implications.c"
        }
#line 3348 "mode_robdd.implications.c"
        {
#line 3350 "mode_robdd.implications.c"
          mode_robdd__implications__TypeClassInfo_for_enum_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3352 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_29, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_28));
#line 3354 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_29, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 3356 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_29, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_27_27));
#line 3358 "mode_robdd.implications.c"
        }
#line 124 "mode_robdd.implications.m"
        {
#line 124 "mode_robdd.implications.m"
          mode_robdd__implications__conv1_V_14_14 = mercury__sparse_bitset__filter_2_f_0(mode_robdd__implications__TypeClassInfo_for_enum_29, (MR_Word) mode_robdd__implications__P_4, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_11);
        }
#line 124 "mode_robdd.implications.m"
        mode_robdd__implications__V_14_14 = (MR_Word) mode_robdd__implications__conv1_V_14_14;
#line 122 "mode_robdd.implications.m"
        {
#line 122 "mode_robdd.implications.m"
          mode_robdd__implications__LambdaHeadVar__4_13 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_19, mode_robdd__implications__LambdaHeadVar__1_10, mode_robdd__implications__LambdaHeadVar__3_12, mode_robdd__implications__V_14_14);
        }
#line 124 "mode_robdd.implications.m"
      }
#line 122 "mode_robdd.implications.m"
    else
#line 126 "mode_robdd.implications.m"
      {
#line 126 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_30_30;
#line 126 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_31_31;
#line 126 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_32_32;
#line 126 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_33_33;
#line 126 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv2_LambdaHeadVar__4_13;

#line 3389 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_30_30 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3391 "mode_robdd.implications.c"
        {
#line 3393 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3395 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_31_31, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_30_30));
#line 3397 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_31_31, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 3399 "mode_robdd.implications.c"
        }
#line 3401 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_32_32 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 3403 "mode_robdd.implications.c"
        {
#line 3405 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3407 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_33_33, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_32_32));
#line 3409 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_33_33, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_31_31));
#line 3411 "mode_robdd.implications.c"
        }
#line 126 "mode_robdd.implications.m"
        {
#line 126 "mode_robdd.implications.m"
          mode_robdd__implications__conv2_LambdaHeadVar__4_13 = mercury__map__delete_2_f_0(mode_robdd__implications__TypeInfo_31_31, mode_robdd__implications__TypeInfo_33_33, (MR_Word) mode_robdd__implications__LambdaHeadVar__3_12, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_10)));
        }
#line 126 "mode_robdd.implications.m"
        mode_robdd__implications__LambdaHeadVar__4_13 = (MR_Word) mode_robdd__implications__conv2_LambdaHeadVar__4_13;
#line 126 "mode_robdd.implications.m"
      }
#line 122 "mode_robdd.implications.m"
    return mode_robdd__implications__LambdaHeadVar__4_13;
#line 122 "mode_robdd.implications.m"
  }
#line 122 "mode_robdd.implications.m"
}

#line 362 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_equalities_to_imp_vars__362__1_4_f_0(
#line 362 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
#line 362 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_10,
#line 362 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__2_11,
#line 362 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__3_12)
#line 362 "mode_robdd.implications.m"
{
#line 362 "mode_robdd.implications.m"
  {
#line 362 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 362 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__LambdaHeadVar__4_13;
#line 362 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_14_14;

#line 362 "mode_robdd.implications.m"
    {
#line 362 "mode_robdd.implications.m"
      mode_robdd__implications__V_14_14 = mode_robdd__implications__imp_vars_3_f_0(mode_robdd__implications__TypeInfo_for_T_19, mode_robdd__implications__LambdaHeadVar__1_10, mode_robdd__implications__LambdaHeadVar__2_11, mode_robdd__implications__LambdaHeadVar__3_12);
    }
#line 362 "mode_robdd.implications.m"
    {
#line 362 "mode_robdd.implications.m"
      mode_robdd__implications__LambdaHeadVar__4_13 = mode_robdd__implications__imp_vars_3_f_0(mode_robdd__implications__TypeInfo_for_T_19, mode_robdd__implications__LambdaHeadVar__2_11, mode_robdd__implications__LambdaHeadVar__1_10, mode_robdd__implications__V_14_14);
    }
#line 362 "mode_robdd.implications.m"
    return mode_robdd__implications__LambdaHeadVar__4_13;
#line 362 "mode_robdd.implications.m"
  }
#line 362 "mode_robdd.implications.m"
}

#line 317 "mode_robdd.implications.m"
static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_f_0(
#line 317 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_46,
#line 317 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_31,
#line 317 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__2_32,
#line 317 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__LambdaHeadVar__3_33)
#line 317 "mode_robdd.implications.m"
{
#line 317 "mode_robdd.implications.m"
  {
#line 317 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 317 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__LambdaHeadVar__4_34;
#line 317 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__C_23;
#line 317 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__E_24;
#line 317 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__I_25;
#line 317 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__R_26;
#line 317 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__C0_42;
#line 317 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__E0_43;
#line 317 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__I0_44;
#line 317 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__R0_45;
#line 328 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RVs_27;
#line 328 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__EVs_28;
#line 320 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_67_67;
#line 320 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_68_68;
#line 320 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_69_69;
#line 320 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_70_70;
#line 320 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv0_RVs_27;
#line 321 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv1_EVs_28;

#line 318 "mode_robdd.implications.m"
    mode_robdd__implications__C0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__3_33, (MR_Integer) 0)));
#line 318 "mode_robdd.implications.m"
    mode_robdd__implications__E0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__3_33, (MR_Integer) 1)));
#line 318 "mode_robdd.implications.m"
    mode_robdd__implications__I0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__3_33, (MR_Integer) 2)));
#line 318 "mode_robdd.implications.m"
    mode_robdd__implications__R0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__3_33, (MR_Integer) 3)));
#line 3528 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_67_67 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3530 "mode_robdd.implications.c"
    {
#line 3532 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3534 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_68_68, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_67_67));
#line 3536 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_68_68, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 3538 "mode_robdd.implications.c"
    }
#line 3540 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_69_69 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 3542 "mode_robdd.implications.c"
    {
#line 3544 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3546 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_70_70, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_69_69));
#line 3548 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_70_70, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_68_68));
#line 3550 "mode_robdd.implications.c"
    }
#line 320 "mode_robdd.implications.m"
    {
#line 320 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__map__elem_2_f_0(mode_robdd__implications__TypeInfo_68_68, mode_robdd__implications__TypeInfo_70_70, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_31)), (MR_Word) mode_robdd__implications__R0_45, &mode_robdd__implications__conv0_RVs_27);
    }
#line 320 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 320 "mode_robdd.implications.m"
      {
#line 320 "mode_robdd.implications.m"
        mode_robdd__implications__RVs_27 = ((MR_Word) mode_robdd__implications__conv0_RVs_27);
#line 320 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = MR_TRUE;
#line 320 "mode_robdd.implications.m"
      }
#line 320 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 320 "mode_robdd.implications.m"
      {
#line 321 "mode_robdd.implications.m"
        {
#line 321 "mode_robdd.implications.m"
          mode_robdd__implications__conv1_EVs_28 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__implications__TypeInfo_68_68, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_32, (MR_Word) mode_robdd__implications__RVs_27);
        }
#line 321 "mode_robdd.implications.m"
        mode_robdd__implications__EVs_28 = (MR_Word) mode_robdd__implications__conv1_EVs_28;
#line 322 "mode_robdd.implications.m"
        {
#line 322 "mode_robdd.implications.m"
          mode_robdd__implications__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__implications__TypeInfo_68_68, (MR_Word) mode_robdd__implications__EVs_28);
        }
#line 322 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = !(mode_robdd__implications__succeeded);
#line 320 "mode_robdd.implications.m"
      }
#line 328 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 324 "mode_robdd.implications.m"
      {
#line 324 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_71_71;
#line 324 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_72_72;
#line 324 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_73;
#line 324 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_74;
#line 324 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_35_35;
#line 324 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_36_36;
#line 324 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_37_37;
#line 325 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv2_V_35_35;
#line 326 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv3_V_36_36;
#line 327 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv4_V_37_37;

#line 324 "mode_robdd.implications.m"
        mode_robdd__implications__C_23 = (MR_Integer) 1;
#line 3614 "mode_robdd.implications.c"
        mode_robdd__implications__BaseTypeClassInfo_for_enum_73 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 3616 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_71_71 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3618 "mode_robdd.implications.c"
        {
#line 3620 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3622 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_72_72, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_71_71));
#line 3624 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_72_72, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 3626 "mode_robdd.implications.c"
        }
#line 3628 "mode_robdd.implications.c"
        {
#line 3630 "mode_robdd.implications.c"
          mode_robdd__implications__TypeClassInfo_for_enum_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3632 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_74, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_73));
#line 3634 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_74, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 3636 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_74, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_72_72));
#line 3638 "mode_robdd.implications.c"
        }
#line 325 "mode_robdd.implications.m"
        {
#line 325 "mode_robdd.implications.m"
          mode_robdd__implications__conv2_V_35_35 = mercury__sparse_bitset__insert_2_f_0(mode_robdd__implications__TypeClassInfo_for_enum_74, (MR_Word) mode_robdd__implications__EVs_28, ((MR_Box) (mode_robdd__implications__LambdaHeadVar__1_31)));
        }
#line 325 "mode_robdd.implications.m"
        mode_robdd__implications__V_35_35 = (MR_Word) mode_robdd__implications__conv2_V_35_35;
#line 325 "mode_robdd.implications.m"
        {
#line 325 "mode_robdd.implications.m"
          mode_robdd__implications__E_24 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__implications__TypeInfo_for_T_46, mode_robdd__implications__V_35_35, mode_robdd__implications__E0_43);
        }
#line 326 "mode_robdd.implications.m"
        {
#line 326 "mode_robdd.implications.m"
          mode_robdd__implications__conv3_V_36_36 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__implications__TypeInfo_72_72, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_32, (MR_Word) mode_robdd__implications__RVs_27);
        }
#line 326 "mode_robdd.implications.m"
        mode_robdd__implications__V_36_36 = (MR_Word) mode_robdd__implications__conv3_V_36_36;
#line 326 "mode_robdd.implications.m"
        {
#line 326 "mode_robdd.implications.m"
          mode_robdd__implications__I_25 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_46, mode_robdd__implications__LambdaHeadVar__1_31, mode_robdd__implications__I0_44, mode_robdd__implications__V_36_36);
        }
#line 327 "mode_robdd.implications.m"
        {
#line 327 "mode_robdd.implications.m"
          mode_robdd__implications__conv4_V_37_37 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__implications__TypeInfo_72_72, (MR_Word) mode_robdd__implications__RVs_27, (MR_Word) mode_robdd__implications__LambdaHeadVar__2_32);
        }
#line 327 "mode_robdd.implications.m"
        mode_robdd__implications__V_37_37 = (MR_Word) mode_robdd__implications__conv4_V_37_37;
#line 327 "mode_robdd.implications.m"
        {
#line 327 "mode_robdd.implications.m"
          mode_robdd__implications__R_26 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_46, mode_robdd__implications__LambdaHeadVar__1_31, mode_robdd__implications__R0_45, mode_robdd__implications__V_37_37);
        }
#line 324 "mode_robdd.implications.m"
      }
#line 328 "mode_robdd.implications.m"
    else
#line 329 "mode_robdd.implications.m"
      {
#line 329 "mode_robdd.implications.m"
        mode_robdd__implications__C_23 = mode_robdd__implications__C0_42;
#line 329 "mode_robdd.implications.m"
        mode_robdd__implications__E_24 = mode_robdd__implications__E0_43;
#line 329 "mode_robdd.implications.m"
        mode_robdd__implications__I_25 = mode_robdd__implications__I0_44;
#line 329 "mode_robdd.implications.m"
        mode_robdd__implications__R_26 = mode_robdd__implications__R0_45;
#line 329 "mode_robdd.implications.m"
      }
#line 318 "mode_robdd.implications.m"
    {
#line 318 "mode_robdd.implications.m"
      mode_robdd__implications__LambdaHeadVar__4_34 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 318 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__4_34, 0) = ((MR_Box) (mode_robdd__implications__C_23));
#line 318 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__4_34, 1) = ((MR_Box) (mode_robdd__implications__E_24));
#line 318 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__4_34, 2) = ((MR_Box) (mode_robdd__implications__I_25));
#line 318 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__LambdaHeadVar__4_34, 3) = ((MR_Box) (mode_robdd__implications__R_26));
#line 318 "mode_robdd.implications.m"
    }
#line 317 "mode_robdd.implications.m"
    return mode_robdd__implications__LambdaHeadVar__4_34;
#line 317 "mode_robdd.implications.m"
  }
#line 317 "mode_robdd.implications.m"
}

#line 100 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__restrict_threshold__100__1_3_f_0(
#line 100 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_13,
#line 100 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Threshold_4,
#line 100 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LambdaHeadVar__1_8)
#line 100 "mode_robdd.implications.m"
{
#line 100 "mode_robdd.implications.m"
  {
#line 100 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 100 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__LambdaHeadVar__2_9;
#line 100 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_14_14;
#line 100 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_15_15;
#line 100 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_16_16;
#line 100 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_17_17;
#line 100 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_10_10;
#line 100 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_11_11;
#line 101 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_V_10_10;
#line 101 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv1_V_11_11;

#line 3747 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_14_14 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3749 "mode_robdd.implications.c"
    {
#line 3751 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3753 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_15_15, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_14_14));
#line 3755 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_15_15, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_13));
#line 3757 "mode_robdd.implications.c"
    }
#line 3759 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_16_16 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 3761 "mode_robdd.implications.c"
    {
#line 3763 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3765 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_16_16));
#line 3767 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_15_15));
#line 3769 "mode_robdd.implications.c"
    }
#line 101 "mode_robdd.implications.m"
    {
#line 101 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_V_10_10 = mercury__map__to_assoc_list_1_f_0(mode_robdd__implications__TypeInfo_15_15, mode_robdd__implications__TypeInfo_17_17, (MR_Word) mode_robdd__implications__LambdaHeadVar__1_8);
    }
#line 101 "mode_robdd.implications.m"
    mode_robdd__implications__V_10_10 = (MR_Word) mode_robdd__implications__conv0_V_10_10;
#line 101 "mode_robdd.implications.m"
    {
#line 101 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_V_11_11 = mercury__map__init_0_f_0(mode_robdd__implications__TypeInfo_15_15, mode_robdd__implications__TypeInfo_17_17);
    }
#line 101 "mode_robdd.implications.m"
    mode_robdd__implications__V_11_11 = (MR_Word) mode_robdd__implications__conv1_V_11_11;
#line 101 "mode_robdd.implications.m"
    {
#line 101 "mode_robdd.implications.m"
      mode_robdd__implications__LambdaHeadVar__2_9 = mode_robdd__implications__restrict_threshold_2_3_f_0(mode_robdd__implications__TypeInfo_for_T_13, mode_robdd__implications__Threshold_4, mode_robdd__implications__V_10_10, mode_robdd__implications__V_11_11);
    }
#line 100 "mode_robdd.implications.m"
    return mode_robdd__implications__LambdaHeadVar__2_9;
#line 100 "mode_robdd.implications.m"
  }
#line 100 "mode_robdd.implications.m"
}

#line 509 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications____Compare____mklit_1_0(
#line 509 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_6,
#line 509 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__HeadVar__1_1,
#line 509 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_2,
#line 509 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_3)
#line 509 "mode_robdd.implications.m"
{
#line 509 "mode_robdd.implications.m"
  {
#line 509 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 509 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_7_7;
#line 509 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_8_8;
#line 509 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_9_9;
#line 509 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_10_10;
#line 509 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_11_11;
#line 509 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_13_13;
#line 509 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Cast_HeadVar1_4;
#line 509 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Cast_HeadVar2_5;
#line 509 "mode_robdd.implications.m"
    MR_Integer mode_robdd__implications__PolyConst2_12;

#line 509 "mode_robdd.implications.m"
    mode_robdd__implications__Cast_HeadVar1_4 = mode_robdd__implications__HeadVar__2_2;
#line 509 "mode_robdd.implications.m"
    mode_robdd__implications__Cast_HeadVar2_5 = mode_robdd__implications__HeadVar__3_3;
#line 3837 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_func_0;
#line 3839 "mode_robdd.implications.c"
    mode_robdd__implications__PolyConst2_12 = (MR_Integer) 2;
#line 3841 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_7_7 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3843 "mode_robdd.implications.c"
    {
#line 3845 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3847 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_8_8, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_7_7));
#line 3849 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_8_8, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_6));
#line 3851 "mode_robdd.implications.c"
    }
#line 3853 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_9_9 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
#line 3855 "mode_robdd.implications.c"
    {
#line 3857 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3859 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_9_9));
#line 3861 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_6));
#line 3863 "mode_robdd.implications.c"
    }
#line 3865 "mode_robdd.implications.c"
    {
#line 3867 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 3869 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_13_13, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_11_11));
#line 3871 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_13_13, 1) = ((MR_Box) (mode_robdd__implications__PolyConst2_12));
#line 3873 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_13_13, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_8_8));
#line 3875 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_13_13, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_10_10));
#line 3877 "mode_robdd.implications.c"
    }
#line 509 "mode_robdd.implications.m"
    {
#line 509 "mode_robdd.implications.m"
      mercury__builtin__compare_3_p_0(mode_robdd__implications__TypeInfo_13_13, mode_robdd__implications__HeadVar__1_1, ((MR_Box) (mode_robdd__implications__Cast_HeadVar1_4)), ((MR_Box) (mode_robdd__implications__Cast_HeadVar2_5)));
    }
#line 509 "mode_robdd.implications.m"
  }
#line 509 "mode_robdd.implications.m"
}

#line 509 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications____Unify____mklit_1_0(
#line 509 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_5,
#line 509 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__1_1,
#line 509 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_2)
#line 509 "mode_robdd.implications.m"
{
#line 509 "mode_robdd.implications.m"
  {
#line 509 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 509 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Cast_HeadVar1_3;
#line 509 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Cast_HeadVar2_4;

#line 509 "mode_robdd.implications.m"
    mode_robdd__implications__Cast_HeadVar1_3 = mode_robdd__implications__HeadVar__1_1;
#line 509 "mode_robdd.implications.m"
    mode_robdd__implications__Cast_HeadVar2_4 = mode_robdd__implications__HeadVar__2_2;
#line 509 "mode_robdd.implications.m"
    {
#line 509 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mode_robdd__implications__Cast_HeadVar1_3, (MR_Word) mode_robdd__implications__Cast_HeadVar2_4);
    }
#line 509 "mode_robdd.implications.m"
    return mode_robdd__implications__succeeded;
#line 509 "mode_robdd.implications.m"
  }
#line 509 "mode_robdd.implications.m"
}

#line 244 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications____Compare____extract_0_0(
#line 244 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__HeadVar__1_1,
#line 244 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_2,
#line 244 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_3)
#line 244 "mode_robdd.implications.m"
{
#line 244 "mode_robdd.implications.m"
  {
#line 244 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 244 "mode_robdd.implications.m"
    MR_Integer mode_robdd__implications__Cast_HeadVar1_4;
#line 244 "mode_robdd.implications.m"
    MR_Integer mode_robdd__implications__Cast_HeadVar2_5;

#line 244 "mode_robdd.implications.m"
    mode_robdd__implications__Cast_HeadVar1_4 = (MR_Integer) mode_robdd__implications__HeadVar__2_2;
#line 244 "mode_robdd.implications.m"
    mode_robdd__implications__Cast_HeadVar2_5 = (MR_Integer) mode_robdd__implications__HeadVar__3_3;
#line 244 "mode_robdd.implications.m"
    {
#line 244 "mode_robdd.implications.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mode_robdd__implications__HeadVar__1_1, mode_robdd__implications__Cast_HeadVar1_4, mode_robdd__implications__Cast_HeadVar2_5);
    }
#line 244 "mode_robdd.implications.m"
  }
#line 244 "mode_robdd.implications.m"
}

#line 244 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications____Unify____extract_0_0(
#line 244 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_1,
#line 244 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_2)
#line 244 "mode_robdd.implications.m"
{
#line 3968 "mode_robdd.implications.c"
  {
#line 3970 "mode_robdd.implications.c"
    MR_bool mode_robdd__implications__succeeded;

#line 3973 "mode_robdd.implications.c"
    mode_robdd__implications__succeeded = (mode_robdd__implications__HeadVar__2_1 == mode_robdd__implications__HeadVar__2_2);
#line 3975 "mode_robdd.implications.c"
    return mode_robdd__implications__succeeded;
#line 3977 "mode_robdd.implications.c"
  }
#line 244 "mode_robdd.implications.m"
}

#line 519 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications____Compare____bin_clause_1_0(
#line 519 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_6,
#line 519 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__HeadVar__1_1,
#line 519 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__2_2,
#line 519 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__3_3)
#line 519 "mode_robdd.implications.m"
{
#line 519 "mode_robdd.implications.m"
  {
#line 519 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 519 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_7_7;
#line 519 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_8_8;
#line 519 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_9_9;
#line 519 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_11_11;
#line 519 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__Cast_HeadVar1_4;
#line 519 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__Cast_HeadVar2_5;
#line 519 "mode_robdd.implications.m"
    MR_Integer mode_robdd__implications__PolyConst2_10;

#line 519 "mode_robdd.implications.m"
    mode_robdd__implications__Cast_HeadVar1_4 = mode_robdd__implications__HeadVar__2_2;
#line 519 "mode_robdd.implications.m"
    mode_robdd__implications__Cast_HeadVar2_5 = mode_robdd__implications__HeadVar__3_3;
#line 4018 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 4020 "mode_robdd.implications.c"
    mode_robdd__implications__PolyConst2_10 = (MR_Integer) 2;
#line 4022 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_7_7 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
#line 4024 "mode_robdd.implications.c"
    {
#line 4026 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4028 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_8_8, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_7_7));
#line 4030 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_8_8, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_6));
#line 4032 "mode_robdd.implications.c"
    }
#line 4034 "mode_robdd.implications.c"
    {
#line 4036 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 4038 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_11_11, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_9_9));
#line 4040 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_11_11, 1) = ((MR_Box) (mode_robdd__implications__PolyConst2_10));
#line 4042 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_11_11, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_8_8));
#line 4044 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_11_11, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_8_8));
#line 4046 "mode_robdd.implications.c"
    }
#line 519 "mode_robdd.implications.m"
    {
#line 519 "mode_robdd.implications.m"
      mercury__builtin__compare_3_p_0(mode_robdd__implications__TypeInfo_11_11, mode_robdd__implications__HeadVar__1_1, ((MR_Box) (mode_robdd__implications__Cast_HeadVar1_4)), ((MR_Box) (mode_robdd__implications__Cast_HeadVar2_5)));
    }
#line 519 "mode_robdd.implications.m"
  }
#line 519 "mode_robdd.implications.m"
}

#line 519 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications____Unify____bin_clause_1_0(
#line 519 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_5,
#line 519 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__1_1,
#line 519 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__2_2)
#line 519 "mode_robdd.implications.m"
{
#line 519 "mode_robdd.implications.m"
  {
#line 519 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 519 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_6_6;
#line 519 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_7_7;
#line 519 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_8_8;
#line 519 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_10_10;
#line 519 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__Cast_HeadVar1_3;
#line 519 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__Cast_HeadVar2_4;
#line 519 "mode_robdd.implications.m"
    MR_Integer mode_robdd__implications__PolyConst2_9;

#line 519 "mode_robdd.implications.m"
    mode_robdd__implications__Cast_HeadVar1_3 = mode_robdd__implications__HeadVar__1_1;
#line 519 "mode_robdd.implications.m"
    mode_robdd__implications__Cast_HeadVar2_4 = mode_robdd__implications__HeadVar__2_2;
#line 4092 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 4094 "mode_robdd.implications.c"
    mode_robdd__implications__PolyConst2_9 = (MR_Integer) 2;
#line 4096 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_6_6 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
#line 4098 "mode_robdd.implications.c"
    {
#line 4100 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4102 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_7_7, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_6_6));
#line 4104 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_7_7, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_5));
#line 4106 "mode_robdd.implications.c"
    }
#line 4108 "mode_robdd.implications.c"
    {
#line 4110 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 4112 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_8_8));
#line 4114 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__implications__PolyConst2_9));
#line 4116 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_7_7));
#line 4118 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_7_7));
#line 4120 "mode_robdd.implications.c"
    }
#line 519 "mode_robdd.implications.m"
    {
#line 519 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__builtin__unify_2_p_0(mode_robdd__implications__TypeInfo_10_10, ((MR_Box) (mode_robdd__implications__Cast_HeadVar1_3)), ((MR_Box) (mode_robdd__implications__Cast_HeadVar2_4)));
    }
#line 519 "mode_robdd.implications.m"
    return mode_robdd__implications__succeeded;
#line 519 "mode_robdd.implications.m"
  }
#line 519 "mode_robdd.implications.m"
}

#line 586 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__add_imp_map_clauses_4_f_0_1(
#line 586 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 586 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 586 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 586 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3)
#line 586 "mode_robdd.implications.m"
{
#line 586 "mode_robdd.implications.m"
  {
#line 586 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_4;
#line 586 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 586 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_LambdaHeadVar__4_19;

#line 586 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 586 "mode_robdd.implications.m"
    {
#line 586 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_LambdaHeadVar__4_19 = mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__586__1_6_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 5))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Word) mode_robdd__implications__wrapper_arg_3));
    }
#line 586 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__4_19));
#line 586 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_4;
#line 586 "mode_robdd.implications.m"
  }
#line 586 "mode_robdd.implications.m"
}

#line 582 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__add_imp_map_clauses_4_f_0(
#line 582 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_32,
#line 582 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__MkLitA_6,
#line 582 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__MkLitB_7,
#line 582 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IM_8,
#line 582 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_9)
#line 582 "mode_robdd.implications.m"
{
#line 585 "mode_robdd.implications.m"
  {
#line 585 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 585 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__5_5;
#line 585 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_33_33;
#line 585 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_34_34;
#line 585 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_35_35;
#line 585 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_36_36;
#line 585 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_37_37;
#line 585 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_38_38;
#line 585 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_15_15;
#line 586 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv1_HeadVar__5_5;

#line 4210 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_33_33 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 4212 "mode_robdd.implications.c"
    {
#line 4214 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4216 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_34_34, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_33_33));
#line 4218 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_34_34, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
#line 4220 "mode_robdd.implications.c"
    }
#line 4222 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_35_35 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 4224 "mode_robdd.implications.c"
    {
#line 4226 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4228 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_36_36, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_35_35));
#line 4230 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_36_36, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_34_34));
#line 4232 "mode_robdd.implications.c"
    }
#line 4234 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_37_37 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_imp_vars_1;
#line 4236 "mode_robdd.implications.c"
    {
#line 4238 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4240 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_38_38, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_37_37));
#line 4242 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_38_38, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
#line 4244 "mode_robdd.implications.c"
    }
#line 586 "mode_robdd.implications.m"
    {
#line 586 "mode_robdd.implications.m"
      mode_robdd__implications__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 586 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_6[0]));
#line 586 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 1) = ((MR_Box) (mode_robdd__implications__add_imp_map_clauses_4_f_0_1));
#line 586 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 586 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
#line 586 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 4) = ((MR_Box) (mode_robdd__implications__MkLitA_6));
#line 586 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 5) = ((MR_Box) (mode_robdd__implications__MkLitB_7));
#line 586 "mode_robdd.implications.m"
    }
#line 586 "mode_robdd.implications.m"
    {
#line 586 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_HeadVar__5_5 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_34_34, mode_robdd__implications__TypeInfo_36_36, mode_robdd__implications__TypeInfo_38_38, (MR_Word) mode_robdd__implications__V_15_15, (MR_Word) mode_robdd__implications__IM_8, ((MR_Box) (mode_robdd__implications__ImpVars_9)));
    }
#line 586 "mode_robdd.implications.m"
    mode_robdd__implications__HeadVar__5_5 = ((MR_Word) mode_robdd__implications__conv1_HeadVar__5_5);
#line 585 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__5_5;
#line 585 "mode_robdd.implications.m"
  }
#line 582 "mode_robdd.implications.m"
}

#line 571 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__get_literals_2_f_0_2(
#line 571 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 571 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1)
#line 571 "mode_robdd.implications.m"
{
#line 571 "mode_robdd.implications.m"
  {
#line 571 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_2;
#line 571 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 571 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv1_HeadVar__2_2;

#line 571 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 571 "mode_robdd.implications.m"
    {
#line 571 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_HeadVar__2_2 = mode_robdd__implications__mkneg_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 571 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv1_HeadVar__2_2));
#line 571 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 571 "mode_robdd.implications.m"
  }
#line 571 "mode_robdd.implications.m"
}

#line 570 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__get_literals_2_f_0_1(
#line 570 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 570 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1)
#line 570 "mode_robdd.implications.m"
{
#line 570 "mode_robdd.implications.m"
  {
#line 570 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_2;
#line 570 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 570 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__2_2;

#line 570 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 570 "mode_robdd.implications.m"
    {
#line 570 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__2_2 = mode_robdd__implications__mkpos_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 570 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__2_2));
#line 570 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 570 "mode_robdd.implications.m"
  }
#line 570 "mode_robdd.implications.m"
}

#line 567 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__get_literals_2_f_0(
#line 567 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_32,
#line 567 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LitA_4,
#line 567 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_5)
#line 567 "mode_robdd.implications.m"
{
#line 571 "mode_robdd.implications.m"
  {
#line 571 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 571 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 571 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_33_33;
#line 571 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_34_34;
#line 571 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_35_35;
#line 571 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_36_36;
#line 571 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_39;
#line 571 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeClassInfo_for_enum_40;
#line 571 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Pos_6;
#line 571 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Neg_7;
#line 571 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_9_9;
#line 571 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_10_10;
#line 571 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_11_11;
#line 571 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_12_12;
#line 571 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_13_13;
#line 571 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_14_14;
#line 571 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_43_43;
#line 571 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_46_46;
#line 578 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_44_44;
#line 578 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_45_45;
#line 570 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv2_V_11_11;
#line 571 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv3_V_14_14;
#line 570 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv4_HeadVar__3_3;

#line 4406 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_33_33 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
#line 4408 "mode_robdd.implications.c"
    {
#line 4410 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4412 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_34_34, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_33_33));
#line 4414 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_34_34, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
#line 4416 "mode_robdd.implications.c"
    }
#line 4418 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 4420 "mode_robdd.implications.c"
    {
#line 4422 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4424 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_36_36, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_35_35));
#line 4426 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_36_36, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
#line 4428 "mode_robdd.implications.c"
    }
#line 570 "mode_robdd.implications.m"
    {
#line 570 "mode_robdd.implications.m"
      mode_robdd__implications__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 570 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
#line 570 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 1) = ((MR_Box) (mode_robdd__implications__get_literals_2_f_0_1));
#line 570 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 570 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
#line 570 "mode_robdd.implications.m"
    }
#line 4444 "mode_robdd.implications.c"
    mode_robdd__implications__BaseTypeClassInfo_for_enum_39 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 4446 "mode_robdd.implications.c"
    {
#line 4448 "mode_robdd.implications.c"
      mode_robdd__implications__TypeClassInfo_for_enum_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4450 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_40, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_39));
#line 4452 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_40, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
#line 4454 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_40, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_36_36));
#line 4456 "mode_robdd.implications.c"
    }
#line 571 "mode_robdd.implications.m"
    {
#line 571 "mode_robdd.implications.m"
      mode_robdd__implications__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 571 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_13_13, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
#line 571 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_13_13, 1) = ((MR_Box) (mode_robdd__implications__get_literals_2_f_0_2));
#line 571 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 571 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_13_13, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
#line 571 "mode_robdd.implications.m"
    }
#line 578 "mode_robdd.implications.m"
    mode_robdd__implications__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 0)));
#line 578 "mode_robdd.implications.m"
    mode_robdd__implications__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 1)));
#line 578 "mode_robdd.implications.m"
    mode_robdd__implications__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 2)));
#line 578 "mode_robdd.implications.m"
    mode_robdd__implications__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 3)));
#line 576 "mode_robdd.implications.m"
    if (((MR_tag((MR_Word) mode_robdd__implications__LitA_4)) == (MR_mktag((MR_Integer) 1))))
#line 577 "mode_robdd.implications.m"
      {
#line 577 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_16_16;
#line 577 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__VarA_19;
#line 579 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_29_29;
#line 579 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_30_30;
#line 579 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_31_31;

#line 577 "mode_robdd.implications.m"
        mode_robdd__implications__VarA_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__implications__LitA_4, (MR_Integer) 0)));
#line 578 "mode_robdd.implications.m"
        {
#line 578 "mode_robdd.implications.m"
          mode_robdd__implications__Pos_6 = mode_robdd__implications__entry_2_f_0(mode_robdd__implications__TypeInfo_for_T_32, mode_robdd__implications__VarA_19, mode_robdd__implications__V_43_43);
        }
#line 579 "mode_robdd.implications.m"
        mode_robdd__implications__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 0)));
#line 579 "mode_robdd.implications.m"
        mode_robdd__implications__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 1)));
#line 579 "mode_robdd.implications.m"
        mode_robdd__implications__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 2)));
#line 579 "mode_robdd.implications.m"
        mode_robdd__implications__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 3)));
#line 579 "mode_robdd.implications.m"
        {
#line 579 "mode_robdd.implications.m"
          mode_robdd__implications__Neg_7 = mode_robdd__implications__entry_2_f_0(mode_robdd__implications__TypeInfo_for_T_32, mode_robdd__implications__VarA_19, mode_robdd__implications__V_16_16);
        }
#line 577 "mode_robdd.implications.m"
      }
#line 576 "mode_robdd.implications.m"
    else
#line 573 "mode_robdd.implications.m"
      {
#line 573 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__VarA_8;
#line 573 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_18_18;
#line 575 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_23_23;
#line 575 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_24_24;
#line 575 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_25_25;

#line 573 "mode_robdd.implications.m"
        mode_robdd__implications__VarA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__LitA_4, (MR_Integer) 0)));
#line 574 "mode_robdd.implications.m"
        {
#line 574 "mode_robdd.implications.m"
          mode_robdd__implications__Pos_6 = mode_robdd__implications__entry_2_f_0(mode_robdd__implications__TypeInfo_for_T_32, mode_robdd__implications__VarA_8, mode_robdd__implications__V_46_46);
        }
#line 575 "mode_robdd.implications.m"
        mode_robdd__implications__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 0)));
#line 575 "mode_robdd.implications.m"
        mode_robdd__implications__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 1)));
#line 575 "mode_robdd.implications.m"
        mode_robdd__implications__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 2)));
#line 575 "mode_robdd.implications.m"
        mode_robdd__implications__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 3)));
#line 575 "mode_robdd.implications.m"
        {
#line 575 "mode_robdd.implications.m"
          mode_robdd__implications__Neg_7 = mode_robdd__implications__entry_2_f_0(mode_robdd__implications__TypeInfo_for_T_32, mode_robdd__implications__VarA_8, mode_robdd__implications__V_18_18);
        }
#line 573 "mode_robdd.implications.m"
      }
#line 570 "mode_robdd.implications.m"
    {
#line 570 "mode_robdd.implications.m"
      mode_robdd__implications__conv2_V_11_11 = mercury__sparse_bitset__to_sorted_list_1_f_0(mode_robdd__implications__TypeClassInfo_for_enum_40, (MR_Word) mode_robdd__implications__Pos_6);
    }
#line 570 "mode_robdd.implications.m"
    mode_robdd__implications__V_11_11 = (MR_Word) mode_robdd__implications__conv2_V_11_11;
#line 570 "mode_robdd.implications.m"
    {
#line 570 "mode_robdd.implications.m"
      mode_robdd__implications__V_9_9 = mercury__list__map_2_f_0(mode_robdd__implications__TypeInfo_36_36, mode_robdd__implications__TypeInfo_34_34, (MR_Word) mode_robdd__implications__V_10_10, (MR_Word) mode_robdd__implications__V_11_11);
    }
#line 571 "mode_robdd.implications.m"
    {
#line 571 "mode_robdd.implications.m"
      mode_robdd__implications__conv3_V_14_14 = mercury__sparse_bitset__to_sorted_list_1_f_0(mode_robdd__implications__TypeClassInfo_for_enum_40, (MR_Word) mode_robdd__implications__Neg_7);
    }
#line 571 "mode_robdd.implications.m"
    mode_robdd__implications__V_14_14 = (MR_Word) mode_robdd__implications__conv3_V_14_14;
#line 571 "mode_robdd.implications.m"
    {
#line 571 "mode_robdd.implications.m"
      mode_robdd__implications__V_12_12 = mercury__list__map_2_f_0(mode_robdd__implications__TypeInfo_36_36, mode_robdd__implications__TypeInfo_34_34, (MR_Word) mode_robdd__implications__V_13_13, (MR_Word) mode_robdd__implications__V_14_14);
    }
#line 570 "mode_robdd.implications.m"
    {
#line 570 "mode_robdd.implications.m"
      mode_robdd__implications__conv4_HeadVar__3_3 = mercury__list__f_43_43_2_f_0(mode_robdd__implications__TypeInfo_34_34, (MR_Word) mode_robdd__implications__V_9_9, (MR_Word) mode_robdd__implications__V_12_12);
    }
#line 570 "mode_robdd.implications.m"
    mode_robdd__implications__HeadVar__3_3 = (MR_Word) mode_robdd__implications__conv4_HeadVar__3_3;
#line 571 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 571 "mode_robdd.implications.m"
  }
#line 567 "mode_robdd.implications.m"
}

#line 565 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__get_resolvents_2_3_f_0_1(
#line 565 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 565 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1)
#line 565 "mode_robdd.implications.m"
{
#line 565 "mode_robdd.implications.m"
  {
#line 565 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_2;
#line 565 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 565 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__conv0_LambdaHeadVar__2_13;

#line 565 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 565 "mode_robdd.implications.m"
    {
#line 565 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_LambdaHeadVar__2_13 = mode_robdd__implications__IntroducedFrom__func__get_resolvents_2__565__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 565 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__2_13));
#line 565 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 565 "mode_robdd.implications.m"
  }
#line 565 "mode_robdd.implications.m"
}

#line 560 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__get_resolvents_2_3_f_0(
#line 560 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_15,
#line 560 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LitA_5,
#line 560 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LitB_6,
#line 560 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_7)
#line 560 "mode_robdd.implications.m"
{
#line 563 "mode_robdd.implications.m"
  {
#line 563 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 563 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Clauses_8;
#line 563 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_16_16;
#line 563 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_17_17;
#line 563 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_18_18;
#line 563 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_20_20;
#line 563 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Literals_9;
#line 563 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_11_11;
#line 563 "mode_robdd.implications.m"
    MR_Integer mode_robdd__implications__PolyConst2_19;

#line 564 "mode_robdd.implications.m"
    {
#line 564 "mode_robdd.implications.m"
      mode_robdd__implications__Literals_9 = mode_robdd__implications__get_literals_2_f_0(mode_robdd__implications__TypeInfo_for_T_15, mode_robdd__implications__LitA_5, mode_robdd__implications__ImpVars_7);
    }
#line 4665 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_16_16 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
#line 4667 "mode_robdd.implications.c"
    {
#line 4669 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4671 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_16_16));
#line 4673 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_15));
#line 4675 "mode_robdd.implications.c"
    }
#line 4677 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 4679 "mode_robdd.implications.c"
    mode_robdd__implications__PolyConst2_19 = (MR_Integer) 2;
#line 4681 "mode_robdd.implications.c"
    {
#line 4683 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 4685 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_20_20, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_18_18));
#line 4687 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_20_20, 1) = ((MR_Box) (mode_robdd__implications__PolyConst2_19));
#line 4689 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_20_20, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_17_17));
#line 4691 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_20_20, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_17_17));
#line 4693 "mode_robdd.implications.c"
    }
#line 565 "mode_robdd.implications.m"
    {
#line 565 "mode_robdd.implications.m"
      mode_robdd__implications__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 565 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_11_11, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[4]));
#line 565 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_11_11, 1) = ((MR_Box) (mode_robdd__implications__get_resolvents_2_3_f_0_1));
#line 565 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 565 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_11_11, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_15));
#line 565 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_11_11, 4) = ((MR_Box) (mode_robdd__implications__LitB_6));
#line 565 "mode_robdd.implications.m"
    }
#line 565 "mode_robdd.implications.m"
    {
#line 565 "mode_robdd.implications.m"
      mode_robdd__implications__Clauses_8 = mercury__list__map_2_f_0(mode_robdd__implications__TypeInfo_17_17, mode_robdd__implications__TypeInfo_20_20, (MR_Word) mode_robdd__implications__V_11_11, (MR_Word) mode_robdd__implications__Literals_9);
    }
#line 563 "mode_robdd.implications.m"
    return mode_robdd__implications__Clauses_8;
#line 563 "mode_robdd.implications.m"
  }
#line 560 "mode_robdd.implications.m"
}

#line 554 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__get_resolvents_2_f_0(
#line 554 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_9,
#line 554 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__1_1,
#line 554 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_6)
#line 554 "mode_robdd.implications.m"
{
#line 556 "mode_robdd.implications.m"
  {
#line 556 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 556 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 556 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_10_10;
#line 556 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_11_11;
#line 556 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_12_12;
#line 556 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_14_14;
#line 556 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__LitA_4;
#line 556 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__LitB_5;
#line 556 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_7_7;
#line 556 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_8_8;
#line 556 "mode_robdd.implications.m"
    MR_Integer mode_robdd__implications__PolyConst2_13;
#line 557 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__3_3;

#line 556 "mode_robdd.implications.m"
    mode_robdd__implications__LitA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 0)));
#line 556 "mode_robdd.implications.m"
    mode_robdd__implications__LitB_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 1)));
#line 4765 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 4767 "mode_robdd.implications.c"
    mode_robdd__implications__PolyConst2_13 = (MR_Integer) 2;
#line 4769 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_10_10 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
#line 4771 "mode_robdd.implications.c"
    {
#line 4773 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4775 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_11_11, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_10_10));
#line 4777 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_11_11, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_9));
#line 4779 "mode_robdd.implications.c"
    }
#line 4781 "mode_robdd.implications.c"
    {
#line 4783 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 4785 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_12_12));
#line 4787 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 1) = ((MR_Box) (mode_robdd__implications__PolyConst2_13));
#line 4789 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_11_11));
#line 4791 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_11_11));
#line 4793 "mode_robdd.implications.c"
    }
#line 557 "mode_robdd.implications.m"
    {
#line 557 "mode_robdd.implications.m"
      mode_robdd__implications__V_7_7 = mode_robdd__implications__get_resolvents_2_3_f_0(mode_robdd__implications__TypeInfo_for_T_9, mode_robdd__implications__LitA_4, mode_robdd__implications__LitB_5, mode_robdd__implications__ImpVars_6);
    }
#line 558 "mode_robdd.implications.m"
    {
#line 558 "mode_robdd.implications.m"
      mode_robdd__implications__V_8_8 = mode_robdd__implications__get_resolvents_2_3_f_0(mode_robdd__implications__TypeInfo_for_T_9, mode_robdd__implications__LitB_5, mode_robdd__implications__LitA_4, mode_robdd__implications__ImpVars_6);
    }
#line 557 "mode_robdd.implications.m"
    {
#line 557 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__3_3 = mercury__list__f_43_43_2_f_0(mode_robdd__implications__TypeInfo_14_14, (MR_Word) mode_robdd__implications__V_7_7, (MR_Word) mode_robdd__implications__V_8_8);
    }
#line 557 "mode_robdd.implications.m"
    mode_robdd__implications__HeadVar__3_3 = (MR_Word) mode_robdd__implications__conv0_HeadVar__3_3;
#line 556 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 556 "mode_robdd.implications.m"
  }
#line 554 "mode_robdd.implications.m"
}

#line 539 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications__add_clause_2_2_f_0(
#line 539 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_100,
#line 539 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__1_1,
#line 539 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_2,
#line 539 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__HeadVar__3_3)
#line 539 "mode_robdd.implications.m"
{
#line 541 "mode_robdd.implications.m"
  {
#line 541 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 541 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_101_101;
#line 541 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_102_102;
#line 541 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_103_103;
#line 541 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_104_104;
#line 541 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_105_105;
#line 541 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_106_106;
#line 541 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_107_107;
#line 541 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_108_108;
#line 541 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_109_109;
#line 541 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_110_110;

#line 541 "mode_robdd.implications.m"
    mode_robdd__implications__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 0)));
#line 541 "mode_robdd.implications.m"
    mode_robdd__implications__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 1)));
#line 541 "mode_robdd.implications.m"
    mode_robdd__implications__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_2, (MR_Integer) 0)));
#line 541 "mode_robdd.implications.m"
    mode_robdd__implications__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_2, (MR_Integer) 1)));
#line 541 "mode_robdd.implications.m"
    mode_robdd__implications__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_2, (MR_Integer) 2)));
#line 541 "mode_robdd.implications.m"
    mode_robdd__implications__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_2, (MR_Integer) 3)));
#line 541 "mode_robdd.implications.m"
    mode_robdd__implications__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_2, (MR_Integer) 0)));
#line 541 "mode_robdd.implications.m"
    mode_robdd__implications__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_2, (MR_Integer) 1)));
#line 541 "mode_robdd.implications.m"
    mode_robdd__implications__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_2, (MR_Integer) 2)));
#line 541 "mode_robdd.implications.m"
    mode_robdd__implications__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_2, (MR_Integer) 3)));
#line 541 "mode_robdd.implications.m"
    if (((MR_tag((MR_Word) mode_robdd__implications__V_101_101)) == (MR_mktag((MR_Integer) 1))))
#line 541 "mode_robdd.implications.m"
      {
#line 541 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_111_111;

#line 544 "mode_robdd.implications.m"
        mode_robdd__implications__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__implications__V_101_101, (MR_Integer) 0)));
#line 541 "mode_robdd.implications.m"
        if (((MR_tag((MR_Word) mode_robdd__implications__V_102_102)) == (MR_mktag((MR_Integer) 1))))
#line 547 "mode_robdd.implications.m"
          {
#line 547 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__VA_24;
#line 547 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_29_29;
#line 547 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_30_30;
#line 547 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_31_31;
#line 547 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_33_33;
#line 547 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_79_79;
#line 547 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_80_80;
#line 547 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_81_81;
#line 547 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_82_82;
#line 547 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_83_83;
#line 547 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_85_85;
#line 547 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_84_84;

#line 547 "mode_robdd.implications.m"
            mode_robdd__implications__VA_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__implications__V_102_102, (MR_Integer) 0)));
#line 547 "mode_robdd.implications.m"
            {
#line 547 "mode_robdd.implications.m"
              mode_robdd__implications__succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_100, mode_robdd__implications__VA_24, mode_robdd__implications__V_104_104, mode_robdd__implications__V_111_111, &mode_robdd__implications__V_33_33);
            }
#line 547 "mode_robdd.implications.m"
            if (mode_robdd__implications__succeeded)
#line 547 "mode_robdd.implications.m"
              {
#line 547 "mode_robdd.implications.m"
                {
#line 547 "mode_robdd.implications.m"
                  mode_robdd__implications__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 547 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, 0) = ((MR_Box) (mode_robdd__implications__V_110_110));
#line 547 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, 1) = ((MR_Box) (mode_robdd__implications__V_109_109));
#line 547 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, 2) = ((MR_Box) (mode_robdd__implications__V_33_33));
#line 547 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, 3) = ((MR_Box) (mode_robdd__implications__V_107_107));
#line 547 "mode_robdd.implications.m"
                }
#line 547 "mode_robdd.implications.m"
                mode_robdd__implications__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, (MR_Integer) 0)));
#line 547 "mode_robdd.implications.m"
                mode_robdd__implications__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, (MR_Integer) 1)));
#line 547 "mode_robdd.implications.m"
                mode_robdd__implications__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, (MR_Integer) 2)));
#line 547 "mode_robdd.implications.m"
                mode_robdd__implications__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, (MR_Integer) 3)));
#line 547 "mode_robdd.implications.m"
                {
#line 547 "mode_robdd.implications.m"
                  mode_robdd__implications__succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_100, mode_robdd__implications__V_111_111, mode_robdd__implications__V_30_30, mode_robdd__implications__VA_24, &mode_robdd__implications__V_31_31);
                }
#line 547 "mode_robdd.implications.m"
                if (mode_robdd__implications__succeeded)
#line 547 "mode_robdd.implications.m"
                  {
#line 547 "mode_robdd.implications.m"
                    mode_robdd__implications__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, (MR_Integer) 0)));
#line 547 "mode_robdd.implications.m"
                    mode_robdd__implications__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, (MR_Integer) 1)));
#line 547 "mode_robdd.implications.m"
                    mode_robdd__implications__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, (MR_Integer) 2)));
#line 547 "mode_robdd.implications.m"
                    mode_robdd__implications__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, (MR_Integer) 3)));
#line 547 "mode_robdd.implications.m"
                    {
#line 547 "mode_robdd.implications.m"
                      MR_Word base;
#line 547 "mode_robdd.implications.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 547 "mode_robdd.implications.m"
                      *mode_robdd__implications__HeadVar__3_3 = base;
#line 547 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__implications__V_82_82));
#line 547 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mode_robdd__implications__V_83_83));
#line 547 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mode_robdd__implications__V_31_31));
#line 547 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mode_robdd__implications__V_85_85));
#line 547 "mode_robdd.implications.m"
                    }
#line 547 "mode_robdd.implications.m"
                    mode_robdd__implications__succeeded = MR_TRUE;
#line 547 "mode_robdd.implications.m"
                  }
#line 547 "mode_robdd.implications.m"
              }
#line 547 "mode_robdd.implications.m"
          }
#line 541 "mode_robdd.implications.m"
        else
#line 544 "mode_robdd.implications.m"
          {
#line 544 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__VA_14;
#line 544 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_19_19;
#line 544 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_20_20;
#line 544 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_21_21;
#line 544 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_23_23;
#line 544 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_65_65;
#line 544 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_66_66;
#line 544 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_67_67;
#line 544 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_69_69;
#line 544 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_70_70;
#line 544 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_71_71;
#line 544 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_68_68;

#line 544 "mode_robdd.implications.m"
            mode_robdd__implications__VA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_102_102, (MR_Integer) 0)));
#line 544 "mode_robdd.implications.m"
            {
#line 544 "mode_robdd.implications.m"
              mode_robdd__implications__succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_100, mode_robdd__implications__VA_14, mode_robdd__implications__V_105_105, mode_robdd__implications__V_111_111, &mode_robdd__implications__V_23_23);
            }
#line 544 "mode_robdd.implications.m"
            if (mode_robdd__implications__succeeded)
#line 544 "mode_robdd.implications.m"
              {
#line 544 "mode_robdd.implications.m"
                {
#line 544 "mode_robdd.implications.m"
                  mode_robdd__implications__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 544 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, 0) = ((MR_Box) (mode_robdd__implications__V_110_110));
#line 544 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, 1) = ((MR_Box) (mode_robdd__implications__V_23_23));
#line 544 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, 2) = ((MR_Box) (mode_robdd__implications__V_108_108));
#line 544 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, 3) = ((MR_Box) (mode_robdd__implications__V_107_107));
#line 544 "mode_robdd.implications.m"
                }
#line 544 "mode_robdd.implications.m"
                mode_robdd__implications__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, (MR_Integer) 0)));
#line 544 "mode_robdd.implications.m"
                mode_robdd__implications__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, (MR_Integer) 1)));
#line 544 "mode_robdd.implications.m"
                mode_robdd__implications__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, (MR_Integer) 2)));
#line 544 "mode_robdd.implications.m"
                mode_robdd__implications__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, (MR_Integer) 3)));
#line 544 "mode_robdd.implications.m"
                {
#line 544 "mode_robdd.implications.m"
                  mode_robdd__implications__succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_100, mode_robdd__implications__V_111_111, mode_robdd__implications__V_20_20, mode_robdd__implications__VA_14, &mode_robdd__implications__V_21_21);
                }
#line 544 "mode_robdd.implications.m"
                if (mode_robdd__implications__succeeded)
#line 544 "mode_robdd.implications.m"
                  {
#line 544 "mode_robdd.implications.m"
                    mode_robdd__implications__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, (MR_Integer) 0)));
#line 544 "mode_robdd.implications.m"
                    mode_robdd__implications__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, (MR_Integer) 1)));
#line 544 "mode_robdd.implications.m"
                    mode_robdd__implications__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, (MR_Integer) 2)));
#line 544 "mode_robdd.implications.m"
                    mode_robdd__implications__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, (MR_Integer) 3)));
#line 544 "mode_robdd.implications.m"
                    {
#line 544 "mode_robdd.implications.m"
                      MR_Word base;
#line 544 "mode_robdd.implications.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 544 "mode_robdd.implications.m"
                      *mode_robdd__implications__HeadVar__3_3 = base;
#line 544 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__implications__V_21_21));
#line 544 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mode_robdd__implications__V_69_69));
#line 544 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mode_robdd__implications__V_70_70));
#line 544 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mode_robdd__implications__V_71_71));
#line 544 "mode_robdd.implications.m"
                    }
#line 544 "mode_robdd.implications.m"
                    mode_robdd__implications__succeeded = MR_TRUE;
#line 544 "mode_robdd.implications.m"
                  }
#line 544 "mode_robdd.implications.m"
              }
#line 544 "mode_robdd.implications.m"
          }
#line 541 "mode_robdd.implications.m"
      }
#line 541 "mode_robdd.implications.m"
    else
#line 541 "mode_robdd.implications.m"
      {
#line 541 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_112_112;

#line 541 "mode_robdd.implications.m"
        mode_robdd__implications__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_101_101, (MR_Integer) 0)));
#line 541 "mode_robdd.implications.m"
        if (((MR_tag((MR_Word) mode_robdd__implications__V_102_102)) == (MR_mktag((MR_Integer) 1))))
#line 541 "mode_robdd.implications.m"
          {
#line 541 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__VA_4;
#line 541 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_9_9;
#line 541 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_10_10;
#line 541 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_11_11;
#line 541 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_13_13;
#line 541 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_51_51;
#line 541 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_52_52;
#line 541 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_53_53;
#line 541 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_54_54;
#line 541 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_56_56;
#line 541 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_57_57;
#line 541 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_55_55;

#line 541 "mode_robdd.implications.m"
            mode_robdd__implications__VA_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__implications__V_102_102, (MR_Integer) 0)));
#line 541 "mode_robdd.implications.m"
            {
#line 541 "mode_robdd.implications.m"
              mode_robdd__implications__succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_100, mode_robdd__implications__VA_4, mode_robdd__implications__V_106_106, mode_robdd__implications__V_112_112, &mode_robdd__implications__V_13_13);
            }
#line 541 "mode_robdd.implications.m"
            if (mode_robdd__implications__succeeded)
#line 541 "mode_robdd.implications.m"
              {
#line 541 "mode_robdd.implications.m"
                {
#line 541 "mode_robdd.implications.m"
                  mode_robdd__implications__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 541 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 0) = ((MR_Box) (mode_robdd__implications__V_13_13));
#line 541 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 1) = ((MR_Box) (mode_robdd__implications__V_109_109));
#line 541 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 2) = ((MR_Box) (mode_robdd__implications__V_108_108));
#line 541 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 3) = ((MR_Box) (mode_robdd__implications__V_107_107));
#line 541 "mode_robdd.implications.m"
                }
#line 541 "mode_robdd.implications.m"
                mode_robdd__implications__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, (MR_Integer) 0)));
#line 541 "mode_robdd.implications.m"
                mode_robdd__implications__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, (MR_Integer) 1)));
#line 541 "mode_robdd.implications.m"
                mode_robdd__implications__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, (MR_Integer) 2)));
#line 541 "mode_robdd.implications.m"
                mode_robdd__implications__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, (MR_Integer) 3)));
#line 541 "mode_robdd.implications.m"
                {
#line 541 "mode_robdd.implications.m"
                  mode_robdd__implications__succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_100, mode_robdd__implications__V_112_112, mode_robdd__implications__V_10_10, mode_robdd__implications__VA_4, &mode_robdd__implications__V_11_11);
                }
#line 541 "mode_robdd.implications.m"
                if (mode_robdd__implications__succeeded)
#line 541 "mode_robdd.implications.m"
                  {
#line 541 "mode_robdd.implications.m"
                    mode_robdd__implications__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, (MR_Integer) 0)));
#line 541 "mode_robdd.implications.m"
                    mode_robdd__implications__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, (MR_Integer) 1)));
#line 541 "mode_robdd.implications.m"
                    mode_robdd__implications__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, (MR_Integer) 2)));
#line 541 "mode_robdd.implications.m"
                    mode_robdd__implications__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, (MR_Integer) 3)));
#line 541 "mode_robdd.implications.m"
                    {
#line 541 "mode_robdd.implications.m"
                      MR_Word base;
#line 541 "mode_robdd.implications.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 541 "mode_robdd.implications.m"
                      *mode_robdd__implications__HeadVar__3_3 = base;
#line 541 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__implications__V_54_54));
#line 541 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mode_robdd__implications__V_11_11));
#line 541 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mode_robdd__implications__V_56_56));
#line 541 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mode_robdd__implications__V_57_57));
#line 541 "mode_robdd.implications.m"
                    }
#line 541 "mode_robdd.implications.m"
                    mode_robdd__implications__succeeded = MR_TRUE;
#line 541 "mode_robdd.implications.m"
                  }
#line 541 "mode_robdd.implications.m"
              }
#line 541 "mode_robdd.implications.m"
          }
#line 541 "mode_robdd.implications.m"
        else
#line 550 "mode_robdd.implications.m"
          {
#line 550 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__VA_34;
#line 550 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_39_39;
#line 550 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_40_40;
#line 550 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_41_41;
#line 550 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_43_43;
#line 550 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_93_93;
#line 550 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_94_94;
#line 550 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_95_95;
#line 550 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_96_96;
#line 550 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_97_97;
#line 550 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_98_98;
#line 550 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_99_99;

#line 550 "mode_robdd.implications.m"
            mode_robdd__implications__VA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_102_102, (MR_Integer) 0)));
#line 550 "mode_robdd.implications.m"
            {
#line 550 "mode_robdd.implications.m"
              mode_robdd__implications__succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_100, mode_robdd__implications__VA_34, mode_robdd__implications__V_103_103, mode_robdd__implications__V_112_112, &mode_robdd__implications__V_43_43);
            }
#line 550 "mode_robdd.implications.m"
            if (mode_robdd__implications__succeeded)
#line 550 "mode_robdd.implications.m"
              {
#line 550 "mode_robdd.implications.m"
                {
#line 550 "mode_robdd.implications.m"
                  mode_robdd__implications__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 550 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_39_39, 0) = ((MR_Box) (mode_robdd__implications__V_110_110));
#line 550 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_39_39, 1) = ((MR_Box) (mode_robdd__implications__V_109_109));
#line 550 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_39_39, 2) = ((MR_Box) (mode_robdd__implications__V_108_108));
#line 550 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_39_39, 3) = ((MR_Box) (mode_robdd__implications__V_43_43));
#line 550 "mode_robdd.implications.m"
                }
#line 550 "mode_robdd.implications.m"
                mode_robdd__implications__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_39_39, (MR_Integer) 0)));
#line 550 "mode_robdd.implications.m"
                mode_robdd__implications__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_39_39, (MR_Integer) 1)));
#line 550 "mode_robdd.implications.m"
                mode_robdd__implications__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_39_39, (MR_Integer) 2)));
#line 550 "mode_robdd.implications.m"
                mode_robdd__implications__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_39_39, (MR_Integer) 3)));
#line 550 "mode_robdd.implications.m"
                {
#line 550 "mode_robdd.implications.m"
                  mode_robdd__implications__succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_100, mode_robdd__implications__V_112_112, mode_robdd__implications__V_40_40, mode_robdd__implications__VA_34, &mode_robdd__implications__V_41_41);
                }
#line 550 "mode_robdd.implications.m"
                if (mode_robdd__implications__succeeded)
#line 550 "mode_robdd.implications.m"
                  {
#line 550 "mode_robdd.implications.m"
                    mode_robdd__implications__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_39_39, (MR_Integer) 0)));
#line 550 "mode_robdd.implications.m"
                    mode_robdd__implications__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_39_39, (MR_Integer) 1)));
#line 550 "mode_robdd.implications.m"
                    mode_robdd__implications__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_39_39, (MR_Integer) 2)));
#line 550 "mode_robdd.implications.m"
                    mode_robdd__implications__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_39_39, (MR_Integer) 3)));
#line 550 "mode_robdd.implications.m"
                    {
#line 550 "mode_robdd.implications.m"
                      MR_Word base;
#line 550 "mode_robdd.implications.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 550 "mode_robdd.implications.m"
                      *mode_robdd__implications__HeadVar__3_3 = base;
#line 550 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__implications__V_96_96));
#line 550 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mode_robdd__implications__V_97_97));
#line 550 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mode_robdd__implications__V_98_98));
#line 550 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mode_robdd__implications__V_41_41));
#line 550 "mode_robdd.implications.m"
                    }
#line 550 "mode_robdd.implications.m"
                    mode_robdd__implications__succeeded = MR_TRUE;
#line 550 "mode_robdd.implications.m"
                  }
#line 550 "mode_robdd.implications.m"
              }
#line 550 "mode_robdd.implications.m"
          }
#line 541 "mode_robdd.implications.m"
      }
#line 541 "mode_robdd.implications.m"
    return mode_robdd__implications__succeeded;
#line 541 "mode_robdd.implications.m"
  }
#line 539 "mode_robdd.implications.m"
}

#line 526 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__add_clauses_2_f_0(
#line 526 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_12,
#line 526 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__1_1,
#line 526 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_2)
#line 526 "mode_robdd.implications.m"
{
#line 528 "mode_robdd.implications.m"
  {
#line 528 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 528 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__ImpVars_3;

#line 528 "mode_robdd.implications.m"
    if ((mode_robdd__implications__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "mode_robdd.implications.m"
      mode_robdd__implications__ImpVars_3 = mode_robdd__implications__HeadVar__2_2;
#line 528 "mode_robdd.implications.m"
    else
#line 529 "mode_robdd.implications.m"
      {
#line 529 "mode_robdd.implications.m"
        MR_Tuple mode_robdd__implications__Clause_5;
#line 529 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Clauses_6;
#line 533 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__ImpVars1_9;

#line 529 "mode_robdd.implications.m"
        mode_robdd__implications__Clause_5 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 0)));
#line 529 "mode_robdd.implications.m"
        mode_robdd__implications__Clauses_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 1)));
#line 530 "mode_robdd.implications.m"
        {
#line 530 "mode_robdd.implications.m"
          mode_robdd__implications__succeeded = mode_robdd__implications__add_clause_2_2_f_0(mode_robdd__implications__TypeInfo_for_T_12, mode_robdd__implications__Clause_5, mode_robdd__implications__HeadVar__2_2, &mode_robdd__implications__ImpVars1_9);
        }
#line 533 "mode_robdd.implications.m"
        if (mode_robdd__implications__succeeded)
#line 531 "mode_robdd.implications.m"
          {
#line 531 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeCtorInfo_13_13;
#line 531 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeInfo_14_14;
#line 531 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeCtorInfo_15_15;
#line 531 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeInfo_17_17;
#line 531 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__Resolvents_10;
#line 531 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_11_11;
#line 531 "mode_robdd.implications.m"
            MR_Integer mode_robdd__implications__PolyConst2_16;
#line 532 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__conv0_V_11_11;

#line 531 "mode_robdd.implications.m"
            {
#line 531 "mode_robdd.implications.m"
              mode_robdd__implications__Resolvents_10 = mode_robdd__implications__get_resolvents_2_f_0(mode_robdd__implications__TypeInfo_for_T_12, mode_robdd__implications__Clause_5, mode_robdd__implications__ImpVars1_9);
            }
#line 5394 "mode_robdd.implications.c"
            mode_robdd__implications__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 5396 "mode_robdd.implications.c"
            mode_robdd__implications__PolyConst2_16 = (MR_Integer) 2;
#line 5398 "mode_robdd.implications.c"
            mode_robdd__implications__TypeCtorInfo_13_13 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
#line 5400 "mode_robdd.implications.c"
            {
#line 5402 "mode_robdd.implications.c"
              mode_robdd__implications__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5404 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_13_13));
#line 5406 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
#line 5408 "mode_robdd.implications.c"
            }
#line 5410 "mode_robdd.implications.c"
            {
#line 5412 "mode_robdd.implications.c"
              mode_robdd__implications__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 5414 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_15_15));
#line 5416 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 1) = ((MR_Box) (mode_robdd__implications__PolyConst2_16));
#line 5418 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_14_14));
#line 5420 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_14_14));
#line 5422 "mode_robdd.implications.c"
            }
#line 532 "mode_robdd.implications.m"
            {
#line 532 "mode_robdd.implications.m"
              mode_robdd__implications__conv0_V_11_11 = mercury__list__f_43_43_2_f_0(mode_robdd__implications__TypeInfo_17_17, (MR_Word) mode_robdd__implications__Resolvents_10, (MR_Word) mode_robdd__implications__Clauses_6);
            }
#line 532 "mode_robdd.implications.m"
            mode_robdd__implications__V_11_11 = (MR_Word) mode_robdd__implications__conv0_V_11_11;
#line 532 "mode_robdd.implications.m"
            {
#line 532 "mode_robdd.implications.m"
              mode_robdd__implications__ImpVars_3 = mode_robdd__implications__add_clauses_2_f_0(mode_robdd__implications__TypeInfo_for_T_12, mode_robdd__implications__V_11_11, mode_robdd__implications__ImpVars1_9);
            }
#line 531 "mode_robdd.implications.m"
          }
#line 533 "mode_robdd.implications.m"
        else
#line 534 "mode_robdd.implications.m"
          {
#line 534 "mode_robdd.implications.m"
            mode_robdd__implications__ImpVars_3 = mode_robdd__implications__add_clauses_2_f_0(mode_robdd__implications__TypeInfo_for_T_12, mode_robdd__implications__Clauses_6, mode_robdd__implications__HeadVar__2_2);
          }
#line 529 "mode_robdd.implications.m"
      }
#line 528 "mode_robdd.implications.m"
    return mode_robdd__implications__ImpVars_3;
#line 528 "mode_robdd.implications.m"
  }
#line 526 "mode_robdd.implications.m"
}

#line 521 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__add_clause_2_f_0(
#line 521 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_8,
#line 521 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__Clause_4,
#line 521 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_5)
#line 521 "mode_robdd.implications.m"
{
#line 523 "mode_robdd.implications.m"
  {
#line 523 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 523 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 523 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_6_6;
#line 523 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_7_7;

#line 524 "mode_robdd.implications.m"
    mode_robdd__implications__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 524 "mode_robdd.implications.m"
    {
#line 524 "mode_robdd.implications.m"
      mode_robdd__implications__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(1), mode_robdd__implications__V_6_6, 0) = ((MR_Box) (mode_robdd__implications__Clause_4));
#line 524 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(1), mode_robdd__implications__V_6_6, 1) = ((MR_Box) (mode_robdd__implications__V_7_7));
#line 524 "mode_robdd.implications.m"
    }
#line 524 "mode_robdd.implications.m"
    {
#line 524 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__add_clauses_2_f_0(mode_robdd__implications__TypeInfo_for_T_8, mode_robdd__implications__V_6_6, mode_robdd__implications__ImpVars_5);
    }
#line 523 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 523 "mode_robdd.implications.m"
  }
#line 521 "mode_robdd.implications.m"
}

#line 515 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__mkneg_1_f_0(
#line 515 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_4,
#line 515 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__V_3)
#line 515 "mode_robdd.implications.m"
{
#line 517 "mode_robdd.implications.m"
  {
#line 517 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 517 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__2_2;

#line 517 "mode_robdd.implications.m"
    {
#line 517 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 517 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(1), mode_robdd__implications__HeadVar__2_2, 0) = ((MR_Box) (mode_robdd__implications__V_3));
#line 517 "mode_robdd.implications.m"
    }
#line 517 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__2_2;
#line 517 "mode_robdd.implications.m"
  }
#line 515 "mode_robdd.implications.m"
}

#line 511 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__mkpos_1_f_0(
#line 511 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_4,
#line 511 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__V_3)
#line 511 "mode_robdd.implications.m"
{
#line 513 "mode_robdd.implications.m"
  {
#line 513 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 513 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__2_2;

#line 513 "mode_robdd.implications.m"
    {
#line 513 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 513 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__2_2, 0) = ((MR_Box) (mode_robdd__implications__V_3));
#line 513 "mode_robdd.implications.m"
    }
#line 513 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__2_2;
#line 513 "mode_robdd.implications.m"
  }
#line 511 "mode_robdd.implications.m"
}

#line 477 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__delete_var_from_imp_map_2_f_0_1(
#line 477 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 477 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 477 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 477 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3)
#line 477 "mode_robdd.implications.m"
{
#line 477 "mode_robdd.implications.m"
  {
#line 477 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_4;
#line 477 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 477 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_LambdaHeadVar__4_14;

#line 477 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 477 "mode_robdd.implications.m"
    {
#line 477 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_LambdaHeadVar__4_14 = mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__477__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Word) mode_robdd__implications__wrapper_arg_3));
    }
#line 477 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__4_14));
#line 477 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_4;
#line 477 "mode_robdd.implications.m"
  }
#line 477 "mode_robdd.implications.m"
}

#line 474 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__delete_var_from_imp_map_2_f_0(
#line 474 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
#line 474 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Var_4,
#line 474 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IM0_5)
#line 474 "mode_robdd.implications.m"
{
#line 483 "mode_robdd.implications.m"
  {
#line 483 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 483 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 483 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_21_21;
#line 483 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_22_22;
#line 483 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_23_23;
#line 483 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_24_24;
#line 483 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_25_25;
#line 483 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_26_26;
#line 483 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__IM1_9;
#line 483 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_10_10;
#line 484 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv1_IM1_9;
#line 477 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv2_HeadVar__3_3;

#line 5638 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 5640 "mode_robdd.implications.c"
    {
#line 5642 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5644 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_21_21));
#line 5646 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 5648 "mode_robdd.implications.c"
    }
#line 5650 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_23_23 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 5652 "mode_robdd.implications.c"
    {
#line 5654 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5656 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_24_24, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_23_23));
#line 5658 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_22_22));
#line 5660 "mode_robdd.implications.c"
    }
#line 5662 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_25_25 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 5664 "mode_robdd.implications.c"
    {
#line 5666 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5668 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_25_25));
#line 5670 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_22_22));
#line 5672 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_24_24));
#line 5674 "mode_robdd.implications.c"
    }
#line 477 "mode_robdd.implications.m"
    {
#line 477 "mode_robdd.implications.m"
      mode_robdd__implications__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 477 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[3]));
#line 477 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 1) = ((MR_Box) (mode_robdd__implications__delete_var_from_imp_map_2_f_0_1));
#line 477 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 477 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 477 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 4) = ((MR_Box) (mode_robdd__implications__Var_4));
#line 477 "mode_robdd.implications.m"
    }
#line 484 "mode_robdd.implications.m"
    {
#line 484 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_IM1_9 = mercury__map__delete_2_f_0(mode_robdd__implications__TypeInfo_22_22, mode_robdd__implications__TypeInfo_24_24, (MR_Word) mode_robdd__implications__IM0_5, ((MR_Box) (mode_robdd__implications__Var_4)));
    }
#line 484 "mode_robdd.implications.m"
    mode_robdd__implications__IM1_9 = (MR_Word) mode_robdd__implications__conv1_IM1_9;
#line 477 "mode_robdd.implications.m"
    {
#line 477 "mode_robdd.implications.m"
      mode_robdd__implications__conv2_HeadVar__3_3 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_22_22, mode_robdd__implications__TypeInfo_24_24, mode_robdd__implications__TypeInfo_26_26, (MR_Word) mode_robdd__implications__V_10_10, (MR_Word) mode_robdd__implications__IM1_9, ((MR_Box) (mode_robdd__implications__IM1_9)));
    }
#line 477 "mode_robdd.implications.m"
    mode_robdd__implications__HeadVar__3_3 = ((MR_Word) mode_robdd__implications__conv2_HeadVar__3_3);
#line 483 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 483 "mode_robdd.implications.m"
  }
#line 474 "mode_robdd.implications.m"
}

#line 466 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__remove_empty_sets_1_f_0_1(
#line 466 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 466 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 466 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 466 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3)
#line 466 "mode_robdd.implications.m"
{
#line 466 "mode_robdd.implications.m"
  {
#line 466 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_4;
#line 466 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 466 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_LambdaHeadVar__4_11;

#line 466 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 466 "mode_robdd.implications.m"
    {
#line 466 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_LambdaHeadVar__4_11 = mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__466__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Word) mode_robdd__implications__wrapper_arg_3));
    }
#line 466 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__4_11));
#line 466 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_4;
#line 466 "mode_robdd.implications.m"
  }
#line 466 "mode_robdd.implications.m"
}

#line 463 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__remove_empty_sets_1_f_0(
#line 463 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_16,
#line 463 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IM_3)
#line 463 "mode_robdd.implications.m"
{
#line 465 "mode_robdd.implications.m"
  {
#line 465 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 465 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__2_2;
#line 465 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_17_17;
#line 465 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_18_18;
#line 465 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_19_19;
#line 465 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_20_20;
#line 465 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_21_21;
#line 465 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_22_22;
#line 465 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_7_7;
#line 466 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv1_HeadVar__2_2;

#line 5783 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 5785 "mode_robdd.implications.c"
    {
#line 5787 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5789 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_17_17));
#line 5791 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_16));
#line 5793 "mode_robdd.implications.c"
    }
#line 5795 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_19_19 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 5797 "mode_robdd.implications.c"
    {
#line 5799 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5801 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_20_20, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_19_19));
#line 5803 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_20_20, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_18_18));
#line 5805 "mode_robdd.implications.c"
    }
#line 5807 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_21_21 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 5809 "mode_robdd.implications.c"
    {
#line 5811 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5813 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_21_21));
#line 5815 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_18_18));
#line 5817 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_20_20));
#line 5819 "mode_robdd.implications.c"
    }
#line 466 "mode_robdd.implications.m"
    {
#line 466 "mode_robdd.implications.m"
      mode_robdd__implications__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 466 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[2]));
#line 466 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 1) = ((MR_Box) (mode_robdd__implications__remove_empty_sets_1_f_0_1));
#line 466 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 466 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_16));
#line 466 "mode_robdd.implications.m"
    }
#line 466 "mode_robdd.implications.m"
    {
#line 466 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_HeadVar__2_2 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_18_18, mode_robdd__implications__TypeInfo_20_20, mode_robdd__implications__TypeInfo_22_22, (MR_Word) mode_robdd__implications__V_7_7, (MR_Word) mode_robdd__implications__IM_3, ((MR_Box) (mode_robdd__implications__IM_3)));
    }
#line 466 "mode_robdd.implications.m"
    mode_robdd__implications__HeadVar__2_2 = ((MR_Word) mode_robdd__implications__conv1_HeadVar__2_2);
#line 465 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__2_2;
#line 465 "mode_robdd.implications.m"
  }
#line 463 "mode_robdd.implications.m"
}

#line 454 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__imp_map_difference_2_f_0_1(
#line 454 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 454 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 454 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 454 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3)
#line 454 "mode_robdd.implications.m"
{
#line 454 "mode_robdd.implications.m"
  {
#line 454 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_4;
#line 454 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 454 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_LambdaHeadVar__4_14;

#line 454 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 454 "mode_robdd.implications.m"
    {
#line 454 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_LambdaHeadVar__4_14 = mode_robdd__implications__IntroducedFrom__func__imp_map_difference__454__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Word) mode_robdd__implications__wrapper_arg_3));
    }
#line 454 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__4_14));
#line 454 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_4;
#line 454 "mode_robdd.implications.m"
  }
#line 454 "mode_robdd.implications.m"
}

#line 448 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__imp_map_difference_2_f_0(
#line 448 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
#line 448 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IMA_4,
#line 448 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IMB_5)
#line 448 "mode_robdd.implications.m"
{
#line 450 "mode_robdd.implications.m"
  {
#line 450 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 450 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 451 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_20_20;
#line 451 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_21_21;
#line 451 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_22_22;
#line 451 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_23_23;

#line 5913 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 5915 "mode_robdd.implications.c"
    {
#line 5917 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5919 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_21_21, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_20_20));
#line 5921 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_21_21, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 5923 "mode_robdd.implications.c"
    }
#line 5925 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_22_22 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 5927 "mode_robdd.implications.c"
    {
#line 5929 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5931 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_22_22));
#line 5933 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_21_21));
#line 5935 "mode_robdd.implications.c"
    }
#line 451 "mode_robdd.implications.m"
    {
#line 451 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__implications__TypeInfo_21_21, mode_robdd__implications__TypeInfo_23_23, (MR_Word) mode_robdd__implications__IMA_4);
    }
#line 450 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 452 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__IMA_4;
#line 450 "mode_robdd.implications.m"
    else
#line 454 "mode_robdd.implications.m"
      {
#line 454 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_24_24;
#line 454 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_25_25;
#line 454 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_26_26;
#line 454 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_27_27;
#line 454 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_28_28;
#line 454 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_29_29;
#line 454 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_10_10;
#line 454 "mode_robdd.implications.m"
        MR_Box mode_robdd__implications__conv1_HeadVar__3_3;

#line 5967 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_24_24 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 5969 "mode_robdd.implications.c"
        {
#line 5971 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5973 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_25_25, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_24_24));
#line 5975 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_25_25, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 5977 "mode_robdd.implications.c"
        }
#line 5979 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_26_26 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 5981 "mode_robdd.implications.c"
        {
#line 5983 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5985 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_27_27, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_26_26));
#line 5987 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_27_27, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_25_25));
#line 5989 "mode_robdd.implications.c"
        }
#line 5991 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_28_28 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 5993 "mode_robdd.implications.c"
        {
#line 5995 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5997 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_29_29, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_28_28));
#line 5999 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_29_29, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_25_25));
#line 6001 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_29_29, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_27_27));
#line 6003 "mode_robdd.implications.c"
        }
#line 454 "mode_robdd.implications.m"
        {
#line 454 "mode_robdd.implications.m"
          mode_robdd__implications__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 454 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[2]));
#line 454 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 1) = ((MR_Box) (mode_robdd__implications__imp_map_difference_2_f_0_1));
#line 454 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 454 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 454 "mode_robdd.implications.m"
        }
#line 454 "mode_robdd.implications.m"
        {
#line 454 "mode_robdd.implications.m"
          mode_robdd__implications__conv1_HeadVar__3_3 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_25_25, mode_robdd__implications__TypeInfo_27_27, mode_robdd__implications__TypeInfo_29_29, (MR_Word) mode_robdd__implications__V_10_10, (MR_Word) mode_robdd__implications__IMB_5, ((MR_Box) (mode_robdd__implications__IMA_4)));
        }
#line 454 "mode_robdd.implications.m"
        mode_robdd__implications__HeadVar__3_3 = ((MR_Word) mode_robdd__implications__conv1_HeadVar__3_3);
#line 454 "mode_robdd.implications.m"
      }
#line 450 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 450 "mode_robdd.implications.m"
  }
#line 448 "mode_robdd.implications.m"
}

#line 446 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__intersect_2_f_0_1(
#line 446 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 446 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 446 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2)
#line 446 "mode_robdd.implications.m"
{
#line 446 "mode_robdd.implications.m"
  {
#line 446 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_3;
#line 446 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 446 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__4_15;

#line 446 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 446 "mode_robdd.implications.m"
    {
#line 446 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__4_15 = mode_robdd__implications__IntroducedFrom__func__intersect__446__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2));
    }
#line 446 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_3 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__4_15));
#line 446 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_3;
#line 446 "mode_robdd.implications.m"
  }
#line 446 "mode_robdd.implications.m"
}

#line 444 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__intersect_2_f_0(
#line 444 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_8,
#line 444 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IMA_4,
#line 444 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IMB_5)
#line 444 "mode_robdd.implications.m"
{
#line 446 "mode_robdd.implications.m"
  {
#line 446 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 446 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 446 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_9_9;
#line 446 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_10_10;
#line 446 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_11_11;
#line 446 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_12_12;
#line 446 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_6_6;
#line 446 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_7_7;
#line 446 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv1_V_6_6;

#line 6103 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_11_11 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 6105 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 6107 "mode_robdd.implications.c"
    {
#line 6109 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6111 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_9_9));
#line 6113 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_8));
#line 6115 "mode_robdd.implications.c"
    }
#line 6117 "mode_robdd.implications.c"
    {
#line 6119 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6121 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_12_12, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_11_11));
#line 6123 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_12_12, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_10_10));
#line 6125 "mode_robdd.implications.c"
    }
#line 446 "mode_robdd.implications.m"
    {
#line 446 "mode_robdd.implications.m"
      mode_robdd__implications__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 446 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[3]));
#line 446 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 1) = ((MR_Box) (mode_robdd__implications__intersect_2_f_0_1));
#line 446 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 446 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_8));
#line 446 "mode_robdd.implications.m"
    }
#line 446 "mode_robdd.implications.m"
    {
#line 446 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_V_6_6 = mercury__map__intersect_3_f_0(mode_robdd__implications__TypeInfo_12_12, mode_robdd__implications__TypeInfo_10_10, (MR_Word) mode_robdd__implications__V_7_7, (MR_Word) mode_robdd__implications__IMA_4, (MR_Word) mode_robdd__implications__IMB_5);
    }
#line 446 "mode_robdd.implications.m"
    mode_robdd__implications__V_6_6 = (MR_Word) mode_robdd__implications__conv1_V_6_6;
#line 446 "mode_robdd.implications.m"
    {
#line 446 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__remove_empty_sets_1_f_0(mode_robdd__implications__TypeInfo_for_T_8, mode_robdd__implications__V_6_6);
    }
#line 446 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 446 "mode_robdd.implications.m"
  }
#line 444 "mode_robdd.implications.m"
}

#line 432 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__apply_to_coresp_imp_maps_3_f_0(
#line 432 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_21,
#line 432 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__F_5,
#line 432 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVarsA_6,
#line 432 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVarsB_7)
#line 432 "mode_robdd.implications.m"
{
#line 435 "mode_robdd.implications.m"
  {
#line 435 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 435 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__ImpVars_8;
#line 435 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__IA_9;
#line 435 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RIA_10;
#line 435 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__DIA_11;
#line 435 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RDIA_12;
#line 435 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__IB_13;
#line 435 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RIB_14;
#line 435 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__DIB_15;
#line 435 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RDIB_16;
#line 435 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_17_17;
#line 435 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_18_18;
#line 435 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_19_19;
#line 435 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_20_20;
#line 438 "mode_robdd.implications.m"
    MR_Box MR_CALL (* mode_robdd__implications__func_0)(MR_Box, MR_Box, MR_Box);
#line 438 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv1_V_17_17;
#line 438 "mode_robdd.implications.m"
    MR_Box MR_CALL (* mode_robdd__implications__func_2)(MR_Box, MR_Box, MR_Box);
#line 438 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv3_V_18_18;
#line 438 "mode_robdd.implications.m"
    MR_Box MR_CALL (* mode_robdd__implications__func_4)(MR_Box, MR_Box, MR_Box);
#line 438 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv5_V_19_19;
#line 438 "mode_robdd.implications.m"
    MR_Box MR_CALL (* mode_robdd__implications__func_6)(MR_Box, MR_Box, MR_Box);
#line 438 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv7_V_20_20;

#line 436 "mode_robdd.implications.m"
    mode_robdd__implications__IA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVarsA_6, (MR_Integer) 0)));
#line 436 "mode_robdd.implications.m"
    mode_robdd__implications__RIA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVarsA_6, (MR_Integer) 1)));
#line 436 "mode_robdd.implications.m"
    mode_robdd__implications__DIA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVarsA_6, (MR_Integer) 2)));
#line 436 "mode_robdd.implications.m"
    mode_robdd__implications__RDIA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVarsA_6, (MR_Integer) 3)));
#line 437 "mode_robdd.implications.m"
    mode_robdd__implications__IB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVarsB_7, (MR_Integer) 0)));
#line 437 "mode_robdd.implications.m"
    mode_robdd__implications__RIB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVarsB_7, (MR_Integer) 1)));
#line 437 "mode_robdd.implications.m"
    mode_robdd__implications__DIB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVarsB_7, (MR_Integer) 2)));
#line 437 "mode_robdd.implications.m"
    mode_robdd__implications__RDIB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVarsB_7, (MR_Integer) 3)));
#line 438 "mode_robdd.implications.m"
    mode_robdd__implications__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__F_5, (MR_Integer) 1)));
#line 438 "mode_robdd.implications.m"
    {
#line 438 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_V_17_17 = mode_robdd__implications__func_0(((MR_Box) mode_robdd__implications__F_5), ((MR_Box) (mode_robdd__implications__IA_9)), ((MR_Box) (mode_robdd__implications__IB_13)));
    }
#line 438 "mode_robdd.implications.m"
    mode_robdd__implications__V_17_17 = ((MR_Word) mode_robdd__implications__conv1_V_17_17);
#line 438 "mode_robdd.implications.m"
    mode_robdd__implications__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__F_5, (MR_Integer) 1)));
#line 438 "mode_robdd.implications.m"
    {
#line 438 "mode_robdd.implications.m"
      mode_robdd__implications__conv3_V_18_18 = mode_robdd__implications__func_2(((MR_Box) mode_robdd__implications__F_5), ((MR_Box) (mode_robdd__implications__RIA_10)), ((MR_Box) (mode_robdd__implications__RIB_14)));
    }
#line 438 "mode_robdd.implications.m"
    mode_robdd__implications__V_18_18 = ((MR_Word) mode_robdd__implications__conv3_V_18_18);
#line 438 "mode_robdd.implications.m"
    mode_robdd__implications__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__F_5, (MR_Integer) 1)));
#line 438 "mode_robdd.implications.m"
    {
#line 438 "mode_robdd.implications.m"
      mode_robdd__implications__conv5_V_19_19 = mode_robdd__implications__func_4(((MR_Box) mode_robdd__implications__F_5), ((MR_Box) (mode_robdd__implications__DIA_11)), ((MR_Box) (mode_robdd__implications__DIB_15)));
    }
#line 438 "mode_robdd.implications.m"
    mode_robdd__implications__V_19_19 = ((MR_Word) mode_robdd__implications__conv5_V_19_19);
#line 438 "mode_robdd.implications.m"
    mode_robdd__implications__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__F_5, (MR_Integer) 1)));
#line 438 "mode_robdd.implications.m"
    {
#line 438 "mode_robdd.implications.m"
      mode_robdd__implications__conv7_V_20_20 = mode_robdd__implications__func_6(((MR_Box) mode_robdd__implications__F_5), ((MR_Box) (mode_robdd__implications__RDIA_12)), ((MR_Box) (mode_robdd__implications__RDIB_16)));
    }
#line 438 "mode_robdd.implications.m"
    mode_robdd__implications__V_20_20 = ((MR_Word) mode_robdd__implications__conv7_V_20_20);
#line 438 "mode_robdd.implications.m"
    {
#line 438 "mode_robdd.implications.m"
      mode_robdd__implications__ImpVars_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 438 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_8, 0) = ((MR_Box) (mode_robdd__implications__V_17_17));
#line 438 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_8, 1) = ((MR_Box) (mode_robdd__implications__V_18_18));
#line 438 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_8, 2) = ((MR_Box) (mode_robdd__implications__V_19_19));
#line 438 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_8, 3) = ((MR_Box) (mode_robdd__implications__V_20_20));
#line 438 "mode_robdd.implications.m"
    }
#line 435 "mode_robdd.implications.m"
    return mode_robdd__implications__ImpVars_8;
#line 435 "mode_robdd.implications.m"
  }
#line 432 "mode_robdd.implications.m"
}

#line 425 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__apply_to_imp_maps_2_f_0(
#line 425 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_15,
#line 425 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__F_4,
#line 425 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars0_5)
#line 425 "mode_robdd.implications.m"
{
#line 428 "mode_robdd.implications.m"
  {
#line 428 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 428 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__ImpVars_6;
#line 428 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__I_7;
#line 428 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RI_8;
#line 428 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__DI_9;
#line 428 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RDI_10;
#line 428 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_11_11;
#line 428 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_12_12;
#line 428 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_13_13;
#line 428 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_14_14;
#line 430 "mode_robdd.implications.m"
    MR_Box MR_CALL (* mode_robdd__implications__func_0)(MR_Box, MR_Box);
#line 430 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv1_V_11_11;
#line 430 "mode_robdd.implications.m"
    MR_Box MR_CALL (* mode_robdd__implications__func_2)(MR_Box, MR_Box);
#line 430 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv3_V_12_12;
#line 430 "mode_robdd.implications.m"
    MR_Box MR_CALL (* mode_robdd__implications__func_4)(MR_Box, MR_Box);
#line 430 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv5_V_13_13;
#line 430 "mode_robdd.implications.m"
    MR_Box MR_CALL (* mode_robdd__implications__func_6)(MR_Box, MR_Box);
#line 430 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv7_V_14_14;

#line 429 "mode_robdd.implications.m"
    mode_robdd__implications__I_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_5, (MR_Integer) 0)));
#line 429 "mode_robdd.implications.m"
    mode_robdd__implications__RI_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_5, (MR_Integer) 1)));
#line 429 "mode_robdd.implications.m"
    mode_robdd__implications__DI_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_5, (MR_Integer) 2)));
#line 429 "mode_robdd.implications.m"
    mode_robdd__implications__RDI_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_5, (MR_Integer) 3)));
#line 430 "mode_robdd.implications.m"
    mode_robdd__implications__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__F_4, (MR_Integer) 1)));
#line 430 "mode_robdd.implications.m"
    {
#line 430 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_V_11_11 = mode_robdd__implications__func_0(((MR_Box) mode_robdd__implications__F_4), ((MR_Box) (mode_robdd__implications__I_7)));
    }
#line 430 "mode_robdd.implications.m"
    mode_robdd__implications__V_11_11 = ((MR_Word) mode_robdd__implications__conv1_V_11_11);
#line 430 "mode_robdd.implications.m"
    mode_robdd__implications__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__F_4, (MR_Integer) 1)));
#line 430 "mode_robdd.implications.m"
    {
#line 430 "mode_robdd.implications.m"
      mode_robdd__implications__conv3_V_12_12 = mode_robdd__implications__func_2(((MR_Box) mode_robdd__implications__F_4), ((MR_Box) (mode_robdd__implications__RI_8)));
    }
#line 430 "mode_robdd.implications.m"
    mode_robdd__implications__V_12_12 = ((MR_Word) mode_robdd__implications__conv3_V_12_12);
#line 430 "mode_robdd.implications.m"
    mode_robdd__implications__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__F_4, (MR_Integer) 1)));
#line 430 "mode_robdd.implications.m"
    {
#line 430 "mode_robdd.implications.m"
      mode_robdd__implications__conv5_V_13_13 = mode_robdd__implications__func_4(((MR_Box) mode_robdd__implications__F_4), ((MR_Box) (mode_robdd__implications__DI_9)));
    }
#line 430 "mode_robdd.implications.m"
    mode_robdd__implications__V_13_13 = ((MR_Word) mode_robdd__implications__conv5_V_13_13);
#line 430 "mode_robdd.implications.m"
    mode_robdd__implications__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__F_4, (MR_Integer) 1)));
#line 430 "mode_robdd.implications.m"
    {
#line 430 "mode_robdd.implications.m"
      mode_robdd__implications__conv7_V_14_14 = mode_robdd__implications__func_6(((MR_Box) mode_robdd__implications__F_4), ((MR_Box) (mode_robdd__implications__RDI_10)));
    }
#line 430 "mode_robdd.implications.m"
    mode_robdd__implications__V_14_14 = ((MR_Word) mode_robdd__implications__conv7_V_14_14);
#line 430 "mode_robdd.implications.m"
    {
#line 430 "mode_robdd.implications.m"
      mode_robdd__implications__ImpVars_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 430 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_6, 0) = ((MR_Box) (mode_robdd__implications__V_11_11));
#line 430 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_6, 1) = ((MR_Box) (mode_robdd__implications__V_12_12));
#line 430 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_6, 2) = ((MR_Box) (mode_robdd__implications__V_13_13));
#line 430 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_6, 3) = ((MR_Box) (mode_robdd__implications__V_14_14));
#line 430 "mode_robdd.implications.m"
    }
#line 428 "mode_robdd.implications.m"
    return mode_robdd__implications__ImpVars_6;
#line 428 "mode_robdd.implications.m"
  }
#line 425 "mode_robdd.implications.m"
}

#line 415 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications__empty_1_p_0(
#line 415 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_6,
#line 415 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__1_1)
#line 415 "mode_robdd.implications.m"
{
#line 417 "mode_robdd.implications.m"
  {
#line 417 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 417 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_7_7;
#line 417 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_8_8;
#line 417 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_9_9;
#line 417 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_10_10;
#line 417 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__I_2;
#line 417 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RI_3;
#line 417 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__DI_4;
#line 417 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RDI_5;

#line 417 "mode_robdd.implications.m"
    mode_robdd__implications__I_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 0)));
#line 417 "mode_robdd.implications.m"
    mode_robdd__implications__RI_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 1)));
#line 417 "mode_robdd.implications.m"
    mode_robdd__implications__DI_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 2)));
#line 417 "mode_robdd.implications.m"
    mode_robdd__implications__RDI_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 3)));
#line 6446 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_7_7 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 6448 "mode_robdd.implications.c"
    {
#line 6450 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6452 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_8_8, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_7_7));
#line 6454 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_8_8, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_6));
#line 6456 "mode_robdd.implications.c"
    }
#line 6458 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_9_9 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 6460 "mode_robdd.implications.c"
    {
#line 6462 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6464 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_9_9));
#line 6466 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_8_8));
#line 6468 "mode_robdd.implications.c"
    }
#line 418 "mode_robdd.implications.m"
    {
#line 418 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__implications__TypeInfo_8_8, mode_robdd__implications__TypeInfo_10_10, (MR_Word) mode_robdd__implications__I_2);
    }
#line 417 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 417 "mode_robdd.implications.m"
      {
#line 419 "mode_robdd.implications.m"
        {
#line 419 "mode_robdd.implications.m"
          mode_robdd__implications__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__implications__TypeInfo_8_8, mode_robdd__implications__TypeInfo_10_10, (MR_Word) mode_robdd__implications__RI_3);
        }
#line 417 "mode_robdd.implications.m"
        if (mode_robdd__implications__succeeded)
#line 417 "mode_robdd.implications.m"
          {
#line 420 "mode_robdd.implications.m"
            {
#line 420 "mode_robdd.implications.m"
              mode_robdd__implications__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__implications__TypeInfo_8_8, mode_robdd__implications__TypeInfo_10_10, (MR_Word) mode_robdd__implications__DI_4);
            }
#line 417 "mode_robdd.implications.m"
            if (mode_robdd__implications__succeeded)
#line 421 "mode_robdd.implications.m"
              {
#line 421 "mode_robdd.implications.m"
                mode_robdd__implications__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__implications__TypeInfo_8_8, mode_robdd__implications__TypeInfo_10_10, (MR_Word) mode_robdd__implications__RDI_5);
              }
#line 417 "mode_robdd.implications.m"
          }
#line 417 "mode_robdd.implications.m"
      }
#line 417 "mode_robdd.implications.m"
    return mode_robdd__implications__succeeded;
#line 417 "mode_robdd.implications.m"
  }
#line 415 "mode_robdd.implications.m"
}

#line 395 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(
#line 395 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_12,
#line 395 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__VA_5,
#line 395 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__M0_6,
#line 395 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__VB_7,
#line 395 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__M_8)
#line 395 "mode_robdd.implications.m"
{
#line 402 "mode_robdd.implications.m"
  {
#line 402 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 402 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Vs_9;
#line 399 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_13_13;
#line 399 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_14_14;
#line 399 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_15_15;
#line 399 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_16_16;
#line 399 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv0_Vs_9;

#line 6543 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_13_13 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 6545 "mode_robdd.implications.c"
    {
#line 6547 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6549 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_13_13));
#line 6551 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
#line 6553 "mode_robdd.implications.c"
    }
#line 6555 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_15_15 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 6557 "mode_robdd.implications.c"
    {
#line 6559 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6561 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_16_16, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_15_15));
#line 6563 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_16_16, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_14_14));
#line 6565 "mode_robdd.implications.c"
    }
#line 399 "mode_robdd.implications.m"
    {
#line 399 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__map__elem_2_f_0(mode_robdd__implications__TypeInfo_14_14, mode_robdd__implications__TypeInfo_16_16, ((MR_Box) (mode_robdd__implications__VA_5)), (MR_Word) mode_robdd__implications__M0_6, &mode_robdd__implications__conv0_Vs_9);
    }
#line 399 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 399 "mode_robdd.implications.m"
      {
#line 399 "mode_robdd.implications.m"
        mode_robdd__implications__Vs_9 = ((MR_Word) mode_robdd__implications__conv0_Vs_9);
#line 399 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = MR_TRUE;
#line 399 "mode_robdd.implications.m"
      }
#line 402 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 400 "mode_robdd.implications.m"
      {
#line 400 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_21_21;
#line 400 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_22_22;
#line 400 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_23;
#line 400 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_24;
#line 400 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_25_25;
#line 400 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_26_26;
#line 400 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_10_10;
#line 400 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_17_17;
#line 400 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_18_18;
#line 400 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_19;
#line 400 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_20;
#line 401 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv1_V_10_10;
#line 401 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv2_M_8;

#line 6613 "mode_robdd.implications.c"
        mode_robdd__implications__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 6615 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 6617 "mode_robdd.implications.c"
        {
#line 6619 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6621 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_17_17));
#line 6623 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
#line 6625 "mode_robdd.implications.c"
        }
#line 6627 "mode_robdd.implications.c"
        {
#line 6629 "mode_robdd.implications.c"
          mode_robdd__implications__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6631 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_19));
#line 6633 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
#line 6635 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_18_18));
#line 6637 "mode_robdd.implications.c"
        }
#line 400 "mode_robdd.implications.m"
        {
#line 400 "mode_robdd.implications.m"
          mode_robdd__implications__succeeded = mercury__sparse_bitset__contains_2_p_0(mode_robdd__implications__TypeClassInfo_for_enum_20, (MR_Word) mode_robdd__implications__Vs_9, ((MR_Box) (mode_robdd__implications__VB_7)));
        }
#line 400 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = !(mode_robdd__implications__succeeded);
#line 400 "mode_robdd.implications.m"
        if (mode_robdd__implications__succeeded)
#line 400 "mode_robdd.implications.m"
          {
#line 6650 "mode_robdd.implications.c"
            mode_robdd__implications__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 6652 "mode_robdd.implications.c"
            mode_robdd__implications__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 6654 "mode_robdd.implications.c"
            {
#line 6656 "mode_robdd.implications.c"
              mode_robdd__implications__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6658 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_21_21));
#line 6660 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
#line 6662 "mode_robdd.implications.c"
            }
#line 6664 "mode_robdd.implications.c"
            {
#line 6666 "mode_robdd.implications.c"
              mode_robdd__implications__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6668 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_23));
#line 6670 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
#line 6672 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_22_22));
#line 6674 "mode_robdd.implications.c"
            }
#line 401 "mode_robdd.implications.m"
            {
#line 401 "mode_robdd.implications.m"
              mode_robdd__implications__conv1_V_10_10 = mercury__sparse_bitset__insert_2_f_0(mode_robdd__implications__TypeClassInfo_for_enum_24, (MR_Word) mode_robdd__implications__Vs_9, ((MR_Box) (mode_robdd__implications__VB_7)));
            }
#line 401 "mode_robdd.implications.m"
            mode_robdd__implications__V_10_10 = (MR_Word) mode_robdd__implications__conv1_V_10_10;
#line 6683 "mode_robdd.implications.c"
            mode_robdd__implications__TypeCtorInfo_25_25 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 6685 "mode_robdd.implications.c"
            {
#line 6687 "mode_robdd.implications.c"
              mode_robdd__implications__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6689 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_25_25));
#line 6691 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_22_22));
#line 6693 "mode_robdd.implications.c"
            }
#line 401 "mode_robdd.implications.m"
            {
#line 401 "mode_robdd.implications.m"
              mode_robdd__implications__conv2_M_8 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_22_22, mode_robdd__implications__TypeInfo_26_26, ((MR_Box) (mode_robdd__implications__VA_5)), (MR_Word) mode_robdd__implications__M0_6, ((MR_Box) (mode_robdd__implications__V_10_10)));
            }
#line 401 "mode_robdd.implications.m"
            *mode_robdd__implications__M_8 = (MR_Word) mode_robdd__implications__conv2_M_8;
#line 401 "mode_robdd.implications.m"
            mode_robdd__implications__succeeded = MR_TRUE;
#line 400 "mode_robdd.implications.m"
          }
#line 400 "mode_robdd.implications.m"
      }
#line 402 "mode_robdd.implications.m"
    else
#line 403 "mode_robdd.implications.m"
      {
#line 403 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_27_27;
#line 403 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_28_28;
#line 403 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_29;
#line 403 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_30;
#line 403 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_31_31;
#line 403 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_32_32;
#line 403 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_11_11;
#line 403 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv3_V_11_11;
#line 403 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv4_M_8;

#line 6731 "mode_robdd.implications.c"
        mode_robdd__implications__BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 6733 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 6735 "mode_robdd.implications.c"
        {
#line 6737 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6739 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_28_28, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_27_27));
#line 6741 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
#line 6743 "mode_robdd.implications.c"
        }
#line 6745 "mode_robdd.implications.c"
        {
#line 6747 "mode_robdd.implications.c"
          mode_robdd__implications__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6749 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_29));
#line 6751 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
#line 6753 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_28_28));
#line 6755 "mode_robdd.implications.c"
        }
#line 403 "mode_robdd.implications.m"
        {
#line 403 "mode_robdd.implications.m"
          mode_robdd__implications__conv3_V_11_11 = mercury__sparse_bitset__make_singleton_set_1_f_0(mode_robdd__implications__TypeClassInfo_for_enum_30, ((MR_Box) (mode_robdd__implications__VB_7)));
        }
#line 403 "mode_robdd.implications.m"
        mode_robdd__implications__V_11_11 = (MR_Word) mode_robdd__implications__conv3_V_11_11;
#line 6764 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_31_31 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 6766 "mode_robdd.implications.c"
        {
#line 6768 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6770 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_32_32, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_31_31));
#line 6772 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_32_32, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_28_28));
#line 6774 "mode_robdd.implications.c"
        }
#line 403 "mode_robdd.implications.m"
        {
#line 403 "mode_robdd.implications.m"
          mode_robdd__implications__conv4_M_8 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_28_28, mode_robdd__implications__TypeInfo_32_32, ((MR_Box) (mode_robdd__implications__VA_5)), (MR_Word) mode_robdd__implications__M0_6, ((MR_Box) (mode_robdd__implications__V_11_11)));
        }
#line 403 "mode_robdd.implications.m"
        *mode_robdd__implications__M_8 = (MR_Word) mode_robdd__implications__conv4_M_8;
#line 403 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = MR_TRUE;
#line 403 "mode_robdd.implications.m"
      }
#line 402 "mode_robdd.implications.m"
    return mode_robdd__implications__succeeded;
#line 402 "mode_robdd.implications.m"
  }
#line 395 "mode_robdd.implications.m"
}

#line 377 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(
#line 377 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_8,
#line 377 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__V_5,
#line 377 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__M_6,
#line 377 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Vs_7)
#line 377 "mode_robdd.implications.m"
{
#line 379 "mode_robdd.implications.m"
  {
#line 379 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 379 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__4_4;
#line 380 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_9_9;
#line 380 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_10_10;

#line 6818 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 6820 "mode_robdd.implications.c"
    {
#line 6822 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6824 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_9_9));
#line 6826 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_8));
#line 6828 "mode_robdd.implications.c"
    }
#line 380 "mode_robdd.implications.m"
    {
#line 380 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__implications__TypeInfo_10_10, (MR_Word) mode_robdd__implications__Vs_7);
    }
#line 379 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 381 "mode_robdd.implications.m"
      {
#line 381 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_11_11;
#line 381 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_12_12;
#line 381 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_13_13;
#line 381 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_14_14;
#line 381 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv0_HeadVar__4_4;

#line 6850 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_11_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 6852 "mode_robdd.implications.c"
        {
#line 6854 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6856 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_12_12, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_11_11));
#line 6858 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_12_12, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_8));
#line 6860 "mode_robdd.implications.c"
        }
#line 6862 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_13_13 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 6864 "mode_robdd.implications.c"
        {
#line 6866 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6868 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_13_13));
#line 6870 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_12_12));
#line 6872 "mode_robdd.implications.c"
        }
#line 381 "mode_robdd.implications.m"
        {
#line 381 "mode_robdd.implications.m"
          mode_robdd__implications__conv0_HeadVar__4_4 = mercury__map__delete_2_f_0(mode_robdd__implications__TypeInfo_12_12, mode_robdd__implications__TypeInfo_14_14, (MR_Word) mode_robdd__implications__M_6, ((MR_Box) (mode_robdd__implications__V_5)));
        }
#line 381 "mode_robdd.implications.m"
        mode_robdd__implications__HeadVar__4_4 = (MR_Word) mode_robdd__implications__conv0_HeadVar__4_4;
#line 381 "mode_robdd.implications.m"
      }
#line 379 "mode_robdd.implications.m"
    else
#line 383 "mode_robdd.implications.m"
      {
#line 383 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_15_15;
#line 383 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_16_16;
#line 383 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_17_17;
#line 383 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_18_18;
#line 383 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv1_HeadVar__4_4;

#line 6898 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 6900 "mode_robdd.implications.c"
        {
#line 6902 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6904 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_16_16, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_15_15));
#line 6906 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_16_16, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_8));
#line 6908 "mode_robdd.implications.c"
        }
#line 6910 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_17_17 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 6912 "mode_robdd.implications.c"
        {
#line 6914 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6916 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_17_17));
#line 6918 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_16_16));
#line 6920 "mode_robdd.implications.c"
        }
#line 383 "mode_robdd.implications.m"
        {
#line 383 "mode_robdd.implications.m"
          mode_robdd__implications__conv1_HeadVar__4_4 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_16_16, mode_robdd__implications__TypeInfo_18_18, ((MR_Box) (mode_robdd__implications__V_5)), (MR_Word) mode_robdd__implications__M_6, ((MR_Box) (mode_robdd__implications__Vs_7)));
        }
#line 383 "mode_robdd.implications.m"
        mode_robdd__implications__HeadVar__4_4 = (MR_Word) mode_robdd__implications__conv1_HeadVar__4_4;
#line 383 "mode_robdd.implications.m"
      }
#line 379 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__4_4;
#line 379 "mode_robdd.implications.m"
  }
#line 377 "mode_robdd.implications.m"
}

#line 368 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__entry_2_f_0(
#line 368 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_7,
#line 368 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__V_4,
#line 368 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__M_5)
#line 368 "mode_robdd.implications.m"
{
#line 370 "mode_robdd.implications.m"
  {
#line 370 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 370 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 370 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Vs_6;
#line 371 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_8_8;
#line 371 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_9_9;
#line 371 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_10_10;
#line 371 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_11_11;
#line 371 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv0_Vs_6;

#line 6968 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_8_8 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 6970 "mode_robdd.implications.c"
    {
#line 6972 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6974 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_9_9, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_8_8));
#line 6976 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_9_9, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_7));
#line 6978 "mode_robdd.implications.c"
    }
#line 6980 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_10_10 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 6982 "mode_robdd.implications.c"
    {
#line 6984 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6986 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_11_11, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_10_10));
#line 6988 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_11_11, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_9_9));
#line 6990 "mode_robdd.implications.c"
    }
#line 371 "mode_robdd.implications.m"
    {
#line 371 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__map__elem_2_f_0(mode_robdd__implications__TypeInfo_9_9, mode_robdd__implications__TypeInfo_11_11, ((MR_Box) (mode_robdd__implications__V_4)), (MR_Word) mode_robdd__implications__M_5, &mode_robdd__implications__conv0_Vs_6);
    }
#line 371 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 371 "mode_robdd.implications.m"
      {
#line 371 "mode_robdd.implications.m"
        mode_robdd__implications__Vs_6 = ((MR_Word) mode_robdd__implications__conv0_Vs_6);
#line 371 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = MR_TRUE;
#line 371 "mode_robdd.implications.m"
      }
#line 370 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 372 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__Vs_6;
#line 370 "mode_robdd.implications.m"
    else
#line 374 "mode_robdd.implications.m"
      {
#line 374 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_12_12;
#line 374 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_13_13;
#line 374 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv1_HeadVar__3_3;

#line 7022 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_12_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 7024 "mode_robdd.implications.c"
        {
#line 7026 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7028 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_13_13, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_12_12));
#line 7030 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_13_13, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_7));
#line 7032 "mode_robdd.implications.c"
        }
#line 374 "mode_robdd.implications.m"
        {
#line 374 "mode_robdd.implications.m"
          mode_robdd__implications__conv1_HeadVar__3_3 = mercury__sparse_bitset__init_0_f_0(mode_robdd__implications__TypeInfo_13_13);
        }
#line 374 "mode_robdd.implications.m"
        mode_robdd__implications__HeadVar__3_3 = (MR_Word) mode_robdd__implications__conv1_HeadVar__3_3;
#line 374 "mode_robdd.implications.m"
      }
#line 370 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 370 "mode_robdd.implications.m"
  }
#line 368 "mode_robdd.implications.m"
}

#line 297 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_1(
#line 297 "mode_robdd.implications.m"
  void * mode_robdd__implications__env_ptr_arg)
#line 297 "mode_robdd.implications.m"
{
#line 297 "mode_robdd.implications.m"
  {
#line 297 "mode_robdd.implications.m"
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * mode_robdd__implications__env_ptr;

#line 297 "mode_robdd.implications.m"
    mode_robdd__implications__env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s *) mode_robdd__implications__env_ptr_arg;
#line 297 "mode_robdd.implications.m"
    MR_builtin_longjmp((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__commit_0, 1);
#line 297 "mode_robdd.implications.m"
  }
#line 297 "mode_robdd.implications.m"
}

#line 300 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_3(
#line 300 "mode_robdd.implications.m"
  void * mode_robdd__implications__env_ptr_arg)
#line 300 "mode_robdd.implications.m"
{
#line 300 "mode_robdd.implications.m"
  {
#line 300 "mode_robdd.implications.m"
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * mode_robdd__implications__env_ptr;

#line 300 "mode_robdd.implications.m"
    mode_robdd__implications__env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s *) mode_robdd__implications__env_ptr_arg;
#line 300 "mode_robdd.implications.m"
    (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__VA_8 = ((MR_Word) (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv1_VA_8);
#line 300 "mode_robdd.implications.m"
    (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__Vs_10 = ((MR_Word) (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv0_Vs_10);
#line 300 "mode_robdd.implications.m"
    {
#line 300 "mode_robdd.implications.m"
      mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_2(mode_robdd__implications__env_ptr);
    }
#line 300 "mode_robdd.implications.m"
  }
#line 300 "mode_robdd.implications.m"
}

#line 300 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_5(
#line 300 "mode_robdd.implications.m"
  void * mode_robdd__implications__env_ptr_arg)
#line 300 "mode_robdd.implications.m"
{
#line 300 "mode_robdd.implications.m"
  {
#line 300 "mode_robdd.implications.m"
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * mode_robdd__implications__env_ptr;

#line 300 "mode_robdd.implications.m"
    mode_robdd__implications__env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s *) mode_robdd__implications__env_ptr_arg;
#line 300 "mode_robdd.implications.m"
    (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__VB_9 = ((MR_Word) (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv2_VB_9);
#line 300 "mode_robdd.implications.m"
    {
#line 300 "mode_robdd.implications.m"
      mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_4(mode_robdd__implications__env_ptr);
    }
#line 300 "mode_robdd.implications.m"
  }
#line 300 "mode_robdd.implications.m"
}

#line 297 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_4(
#line 297 "mode_robdd.implications.m"
  void * mode_robdd__implications__env_ptr_arg)
#line 297 "mode_robdd.implications.m"
{
#line 297 "mode_robdd.implications.m"
  {
#line 297 "mode_robdd.implications.m"
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * mode_robdd__implications__env_ptr;

#line 297 "mode_robdd.implications.m"
    mode_robdd__implications__env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s *) mode_robdd__implications__env_ptr_arg;
#line 302 "mode_robdd.implications.m"
    {
#line 302 "mode_robdd.implications.m"
      (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded = mode_robdd__equiv_vars__vars_are_not_equivalent_3_p_0((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_for_T_11, (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__EQVars_4, (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__VA_8, (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__VB_9);
    }
#line 301 "mode_robdd.implications.m"
    (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded = !((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded);
#line 301 "mode_robdd.implications.m"
    if ((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded)
#line 301 "mode_robdd.implications.m"
      {
#line 301 "mode_robdd.implications.m"
        mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_1(mode_robdd__implications__env_ptr);
      }
#line 297 "mode_robdd.implications.m"
  }
#line 297 "mode_robdd.implications.m"
}

#line 297 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_2(
#line 297 "mode_robdd.implications.m"
  void * mode_robdd__implications__env_ptr_arg)
#line 297 "mode_robdd.implications.m"
{
#line 297 "mode_robdd.implications.m"
  {
#line 297 "mode_robdd.implications.m"
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * mode_robdd__implications__env_ptr;

#line 297 "mode_robdd.implications.m"
    mode_robdd__implications__env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s *) mode_robdd__implications__env_ptr_arg;
#line 7172 "mode_robdd.implications.c"
    (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__BaseTypeClassInfo_for_enum_16 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 7174 "mode_robdd.implications.c"
    {
#line 7176 "mode_robdd.implications.c"
      MR_Word base;
#line 7178 "mode_robdd.implications.c"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7180 "mode_robdd.implications.c"
      (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeClassInfo_for_enum_17 = base;
#line 7182 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__BaseTypeClassInfo_for_enum_16));
#line 7184 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_for_T_11));
#line 7186 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_13_13));
#line 7188 "mode_robdd.implications.c"
    }
#line 300 "mode_robdd.implications.m"
    {
#line 300 "mode_robdd.implications.m"
      mercury__sparse_bitset__member_2_p_1((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeClassInfo_for_enum_17, &(mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv2_VB_9, (MR_Word) (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__Vs_10, mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_5, mode_robdd__implications__env_ptr);
    }
#line 297 "mode_robdd.implications.m"
  }
#line 297 "mode_robdd.implications.m"
}

#line 297 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_6(
#line 297 "mode_robdd.implications.m"
  void * mode_robdd__implications__env_ptr_arg)
#line 297 "mode_robdd.implications.m"
{
#line 297 "mode_robdd.implications.m"
  {
#line 297 "mode_robdd.implications.m"
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * mode_robdd__implications__env_ptr;

#line 297 "mode_robdd.implications.m"
    mode_robdd__implications__env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s *) mode_robdd__implications__env_ptr_arg;
#line 297 "mode_robdd.implications.m"
    if (MR_builtin_setjmp((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__commit_0) == 0)
#line 297 "mode_robdd.implications.m"
      {
#line 297 "mode_robdd.implications.m"
        {
#line 297 "mode_robdd.implications.m"
          MR_Word mode_robdd__implications__TypeCtorInfo_12_12;
#line 297 "mode_robdd.implications.m"
          MR_Word mode_robdd__implications__TypeCtorInfo_14_14;
#line 297 "mode_robdd.implications.m"
          MR_Word mode_robdd__implications__TypeInfo_15_15;

#line 7227 "mode_robdd.implications.c"
          mode_robdd__implications__TypeCtorInfo_12_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 7229 "mode_robdd.implications.c"
          {
#line 7231 "mode_robdd.implications.c"
            MR_Word base;
#line 7233 "mode_robdd.implications.c"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7235 "mode_robdd.implications.c"
            (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_13_13 = base;
#line 7237 "mode_robdd.implications.c"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_12_12));
#line 7239 "mode_robdd.implications.c"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_for_T_11));
#line 7241 "mode_robdd.implications.c"
          }
#line 7243 "mode_robdd.implications.c"
          mode_robdd__implications__TypeCtorInfo_14_14 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 7245 "mode_robdd.implications.c"
          {
#line 7247 "mode_robdd.implications.c"
            mode_robdd__implications__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7249 "mode_robdd.implications.c"
            MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_15_15, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_14_14));
#line 7251 "mode_robdd.implications.c"
            MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_15_15, 1) = ((MR_Box) ((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_13_13));
#line 7253 "mode_robdd.implications.c"
          }
#line 300 "mode_robdd.implications.m"
          {
#line 300 "mode_robdd.implications.m"
            mercury__map__member_3_p_0((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_13_13, mode_robdd__implications__TypeInfo_15_15, (MR_Word) (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__ImpMap_7, &(mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv1_VA_8, &(mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv0_Vs_10, mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_3, mode_robdd__implications__env_ptr);
          }
#line 297 "mode_robdd.implications.m"
        }
#line 297 "mode_robdd.implications.m"
        (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded = MR_FALSE;
#line 297 "mode_robdd.implications.m"
      }
#line 297 "mode_robdd.implications.m"
    else
#line 297 "mode_robdd.implications.m"
      (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded = MR_TRUE;
#line 297 "mode_robdd.implications.m"
  }
#line 297 "mode_robdd.implications.m"
}

#line 292 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0(
#line 292 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_11,
#line 292 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__EQVars_4,
#line 292 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__DisImps_5,
#line 292 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__RevDisImps_6)
#line 292 "mode_robdd.implications.m"
{
#line 292 "mode_robdd.implications.m"
  {
#line 292 "mode_robdd.implications.m"
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s mode_robdd__implications__env;
#line 292 "mode_robdd.implications.m"
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * mode_robdd__implications__env_ptr;

#line 292 "mode_robdd.implications.m"
    mode_robdd__implications__env_ptr = &mode_robdd__implications__env;
#line 292 "mode_robdd.implications.m"
    (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_for_T_11 = mode_robdd__implications__TypeInfo_for_T_11;
#line 292 "mode_robdd.implications.m"
    (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__EQVars_4 = mode_robdd__implications__EQVars_4;
#line 296 "mode_robdd.implications.m"
    {
#line 296 "mode_robdd.implications.m"
      (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__ImpMap_7 = mode_robdd__implications__intersect_2_f_0((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_for_T_11, mode_robdd__implications__DisImps_5, mode_robdd__implications__RevDisImps_6);
    }
#line 297 "mode_robdd.implications.m"
    {
#line 297 "mode_robdd.implications.m"
      mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_6(mode_robdd__implications__env_ptr);
    }
#line 297 "mode_robdd.implications.m"
    (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded = !((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded);
#line 295 "mode_robdd.implications.m"
    return (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded;
#line 292 "mode_robdd.implications.m"
  }
#line 292 "mode_robdd.implications.m"
}

#line 287 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0_1(
#line 287 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 287 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 287 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 287 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3)
#line 287 "mode_robdd.implications.m"
{
#line 287 "mode_robdd.implications.m"
  {
#line 287 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_4;
#line 287 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 287 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__conv0_LambdaHeadVar__4_19;

#line 287 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 287 "mode_robdd.implications.m"
    {
#line 287 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_LambdaHeadVar__4_19 = mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__287__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Tuple) mode_robdd__implications__wrapper_arg_3));
    }
#line 287 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__4_19));
#line 287 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_4;
#line 287 "mode_robdd.implications.m"
  }
#line 287 "mode_robdd.implications.m"
}

#line 283 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0(
#line 283 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_30,
#line 283 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__EQVars_5,
#line 283 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__Changed_6,
#line 283 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpMap0_7,
#line 283 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__ImpMap_8)
#line 283 "mode_robdd.implications.m"
{
#line 286 "mode_robdd.implications.m"
  {
#line 286 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 286 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_31_31;
#line 286 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_32_32;
#line 286 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_33_33;
#line 286 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_34_34;
#line 286 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_35_35;
#line 286 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_36_36;
#line 286 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_37_37;
#line 286 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_38_38;
#line 286 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_40_40;
#line 286 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__V_14_14;
#line 286 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_15_15;
#line 286 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__V_23_23;
#line 286 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_24_24;
#line 286 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_25_25;
#line 286 "mode_robdd.implications.m"
    MR_Integer mode_robdd__implications__PolyConst2_39;
#line 290 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv1_V_24_24;
#line 287 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv2_V_14_14;

#line 7412 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 7414 "mode_robdd.implications.c"
    {
#line 7416 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7418 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_32_32, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_31_31));
#line 7420 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_32_32, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_30));
#line 7422 "mode_robdd.implications.c"
    }
#line 7424 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_33_33 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 7426 "mode_robdd.implications.c"
    {
#line 7428 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7430 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_34_34, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_33_33));
#line 7432 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_34_34, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_32_32));
#line 7434 "mode_robdd.implications.c"
    }
#line 7436 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_38_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 7438 "mode_robdd.implications.c"
    mode_robdd__implications__PolyConst2_39 = (MR_Integer) 2;
#line 7440 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_35_35 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 7442 "mode_robdd.implications.c"
    {
#line 7444 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7446 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_36_36, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_35_35));
#line 7448 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_36_36, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_32_32));
#line 7450 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_36_36, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_34_34));
#line 7452 "mode_robdd.implications.c"
    }
#line 7454 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_37_37 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 7456 "mode_robdd.implications.c"
    {
#line 7458 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 7460 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_40_40, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_38_38));
#line 7462 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_40_40, 1) = ((MR_Box) (mode_robdd__implications__PolyConst2_39));
#line 7464 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_40_40, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_36_36));
#line 7466 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_40_40, 3) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_37_37));
#line 7468 "mode_robdd.implications.c"
    }
#line 287 "mode_robdd.implications.m"
    {
#line 287 "mode_robdd.implications.m"
      mode_robdd__implications__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 287 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[2]));
#line 287 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 1) = ((MR_Box) (mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0_1));
#line 287 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 287 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_30));
#line 287 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 4) = ((MR_Box) (mode_robdd__implications__EQVars_5));
#line 287 "mode_robdd.implications.m"
    }
#line 290 "mode_robdd.implications.m"
    {
#line 290 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_V_24_24 = mercury__map__init_0_f_0(mode_robdd__implications__TypeInfo_32_32, mode_robdd__implications__TypeInfo_34_34);
    }
#line 290 "mode_robdd.implications.m"
    mode_robdd__implications__V_24_24 = (MR_Word) mode_robdd__implications__conv1_V_24_24;
#line 290 "mode_robdd.implications.m"
    mode_robdd__implications__V_25_25 = (MR_Integer) 0;
#line 290 "mode_robdd.implications.m"
    {
#line 290 "mode_robdd.implications.m"
      mode_robdd__implications__V_23_23 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 290 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_23_23, 0) = ((MR_Box) (mode_robdd__implications__V_24_24));
#line 290 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_23_23, 1) = ((MR_Box) (mode_robdd__implications__V_25_25));
#line 290 "mode_robdd.implications.m"
    }
#line 287 "mode_robdd.implications.m"
    {
#line 287 "mode_robdd.implications.m"
      mode_robdd__implications__conv2_V_14_14 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_32_32, mode_robdd__implications__TypeInfo_34_34, mode_robdd__implications__TypeInfo_40_40, (MR_Word) mode_robdd__implications__V_15_15, (MR_Word) mode_robdd__implications__ImpMap0_7, ((MR_Box) (mode_robdd__implications__V_23_23)));
    }
#line 287 "mode_robdd.implications.m"
    mode_robdd__implications__V_14_14 = ((MR_Tuple) mode_robdd__implications__conv2_V_14_14);
#line 287 "mode_robdd.implications.m"
    *mode_robdd__implications__ImpMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_14_14, (MR_Integer) 0)));
#line 287 "mode_robdd.implications.m"
    *mode_robdd__implications__Changed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_14_14, (MR_Integer) 1)));
#line 286 "mode_robdd.implications.m"
  }
#line 283 "mode_robdd.implications.m"
}

#line 262 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__normalise_pairs_6_p_0_1(
#line 262 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 262 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 262 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2)
#line 262 "mode_robdd.implications.m"
{
#line 262 "mode_robdd.implications.m"
  {
#line 262 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_3;
#line 262 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 262 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv3_HeadVar__4_37;

#line 262 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 262 "mode_robdd.implications.m"
    {
#line 262 "mode_robdd.implications.m"
      mode_robdd__implications__conv3_HeadVar__4_37 = mode_robdd__implications__IntroducedFrom__func__normalise_pairs__262__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2));
    }
#line 262 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_3 = ((MR_Box) (mode_robdd__implications__conv3_HeadVar__4_37));
#line 262 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_3;
#line 262 "mode_robdd.implications.m"
  }
#line 262 "mode_robdd.implications.m"
}

#line 246 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__normalise_pairs_6_p_0(
#line 246 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
#line 246 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Extract_7,
#line 246 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Imps_8,
#line 246 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__DisImps_9,
#line 246 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__Changed_10,
#line 246 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__FalseVars0_11,
#line 246 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__FalseVars_12)
#line 246 "mode_robdd.implications.m"
{
#line 249 "mode_robdd.implications.m"
  {
#line 249 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 249 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Intersect_13;
#line 251 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_21_21;
#line 251 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_22_22;
#line 251 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_23_23;
#line 251 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_24_24;

#line 250 "mode_robdd.implications.m"
    {
#line 250 "mode_robdd.implications.m"
      mode_robdd__implications__Intersect_13 = mode_robdd__implications__intersect_2_f_0(mode_robdd__implications__TypeInfo_for_T_20, mode_robdd__implications__Imps_8, mode_robdd__implications__DisImps_9);
    }
#line 7596 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 7598 "mode_robdd.implications.c"
    {
#line 7600 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7602 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_21_21));
#line 7604 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 7606 "mode_robdd.implications.c"
    }
#line 7608 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_23_23 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 7610 "mode_robdd.implications.c"
    {
#line 7612 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7614 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_24_24, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_23_23));
#line 7616 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_22_22));
#line 7618 "mode_robdd.implications.c"
    }
#line 251 "mode_robdd.implications.m"
    {
#line 251 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__implications__TypeInfo_22_22, mode_robdd__implications__TypeInfo_24_24, (MR_Word) mode_robdd__implications__Intersect_13);
    }
#line 254 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 252 "mode_robdd.implications.m"
      {
#line 252 "mode_robdd.implications.m"
        *mode_robdd__implications__Changed_10 = (MR_Integer) 0;
#line 253 "mode_robdd.implications.m"
        *mode_robdd__implications__FalseVars_12 = mode_robdd__implications__FalseVars0_11;
#line 252 "mode_robdd.implications.m"
      }
#line 254 "mode_robdd.implications.m"
    else
#line 255 "mode_robdd.implications.m"
      {
#line 255 "mode_robdd.implications.m"
        *mode_robdd__implications__Changed_10 = (MR_Integer) 1;
#line 260 "mode_robdd.implications.m"
#line 260 "mode_robdd.implications.m"
        switch (mode_robdd__implications__Extract_7) {
#line 260 "mode_robdd.implications.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 260 "mode_robdd.implications.m"
          case (MR_Integer) 0:
#line 257 "mode_robdd.implications.m"
            {
#line 257 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__TypeCtorInfo_25_25;
#line 257 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__TypeInfo_26_26;
#line 257 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__TypeCtorInfo_27_27;
#line 257 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__TypeInfo_28_28;
#line 257 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_29;
#line 257 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__TypeClassInfo_for_enum_30;
#line 257 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__V_18_18;
#line 257 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__V_19_19;
#line 258 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__conv0_V_19_19;
#line 258 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__conv1_V_18_18;
#line 258 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__conv2_FalseVars_12;

#line 7673 "mode_robdd.implications.c"
              mode_robdd__implications__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 7675 "mode_robdd.implications.c"
              {
#line 7677 "mode_robdd.implications.c"
                mode_robdd__implications__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7679 "mode_robdd.implications.c"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_25_25));
#line 7681 "mode_robdd.implications.c"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 7683 "mode_robdd.implications.c"
              }
#line 7685 "mode_robdd.implications.c"
              mode_robdd__implications__TypeCtorInfo_27_27 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 7687 "mode_robdd.implications.c"
              {
#line 7689 "mode_robdd.implications.c"
                mode_robdd__implications__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7691 "mode_robdd.implications.c"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_28_28, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_27_27));
#line 7693 "mode_robdd.implications.c"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_26_26));
#line 7695 "mode_robdd.implications.c"
              }
#line 258 "mode_robdd.implications.m"
              {
#line 258 "mode_robdd.implications.m"
                mode_robdd__implications__conv0_V_19_19 = mercury__map__sorted_keys_1_f_0(mode_robdd__implications__TypeInfo_26_26, mode_robdd__implications__TypeInfo_28_28, (MR_Word) mode_robdd__implications__Intersect_13);
              }
#line 258 "mode_robdd.implications.m"
              mode_robdd__implications__V_19_19 = (MR_Word) mode_robdd__implications__conv0_V_19_19;
#line 7704 "mode_robdd.implications.c"
              mode_robdd__implications__BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 7706 "mode_robdd.implications.c"
              {
#line 7708 "mode_robdd.implications.c"
                mode_robdd__implications__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7710 "mode_robdd.implications.c"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_29));
#line 7712 "mode_robdd.implications.c"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 7714 "mode_robdd.implications.c"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_26_26));
#line 7716 "mode_robdd.implications.c"
              }
#line 258 "mode_robdd.implications.m"
              {
#line 258 "mode_robdd.implications.m"
                mode_robdd__implications__conv1_V_18_18 = mercury__sparse_bitset__sorted_list_to_set_1_f_0(mode_robdd__implications__TypeClassInfo_for_enum_30, (MR_Word) mode_robdd__implications__V_19_19);
              }
#line 258 "mode_robdd.implications.m"
              mode_robdd__implications__V_18_18 = (MR_Word) mode_robdd__implications__conv1_V_18_18;
#line 258 "mode_robdd.implications.m"
              {
#line 258 "mode_robdd.implications.m"
                mode_robdd__implications__conv2_FalseVars_12 = mercury__sparse_bitset__union_2_f_0(mode_robdd__implications__TypeInfo_26_26, (MR_Word) mode_robdd__implications__FalseVars0_11, (MR_Word) mode_robdd__implications__V_18_18);
              }
#line 258 "mode_robdd.implications.m"
              *mode_robdd__implications__FalseVars_12 = (MR_Word) mode_robdd__implications__conv2_FalseVars_12;
#line 257 "mode_robdd.implications.m"
            }
#line 260 "mode_robdd.implications.m"
            break;
#line 260 "mode_robdd.implications.m"
          case (MR_Integer) 1:
#line 261 "mode_robdd.implications.m"
            {
#line 261 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__TypeCtorInfo_31_31;
#line 261 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__TypeInfo_32_32;
#line 261 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__TypeCtorInfo_33_33;
#line 261 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__TypeInfo_34_34;
#line 261 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__Values_14;
#line 261 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__V_15_15;
#line 261 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__V_16_16;
#line 261 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__V_17_17;
#line 262 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__conv4_V_17_17;
#line 262 "mode_robdd.implications.m"
              MR_Box mode_robdd__implications__conv5_Values_14;
#line 263 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__conv6_FalseVars_12;

#line 7763 "mode_robdd.implications.c"
              mode_robdd__implications__TypeCtorInfo_33_33 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 7765 "mode_robdd.implications.c"
              mode_robdd__implications__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 7767 "mode_robdd.implications.c"
              {
#line 7769 "mode_robdd.implications.c"
                mode_robdd__implications__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7771 "mode_robdd.implications.c"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_32_32, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_31_31));
#line 7773 "mode_robdd.implications.c"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_32_32, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 7775 "mode_robdd.implications.c"
              }
#line 7777 "mode_robdd.implications.c"
              {
#line 7779 "mode_robdd.implications.c"
                mode_robdd__implications__TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7781 "mode_robdd.implications.c"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_34_34, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_33_33));
#line 7783 "mode_robdd.implications.c"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_34_34, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_32_32));
#line 7785 "mode_robdd.implications.c"
              }
#line 262 "mode_robdd.implications.m"
              {
#line 262 "mode_robdd.implications.m"
                mode_robdd__implications__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 262 "mode_robdd.implications.m"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[3]));
#line 262 "mode_robdd.implications.m"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 1) = ((MR_Box) (mode_robdd__implications__normalise_pairs_6_p_0_1));
#line 262 "mode_robdd.implications.m"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 262 "mode_robdd.implications.m"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 262 "mode_robdd.implications.m"
              }
#line 262 "mode_robdd.implications.m"
              {
#line 262 "mode_robdd.implications.m"
                mode_robdd__implications__V_16_16 = mercury__map__values_1_f_0(mode_robdd__implications__TypeInfo_32_32, mode_robdd__implications__TypeInfo_34_34, (MR_Word) mode_robdd__implications__Intersect_13);
              }
#line 262 "mode_robdd.implications.m"
              {
#line 262 "mode_robdd.implications.m"
                mode_robdd__implications__conv4_V_17_17 = mercury__sparse_bitset__init_0_f_0(mode_robdd__implications__TypeInfo_32_32);
              }
#line 262 "mode_robdd.implications.m"
              mode_robdd__implications__V_17_17 = (MR_Word) mode_robdd__implications__conv4_V_17_17;
#line 262 "mode_robdd.implications.m"
              {
#line 262 "mode_robdd.implications.m"
                mode_robdd__implications__conv5_Values_14 = mercury__list__foldl_3_f_0(mode_robdd__implications__TypeInfo_34_34, mode_robdd__implications__TypeInfo_34_34, (MR_Word) mode_robdd__implications__V_15_15, (MR_Word) mode_robdd__implications__V_16_16, ((MR_Box) (mode_robdd__implications__V_17_17)));
              }
#line 262 "mode_robdd.implications.m"
              mode_robdd__implications__Values_14 = ((MR_Word) mode_robdd__implications__conv5_Values_14);
#line 263 "mode_robdd.implications.m"
              {
#line 263 "mode_robdd.implications.m"
                mode_robdd__implications__conv6_FalseVars_12 = mercury__sparse_bitset__union_2_f_0(mode_robdd__implications__TypeInfo_32_32, (MR_Word) mode_robdd__implications__FalseVars0_11, (MR_Word) mode_robdd__implications__Values_14);
              }
#line 263 "mode_robdd.implications.m"
              *mode_robdd__implications__FalseVars_12 = (MR_Word) mode_robdd__implications__conv6_FalseVars_12;
#line 261 "mode_robdd.implications.m"
            }
#line 260 "mode_robdd.implications.m"
            break;
#line 260 "mode_robdd.implications.m"
        }
#line 255 "mode_robdd.implications.m"
      }
#line 249 "mode_robdd.implications.m"
  }
#line 246 "mode_robdd.implications.m"
}

#line 199 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__normalise_true_false_imp_map_8_p_0_1(
#line 199 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 199 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 199 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 199 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3)
#line 199 "mode_robdd.implications.m"
{
#line 199 "mode_robdd.implications.m"
  {
#line 199 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_4;
#line 199 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 199 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__conv0_LambdaHeadVar__4_35;

#line 199 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 199 "mode_robdd.implications.m"
    {
#line 199 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_LambdaHeadVar__4_35 = mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__199__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Tuple) mode_robdd__implications__wrapper_arg_3));
    }
#line 199 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__4_35));
#line 199 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_4;
#line 199 "mode_robdd.implications.m"
  }
#line 199 "mode_robdd.implications.m"
}

#line 193 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__normalise_true_false_imp_map_8_p_0(
#line 193 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_46,
#line 193 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IsDisImp_9,
#line 193 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__Changed_10,
#line 193 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TrueVars0_11,
#line 193 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__TrueVars_12,
#line 193 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__FalseVars0_13,
#line 193 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__FalseVars_14,
#line 193 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpMap0_15,
#line 193 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__ImpMap_16)
#line 193 "mode_robdd.implications.m"
{
#line 198 "mode_robdd.implications.m"
  {
#line 198 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 198 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_47_47;
#line 198 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_48_48;
#line 198 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_49_49;
#line 198 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_50_50;
#line 198 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_51_51;
#line 198 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_52_52;
#line 198 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_53_53;
#line 198 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_54_54;
#line 198 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_56_56;
#line 198 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__V_30_30;
#line 198 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_31_31;
#line 198 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__V_38_38;
#line 198 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_39_39;
#line 198 "mode_robdd.implications.m"
    MR_Integer mode_robdd__implications__PolyConst4_55;
#line 199 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv1_V_30_30;

#line 7936 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_47_47 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 7938 "mode_robdd.implications.c"
    {
#line 7940 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7942 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_48_48, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_47_47));
#line 7944 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_48_48, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 7946 "mode_robdd.implications.c"
    }
#line 7948 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_49_49 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 7950 "mode_robdd.implications.c"
    {
#line 7952 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7954 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_50_50, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_49_49));
#line 7956 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_50_50, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_48_48));
#line 7958 "mode_robdd.implications.c"
    }
#line 7960 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_54_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 7962 "mode_robdd.implications.c"
    mode_robdd__implications__PolyConst4_55 = (MR_Integer) 4;
#line 7964 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_51_51 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 7966 "mode_robdd.implications.c"
    {
#line 7968 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7970 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_52_52, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_51_51));
#line 7972 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_52_52, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_48_48));
#line 7974 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_52_52, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_50_50));
#line 7976 "mode_robdd.implications.c"
    }
#line 7978 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_53_53 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 7980 "mode_robdd.implications.c"
    {
#line 7982 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 7984 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_56_56, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_54_54));
#line 7986 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_56_56, 1) = ((MR_Box) (mode_robdd__implications__PolyConst4_55));
#line 7988 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_56_56, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_50_50));
#line 7990 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_56_56, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_50_50));
#line 7992 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_56_56, 4) = ((MR_Box) (mode_robdd__implications__TypeInfo_52_52));
#line 7994 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_56_56, 5) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_53_53));
#line 7996 "mode_robdd.implications.c"
    }
#line 199 "mode_robdd.implications.m"
    {
#line 199 "mode_robdd.implications.m"
      mode_robdd__implications__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 199 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_31_31, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[1]));
#line 199 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_31_31, 1) = ((MR_Box) (mode_robdd__implications__normalise_true_false_imp_map_8_p_0_1));
#line 199 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 199 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_31_31, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 199 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_31_31, 4) = ((MR_Box) (mode_robdd__implications__IsDisImp_9));
#line 199 "mode_robdd.implications.m"
    }
#line 242 "mode_robdd.implications.m"
    mode_robdd__implications__V_39_39 = (MR_Integer) 0;
#line 242 "mode_robdd.implications.m"
    {
#line 242 "mode_robdd.implications.m"
      mode_robdd__implications__V_38_38 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 242 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_38_38, 0) = ((MR_Box) (mode_robdd__implications__TrueVars0_11));
#line 242 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_38_38, 1) = ((MR_Box) (mode_robdd__implications__FalseVars0_13));
#line 242 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_38_38, 2) = ((MR_Box) (mode_robdd__implications__ImpMap0_15));
#line 242 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_38_38, 3) = ((MR_Box) (mode_robdd__implications__V_39_39));
#line 242 "mode_robdd.implications.m"
    }
#line 199 "mode_robdd.implications.m"
    {
#line 199 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_V_30_30 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_48_48, mode_robdd__implications__TypeInfo_50_50, mode_robdd__implications__TypeInfo_56_56, (MR_Word) mode_robdd__implications__V_31_31, (MR_Word) mode_robdd__implications__ImpMap0_15, ((MR_Box) (mode_robdd__implications__V_38_38)));
    }
#line 199 "mode_robdd.implications.m"
    mode_robdd__implications__V_30_30 = ((MR_Tuple) mode_robdd__implications__conv1_V_30_30);
#line 199 "mode_robdd.implications.m"
    *mode_robdd__implications__TrueVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_30_30, (MR_Integer) 0)));
#line 199 "mode_robdd.implications.m"
    *mode_robdd__implications__FalseVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_30_30, (MR_Integer) 1)));
#line 199 "mode_robdd.implications.m"
    *mode_robdd__implications__ImpMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_30_30, (MR_Integer) 2)));
#line 199 "mode_robdd.implications.m"
    *mode_robdd__implications__Changed_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_30_30, (MR_Integer) 3)));
#line 198 "mode_robdd.implications.m"
  }
#line 193 "mode_robdd.implications.m"
}

#line 122 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__filter_imp_map_2_f_0_1(
#line 122 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 122 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 122 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 122 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3)
#line 122 "mode_robdd.implications.m"
{
#line 122 "mode_robdd.implications.m"
  {
#line 122 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_4;
#line 122 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 122 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_LambdaHeadVar__4_13;

#line 122 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 122 "mode_robdd.implications.m"
    {
#line 122 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_LambdaHeadVar__4_13 = mode_robdd__implications__IntroducedFrom__func__filter_imp_map__122__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Word) mode_robdd__implications__wrapper_arg_3));
    }
#line 122 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__4_13));
#line 122 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_4;
#line 122 "mode_robdd.implications.m"
  }
#line 122 "mode_robdd.implications.m"
}

#line 119 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__filter_imp_map_2_f_0(
#line 119 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
#line 119 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__P_4,
#line 119 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IM_5)
#line 119 "mode_robdd.implications.m"
{
#line 121 "mode_robdd.implications.m"
  {
#line 121 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 121 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 121 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_20_20;
#line 121 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_21_21;
#line 121 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_22_22;
#line 121 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_23_23;
#line 121 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_24_24;
#line 121 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_25_25;
#line 121 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_9_9;
#line 122 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv1_HeadVar__3_3;

#line 8122 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 8124 "mode_robdd.implications.c"
    {
#line 8126 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8128 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_21_21, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_20_20));
#line 8130 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_21_21, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 8132 "mode_robdd.implications.c"
    }
#line 8134 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_22_22 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 8136 "mode_robdd.implications.c"
    {
#line 8138 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8140 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_22_22));
#line 8142 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_21_21));
#line 8144 "mode_robdd.implications.c"
    }
#line 8146 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_24_24 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 8148 "mode_robdd.implications.c"
    {
#line 8150 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8152 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_25_25, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_24_24));
#line 8154 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_25_25, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_21_21));
#line 8156 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_25_25, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_23_23));
#line 8158 "mode_robdd.implications.c"
    }
#line 122 "mode_robdd.implications.m"
    {
#line 122 "mode_robdd.implications.m"
      mode_robdd__implications__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 122 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[0]));
#line 122 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 1) = ((MR_Box) (mode_robdd__implications__filter_imp_map_2_f_0_1));
#line 122 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 122 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 122 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 4) = ((MR_Box) (mode_robdd__implications__P_4));
#line 122 "mode_robdd.implications.m"
    }
#line 122 "mode_robdd.implications.m"
    {
#line 122 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_HeadVar__3_3 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_21_21, mode_robdd__implications__TypeInfo_23_23, mode_robdd__implications__TypeInfo_25_25, (MR_Word) mode_robdd__implications__V_9_9, (MR_Word) mode_robdd__implications__IM_5, ((MR_Box) (mode_robdd__implications__IM_5)));
    }
#line 122 "mode_robdd.implications.m"
    mode_robdd__implications__HeadVar__3_3 = ((MR_Word) mode_robdd__implications__conv1_HeadVar__3_3);
#line 121 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 121 "mode_robdd.implications.m"
  }
#line 119 "mode_robdd.implications.m"
}

#line 104 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__restrict_threshold_2_3_f_0(
#line 104 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_16,
#line 104 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__1_1,
#line 104 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_2,
#line 104 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IM_3)
#line 104 "mode_robdd.implications.m"
{
#line 107 "mode_robdd.implications.m"
  {
#line 107 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 107 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__IM_4;

#line 107 "mode_robdd.implications.m"
    if ((mode_robdd__implications__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 107 "mode_robdd.implications.m"
      mode_robdd__implications__IM_4 = mode_robdd__implications__IM_3;
#line 107 "mode_robdd.implications.m"
    else
#line 108 "mode_robdd.implications.m"
      {
#line 108 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_8;
#line 108 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Vs_9;
#line 108 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__AL_10;
#line 108 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_12_12;
#line 109 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_17_17;
#line 109 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_18_18;
#line 109 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_13_13;
#line 109 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_23_23;

#line 108 "mode_robdd.implications.m"
        mode_robdd__implications__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__implications__HeadVar__2_2, (MR_Integer) 0)));
#line 108 "mode_robdd.implications.m"
        mode_robdd__implications__AL_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__implications__HeadVar__2_2, (MR_Integer) 1)));
#line 108 "mode_robdd.implications.m"
        mode_robdd__implications__V_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_12_12, (MR_Integer) 0)));
#line 108 "mode_robdd.implications.m"
        mode_robdd__implications__Vs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_12_12, (MR_Integer) 1)));
#line 109 "mode_robdd.implications.m"
        mode_robdd__implications__V_13_13 = (MR_Integer) 2;
#line 8245 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 8247 "mode_robdd.implications.c"
        {
#line 8249 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8251 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_17_17));
#line 8253 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_16));
#line 8255 "mode_robdd.implications.c"
        }
#line 109 "mode_robdd.implications.m"
        {
#line 109 "mode_robdd.implications.m"
          mercury__builtin__compare_3_p_0(mode_robdd__implications__TypeInfo_18_18, &mode_robdd__implications__V_23_23, ((MR_Box) (mode_robdd__implications__V_8)), ((MR_Box) (mode_robdd__implications__HeadVar__1_1)));
        }
#line 109 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = (mode_robdd__implications__V_13_13 == mode_robdd__implications__V_23_23);
#line 108 "mode_robdd.implications.m"
        if (mode_robdd__implications__succeeded)
#line 110 "mode_robdd.implications.m"
          mode_robdd__implications__IM_4 = mode_robdd__implications__IM_3;
#line 108 "mode_robdd.implications.m"
        else
#line 112 "mode_robdd.implications.m"
          {
#line 112 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeCtorInfo_19_19;
#line 112 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeInfo_20_20;
#line 112 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_21;
#line 112 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeClassInfo_for_enum_22;
#line 112 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_14_14;
#line 112 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_15_15;
#line 113 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__conv0_V_15_15;

#line 8287 "mode_robdd.implications.c"
            mode_robdd__implications__BaseTypeClassInfo_for_enum_21 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 8289 "mode_robdd.implications.c"
            mode_robdd__implications__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 8291 "mode_robdd.implications.c"
            {
#line 8293 "mode_robdd.implications.c"
              mode_robdd__implications__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8295 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_20_20, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_19_19));
#line 8297 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_20_20, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_16));
#line 8299 "mode_robdd.implications.c"
            }
#line 8301 "mode_robdd.implications.c"
            {
#line 8303 "mode_robdd.implications.c"
              mode_robdd__implications__TypeClassInfo_for_enum_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8305 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_22, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_21));
#line 8307 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_22, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_16));
#line 8309 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_22, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_20_20));
#line 8311 "mode_robdd.implications.c"
            }
#line 113 "mode_robdd.implications.m"
            {
#line 113 "mode_robdd.implications.m"
              mode_robdd__implications__conv0_V_15_15 = mercury__sparse_bitset__remove_gt_2_f_0(mode_robdd__implications__TypeClassInfo_for_enum_22, (MR_Word) mode_robdd__implications__Vs_9, ((MR_Box) (mode_robdd__implications__HeadVar__1_1)));
            }
#line 113 "mode_robdd.implications.m"
            mode_robdd__implications__V_15_15 = (MR_Word) mode_robdd__implications__conv0_V_15_15;
#line 112 "mode_robdd.implications.m"
            {
#line 112 "mode_robdd.implications.m"
              mode_robdd__implications__V_14_14 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_16, mode_robdd__implications__V_8, mode_robdd__implications__IM_3, mode_robdd__implications__V_15_15);
            }
#line 112 "mode_robdd.implications.m"
            {
#line 112 "mode_robdd.implications.m"
              mode_robdd__implications__IM_4 = mode_robdd__implications__restrict_threshold_2_3_f_0(mode_robdd__implications__TypeInfo_for_T_16, mode_robdd__implications__HeadVar__1_1, mode_robdd__implications__AL_10, mode_robdd__implications__V_14_14);
            }
#line 112 "mode_robdd.implications.m"
          }
#line 108 "mode_robdd.implications.m"
      }
#line 107 "mode_robdd.implications.m"
    return mode_robdd__implications__IM_4;
#line 107 "mode_robdd.implications.m"
  }
#line 104 "mode_robdd.implications.m"
}

#line 362 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__add_equalities_to_imp_vars_2_f_0_1(
#line 362 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 362 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 362 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 362 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3)
#line 362 "mode_robdd.implications.m"
{
#line 362 "mode_robdd.implications.m"
  {
#line 362 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_4;
#line 362 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 362 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_LambdaHeadVar__4_13;

#line 362 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 362 "mode_robdd.implications.m"
    {
#line 362 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_LambdaHeadVar__4_13 = mode_robdd__implications__IntroducedFrom__func__add_equalities_to_imp_vars__362__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Word) mode_robdd__implications__wrapper_arg_3));
    }
#line 362 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__4_13));
#line 362 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_4;
#line 362 "mode_robdd.implications.m"
  }
#line 362 "mode_robdd.implications.m"
}

#line 61 "mode_robdd.implications.m"
MR_Word MR_CALL 
mode_robdd__implications__add_equalities_to_imp_vars_2_f_0(
#line 61 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
#line 61 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__EQVars_4,
#line 61 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_5)
#line 61 "mode_robdd.implications.m"
{
#line 361 "mode_robdd.implications.m"
  {
#line 361 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 361 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 361 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_20_20;
#line 361 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_21_21;
#line 361 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_22_22;
#line 361 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_23_23;
#line 361 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_9_9;
#line 361 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_15_15;
#line 362 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv1_HeadVar__3_3;

#line 8411 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 8413 "mode_robdd.implications.c"
    {
#line 8415 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8417 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_21_21, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_20_20));
#line 8419 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_21_21, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 8421 "mode_robdd.implications.c"
    }
#line 8423 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_22_22 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_imp_vars_1;
#line 8425 "mode_robdd.implications.c"
    {
#line 8427 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8429 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_22_22));
#line 8431 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 8433 "mode_robdd.implications.c"
    }
#line 362 "mode_robdd.implications.m"
    {
#line 362 "mode_robdd.implications.m"
      mode_robdd__implications__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 362 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[0]));
#line 362 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 1) = ((MR_Box) (mode_robdd__implications__add_equalities_to_imp_vars_2_f_0_1));
#line 362 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 362 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 362 "mode_robdd.implications.m"
    }
#line 362 "mode_robdd.implications.m"
    mode_robdd__implications__V_15_15 = (MR_Word) mode_robdd__implications__EQVars_4;
#line 362 "mode_robdd.implications.m"
    {
#line 362 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_HeadVar__3_3 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_21_21, mode_robdd__implications__TypeInfo_21_21, mode_robdd__implications__TypeInfo_23_23, (MR_Word) mode_robdd__implications__V_9_9, (MR_Word) mode_robdd__implications__V_15_15, ((MR_Box) (mode_robdd__implications__ImpVars_5)));
    }
#line 362 "mode_robdd.implications.m"
    mode_robdd__implications__HeadVar__3_3 = ((MR_Word) mode_robdd__implications__conv1_HeadVar__3_3);
#line 361 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 361 "mode_robdd.implications.m"
  }
#line 61 "mode_robdd.implications.m"
}

#line 58 "mode_robdd.implications.m"
void MR_CALL 
mode_robdd__implications__extract_implication_vars_from_robdd_5_p_0(
#line 58 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_12,
#line 58 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__Changed_6,
#line 58 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Robdd0_7,
#line 58 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__Robdd_8,
#line 58 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars0_9,
#line 58 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__ImpVars_10)
#line 58 "mode_robdd.implications.m"
{
#line 341 "mode_robdd.implications.m"
  {
#line 341 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 341 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__ImpVars1_11;
#line 357 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_13_13;
#line 357 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_14_14;

#line 343 "mode_robdd.implications.m"
    {
#line 343 "mode_robdd.implications.m"
      mode_robdd__implications__ImpVars1_11 = mercury__robdd__extract_implications_1_f_0(mode_robdd__implications__TypeInfo_for_T_12, mode_robdd__implications__Robdd0_7);
    }
#line 344 "mode_robdd.implications.m"
    {
#line 344 "mode_robdd.implications.m"
      *mode_robdd__implications__ImpVars_10 = mode_robdd__implications__f_times_2_f_0(mode_robdd__implications__TypeInfo_for_T_12, mode_robdd__implications__ImpVars0_9, mode_robdd__implications__ImpVars1_11);
    }
#line 352 "mode_robdd.implications.m"
    {
#line 352 "mode_robdd.implications.m"
      *mode_robdd__implications__Robdd_8 = mercury__robdd__remove_implications_2_f_0(mode_robdd__implications__TypeInfo_for_T_12, *mode_robdd__implications__ImpVars_10, mode_robdd__implications__Robdd0_7);
    }
#line 8508 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_13_13 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_robdd_1;
#line 8510 "mode_robdd.implications.c"
    {
#line 8512 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8514 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_13_13));
#line 8516 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
#line 8518 "mode_robdd.implications.c"
    }
#line 357 "mode_robdd.implications.m"
    {
#line 357 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__builtin__unify_2_p_0(mode_robdd__implications__TypeInfo_14_14, ((MR_Box) (*mode_robdd__implications__Robdd_8)), ((MR_Box) (mode_robdd__implications__Robdd0_7)));
    }
#line 357 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 357 "mode_robdd.implications.m"
      {
#line 357 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = mode_robdd__implications__empty_1_p_0(mode_robdd__implications__TypeInfo_for_T_12, mode_robdd__implications__ImpVars1_11);
      }
#line 357 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 357 "mode_robdd.implications.m"
      *mode_robdd__implications__Changed_6 = (MR_Integer) 0;
#line 357 "mode_robdd.implications.m"
    else
#line 357 "mode_robdd.implications.m"
      *mode_robdd__implications__Changed_6 = (MR_Integer) 1;
#line 341 "mode_robdd.implications.m"
  }
#line 58 "mode_robdd.implications.m"
}

#line 317 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__propagate_implications_into_equivalences_5_p_0_1(
#line 317 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 317 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 317 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 317 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3)
#line 317 "mode_robdd.implications.m"
{
#line 317 "mode_robdd.implications.m"
  {
#line 317 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_4;
#line 317 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 317 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__conv0_LambdaHeadVar__4_34;

#line 317 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 317 "mode_robdd.implications.m"
    {
#line 317 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_LambdaHeadVar__4_34 = mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__317__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Tuple) mode_robdd__implications__wrapper_arg_3));
    }
#line 317 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__4_34));
#line 317 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_4;
#line 317 "mode_robdd.implications.m"
  }
#line 317 "mode_robdd.implications.m"
}

#line 55 "mode_robdd.implications.m"
void MR_CALL 
mode_robdd__implications__propagate_implications_into_equivalences_5_p_0(
#line 55 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_46,
#line 55 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__Changed_6,
#line 55 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__EQVars0_7,
#line 55 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__EQVars_8,
#line 55 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars0_9,
#line 55 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__ImpVars_10)
#line 55 "mode_robdd.implications.m"
{
#line 309 "mode_robdd.implications.m"
  {
#line 309 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 309 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Imps0_11;
#line 309 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RevImps0_12;
#line 309 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__DisImps_13;
#line 309 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RevDisImps_14;

#line 310 "mode_robdd.implications.m"
    mode_robdd__implications__Imps0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_9, (MR_Integer) 0)));
#line 310 "mode_robdd.implications.m"
    mode_robdd__implications__RevImps0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_9, (MR_Integer) 1)));
#line 310 "mode_robdd.implications.m"
    mode_robdd__implications__DisImps_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_9, (MR_Integer) 2)));
#line 310 "mode_robdd.implications.m"
    mode_robdd__implications__RevDisImps_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_9, (MR_Integer) 3)));
#line 312 "mode_robdd.implications.m"
    {
#line 312 "mode_robdd.implications.m"
      MR_Word mode_robdd__implications__TypeCtorInfo_47_47;
#line 312 "mode_robdd.implications.m"
      MR_Word mode_robdd__implications__TypeInfo_48_48;
#line 312 "mode_robdd.implications.m"
      MR_Word mode_robdd__implications__TypeCtorInfo_49_49;
#line 312 "mode_robdd.implications.m"
      MR_Word mode_robdd__implications__TypeInfo_50_50;

#line 8632 "mode_robdd.implications.c"
      mode_robdd__implications__TypeCtorInfo_47_47 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 8634 "mode_robdd.implications.c"
      {
#line 8636 "mode_robdd.implications.c"
        mode_robdd__implications__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8638 "mode_robdd.implications.c"
        MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_48_48, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_47_47));
#line 8640 "mode_robdd.implications.c"
        MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_48_48, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 8642 "mode_robdd.implications.c"
      }
#line 8644 "mode_robdd.implications.c"
      mode_robdd__implications__TypeCtorInfo_49_49 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 8646 "mode_robdd.implications.c"
      {
#line 8648 "mode_robdd.implications.c"
        mode_robdd__implications__TypeInfo_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8650 "mode_robdd.implications.c"
        MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_50_50, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_49_49));
#line 8652 "mode_robdd.implications.c"
        MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_50_50, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_48_48));
#line 8654 "mode_robdd.implications.c"
      }
#line 312 "mode_robdd.implications.m"
      {
#line 312 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__implications__TypeInfo_48_48, mode_robdd__implications__TypeInfo_50_50, (MR_Word) mode_robdd__implications__Imps0_11);
      }
#line 312 "mode_robdd.implications.m"
    }
#line 312 "mode_robdd.implications.m"
    if (!(mode_robdd__implications__succeeded))
#line 312 "mode_robdd.implications.m"
      {
#line 312 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_51_51;
#line 312 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_52_52;
#line 312 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_53_53;
#line 312 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_54_54;

#line 8676 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_51_51 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 8678 "mode_robdd.implications.c"
        {
#line 8680 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8682 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_52_52, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_51_51));
#line 8684 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_52_52, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 8686 "mode_robdd.implications.c"
        }
#line 8688 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_53_53 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 8690 "mode_robdd.implications.c"
        {
#line 8692 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8694 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_54_54, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_53_53));
#line 8696 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_54_54, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_52_52));
#line 8698 "mode_robdd.implications.c"
        }
#line 312 "mode_robdd.implications.m"
        {
#line 312 "mode_robdd.implications.m"
          mode_robdd__implications__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__implications__TypeInfo_52_52, mode_robdd__implications__TypeInfo_54_54, (MR_Word) mode_robdd__implications__RevImps0_12);
        }
#line 312 "mode_robdd.implications.m"
      }
#line 316 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 313 "mode_robdd.implications.m"
      {
#line 313 "mode_robdd.implications.m"
        *mode_robdd__implications__Changed_6 = (MR_Integer) 0;
#line 314 "mode_robdd.implications.m"
        *mode_robdd__implications__EQVars_8 = mode_robdd__implications__EQVars0_7;
#line 315 "mode_robdd.implications.m"
        *mode_robdd__implications__ImpVars_10 = mode_robdd__implications__ImpVars0_9;
#line 313 "mode_robdd.implications.m"
      }
#line 316 "mode_robdd.implications.m"
    else
#line 331 "mode_robdd.implications.m"
      {
#line 331 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_55_55;
#line 331 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_56_56;
#line 331 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_57_57;
#line 331 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_58_58;
#line 331 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_59_59;
#line 331 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_60_60;
#line 331 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_61_61;
#line 331 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_62_62;
#line 331 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_63_63;
#line 331 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_64_64;
#line 331 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_66_66;
#line 331 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Imps_15;
#line 331 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__RevImps_16;
#line 331 "mode_robdd.implications.m"
        MR_Tuple mode_robdd__implications__V_29_29;
#line 331 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_30_30;
#line 331 "mode_robdd.implications.m"
        MR_Tuple mode_robdd__implications__V_38_38;
#line 331 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_39_39;
#line 331 "mode_robdd.implications.m"
        MR_Integer mode_robdd__implications__PolyConst4_65;
#line 317 "mode_robdd.implications.m"
        MR_Box mode_robdd__implications__conv1_V_29_29;

#line 8762 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_55_55 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 8764 "mode_robdd.implications.c"
        {
#line 8766 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8768 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_56_56, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_55_55));
#line 8770 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_56_56, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 8772 "mode_robdd.implications.c"
        }
#line 8774 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_57_57 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 8776 "mode_robdd.implications.c"
        {
#line 8778 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8780 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_58_58, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_57_57));
#line 8782 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_58_58, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_56_56));
#line 8784 "mode_robdd.implications.c"
        }
#line 8786 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_64_64 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 8788 "mode_robdd.implications.c"
        mode_robdd__implications__PolyConst4_65 = (MR_Integer) 4;
#line 8790 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_59_59 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 8792 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_60_60 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_equiv_vars_1;
#line 8794 "mode_robdd.implications.c"
        {
#line 8796 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8798 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_61_61, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_60_60));
#line 8800 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_61_61, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 8802 "mode_robdd.implications.c"
        }
#line 8804 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_62_62 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 8806 "mode_robdd.implications.c"
        {
#line 8808 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8810 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_63_63, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_62_62));
#line 8812 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_63_63, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_56_56));
#line 8814 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_63_63, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_58_58));
#line 8816 "mode_robdd.implications.c"
        }
#line 8818 "mode_robdd.implications.c"
        {
#line 8820 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 8822 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_66_66, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_64_64));
#line 8824 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_66_66, 1) = ((MR_Box) (mode_robdd__implications__PolyConst4_65));
#line 8826 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_66_66, 2) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_59_59));
#line 8828 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_66_66, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_61_61));
#line 8830 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_66_66, 4) = ((MR_Box) (mode_robdd__implications__TypeInfo_63_63));
#line 8832 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_66_66, 5) = ((MR_Box) (mode_robdd__implications__TypeInfo_63_63));
#line 8834 "mode_robdd.implications.c"
        }
#line 317 "mode_robdd.implications.m"
        {
#line 317 "mode_robdd.implications.m"
          mode_robdd__implications__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 317 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_30_30, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[1]));
#line 317 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_30_30, 1) = ((MR_Box) (mode_robdd__implications__propagate_implications_into_equivalences_5_p_0_1));
#line 317 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 317 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_30_30, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 317 "mode_robdd.implications.m"
        }
#line 331 "mode_robdd.implications.m"
        mode_robdd__implications__V_39_39 = (MR_Integer) 0;
#line 331 "mode_robdd.implications.m"
        {
#line 331 "mode_robdd.implications.m"
          mode_robdd__implications__V_38_38 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 331 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_38_38, 0) = ((MR_Box) (mode_robdd__implications__V_39_39));
#line 331 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_38_38, 1) = ((MR_Box) (mode_robdd__implications__EQVars0_7));
#line 331 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_38_38, 2) = ((MR_Box) (mode_robdd__implications__Imps0_11));
#line 331 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_38_38, 3) = ((MR_Box) (mode_robdd__implications__RevImps0_12));
#line 331 "mode_robdd.implications.m"
        }
#line 317 "mode_robdd.implications.m"
        {
#line 317 "mode_robdd.implications.m"
          mode_robdd__implications__conv1_V_29_29 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_56_56, mode_robdd__implications__TypeInfo_58_58, mode_robdd__implications__TypeInfo_66_66, (MR_Word) mode_robdd__implications__V_30_30, (MR_Word) mode_robdd__implications__Imps0_11, ((MR_Box) (mode_robdd__implications__V_38_38)));
        }
#line 317 "mode_robdd.implications.m"
        mode_robdd__implications__V_29_29 = ((MR_Tuple) mode_robdd__implications__conv1_V_29_29);
#line 317 "mode_robdd.implications.m"
        *mode_robdd__implications__Changed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, (MR_Integer) 0)));
#line 317 "mode_robdd.implications.m"
        *mode_robdd__implications__EQVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, (MR_Integer) 1)));
#line 317 "mode_robdd.implications.m"
        mode_robdd__implications__Imps_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, (MR_Integer) 2)));
#line 317 "mode_robdd.implications.m"
        mode_robdd__implications__RevImps_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, (MR_Integer) 3)));
#line 332 "mode_robdd.implications.m"
        {
#line 332 "mode_robdd.implications.m"
          MR_Word base;
#line 332 "mode_robdd.implications.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 332 "mode_robdd.implications.m"
          *mode_robdd__implications__ImpVars_10 = base;
#line 332 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__implications__Imps_15));
#line 332 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mode_robdd__implications__RevImps_16));
#line 332 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mode_robdd__implications__DisImps_13));
#line 332 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mode_robdd__implications__RevDisImps_14));
#line 332 "mode_robdd.implications.m"
        }
#line 331 "mode_robdd.implications.m"
      }
#line 309 "mode_robdd.implications.m"
  }
#line 55 "mode_robdd.implications.m"
}

#line 52 "mode_robdd.implications.m"
MR_bool MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_4_p_0(
#line 52 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_17,
#line 52 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__EQVars_5,
#line 52 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__Changed_6,
#line 52 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars0_7,
#line 52 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__ImpVars_8)
#line 52 "mode_robdd.implications.m"
{
#line 269 "mode_robdd.implications.m"
  {
#line 269 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 269 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Imps0_9;
#line 269 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RevImps0_10;
#line 269 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__DisImps_11;
#line 269 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RevDisImps_12;
#line 269 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Changed0_13;
#line 269 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Imps_14;
#line 269 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Changed1_15;
#line 269 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RevImps_16;

#line 270 "mode_robdd.implications.m"
    mode_robdd__implications__Imps0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_7, (MR_Integer) 0)));
#line 270 "mode_robdd.implications.m"
    mode_robdd__implications__RevImps0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_7, (MR_Integer) 1)));
#line 270 "mode_robdd.implications.m"
    mode_robdd__implications__DisImps_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_7, (MR_Integer) 2)));
#line 270 "mode_robdd.implications.m"
    mode_robdd__implications__RevDisImps_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_7, (MR_Integer) 3)));
#line 272 "mode_robdd.implications.m"
    {
#line 272 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0(mode_robdd__implications__TypeInfo_for_T_17, mode_robdd__implications__EQVars_5, mode_robdd__implications__DisImps_11, mode_robdd__implications__RevDisImps_12);
    }
#line 269 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 269 "mode_robdd.implications.m"
      {
#line 275 "mode_robdd.implications.m"
        {
#line 275 "mode_robdd.implications.m"
          mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0(mode_robdd__implications__TypeInfo_for_T_17, mode_robdd__implications__EQVars_5, &mode_robdd__implications__Changed0_13, mode_robdd__implications__Imps0_9, &mode_robdd__implications__Imps_14);
        }
#line 277 "mode_robdd.implications.m"
        {
#line 277 "mode_robdd.implications.m"
          mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0(mode_robdd__implications__TypeInfo_for_T_17, mode_robdd__implications__EQVars_5, &mode_robdd__implications__Changed1_15, mode_robdd__implications__RevImps0_10, &mode_robdd__implications__RevImps_16);
        }
#line 280 "mode_robdd.implications.m"
        {
#line 280 "mode_robdd.implications.m"
          MR_Word base;
#line 280 "mode_robdd.implications.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 280 "mode_robdd.implications.m"
          *mode_robdd__implications__ImpVars_8 = base;
#line 280 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__implications__Imps_14));
#line 280 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mode_robdd__implications__RevImps_16));
#line 280 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mode_robdd__implications__DisImps_11));
#line 280 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mode_robdd__implications__RevDisImps_12));
#line 280 "mode_robdd.implications.m"
        }
#line 281 "mode_robdd.implications.m"
        {
#line 281 "mode_robdd.implications.m"
          *mode_robdd__implications__Changed_6 = mercury__bool__or_2_f_0(mode_robdd__implications__Changed0_13, mode_robdd__implications__Changed1_15);
        }
#line 281 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = MR_TRUE;
#line 269 "mode_robdd.implications.m"
      }
#line 269 "mode_robdd.implications.m"
    return mode_robdd__implications__succeeded;
#line 269 "mode_robdd.implications.m"
  }
#line 52 "mode_robdd.implications.m"
}

#line 48 "mode_robdd.implications.m"
void MR_CALL 
mode_robdd__implications__normalise_true_false_implication_vars_7_p_0(
#line 48 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_59,
#line 48 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__Changed_8,
#line 48 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TrueVars0_9,
#line 48 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__TrueVars_10,
#line 48 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__FalseVars0_11,
#line 48 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__FalseVars_12,
#line 48 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars0_13,
#line 48 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__ImpVars_14)
#line 48 "mode_robdd.implications.m"
{
#line 159 "mode_robdd.implications.m"
  {
#line 159 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 152 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_60_60;
#line 152 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_61_61;

#line 9033 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_60_60 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 9035 "mode_robdd.implications.c"
    {
#line 9037 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9039 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_61_61, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_60_60));
#line 9041 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_61_61, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_59));
#line 9043 "mode_robdd.implications.c"
    }
#line 152 "mode_robdd.implications.m"
    {
#line 152 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__implications__TypeInfo_61_61, (MR_Word) mode_robdd__implications__TrueVars0_9);
    }
#line 152 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 153 "mode_robdd.implications.m"
      {
#line 153 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__implications__TypeInfo_61_61, (MR_Word) mode_robdd__implications__FalseVars0_11);
      }
#line 159 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 155 "mode_robdd.implications.m"
      {
#line 155 "mode_robdd.implications.m"
        *mode_robdd__implications__TrueVars_10 = mode_robdd__implications__TrueVars0_9;
#line 156 "mode_robdd.implications.m"
        *mode_robdd__implications__FalseVars_12 = mode_robdd__implications__FalseVars0_11;
#line 157 "mode_robdd.implications.m"
        *mode_robdd__implications__ImpVars_14 = mode_robdd__implications__ImpVars0_13;
#line 158 "mode_robdd.implications.m"
        *mode_robdd__implications__Changed_8 = (MR_Integer) 0;
#line 155 "mode_robdd.implications.m"
      }
#line 159 "mode_robdd.implications.m"
    else
#line 160 "mode_robdd.implications.m"
      {
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Imps0_15;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__RevImps0_16;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__DisImps0_17;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__RevDisImps0_18;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Changed0_19;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TrueVars1_20;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__FalseVars1_21;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Imps_22;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Changed1_23;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__FalseVars2_24;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TrueVars2_25;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__RevImps_26;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Changed2_27;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__FalseVars3_28;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TrueVars3_29;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__DisImps_30;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Changed3_31;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TrueVars4_32;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__FalseVars4_33;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__RevDisImps_34;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Changed4_35;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__FalseVars5_36;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Changed5_37;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TrueVars5_38;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Changed6_39;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__FalseVars6_40;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Changed7_41;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TrueVars6_42;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__ImpVars6_43;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_45_45;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_46_46;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_47_47;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_48_48;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_49_49;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_50_50;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_51_51;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_52_52;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_53_53;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_54_54;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_55_55;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_56_56;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_57_57;
#line 160 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_58_58;

#line 160 "mode_robdd.implications.m"
        mode_robdd__implications__Imps0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_13, (MR_Integer) 0)));
#line 160 "mode_robdd.implications.m"
        mode_robdd__implications__RevImps0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_13, (MR_Integer) 1)));
#line 160 "mode_robdd.implications.m"
        mode_robdd__implications__DisImps0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_13, (MR_Integer) 2)));
#line 160 "mode_robdd.implications.m"
        mode_robdd__implications__RevDisImps0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_13, (MR_Integer) 3)));
#line 161 "mode_robdd.implications.m"
        mode_robdd__implications__V_45_45 = (MR_Integer) 0;
#line 161 "mode_robdd.implications.m"
        {
#line 161 "mode_robdd.implications.m"
          mode_robdd__implications__normalise_true_false_imp_map_8_p_0(mode_robdd__implications__TypeInfo_for_T_59, mode_robdd__implications__V_45_45, &mode_robdd__implications__Changed0_19, mode_robdd__implications__TrueVars0_9, &mode_robdd__implications__TrueVars1_20, mode_robdd__implications__FalseVars0_11, &mode_robdd__implications__FalseVars1_21, mode_robdd__implications__Imps0_15, &mode_robdd__implications__Imps_22);
        }
#line 163 "mode_robdd.implications.m"
        mode_robdd__implications__V_46_46 = (MR_Integer) 0;
#line 163 "mode_robdd.implications.m"
        {
#line 163 "mode_robdd.implications.m"
          mode_robdd__implications__normalise_true_false_imp_map_8_p_0(mode_robdd__implications__TypeInfo_for_T_59, mode_robdd__implications__V_46_46, &mode_robdd__implications__Changed1_23, mode_robdd__implications__FalseVars1_21, &mode_robdd__implications__FalseVars2_24, mode_robdd__implications__TrueVars1_20, &mode_robdd__implications__TrueVars2_25, mode_robdd__implications__RevImps0_16, &mode_robdd__implications__RevImps_26);
        }
#line 165 "mode_robdd.implications.m"
        mode_robdd__implications__V_47_47 = (MR_Integer) 1;
#line 165 "mode_robdd.implications.m"
        {
#line 165 "mode_robdd.implications.m"
          mode_robdd__implications__normalise_true_false_imp_map_8_p_0(mode_robdd__implications__TypeInfo_for_T_59, mode_robdd__implications__V_47_47, &mode_robdd__implications__Changed2_27, mode_robdd__implications__FalseVars2_24, &mode_robdd__implications__FalseVars3_28, mode_robdd__implications__TrueVars2_25, &mode_robdd__implications__TrueVars3_29, mode_robdd__implications__DisImps0_17, &mode_robdd__implications__DisImps_30);
        }
#line 167 "mode_robdd.implications.m"
        mode_robdd__implications__V_48_48 = (MR_Integer) 1;
#line 167 "mode_robdd.implications.m"
        {
#line 167 "mode_robdd.implications.m"
          mode_robdd__implications__normalise_true_false_imp_map_8_p_0(mode_robdd__implications__TypeInfo_for_T_59, mode_robdd__implications__V_48_48, &mode_robdd__implications__Changed3_31, mode_robdd__implications__TrueVars3_29, &mode_robdd__implications__TrueVars4_32, mode_robdd__implications__FalseVars3_28, &mode_robdd__implications__FalseVars4_33, mode_robdd__implications__RevDisImps0_18, &mode_robdd__implications__RevDisImps_34);
        }
#line 170 "mode_robdd.implications.m"
        mode_robdd__implications__V_49_49 = (MR_Integer) 0;
#line 170 "mode_robdd.implications.m"
        {
#line 170 "mode_robdd.implications.m"
          mode_robdd__implications__normalise_pairs_6_p_0(mode_robdd__implications__TypeInfo_for_T_59, mode_robdd__implications__V_49_49, mode_robdd__implications__Imps_22, mode_robdd__implications__DisImps_30, &mode_robdd__implications__Changed4_35, mode_robdd__implications__FalseVars4_33, &mode_robdd__implications__FalseVars5_36);
        }
#line 172 "mode_robdd.implications.m"
        mode_robdd__implications__V_50_50 = (MR_Integer) 0;
#line 172 "mode_robdd.implications.m"
        {
#line 172 "mode_robdd.implications.m"
          mode_robdd__implications__normalise_pairs_6_p_0(mode_robdd__implications__TypeInfo_for_T_59, mode_robdd__implications__V_50_50, mode_robdd__implications__RevImps_26, mode_robdd__implications__RevDisImps_34, &mode_robdd__implications__Changed5_37, mode_robdd__implications__TrueVars4_32, &mode_robdd__implications__TrueVars5_38);
        }
#line 174 "mode_robdd.implications.m"
        mode_robdd__implications__V_51_51 = (MR_Integer) 1;
#line 174 "mode_robdd.implications.m"
        {
#line 174 "mode_robdd.implications.m"
          mode_robdd__implications__normalise_pairs_6_p_0(mode_robdd__implications__TypeInfo_for_T_59, mode_robdd__implications__V_51_51, mode_robdd__implications__RevImps_26, mode_robdd__implications__DisImps_30, &mode_robdd__implications__Changed6_39, mode_robdd__implications__FalseVars5_36, &mode_robdd__implications__FalseVars6_40);
        }
#line 176 "mode_robdd.implications.m"
        mode_robdd__implications__V_52_52 = (MR_Integer) 1;
#line 176 "mode_robdd.implications.m"
        {
#line 176 "mode_robdd.implications.m"
          mode_robdd__implications__normalise_pairs_6_p_0(mode_robdd__implications__TypeInfo_for_T_59, mode_robdd__implications__V_52_52, mode_robdd__implications__Imps_22, mode_robdd__implications__RevDisImps_34, &mode_robdd__implications__Changed7_41, mode_robdd__implications__TrueVars5_38, &mode_robdd__implications__TrueVars6_42);
        }
#line 179 "mode_robdd.implications.m"
        {
#line 179 "mode_robdd.implications.m"
          mode_robdd__implications__ImpVars6_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 179 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars6_43, 0) = ((MR_Box) (mode_robdd__implications__Imps_22));
#line 179 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars6_43, 1) = ((MR_Box) (mode_robdd__implications__RevImps_26));
#line 179 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars6_43, 2) = ((MR_Box) (mode_robdd__implications__DisImps_30));
#line 179 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars6_43, 3) = ((MR_Box) (mode_robdd__implications__RevDisImps_34));
#line 179 "mode_robdd.implications.m"
        }
#line 181 "mode_robdd.implications.m"
        {
#line 181 "mode_robdd.implications.m"
          mode_robdd__implications__V_58_58 = mercury__bool__or_2_f_0(mode_robdd__implications__Changed6_39, mode_robdd__implications__Changed7_41);
        }
#line 181 "mode_robdd.implications.m"
        {
#line 181 "mode_robdd.implications.m"
          mode_robdd__implications__V_57_57 = mercury__bool__or_2_f_0(mode_robdd__implications__Changed5_37, mode_robdd__implications__V_58_58);
        }
#line 181 "mode_robdd.implications.m"
        {
#line 181 "mode_robdd.implications.m"
          mode_robdd__implications__V_56_56 = mercury__bool__or_2_f_0(mode_robdd__implications__Changed4_35, mode_robdd__implications__V_57_57);
        }
#line 180 "mode_robdd.implications.m"
        {
#line 180 "mode_robdd.implications.m"
          mode_robdd__implications__V_55_55 = mercury__bool__or_2_f_0(mode_robdd__implications__Changed3_31, mode_robdd__implications__V_56_56);
        }
#line 180 "mode_robdd.implications.m"
        {
#line 180 "mode_robdd.implications.m"
          mode_robdd__implications__V_54_54 = mercury__bool__or_2_f_0(mode_robdd__implications__Changed2_27, mode_robdd__implications__V_55_55);
        }
#line 180 "mode_robdd.implications.m"
        {
#line 180 "mode_robdd.implications.m"
          mode_robdd__implications__V_53_53 = mercury__bool__or_2_f_0(mode_robdd__implications__Changed1_23, mode_robdd__implications__V_54_54);
        }
#line 180 "mode_robdd.implications.m"
        {
#line 180 "mode_robdd.implications.m"
          *mode_robdd__implications__Changed_8 = mercury__bool__or_2_f_0(mode_robdd__implications__Changed0_19, mode_robdd__implications__V_53_53);
        }
#line 183 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = (*mode_robdd__implications__Changed_8 == (MR_Integer) 1);
#line 186 "mode_robdd.implications.m"
        if (mode_robdd__implications__succeeded)
#line 184 "mode_robdd.implications.m"
          {
#line 184 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_44_44;

#line 184 "mode_robdd.implications.m"
            {
#line 184 "mode_robdd.implications.m"
              mode_robdd__implications__normalise_true_false_implication_vars_7_p_0(mode_robdd__implications__TypeInfo_for_T_59, &mode_robdd__implications__V_44_44, mode_robdd__implications__TrueVars6_42, mode_robdd__implications__TrueVars_10, mode_robdd__implications__FalseVars6_40, mode_robdd__implications__FalseVars_12, mode_robdd__implications__ImpVars6_43, mode_robdd__implications__ImpVars_14);
            }
#line 184 "mode_robdd.implications.m"
          }
#line 186 "mode_robdd.implications.m"
        else
#line 187 "mode_robdd.implications.m"
          {
#line 187 "mode_robdd.implications.m"
            *mode_robdd__implications__TrueVars_10 = mode_robdd__implications__TrueVars6_42;
#line 188 "mode_robdd.implications.m"
            *mode_robdd__implications__FalseVars_12 = mode_robdd__implications__FalseVars6_40;
#line 189 "mode_robdd.implications.m"
            *mode_robdd__implications__ImpVars_14 = mode_robdd__implications__ImpVars6_43;
#line 187 "mode_robdd.implications.m"
          }
#line 160 "mode_robdd.implications.m"
      }
#line 159 "mode_robdd.implications.m"
  }
#line 48 "mode_robdd.implications.m"
}

#line 46 "mode_robdd.implications.m"
MR_Word MR_CALL 
mode_robdd__implications__either_3_f_0(
#line 46 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_11,
#line 46 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__A_5,
#line 46 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__B_6,
#line 46 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_7)
#line 46 "mode_robdd.implications.m"
{
#line 146 "mode_robdd.implications.m"
  {
#line 146 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 146 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__4_4;
#line 146 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__V_8_8;
#line 146 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_9_9;
#line 146 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_10_10;

#line 147 "mode_robdd.implications.m"
    {
#line 147 "mode_robdd.implications.m"
      mode_robdd__implications__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 147 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 0) = ((MR_Box) (mode_robdd__implications__A_5));
#line 147 "mode_robdd.implications.m"
    }
#line 147 "mode_robdd.implications.m"
    {
#line 147 "mode_robdd.implications.m"
      mode_robdd__implications__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 147 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 0) = ((MR_Box) (mode_robdd__implications__B_6));
#line 147 "mode_robdd.implications.m"
    }
#line 147 "mode_robdd.implications.m"
    {
#line 147 "mode_robdd.implications.m"
      mode_robdd__implications__V_8_8 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 147 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 0) = ((MR_Box) (mode_robdd__implications__V_9_9));
#line 147 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 1) = ((MR_Box) (mode_robdd__implications__V_10_10));
#line 147 "mode_robdd.implications.m"
    }
#line 146 "mode_robdd.implications.m"
    {
#line 146 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__4_4 = mode_robdd__implications__add_clause_2_f_0(mode_robdd__implications__TypeInfo_for_T_11, mode_robdd__implications__V_8_8, mode_robdd__implications__ImpVars_7);
    }
#line 146 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__4_4;
#line 146 "mode_robdd.implications.m"
  }
#line 46 "mode_robdd.implications.m"
}

#line 44 "mode_robdd.implications.m"
MR_Word MR_CALL 
mode_robdd__implications__not_both_3_f_0(
#line 44 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_11,
#line 44 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__A_5,
#line 44 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__B_6,
#line 44 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_7)
#line 44 "mode_robdd.implications.m"
{
#line 143 "mode_robdd.implications.m"
  {
#line 143 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 143 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__4_4;
#line 143 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__V_8_8;
#line 143 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_9_9;
#line 143 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_10_10;

#line 144 "mode_robdd.implications.m"
    {
#line 144 "mode_robdd.implications.m"
      mode_robdd__implications__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 144 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(1), mode_robdd__implications__V_9_9, 0) = ((MR_Box) (mode_robdd__implications__A_5));
#line 144 "mode_robdd.implications.m"
    }
#line 144 "mode_robdd.implications.m"
    {
#line 144 "mode_robdd.implications.m"
      mode_robdd__implications__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 144 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(1), mode_robdd__implications__V_10_10, 0) = ((MR_Box) (mode_robdd__implications__B_6));
#line 144 "mode_robdd.implications.m"
    }
#line 144 "mode_robdd.implications.m"
    {
#line 144 "mode_robdd.implications.m"
      mode_robdd__implications__V_8_8 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 144 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 0) = ((MR_Box) (mode_robdd__implications__V_9_9));
#line 144 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 1) = ((MR_Box) (mode_robdd__implications__V_10_10));
#line 144 "mode_robdd.implications.m"
    }
#line 143 "mode_robdd.implications.m"
    {
#line 143 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__4_4 = mode_robdd__implications__add_clause_2_f_0(mode_robdd__implications__TypeInfo_for_T_11, mode_robdd__implications__V_8_8, mode_robdd__implications__ImpVars_7);
    }
#line 143 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__4_4;
#line 143 "mode_robdd.implications.m"
  }
#line 44 "mode_robdd.implications.m"
}

#line 138 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__at_most_one_of_2_f_0_1(
#line 138 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 138 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 138 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2)
#line 138 "mode_robdd.implications.m"
{
#line 138 "mode_robdd.implications.m"
  {
#line 138 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_3;
#line 138 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 138 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv2_HeadVar__4_4;

#line 138 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 138 "mode_robdd.implications.m"
    {
#line 138 "mode_robdd.implications.m"
      mode_robdd__implications__conv2_HeadVar__4_4 = mode_robdd__implications__not_both_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2));
    }
#line 138 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_3 = ((MR_Box) (mode_robdd__implications__conv2_HeadVar__4_4));
#line 138 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_3;
#line 138 "mode_robdd.implications.m"
  }
#line 138 "mode_robdd.implications.m"
}

#line 42 "mode_robdd.implications.m"
MR_Word MR_CALL 
mode_robdd__implications__at_most_one_of_2_f_0(
#line 42 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_10,
#line 42 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Vars0_4,
#line 42 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_5)
#line 42 "mode_robdd.implications.m"
{
#line 136 "mode_robdd.implications.m"
  {
#line 136 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 136 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 136 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Var_6;
#line 136 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Vars_7;
#line 137 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_11_11;
#line 137 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_12_12;
#line 137 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_13;
#line 137 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeClassInfo_for_enum_14;
#line 137 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv1_Var_6;
#line 137 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_Vars_7;

#line 9508 "mode_robdd.implications.c"
    mode_robdd__implications__BaseTypeClassInfo_for_enum_13 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 9510 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_11_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 9512 "mode_robdd.implications.c"
    {
#line 9514 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9516 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_12_12, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_11_11));
#line 9518 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_12_12, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_10));
#line 9520 "mode_robdd.implications.c"
    }
#line 9522 "mode_robdd.implications.c"
    {
#line 9524 "mode_robdd.implications.c"
      mode_robdd__implications__TypeClassInfo_for_enum_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9526 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_14, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_13));
#line 9528 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_14, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_10));
#line 9530 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_14, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_12_12));
#line 9532 "mode_robdd.implications.c"
    }
#line 137 "mode_robdd.implications.m"
    {
#line 137 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__implications__TypeClassInfo_for_enum_14, &mode_robdd__implications__conv1_Var_6, (MR_Word) mode_robdd__implications__Vars0_4, &mode_robdd__implications__conv0_Vars_7);
    }
#line 137 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 137 "mode_robdd.implications.m"
      {
#line 137 "mode_robdd.implications.m"
        mode_robdd__implications__Var_6 = ((MR_Word) mode_robdd__implications__conv1_Var_6);
#line 137 "mode_robdd.implications.m"
        mode_robdd__implications__Vars_7 = (MR_Word) mode_robdd__implications__conv0_Vars_7;
#line 137 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = MR_TRUE;
#line 137 "mode_robdd.implications.m"
      }
#line 136 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 138 "mode_robdd.implications.m"
      {
#line 138 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_18_18;
#line 138 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_19_19;
#line 138 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_20;
#line 138 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_21;
#line 138 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_22_22;
#line 138 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_23_23;
#line 138 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_8_8;
#line 138 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_9_9;
#line 136 "mode_robdd.implications.m"
        MR_Box mode_robdd__implications__conv3_V_9_9;

#line 138 "mode_robdd.implications.m"
        {
#line 138 "mode_robdd.implications.m"
          mode_robdd__implications__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 138 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[0]));
#line 138 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 1) = ((MR_Box) (mode_robdd__implications__at_most_one_of_2_f_0_1));
#line 138 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 138 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_10));
#line 138 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 4) = ((MR_Box) (mode_robdd__implications__Var_6));
#line 138 "mode_robdd.implications.m"
        }
#line 9590 "mode_robdd.implications.c"
        mode_robdd__implications__BaseTypeClassInfo_for_enum_20 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 9592 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 9594 "mode_robdd.implications.c"
        {
#line 9596 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9598 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_19_19, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_18_18));
#line 9600 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_19_19, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_10));
#line 9602 "mode_robdd.implications.c"
        }
#line 9604 "mode_robdd.implications.c"
        {
#line 9606 "mode_robdd.implications.c"
          mode_robdd__implications__TypeClassInfo_for_enum_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9608 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_21, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_20));
#line 9610 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_21, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_10));
#line 9612 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_21, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_19_19));
#line 9614 "mode_robdd.implications.c"
        }
#line 9616 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_22_22 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_imp_vars_1;
#line 9618 "mode_robdd.implications.c"
        {
#line 9620 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9622 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_22_22));
#line 9624 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_10));
#line 9626 "mode_robdd.implications.c"
        }
#line 136 "mode_robdd.implications.m"
        {
#line 136 "mode_robdd.implications.m"
          mode_robdd__implications__conv3_V_9_9 = mercury__sparse_bitset__foldl_3_f_0(mode_robdd__implications__TypeInfo_23_23, mode_robdd__implications__TypeClassInfo_for_enum_21, (MR_Word) mode_robdd__implications__V_8_8, (MR_Word) mode_robdd__implications__Vars_7, ((MR_Box) (mode_robdd__implications__ImpVars_5)));
        }
#line 136 "mode_robdd.implications.m"
        mode_robdd__implications__V_9_9 = ((MR_Word) mode_robdd__implications__conv3_V_9_9);
#line 136 "mode_robdd.implications.m"
        {
#line 136 "mode_robdd.implications.m"
          mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__at_most_one_of_2_f_0(mode_robdd__implications__TypeInfo_for_T_10, mode_robdd__implications__Vars_7, mode_robdd__implications__V_9_9);
        }
#line 138 "mode_robdd.implications.m"
      }
#line 136 "mode_robdd.implications.m"
    else
#line 140 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__ImpVars_5;
#line 136 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 136 "mode_robdd.implications.m"
  }
#line 42 "mode_robdd.implications.m"
}

#line 40 "mode_robdd.implications.m"
MR_Word MR_CALL 
mode_robdd__implications__imp_vars_3_f_0(
#line 40 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_11,
#line 40 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__A_5,
#line 40 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__B_6,
#line 40 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_7)
#line 40 "mode_robdd.implications.m"
{
#line 133 "mode_robdd.implications.m"
  {
#line 133 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 133 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__4_4;
#line 133 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__V_8_8;
#line 133 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_9_9;
#line 133 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_10_10;

#line 134 "mode_robdd.implications.m"
    {
#line 134 "mode_robdd.implications.m"
      mode_robdd__implications__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 134 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(1), mode_robdd__implications__V_9_9, 0) = ((MR_Box) (mode_robdd__implications__A_5));
#line 134 "mode_robdd.implications.m"
    }
#line 134 "mode_robdd.implications.m"
    {
#line 134 "mode_robdd.implications.m"
      mode_robdd__implications__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 134 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 0) = ((MR_Box) (mode_robdd__implications__B_6));
#line 134 "mode_robdd.implications.m"
    }
#line 134 "mode_robdd.implications.m"
    {
#line 134 "mode_robdd.implications.m"
      mode_robdd__implications__V_8_8 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 134 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 0) = ((MR_Box) (mode_robdd__implications__V_9_9));
#line 134 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 1) = ((MR_Box) (mode_robdd__implications__V_10_10));
#line 134 "mode_robdd.implications.m"
    }
#line 133 "mode_robdd.implications.m"
    {
#line 133 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__4_4 = mode_robdd__implications__add_clause_2_f_0(mode_robdd__implications__TypeInfo_for_T_11, mode_robdd__implications__V_8_8, mode_robdd__implications__ImpVars_7);
    }
#line 133 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__4_4;
#line 133 "mode_robdd.implications.m"
  }
#line 40 "mode_robdd.implications.m"
}

#line 38 "mode_robdd.implications.m"
MR_Word MR_CALL 
mode_robdd__implications__neq_vars_3_f_0(
#line 38 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_15,
#line 38 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__A_5,
#line 38 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__B_6,
#line 38 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_7)
#line 38 "mode_robdd.implications.m"
{
#line 130 "mode_robdd.implications.m"
  {
#line 130 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 130 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__4_4;
#line 130 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__V_8_8;
#line 130 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_9_9;
#line 130 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__V_10_10;
#line 130 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_11_11;
#line 130 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_12_12;
#line 130 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_13_13;
#line 130 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_14_14;

#line 131 "mode_robdd.implications.m"
    {
#line 131 "mode_robdd.implications.m"
      mode_robdd__implications__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 131 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(1), mode_robdd__implications__V_13_13, 0) = ((MR_Box) (mode_robdd__implications__A_5));
#line 131 "mode_robdd.implications.m"
    }
#line 131 "mode_robdd.implications.m"
    {
#line 131 "mode_robdd.implications.m"
      mode_robdd__implications__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 131 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(1), mode_robdd__implications__V_14_14, 0) = ((MR_Box) (mode_robdd__implications__B_6));
#line 131 "mode_robdd.implications.m"
    }
#line 131 "mode_robdd.implications.m"
    {
#line 131 "mode_robdd.implications.m"
      mode_robdd__implications__V_8_8 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 131 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 0) = ((MR_Box) (mode_robdd__implications__V_13_13));
#line 131 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 1) = ((MR_Box) (mode_robdd__implications__V_14_14));
#line 131 "mode_robdd.implications.m"
    }
#line 130 "mode_robdd.implications.m"
    {
#line 130 "mode_robdd.implications.m"
      mode_robdd__implications__V_9_9 = mode_robdd__implications__add_clause_2_f_0(mode_robdd__implications__TypeInfo_for_T_15, mode_robdd__implications__V_8_8, mode_robdd__implications__ImpVars_7);
    }
#line 131 "mode_robdd.implications.m"
    {
#line 131 "mode_robdd.implications.m"
      mode_robdd__implications__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 131 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_11_11, 0) = ((MR_Box) (mode_robdd__implications__A_5));
#line 131 "mode_robdd.implications.m"
    }
#line 131 "mode_robdd.implications.m"
    {
#line 131 "mode_robdd.implications.m"
      mode_robdd__implications__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 131 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_12_12, 0) = ((MR_Box) (mode_robdd__implications__B_6));
#line 131 "mode_robdd.implications.m"
    }
#line 131 "mode_robdd.implications.m"
    {
#line 131 "mode_robdd.implications.m"
      mode_robdd__implications__V_10_10 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 131 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 0) = ((MR_Box) (mode_robdd__implications__V_11_11));
#line 131 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 1) = ((MR_Box) (mode_robdd__implications__V_12_12));
#line 131 "mode_robdd.implications.m"
    }
#line 130 "mode_robdd.implications.m"
    {
#line 130 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__4_4 = mode_robdd__implications__add_clause_2_f_0(mode_robdd__implications__TypeInfo_for_T_15, mode_robdd__implications__V_10_10, mode_robdd__implications__V_9_9);
    }
#line 130 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__4_4;
#line 130 "mode_robdd.implications.m"
  }
#line 38 "mode_robdd.implications.m"
}

#line 116 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__filter_2_f_0_1(
#line 116 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 116 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1)
#line 116 "mode_robdd.implications.m"
{
#line 116 "mode_robdd.implications.m"
  {
#line 116 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_2;
#line 116 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 116 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__3_3;

#line 116 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 116 "mode_robdd.implications.m"
    {
#line 116 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__3_3 = mode_robdd__implications__filter_imp_map_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 116 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__3_3));
#line 116 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 116 "mode_robdd.implications.m"
  }
#line 116 "mode_robdd.implications.m"
}

#line 36 "mode_robdd.implications.m"
MR_Word MR_CALL 
mode_robdd__implications__filter_2_f_0(
#line 36 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_7,
#line 36 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__P_4,
#line 36 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_5)
#line 36 "mode_robdd.implications.m"
{
#line 116 "mode_robdd.implications.m"
  {
#line 116 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 116 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 116 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_6_6;

#line 116 "mode_robdd.implications.m"
    {
#line 116 "mode_robdd.implications.m"
      mode_robdd__implications__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 116 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[2]));
#line 116 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 1) = ((MR_Box) (mode_robdd__implications__filter_2_f_0_1));
#line 116 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 116 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_7));
#line 116 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 4) = ((MR_Box) (mode_robdd__implications__P_4));
#line 116 "mode_robdd.implications.m"
    }
#line 116 "mode_robdd.implications.m"
    {
#line 116 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__apply_to_imp_maps_2_f_0(mode_robdd__implications__TypeInfo_for_T_7, mode_robdd__implications__V_6_6, mode_robdd__implications__ImpVars_5);
    }
#line 116 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 116 "mode_robdd.implications.m"
  }
#line 36 "mode_robdd.implications.m"
}

#line 100 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__restrict_threshold_2_f_0_1(
#line 100 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 100 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1)
#line 100 "mode_robdd.implications.m"
{
#line 100 "mode_robdd.implications.m"
  {
#line 100 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_2;
#line 100 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 100 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_LambdaHeadVar__2_9;

#line 100 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 100 "mode_robdd.implications.m"
    {
#line 100 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_LambdaHeadVar__2_9 = mode_robdd__implications__IntroducedFrom__func__restrict_threshold__100__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 100 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv0_LambdaHeadVar__2_9));
#line 100 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 100 "mode_robdd.implications.m"
  }
#line 100 "mode_robdd.implications.m"
}

#line 33 "mode_robdd.implications.m"
MR_Word MR_CALL 
mode_robdd__implications__restrict_threshold_2_f_0(
#line 33 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_13,
#line 33 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Threshold_4,
#line 33 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_5)
#line 33 "mode_robdd.implications.m"
{
#line 99 "mode_robdd.implications.m"
  {
#line 99 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 99 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 99 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_7_7;

#line 100 "mode_robdd.implications.m"
    {
#line 100 "mode_robdd.implications.m"
      mode_robdd__implications__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 100 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[1]));
#line 100 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 1) = ((MR_Box) (mode_robdd__implications__restrict_threshold_2_f_0_1));
#line 100 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 100 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_13));
#line 100 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 4) = ((MR_Box) (mode_robdd__implications__Threshold_4));
#line 100 "mode_robdd.implications.m"
    }
#line 100 "mode_robdd.implications.m"
    {
#line 100 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__apply_to_imp_maps_2_f_0(mode_robdd__implications__TypeInfo_for_T_13, mode_robdd__implications__V_7_7, mode_robdd__implications__ImpVars_5);
    }
#line 99 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 99 "mode_robdd.implications.m"
  }
#line 33 "mode_robdd.implications.m"
}

#line 96 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__delete_2_f_0_1(
#line 96 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 96 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1)
#line 96 "mode_robdd.implications.m"
{
#line 96 "mode_robdd.implications.m"
  {
#line 96 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_2;
#line 96 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 96 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__3_3;

#line 96 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 96 "mode_robdd.implications.m"
    {
#line 96 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__3_3 = mode_robdd__implications__delete_var_from_imp_map_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 96 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__3_3));
#line 96 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 96 "mode_robdd.implications.m"
  }
#line 96 "mode_robdd.implications.m"
}

#line 31 "mode_robdd.implications.m"
MR_Word MR_CALL 
mode_robdd__implications__delete_2_f_0(
#line 31 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_7,
#line 31 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_4,
#line 31 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Var_5)
#line 31 "mode_robdd.implications.m"
{
#line 95 "mode_robdd.implications.m"
  {
#line 95 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 95 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 95 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_6_6;

#line 96 "mode_robdd.implications.m"
    {
#line 96 "mode_robdd.implications.m"
      mode_robdd__implications__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 96 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[1]));
#line 96 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 1) = ((MR_Box) (mode_robdd__implications__delete_2_f_0_1));
#line 96 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 96 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_7));
#line 96 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 4) = ((MR_Box) (mode_robdd__implications__Var_5));
#line 96 "mode_robdd.implications.m"
    }
#line 96 "mode_robdd.implications.m"
    {
#line 96 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__apply_to_imp_maps_2_f_0(mode_robdd__implications__TypeInfo_for_T_7, mode_robdd__implications__V_6_6, mode_robdd__implications__ImpVars_4);
    }
#line 95 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 95 "mode_robdd.implications.m"
  }
#line 31 "mode_robdd.implications.m"
}

#line 93 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__difference_2_f_0_1(
#line 93 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 93 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 93 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2)
#line 93 "mode_robdd.implications.m"
{
#line 93 "mode_robdd.implications.m"
  {
#line 93 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_3;
#line 93 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 93 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__3_3;

#line 93 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 93 "mode_robdd.implications.m"
    {
#line 93 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__3_3 = mode_robdd__implications__imp_map_difference_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2));
    }
#line 93 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_3 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__3_3));
#line 93 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_3;
#line 93 "mode_robdd.implications.m"
  }
#line 93 "mode_robdd.implications.m"
}

#line 29 "mode_robdd.implications.m"
MR_Word MR_CALL 
mode_robdd__implications__difference_2_f_0(
#line 29 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_7,
#line 29 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVarsA_4,
#line 29 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVarsB_5)
#line 29 "mode_robdd.implications.m"
{
#line 92 "mode_robdd.implications.m"
  {
#line 92 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 92 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 92 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_6_6;

#line 93 "mode_robdd.implications.m"
    {
#line 93 "mode_robdd.implications.m"
      mode_robdd__implications__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 93 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
#line 93 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 1) = ((MR_Box) (mode_robdd__implications__difference_2_f_0_1));
#line 93 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 93 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_7));
#line 93 "mode_robdd.implications.m"
    }
#line 93 "mode_robdd.implications.m"
    {
#line 93 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__apply_to_coresp_imp_maps_3_f_0(mode_robdd__implications__TypeInfo_for_T_7, mode_robdd__implications__V_6_6, mode_robdd__implications__ImpVarsA_4, mode_robdd__implications__ImpVarsB_5);
    }
#line 92 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 92 "mode_robdd.implications.m"
  }
#line 29 "mode_robdd.implications.m"
}

#line 90 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_plus_2_f_0_1(
#line 90 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 90 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 90 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2)
#line 90 "mode_robdd.implications.m"
{
#line 90 "mode_robdd.implications.m"
  {
#line 90 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_3;
#line 90 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 90 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__3_3;

#line 90 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 90 "mode_robdd.implications.m"
    {
#line 90 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__3_3 = mode_robdd__implications__intersect_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2));
    }
#line 90 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_3 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__3_3));
#line 90 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_3;
#line 90 "mode_robdd.implications.m"
  }
#line 90 "mode_robdd.implications.m"
}

#line 27 "mode_robdd.implications.m"
MR_Word MR_CALL 
mode_robdd__implications__f_plus_2_f_0(
#line 27 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_7,
#line 27 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVarsA_4,
#line 27 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVarsB_5)
#line 27 "mode_robdd.implications.m"
{
#line 89 "mode_robdd.implications.m"
  {
#line 89 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 89 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 89 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_6_6;

#line 90 "mode_robdd.implications.m"
    {
#line 90 "mode_robdd.implications.m"
      mode_robdd__implications__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 90 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
#line 90 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 1) = ((MR_Box) (mode_robdd__implications__f_plus_2_f_0_1));
#line 90 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 90 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_7));
#line 90 "mode_robdd.implications.m"
    }
#line 90 "mode_robdd.implications.m"
    {
#line 90 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__apply_to_coresp_imp_maps_3_f_0(mode_robdd__implications__TypeInfo_for_T_7, mode_robdd__implications__V_6_6, mode_robdd__implications__ImpVarsA_4, mode_robdd__implications__ImpVarsB_5);
    }
#line 89 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 89 "mode_robdd.implications.m"
  }
#line 27 "mode_robdd.implications.m"
}

#line 87 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_8(
#line 87 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 87 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1)
#line 87 "mode_robdd.implications.m"
{
#line 87 "mode_robdd.implications.m"
  {
#line 87 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_2;
#line 87 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 87 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv7_HeadVar__2_2;

#line 87 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 87 "mode_robdd.implications.m"
    {
#line 87 "mode_robdd.implications.m"
      mode_robdd__implications__conv7_HeadVar__2_2 = mode_robdd__implications__mkpos_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 87 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv7_HeadVar__2_2));
#line 87 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 87 "mode_robdd.implications.m"
  }
#line 87 "mode_robdd.implications.m"
}

#line 87 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_7(
#line 87 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 87 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1)
#line 87 "mode_robdd.implications.m"
{
#line 87 "mode_robdd.implications.m"
  {
#line 87 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_2;
#line 87 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 87 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv6_HeadVar__2_2;

#line 87 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 87 "mode_robdd.implications.m"
    {
#line 87 "mode_robdd.implications.m"
      mode_robdd__implications__conv6_HeadVar__2_2 = mode_robdd__implications__mkpos_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 87 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv6_HeadVar__2_2));
#line 87 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 87 "mode_robdd.implications.m"
  }
#line 87 "mode_robdd.implications.m"
}

#line 86 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_6(
#line 86 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 86 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1)
#line 86 "mode_robdd.implications.m"
{
#line 86 "mode_robdd.implications.m"
  {
#line 86 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_2;
#line 86 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 86 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv5_HeadVar__2_2;

#line 86 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 86 "mode_robdd.implications.m"
    {
#line 86 "mode_robdd.implications.m"
      mode_robdd__implications__conv5_HeadVar__2_2 = mode_robdd__implications__mkneg_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 86 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv5_HeadVar__2_2));
#line 86 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 86 "mode_robdd.implications.m"
  }
#line 86 "mode_robdd.implications.m"
}

#line 86 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_5(
#line 86 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 86 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1)
#line 86 "mode_robdd.implications.m"
{
#line 86 "mode_robdd.implications.m"
  {
#line 86 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_2;
#line 86 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 86 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv4_HeadVar__2_2;

#line 86 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 86 "mode_robdd.implications.m"
    {
#line 86 "mode_robdd.implications.m"
      mode_robdd__implications__conv4_HeadVar__2_2 = mode_robdd__implications__mkneg_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 86 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv4_HeadVar__2_2));
#line 86 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 86 "mode_robdd.implications.m"
  }
#line 86 "mode_robdd.implications.m"
}

#line 85 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_4(
#line 85 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 85 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1)
#line 85 "mode_robdd.implications.m"
{
#line 85 "mode_robdd.implications.m"
  {
#line 85 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_2;
#line 85 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 85 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv3_HeadVar__2_2;

#line 85 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 85 "mode_robdd.implications.m"
    {
#line 85 "mode_robdd.implications.m"
      mode_robdd__implications__conv3_HeadVar__2_2 = mode_robdd__implications__mkneg_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 85 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv3_HeadVar__2_2));
#line 85 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 85 "mode_robdd.implications.m"
  }
#line 85 "mode_robdd.implications.m"
}

#line 85 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_3(
#line 85 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 85 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1)
#line 85 "mode_robdd.implications.m"
{
#line 85 "mode_robdd.implications.m"
  {
#line 85 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_2;
#line 85 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 85 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv2_HeadVar__2_2;

#line 85 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 85 "mode_robdd.implications.m"
    {
#line 85 "mode_robdd.implications.m"
      mode_robdd__implications__conv2_HeadVar__2_2 = mode_robdd__implications__mkpos_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 85 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv2_HeadVar__2_2));
#line 85 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 85 "mode_robdd.implications.m"
  }
#line 85 "mode_robdd.implications.m"
}

#line 84 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_2(
#line 84 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 84 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1)
#line 84 "mode_robdd.implications.m"
{
#line 84 "mode_robdd.implications.m"
  {
#line 84 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_2;
#line 84 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 84 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv1_HeadVar__2_2;

#line 84 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 84 "mode_robdd.implications.m"
    {
#line 84 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_HeadVar__2_2 = mode_robdd__implications__mkpos_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 84 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv1_HeadVar__2_2));
#line 84 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 84 "mode_robdd.implications.m"
  }
#line 84 "mode_robdd.implications.m"
}

#line 84 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_1(
#line 84 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 84 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1)
#line 84 "mode_robdd.implications.m"
{
#line 84 "mode_robdd.implications.m"
  {
#line 84 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_2;
#line 84 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 84 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__2_2;

#line 84 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 84 "mode_robdd.implications.m"
    {
#line 84 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__2_2 = mode_robdd__implications__mkneg_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 84 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__2_2));
#line 84 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 84 "mode_robdd.implications.m"
  }
#line 84 "mode_robdd.implications.m"
}

#line 25 "mode_robdd.implications.m"
MR_Word MR_CALL 
mode_robdd__implications__f_times_2_f_0(
#line 25 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
#line 25 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_4,
#line 25 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_2)
#line 25 "mode_robdd.implications.m"
{
#line 83 "mode_robdd.implications.m"
  {
#line 83 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 83 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 83 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Imps_5;
#line 83 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RevImps_6;
#line 83 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__DisImps_7;
#line 83 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RevDisImps_8;
#line 83 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_9_9;
#line 83 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_10_10;
#line 83 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_11_11;
#line 83 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_12_12;
#line 83 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_13_13;
#line 83 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_14_14;
#line 83 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_15_15;
#line 83 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_16_16;
#line 83 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_17_17;
#line 83 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_18_18;
#line 83 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_19_19;

#line 83 "mode_robdd.implications.m"
    mode_robdd__implications__Imps_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__2_2, (MR_Integer) 0)));
#line 83 "mode_robdd.implications.m"
    mode_robdd__implications__RevImps_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__2_2, (MR_Integer) 1)));
#line 83 "mode_robdd.implications.m"
    mode_robdd__implications__DisImps_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__2_2, (MR_Integer) 2)));
#line 83 "mode_robdd.implications.m"
    mode_robdd__implications__RevDisImps_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__2_2, (MR_Integer) 3)));
#line 84 "mode_robdd.implications.m"
    {
#line 84 "mode_robdd.implications.m"
      mode_robdd__implications__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 84 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
#line 84 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_1));
#line 84 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 84 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 84 "mode_robdd.implications.m"
    }
#line 84 "mode_robdd.implications.m"
    {
#line 84 "mode_robdd.implications.m"
      mode_robdd__implications__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 84 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
#line 84 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_2));
#line 84 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 84 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 84 "mode_robdd.implications.m"
    }
#line 83 "mode_robdd.implications.m"
    {
#line 83 "mode_robdd.implications.m"
      mode_robdd__implications__V_11_11 = mode_robdd__implications__add_imp_map_clauses_4_f_0(mode_robdd__implications__TypeInfo_for_T_20, mode_robdd__implications__V_9_9, mode_robdd__implications__V_10_10, mode_robdd__implications__Imps_5, mode_robdd__implications__ImpVars_4);
    }
#line 85 "mode_robdd.implications.m"
    {
#line 85 "mode_robdd.implications.m"
      mode_robdd__implications__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 85 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_12_12, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
#line 85 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_12_12, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_3));
#line 85 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 85 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_12_12, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 85 "mode_robdd.implications.m"
    }
#line 85 "mode_robdd.implications.m"
    {
#line 85 "mode_robdd.implications.m"
      mode_robdd__implications__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 85 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_13_13, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
#line 85 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_13_13, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_4));
#line 85 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 85 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_13_13, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 85 "mode_robdd.implications.m"
    }
#line 83 "mode_robdd.implications.m"
    {
#line 83 "mode_robdd.implications.m"
      mode_robdd__implications__V_14_14 = mode_robdd__implications__add_imp_map_clauses_4_f_0(mode_robdd__implications__TypeInfo_for_T_20, mode_robdd__implications__V_12_12, mode_robdd__implications__V_13_13, mode_robdd__implications__RevImps_6, mode_robdd__implications__V_11_11);
    }
#line 86 "mode_robdd.implications.m"
    {
#line 86 "mode_robdd.implications.m"
      mode_robdd__implications__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 86 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
#line 86 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_5));
#line 86 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 86 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 86 "mode_robdd.implications.m"
    }
#line 86 "mode_robdd.implications.m"
    {
#line 86 "mode_robdd.implications.m"
      mode_robdd__implications__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 86 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_16_16, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
#line 86 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_16_16, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_6));
#line 86 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 86 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_16_16, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 86 "mode_robdd.implications.m"
    }
#line 83 "mode_robdd.implications.m"
    {
#line 83 "mode_robdd.implications.m"
      mode_robdd__implications__V_17_17 = mode_robdd__implications__add_imp_map_clauses_4_f_0(mode_robdd__implications__TypeInfo_for_T_20, mode_robdd__implications__V_15_15, mode_robdd__implications__V_16_16, mode_robdd__implications__DisImps_7, mode_robdd__implications__V_14_14);
    }
#line 87 "mode_robdd.implications.m"
    {
#line 87 "mode_robdd.implications.m"
      mode_robdd__implications__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 87 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_18_18, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
#line 87 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_18_18, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_7));
#line 87 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 87 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_18_18, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 87 "mode_robdd.implications.m"
    }
#line 87 "mode_robdd.implications.m"
    {
#line 87 "mode_robdd.implications.m"
      mode_robdd__implications__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 87 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
#line 87 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_8));
#line 87 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 87 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 87 "mode_robdd.implications.m"
    }
#line 83 "mode_robdd.implications.m"
    {
#line 83 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__add_imp_map_clauses_4_f_0(mode_robdd__implications__TypeInfo_for_T_20, mode_robdd__implications__V_18_18, mode_robdd__implications__V_19_19, mode_robdd__implications__RevDisImps_8, mode_robdd__implications__V_17_17);
    }
#line 83 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 83 "mode_robdd.implications.m"
  }
#line 25 "mode_robdd.implications.m"
}

#line 23 "mode_robdd.implications.m"
MR_Word MR_CALL 
mode_robdd__implications__init_imp_vars_0_f_0(
#line 23 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_6)
#line 23 "mode_robdd.implications.m"
{
#line 81 "mode_robdd.implications.m"
  {
#line 81 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 81 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__1_1;
#line 81 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_7_7;
#line 81 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_8_8;
#line 81 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_9_9;
#line 81 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_10_10;
#line 81 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_2_2;
#line 81 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_3_3;
#line 81 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_4_4;
#line 81 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_5_5;
#line 81 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_V_2_2;
#line 81 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv1_V_3_3;
#line 81 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv2_V_4_4;
#line 81 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv3_V_5_5;

#line 10735 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_7_7 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 10737 "mode_robdd.implications.c"
    {
#line 10739 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10741 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_8_8, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_7_7));
#line 10743 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_8_8, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_6));
#line 10745 "mode_robdd.implications.c"
    }
#line 10747 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_9_9 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 10749 "mode_robdd.implications.c"
    {
#line 10751 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10753 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_9_9));
#line 10755 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_8_8));
#line 10757 "mode_robdd.implications.c"
    }
#line 81 "mode_robdd.implications.m"
    {
#line 81 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_V_2_2 = mercury__map__init_0_f_0(mode_robdd__implications__TypeInfo_8_8, mode_robdd__implications__TypeInfo_10_10);
    }
#line 81 "mode_robdd.implications.m"
    mode_robdd__implications__V_2_2 = (MR_Word) mode_robdd__implications__conv0_V_2_2;
#line 81 "mode_robdd.implications.m"
    {
#line 81 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_V_3_3 = mercury__map__init_0_f_0(mode_robdd__implications__TypeInfo_8_8, mode_robdd__implications__TypeInfo_10_10);
    }
#line 81 "mode_robdd.implications.m"
    mode_robdd__implications__V_3_3 = (MR_Word) mode_robdd__implications__conv1_V_3_3;
#line 81 "mode_robdd.implications.m"
    {
#line 81 "mode_robdd.implications.m"
      mode_robdd__implications__conv2_V_4_4 = mercury__map__init_0_f_0(mode_robdd__implications__TypeInfo_8_8, mode_robdd__implications__TypeInfo_10_10);
    }
#line 81 "mode_robdd.implications.m"
    mode_robdd__implications__V_4_4 = (MR_Word) mode_robdd__implications__conv2_V_4_4;
#line 81 "mode_robdd.implications.m"
    {
#line 81 "mode_robdd.implications.m"
      mode_robdd__implications__conv3_V_5_5 = mercury__map__init_0_f_0(mode_robdd__implications__TypeInfo_8_8, mode_robdd__implications__TypeInfo_10_10);
    }
#line 81 "mode_robdd.implications.m"
    mode_robdd__implications__V_5_5 = (MR_Word) mode_robdd__implications__conv3_V_5_5;
#line 81 "mode_robdd.implications.m"
    {
#line 81 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 81 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, 0) = ((MR_Box) (mode_robdd__implications__V_2_2));
#line 81 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, 1) = ((MR_Box) (mode_robdd__implications__V_3_3));
#line 81 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, 2) = ((MR_Box) (mode_robdd__implications__V_4_4));
#line 81 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, 3) = ((MR_Box) (mode_robdd__implications__V_5_5));
#line 81 "mode_robdd.implications.m"
    }
#line 81 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__1_1;
#line 81 "mode_robdd.implications.m"
  }
#line 23 "mode_robdd.implications.m"
}

void mercury__mode_robdd__implications__init(void)
{
}

void mercury__mode_robdd__implications__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mode_robdd__implications__mode_robdd__implications__type_ctor_info_bin_clause_1);
	MR_register_type_ctor_info(&mode_robdd__implications__mode_robdd__implications__type_ctor_info_extract_0);
	MR_register_type_ctor_info(&mode_robdd__implications__mode_robdd__implications__type_ctor_info_mklit_1);
}

void mercury__mode_robdd__implications__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mode_robdd.implications. */
