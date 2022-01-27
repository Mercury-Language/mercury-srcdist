/*
** Automatically generated from `mode_robdd.implications.m'
** by the Mercury compiler,
** version rotd-2014-12-08
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
#include "mode_robdd.equiv_vars.mih"
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
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 293 "mode_robdd.implications.m"
struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s {
#line 293 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_for_T_11;
#line 293 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__EQVars_4;
#line 296 "mode_robdd.implications.m"
  MR_bool mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded;
#line 296 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__ImpMap_7;
#line 298 "mode_robdd.implications.m"
  jmp_buf mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__commit_0;
#line 298 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_13_13;
#line 298 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__BaseTypeClassInfo_for_enum_16;
#line 298 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeClassInfo_for_enum_17;
#line 298 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__VA_8;
#line 298 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__VB_9;
#line 298 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__Vs_10;
#line 301 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv1_VA_8;
#line 301 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv0_Vs_10;
#line 301 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv2_VB_9;
#line 293 "mode_robdd.implications.m"
};


#line 164 "mode_robdd.implications.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__term__pti_var_1__pseudo_1;

#line 167 "mode_robdd.implications.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__robdd__pti_literal_1__pseudo_1;

#line 170 "mode_robdd.implications.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1;

#line 173 "mode_robdd.implications.c"
static const MR_FA_PseudoTypeInfo_Struct2 mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1;

#line 176 "mode_robdd.implications.c"
static const MR_VA_PseudoTypeInfo_Struct1 mode_robdd__implications____vpti_pred_1__pseudo_term__pti_var_1__pseudo_1;

#line 179 "mode_robdd.implications.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__robdd__pti_imp_vars_1__pseudo_1;

#line 182 "mode_robdd.implications.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__robdd__pti_equiv_vars_1__pseudo_1;

#line 185 "mode_robdd.implications.c"
static const MR_VA_PseudoTypeInfo_Struct4 mode_robdd__implications____vpti_tuple_4__plain_bool__type_ctor_info_bool_0__pseudo_robdd__pti_equiv_vars_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1;

#line 188 "mode_robdd.implications.c"
static const MR_VA_PseudoTypeInfo_Struct4 mode_robdd__implications____vpti_tuple_4__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__plain_bool__type_ctor_info_bool_0;

#line 191 "mode_robdd.implications.c"
static const MR_VA_PseudoTypeInfo_Struct2 mode_robdd__implications____vpti_tuple_2__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__plain_bool__type_ctor_info_bool_0;

#line 194 "mode_robdd.implications.c"
static const MR_VA_PseudoTypeInfo_Struct2 mode_robdd__implications____vpti_tuple_2__pseudo_robdd__pti_literal_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1;

#line 197 "mode_robdd.implications.c"
static const MR_VA_PseudoTypeInfo_Struct2 mode_robdd__implications____vpti_func_2__pseudo_term__pti_var_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1;

#line 200 "mode_robdd.implications.c"
static const MR_EnumFunctorDesc mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_0;

#line 203 "mode_robdd.implications.c"
static const MR_EnumFunctorDesc mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_1;

#line 206 "mode_robdd.implications.c"
static const MR_EnumFunctorDescPtr mode_robdd__implications__mode_robdd__implications__enum_value_ordered_extract_0[2];

#line 209 "mode_robdd.implications.c"
static const MR_EnumFunctorDescPtr mode_robdd__implications__mode_robdd__implications__enum_name_ordered_extract_0[2];

#line 212 "mode_robdd.implications.c"
static const MR_Integer mode_robdd__implications__mode_robdd__implications__functor_number_map_extract_0[2];

#line 215 "mode_robdd.implications.c"
static MR_bool MR_CALL 
mode_robdd__implications____Unify____bin_clause_1_0_10001(
#line 218 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 220 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 222 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_3);

#line 225 "mode_robdd.implications.c"
static void MR_CALL 
mode_robdd__implications____Compare____bin_clause_1_0_10001(
#line 228 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 230 "mode_robdd.implications.c"
  MR_Box * mode_robdd__implications__wrapper_arg_2,
#line 232 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_3,
#line 234 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_4);

#line 237 "mode_robdd.implications.c"
static MR_bool MR_CALL 
mode_robdd__implications____Unify____extract_0_0_10001(
#line 240 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 242 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_2);

#line 245 "mode_robdd.implications.c"
static void MR_CALL 
mode_robdd__implications____Compare____extract_0_0_10001(
#line 248 "mode_robdd.implications.c"
  MR_Box * mode_robdd__implications__wrapper_arg_1,
#line 250 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 252 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_3);

#line 255 "mode_robdd.implications.c"
static MR_bool MR_CALL 
mode_robdd__implications____Unify____mklit_1_0_10001(
#line 258 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 260 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 262 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_3);

#line 265 "mode_robdd.implications.c"
static void MR_CALL 
mode_robdd__implications____Compare____mklit_1_0_10001(
#line 268 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 270 "mode_robdd.implications.c"
  MR_Box * mode_robdd__implications__wrapper_arg_2,
#line 272 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_3,
#line 274 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_4);

#line 588 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__587__1_6_f_0_1(
#line 588 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 588 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 588 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2);

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
  MR_Word mode_robdd__implications__HeadVar__4_16,
#line 587 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__5_17,
#line 587 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__6_18);

#line 588 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__588__1_6_f_0(
#line 588 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_32,
#line 588 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__MkLitA_6,
#line 588 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__MkLitB_7,
#line 588 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__4_16,
#line 588 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__5_21,
#line 588 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__6_22);

#line 566 "mode_robdd.implications.m"
static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__get_resolvents_2__566__1_3_f_0(
#line 566 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_15,
#line 566 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LitB_6,
#line 566 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_12);

#line 478 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__478__1_5_f_0(
#line 478 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
#line 478 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Var_4,
#line 478 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_11,
#line 478 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__4_12,
#line 478 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__5_13);

#line 467 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__467__1_4_f_0(
#line 467 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_16,
#line 467 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_8,
#line 467 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_9,
#line 467 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__4_10);

#line 455 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__imp_map_difference__455__1_4_f_0(
#line 455 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
#line 455 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_11,
#line 455 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_12,
#line 455 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__4_13);

#line 447 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__intersect__447__1_3_f_0(
#line 447 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_8,
#line 447 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_13,
#line 447 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_14);

#line 290 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__288__1_5_f_0_1(
#line 290 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 290 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 288 "mode_robdd.implications.m"
static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__288__1_5_f_0(
#line 288 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_30,
#line 288 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__EQVars_5,
#line 288 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_16,
#line 288 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__4_17,
#line 288 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__5_18);

#line 263 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__normalise_pairs__263__1_3_f_0(
#line 263 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
#line 263 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_35,
#line 263 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_36);

#line 200 "mode_robdd.implications.m"
static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__200__1_5_f_0(
#line 200 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_46,
#line 200 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IsDisImp_9,
#line 200 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_32,
#line 200 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__4_33,
#line 200 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__5_34);

#line 123 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__filter_imp_map__123__1_5_f_0(
#line 123 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
#line 123 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__P_4,
#line 123 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_10,
#line 123 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__4_11,
#line 123 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__5_12);

#line 363 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_equalities_to_imp_vars__363__1_4_f_0(
#line 363 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
#line 363 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_10,
#line 363 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_11,
#line 363 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__4_12);

#line 318 "mode_robdd.implications.m"
static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__318__1_4_f_0(
#line 318 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_46,
#line 318 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_31,
#line 318 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_32,
#line 318 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__4_33);

#line 101 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__restrict_threshold__101__1_3_f_0(
#line 101 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_13,
#line 101 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Threshold_4,
#line 101 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_8);

#line 510 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications____Compare____mklit_1_0(
#line 510 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_6,
#line 510 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__HeadVar__1_1,
#line 510 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_2,
#line 510 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_3);

#line 510 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications____Unify____mklit_1_0(
#line 510 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_5,
#line 510 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__1_1,
#line 510 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_2);

#line 245 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications____Compare____extract_0_0(
#line 245 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__HeadVar__1_1,
#line 245 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_2,
#line 245 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_3);

#line 245 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications____Unify____extract_0_0(
#line 245 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_1,
#line 245 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_2);

#line 520 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications____Compare____bin_clause_1_0(
#line 520 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_6,
#line 520 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__HeadVar__1_1,
#line 520 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__2_2,
#line 520 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__3_3);

#line 520 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications____Unify____bin_clause_1_0(
#line 520 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_5,
#line 520 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__1_1,
#line 520 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__2_2);

#line 587 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__add_imp_map_clauses_4_f_0_1(
#line 587 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 587 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 587 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 587 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3);

#line 583 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__add_imp_map_clauses_4_f_0(
#line 583 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_32,
#line 583 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__MkLitA_6,
#line 583 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__MkLitB_7,
#line 583 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IM_8,
#line 583 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_9);

#line 572 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__get_literals_2_f_0_2(
#line 572 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 572 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 571 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__get_literals_2_f_0_1(
#line 571 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 571 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 568 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__get_literals_2_f_0(
#line 568 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_32,
#line 568 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LitA_4,
#line 568 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_5);

#line 566 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__get_resolvents_2_3_f_0_1(
#line 566 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 566 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 561 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__get_resolvents_2_3_f_0(
#line 561 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_15,
#line 561 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LitA_5,
#line 561 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LitB_6,
#line 561 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_7);

#line 555 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__get_resolvents_2_f_0(
#line 555 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_9,
#line 555 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__1_1,
#line 555 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_6);

#line 540 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications__add_clause_2_2_f_0(
#line 540 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_100,
#line 540 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__1_1,
#line 540 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_2,
#line 540 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__HeadVar__3_3);

#line 527 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__add_clauses_2_f_0(
#line 527 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_12,
#line 527 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__1_1,
#line 527 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_2);

#line 522 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__add_clause_2_f_0(
#line 522 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_8,
#line 522 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__Clause_4,
#line 522 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_5);

#line 516 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__mkneg_1_f_0(
#line 516 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_4,
#line 516 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__V_3);

#line 512 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__mkpos_1_f_0(
#line 512 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_4,
#line 512 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__V_3);

#line 478 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__delete_var_from_imp_map_2_f_0_1(
#line 478 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 478 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 478 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 478 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3);

#line 475 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__delete_var_from_imp_map_2_f_0(
#line 475 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
#line 475 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Var_4,
#line 475 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IM0_5);

#line 467 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__remove_empty_sets_1_f_0_1(
#line 467 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 467 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 467 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 467 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3);

#line 464 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__remove_empty_sets_1_f_0(
#line 464 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_16,
#line 464 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IM_3);

#line 455 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__imp_map_difference_2_f_0_1(
#line 455 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 455 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 455 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 455 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3);

#line 449 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__imp_map_difference_2_f_0(
#line 449 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
#line 449 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IMA_4,
#line 449 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IMB_5);

#line 447 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__intersect_2_f_0_1(
#line 447 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 447 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 447 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2);

#line 445 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__intersect_2_f_0(
#line 445 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_8,
#line 445 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IMA_4,
#line 445 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IMB_5);

#line 433 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__apply_to_coresp_imp_maps_3_f_0(
#line 433 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_21,
#line 433 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__F_5,
#line 433 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVarsA_6,
#line 433 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVarsB_7);

#line 426 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__apply_to_imp_maps_2_f_0(
#line 426 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_15,
#line 426 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__F_4,
#line 426 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars0_5);

#line 416 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications__empty_1_p_0(
#line 416 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_6,
#line 416 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__1_1);

#line 396 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(
#line 396 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_12,
#line 396 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__VA_5,
#line 396 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__M0_6,
#line 396 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__VB_7,
#line 396 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__M_8);

#line 378 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(
#line 378 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_8,
#line 378 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__V_5,
#line 378 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__M_6,
#line 378 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Vs_7);

#line 369 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__entry_2_f_0(
#line 369 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_7,
#line 369 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__V_4,
#line 369 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__M_5);

#line 298 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_1(
#line 298 "mode_robdd.implications.m"
  void * mode_robdd__implications__env_ptr_arg);

#line 301 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_3(
#line 301 "mode_robdd.implications.m"
  void * mode_robdd__implications__env_ptr_arg);

#line 301 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_5(
#line 301 "mode_robdd.implications.m"
  void * mode_robdd__implications__env_ptr_arg);

#line 298 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_4(
#line 298 "mode_robdd.implications.m"
  void * mode_robdd__implications__env_ptr_arg);

#line 298 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_2(
#line 298 "mode_robdd.implications.m"
  void * mode_robdd__implications__env_ptr_arg);

#line 298 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_6(
#line 298 "mode_robdd.implications.m"
  void * mode_robdd__implications__env_ptr_arg);

#line 293 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0(
#line 293 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_11,
#line 293 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__EQVars_4,
#line 293 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__DisImps_5,
#line 293 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__RevDisImps_6);

#line 288 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0_1(
#line 288 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 288 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 288 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 288 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3);

#line 284 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0(
#line 284 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_30,
#line 284 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__EQVars_5,
#line 284 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__Changed_6,
#line 284 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpMap0_7,
#line 284 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__ImpMap_8);

#line 263 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__normalise_pairs_6_p_0_1(
#line 263 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 263 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 263 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2);

#line 247 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__normalise_pairs_6_p_0(
#line 247 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
#line 247 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Extract_7,
#line 247 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Imps_8,
#line 247 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__DisImps_9,
#line 247 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__Changed_10,
#line 247 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__FalseVars0_11,
#line 247 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__FalseVars_12);

#line 200 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__normalise_true_false_imp_map_8_p_0_1(
#line 200 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 200 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 200 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 200 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3);

#line 194 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__normalise_true_false_imp_map_8_p_0(
#line 194 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_46,
#line 194 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IsDisImp_9,
#line 194 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__Changed_10,
#line 194 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TrueVars0_11,
#line 194 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__TrueVars_12,
#line 194 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__FalseVars0_13,
#line 194 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__FalseVars_14,
#line 194 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpMap0_15,
#line 194 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__ImpMap_16);

#line 123 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__filter_imp_map_2_f_0_1(
#line 123 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 123 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 123 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 123 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3);

#line 120 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__filter_imp_map_2_f_0(
#line 120 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
#line 120 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__P_4,
#line 120 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IM_5);

#line 105 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__restrict_threshold_2_3_f_0(
#line 105 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_16,
#line 105 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__1_1,
#line 105 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_2,
#line 105 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IM_3);

#line 363 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__add_equalities_to_imp_vars_2_f_0_1(
#line 363 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 363 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 363 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 363 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3);

#line 318 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__propagate_implications_into_equivalences_5_p_0_1(
#line 318 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 318 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 318 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 318 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3);

#line 139 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__at_most_one_of_2_f_0_1(
#line 139 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 139 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 139 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2);

#line 117 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__filter_2_f_0_1(
#line 117 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 117 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 101 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__restrict_threshold_2_f_0_1(
#line 101 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 101 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 97 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__delete_2_f_0_1(
#line 97 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 97 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 94 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__difference_2_f_0_1(
#line 94 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 94 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 94 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2);

#line 91 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_plus_2_f_0_1(
#line 91 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 91 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 91 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2);

#line 88 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_8(
#line 88 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 88 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 88 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_7(
#line 88 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 88 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 87 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_6(
#line 87 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 87 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 87 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_5(
#line 87 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 87 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 86 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_4(
#line 86 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 86 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 86 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_3(
#line 86 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 86 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 85 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_2(
#line 85 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 85 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1);

#line 85 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_1(
#line 85 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 85 "mode_robdd.implications.m"
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



#line 1357 "mode_robdd.implications.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1365 "mode_robdd.implications.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__robdd__pti_literal_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_literal_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1373 "mode_robdd.implications.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &mode_robdd__implications__term__pti_var_1__pseudo_1
  }
};

#line 1381 "mode_robdd.implications.c"
static const MR_FA_PseudoTypeInfo_Struct2 mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mode_robdd__implications__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__implications__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1
  }
};

#line 1390 "mode_robdd.implications.c"
static const MR_VA_PseudoTypeInfo_Struct1 mode_robdd__implications____vpti_pred_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &mode_robdd__implications__term__pti_var_1__pseudo_1
  }
};

#line 1399 "mode_robdd.implications.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__robdd__pti_imp_vars_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_imp_vars_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1407 "mode_robdd.implications.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__implications__robdd__pti_equiv_vars_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_equiv_vars_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1415 "mode_robdd.implications.c"
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

#line 1427 "mode_robdd.implications.c"
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

#line 1439 "mode_robdd.implications.c"
static const MR_VA_PseudoTypeInfo_Struct2 mode_robdd__implications____vpti_tuple_2__pseudo_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1__plain_bool__type_ctor_info_bool_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mode_robdd__implications__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 1449 "mode_robdd.implications.c"
static const MR_VA_PseudoTypeInfo_Struct2 mode_robdd__implications____vpti_tuple_2__pseudo_robdd__pti_literal_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mode_robdd__implications__robdd__pti_literal_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__implications__robdd__pti_literal_1__pseudo_1
  }
};

#line 1459 "mode_robdd.implications.c"
static const MR_VA_PseudoTypeInfo_Struct2 mode_robdd__implications____vpti_func_2__pseudo_term__pti_var_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mode_robdd__implications__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mode_robdd__implications__robdd__pti_literal_1__pseudo_1
  }
};

#line 1469 "mode_robdd.implications.c"
const MR_TypeCtorInfo_Struct mode_robdd__implications__mode_robdd__implications__type_ctor_info_bin_clause_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mode_robdd__implications____Unify____bin_clause_1_0_10001)),
  ((MR_Box) (mode_robdd__implications____Compare____bin_clause_1_0_10001)),
  (MR_String) "mode_robdd.implications",
  (MR_String) "bin_clause",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mode_robdd__implications____vpti_tuple_2__pseudo_robdd__pti_literal_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1490 "mode_robdd.implications.c"
static const MR_EnumFunctorDesc mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_0 = {
  (MR_String) "keys",
  (MR_Integer) 0
};

#line 1496 "mode_robdd.implications.c"
static const MR_EnumFunctorDesc mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_1 = {
  (MR_String) "values",
  (MR_Integer) 1
};

#line 1502 "mode_robdd.implications.c"
static const MR_EnumFunctorDescPtr mode_robdd__implications__mode_robdd__implications__enum_value_ordered_extract_0[2] = {
  &mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_0,
  &mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_1
};

#line 1508 "mode_robdd.implications.c"
static const MR_EnumFunctorDescPtr mode_robdd__implications__mode_robdd__implications__enum_name_ordered_extract_0[2] = {
  &mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_0,
  &mode_robdd__implications__mode_robdd__implications__enum_functor_desc_extract_0_1
};

#line 1514 "mode_robdd.implications.c"
static const MR_Integer mode_robdd__implications__mode_robdd__implications__functor_number_map_extract_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1520 "mode_robdd.implications.c"
const MR_TypeCtorInfo_Struct mode_robdd__implications__mode_robdd__implications__type_ctor_info_extract_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mode_robdd__implications____Unify____extract_0_0_10001)),
  ((MR_Box) (mode_robdd__implications____Compare____extract_0_0_10001)),
  (MR_String) "mode_robdd.implications",
  (MR_String) "extract",
  {
    mode_robdd__implications__mode_robdd__implications__enum_name_ordered_extract_0
  },
  {
    mode_robdd__implications__mode_robdd__implications__enum_value_ordered_extract_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mode_robdd__implications__mode_robdd__implications__functor_number_map_extract_0
};

#line 1541 "mode_robdd.implications.c"
const MR_TypeCtorInfo_Struct mode_robdd__implications__mode_robdd__implications__type_ctor_info_mklit_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mode_robdd__implications____Unify____mklit_1_0_10001)),
  ((MR_Box) (mode_robdd__implications____Compare____mklit_1_0_10001)),
  (MR_String) "mode_robdd.implications",
  (MR_String) "mklit",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mode_robdd__implications____vpti_func_2__pseudo_term__pti_var_1__pseudo_1__pseudo_robdd__pti_literal_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1562 "mode_robdd.implications.c"
static MR_bool MR_CALL 
mode_robdd__implications____Unify____bin_clause_1_0_10001(
#line 1565 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 1567 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 1569 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_3)
#line 1571 "mode_robdd.implications.c"
{
#line 1573 "mode_robdd.implications.c"
  {
#line 1575 "mode_robdd.implications.c"
    MR_bool mode_robdd__implications__succeeded;

#line 1578 "mode_robdd.implications.c"
    {
#line 1580 "mode_robdd.implications.c"
      mode_robdd__implications__succeeded = mode_robdd__implications____Unify____bin_clause_1_0(((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Tuple) mode_robdd__implications__wrapper_arg_2), ((MR_Tuple) mode_robdd__implications__wrapper_arg_3));
    }
#line 1583 "mode_robdd.implications.c"
    return mode_robdd__implications__succeeded;
#line 1585 "mode_robdd.implications.c"
  }
#line 1587 "mode_robdd.implications.c"
}

#line 1590 "mode_robdd.implications.c"
static void MR_CALL 
mode_robdd__implications____Compare____bin_clause_1_0_10001(
#line 1593 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 1595 "mode_robdd.implications.c"
  MR_Box * mode_robdd__implications__wrapper_arg_2,
#line 1597 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_3,
#line 1599 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_4)
#line 1601 "mode_robdd.implications.c"
{
#line 1603 "mode_robdd.implications.c"
  {
#line 1605 "mode_robdd.implications.c"
    MR_Word mode_robdd__implications__conv0_HeadVar__1_1;

#line 1608 "mode_robdd.implications.c"
    {
#line 1610 "mode_robdd.implications.c"
      mode_robdd__implications____Compare____bin_clause_1_0(((MR_Word) mode_robdd__implications__wrapper_arg_1), &mode_robdd__implications__conv0_HeadVar__1_1, ((MR_Tuple) mode_robdd__implications__wrapper_arg_3), ((MR_Tuple) mode_robdd__implications__wrapper_arg_4));
    }
#line 1613 "mode_robdd.implications.c"
    *mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__1_1));
#line 1615 "mode_robdd.implications.c"
  }
#line 1617 "mode_robdd.implications.c"
}

#line 1620 "mode_robdd.implications.c"
static MR_bool MR_CALL 
mode_robdd__implications____Unify____extract_0_0_10001(
#line 1623 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 1625 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_2)
#line 1627 "mode_robdd.implications.c"
{
#line 1629 "mode_robdd.implications.c"
  {
#line 1631 "mode_robdd.implications.c"
    MR_bool mode_robdd__implications__succeeded;

#line 1634 "mode_robdd.implications.c"
    {
#line 1636 "mode_robdd.implications.c"
      mode_robdd__implications__succeeded = mode_robdd__implications____Unify____extract_0_0(((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2));
    }
#line 1639 "mode_robdd.implications.c"
    return mode_robdd__implications__succeeded;
#line 1641 "mode_robdd.implications.c"
  }
#line 1643 "mode_robdd.implications.c"
}

#line 1646 "mode_robdd.implications.c"
static void MR_CALL 
mode_robdd__implications____Compare____extract_0_0_10001(
#line 1649 "mode_robdd.implications.c"
  MR_Box * mode_robdd__implications__wrapper_arg_1,
#line 1651 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 1653 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_3)
#line 1655 "mode_robdd.implications.c"
{
#line 1657 "mode_robdd.implications.c"
  {
#line 1659 "mode_robdd.implications.c"
    MR_Word mode_robdd__implications__conv0_HeadVar__1_1;

#line 1662 "mode_robdd.implications.c"
    {
#line 1664 "mode_robdd.implications.c"
      mode_robdd__implications____Compare____extract_0_0(&mode_robdd__implications__conv0_HeadVar__1_1, ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Word) mode_robdd__implications__wrapper_arg_3));
    }
#line 1667 "mode_robdd.implications.c"
    *mode_robdd__implications__wrapper_arg_1 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__1_1));
#line 1669 "mode_robdd.implications.c"
  }
#line 1671 "mode_robdd.implications.c"
}

#line 1674 "mode_robdd.implications.c"
static MR_bool MR_CALL 
mode_robdd__implications____Unify____mklit_1_0_10001(
#line 1677 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 1679 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 1681 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_3)
#line 1683 "mode_robdd.implications.c"
{
#line 1685 "mode_robdd.implications.c"
  {
#line 1687 "mode_robdd.implications.c"
    MR_bool mode_robdd__implications__succeeded;

#line 1690 "mode_robdd.implications.c"
    {
#line 1692 "mode_robdd.implications.c"
      mode_robdd__implications__succeeded = mode_robdd__implications____Unify____mklit_1_0(((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Word) mode_robdd__implications__wrapper_arg_3));
    }
#line 1695 "mode_robdd.implications.c"
    return mode_robdd__implications__succeeded;
#line 1697 "mode_robdd.implications.c"
  }
#line 1699 "mode_robdd.implications.c"
}

#line 1702 "mode_robdd.implications.c"
static void MR_CALL 
mode_robdd__implications____Compare____mklit_1_0_10001(
#line 1705 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 1707 "mode_robdd.implications.c"
  MR_Box * mode_robdd__implications__wrapper_arg_2,
#line 1709 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_3,
#line 1711 "mode_robdd.implications.c"
  MR_Box mode_robdd__implications__wrapper_arg_4)
#line 1713 "mode_robdd.implications.c"
{
#line 1715 "mode_robdd.implications.c"
  {
#line 1717 "mode_robdd.implications.c"
    MR_Word mode_robdd__implications__conv0_HeadVar__1_1;

#line 1720 "mode_robdd.implications.c"
    {
#line 1722 "mode_robdd.implications.c"
      mode_robdd__implications____Compare____mklit_1_0(((MR_Word) mode_robdd__implications__wrapper_arg_1), &mode_robdd__implications__conv0_HeadVar__1_1, ((MR_Word) mode_robdd__implications__wrapper_arg_3), ((MR_Word) mode_robdd__implications__wrapper_arg_4));
    }
#line 1725 "mode_robdd.implications.c"
    *mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__1_1));
#line 1727 "mode_robdd.implications.c"
  }
#line 1729 "mode_robdd.implications.c"
}

#line 588 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__587__1_6_f_0_1(
#line 588 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 588 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 588 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2)
#line 588 "mode_robdd.implications.m"
{
#line 588 "mode_robdd.implications.m"
  {
#line 588 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_3;
#line 588 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 588 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__7_23;

#line 588 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 588 "mode_robdd.implications.m"
    {
#line 588 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__7_23 = mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__588__1_6_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 6))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2));
    }
#line 588 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_3 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__7_23));
#line 588 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_3;
#line 588 "mode_robdd.implications.m"
  }
#line 588 "mode_robdd.implications.m"
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
  MR_Word mode_robdd__implications__HeadVar__4_16,
#line 587 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__5_17,
#line 587 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__6_18)
#line 587 "mode_robdd.implications.m"
{
#line 587 "mode_robdd.implications.m"
  {
#line 587 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 587 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__7_19;
#line 587 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_39_39;
#line 587 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_40_40;
#line 587 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_41;
#line 587 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeClassInfo_for_enum_42;
#line 587 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_43_43;
#line 587 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_44_44;
#line 587 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_20_20;
#line 588 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv1_HeadVar__7_19;

#line 1808 "mode_robdd.implications.c"
    mode_robdd__implications__BaseTypeClassInfo_for_enum_41 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 1810 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_39_39 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1812 "mode_robdd.implications.c"
    {
#line 1814 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1816 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_40_40, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_39_39));
#line 1818 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_40_40, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
#line 1820 "mode_robdd.implications.c"
    }
#line 1822 "mode_robdd.implications.c"
    {
#line 1824 "mode_robdd.implications.c"
      mode_robdd__implications__TypeClassInfo_for_enum_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1826 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_42, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_41));
#line 1828 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_42, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
#line 1830 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_42, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_40_40));
#line 1832 "mode_robdd.implications.c"
    }
#line 1834 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_43_43 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_imp_vars_1;
#line 1836 "mode_robdd.implications.c"
    {
#line 1838 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1840 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_44_44, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_43_43));
#line 1842 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_44_44, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
#line 1844 "mode_robdd.implications.c"
    }
#line 588 "mode_robdd.implications.m"
    {
#line 588 "mode_robdd.implications.m"
      mode_robdd__implications__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 588 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_6[1]));
#line 588 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 1) = ((MR_Box) (mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__587__1_6_f_0_1));
#line 588 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 588 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
#line 588 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 4) = ((MR_Box) (mode_robdd__implications__MkLitA_6));
#line 588 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 5) = ((MR_Box) (mode_robdd__implications__MkLitB_7));
#line 588 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 6) = ((MR_Box) (mode_robdd__implications__HeadVar__4_16));
#line 588 "mode_robdd.implications.m"
    }
#line 588 "mode_robdd.implications.m"
    {
#line 588 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_HeadVar__7_19 = mercury__sparse_bitset__foldl_3_f_0(mode_robdd__implications__TypeInfo_44_44, mode_robdd__implications__TypeClassInfo_for_enum_42, (MR_Word) mode_robdd__implications__V_20_20, (MR_Word) mode_robdd__implications__HeadVar__5_17, ((MR_Box) (mode_robdd__implications__HeadVar__6_18)));
    }
#line 588 "mode_robdd.implications.m"
    mode_robdd__implications__HeadVar__7_19 = ((MR_Word) mode_robdd__implications__conv1_HeadVar__7_19);
#line 587 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__7_19;
#line 587 "mode_robdd.implications.m"
  }
#line 587 "mode_robdd.implications.m"
}

#line 588 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__588__1_6_f_0(
#line 588 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_32,
#line 588 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__MkLitA_6,
#line 588 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__MkLitB_7,
#line 588 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__4_16,
#line 588 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__5_21,
#line 588 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__6_22)
#line 588 "mode_robdd.implications.m"
{
#line 588 "mode_robdd.implications.m"
  {
#line 588 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 588 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__7_23;
#line 588 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__V_24_24;
#line 588 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_25_25;
#line 588 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_26_26;
#line 589 "mode_robdd.implications.m"
    MR_Box MR_CALL (* mode_robdd__implications__func_0)(MR_Box, MR_Box);
#line 589 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv1_V_25_25;
#line 589 "mode_robdd.implications.m"
    MR_Box MR_CALL (* mode_robdd__implications__func_2)(MR_Box, MR_Box);
#line 589 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv3_V_26_26;

#line 589 "mode_robdd.implications.m"
    mode_robdd__implications__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__MkLitA_6, (MR_Integer) 1)));
#line 589 "mode_robdd.implications.m"
    {
#line 589 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_V_25_25 = mode_robdd__implications__func_0(((MR_Box) mode_robdd__implications__MkLitA_6), ((MR_Box) (mode_robdd__implications__HeadVar__4_16)));
    }
#line 589 "mode_robdd.implications.m"
    mode_robdd__implications__V_25_25 = ((MR_Word) mode_robdd__implications__conv1_V_25_25);
#line 589 "mode_robdd.implications.m"
    mode_robdd__implications__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__MkLitB_7, (MR_Integer) 1)));
#line 589 "mode_robdd.implications.m"
    {
#line 589 "mode_robdd.implications.m"
      mode_robdd__implications__conv3_V_26_26 = mode_robdd__implications__func_2(((MR_Box) mode_robdd__implications__MkLitB_7), ((MR_Box) (mode_robdd__implications__HeadVar__5_21)));
    }
#line 589 "mode_robdd.implications.m"
    mode_robdd__implications__V_26_26 = ((MR_Word) mode_robdd__implications__conv3_V_26_26);
#line 589 "mode_robdd.implications.m"
    {
#line 589 "mode_robdd.implications.m"
      mode_robdd__implications__V_24_24 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 589 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_24_24, 0) = ((MR_Box) (mode_robdd__implications__V_25_25));
#line 589 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_24_24, 1) = ((MR_Box) (mode_robdd__implications__V_26_26));
#line 589 "mode_robdd.implications.m"
    }
#line 589 "mode_robdd.implications.m"
    {
#line 589 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__7_23 = mode_robdd__implications__add_clause_2_f_0(mode_robdd__implications__TypeInfo_for_T_32, mode_robdd__implications__V_24_24, mode_robdd__implications__HeadVar__6_22);
    }
#line 588 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__7_23;
#line 588 "mode_robdd.implications.m"
  }
#line 588 "mode_robdd.implications.m"
}

#line 566 "mode_robdd.implications.m"
static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__get_resolvents_2__566__1_3_f_0(
#line 566 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_15,
#line 566 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LitB_6,
#line 566 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_12)
#line 566 "mode_robdd.implications.m"
{
#line 566 "mode_robdd.implications.m"
  {
#line 566 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 566 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__HeadVar__4_13;

#line 566 "mode_robdd.implications.m"
    {
#line 566 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__4_13 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 566 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__4_13, 0) = ((MR_Box) (mode_robdd__implications__HeadVar__3_12));
#line 566 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__4_13, 1) = ((MR_Box) (mode_robdd__implications__LitB_6));
#line 566 "mode_robdd.implications.m"
    }
#line 566 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__4_13;
#line 566 "mode_robdd.implications.m"
  }
#line 566 "mode_robdd.implications.m"
}

#line 478 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__478__1_5_f_0(
#line 478 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
#line 478 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Var_4,
#line 478 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_11,
#line 478 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__4_12,
#line 478 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__5_13)
#line 478 "mode_robdd.implications.m"
{
#line 478 "mode_robdd.implications.m"
  {
#line 478 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 478 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__6_14;
#line 479 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_27_27;
#line 479 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_28_28;
#line 479 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_29;
#line 479 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeClassInfo_for_enum_30;

#line 2023 "mode_robdd.implications.c"
    mode_robdd__implications__BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 2025 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2027 "mode_robdd.implications.c"
    {
#line 2029 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2031 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_28_28, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_27_27));
#line 2033 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 2035 "mode_robdd.implications.c"
    }
#line 2037 "mode_robdd.implications.c"
    {
#line 2039 "mode_robdd.implications.c"
      mode_robdd__implications__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2041 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_29));
#line 2043 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 2045 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_28_28));
#line 2047 "mode_robdd.implications.c"
    }
#line 479 "mode_robdd.implications.m"
    {
#line 479 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__sparse_bitset__contains_2_p_0(mode_robdd__implications__TypeClassInfo_for_enum_30, (MR_Word) mode_robdd__implications__HeadVar__4_12, ((MR_Box) (mode_robdd__implications__Var_4)));
    }
#line 478 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 478 "mode_robdd.implications.m"
      {
#line 478 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_31_31;
#line 478 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_32_32;
#line 478 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_33;
#line 478 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_34;
#line 478 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_15_15;
#line 480 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv0_V_15_15;

#line 2071 "mode_robdd.implications.c"
        mode_robdd__implications__BaseTypeClassInfo_for_enum_33 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 2073 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2075 "mode_robdd.implications.c"
        {
#line 2077 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2079 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_32_32, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_31_31));
#line 2081 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_32_32, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 2083 "mode_robdd.implications.c"
        }
#line 2085 "mode_robdd.implications.c"
        {
#line 2087 "mode_robdd.implications.c"
          mode_robdd__implications__TypeClassInfo_for_enum_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2089 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_34, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_33));
#line 2091 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_34, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 2093 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_34, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_32_32));
#line 2095 "mode_robdd.implications.c"
        }
#line 480 "mode_robdd.implications.m"
        {
#line 480 "mode_robdd.implications.m"
          mode_robdd__implications__conv0_V_15_15 = mercury__sparse_bitset__delete_2_f_0(mode_robdd__implications__TypeClassInfo_for_enum_34, (MR_Word) mode_robdd__implications__HeadVar__4_12, ((MR_Box) (mode_robdd__implications__Var_4)));
        }
#line 480 "mode_robdd.implications.m"
        mode_robdd__implications__V_15_15 = (MR_Word) mode_robdd__implications__conv0_V_15_15;
#line 478 "mode_robdd.implications.m"
        {
#line 478 "mode_robdd.implications.m"
          mode_robdd__implications__HeadVar__6_14 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_20, mode_robdd__implications__HeadVar__3_11, mode_robdd__implications__HeadVar__5_13, mode_robdd__implications__V_15_15);
        }
#line 478 "mode_robdd.implications.m"
      }
#line 478 "mode_robdd.implications.m"
    else
#line 478 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__6_14 = mode_robdd__implications__HeadVar__5_13;
#line 478 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__6_14;
#line 478 "mode_robdd.implications.m"
  }
#line 478 "mode_robdd.implications.m"
}

#line 467 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__467__1_4_f_0(
#line 467 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_16,
#line 467 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_8,
#line 467 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_9,
#line 467 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__4_10)
#line 467 "mode_robdd.implications.m"
{
#line 467 "mode_robdd.implications.m"
  {
#line 467 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 467 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__5_11;
#line 468 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_23_23;
#line 468 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_24_24;

#line 2146 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2148 "mode_robdd.implications.c"
    {
#line 2150 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2152 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_24_24, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_23_23));
#line 2154 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_16));
#line 2156 "mode_robdd.implications.c"
    }
#line 468 "mode_robdd.implications.m"
    {
#line 468 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__implications__TypeInfo_24_24, (MR_Word) mode_robdd__implications__HeadVar__3_9);
    }
#line 467 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 469 "mode_robdd.implications.m"
      {
#line 469 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_25_25;
#line 469 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_26_26;
#line 469 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_27_27;
#line 469 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_28_28;
#line 469 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv0_HeadVar__5_11;

#line 2178 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2180 "mode_robdd.implications.c"
        {
#line 2182 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2184 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_25_25));
#line 2186 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_16));
#line 2188 "mode_robdd.implications.c"
        }
#line 2190 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_27_27 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 2192 "mode_robdd.implications.c"
        {
#line 2194 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2196 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_28_28, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_27_27));
#line 2198 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_26_26));
#line 2200 "mode_robdd.implications.c"
        }
#line 469 "mode_robdd.implications.m"
        {
#line 469 "mode_robdd.implications.m"
          mode_robdd__implications__conv0_HeadVar__5_11 = mercury__map__delete_2_f_0(mode_robdd__implications__TypeInfo_26_26, mode_robdd__implications__TypeInfo_28_28, (MR_Word) mode_robdd__implications__HeadVar__4_10, ((MR_Box) (mode_robdd__implications__HeadVar__2_8)));
        }
#line 469 "mode_robdd.implications.m"
        mode_robdd__implications__HeadVar__5_11 = (MR_Word) mode_robdd__implications__conv0_HeadVar__5_11;
#line 469 "mode_robdd.implications.m"
      }
#line 467 "mode_robdd.implications.m"
    else
#line 467 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__5_11 = mode_robdd__implications__HeadVar__4_10;
#line 467 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__5_11;
#line 467 "mode_robdd.implications.m"
  }
#line 467 "mode_robdd.implications.m"
}

#line 455 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__imp_map_difference__455__1_4_f_0(
#line 455 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
#line 455 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_11,
#line 455 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_12,
#line 455 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__4_13)
#line 455 "mode_robdd.implications.m"
{
#line 455 "mode_robdd.implications.m"
  {
#line 455 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 455 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__5_14;
#line 455 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__VsA_9;
#line 456 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_30_30;
#line 456 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_31_31;
#line 456 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_32_32;
#line 456 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_33_33;
#line 456 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv0_VsA_9;

#line 2254 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_30_30 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2256 "mode_robdd.implications.c"
    {
#line 2258 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2260 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_31_31, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_30_30));
#line 2262 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_31_31, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 2264 "mode_robdd.implications.c"
    }
#line 2266 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_32_32 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 2268 "mode_robdd.implications.c"
    {
#line 2270 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2272 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_33_33, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_32_32));
#line 2274 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_33_33, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_31_31));
#line 2276 "mode_robdd.implications.c"
    }
#line 456 "mode_robdd.implications.m"
    {
#line 456 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__map__elem_2_f_0(mode_robdd__implications__TypeInfo_31_31, mode_robdd__implications__TypeInfo_33_33, ((MR_Box) (mode_robdd__implications__HeadVar__2_11)), (MR_Word) mode_robdd__implications__HeadVar__4_13, &mode_robdd__implications__conv0_VsA_9);
    }
#line 456 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 456 "mode_robdd.implications.m"
      {
#line 456 "mode_robdd.implications.m"
        mode_robdd__implications__VsA_9 = ((MR_Word) mode_robdd__implications__conv0_VsA_9);
#line 456 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = MR_TRUE;
#line 456 "mode_robdd.implications.m"
      }
#line 455 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 455 "mode_robdd.implications.m"
      {
#line 455 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_34_34;
#line 455 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_35_35;
#line 455 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_15_15;
#line 457 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv1_V_15_15;

#line 2306 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_34_34 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2308 "mode_robdd.implications.c"
        {
#line 2310 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2312 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_35_35, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_34_34));
#line 2314 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_35_35, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 2316 "mode_robdd.implications.c"
        }
#line 457 "mode_robdd.implications.m"
        {
#line 457 "mode_robdd.implications.m"
          mode_robdd__implications__conv1_V_15_15 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__implications__TypeInfo_35_35, (MR_Word) mode_robdd__implications__VsA_9, (MR_Word) mode_robdd__implications__HeadVar__3_12);
        }
#line 457 "mode_robdd.implications.m"
        mode_robdd__implications__V_15_15 = (MR_Word) mode_robdd__implications__conv1_V_15_15;
#line 455 "mode_robdd.implications.m"
        {
#line 455 "mode_robdd.implications.m"
          mode_robdd__implications__HeadVar__5_14 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_19, mode_robdd__implications__HeadVar__2_11, mode_robdd__implications__HeadVar__4_13, mode_robdd__implications__V_15_15);
        }
#line 455 "mode_robdd.implications.m"
      }
#line 455 "mode_robdd.implications.m"
    else
#line 455 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__5_14 = mode_robdd__implications__HeadVar__4_13;
#line 455 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__5_14;
#line 455 "mode_robdd.implications.m"
  }
#line 455 "mode_robdd.implications.m"
}

#line 447 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__intersect__447__1_3_f_0(
#line 447 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_8,
#line 447 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_13,
#line 447 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_14)
#line 447 "mode_robdd.implications.m"
{
#line 447 "mode_robdd.implications.m"
  {
#line 447 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 447 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__4_15;
#line 447 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_16_16;
#line 447 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_17_17;
#line 447 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__4_15;

#line 2367 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2369 "mode_robdd.implications.c"
    {
#line 2371 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2373 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_16_16));
#line 2375 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_8));
#line 2377 "mode_robdd.implications.c"
    }
#line 447 "mode_robdd.implications.m"
    {
#line 447 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__4_15 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__implications__TypeInfo_17_17, (MR_Word) mode_robdd__implications__HeadVar__2_13, (MR_Word) mode_robdd__implications__HeadVar__3_14);
    }
#line 447 "mode_robdd.implications.m"
    mode_robdd__implications__HeadVar__4_15 = (MR_Word) mode_robdd__implications__conv0_HeadVar__4_15;
#line 447 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__4_15;
#line 447 "mode_robdd.implications.m"
  }
#line 447 "mode_robdd.implications.m"
}

#line 290 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__288__1_5_f_0_1(
#line 290 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 290 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1)
#line 290 "mode_robdd.implications.m"
{
#line 290 "mode_robdd.implications.m"
  {
#line 290 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 290 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;

#line 290 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 290 "mode_robdd.implications.m"
    {
#line 290 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mode_robdd__equiv_vars__vars_are_not_equivalent_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 5))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 290 "mode_robdd.implications.m"
    return mode_robdd__implications__succeeded;
#line 290 "mode_robdd.implications.m"
  }
#line 290 "mode_robdd.implications.m"
}

#line 288 "mode_robdd.implications.m"
static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__288__1_5_f_0(
#line 288 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_30,
#line 288 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__EQVars_5,
#line 288 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_16,
#line 288 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__4_17,
#line 288 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__5_18)
#line 288 "mode_robdd.implications.m"
{
#line 288 "mode_robdd.implications.m"
  {
#line 288 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 288 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__HeadVar__6_19;
#line 288 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_41_41;
#line 288 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_42_42;
#line 288 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_43;
#line 288 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeClassInfo_for_enum_44;
#line 288 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Vs_13;
#line 288 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_20_20;
#line 288 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_21_21;
#line 288 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_22_22;
#line 288 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__IM_28;
#line 288 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__C_29;
#line 290 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_Vs_13;
#line 289 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_46_46;
#line 289 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_47_47;
#line 289 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_48_48;
#line 289 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_49_49;

#line 288 "mode_robdd.implications.m"
    mode_robdd__implications__IM_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__5_18, (MR_Integer) 0)));
#line 288 "mode_robdd.implications.m"
    mode_robdd__implications__C_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__5_18, (MR_Integer) 1)));
#line 2479 "mode_robdd.implications.c"
    mode_robdd__implications__BaseTypeClassInfo_for_enum_43 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 2481 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_41_41 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2483 "mode_robdd.implications.c"
    {
#line 2485 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2487 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_42_42, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_41_41));
#line 2489 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_42_42, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_30));
#line 2491 "mode_robdd.implications.c"
    }
#line 2493 "mode_robdd.implications.c"
    {
#line 2495 "mode_robdd.implications.c"
      mode_robdd__implications__TypeClassInfo_for_enum_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2497 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_44, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_43));
#line 2499 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_44, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_30));
#line 2501 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_44, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_42_42));
#line 2503 "mode_robdd.implications.c"
    }
#line 290 "mode_robdd.implications.m"
    {
#line 290 "mode_robdd.implications.m"
      mode_robdd__implications__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 290 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[5]));
#line 290 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 1) = ((MR_Box) (mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__288__1_5_f_0_1));
#line 290 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 290 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_30));
#line 290 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 4) = ((MR_Box) (mode_robdd__implications__EQVars_5));
#line 290 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_20_20, 5) = ((MR_Box) (mode_robdd__implications__HeadVar__3_16));
#line 290 "mode_robdd.implications.m"
    }
#line 290 "mode_robdd.implications.m"
    {
#line 290 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_Vs_13 = mercury__sparse_bitset__filter_2_f_0(mode_robdd__implications__TypeClassInfo_for_enum_44, (MR_Word) mode_robdd__implications__V_20_20, (MR_Word) mode_robdd__implications__HeadVar__4_17);
    }
#line 290 "mode_robdd.implications.m"
    mode_robdd__implications__Vs_13 = (MR_Word) mode_robdd__implications__conv0_Vs_13;
#line 289 "mode_robdd.implications.m"
    {
#line 289 "mode_robdd.implications.m"
      mode_robdd__implications__V_21_21 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_30, mode_robdd__implications__HeadVar__3_16, mode_robdd__implications__IM_28, mode_robdd__implications__Vs_13);
    }
#line 2535 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_48_48 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 2537 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_46_46 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2539 "mode_robdd.implications.c"
    {
#line 2541 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2543 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_47_47, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_46_46));
#line 2545 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_47_47, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_30));
#line 2547 "mode_robdd.implications.c"
    }
#line 2549 "mode_robdd.implications.c"
    {
#line 2551 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2553 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_49_49, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_48_48));
#line 2555 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_49_49, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_47_47));
#line 2557 "mode_robdd.implications.c"
    }
#line 289 "mode_robdd.implications.m"
    {
#line 289 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__builtin__unify_2_p_0(mode_robdd__implications__TypeInfo_49_49, ((MR_Box) (mode_robdd__implications__Vs_13)), ((MR_Box) (mode_robdd__implications__HeadVar__4_17)));
    }
#line 289 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 289 "mode_robdd.implications.m"
      mode_robdd__implications__V_22_22 = mode_robdd__implications__C_29;
#line 289 "mode_robdd.implications.m"
    else
#line 289 "mode_robdd.implications.m"
      mode_robdd__implications__V_22_22 = (MR_Integer) 1;
#line 289 "mode_robdd.implications.m"
    {
#line 289 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__6_19 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 289 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__6_19, 0) = ((MR_Box) (mode_robdd__implications__V_21_21));
#line 289 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__6_19, 1) = ((MR_Box) (mode_robdd__implications__V_22_22));
#line 289 "mode_robdd.implications.m"
    }
#line 288 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__6_19;
#line 288 "mode_robdd.implications.m"
  }
#line 288 "mode_robdd.implications.m"
}

#line 263 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__normalise_pairs__263__1_3_f_0(
#line 263 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
#line 263 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_35,
#line 263 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_36)
#line 263 "mode_robdd.implications.m"
{
#line 263 "mode_robdd.implications.m"
  {
#line 263 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 263 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__4_37;
#line 263 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_38_38;
#line 263 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_39_39;
#line 263 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__4_37;

#line 2613 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_38_38 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2615 "mode_robdd.implications.c"
    {
#line 2617 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2619 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_39_39, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_38_38));
#line 2621 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_39_39, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 2623 "mode_robdd.implications.c"
    }
#line 263 "mode_robdd.implications.m"
    {
#line 263 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__4_37 = mercury__sparse_bitset__union_2_f_0(mode_robdd__implications__TypeInfo_39_39, (MR_Word) mode_robdd__implications__HeadVar__2_35, (MR_Word) mode_robdd__implications__HeadVar__3_36);
    }
#line 263 "mode_robdd.implications.m"
    mode_robdd__implications__HeadVar__4_37 = (MR_Word) mode_robdd__implications__conv0_HeadVar__4_37;
#line 263 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__4_37;
#line 263 "mode_robdd.implications.m"
  }
#line 263 "mode_robdd.implications.m"
}

#line 200 "mode_robdd.implications.m"
static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__200__1_5_f_0(
#line 200 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_46,
#line 200 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IsDisImp_9,
#line 200 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_32,
#line 200 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__4_33,
#line 200 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__5_34)
#line 200 "mode_robdd.implications.m"
{
#line 200 "mode_robdd.implications.m"
  {
#line 200 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 200 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__HeadVar__6_35;
#line 200 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Ts_23;
#line 200 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Fs_24;
#line 200 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__IMs_25;
#line 200 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__C_26;
#line 200 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Ts0_42;
#line 200 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Fs0_43;
#line 200 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__IMs0_44;
#line 200 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__C0_45;
#line 203 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_57_57;
#line 203 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_58_58;
#line 203 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_59;
#line 203 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeClassInfo_for_enum_60;
#line 203 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_36_36;

#line 201 "mode_robdd.implications.m"
    mode_robdd__implications__Ts0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__5_34, (MR_Integer) 0)));
#line 201 "mode_robdd.implications.m"
    mode_robdd__implications__Fs0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__5_34, (MR_Integer) 1)));
#line 201 "mode_robdd.implications.m"
    mode_robdd__implications__IMs0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__5_34, (MR_Integer) 2)));
#line 201 "mode_robdd.implications.m"
    mode_robdd__implications__C0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__5_34, (MR_Integer) 3)));
#line 203 "mode_robdd.implications.m"
    mode_robdd__implications__succeeded = (mode_robdd__implications__IsDisImp_9 == (MR_Integer) 1);
#line 203 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 203 "mode_robdd.implications.m"
      mode_robdd__implications__V_36_36 = mode_robdd__implications__Fs0_43;
#line 203 "mode_robdd.implications.m"
    else
#line 203 "mode_robdd.implications.m"
      mode_robdd__implications__V_36_36 = mode_robdd__implications__Ts0_42;
#line 2705 "mode_robdd.implications.c"
    mode_robdd__implications__BaseTypeClassInfo_for_enum_59 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 2707 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_57_57 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2709 "mode_robdd.implications.c"
    {
#line 2711 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2713 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_58_58, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_57_57));
#line 2715 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_58_58, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 2717 "mode_robdd.implications.c"
    }
#line 2719 "mode_robdd.implications.c"
    {
#line 2721 "mode_robdd.implications.c"
      mode_robdd__implications__TypeClassInfo_for_enum_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2723 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_60, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_59));
#line 2725 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_60, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 2727 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_60, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_58_58));
#line 2729 "mode_robdd.implications.c"
    }
#line 203 "mode_robdd.implications.m"
    {
#line 203 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__sparse_bitset__contains_2_p_0(mode_robdd__implications__TypeClassInfo_for_enum_60, (MR_Word) mode_robdd__implications__V_36_36, ((MR_Box) (mode_robdd__implications__HeadVar__3_32)));
    }
#line 209 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 205 "mode_robdd.implications.m"
      {
#line 205 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_61_61;
#line 205 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_62_62;
#line 205 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_63_63;
#line 205 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_64_64;
#line 205 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv0_Ts_23;
#line 207 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv1_IMs_25;

#line 2753 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_61_61 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2755 "mode_robdd.implications.c"
        {
#line 2757 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2759 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_62_62, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_61_61));
#line 2761 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_62_62, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 2763 "mode_robdd.implications.c"
        }
#line 205 "mode_robdd.implications.m"
        {
#line 205 "mode_robdd.implications.m"
          mode_robdd__implications__conv0_Ts_23 = mercury__sparse_bitset__union_2_f_0(mode_robdd__implications__TypeInfo_62_62, (MR_Word) mode_robdd__implications__Ts0_42, (MR_Word) mode_robdd__implications__HeadVar__4_33);
        }
#line 205 "mode_robdd.implications.m"
        mode_robdd__implications__Ts_23 = (MR_Word) mode_robdd__implications__conv0_Ts_23;
#line 206 "mode_robdd.implications.m"
        mode_robdd__implications__Fs_24 = mode_robdd__implications__Fs0_43;
#line 2774 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_63_63 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 2776 "mode_robdd.implications.c"
        {
#line 2778 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2780 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_64_64, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_63_63));
#line 2782 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_64_64, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_62_62));
#line 2784 "mode_robdd.implications.c"
        }
#line 207 "mode_robdd.implications.m"
        {
#line 207 "mode_robdd.implications.m"
          mode_robdd__implications__conv1_IMs_25 = mercury__map__delete_2_f_0(mode_robdd__implications__TypeInfo_62_62, mode_robdd__implications__TypeInfo_64_64, (MR_Word) mode_robdd__implications__IMs0_44, ((MR_Box) (mode_robdd__implications__HeadVar__3_32)));
        }
#line 207 "mode_robdd.implications.m"
        mode_robdd__implications__IMs_25 = (MR_Word) mode_robdd__implications__conv1_IMs_25;
#line 208 "mode_robdd.implications.m"
        mode_robdd__implications__C_26 = (MR_Integer) 1;
#line 205 "mode_robdd.implications.m"
      }
#line 209 "mode_robdd.implications.m"
    else
#line 216 "mode_robdd.implications.m"
      {
#line 210 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_65_65;
#line 210 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_66_66;
#line 210 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_67;
#line 210 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_68;
#line 210 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_37_37;

#line 210 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = (mode_robdd__implications__IsDisImp_9 == (MR_Integer) 1);
#line 210 "mode_robdd.implications.m"
        if (mode_robdd__implications__succeeded)
#line 210 "mode_robdd.implications.m"
          mode_robdd__implications__V_37_37 = mode_robdd__implications__Ts0_42;
#line 210 "mode_robdd.implications.m"
        else
#line 210 "mode_robdd.implications.m"
          mode_robdd__implications__V_37_37 = mode_robdd__implications__Fs0_43;
#line 2822 "mode_robdd.implications.c"
        mode_robdd__implications__BaseTypeClassInfo_for_enum_67 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 2824 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_65_65 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2826 "mode_robdd.implications.c"
        {
#line 2828 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2830 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_66_66, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_65_65));
#line 2832 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_66_66, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 2834 "mode_robdd.implications.c"
        }
#line 2836 "mode_robdd.implications.c"
        {
#line 2838 "mode_robdd.implications.c"
          mode_robdd__implications__TypeClassInfo_for_enum_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2840 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_68, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_67));
#line 2842 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_68, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 2844 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_68, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_66_66));
#line 2846 "mode_robdd.implications.c"
        }
#line 210 "mode_robdd.implications.m"
        {
#line 210 "mode_robdd.implications.m"
          mode_robdd__implications__succeeded = mercury__sparse_bitset__contains_2_p_0(mode_robdd__implications__TypeClassInfo_for_enum_68, (MR_Word) mode_robdd__implications__V_37_37, ((MR_Box) (mode_robdd__implications__HeadVar__3_32)));
        }
#line 216 "mode_robdd.implications.m"
        if (mode_robdd__implications__succeeded)
#line 212 "mode_robdd.implications.m"
          {
#line 212 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeCtorInfo_69_69;
#line 212 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeInfo_70_70;
#line 212 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeCtorInfo_71_71;
#line 212 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeInfo_72_72;
#line 214 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__conv2_IMs_25;

#line 212 "mode_robdd.implications.m"
            mode_robdd__implications__Ts_23 = mode_robdd__implications__Ts0_42;
#line 213 "mode_robdd.implications.m"
            mode_robdd__implications__Fs_24 = mode_robdd__implications__Fs0_43;
#line 2872 "mode_robdd.implications.c"
            mode_robdd__implications__TypeCtorInfo_69_69 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2874 "mode_robdd.implications.c"
            {
#line 2876 "mode_robdd.implications.c"
              mode_robdd__implications__TypeInfo_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2878 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_70_70, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_69_69));
#line 2880 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_70_70, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 2882 "mode_robdd.implications.c"
            }
#line 2884 "mode_robdd.implications.c"
            mode_robdd__implications__TypeCtorInfo_71_71 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 2886 "mode_robdd.implications.c"
            {
#line 2888 "mode_robdd.implications.c"
              mode_robdd__implications__TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2890 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_72_72, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_71_71));
#line 2892 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_72_72, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_70_70));
#line 2894 "mode_robdd.implications.c"
            }
#line 214 "mode_robdd.implications.m"
            {
#line 214 "mode_robdd.implications.m"
              mode_robdd__implications__conv2_IMs_25 = mercury__map__delete_2_f_0(mode_robdd__implications__TypeInfo_70_70, mode_robdd__implications__TypeInfo_72_72, (MR_Word) mode_robdd__implications__IMs0_44, ((MR_Box) (mode_robdd__implications__HeadVar__3_32)));
            }
#line 214 "mode_robdd.implications.m"
            mode_robdd__implications__IMs_25 = (MR_Word) mode_robdd__implications__conv2_IMs_25;
#line 215 "mode_robdd.implications.m"
            mode_robdd__implications__C_26 = (MR_Integer) 1;
#line 212 "mode_robdd.implications.m"
          }
#line 216 "mode_robdd.implications.m"
        else
#line 224 "mode_robdd.implications.m"
          {
#line 217 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeCtorInfo_73_73;
#line 217 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeInfo_74_74;
#line 217 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__FVs_27;
#line 217 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__conv3_FVs_27;

#line 2920 "mode_robdd.implications.c"
            mode_robdd__implications__TypeCtorInfo_73_73 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2922 "mode_robdd.implications.c"
            {
#line 2924 "mode_robdd.implications.c"
              mode_robdd__implications__TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2926 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_74_74, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_73_73));
#line 2928 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_74_74, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 2930 "mode_robdd.implications.c"
            }
#line 217 "mode_robdd.implications.m"
            {
#line 217 "mode_robdd.implications.m"
              mode_robdd__implications__conv3_FVs_27 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__implications__TypeInfo_74_74, (MR_Word) mode_robdd__implications__Fs0_43, (MR_Word) mode_robdd__implications__HeadVar__4_33);
            }
#line 217 "mode_robdd.implications.m"
            mode_robdd__implications__FVs_27 = (MR_Word) mode_robdd__implications__conv3_FVs_27;
#line 218 "mode_robdd.implications.m"
            {
#line 218 "mode_robdd.implications.m"
              mode_robdd__implications__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__implications__TypeInfo_74_74, (MR_Word) mode_robdd__implications__FVs_27);
            }
#line 218 "mode_robdd.implications.m"
            mode_robdd__implications__succeeded = !(mode_robdd__implications__succeeded);
#line 224 "mode_robdd.implications.m"
            if (mode_robdd__implications__succeeded)
#line 220 "mode_robdd.implications.m"
              {
#line 220 "mode_robdd.implications.m"
                MR_Word mode_robdd__implications__TypeCtorInfo_83_83;
#line 220 "mode_robdd.implications.m"
                MR_Word mode_robdd__implications__TypeInfo_84_84;
#line 220 "mode_robdd.implications.m"
                MR_Word mode_robdd__implications__TypeCtorInfo_85_85;
#line 220 "mode_robdd.implications.m"
                MR_Word mode_robdd__implications__TypeInfo_86_86;
#line 222 "mode_robdd.implications.m"
                MR_Word mode_robdd__implications__conv6_IMs_25;

#line 220 "mode_robdd.implications.m"
                mode_robdd__implications__succeeded = (mode_robdd__implications__IsDisImp_9 == (MR_Integer) 1);
#line 220 "mode_robdd.implications.m"
                if (mode_robdd__implications__succeeded)
#line 220 "mode_robdd.implications.m"
                  {
#line 220 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__TypeCtorInfo_75_75;
#line 220 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__TypeInfo_76_76;
#line 220 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_77;
#line 220 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__TypeClassInfo_for_enum_78;
#line 220 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__conv4_Ts_23;

#line 2978 "mode_robdd.implications.c"
                    mode_robdd__implications__BaseTypeClassInfo_for_enum_77 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 2980 "mode_robdd.implications.c"
                    mode_robdd__implications__TypeCtorInfo_75_75 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2982 "mode_robdd.implications.c"
                    {
#line 2984 "mode_robdd.implications.c"
                      mode_robdd__implications__TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2986 "mode_robdd.implications.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_76_76, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_75_75));
#line 2988 "mode_robdd.implications.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_76_76, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 2990 "mode_robdd.implications.c"
                    }
#line 2992 "mode_robdd.implications.c"
                    {
#line 2994 "mode_robdd.implications.c"
                      mode_robdd__implications__TypeClassInfo_for_enum_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2996 "mode_robdd.implications.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_78, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_77));
#line 2998 "mode_robdd.implications.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_78, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 3000 "mode_robdd.implications.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_78, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_76_76));
#line 3002 "mode_robdd.implications.c"
                    }
#line 220 "mode_robdd.implications.m"
                    {
#line 220 "mode_robdd.implications.m"
                      mode_robdd__implications__conv4_Ts_23 = mercury__sparse_bitset__insert_2_f_0(mode_robdd__implications__TypeClassInfo_for_enum_78, (MR_Word) mode_robdd__implications__Ts0_42, ((MR_Box) (mode_robdd__implications__HeadVar__3_32)));
                    }
#line 220 "mode_robdd.implications.m"
                    mode_robdd__implications__Ts_23 = (MR_Word) mode_robdd__implications__conv4_Ts_23;
#line 220 "mode_robdd.implications.m"
                  }
#line 220 "mode_robdd.implications.m"
                else
#line 220 "mode_robdd.implications.m"
                  mode_robdd__implications__Ts_23 = mode_robdd__implications__Ts0_42;
#line 221 "mode_robdd.implications.m"
                mode_robdd__implications__succeeded = (mode_robdd__implications__IsDisImp_9 == (MR_Integer) 1);
#line 221 "mode_robdd.implications.m"
                if (mode_robdd__implications__succeeded)
#line 221 "mode_robdd.implications.m"
                  mode_robdd__implications__Fs_24 = mode_robdd__implications__Fs0_43;
#line 221 "mode_robdd.implications.m"
                else
#line 221 "mode_robdd.implications.m"
                  {
#line 221 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__TypeCtorInfo_79_79;
#line 221 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__TypeInfo_80_80;
#line 221 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_81;
#line 221 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__TypeClassInfo_for_enum_82;
#line 221 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__conv5_Fs_24;

#line 3038 "mode_robdd.implications.c"
                    mode_robdd__implications__BaseTypeClassInfo_for_enum_81 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 3040 "mode_robdd.implications.c"
                    mode_robdd__implications__TypeCtorInfo_79_79 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3042 "mode_robdd.implications.c"
                    {
#line 3044 "mode_robdd.implications.c"
                      mode_robdd__implications__TypeInfo_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3046 "mode_robdd.implications.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_80_80, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_79_79));
#line 3048 "mode_robdd.implications.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_80_80, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 3050 "mode_robdd.implications.c"
                    }
#line 3052 "mode_robdd.implications.c"
                    {
#line 3054 "mode_robdd.implications.c"
                      mode_robdd__implications__TypeClassInfo_for_enum_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3056 "mode_robdd.implications.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_82, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_81));
#line 3058 "mode_robdd.implications.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_82, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 3060 "mode_robdd.implications.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_82, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_80_80));
#line 3062 "mode_robdd.implications.c"
                    }
#line 221 "mode_robdd.implications.m"
                    {
#line 221 "mode_robdd.implications.m"
                      mode_robdd__implications__conv5_Fs_24 = mercury__sparse_bitset__insert_2_f_0(mode_robdd__implications__TypeClassInfo_for_enum_82, (MR_Word) mode_robdd__implications__Fs0_43, ((MR_Box) (mode_robdd__implications__HeadVar__3_32)));
                    }
#line 221 "mode_robdd.implications.m"
                    mode_robdd__implications__Fs_24 = (MR_Word) mode_robdd__implications__conv5_Fs_24;
#line 221 "mode_robdd.implications.m"
                  }
#line 3073 "mode_robdd.implications.c"
                mode_robdd__implications__TypeCtorInfo_83_83 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3075 "mode_robdd.implications.c"
                {
#line 3077 "mode_robdd.implications.c"
                  mode_robdd__implications__TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3079 "mode_robdd.implications.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_84_84, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_83_83));
#line 3081 "mode_robdd.implications.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_84_84, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 3083 "mode_robdd.implications.c"
                }
#line 3085 "mode_robdd.implications.c"
                mode_robdd__implications__TypeCtorInfo_85_85 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 3087 "mode_robdd.implications.c"
                {
#line 3089 "mode_robdd.implications.c"
                  mode_robdd__implications__TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3091 "mode_robdd.implications.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_86_86, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_85_85));
#line 3093 "mode_robdd.implications.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_86_86, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_84_84));
#line 3095 "mode_robdd.implications.c"
                }
#line 222 "mode_robdd.implications.m"
                {
#line 222 "mode_robdd.implications.m"
                  mode_robdd__implications__conv6_IMs_25 = mercury__map__delete_2_f_0(mode_robdd__implications__TypeInfo_84_84, mode_robdd__implications__TypeInfo_86_86, (MR_Word) mode_robdd__implications__IMs0_44, ((MR_Box) (mode_robdd__implications__HeadVar__3_32)));
                }
#line 222 "mode_robdd.implications.m"
                mode_robdd__implications__IMs_25 = (MR_Word) mode_robdd__implications__conv6_IMs_25;
#line 223 "mode_robdd.implications.m"
                mode_robdd__implications__C_26 = (MR_Integer) 1;
#line 220 "mode_robdd.implications.m"
              }
#line 224 "mode_robdd.implications.m"
            else
#line 237 "mode_robdd.implications.m"
              {
#line 237 "mode_robdd.implications.m"
                MR_Word mode_robdd__implications__TVs_28;
#line 225 "mode_robdd.implications.m"
                MR_Word mode_robdd__implications__TypeCtorInfo_87_87;
#line 225 "mode_robdd.implications.m"
                MR_Word mode_robdd__implications__TypeInfo_88_88;
#line 225 "mode_robdd.implications.m"
                MR_Word mode_robdd__implications__conv7_TVs_28;

#line 3121 "mode_robdd.implications.c"
                mode_robdd__implications__TypeCtorInfo_87_87 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3123 "mode_robdd.implications.c"
                {
#line 3125 "mode_robdd.implications.c"
                  mode_robdd__implications__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3127 "mode_robdd.implications.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_88_88, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_87_87));
#line 3129 "mode_robdd.implications.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_88_88, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 3131 "mode_robdd.implications.c"
                }
#line 225 "mode_robdd.implications.m"
                {
#line 225 "mode_robdd.implications.m"
                  mode_robdd__implications__conv7_TVs_28 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__implications__TypeInfo_88_88, (MR_Word) mode_robdd__implications__Ts0_42, (MR_Word) mode_robdd__implications__HeadVar__4_33);
                }
#line 225 "mode_robdd.implications.m"
                mode_robdd__implications__TVs_28 = (MR_Word) mode_robdd__implications__conv7_TVs_28;
#line 226 "mode_robdd.implications.m"
                {
#line 226 "mode_robdd.implications.m"
                  mode_robdd__implications__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__implications__TypeInfo_88_88, (MR_Word) mode_robdd__implications__TVs_28);
                }
#line 226 "mode_robdd.implications.m"
                mode_robdd__implications__succeeded = !(mode_robdd__implications__succeeded);
#line 237 "mode_robdd.implications.m"
                if (mode_robdd__implications__succeeded)
#line 228 "mode_robdd.implications.m"
                  {
#line 228 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__TypeCtorInfo_89_89;
#line 228 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__TypeInfo_90_90;
#line 228 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__UTVs_29;
#line 230 "mode_robdd.implications.m"
                    MR_Word mode_robdd__implications__conv8_UTVs_29;

#line 228 "mode_robdd.implications.m"
                    mode_robdd__implications__Ts_23 = mode_robdd__implications__Ts0_42;
#line 229 "mode_robdd.implications.m"
                    mode_robdd__implications__Fs_24 = mode_robdd__implications__Fs0_43;
#line 3164 "mode_robdd.implications.c"
                    mode_robdd__implications__TypeCtorInfo_89_89 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3166 "mode_robdd.implications.c"
                    {
#line 3168 "mode_robdd.implications.c"
                      mode_robdd__implications__TypeInfo_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3170 "mode_robdd.implications.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_90_90, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_89_89));
#line 3172 "mode_robdd.implications.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_90_90, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 3174 "mode_robdd.implications.c"
                    }
#line 230 "mode_robdd.implications.m"
                    {
#line 230 "mode_robdd.implications.m"
                      mode_robdd__implications__conv8_UTVs_29 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__implications__TypeInfo_90_90, (MR_Word) mode_robdd__implications__HeadVar__4_33, (MR_Word) mode_robdd__implications__TVs_28);
                    }
#line 230 "mode_robdd.implications.m"
                    mode_robdd__implications__UTVs_29 = (MR_Word) mode_robdd__implications__conv8_UTVs_29;
#line 231 "mode_robdd.implications.m"
                    {
#line 231 "mode_robdd.implications.m"
                      mode_robdd__implications__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__implications__TypeInfo_90_90, (MR_Word) mode_robdd__implications__UTVs_29);
                    }
#line 231 "mode_robdd.implications.m"
                    if (mode_robdd__implications__succeeded)
#line 232 "mode_robdd.implications.m"
                      {
#line 232 "mode_robdd.implications.m"
                        MR_Word mode_robdd__implications__TypeCtorInfo_91_91;
#line 232 "mode_robdd.implications.m"
                        MR_Word mode_robdd__implications__TypeInfo_92_92;
#line 232 "mode_robdd.implications.m"
                        MR_Word mode_robdd__implications__conv9_IMs_25;

#line 3199 "mode_robdd.implications.c"
                        mode_robdd__implications__TypeCtorInfo_91_91 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 3201 "mode_robdd.implications.c"
                        {
#line 3203 "mode_robdd.implications.c"
                          mode_robdd__implications__TypeInfo_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3205 "mode_robdd.implications.c"
                          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_92_92, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_91_91));
#line 3207 "mode_robdd.implications.c"
                          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_92_92, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_90_90));
#line 3209 "mode_robdd.implications.c"
                        }
#line 232 "mode_robdd.implications.m"
                        {
#line 232 "mode_robdd.implications.m"
                          mode_robdd__implications__conv9_IMs_25 = mercury__map__delete_2_f_0(mode_robdd__implications__TypeInfo_90_90, mode_robdd__implications__TypeInfo_92_92, (MR_Word) mode_robdd__implications__IMs0_44, ((MR_Box) (mode_robdd__implications__HeadVar__3_32)));
                        }
#line 232 "mode_robdd.implications.m"
                        mode_robdd__implications__IMs_25 = (MR_Word) mode_robdd__implications__conv9_IMs_25;
#line 232 "mode_robdd.implications.m"
                      }
#line 231 "mode_robdd.implications.m"
                    else
#line 231 "mode_robdd.implications.m"
                      {
#line 231 "mode_robdd.implications.m"
                        MR_Word mode_robdd__implications__TypeCtorInfo_93_93;
#line 231 "mode_robdd.implications.m"
                        MR_Word mode_robdd__implications__TypeInfo_94_94;
#line 231 "mode_robdd.implications.m"
                        MR_Word mode_robdd__implications__conv10_IMs_25;

#line 3231 "mode_robdd.implications.c"
                        mode_robdd__implications__TypeCtorInfo_93_93 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 3233 "mode_robdd.implications.c"
                        {
#line 3235 "mode_robdd.implications.c"
                          mode_robdd__implications__TypeInfo_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3237 "mode_robdd.implications.c"
                          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_94_94, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_93_93));
#line 3239 "mode_robdd.implications.c"
                          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_94_94, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_90_90));
#line 3241 "mode_robdd.implications.c"
                        }
#line 231 "mode_robdd.implications.m"
                        {
#line 231 "mode_robdd.implications.m"
                          mode_robdd__implications__conv10_IMs_25 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_90_90, mode_robdd__implications__TypeInfo_94_94, ((MR_Box) (mode_robdd__implications__HeadVar__3_32)), (MR_Word) mode_robdd__implications__IMs0_44, ((MR_Box) (mode_robdd__implications__UTVs_29)));
                        }
#line 231 "mode_robdd.implications.m"
                        mode_robdd__implications__IMs_25 = (MR_Word) mode_robdd__implications__conv10_IMs_25;
#line 231 "mode_robdd.implications.m"
                      }
#line 236 "mode_robdd.implications.m"
                    mode_robdd__implications__C_26 = (MR_Integer) 1;
#line 228 "mode_robdd.implications.m"
                  }
#line 237 "mode_robdd.implications.m"
                else
#line 238 "mode_robdd.implications.m"
                  {
#line 238 "mode_robdd.implications.m"
                    mode_robdd__implications__Ts_23 = mode_robdd__implications__Ts0_42;
#line 239 "mode_robdd.implications.m"
                    mode_robdd__implications__Fs_24 = mode_robdd__implications__Fs0_43;
#line 240 "mode_robdd.implications.m"
                    mode_robdd__implications__IMs_25 = mode_robdd__implications__IMs0_44;
#line 241 "mode_robdd.implications.m"
                    mode_robdd__implications__C_26 = mode_robdd__implications__C0_45;
#line 238 "mode_robdd.implications.m"
                  }
#line 237 "mode_robdd.implications.m"
              }
#line 224 "mode_robdd.implications.m"
          }
#line 216 "mode_robdd.implications.m"
      }
#line 201 "mode_robdd.implications.m"
    {
#line 201 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__6_35 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 201 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__6_35, 0) = ((MR_Box) (mode_robdd__implications__Ts_23));
#line 201 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__6_35, 1) = ((MR_Box) (mode_robdd__implications__Fs_24));
#line 201 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__6_35, 2) = ((MR_Box) (mode_robdd__implications__IMs_25));
#line 201 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__6_35, 3) = ((MR_Box) (mode_robdd__implications__C_26));
#line 201 "mode_robdd.implications.m"
    }
#line 200 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__6_35;
#line 200 "mode_robdd.implications.m"
  }
#line 200 "mode_robdd.implications.m"
}

#line 123 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__filter_imp_map__123__1_5_f_0(
#line 123 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
#line 123 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__P_4,
#line 123 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_10,
#line 123 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__4_11,
#line 123 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__5_12)
#line 123 "mode_robdd.implications.m"
{
#line 123 "mode_robdd.implications.m"
  {
#line 123 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 123 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__6_13;
#line 124 "mode_robdd.implications.m"
    MR_bool MR_CALL (* mode_robdd__implications__func_0)(MR_Box, MR_Box);

#line 124 "mode_robdd.implications.m"
    mode_robdd__implications__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__P_4, (MR_Integer) 1)));
#line 124 "mode_robdd.implications.m"
    {
#line 124 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mode_robdd__implications__func_0(((MR_Box) mode_robdd__implications__P_4), ((MR_Box) (mode_robdd__implications__HeadVar__3_10)));
    }
#line 123 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 123 "mode_robdd.implications.m"
      {
#line 123 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_26_26;
#line 123 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_27_27;
#line 123 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_28;
#line 123 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_29;
#line 123 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_14_14;
#line 125 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv1_V_14_14;

#line 3345 "mode_robdd.implications.c"
        mode_robdd__implications__BaseTypeClassInfo_for_enum_28 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 3347 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_26_26 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3349 "mode_robdd.implications.c"
        {
#line 3351 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3353 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_27_27, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_26_26));
#line 3355 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_27_27, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 3357 "mode_robdd.implications.c"
        }
#line 3359 "mode_robdd.implications.c"
        {
#line 3361 "mode_robdd.implications.c"
          mode_robdd__implications__TypeClassInfo_for_enum_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3363 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_29, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_28));
#line 3365 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_29, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 3367 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_29, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_27_27));
#line 3369 "mode_robdd.implications.c"
        }
#line 125 "mode_robdd.implications.m"
        {
#line 125 "mode_robdd.implications.m"
          mode_robdd__implications__conv1_V_14_14 = mercury__sparse_bitset__filter_2_f_0(mode_robdd__implications__TypeClassInfo_for_enum_29, (MR_Word) mode_robdd__implications__P_4, (MR_Word) mode_robdd__implications__HeadVar__4_11);
        }
#line 125 "mode_robdd.implications.m"
        mode_robdd__implications__V_14_14 = (MR_Word) mode_robdd__implications__conv1_V_14_14;
#line 123 "mode_robdd.implications.m"
        {
#line 123 "mode_robdd.implications.m"
          mode_robdd__implications__HeadVar__6_13 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_19, mode_robdd__implications__HeadVar__3_10, mode_robdd__implications__HeadVar__5_12, mode_robdd__implications__V_14_14);
        }
#line 123 "mode_robdd.implications.m"
      }
#line 123 "mode_robdd.implications.m"
    else
#line 127 "mode_robdd.implications.m"
      {
#line 127 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_30_30;
#line 127 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_31_31;
#line 127 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_32_32;
#line 127 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_33_33;
#line 127 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv2_HeadVar__6_13;

#line 3400 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_30_30 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3402 "mode_robdd.implications.c"
        {
#line 3404 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3406 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_31_31, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_30_30));
#line 3408 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_31_31, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 3410 "mode_robdd.implications.c"
        }
#line 3412 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_32_32 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 3414 "mode_robdd.implications.c"
        {
#line 3416 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3418 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_33_33, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_32_32));
#line 3420 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_33_33, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_31_31));
#line 3422 "mode_robdd.implications.c"
        }
#line 127 "mode_robdd.implications.m"
        {
#line 127 "mode_robdd.implications.m"
          mode_robdd__implications__conv2_HeadVar__6_13 = mercury__map__delete_2_f_0(mode_robdd__implications__TypeInfo_31_31, mode_robdd__implications__TypeInfo_33_33, (MR_Word) mode_robdd__implications__HeadVar__5_12, ((MR_Box) (mode_robdd__implications__HeadVar__3_10)));
        }
#line 127 "mode_robdd.implications.m"
        mode_robdd__implications__HeadVar__6_13 = (MR_Word) mode_robdd__implications__conv2_HeadVar__6_13;
#line 127 "mode_robdd.implications.m"
      }
#line 123 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__6_13;
#line 123 "mode_robdd.implications.m"
  }
#line 123 "mode_robdd.implications.m"
}

#line 363 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__add_equalities_to_imp_vars__363__1_4_f_0(
#line 363 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
#line 363 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_10,
#line 363 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_11,
#line 363 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__4_12)
#line 363 "mode_robdd.implications.m"
{
#line 363 "mode_robdd.implications.m"
  {
#line 363 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 363 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__5_13;
#line 363 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_14_14;

#line 363 "mode_robdd.implications.m"
    {
#line 363 "mode_robdd.implications.m"
      mode_robdd__implications__V_14_14 = mode_robdd__implications__imp_vars_3_f_0(mode_robdd__implications__TypeInfo_for_T_19, mode_robdd__implications__HeadVar__2_10, mode_robdd__implications__HeadVar__3_11, mode_robdd__implications__HeadVar__4_12);
    }
#line 363 "mode_robdd.implications.m"
    {
#line 363 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__5_13 = mode_robdd__implications__imp_vars_3_f_0(mode_robdd__implications__TypeInfo_for_T_19, mode_robdd__implications__HeadVar__3_11, mode_robdd__implications__HeadVar__2_10, mode_robdd__implications__V_14_14);
    }
#line 363 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__5_13;
#line 363 "mode_robdd.implications.m"
  }
#line 363 "mode_robdd.implications.m"
}

#line 318 "mode_robdd.implications.m"
static MR_Tuple MR_CALL 
mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__318__1_4_f_0(
#line 318 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_46,
#line 318 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_31,
#line 318 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_32,
#line 318 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__4_33)
#line 318 "mode_robdd.implications.m"
{
#line 318 "mode_robdd.implications.m"
  {
#line 318 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 318 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__HeadVar__5_34;
#line 318 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__C_23;
#line 318 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__E_24;
#line 318 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__I_25;
#line 318 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__R_26;
#line 318 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__C0_42;
#line 318 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__E0_43;
#line 318 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__I0_44;
#line 318 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__R0_45;
#line 329 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RVs_27;
#line 329 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__EVs_28;
#line 321 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_67_67;
#line 321 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_68_68;
#line 321 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_69_69;
#line 321 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_70_70;
#line 321 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv0_RVs_27;
#line 322 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv1_EVs_28;

#line 319 "mode_robdd.implications.m"
    mode_robdd__implications__C0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__4_33, (MR_Integer) 0)));
#line 319 "mode_robdd.implications.m"
    mode_robdd__implications__E0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__4_33, (MR_Integer) 1)));
#line 319 "mode_robdd.implications.m"
    mode_robdd__implications__I0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__4_33, (MR_Integer) 2)));
#line 319 "mode_robdd.implications.m"
    mode_robdd__implications__R0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__4_33, (MR_Integer) 3)));
#line 3539 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_67_67 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3541 "mode_robdd.implications.c"
    {
#line 3543 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3545 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_68_68, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_67_67));
#line 3547 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_68_68, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 3549 "mode_robdd.implications.c"
    }
#line 3551 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_69_69 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 3553 "mode_robdd.implications.c"
    {
#line 3555 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3557 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_70_70, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_69_69));
#line 3559 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_70_70, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_68_68));
#line 3561 "mode_robdd.implications.c"
    }
#line 321 "mode_robdd.implications.m"
    {
#line 321 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__map__elem_2_f_0(mode_robdd__implications__TypeInfo_68_68, mode_robdd__implications__TypeInfo_70_70, ((MR_Box) (mode_robdd__implications__HeadVar__2_31)), (MR_Word) mode_robdd__implications__R0_45, &mode_robdd__implications__conv0_RVs_27);
    }
#line 321 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 321 "mode_robdd.implications.m"
      {
#line 321 "mode_robdd.implications.m"
        mode_robdd__implications__RVs_27 = ((MR_Word) mode_robdd__implications__conv0_RVs_27);
#line 321 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = MR_TRUE;
#line 321 "mode_robdd.implications.m"
      }
#line 321 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 321 "mode_robdd.implications.m"
      {
#line 322 "mode_robdd.implications.m"
        {
#line 322 "mode_robdd.implications.m"
          mode_robdd__implications__conv1_EVs_28 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__implications__TypeInfo_68_68, (MR_Word) mode_robdd__implications__HeadVar__3_32, (MR_Word) mode_robdd__implications__RVs_27);
        }
#line 322 "mode_robdd.implications.m"
        mode_robdd__implications__EVs_28 = (MR_Word) mode_robdd__implications__conv1_EVs_28;
#line 323 "mode_robdd.implications.m"
        {
#line 323 "mode_robdd.implications.m"
          mode_robdd__implications__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__implications__TypeInfo_68_68, (MR_Word) mode_robdd__implications__EVs_28);
        }
#line 323 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = !(mode_robdd__implications__succeeded);
#line 321 "mode_robdd.implications.m"
      }
#line 329 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 325 "mode_robdd.implications.m"
      {
#line 325 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_71_71;
#line 325 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_72_72;
#line 325 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_73;
#line 325 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_74;
#line 325 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_35_35;
#line 325 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_36_36;
#line 325 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_37_37;
#line 326 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv2_V_35_35;
#line 327 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv3_V_36_36;
#line 328 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv4_V_37_37;

#line 325 "mode_robdd.implications.m"
        mode_robdd__implications__C_23 = (MR_Integer) 1;
#line 3625 "mode_robdd.implications.c"
        mode_robdd__implications__BaseTypeClassInfo_for_enum_73 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 3627 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_71_71 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3629 "mode_robdd.implications.c"
        {
#line 3631 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3633 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_72_72, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_71_71));
#line 3635 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_72_72, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 3637 "mode_robdd.implications.c"
        }
#line 3639 "mode_robdd.implications.c"
        {
#line 3641 "mode_robdd.implications.c"
          mode_robdd__implications__TypeClassInfo_for_enum_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3643 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_74, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_73));
#line 3645 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_74, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 3647 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_74, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_72_72));
#line 3649 "mode_robdd.implications.c"
        }
#line 326 "mode_robdd.implications.m"
        {
#line 326 "mode_robdd.implications.m"
          mode_robdd__implications__conv2_V_35_35 = mercury__sparse_bitset__insert_2_f_0(mode_robdd__implications__TypeClassInfo_for_enum_74, (MR_Word) mode_robdd__implications__EVs_28, ((MR_Box) (mode_robdd__implications__HeadVar__2_31)));
        }
#line 326 "mode_robdd.implications.m"
        mode_robdd__implications__V_35_35 = (MR_Word) mode_robdd__implications__conv2_V_35_35;
#line 326 "mode_robdd.implications.m"
        {
#line 326 "mode_robdd.implications.m"
          mode_robdd__implications__E_24 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__implications__TypeInfo_for_T_46, mode_robdd__implications__V_35_35, mode_robdd__implications__E0_43);
        }
#line 327 "mode_robdd.implications.m"
        {
#line 327 "mode_robdd.implications.m"
          mode_robdd__implications__conv3_V_36_36 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__implications__TypeInfo_72_72, (MR_Word) mode_robdd__implications__HeadVar__3_32, (MR_Word) mode_robdd__implications__RVs_27);
        }
#line 327 "mode_robdd.implications.m"
        mode_robdd__implications__V_36_36 = (MR_Word) mode_robdd__implications__conv3_V_36_36;
#line 327 "mode_robdd.implications.m"
        {
#line 327 "mode_robdd.implications.m"
          mode_robdd__implications__I_25 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_46, mode_robdd__implications__HeadVar__2_31, mode_robdd__implications__I0_44, mode_robdd__implications__V_36_36);
        }
#line 328 "mode_robdd.implications.m"
        {
#line 328 "mode_robdd.implications.m"
          mode_robdd__implications__conv4_V_37_37 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__implications__TypeInfo_72_72, (MR_Word) mode_robdd__implications__RVs_27, (MR_Word) mode_robdd__implications__HeadVar__3_32);
        }
#line 328 "mode_robdd.implications.m"
        mode_robdd__implications__V_37_37 = (MR_Word) mode_robdd__implications__conv4_V_37_37;
#line 328 "mode_robdd.implications.m"
        {
#line 328 "mode_robdd.implications.m"
          mode_robdd__implications__R_26 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_46, mode_robdd__implications__HeadVar__2_31, mode_robdd__implications__R0_45, mode_robdd__implications__V_37_37);
        }
#line 325 "mode_robdd.implications.m"
      }
#line 329 "mode_robdd.implications.m"
    else
#line 330 "mode_robdd.implications.m"
      {
#line 330 "mode_robdd.implications.m"
        mode_robdd__implications__C_23 = mode_robdd__implications__C0_42;
#line 330 "mode_robdd.implications.m"
        mode_robdd__implications__E_24 = mode_robdd__implications__E0_43;
#line 330 "mode_robdd.implications.m"
        mode_robdd__implications__I_25 = mode_robdd__implications__I0_44;
#line 330 "mode_robdd.implications.m"
        mode_robdd__implications__R_26 = mode_robdd__implications__R0_45;
#line 330 "mode_robdd.implications.m"
      }
#line 319 "mode_robdd.implications.m"
    {
#line 319 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__5_34 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 319 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__5_34, 0) = ((MR_Box) (mode_robdd__implications__C_23));
#line 319 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__5_34, 1) = ((MR_Box) (mode_robdd__implications__E_24));
#line 319 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__5_34, 2) = ((MR_Box) (mode_robdd__implications__I_25));
#line 319 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__5_34, 3) = ((MR_Box) (mode_robdd__implications__R_26));
#line 319 "mode_robdd.implications.m"
    }
#line 318 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__5_34;
#line 318 "mode_robdd.implications.m"
  }
#line 318 "mode_robdd.implications.m"
}

#line 101 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__IntroducedFrom__func__restrict_threshold__101__1_3_f_0(
#line 101 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_13,
#line 101 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Threshold_4,
#line 101 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_8)
#line 101 "mode_robdd.implications.m"
{
#line 101 "mode_robdd.implications.m"
  {
#line 101 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 101 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__4_9;
#line 101 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_14_14;
#line 101 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_15_15;
#line 101 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_16_16;
#line 101 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_17_17;
#line 101 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_10_10;
#line 101 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_11_11;
#line 102 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_V_10_10;
#line 102 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv1_V_11_11;

#line 3758 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_14_14 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3760 "mode_robdd.implications.c"
    {
#line 3762 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3764 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_15_15, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_14_14));
#line 3766 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_15_15, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_13));
#line 3768 "mode_robdd.implications.c"
    }
#line 3770 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_16_16 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 3772 "mode_robdd.implications.c"
    {
#line 3774 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3776 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_16_16));
#line 3778 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_15_15));
#line 3780 "mode_robdd.implications.c"
    }
#line 102 "mode_robdd.implications.m"
    {
#line 102 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_V_10_10 = mercury__map__to_assoc_list_1_f_0(mode_robdd__implications__TypeInfo_15_15, mode_robdd__implications__TypeInfo_17_17, (MR_Word) mode_robdd__implications__HeadVar__3_8);
    }
#line 102 "mode_robdd.implications.m"
    mode_robdd__implications__V_10_10 = (MR_Word) mode_robdd__implications__conv0_V_10_10;
#line 102 "mode_robdd.implications.m"
    {
#line 102 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_V_11_11 = mercury__map__init_0_f_0(mode_robdd__implications__TypeInfo_15_15, mode_robdd__implications__TypeInfo_17_17);
    }
#line 102 "mode_robdd.implications.m"
    mode_robdd__implications__V_11_11 = (MR_Word) mode_robdd__implications__conv1_V_11_11;
#line 102 "mode_robdd.implications.m"
    {
#line 102 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__4_9 = mode_robdd__implications__restrict_threshold_2_3_f_0(mode_robdd__implications__TypeInfo_for_T_13, mode_robdd__implications__Threshold_4, mode_robdd__implications__V_10_10, mode_robdd__implications__V_11_11);
    }
#line 101 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__4_9;
#line 101 "mode_robdd.implications.m"
  }
#line 101 "mode_robdd.implications.m"
}

#line 510 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications____Compare____mklit_1_0(
#line 510 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_6,
#line 510 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__HeadVar__1_1,
#line 510 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_2,
#line 510 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_3)
#line 510 "mode_robdd.implications.m"
{
#line 510 "mode_robdd.implications.m"
  {
#line 510 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 510 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_7_7;
#line 510 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_8_8;
#line 510 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_9_9;
#line 510 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_10_10;
#line 510 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_11_11;
#line 510 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_13_13;
#line 510 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Cast_HeadVar1_4;
#line 510 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Cast_HeadVar2_5;
#line 510 "mode_robdd.implications.m"
    MR_Integer mode_robdd__implications__PolyConst2_12;

#line 510 "mode_robdd.implications.m"
    mode_robdd__implications__Cast_HeadVar1_4 = mode_robdd__implications__HeadVar__2_2;
#line 510 "mode_robdd.implications.m"
    mode_robdd__implications__Cast_HeadVar2_5 = mode_robdd__implications__HeadVar__3_3;
#line 3848 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_func_0;
#line 3850 "mode_robdd.implications.c"
    mode_robdd__implications__PolyConst2_12 = (MR_Integer) 2;
#line 3852 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_7_7 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3854 "mode_robdd.implications.c"
    {
#line 3856 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3858 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_8_8, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_7_7));
#line 3860 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_8_8, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_6));
#line 3862 "mode_robdd.implications.c"
    }
#line 3864 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_9_9 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
#line 3866 "mode_robdd.implications.c"
    {
#line 3868 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3870 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_9_9));
#line 3872 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_6));
#line 3874 "mode_robdd.implications.c"
    }
#line 3876 "mode_robdd.implications.c"
    {
#line 3878 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 3880 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_13_13, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_11_11));
#line 3882 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_13_13, 1) = ((MR_Box) (mode_robdd__implications__PolyConst2_12));
#line 3884 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_13_13, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_8_8));
#line 3886 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_13_13, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_10_10));
#line 3888 "mode_robdd.implications.c"
    }
#line 510 "mode_robdd.implications.m"
    {
#line 510 "mode_robdd.implications.m"
      mercury__builtin__compare_3_p_0(mode_robdd__implications__TypeInfo_13_13, mode_robdd__implications__HeadVar__1_1, ((MR_Box) (mode_robdd__implications__Cast_HeadVar1_4)), ((MR_Box) (mode_robdd__implications__Cast_HeadVar2_5)));
    }
#line 510 "mode_robdd.implications.m"
  }
#line 510 "mode_robdd.implications.m"
}

#line 510 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications____Unify____mklit_1_0(
#line 510 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_5,
#line 510 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__1_1,
#line 510 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_2)
#line 510 "mode_robdd.implications.m"
{
#line 510 "mode_robdd.implications.m"
  {
#line 510 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 510 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Cast_HeadVar1_3;
#line 510 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Cast_HeadVar2_4;

#line 510 "mode_robdd.implications.m"
    mode_robdd__implications__Cast_HeadVar1_3 = mode_robdd__implications__HeadVar__1_1;
#line 510 "mode_robdd.implications.m"
    mode_robdd__implications__Cast_HeadVar2_4 = mode_robdd__implications__HeadVar__2_2;
#line 510 "mode_robdd.implications.m"
    {
#line 510 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mode_robdd__implications__Cast_HeadVar1_3, (MR_Word) mode_robdd__implications__Cast_HeadVar2_4);
    }
#line 510 "mode_robdd.implications.m"
    return mode_robdd__implications__succeeded;
#line 510 "mode_robdd.implications.m"
  }
#line 510 "mode_robdd.implications.m"
}

#line 245 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications____Compare____extract_0_0(
#line 245 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__HeadVar__1_1,
#line 245 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_2,
#line 245 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__3_3)
#line 245 "mode_robdd.implications.m"
{
#line 245 "mode_robdd.implications.m"
  {
#line 245 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 245 "mode_robdd.implications.m"
    MR_Integer mode_robdd__implications__Cast_HeadVar1_4;
#line 245 "mode_robdd.implications.m"
    MR_Integer mode_robdd__implications__Cast_HeadVar2_5;

#line 245 "mode_robdd.implications.m"
    mode_robdd__implications__Cast_HeadVar1_4 = (MR_Integer) mode_robdd__implications__HeadVar__2_2;
#line 245 "mode_robdd.implications.m"
    mode_robdd__implications__Cast_HeadVar2_5 = (MR_Integer) mode_robdd__implications__HeadVar__3_3;
#line 245 "mode_robdd.implications.m"
    {
#line 245 "mode_robdd.implications.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mode_robdd__implications__HeadVar__1_1, mode_robdd__implications__Cast_HeadVar1_4, mode_robdd__implications__Cast_HeadVar2_5);
    }
#line 245 "mode_robdd.implications.m"
  }
#line 245 "mode_robdd.implications.m"
}

#line 245 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications____Unify____extract_0_0(
#line 245 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_1,
#line 245 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_2)
#line 245 "mode_robdd.implications.m"
{
#line 3979 "mode_robdd.implications.c"
  {
#line 3981 "mode_robdd.implications.c"
    MR_bool mode_robdd__implications__succeeded;

#line 3984 "mode_robdd.implications.c"
    mode_robdd__implications__succeeded = (mode_robdd__implications__HeadVar__2_1 == mode_robdd__implications__HeadVar__2_2);
#line 3986 "mode_robdd.implications.c"
    return mode_robdd__implications__succeeded;
#line 3988 "mode_robdd.implications.c"
  }
#line 245 "mode_robdd.implications.m"
}

#line 520 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications____Compare____bin_clause_1_0(
#line 520 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_6,
#line 520 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__HeadVar__1_1,
#line 520 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__2_2,
#line 520 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__3_3)
#line 520 "mode_robdd.implications.m"
{
#line 520 "mode_robdd.implications.m"
  {
#line 520 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 520 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_7_7;
#line 520 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_8_8;
#line 520 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_9_9;
#line 520 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_11_11;
#line 520 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__Cast_HeadVar1_4;
#line 520 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__Cast_HeadVar2_5;
#line 520 "mode_robdd.implications.m"
    MR_Integer mode_robdd__implications__PolyConst2_10;

#line 520 "mode_robdd.implications.m"
    mode_robdd__implications__Cast_HeadVar1_4 = mode_robdd__implications__HeadVar__2_2;
#line 520 "mode_robdd.implications.m"
    mode_robdd__implications__Cast_HeadVar2_5 = mode_robdd__implications__HeadVar__3_3;
#line 4029 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 4031 "mode_robdd.implications.c"
    mode_robdd__implications__PolyConst2_10 = (MR_Integer) 2;
#line 4033 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_7_7 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
#line 4035 "mode_robdd.implications.c"
    {
#line 4037 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4039 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_8_8, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_7_7));
#line 4041 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_8_8, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_6));
#line 4043 "mode_robdd.implications.c"
    }
#line 4045 "mode_robdd.implications.c"
    {
#line 4047 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 4049 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_11_11, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_9_9));
#line 4051 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_11_11, 1) = ((MR_Box) (mode_robdd__implications__PolyConst2_10));
#line 4053 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_11_11, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_8_8));
#line 4055 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_11_11, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_8_8));
#line 4057 "mode_robdd.implications.c"
    }
#line 520 "mode_robdd.implications.m"
    {
#line 520 "mode_robdd.implications.m"
      mercury__builtin__compare_3_p_0(mode_robdd__implications__TypeInfo_11_11, mode_robdd__implications__HeadVar__1_1, ((MR_Box) (mode_robdd__implications__Cast_HeadVar1_4)), ((MR_Box) (mode_robdd__implications__Cast_HeadVar2_5)));
    }
#line 520 "mode_robdd.implications.m"
  }
#line 520 "mode_robdd.implications.m"
}

#line 520 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications____Unify____bin_clause_1_0(
#line 520 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_5,
#line 520 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__1_1,
#line 520 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__2_2)
#line 520 "mode_robdd.implications.m"
{
#line 520 "mode_robdd.implications.m"
  {
#line 520 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 520 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_6_6;
#line 520 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_7_7;
#line 520 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_8_8;
#line 520 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_10_10;
#line 520 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__Cast_HeadVar1_3;
#line 520 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__Cast_HeadVar2_4;
#line 520 "mode_robdd.implications.m"
    MR_Integer mode_robdd__implications__PolyConst2_9;

#line 520 "mode_robdd.implications.m"
    mode_robdd__implications__Cast_HeadVar1_3 = mode_robdd__implications__HeadVar__1_1;
#line 520 "mode_robdd.implications.m"
    mode_robdd__implications__Cast_HeadVar2_4 = mode_robdd__implications__HeadVar__2_2;
#line 4103 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 4105 "mode_robdd.implications.c"
    mode_robdd__implications__PolyConst2_9 = (MR_Integer) 2;
#line 4107 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_6_6 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
#line 4109 "mode_robdd.implications.c"
    {
#line 4111 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4113 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_7_7, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_6_6));
#line 4115 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_7_7, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_5));
#line 4117 "mode_robdd.implications.c"
    }
#line 4119 "mode_robdd.implications.c"
    {
#line 4121 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 4123 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_8_8));
#line 4125 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__implications__PolyConst2_9));
#line 4127 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_7_7));
#line 4129 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_7_7));
#line 4131 "mode_robdd.implications.c"
    }
#line 520 "mode_robdd.implications.m"
    {
#line 520 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__builtin__unify_2_p_0(mode_robdd__implications__TypeInfo_10_10, ((MR_Box) (mode_robdd__implications__Cast_HeadVar1_3)), ((MR_Box) (mode_robdd__implications__Cast_HeadVar2_4)));
    }
#line 520 "mode_robdd.implications.m"
    return mode_robdd__implications__succeeded;
#line 520 "mode_robdd.implications.m"
  }
#line 520 "mode_robdd.implications.m"
}

#line 587 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__add_imp_map_clauses_4_f_0_1(
#line 587 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 587 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 587 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 587 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3)
#line 587 "mode_robdd.implications.m"
{
#line 587 "mode_robdd.implications.m"
  {
#line 587 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_4;
#line 587 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 587 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__7_19;

#line 587 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 587 "mode_robdd.implications.m"
    {
#line 587 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__7_19 = mode_robdd__implications__IntroducedFrom__func__add_imp_map_clauses__587__1_6_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 5))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Word) mode_robdd__implications__wrapper_arg_3));
    }
#line 587 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__7_19));
#line 587 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_4;
#line 587 "mode_robdd.implications.m"
  }
#line 587 "mode_robdd.implications.m"
}

#line 583 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__add_imp_map_clauses_4_f_0(
#line 583 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_32,
#line 583 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__MkLitA_6,
#line 583 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__MkLitB_7,
#line 583 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IM_8,
#line 583 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_9)
#line 583 "mode_robdd.implications.m"
{
#line 586 "mode_robdd.implications.m"
  {
#line 586 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 586 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__5_5;
#line 586 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_33_33;
#line 586 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_34_34;
#line 586 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_35_35;
#line 586 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_36_36;
#line 586 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_37_37;
#line 586 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_38_38;
#line 586 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_15_15;
#line 587 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv1_HeadVar__5_5;

#line 4221 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_33_33 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 4223 "mode_robdd.implications.c"
    {
#line 4225 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4227 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_34_34, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_33_33));
#line 4229 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_34_34, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
#line 4231 "mode_robdd.implications.c"
    }
#line 4233 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_35_35 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 4235 "mode_robdd.implications.c"
    {
#line 4237 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4239 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_36_36, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_35_35));
#line 4241 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_36_36, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_34_34));
#line 4243 "mode_robdd.implications.c"
    }
#line 4245 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_37_37 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_imp_vars_1;
#line 4247 "mode_robdd.implications.c"
    {
#line 4249 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4251 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_38_38, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_37_37));
#line 4253 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_38_38, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
#line 4255 "mode_robdd.implications.c"
    }
#line 587 "mode_robdd.implications.m"
    {
#line 587 "mode_robdd.implications.m"
      mode_robdd__implications__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 587 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_6[0]));
#line 587 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 1) = ((MR_Box) (mode_robdd__implications__add_imp_map_clauses_4_f_0_1));
#line 587 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 587 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
#line 587 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 4) = ((MR_Box) (mode_robdd__implications__MkLitA_6));
#line 587 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 5) = ((MR_Box) (mode_robdd__implications__MkLitB_7));
#line 587 "mode_robdd.implications.m"
    }
#line 587 "mode_robdd.implications.m"
    {
#line 587 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_HeadVar__5_5 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_34_34, mode_robdd__implications__TypeInfo_36_36, mode_robdd__implications__TypeInfo_38_38, (MR_Word) mode_robdd__implications__V_15_15, (MR_Word) mode_robdd__implications__IM_8, ((MR_Box) (mode_robdd__implications__ImpVars_9)));
    }
#line 587 "mode_robdd.implications.m"
    mode_robdd__implications__HeadVar__5_5 = ((MR_Word) mode_robdd__implications__conv1_HeadVar__5_5);
#line 586 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__5_5;
#line 586 "mode_robdd.implications.m"
  }
#line 583 "mode_robdd.implications.m"
}

#line 572 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__get_literals_2_f_0_2(
#line 572 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 572 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1)
#line 572 "mode_robdd.implications.m"
{
#line 572 "mode_robdd.implications.m"
  {
#line 572 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_2;
#line 572 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 572 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv1_HeadVar__2_2;

#line 572 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 572 "mode_robdd.implications.m"
    {
#line 572 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_HeadVar__2_2 = mode_robdd__implications__mkneg_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 572 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv1_HeadVar__2_2));
#line 572 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 572 "mode_robdd.implications.m"
  }
#line 572 "mode_robdd.implications.m"
}

#line 571 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__get_literals_2_f_0_1(
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
    MR_Word mode_robdd__implications__conv0_HeadVar__2_2;

#line 571 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 571 "mode_robdd.implications.m"
    {
#line 571 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__2_2 = mode_robdd__implications__mkpos_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 571 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__2_2));
#line 571 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 571 "mode_robdd.implications.m"
  }
#line 571 "mode_robdd.implications.m"
}

#line 568 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__get_literals_2_f_0(
#line 568 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_32,
#line 568 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LitA_4,
#line 568 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_5)
#line 568 "mode_robdd.implications.m"
{
#line 572 "mode_robdd.implications.m"
  {
#line 572 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 572 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 572 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_33_33;
#line 572 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_34_34;
#line 572 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_35_35;
#line 572 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_36_36;
#line 572 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_39;
#line 572 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeClassInfo_for_enum_40;
#line 572 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Pos_6;
#line 572 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Neg_7;
#line 572 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_9_9;
#line 572 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_10_10;
#line 572 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_11_11;
#line 572 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_12_12;
#line 572 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_13_13;
#line 572 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_14_14;
#line 572 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_43_43;
#line 572 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_46_46;
#line 579 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_44_44;
#line 579 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_45_45;
#line 571 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv2_V_11_11;
#line 572 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv3_V_14_14;
#line 571 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv4_HeadVar__3_3;

#line 4417 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_33_33 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
#line 4419 "mode_robdd.implications.c"
    {
#line 4421 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4423 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_34_34, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_33_33));
#line 4425 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_34_34, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
#line 4427 "mode_robdd.implications.c"
    }
#line 4429 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 4431 "mode_robdd.implications.c"
    {
#line 4433 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4435 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_36_36, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_35_35));
#line 4437 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_36_36, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
#line 4439 "mode_robdd.implications.c"
    }
#line 571 "mode_robdd.implications.m"
    {
#line 571 "mode_robdd.implications.m"
      mode_robdd__implications__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 571 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
#line 571 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 1) = ((MR_Box) (mode_robdd__implications__get_literals_2_f_0_1));
#line 571 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 571 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
#line 571 "mode_robdd.implications.m"
    }
#line 4455 "mode_robdd.implications.c"
    mode_robdd__implications__BaseTypeClassInfo_for_enum_39 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 4457 "mode_robdd.implications.c"
    {
#line 4459 "mode_robdd.implications.c"
      mode_robdd__implications__TypeClassInfo_for_enum_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4461 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_40, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_39));
#line 4463 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_40, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
#line 4465 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_40, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_36_36));
#line 4467 "mode_robdd.implications.c"
    }
#line 572 "mode_robdd.implications.m"
    {
#line 572 "mode_robdd.implications.m"
      mode_robdd__implications__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 572 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_13_13, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
#line 572 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_13_13, 1) = ((MR_Box) (mode_robdd__implications__get_literals_2_f_0_2));
#line 572 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 572 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_13_13, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_32));
#line 572 "mode_robdd.implications.m"
    }
#line 579 "mode_robdd.implications.m"
    mode_robdd__implications__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 0)));
#line 579 "mode_robdd.implications.m"
    mode_robdd__implications__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 1)));
#line 579 "mode_robdd.implications.m"
    mode_robdd__implications__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 2)));
#line 579 "mode_robdd.implications.m"
    mode_robdd__implications__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 3)));
#line 577 "mode_robdd.implications.m"
    if (((MR_tag((MR_Word) mode_robdd__implications__LitA_4)) == (MR_mktag((MR_Integer) 1))))
#line 578 "mode_robdd.implications.m"
      {
#line 578 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_16_16;
#line 578 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__VarA_19;
#line 580 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_29_29;
#line 580 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_30_30;
#line 580 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_31_31;

#line 578 "mode_robdd.implications.m"
        mode_robdd__implications__VarA_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__implications__LitA_4, (MR_Integer) 0)));
#line 579 "mode_robdd.implications.m"
        {
#line 579 "mode_robdd.implications.m"
          mode_robdd__implications__Pos_6 = mode_robdd__implications__entry_2_f_0(mode_robdd__implications__TypeInfo_for_T_32, mode_robdd__implications__VarA_19, mode_robdd__implications__V_43_43);
        }
#line 580 "mode_robdd.implications.m"
        mode_robdd__implications__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 0)));
#line 580 "mode_robdd.implications.m"
        mode_robdd__implications__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 1)));
#line 580 "mode_robdd.implications.m"
        mode_robdd__implications__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 2)));
#line 580 "mode_robdd.implications.m"
        mode_robdd__implications__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 3)));
#line 580 "mode_robdd.implications.m"
        {
#line 580 "mode_robdd.implications.m"
          mode_robdd__implications__Neg_7 = mode_robdd__implications__entry_2_f_0(mode_robdd__implications__TypeInfo_for_T_32, mode_robdd__implications__VarA_19, mode_robdd__implications__V_16_16);
        }
#line 578 "mode_robdd.implications.m"
      }
#line 577 "mode_robdd.implications.m"
    else
#line 574 "mode_robdd.implications.m"
      {
#line 574 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__VarA_8;
#line 574 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_18_18;
#line 576 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_23_23;
#line 576 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_24_24;
#line 576 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_25_25;

#line 574 "mode_robdd.implications.m"
        mode_robdd__implications__VarA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__LitA_4, (MR_Integer) 0)));
#line 575 "mode_robdd.implications.m"
        {
#line 575 "mode_robdd.implications.m"
          mode_robdd__implications__Pos_6 = mode_robdd__implications__entry_2_f_0(mode_robdd__implications__TypeInfo_for_T_32, mode_robdd__implications__VarA_8, mode_robdd__implications__V_46_46);
        }
#line 576 "mode_robdd.implications.m"
        mode_robdd__implications__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 0)));
#line 576 "mode_robdd.implications.m"
        mode_robdd__implications__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 1)));
#line 576 "mode_robdd.implications.m"
        mode_robdd__implications__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 2)));
#line 576 "mode_robdd.implications.m"
        mode_robdd__implications__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_5, (MR_Integer) 3)));
#line 576 "mode_robdd.implications.m"
        {
#line 576 "mode_robdd.implications.m"
          mode_robdd__implications__Neg_7 = mode_robdd__implications__entry_2_f_0(mode_robdd__implications__TypeInfo_for_T_32, mode_robdd__implications__VarA_8, mode_robdd__implications__V_18_18);
        }
#line 574 "mode_robdd.implications.m"
      }
#line 571 "mode_robdd.implications.m"
    {
#line 571 "mode_robdd.implications.m"
      mode_robdd__implications__conv2_V_11_11 = mercury__sparse_bitset__to_sorted_list_1_f_0(mode_robdd__implications__TypeClassInfo_for_enum_40, (MR_Word) mode_robdd__implications__Pos_6);
    }
#line 571 "mode_robdd.implications.m"
    mode_robdd__implications__V_11_11 = (MR_Word) mode_robdd__implications__conv2_V_11_11;
#line 571 "mode_robdd.implications.m"
    {
#line 571 "mode_robdd.implications.m"
      mode_robdd__implications__V_9_9 = mercury__list__map_2_f_0(mode_robdd__implications__TypeInfo_36_36, mode_robdd__implications__TypeInfo_34_34, (MR_Word) mode_robdd__implications__V_10_10, (MR_Word) mode_robdd__implications__V_11_11);
    }
#line 572 "mode_robdd.implications.m"
    {
#line 572 "mode_robdd.implications.m"
      mode_robdd__implications__conv3_V_14_14 = mercury__sparse_bitset__to_sorted_list_1_f_0(mode_robdd__implications__TypeClassInfo_for_enum_40, (MR_Word) mode_robdd__implications__Neg_7);
    }
#line 572 "mode_robdd.implications.m"
    mode_robdd__implications__V_14_14 = (MR_Word) mode_robdd__implications__conv3_V_14_14;
#line 572 "mode_robdd.implications.m"
    {
#line 572 "mode_robdd.implications.m"
      mode_robdd__implications__V_12_12 = mercury__list__map_2_f_0(mode_robdd__implications__TypeInfo_36_36, mode_robdd__implications__TypeInfo_34_34, (MR_Word) mode_robdd__implications__V_13_13, (MR_Word) mode_robdd__implications__V_14_14);
    }
#line 571 "mode_robdd.implications.m"
    {
#line 571 "mode_robdd.implications.m"
      mode_robdd__implications__conv4_HeadVar__3_3 = mercury__list__f_43_43_2_f_0(mode_robdd__implications__TypeInfo_34_34, (MR_Word) mode_robdd__implications__V_9_9, (MR_Word) mode_robdd__implications__V_12_12);
    }
#line 571 "mode_robdd.implications.m"
    mode_robdd__implications__HeadVar__3_3 = (MR_Word) mode_robdd__implications__conv4_HeadVar__3_3;
#line 572 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 572 "mode_robdd.implications.m"
  }
#line 568 "mode_robdd.implications.m"
}

#line 566 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__get_resolvents_2_3_f_0_1(
#line 566 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 566 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1)
#line 566 "mode_robdd.implications.m"
{
#line 566 "mode_robdd.implications.m"
  {
#line 566 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_2;
#line 566 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 566 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__conv0_HeadVar__4_13;

#line 566 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 566 "mode_robdd.implications.m"
    {
#line 566 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__4_13 = mode_robdd__implications__IntroducedFrom__func__get_resolvents_2__566__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 566 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__4_13));
#line 566 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 566 "mode_robdd.implications.m"
  }
#line 566 "mode_robdd.implications.m"
}

#line 561 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__get_resolvents_2_3_f_0(
#line 561 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_15,
#line 561 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LitA_5,
#line 561 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__LitB_6,
#line 561 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_7)
#line 561 "mode_robdd.implications.m"
{
#line 564 "mode_robdd.implications.m"
  {
#line 564 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 564 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Clauses_8;
#line 564 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_16_16;
#line 564 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_17_17;
#line 564 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_18_18;
#line 564 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_20_20;
#line 564 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Literals_9;
#line 564 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_11_11;
#line 564 "mode_robdd.implications.m"
    MR_Integer mode_robdd__implications__PolyConst2_19;

#line 565 "mode_robdd.implications.m"
    {
#line 565 "mode_robdd.implications.m"
      mode_robdd__implications__Literals_9 = mode_robdd__implications__get_literals_2_f_0(mode_robdd__implications__TypeInfo_for_T_15, mode_robdd__implications__LitA_5, mode_robdd__implications__ImpVars_7);
    }
#line 4676 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_16_16 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
#line 4678 "mode_robdd.implications.c"
    {
#line 4680 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4682 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_16_16));
#line 4684 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_15));
#line 4686 "mode_robdd.implications.c"
    }
#line 4688 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 4690 "mode_robdd.implications.c"
    mode_robdd__implications__PolyConst2_19 = (MR_Integer) 2;
#line 4692 "mode_robdd.implications.c"
    {
#line 4694 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 4696 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_20_20, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_18_18));
#line 4698 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_20_20, 1) = ((MR_Box) (mode_robdd__implications__PolyConst2_19));
#line 4700 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_20_20, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_17_17));
#line 4702 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_20_20, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_17_17));
#line 4704 "mode_robdd.implications.c"
    }
#line 566 "mode_robdd.implications.m"
    {
#line 566 "mode_robdd.implications.m"
      mode_robdd__implications__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 566 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_11_11, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[4]));
#line 566 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_11_11, 1) = ((MR_Box) (mode_robdd__implications__get_resolvents_2_3_f_0_1));
#line 566 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 566 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_11_11, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_15));
#line 566 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_11_11, 4) = ((MR_Box) (mode_robdd__implications__LitB_6));
#line 566 "mode_robdd.implications.m"
    }
#line 566 "mode_robdd.implications.m"
    {
#line 566 "mode_robdd.implications.m"
      mode_robdd__implications__Clauses_8 = mercury__list__map_2_f_0(mode_robdd__implications__TypeInfo_17_17, mode_robdd__implications__TypeInfo_20_20, (MR_Word) mode_robdd__implications__V_11_11, (MR_Word) mode_robdd__implications__Literals_9);
    }
#line 564 "mode_robdd.implications.m"
    return mode_robdd__implications__Clauses_8;
#line 564 "mode_robdd.implications.m"
  }
#line 561 "mode_robdd.implications.m"
}

#line 555 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__get_resolvents_2_f_0(
#line 555 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_9,
#line 555 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__1_1,
#line 555 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_6)
#line 555 "mode_robdd.implications.m"
{
#line 557 "mode_robdd.implications.m"
  {
#line 557 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 557 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 557 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_10_10;
#line 557 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_11_11;
#line 557 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_12_12;
#line 557 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_14_14;
#line 557 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__LitA_4;
#line 557 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__LitB_5;
#line 557 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_7_7;
#line 557 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_8_8;
#line 557 "mode_robdd.implications.m"
    MR_Integer mode_robdd__implications__PolyConst2_13;
#line 558 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__3_3;

#line 557 "mode_robdd.implications.m"
    mode_robdd__implications__LitA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 0)));
#line 557 "mode_robdd.implications.m"
    mode_robdd__implications__LitB_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 1)));
#line 4776 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 4778 "mode_robdd.implications.c"
    mode_robdd__implications__PolyConst2_13 = (MR_Integer) 2;
#line 4780 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_10_10 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
#line 4782 "mode_robdd.implications.c"
    {
#line 4784 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4786 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_11_11, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_10_10));
#line 4788 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_11_11, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_9));
#line 4790 "mode_robdd.implications.c"
    }
#line 4792 "mode_robdd.implications.c"
    {
#line 4794 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 4796 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_12_12));
#line 4798 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 1) = ((MR_Box) (mode_robdd__implications__PolyConst2_13));
#line 4800 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_11_11));
#line 4802 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_11_11));
#line 4804 "mode_robdd.implications.c"
    }
#line 558 "mode_robdd.implications.m"
    {
#line 558 "mode_robdd.implications.m"
      mode_robdd__implications__V_7_7 = mode_robdd__implications__get_resolvents_2_3_f_0(mode_robdd__implications__TypeInfo_for_T_9, mode_robdd__implications__LitA_4, mode_robdd__implications__LitB_5, mode_robdd__implications__ImpVars_6);
    }
#line 559 "mode_robdd.implications.m"
    {
#line 559 "mode_robdd.implications.m"
      mode_robdd__implications__V_8_8 = mode_robdd__implications__get_resolvents_2_3_f_0(mode_robdd__implications__TypeInfo_for_T_9, mode_robdd__implications__LitB_5, mode_robdd__implications__LitA_4, mode_robdd__implications__ImpVars_6);
    }
#line 558 "mode_robdd.implications.m"
    {
#line 558 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__3_3 = mercury__list__f_43_43_2_f_0(mode_robdd__implications__TypeInfo_14_14, (MR_Word) mode_robdd__implications__V_7_7, (MR_Word) mode_robdd__implications__V_8_8);
    }
#line 558 "mode_robdd.implications.m"
    mode_robdd__implications__HeadVar__3_3 = (MR_Word) mode_robdd__implications__conv0_HeadVar__3_3;
#line 557 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 557 "mode_robdd.implications.m"
  }
#line 555 "mode_robdd.implications.m"
}

#line 540 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications__add_clause_2_2_f_0(
#line 540 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_100,
#line 540 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__HeadVar__1_1,
#line 540 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_2,
#line 540 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__HeadVar__3_3)
#line 540 "mode_robdd.implications.m"
{
#line 542 "mode_robdd.implications.m"
  {
#line 542 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 542 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_101_101;
#line 542 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_102_102;
#line 542 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_103_103;
#line 542 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_104_104;
#line 542 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_105_105;
#line 542 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_106_106;
#line 542 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_107_107;
#line 542 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_108_108;
#line 542 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_109_109;
#line 542 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_110_110;

#line 542 "mode_robdd.implications.m"
    mode_robdd__implications__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 0)));
#line 542 "mode_robdd.implications.m"
    mode_robdd__implications__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 1)));
#line 542 "mode_robdd.implications.m"
    mode_robdd__implications__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_2, (MR_Integer) 0)));
#line 542 "mode_robdd.implications.m"
    mode_robdd__implications__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_2, (MR_Integer) 1)));
#line 542 "mode_robdd.implications.m"
    mode_robdd__implications__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_2, (MR_Integer) 2)));
#line 542 "mode_robdd.implications.m"
    mode_robdd__implications__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_2, (MR_Integer) 3)));
#line 542 "mode_robdd.implications.m"
    mode_robdd__implications__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_2, (MR_Integer) 0)));
#line 542 "mode_robdd.implications.m"
    mode_robdd__implications__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_2, (MR_Integer) 1)));
#line 542 "mode_robdd.implications.m"
    mode_robdd__implications__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_2, (MR_Integer) 2)));
#line 542 "mode_robdd.implications.m"
    mode_robdd__implications__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_2, (MR_Integer) 3)));
#line 542 "mode_robdd.implications.m"
    if (((MR_tag((MR_Word) mode_robdd__implications__V_101_101)) == (MR_mktag((MR_Integer) 1))))
#line 542 "mode_robdd.implications.m"
      {
#line 542 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_111_111;

#line 545 "mode_robdd.implications.m"
        mode_robdd__implications__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__implications__V_101_101, (MR_Integer) 0)));
#line 542 "mode_robdd.implications.m"
        if (((MR_tag((MR_Word) mode_robdd__implications__V_102_102)) == (MR_mktag((MR_Integer) 1))))
#line 548 "mode_robdd.implications.m"
          {
#line 548 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__VA_24;
#line 548 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_29_29;
#line 548 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_30_30;
#line 548 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_31_31;
#line 548 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_33_33;
#line 548 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_79_79;
#line 548 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_80_80;
#line 548 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_81_81;
#line 548 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_82_82;
#line 548 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_83_83;
#line 548 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_85_85;
#line 548 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_84_84;

#line 548 "mode_robdd.implications.m"
            mode_robdd__implications__VA_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__implications__V_102_102, (MR_Integer) 0)));
#line 548 "mode_robdd.implications.m"
            {
#line 548 "mode_robdd.implications.m"
              mode_robdd__implications__succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_100, mode_robdd__implications__VA_24, mode_robdd__implications__V_104_104, mode_robdd__implications__V_111_111, &mode_robdd__implications__V_33_33);
            }
#line 548 "mode_robdd.implications.m"
            if (mode_robdd__implications__succeeded)
#line 548 "mode_robdd.implications.m"
              {
#line 548 "mode_robdd.implications.m"
                {
#line 548 "mode_robdd.implications.m"
                  mode_robdd__implications__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 548 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, 0) = ((MR_Box) (mode_robdd__implications__V_110_110));
#line 548 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, 1) = ((MR_Box) (mode_robdd__implications__V_109_109));
#line 548 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, 2) = ((MR_Box) (mode_robdd__implications__V_33_33));
#line 548 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, 3) = ((MR_Box) (mode_robdd__implications__V_107_107));
#line 548 "mode_robdd.implications.m"
                }
#line 548 "mode_robdd.implications.m"
                mode_robdd__implications__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, (MR_Integer) 0)));
#line 548 "mode_robdd.implications.m"
                mode_robdd__implications__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, (MR_Integer) 1)));
#line 548 "mode_robdd.implications.m"
                mode_robdd__implications__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, (MR_Integer) 2)));
#line 548 "mode_robdd.implications.m"
                mode_robdd__implications__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, (MR_Integer) 3)));
#line 548 "mode_robdd.implications.m"
                {
#line 548 "mode_robdd.implications.m"
                  mode_robdd__implications__succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_100, mode_robdd__implications__V_111_111, mode_robdd__implications__V_30_30, mode_robdd__implications__VA_24, &mode_robdd__implications__V_31_31);
                }
#line 548 "mode_robdd.implications.m"
                if (mode_robdd__implications__succeeded)
#line 548 "mode_robdd.implications.m"
                  {
#line 548 "mode_robdd.implications.m"
                    mode_robdd__implications__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, (MR_Integer) 0)));
#line 548 "mode_robdd.implications.m"
                    mode_robdd__implications__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, (MR_Integer) 1)));
#line 548 "mode_robdd.implications.m"
                    mode_robdd__implications__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, (MR_Integer) 2)));
#line 548 "mode_robdd.implications.m"
                    mode_robdd__implications__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, (MR_Integer) 3)));
#line 548 "mode_robdd.implications.m"
                    {
#line 548 "mode_robdd.implications.m"
                      MR_Word base;
#line 548 "mode_robdd.implications.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 548 "mode_robdd.implications.m"
                      *mode_robdd__implications__HeadVar__3_3 = base;
#line 548 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__implications__V_82_82));
#line 548 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mode_robdd__implications__V_83_83));
#line 548 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mode_robdd__implications__V_31_31));
#line 548 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mode_robdd__implications__V_85_85));
#line 548 "mode_robdd.implications.m"
                    }
#line 548 "mode_robdd.implications.m"
                    mode_robdd__implications__succeeded = MR_TRUE;
#line 548 "mode_robdd.implications.m"
                  }
#line 548 "mode_robdd.implications.m"
              }
#line 548 "mode_robdd.implications.m"
          }
#line 542 "mode_robdd.implications.m"
        else
#line 545 "mode_robdd.implications.m"
          {
#line 545 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__VA_14;
#line 545 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_19_19;
#line 545 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_20_20;
#line 545 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_21_21;
#line 545 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_23_23;
#line 545 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_65_65;
#line 545 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_66_66;
#line 545 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_67_67;
#line 545 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_69_69;
#line 545 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_70_70;
#line 545 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_71_71;
#line 545 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_68_68;

#line 545 "mode_robdd.implications.m"
            mode_robdd__implications__VA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_102_102, (MR_Integer) 0)));
#line 545 "mode_robdd.implications.m"
            {
#line 545 "mode_robdd.implications.m"
              mode_robdd__implications__succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_100, mode_robdd__implications__VA_14, mode_robdd__implications__V_105_105, mode_robdd__implications__V_111_111, &mode_robdd__implications__V_23_23);
            }
#line 545 "mode_robdd.implications.m"
            if (mode_robdd__implications__succeeded)
#line 545 "mode_robdd.implications.m"
              {
#line 545 "mode_robdd.implications.m"
                {
#line 545 "mode_robdd.implications.m"
                  mode_robdd__implications__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 545 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, 0) = ((MR_Box) (mode_robdd__implications__V_110_110));
#line 545 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, 1) = ((MR_Box) (mode_robdd__implications__V_23_23));
#line 545 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, 2) = ((MR_Box) (mode_robdd__implications__V_108_108));
#line 545 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, 3) = ((MR_Box) (mode_robdd__implications__V_107_107));
#line 545 "mode_robdd.implications.m"
                }
#line 545 "mode_robdd.implications.m"
                mode_robdd__implications__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, (MR_Integer) 0)));
#line 545 "mode_robdd.implications.m"
                mode_robdd__implications__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, (MR_Integer) 1)));
#line 545 "mode_robdd.implications.m"
                mode_robdd__implications__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, (MR_Integer) 2)));
#line 545 "mode_robdd.implications.m"
                mode_robdd__implications__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, (MR_Integer) 3)));
#line 545 "mode_robdd.implications.m"
                {
#line 545 "mode_robdd.implications.m"
                  mode_robdd__implications__succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_100, mode_robdd__implications__V_111_111, mode_robdd__implications__V_20_20, mode_robdd__implications__VA_14, &mode_robdd__implications__V_21_21);
                }
#line 545 "mode_robdd.implications.m"
                if (mode_robdd__implications__succeeded)
#line 545 "mode_robdd.implications.m"
                  {
#line 545 "mode_robdd.implications.m"
                    mode_robdd__implications__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, (MR_Integer) 0)));
#line 545 "mode_robdd.implications.m"
                    mode_robdd__implications__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, (MR_Integer) 1)));
#line 545 "mode_robdd.implications.m"
                    mode_robdd__implications__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, (MR_Integer) 2)));
#line 545 "mode_robdd.implications.m"
                    mode_robdd__implications__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, (MR_Integer) 3)));
#line 545 "mode_robdd.implications.m"
                    {
#line 545 "mode_robdd.implications.m"
                      MR_Word base;
#line 545 "mode_robdd.implications.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 545 "mode_robdd.implications.m"
                      *mode_robdd__implications__HeadVar__3_3 = base;
#line 545 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__implications__V_21_21));
#line 545 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mode_robdd__implications__V_69_69));
#line 545 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mode_robdd__implications__V_70_70));
#line 545 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mode_robdd__implications__V_71_71));
#line 545 "mode_robdd.implications.m"
                    }
#line 545 "mode_robdd.implications.m"
                    mode_robdd__implications__succeeded = MR_TRUE;
#line 545 "mode_robdd.implications.m"
                  }
#line 545 "mode_robdd.implications.m"
              }
#line 545 "mode_robdd.implications.m"
          }
#line 542 "mode_robdd.implications.m"
      }
#line 542 "mode_robdd.implications.m"
    else
#line 542 "mode_robdd.implications.m"
      {
#line 542 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_112_112;

#line 542 "mode_robdd.implications.m"
        mode_robdd__implications__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_101_101, (MR_Integer) 0)));
#line 542 "mode_robdd.implications.m"
        if (((MR_tag((MR_Word) mode_robdd__implications__V_102_102)) == (MR_mktag((MR_Integer) 1))))
#line 542 "mode_robdd.implications.m"
          {
#line 542 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__VA_4;
#line 542 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_9_9;
#line 542 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_10_10;
#line 542 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_11_11;
#line 542 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_13_13;
#line 542 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_51_51;
#line 542 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_52_52;
#line 542 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_53_53;
#line 542 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_54_54;
#line 542 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_56_56;
#line 542 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_57_57;
#line 542 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_55_55;

#line 542 "mode_robdd.implications.m"
            mode_robdd__implications__VA_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__implications__V_102_102, (MR_Integer) 0)));
#line 542 "mode_robdd.implications.m"
            {
#line 542 "mode_robdd.implications.m"
              mode_robdd__implications__succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_100, mode_robdd__implications__VA_4, mode_robdd__implications__V_106_106, mode_robdd__implications__V_112_112, &mode_robdd__implications__V_13_13);
            }
#line 542 "mode_robdd.implications.m"
            if (mode_robdd__implications__succeeded)
#line 542 "mode_robdd.implications.m"
              {
#line 542 "mode_robdd.implications.m"
                {
#line 542 "mode_robdd.implications.m"
                  mode_robdd__implications__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 542 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 0) = ((MR_Box) (mode_robdd__implications__V_13_13));
#line 542 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 1) = ((MR_Box) (mode_robdd__implications__V_109_109));
#line 542 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 2) = ((MR_Box) (mode_robdd__implications__V_108_108));
#line 542 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 3) = ((MR_Box) (mode_robdd__implications__V_107_107));
#line 542 "mode_robdd.implications.m"
                }
#line 542 "mode_robdd.implications.m"
                mode_robdd__implications__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, (MR_Integer) 0)));
#line 542 "mode_robdd.implications.m"
                mode_robdd__implications__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, (MR_Integer) 1)));
#line 542 "mode_robdd.implications.m"
                mode_robdd__implications__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, (MR_Integer) 2)));
#line 542 "mode_robdd.implications.m"
                mode_robdd__implications__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, (MR_Integer) 3)));
#line 542 "mode_robdd.implications.m"
                {
#line 542 "mode_robdd.implications.m"
                  mode_robdd__implications__succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_100, mode_robdd__implications__V_112_112, mode_robdd__implications__V_10_10, mode_robdd__implications__VA_4, &mode_robdd__implications__V_11_11);
                }
#line 542 "mode_robdd.implications.m"
                if (mode_robdd__implications__succeeded)
#line 542 "mode_robdd.implications.m"
                  {
#line 542 "mode_robdd.implications.m"
                    mode_robdd__implications__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, (MR_Integer) 0)));
#line 542 "mode_robdd.implications.m"
                    mode_robdd__implications__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, (MR_Integer) 1)));
#line 542 "mode_robdd.implications.m"
                    mode_robdd__implications__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, (MR_Integer) 2)));
#line 542 "mode_robdd.implications.m"
                    mode_robdd__implications__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, (MR_Integer) 3)));
#line 542 "mode_robdd.implications.m"
                    {
#line 542 "mode_robdd.implications.m"
                      MR_Word base;
#line 542 "mode_robdd.implications.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 542 "mode_robdd.implications.m"
                      *mode_robdd__implications__HeadVar__3_3 = base;
#line 542 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__implications__V_54_54));
#line 542 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mode_robdd__implications__V_11_11));
#line 542 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mode_robdd__implications__V_56_56));
#line 542 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mode_robdd__implications__V_57_57));
#line 542 "mode_robdd.implications.m"
                    }
#line 542 "mode_robdd.implications.m"
                    mode_robdd__implications__succeeded = MR_TRUE;
#line 542 "mode_robdd.implications.m"
                  }
#line 542 "mode_robdd.implications.m"
              }
#line 542 "mode_robdd.implications.m"
          }
#line 542 "mode_robdd.implications.m"
        else
#line 551 "mode_robdd.implications.m"
          {
#line 551 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__VA_34;
#line 551 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_39_39;
#line 551 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_40_40;
#line 551 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_41_41;
#line 551 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_43_43;
#line 551 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_93_93;
#line 551 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_94_94;
#line 551 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_95_95;
#line 551 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_96_96;
#line 551 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_97_97;
#line 551 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_98_98;
#line 551 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_99_99;

#line 551 "mode_robdd.implications.m"
            mode_robdd__implications__VA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_102_102, (MR_Integer) 0)));
#line 551 "mode_robdd.implications.m"
            {
#line 551 "mode_robdd.implications.m"
              mode_robdd__implications__succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_100, mode_robdd__implications__VA_34, mode_robdd__implications__V_103_103, mode_robdd__implications__V_112_112, &mode_robdd__implications__V_43_43);
            }
#line 551 "mode_robdd.implications.m"
            if (mode_robdd__implications__succeeded)
#line 551 "mode_robdd.implications.m"
              {
#line 551 "mode_robdd.implications.m"
                {
#line 551 "mode_robdd.implications.m"
                  mode_robdd__implications__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 551 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_39_39, 0) = ((MR_Box) (mode_robdd__implications__V_110_110));
#line 551 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_39_39, 1) = ((MR_Box) (mode_robdd__implications__V_109_109));
#line 551 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_39_39, 2) = ((MR_Box) (mode_robdd__implications__V_108_108));
#line 551 "mode_robdd.implications.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__implications__V_39_39, 3) = ((MR_Box) (mode_robdd__implications__V_43_43));
#line 551 "mode_robdd.implications.m"
                }
#line 551 "mode_robdd.implications.m"
                mode_robdd__implications__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_39_39, (MR_Integer) 0)));
#line 551 "mode_robdd.implications.m"
                mode_robdd__implications__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_39_39, (MR_Integer) 1)));
#line 551 "mode_robdd.implications.m"
                mode_robdd__implications__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_39_39, (MR_Integer) 2)));
#line 551 "mode_robdd.implications.m"
                mode_robdd__implications__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_39_39, (MR_Integer) 3)));
#line 551 "mode_robdd.implications.m"
                {
#line 551 "mode_robdd.implications.m"
                  mode_robdd__implications__succeeded = mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_100, mode_robdd__implications__V_112_112, mode_robdd__implications__V_40_40, mode_robdd__implications__VA_34, &mode_robdd__implications__V_41_41);
                }
#line 551 "mode_robdd.implications.m"
                if (mode_robdd__implications__succeeded)
#line 551 "mode_robdd.implications.m"
                  {
#line 551 "mode_robdd.implications.m"
                    mode_robdd__implications__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_39_39, (MR_Integer) 0)));
#line 551 "mode_robdd.implications.m"
                    mode_robdd__implications__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_39_39, (MR_Integer) 1)));
#line 551 "mode_robdd.implications.m"
                    mode_robdd__implications__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_39_39, (MR_Integer) 2)));
#line 551 "mode_robdd.implications.m"
                    mode_robdd__implications__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_39_39, (MR_Integer) 3)));
#line 551 "mode_robdd.implications.m"
                    {
#line 551 "mode_robdd.implications.m"
                      MR_Word base;
#line 551 "mode_robdd.implications.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 551 "mode_robdd.implications.m"
                      *mode_robdd__implications__HeadVar__3_3 = base;
#line 551 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__implications__V_96_96));
#line 551 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mode_robdd__implications__V_97_97));
#line 551 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mode_robdd__implications__V_98_98));
#line 551 "mode_robdd.implications.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mode_robdd__implications__V_41_41));
#line 551 "mode_robdd.implications.m"
                    }
#line 551 "mode_robdd.implications.m"
                    mode_robdd__implications__succeeded = MR_TRUE;
#line 551 "mode_robdd.implications.m"
                  }
#line 551 "mode_robdd.implications.m"
              }
#line 551 "mode_robdd.implications.m"
          }
#line 542 "mode_robdd.implications.m"
      }
#line 542 "mode_robdd.implications.m"
    return mode_robdd__implications__succeeded;
#line 542 "mode_robdd.implications.m"
  }
#line 540 "mode_robdd.implications.m"
}

#line 527 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__add_clauses_2_f_0(
#line 527 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_12,
#line 527 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__1_1,
#line 527 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_2)
#line 527 "mode_robdd.implications.m"
{
#line 529 "mode_robdd.implications.m"
  {
#line 529 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 529 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__ImpVars_3;

#line 529 "mode_robdd.implications.m"
    if ((mode_robdd__implications__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 529 "mode_robdd.implications.m"
      mode_robdd__implications__ImpVars_3 = mode_robdd__implications__HeadVar__2_2;
#line 529 "mode_robdd.implications.m"
    else
#line 530 "mode_robdd.implications.m"
      {
#line 530 "mode_robdd.implications.m"
        MR_Tuple mode_robdd__implications__Clause_5;
#line 530 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Clauses_6;
#line 534 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__ImpVars1_9;

#line 530 "mode_robdd.implications.m"
        mode_robdd__implications__Clause_5 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 0)));
#line 530 "mode_robdd.implications.m"
        mode_robdd__implications__Clauses_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 1)));
#line 531 "mode_robdd.implications.m"
        {
#line 531 "mode_robdd.implications.m"
          mode_robdd__implications__succeeded = mode_robdd__implications__add_clause_2_2_f_0(mode_robdd__implications__TypeInfo_for_T_12, mode_robdd__implications__Clause_5, mode_robdd__implications__HeadVar__2_2, &mode_robdd__implications__ImpVars1_9);
        }
#line 534 "mode_robdd.implications.m"
        if (mode_robdd__implications__succeeded)
#line 532 "mode_robdd.implications.m"
          {
#line 532 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeCtorInfo_13_13;
#line 532 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeInfo_14_14;
#line 532 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeCtorInfo_15_15;
#line 532 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeInfo_17_17;
#line 532 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__Resolvents_10;
#line 532 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_11_11;
#line 532 "mode_robdd.implications.m"
            MR_Integer mode_robdd__implications__PolyConst2_16;
#line 533 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__conv0_V_11_11;

#line 532 "mode_robdd.implications.m"
            {
#line 532 "mode_robdd.implications.m"
              mode_robdd__implications__Resolvents_10 = mode_robdd__implications__get_resolvents_2_f_0(mode_robdd__implications__TypeInfo_for_T_12, mode_robdd__implications__Clause_5, mode_robdd__implications__ImpVars1_9);
            }
#line 5405 "mode_robdd.implications.c"
            mode_robdd__implications__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 5407 "mode_robdd.implications.c"
            mode_robdd__implications__PolyConst2_16 = (MR_Integer) 2;
#line 5409 "mode_robdd.implications.c"
            mode_robdd__implications__TypeCtorInfo_13_13 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
#line 5411 "mode_robdd.implications.c"
            {
#line 5413 "mode_robdd.implications.c"
              mode_robdd__implications__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5415 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_13_13));
#line 5417 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
#line 5419 "mode_robdd.implications.c"
            }
#line 5421 "mode_robdd.implications.c"
            {
#line 5423 "mode_robdd.implications.c"
              mode_robdd__implications__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 5425 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_15_15));
#line 5427 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 1) = ((MR_Box) (mode_robdd__implications__PolyConst2_16));
#line 5429 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_14_14));
#line 5431 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_17_17, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_14_14));
#line 5433 "mode_robdd.implications.c"
            }
#line 533 "mode_robdd.implications.m"
            {
#line 533 "mode_robdd.implications.m"
              mode_robdd__implications__conv0_V_11_11 = mercury__list__f_43_43_2_f_0(mode_robdd__implications__TypeInfo_17_17, (MR_Word) mode_robdd__implications__Resolvents_10, (MR_Word) mode_robdd__implications__Clauses_6);
            }
#line 533 "mode_robdd.implications.m"
            mode_robdd__implications__V_11_11 = (MR_Word) mode_robdd__implications__conv0_V_11_11;
#line 533 "mode_robdd.implications.m"
            {
#line 533 "mode_robdd.implications.m"
              mode_robdd__implications__ImpVars_3 = mode_robdd__implications__add_clauses_2_f_0(mode_robdd__implications__TypeInfo_for_T_12, mode_robdd__implications__V_11_11, mode_robdd__implications__ImpVars1_9);
            }
#line 532 "mode_robdd.implications.m"
          }
#line 534 "mode_robdd.implications.m"
        else
#line 535 "mode_robdd.implications.m"
          {
#line 535 "mode_robdd.implications.m"
            mode_robdd__implications__ImpVars_3 = mode_robdd__implications__add_clauses_2_f_0(mode_robdd__implications__TypeInfo_for_T_12, mode_robdd__implications__Clauses_6, mode_robdd__implications__HeadVar__2_2);
          }
#line 530 "mode_robdd.implications.m"
      }
#line 529 "mode_robdd.implications.m"
    return mode_robdd__implications__ImpVars_3;
#line 529 "mode_robdd.implications.m"
  }
#line 527 "mode_robdd.implications.m"
}

#line 522 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__add_clause_2_f_0(
#line 522 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_8,
#line 522 "mode_robdd.implications.m"
  MR_Tuple mode_robdd__implications__Clause_4,
#line 522 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars_5)
#line 522 "mode_robdd.implications.m"
{
#line 524 "mode_robdd.implications.m"
  {
#line 524 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 524 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 524 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_6_6;
#line 524 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_7_7;

#line 525 "mode_robdd.implications.m"
    mode_robdd__implications__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 525 "mode_robdd.implications.m"
    {
#line 525 "mode_robdd.implications.m"
      mode_robdd__implications__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(1), mode_robdd__implications__V_6_6, 0) = ((MR_Box) (mode_robdd__implications__Clause_4));
#line 525 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(1), mode_robdd__implications__V_6_6, 1) = ((MR_Box) (mode_robdd__implications__V_7_7));
#line 525 "mode_robdd.implications.m"
    }
#line 525 "mode_robdd.implications.m"
    {
#line 525 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__add_clauses_2_f_0(mode_robdd__implications__TypeInfo_for_T_8, mode_robdd__implications__V_6_6, mode_robdd__implications__ImpVars_5);
    }
#line 524 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 524 "mode_robdd.implications.m"
  }
#line 522 "mode_robdd.implications.m"
}

#line 516 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__mkneg_1_f_0(
#line 516 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_4,
#line 516 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__V_3)
#line 516 "mode_robdd.implications.m"
{
#line 518 "mode_robdd.implications.m"
  {
#line 518 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 518 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__2_2;

#line 518 "mode_robdd.implications.m"
    {
#line 518 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 518 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(1), mode_robdd__implications__HeadVar__2_2, 0) = ((MR_Box) (mode_robdd__implications__V_3));
#line 518 "mode_robdd.implications.m"
    }
#line 518 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__2_2;
#line 518 "mode_robdd.implications.m"
  }
#line 516 "mode_robdd.implications.m"
}

#line 512 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__mkpos_1_f_0(
#line 512 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_4,
#line 512 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__V_3)
#line 512 "mode_robdd.implications.m"
{
#line 514 "mode_robdd.implications.m"
  {
#line 514 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 514 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__2_2;

#line 514 "mode_robdd.implications.m"
    {
#line 514 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 514 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__2_2, 0) = ((MR_Box) (mode_robdd__implications__V_3));
#line 514 "mode_robdd.implications.m"
    }
#line 514 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__2_2;
#line 514 "mode_robdd.implications.m"
  }
#line 512 "mode_robdd.implications.m"
}

#line 478 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__delete_var_from_imp_map_2_f_0_1(
#line 478 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 478 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 478 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 478 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3)
#line 478 "mode_robdd.implications.m"
{
#line 478 "mode_robdd.implications.m"
  {
#line 478 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_4;
#line 478 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 478 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__6_14;

#line 478 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 478 "mode_robdd.implications.m"
    {
#line 478 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__6_14 = mode_robdd__implications__IntroducedFrom__func__delete_var_from_imp_map__478__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Word) mode_robdd__implications__wrapper_arg_3));
    }
#line 478 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__6_14));
#line 478 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_4;
#line 478 "mode_robdd.implications.m"
  }
#line 478 "mode_robdd.implications.m"
}

#line 475 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__delete_var_from_imp_map_2_f_0(
#line 475 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
#line 475 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Var_4,
#line 475 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IM0_5)
#line 475 "mode_robdd.implications.m"
{
#line 484 "mode_robdd.implications.m"
  {
#line 484 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 484 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 484 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_21_21;
#line 484 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_22_22;
#line 484 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_23_23;
#line 484 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_24_24;
#line 484 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_25_25;
#line 484 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_26_26;
#line 484 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__IM1_9;
#line 484 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_10_10;
#line 485 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv1_IM1_9;
#line 478 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv2_HeadVar__3_3;

#line 5649 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 5651 "mode_robdd.implications.c"
    {
#line 5653 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5655 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_21_21));
#line 5657 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 5659 "mode_robdd.implications.c"
    }
#line 5661 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_23_23 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 5663 "mode_robdd.implications.c"
    {
#line 5665 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5667 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_24_24, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_23_23));
#line 5669 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_22_22));
#line 5671 "mode_robdd.implications.c"
    }
#line 5673 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_25_25 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 5675 "mode_robdd.implications.c"
    {
#line 5677 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5679 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_25_25));
#line 5681 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_22_22));
#line 5683 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_24_24));
#line 5685 "mode_robdd.implications.c"
    }
#line 478 "mode_robdd.implications.m"
    {
#line 478 "mode_robdd.implications.m"
      mode_robdd__implications__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 478 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[3]));
#line 478 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 1) = ((MR_Box) (mode_robdd__implications__delete_var_from_imp_map_2_f_0_1));
#line 478 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 478 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 478 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 4) = ((MR_Box) (mode_robdd__implications__Var_4));
#line 478 "mode_robdd.implications.m"
    }
#line 485 "mode_robdd.implications.m"
    {
#line 485 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_IM1_9 = mercury__map__delete_2_f_0(mode_robdd__implications__TypeInfo_22_22, mode_robdd__implications__TypeInfo_24_24, (MR_Word) mode_robdd__implications__IM0_5, ((MR_Box) (mode_robdd__implications__Var_4)));
    }
#line 485 "mode_robdd.implications.m"
    mode_robdd__implications__IM1_9 = (MR_Word) mode_robdd__implications__conv1_IM1_9;
#line 478 "mode_robdd.implications.m"
    {
#line 478 "mode_robdd.implications.m"
      mode_robdd__implications__conv2_HeadVar__3_3 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_22_22, mode_robdd__implications__TypeInfo_24_24, mode_robdd__implications__TypeInfo_26_26, (MR_Word) mode_robdd__implications__V_10_10, (MR_Word) mode_robdd__implications__IM1_9, ((MR_Box) (mode_robdd__implications__IM1_9)));
    }
#line 478 "mode_robdd.implications.m"
    mode_robdd__implications__HeadVar__3_3 = ((MR_Word) mode_robdd__implications__conv2_HeadVar__3_3);
#line 484 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 484 "mode_robdd.implications.m"
  }
#line 475 "mode_robdd.implications.m"
}

#line 467 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__remove_empty_sets_1_f_0_1(
#line 467 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 467 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 467 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 467 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3)
#line 467 "mode_robdd.implications.m"
{
#line 467 "mode_robdd.implications.m"
  {
#line 467 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_4;
#line 467 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 467 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__5_11;

#line 467 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 467 "mode_robdd.implications.m"
    {
#line 467 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__5_11 = mode_robdd__implications__IntroducedFrom__func__remove_empty_sets__467__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Word) mode_robdd__implications__wrapper_arg_3));
    }
#line 467 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__5_11));
#line 467 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_4;
#line 467 "mode_robdd.implications.m"
  }
#line 467 "mode_robdd.implications.m"
}

#line 464 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__remove_empty_sets_1_f_0(
#line 464 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_16,
#line 464 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IM_3)
#line 464 "mode_robdd.implications.m"
{
#line 466 "mode_robdd.implications.m"
  {
#line 466 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 466 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__2_2;
#line 466 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_17_17;
#line 466 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_18_18;
#line 466 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_19_19;
#line 466 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_20_20;
#line 466 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_21_21;
#line 466 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_22_22;
#line 466 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_7_7;
#line 467 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv1_HeadVar__2_2;

#line 5794 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 5796 "mode_robdd.implications.c"
    {
#line 5798 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5800 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_17_17));
#line 5802 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_16));
#line 5804 "mode_robdd.implications.c"
    }
#line 5806 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_19_19 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 5808 "mode_robdd.implications.c"
    {
#line 5810 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5812 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_20_20, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_19_19));
#line 5814 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_20_20, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_18_18));
#line 5816 "mode_robdd.implications.c"
    }
#line 5818 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_21_21 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 5820 "mode_robdd.implications.c"
    {
#line 5822 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5824 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_21_21));
#line 5826 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_18_18));
#line 5828 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_20_20));
#line 5830 "mode_robdd.implications.c"
    }
#line 467 "mode_robdd.implications.m"
    {
#line 467 "mode_robdd.implications.m"
      mode_robdd__implications__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 467 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[2]));
#line 467 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 1) = ((MR_Box) (mode_robdd__implications__remove_empty_sets_1_f_0_1));
#line 467 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 467 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_16));
#line 467 "mode_robdd.implications.m"
    }
#line 467 "mode_robdd.implications.m"
    {
#line 467 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_HeadVar__2_2 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_18_18, mode_robdd__implications__TypeInfo_20_20, mode_robdd__implications__TypeInfo_22_22, (MR_Word) mode_robdd__implications__V_7_7, (MR_Word) mode_robdd__implications__IM_3, ((MR_Box) (mode_robdd__implications__IM_3)));
    }
#line 467 "mode_robdd.implications.m"
    mode_robdd__implications__HeadVar__2_2 = ((MR_Word) mode_robdd__implications__conv1_HeadVar__2_2);
#line 466 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__2_2;
#line 466 "mode_robdd.implications.m"
  }
#line 464 "mode_robdd.implications.m"
}

#line 455 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__imp_map_difference_2_f_0_1(
#line 455 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 455 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 455 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 455 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3)
#line 455 "mode_robdd.implications.m"
{
#line 455 "mode_robdd.implications.m"
  {
#line 455 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_4;
#line 455 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 455 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__5_14;

#line 455 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 455 "mode_robdd.implications.m"
    {
#line 455 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__5_14 = mode_robdd__implications__IntroducedFrom__func__imp_map_difference__455__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Word) mode_robdd__implications__wrapper_arg_3));
    }
#line 455 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__5_14));
#line 455 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_4;
#line 455 "mode_robdd.implications.m"
  }
#line 455 "mode_robdd.implications.m"
}

#line 449 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__imp_map_difference_2_f_0(
#line 449 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
#line 449 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IMA_4,
#line 449 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IMB_5)
#line 449 "mode_robdd.implications.m"
{
#line 451 "mode_robdd.implications.m"
  {
#line 451 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 451 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 452 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_20_20;
#line 452 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_21_21;
#line 452 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_22_22;
#line 452 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_23_23;

#line 5924 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 5926 "mode_robdd.implications.c"
    {
#line 5928 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5930 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_21_21, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_20_20));
#line 5932 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_21_21, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 5934 "mode_robdd.implications.c"
    }
#line 5936 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_22_22 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 5938 "mode_robdd.implications.c"
    {
#line 5940 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5942 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_22_22));
#line 5944 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_21_21));
#line 5946 "mode_robdd.implications.c"
    }
#line 452 "mode_robdd.implications.m"
    {
#line 452 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__implications__TypeInfo_21_21, mode_robdd__implications__TypeInfo_23_23, (MR_Word) mode_robdd__implications__IMA_4);
    }
#line 451 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 451 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__IMA_4;
#line 451 "mode_robdd.implications.m"
    else
#line 455 "mode_robdd.implications.m"
      {
#line 455 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_24_24;
#line 455 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_25_25;
#line 455 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_26_26;
#line 455 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_27_27;
#line 455 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_28_28;
#line 455 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_29_29;
#line 455 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_10_10;
#line 455 "mode_robdd.implications.m"
        MR_Box mode_robdd__implications__conv1_HeadVar__3_3;

#line 5978 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_24_24 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 5980 "mode_robdd.implications.c"
        {
#line 5982 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5984 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_25_25, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_24_24));
#line 5986 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_25_25, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 5988 "mode_robdd.implications.c"
        }
#line 5990 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_26_26 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 5992 "mode_robdd.implications.c"
        {
#line 5994 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5996 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_27_27, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_26_26));
#line 5998 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_27_27, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_25_25));
#line 6000 "mode_robdd.implications.c"
        }
#line 6002 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_28_28 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 6004 "mode_robdd.implications.c"
        {
#line 6006 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6008 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_29_29, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_28_28));
#line 6010 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_29_29, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_25_25));
#line 6012 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_29_29, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_27_27));
#line 6014 "mode_robdd.implications.c"
        }
#line 455 "mode_robdd.implications.m"
        {
#line 455 "mode_robdd.implications.m"
          mode_robdd__implications__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 455 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[2]));
#line 455 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 1) = ((MR_Box) (mode_robdd__implications__imp_map_difference_2_f_0_1));
#line 455 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 455 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 455 "mode_robdd.implications.m"
        }
#line 455 "mode_robdd.implications.m"
        {
#line 455 "mode_robdd.implications.m"
          mode_robdd__implications__conv1_HeadVar__3_3 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_25_25, mode_robdd__implications__TypeInfo_27_27, mode_robdd__implications__TypeInfo_29_29, (MR_Word) mode_robdd__implications__V_10_10, (MR_Word) mode_robdd__implications__IMB_5, ((MR_Box) (mode_robdd__implications__IMA_4)));
        }
#line 455 "mode_robdd.implications.m"
        mode_robdd__implications__HeadVar__3_3 = ((MR_Word) mode_robdd__implications__conv1_HeadVar__3_3);
#line 455 "mode_robdd.implications.m"
      }
#line 451 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 451 "mode_robdd.implications.m"
  }
#line 449 "mode_robdd.implications.m"
}

#line 447 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__intersect_2_f_0_1(
#line 447 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 447 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 447 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2)
#line 447 "mode_robdd.implications.m"
{
#line 447 "mode_robdd.implications.m"
  {
#line 447 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_3;
#line 447 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 447 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__4_15;

#line 447 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 447 "mode_robdd.implications.m"
    {
#line 447 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__4_15 = mode_robdd__implications__IntroducedFrom__func__intersect__447__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2));
    }
#line 447 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_3 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__4_15));
#line 447 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_3;
#line 447 "mode_robdd.implications.m"
  }
#line 447 "mode_robdd.implications.m"
}

#line 445 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__intersect_2_f_0(
#line 445 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_8,
#line 445 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IMA_4,
#line 445 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IMB_5)
#line 445 "mode_robdd.implications.m"
{
#line 447 "mode_robdd.implications.m"
  {
#line 447 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 447 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 447 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_9_9;
#line 447 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_10_10;
#line 447 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_11_11;
#line 447 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_12_12;
#line 447 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_6_6;
#line 447 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_7_7;
#line 447 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv1_V_6_6;

#line 6114 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_11_11 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 6116 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 6118 "mode_robdd.implications.c"
    {
#line 6120 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6122 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_9_9));
#line 6124 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_8));
#line 6126 "mode_robdd.implications.c"
    }
#line 6128 "mode_robdd.implications.c"
    {
#line 6130 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6132 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_12_12, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_11_11));
#line 6134 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_12_12, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_10_10));
#line 6136 "mode_robdd.implications.c"
    }
#line 447 "mode_robdd.implications.m"
    {
#line 447 "mode_robdd.implications.m"
      mode_robdd__implications__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 447 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[3]));
#line 447 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 1) = ((MR_Box) (mode_robdd__implications__intersect_2_f_0_1));
#line 447 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 447 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_8));
#line 447 "mode_robdd.implications.m"
    }
#line 447 "mode_robdd.implications.m"
    {
#line 447 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_V_6_6 = mercury__map__intersect_3_f_0(mode_robdd__implications__TypeInfo_12_12, mode_robdd__implications__TypeInfo_10_10, (MR_Word) mode_robdd__implications__V_7_7, (MR_Word) mode_robdd__implications__IMA_4, (MR_Word) mode_robdd__implications__IMB_5);
    }
#line 447 "mode_robdd.implications.m"
    mode_robdd__implications__V_6_6 = (MR_Word) mode_robdd__implications__conv1_V_6_6;
#line 447 "mode_robdd.implications.m"
    {
#line 447 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__remove_empty_sets_1_f_0(mode_robdd__implications__TypeInfo_for_T_8, mode_robdd__implications__V_6_6);
    }
#line 447 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 447 "mode_robdd.implications.m"
  }
#line 445 "mode_robdd.implications.m"
}

#line 433 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__apply_to_coresp_imp_maps_3_f_0(
#line 433 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_21,
#line 433 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__F_5,
#line 433 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVarsA_6,
#line 433 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVarsB_7)
#line 433 "mode_robdd.implications.m"
{
#line 436 "mode_robdd.implications.m"
  {
#line 436 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 436 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__ImpVars_8;
#line 436 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__IA_9;
#line 436 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RIA_10;
#line 436 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__DIA_11;
#line 436 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RDIA_12;
#line 436 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__IB_13;
#line 436 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RIB_14;
#line 436 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__DIB_15;
#line 436 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RDIB_16;
#line 436 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_17_17;
#line 436 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_18_18;
#line 436 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_19_19;
#line 436 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_20_20;
#line 439 "mode_robdd.implications.m"
    MR_Box MR_CALL (* mode_robdd__implications__func_0)(MR_Box, MR_Box, MR_Box);
#line 439 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv1_V_17_17;
#line 439 "mode_robdd.implications.m"
    MR_Box MR_CALL (* mode_robdd__implications__func_2)(MR_Box, MR_Box, MR_Box);
#line 439 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv3_V_18_18;
#line 439 "mode_robdd.implications.m"
    MR_Box MR_CALL (* mode_robdd__implications__func_4)(MR_Box, MR_Box, MR_Box);
#line 439 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv5_V_19_19;
#line 439 "mode_robdd.implications.m"
    MR_Box MR_CALL (* mode_robdd__implications__func_6)(MR_Box, MR_Box, MR_Box);
#line 439 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv7_V_20_20;

#line 437 "mode_robdd.implications.m"
    mode_robdd__implications__IA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVarsA_6, (MR_Integer) 0)));
#line 437 "mode_robdd.implications.m"
    mode_robdd__implications__RIA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVarsA_6, (MR_Integer) 1)));
#line 437 "mode_robdd.implications.m"
    mode_robdd__implications__DIA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVarsA_6, (MR_Integer) 2)));
#line 437 "mode_robdd.implications.m"
    mode_robdd__implications__RDIA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVarsA_6, (MR_Integer) 3)));
#line 438 "mode_robdd.implications.m"
    mode_robdd__implications__IB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVarsB_7, (MR_Integer) 0)));
#line 438 "mode_robdd.implications.m"
    mode_robdd__implications__RIB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVarsB_7, (MR_Integer) 1)));
#line 438 "mode_robdd.implications.m"
    mode_robdd__implications__DIB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVarsB_7, (MR_Integer) 2)));
#line 438 "mode_robdd.implications.m"
    mode_robdd__implications__RDIB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVarsB_7, (MR_Integer) 3)));
#line 439 "mode_robdd.implications.m"
    mode_robdd__implications__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__F_5, (MR_Integer) 1)));
#line 439 "mode_robdd.implications.m"
    {
#line 439 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_V_17_17 = mode_robdd__implications__func_0(((MR_Box) mode_robdd__implications__F_5), ((MR_Box) (mode_robdd__implications__IA_9)), ((MR_Box) (mode_robdd__implications__IB_13)));
    }
#line 439 "mode_robdd.implications.m"
    mode_robdd__implications__V_17_17 = ((MR_Word) mode_robdd__implications__conv1_V_17_17);
#line 439 "mode_robdd.implications.m"
    mode_robdd__implications__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__F_5, (MR_Integer) 1)));
#line 439 "mode_robdd.implications.m"
    {
#line 439 "mode_robdd.implications.m"
      mode_robdd__implications__conv3_V_18_18 = mode_robdd__implications__func_2(((MR_Box) mode_robdd__implications__F_5), ((MR_Box) (mode_robdd__implications__RIA_10)), ((MR_Box) (mode_robdd__implications__RIB_14)));
    }
#line 439 "mode_robdd.implications.m"
    mode_robdd__implications__V_18_18 = ((MR_Word) mode_robdd__implications__conv3_V_18_18);
#line 439 "mode_robdd.implications.m"
    mode_robdd__implications__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__F_5, (MR_Integer) 1)));
#line 439 "mode_robdd.implications.m"
    {
#line 439 "mode_robdd.implications.m"
      mode_robdd__implications__conv5_V_19_19 = mode_robdd__implications__func_4(((MR_Box) mode_robdd__implications__F_5), ((MR_Box) (mode_robdd__implications__DIA_11)), ((MR_Box) (mode_robdd__implications__DIB_15)));
    }
#line 439 "mode_robdd.implications.m"
    mode_robdd__implications__V_19_19 = ((MR_Word) mode_robdd__implications__conv5_V_19_19);
#line 439 "mode_robdd.implications.m"
    mode_robdd__implications__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__F_5, (MR_Integer) 1)));
#line 439 "mode_robdd.implications.m"
    {
#line 439 "mode_robdd.implications.m"
      mode_robdd__implications__conv7_V_20_20 = mode_robdd__implications__func_6(((MR_Box) mode_robdd__implications__F_5), ((MR_Box) (mode_robdd__implications__RDIA_12)), ((MR_Box) (mode_robdd__implications__RDIB_16)));
    }
#line 439 "mode_robdd.implications.m"
    mode_robdd__implications__V_20_20 = ((MR_Word) mode_robdd__implications__conv7_V_20_20);
#line 439 "mode_robdd.implications.m"
    {
#line 439 "mode_robdd.implications.m"
      mode_robdd__implications__ImpVars_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 439 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_8, 0) = ((MR_Box) (mode_robdd__implications__V_17_17));
#line 439 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_8, 1) = ((MR_Box) (mode_robdd__implications__V_18_18));
#line 439 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_8, 2) = ((MR_Box) (mode_robdd__implications__V_19_19));
#line 439 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_8, 3) = ((MR_Box) (mode_robdd__implications__V_20_20));
#line 439 "mode_robdd.implications.m"
    }
#line 436 "mode_robdd.implications.m"
    return mode_robdd__implications__ImpVars_8;
#line 436 "mode_robdd.implications.m"
  }
#line 433 "mode_robdd.implications.m"
}

#line 426 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__apply_to_imp_maps_2_f_0(
#line 426 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_15,
#line 426 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__F_4,
#line 426 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpVars0_5)
#line 426 "mode_robdd.implications.m"
{
#line 429 "mode_robdd.implications.m"
  {
#line 429 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 429 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__ImpVars_6;
#line 429 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__I_7;
#line 429 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RI_8;
#line 429 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__DI_9;
#line 429 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RDI_10;
#line 429 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_11_11;
#line 429 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_12_12;
#line 429 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_13_13;
#line 429 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_14_14;
#line 431 "mode_robdd.implications.m"
    MR_Box MR_CALL (* mode_robdd__implications__func_0)(MR_Box, MR_Box);
#line 431 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv1_V_11_11;
#line 431 "mode_robdd.implications.m"
    MR_Box MR_CALL (* mode_robdd__implications__func_2)(MR_Box, MR_Box);
#line 431 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv3_V_12_12;
#line 431 "mode_robdd.implications.m"
    MR_Box MR_CALL (* mode_robdd__implications__func_4)(MR_Box, MR_Box);
#line 431 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv5_V_13_13;
#line 431 "mode_robdd.implications.m"
    MR_Box MR_CALL (* mode_robdd__implications__func_6)(MR_Box, MR_Box);
#line 431 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv7_V_14_14;

#line 430 "mode_robdd.implications.m"
    mode_robdd__implications__I_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_5, (MR_Integer) 0)));
#line 430 "mode_robdd.implications.m"
    mode_robdd__implications__RI_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_5, (MR_Integer) 1)));
#line 430 "mode_robdd.implications.m"
    mode_robdd__implications__DI_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_5, (MR_Integer) 2)));
#line 430 "mode_robdd.implications.m"
    mode_robdd__implications__RDI_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_5, (MR_Integer) 3)));
#line 431 "mode_robdd.implications.m"
    mode_robdd__implications__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__F_4, (MR_Integer) 1)));
#line 431 "mode_robdd.implications.m"
    {
#line 431 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_V_11_11 = mode_robdd__implications__func_0(((MR_Box) mode_robdd__implications__F_4), ((MR_Box) (mode_robdd__implications__I_7)));
    }
#line 431 "mode_robdd.implications.m"
    mode_robdd__implications__V_11_11 = ((MR_Word) mode_robdd__implications__conv1_V_11_11);
#line 431 "mode_robdd.implications.m"
    mode_robdd__implications__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__F_4, (MR_Integer) 1)));
#line 431 "mode_robdd.implications.m"
    {
#line 431 "mode_robdd.implications.m"
      mode_robdd__implications__conv3_V_12_12 = mode_robdd__implications__func_2(((MR_Box) mode_robdd__implications__F_4), ((MR_Box) (mode_robdd__implications__RI_8)));
    }
#line 431 "mode_robdd.implications.m"
    mode_robdd__implications__V_12_12 = ((MR_Word) mode_robdd__implications__conv3_V_12_12);
#line 431 "mode_robdd.implications.m"
    mode_robdd__implications__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__F_4, (MR_Integer) 1)));
#line 431 "mode_robdd.implications.m"
    {
#line 431 "mode_robdd.implications.m"
      mode_robdd__implications__conv5_V_13_13 = mode_robdd__implications__func_4(((MR_Box) mode_robdd__implications__F_4), ((MR_Box) (mode_robdd__implications__DI_9)));
    }
#line 431 "mode_robdd.implications.m"
    mode_robdd__implications__V_13_13 = ((MR_Word) mode_robdd__implications__conv5_V_13_13);
#line 431 "mode_robdd.implications.m"
    mode_robdd__implications__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mode_robdd__implications__F_4, (MR_Integer) 1)));
#line 431 "mode_robdd.implications.m"
    {
#line 431 "mode_robdd.implications.m"
      mode_robdd__implications__conv7_V_14_14 = mode_robdd__implications__func_6(((MR_Box) mode_robdd__implications__F_4), ((MR_Box) (mode_robdd__implications__RDI_10)));
    }
#line 431 "mode_robdd.implications.m"
    mode_robdd__implications__V_14_14 = ((MR_Word) mode_robdd__implications__conv7_V_14_14);
#line 431 "mode_robdd.implications.m"
    {
#line 431 "mode_robdd.implications.m"
      mode_robdd__implications__ImpVars_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 431 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_6, 0) = ((MR_Box) (mode_robdd__implications__V_11_11));
#line 431 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_6, 1) = ((MR_Box) (mode_robdd__implications__V_12_12));
#line 431 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_6, 2) = ((MR_Box) (mode_robdd__implications__V_13_13));
#line 431 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars_6, 3) = ((MR_Box) (mode_robdd__implications__V_14_14));
#line 431 "mode_robdd.implications.m"
    }
#line 429 "mode_robdd.implications.m"
    return mode_robdd__implications__ImpVars_6;
#line 429 "mode_robdd.implications.m"
  }
#line 426 "mode_robdd.implications.m"
}

#line 416 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications__empty_1_p_0(
#line 416 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_6,
#line 416 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__1_1)
#line 416 "mode_robdd.implications.m"
{
#line 418 "mode_robdd.implications.m"
  {
#line 418 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 418 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_7_7;
#line 418 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_8_8;
#line 418 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_9_9;
#line 418 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_10_10;
#line 418 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__I_2;
#line 418 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RI_3;
#line 418 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__DI_4;
#line 418 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RDI_5;

#line 418 "mode_robdd.implications.m"
    mode_robdd__implications__I_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 0)));
#line 418 "mode_robdd.implications.m"
    mode_robdd__implications__RI_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "mode_robdd.implications.m"
    mode_robdd__implications__DI_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 2)));
#line 418 "mode_robdd.implications.m"
    mode_robdd__implications__RDI_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, (MR_Integer) 3)));
#line 6457 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_7_7 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 6459 "mode_robdd.implications.c"
    {
#line 6461 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6463 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_8_8, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_7_7));
#line 6465 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_8_8, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_6));
#line 6467 "mode_robdd.implications.c"
    }
#line 6469 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_9_9 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 6471 "mode_robdd.implications.c"
    {
#line 6473 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6475 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_9_9));
#line 6477 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_8_8));
#line 6479 "mode_robdd.implications.c"
    }
#line 419 "mode_robdd.implications.m"
    {
#line 419 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__implications__TypeInfo_8_8, mode_robdd__implications__TypeInfo_10_10, (MR_Word) mode_robdd__implications__I_2);
    }
#line 418 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 418 "mode_robdd.implications.m"
      {
#line 420 "mode_robdd.implications.m"
        {
#line 420 "mode_robdd.implications.m"
          mode_robdd__implications__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__implications__TypeInfo_8_8, mode_robdd__implications__TypeInfo_10_10, (MR_Word) mode_robdd__implications__RI_3);
        }
#line 418 "mode_robdd.implications.m"
        if (mode_robdd__implications__succeeded)
#line 418 "mode_robdd.implications.m"
          {
#line 421 "mode_robdd.implications.m"
            {
#line 421 "mode_robdd.implications.m"
              mode_robdd__implications__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__implications__TypeInfo_8_8, mode_robdd__implications__TypeInfo_10_10, (MR_Word) mode_robdd__implications__DI_4);
            }
#line 418 "mode_robdd.implications.m"
            if (mode_robdd__implications__succeeded)
#line 422 "mode_robdd.implications.m"
              {
#line 422 "mode_robdd.implications.m"
                mode_robdd__implications__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__implications__TypeInfo_8_8, mode_robdd__implications__TypeInfo_10_10, (MR_Word) mode_robdd__implications__RDI_5);
              }
#line 418 "mode_robdd.implications.m"
          }
#line 418 "mode_robdd.implications.m"
      }
#line 418 "mode_robdd.implications.m"
    return mode_robdd__implications__succeeded;
#line 418 "mode_robdd.implications.m"
  }
#line 416 "mode_robdd.implications.m"
}

#line 396 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications__f_109_97_121_98_101_95_110_101_119_95_114_101_108_97_116_105_111_110_32_58_61_3_f_0(
#line 396 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_12,
#line 396 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__VA_5,
#line 396 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__M0_6,
#line 396 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__VB_7,
#line 396 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__M_8)
#line 396 "mode_robdd.implications.m"
{
#line 403 "mode_robdd.implications.m"
  {
#line 403 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 403 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Vs_9;
#line 400 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_13_13;
#line 400 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_14_14;
#line 400 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_15_15;
#line 400 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_16_16;
#line 400 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv0_Vs_9;

#line 6554 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_13_13 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 6556 "mode_robdd.implications.c"
    {
#line 6558 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6560 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_13_13));
#line 6562 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
#line 6564 "mode_robdd.implications.c"
    }
#line 6566 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_15_15 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 6568 "mode_robdd.implications.c"
    {
#line 6570 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6572 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_16_16, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_15_15));
#line 6574 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_16_16, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_14_14));
#line 6576 "mode_robdd.implications.c"
    }
#line 400 "mode_robdd.implications.m"
    {
#line 400 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__map__elem_2_f_0(mode_robdd__implications__TypeInfo_14_14, mode_robdd__implications__TypeInfo_16_16, ((MR_Box) (mode_robdd__implications__VA_5)), (MR_Word) mode_robdd__implications__M0_6, &mode_robdd__implications__conv0_Vs_9);
    }
#line 400 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 400 "mode_robdd.implications.m"
      {
#line 400 "mode_robdd.implications.m"
        mode_robdd__implications__Vs_9 = ((MR_Word) mode_robdd__implications__conv0_Vs_9);
#line 400 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = MR_TRUE;
#line 400 "mode_robdd.implications.m"
      }
#line 403 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 401 "mode_robdd.implications.m"
      {
#line 401 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_21_21;
#line 401 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_22_22;
#line 401 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_23;
#line 401 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_24;
#line 401 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_25_25;
#line 401 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_26_26;
#line 401 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_10_10;
#line 401 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_17_17;
#line 401 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_18_18;
#line 401 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_19;
#line 401 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_20;
#line 402 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv1_V_10_10;
#line 402 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv2_M_8;

#line 6624 "mode_robdd.implications.c"
        mode_robdd__implications__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 6626 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 6628 "mode_robdd.implications.c"
        {
#line 6630 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6632 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_17_17));
#line 6634 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
#line 6636 "mode_robdd.implications.c"
        }
#line 6638 "mode_robdd.implications.c"
        {
#line 6640 "mode_robdd.implications.c"
          mode_robdd__implications__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6642 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_19));
#line 6644 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
#line 6646 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_18_18));
#line 6648 "mode_robdd.implications.c"
        }
#line 401 "mode_robdd.implications.m"
        {
#line 401 "mode_robdd.implications.m"
          mode_robdd__implications__succeeded = mercury__sparse_bitset__contains_2_p_0(mode_robdd__implications__TypeClassInfo_for_enum_20, (MR_Word) mode_robdd__implications__Vs_9, ((MR_Box) (mode_robdd__implications__VB_7)));
        }
#line 401 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = !(mode_robdd__implications__succeeded);
#line 401 "mode_robdd.implications.m"
        if (mode_robdd__implications__succeeded)
#line 401 "mode_robdd.implications.m"
          {
#line 6661 "mode_robdd.implications.c"
            mode_robdd__implications__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 6663 "mode_robdd.implications.c"
            mode_robdd__implications__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 6665 "mode_robdd.implications.c"
            {
#line 6667 "mode_robdd.implications.c"
              mode_robdd__implications__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6669 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_21_21));
#line 6671 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
#line 6673 "mode_robdd.implications.c"
            }
#line 6675 "mode_robdd.implications.c"
            {
#line 6677 "mode_robdd.implications.c"
              mode_robdd__implications__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6679 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_23));
#line 6681 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
#line 6683 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_22_22));
#line 6685 "mode_robdd.implications.c"
            }
#line 402 "mode_robdd.implications.m"
            {
#line 402 "mode_robdd.implications.m"
              mode_robdd__implications__conv1_V_10_10 = mercury__sparse_bitset__insert_2_f_0(mode_robdd__implications__TypeClassInfo_for_enum_24, (MR_Word) mode_robdd__implications__Vs_9, ((MR_Box) (mode_robdd__implications__VB_7)));
            }
#line 402 "mode_robdd.implications.m"
            mode_robdd__implications__V_10_10 = (MR_Word) mode_robdd__implications__conv1_V_10_10;
#line 6694 "mode_robdd.implications.c"
            mode_robdd__implications__TypeCtorInfo_25_25 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 6696 "mode_robdd.implications.c"
            {
#line 6698 "mode_robdd.implications.c"
              mode_robdd__implications__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6700 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_25_25));
#line 6702 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_22_22));
#line 6704 "mode_robdd.implications.c"
            }
#line 402 "mode_robdd.implications.m"
            {
#line 402 "mode_robdd.implications.m"
              mode_robdd__implications__conv2_M_8 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_22_22, mode_robdd__implications__TypeInfo_26_26, ((MR_Box) (mode_robdd__implications__VA_5)), (MR_Word) mode_robdd__implications__M0_6, ((MR_Box) (mode_robdd__implications__V_10_10)));
            }
#line 402 "mode_robdd.implications.m"
            *mode_robdd__implications__M_8 = (MR_Word) mode_robdd__implications__conv2_M_8;
#line 402 "mode_robdd.implications.m"
            mode_robdd__implications__succeeded = MR_TRUE;
#line 401 "mode_robdd.implications.m"
          }
#line 401 "mode_robdd.implications.m"
      }
#line 403 "mode_robdd.implications.m"
    else
#line 404 "mode_robdd.implications.m"
      {
#line 404 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_27_27;
#line 404 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_28_28;
#line 404 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_29;
#line 404 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_30;
#line 404 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_31_31;
#line 404 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_32_32;
#line 404 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_11_11;
#line 404 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv3_V_11_11;
#line 404 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv4_M_8;

#line 6742 "mode_robdd.implications.c"
        mode_robdd__implications__BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 6744 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 6746 "mode_robdd.implications.c"
        {
#line 6748 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6750 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_28_28, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_27_27));
#line 6752 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
#line 6754 "mode_robdd.implications.c"
        }
#line 6756 "mode_robdd.implications.c"
        {
#line 6758 "mode_robdd.implications.c"
          mode_robdd__implications__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6760 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_29));
#line 6762 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
#line 6764 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_28_28));
#line 6766 "mode_robdd.implications.c"
        }
#line 404 "mode_robdd.implications.m"
        {
#line 404 "mode_robdd.implications.m"
          mode_robdd__implications__conv3_V_11_11 = mercury__sparse_bitset__make_singleton_set_1_f_0(mode_robdd__implications__TypeClassInfo_for_enum_30, ((MR_Box) (mode_robdd__implications__VB_7)));
        }
#line 404 "mode_robdd.implications.m"
        mode_robdd__implications__V_11_11 = (MR_Word) mode_robdd__implications__conv3_V_11_11;
#line 6775 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_31_31 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 6777 "mode_robdd.implications.c"
        {
#line 6779 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6781 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_32_32, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_31_31));
#line 6783 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_32_32, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_28_28));
#line 6785 "mode_robdd.implications.c"
        }
#line 404 "mode_robdd.implications.m"
        {
#line 404 "mode_robdd.implications.m"
          mode_robdd__implications__conv4_M_8 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_28_28, mode_robdd__implications__TypeInfo_32_32, ((MR_Box) (mode_robdd__implications__VA_5)), (MR_Word) mode_robdd__implications__M0_6, ((MR_Box) (mode_robdd__implications__V_11_11)));
        }
#line 404 "mode_robdd.implications.m"
        *mode_robdd__implications__M_8 = (MR_Word) mode_robdd__implications__conv4_M_8;
#line 404 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = MR_TRUE;
#line 404 "mode_robdd.implications.m"
      }
#line 403 "mode_robdd.implications.m"
    return mode_robdd__implications__succeeded;
#line 403 "mode_robdd.implications.m"
  }
#line 396 "mode_robdd.implications.m"
}

#line 378 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(
#line 378 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_8,
#line 378 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__V_5,
#line 378 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__M_6,
#line 378 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Vs_7)
#line 378 "mode_robdd.implications.m"
{
#line 380 "mode_robdd.implications.m"
  {
#line 380 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 380 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__4_4;
#line 381 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_9_9;
#line 381 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_10_10;

#line 6829 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 6831 "mode_robdd.implications.c"
    {
#line 6833 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6835 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_9_9));
#line 6837 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_8));
#line 6839 "mode_robdd.implications.c"
    }
#line 381 "mode_robdd.implications.m"
    {
#line 381 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__implications__TypeInfo_10_10, (MR_Word) mode_robdd__implications__Vs_7);
    }
#line 380 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 382 "mode_robdd.implications.m"
      {
#line 382 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_11_11;
#line 382 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_12_12;
#line 382 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_13_13;
#line 382 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_14_14;
#line 382 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv0_HeadVar__4_4;

#line 6861 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_11_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 6863 "mode_robdd.implications.c"
        {
#line 6865 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6867 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_12_12, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_11_11));
#line 6869 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_12_12, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_8));
#line 6871 "mode_robdd.implications.c"
        }
#line 6873 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_13_13 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 6875 "mode_robdd.implications.c"
        {
#line 6877 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6879 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_13_13));
#line 6881 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_12_12));
#line 6883 "mode_robdd.implications.c"
        }
#line 382 "mode_robdd.implications.m"
        {
#line 382 "mode_robdd.implications.m"
          mode_robdd__implications__conv0_HeadVar__4_4 = mercury__map__delete_2_f_0(mode_robdd__implications__TypeInfo_12_12, mode_robdd__implications__TypeInfo_14_14, (MR_Word) mode_robdd__implications__M_6, ((MR_Box) (mode_robdd__implications__V_5)));
        }
#line 382 "mode_robdd.implications.m"
        mode_robdd__implications__HeadVar__4_4 = (MR_Word) mode_robdd__implications__conv0_HeadVar__4_4;
#line 382 "mode_robdd.implications.m"
      }
#line 380 "mode_robdd.implications.m"
    else
#line 380 "mode_robdd.implications.m"
      {
#line 380 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_15_15;
#line 380 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_16_16;
#line 380 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_17_17;
#line 380 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_18_18;
#line 380 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv1_HeadVar__4_4;

#line 6909 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 6911 "mode_robdd.implications.c"
        {
#line 6913 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6915 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_16_16, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_15_15));
#line 6917 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_16_16, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_8));
#line 6919 "mode_robdd.implications.c"
        }
#line 6921 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_17_17 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 6923 "mode_robdd.implications.c"
        {
#line 6925 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6927 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_17_17));
#line 6929 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_16_16));
#line 6931 "mode_robdd.implications.c"
        }
#line 380 "mode_robdd.implications.m"
        {
#line 380 "mode_robdd.implications.m"
          mode_robdd__implications__conv1_HeadVar__4_4 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_16_16, mode_robdd__implications__TypeInfo_18_18, ((MR_Box) (mode_robdd__implications__V_5)), (MR_Word) mode_robdd__implications__M_6, ((MR_Box) (mode_robdd__implications__Vs_7)));
        }
#line 380 "mode_robdd.implications.m"
        mode_robdd__implications__HeadVar__4_4 = (MR_Word) mode_robdd__implications__conv1_HeadVar__4_4;
#line 380 "mode_robdd.implications.m"
      }
#line 380 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__4_4;
#line 380 "mode_robdd.implications.m"
  }
#line 378 "mode_robdd.implications.m"
}

#line 369 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__entry_2_f_0(
#line 369 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_7,
#line 369 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__V_4,
#line 369 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__M_5)
#line 369 "mode_robdd.implications.m"
{
#line 371 "mode_robdd.implications.m"
  {
#line 371 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 371 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 371 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Vs_6;
#line 372 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_8_8;
#line 372 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_9_9;
#line 372 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_10_10;
#line 372 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_11_11;
#line 372 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv0_Vs_6;

#line 6979 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_8_8 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 6981 "mode_robdd.implications.c"
    {
#line 6983 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6985 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_9_9, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_8_8));
#line 6987 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_9_9, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_7));
#line 6989 "mode_robdd.implications.c"
    }
#line 6991 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_10_10 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 6993 "mode_robdd.implications.c"
    {
#line 6995 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6997 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_11_11, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_10_10));
#line 6999 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_11_11, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_9_9));
#line 7001 "mode_robdd.implications.c"
    }
#line 372 "mode_robdd.implications.m"
    {
#line 372 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__map__elem_2_f_0(mode_robdd__implications__TypeInfo_9_9, mode_robdd__implications__TypeInfo_11_11, ((MR_Box) (mode_robdd__implications__V_4)), (MR_Word) mode_robdd__implications__M_5, &mode_robdd__implications__conv0_Vs_6);
    }
#line 372 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 372 "mode_robdd.implications.m"
      {
#line 372 "mode_robdd.implications.m"
        mode_robdd__implications__Vs_6 = ((MR_Word) mode_robdd__implications__conv0_Vs_6);
#line 372 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = MR_TRUE;
#line 372 "mode_robdd.implications.m"
      }
#line 371 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 371 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__Vs_6;
#line 371 "mode_robdd.implications.m"
    else
#line 375 "mode_robdd.implications.m"
      {
#line 375 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_12_12;
#line 375 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_13_13;
#line 375 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__conv1_HeadVar__3_3;

#line 7033 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_12_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 7035 "mode_robdd.implications.c"
        {
#line 7037 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7039 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_13_13, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_12_12));
#line 7041 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_13_13, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_7));
#line 7043 "mode_robdd.implications.c"
        }
#line 375 "mode_robdd.implications.m"
        {
#line 375 "mode_robdd.implications.m"
          mode_robdd__implications__conv1_HeadVar__3_3 = mercury__sparse_bitset__init_0_f_0(mode_robdd__implications__TypeInfo_13_13);
        }
#line 375 "mode_robdd.implications.m"
        mode_robdd__implications__HeadVar__3_3 = (MR_Word) mode_robdd__implications__conv1_HeadVar__3_3;
#line 375 "mode_robdd.implications.m"
      }
#line 371 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 371 "mode_robdd.implications.m"
  }
#line 369 "mode_robdd.implications.m"
}

#line 298 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_1(
#line 298 "mode_robdd.implications.m"
  void * mode_robdd__implications__env_ptr_arg)
#line 298 "mode_robdd.implications.m"
{
#line 298 "mode_robdd.implications.m"
  {
#line 298 "mode_robdd.implications.m"
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * mode_robdd__implications__env_ptr;

#line 298 "mode_robdd.implications.m"
    mode_robdd__implications__env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s *) mode_robdd__implications__env_ptr_arg;
#line 298 "mode_robdd.implications.m"
    MR_builtin_longjmp((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__commit_0, 1);
#line 298 "mode_robdd.implications.m"
  }
#line 298 "mode_robdd.implications.m"
}

#line 301 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_3(
#line 301 "mode_robdd.implications.m"
  void * mode_robdd__implications__env_ptr_arg)
#line 301 "mode_robdd.implications.m"
{
#line 301 "mode_robdd.implications.m"
  {
#line 301 "mode_robdd.implications.m"
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * mode_robdd__implications__env_ptr;

#line 301 "mode_robdd.implications.m"
    mode_robdd__implications__env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s *) mode_robdd__implications__env_ptr_arg;
#line 301 "mode_robdd.implications.m"
    (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__VA_8 = ((MR_Word) (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv1_VA_8);
#line 301 "mode_robdd.implications.m"
    (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__Vs_10 = ((MR_Word) (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv0_Vs_10);
#line 301 "mode_robdd.implications.m"
    {
#line 301 "mode_robdd.implications.m"
      mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_2(mode_robdd__implications__env_ptr);
    }
#line 301 "mode_robdd.implications.m"
  }
#line 301 "mode_robdd.implications.m"
}

#line 301 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_5(
#line 301 "mode_robdd.implications.m"
  void * mode_robdd__implications__env_ptr_arg)
#line 301 "mode_robdd.implications.m"
{
#line 301 "mode_robdd.implications.m"
  {
#line 301 "mode_robdd.implications.m"
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * mode_robdd__implications__env_ptr;

#line 301 "mode_robdd.implications.m"
    mode_robdd__implications__env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s *) mode_robdd__implications__env_ptr_arg;
#line 301 "mode_robdd.implications.m"
    (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__VB_9 = ((MR_Word) (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv2_VB_9);
#line 301 "mode_robdd.implications.m"
    {
#line 301 "mode_robdd.implications.m"
      mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_4(mode_robdd__implications__env_ptr);
    }
#line 301 "mode_robdd.implications.m"
  }
#line 301 "mode_robdd.implications.m"
}

#line 298 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_4(
#line 298 "mode_robdd.implications.m"
  void * mode_robdd__implications__env_ptr_arg)
#line 298 "mode_robdd.implications.m"
{
#line 298 "mode_robdd.implications.m"
  {
#line 298 "mode_robdd.implications.m"
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * mode_robdd__implications__env_ptr;

#line 298 "mode_robdd.implications.m"
    mode_robdd__implications__env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s *) mode_robdd__implications__env_ptr_arg;
#line 303 "mode_robdd.implications.m"
    {
#line 303 "mode_robdd.implications.m"
      (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded = mode_robdd__equiv_vars__vars_are_not_equivalent_3_p_0((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_for_T_11, (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__EQVars_4, (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__VA_8, (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__VB_9);
    }
#line 302 "mode_robdd.implications.m"
    (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded = !((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded);
#line 302 "mode_robdd.implications.m"
    if ((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded)
#line 302 "mode_robdd.implications.m"
      {
#line 302 "mode_robdd.implications.m"
        mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_1(mode_robdd__implications__env_ptr);
      }
#line 298 "mode_robdd.implications.m"
  }
#line 298 "mode_robdd.implications.m"
}

#line 298 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_2(
#line 298 "mode_robdd.implications.m"
  void * mode_robdd__implications__env_ptr_arg)
#line 298 "mode_robdd.implications.m"
{
#line 298 "mode_robdd.implications.m"
  {
#line 298 "mode_robdd.implications.m"
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * mode_robdd__implications__env_ptr;

#line 298 "mode_robdd.implications.m"
    mode_robdd__implications__env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s *) mode_robdd__implications__env_ptr_arg;
#line 7183 "mode_robdd.implications.c"
    (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__BaseTypeClassInfo_for_enum_16 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 7185 "mode_robdd.implications.c"
    {
#line 7187 "mode_robdd.implications.c"
      MR_Word base;
#line 7189 "mode_robdd.implications.c"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7191 "mode_robdd.implications.c"
      (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeClassInfo_for_enum_17 = base;
#line 7193 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__BaseTypeClassInfo_for_enum_16));
#line 7195 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_for_T_11));
#line 7197 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_13_13));
#line 7199 "mode_robdd.implications.c"
    }
#line 301 "mode_robdd.implications.m"
    {
#line 301 "mode_robdd.implications.m"
      mercury__sparse_bitset__member_2_p_1((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeClassInfo_for_enum_17, &(mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv2_VB_9, (MR_Word) (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__Vs_10, mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_5, mode_robdd__implications__env_ptr);
    }
#line 298 "mode_robdd.implications.m"
  }
#line 298 "mode_robdd.implications.m"
}

#line 298 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_6(
#line 298 "mode_robdd.implications.m"
  void * mode_robdd__implications__env_ptr_arg)
#line 298 "mode_robdd.implications.m"
{
#line 298 "mode_robdd.implications.m"
  {
#line 298 "mode_robdd.implications.m"
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * mode_robdd__implications__env_ptr;

#line 298 "mode_robdd.implications.m"
    mode_robdd__implications__env_ptr = (struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s *) mode_robdd__implications__env_ptr_arg;
#line 298 "mode_robdd.implications.m"
    if (MR_builtin_setjmp((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__commit_0) == 0)
#line 298 "mode_robdd.implications.m"
      {
#line 298 "mode_robdd.implications.m"
        {
#line 298 "mode_robdd.implications.m"
          MR_Word mode_robdd__implications__TypeCtorInfo_12_12;
#line 298 "mode_robdd.implications.m"
          MR_Word mode_robdd__implications__TypeCtorInfo_14_14;
#line 298 "mode_robdd.implications.m"
          MR_Word mode_robdd__implications__TypeInfo_15_15;

#line 7238 "mode_robdd.implications.c"
          mode_robdd__implications__TypeCtorInfo_12_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 7240 "mode_robdd.implications.c"
          {
#line 7242 "mode_robdd.implications.c"
            MR_Word base;
#line 7244 "mode_robdd.implications.c"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7246 "mode_robdd.implications.c"
            (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_13_13 = base;
#line 7248 "mode_robdd.implications.c"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_12_12));
#line 7250 "mode_robdd.implications.c"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_for_T_11));
#line 7252 "mode_robdd.implications.c"
          }
#line 7254 "mode_robdd.implications.c"
          mode_robdd__implications__TypeCtorInfo_14_14 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 7256 "mode_robdd.implications.c"
          {
#line 7258 "mode_robdd.implications.c"
            mode_robdd__implications__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7260 "mode_robdd.implications.c"
            MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_15_15, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_14_14));
#line 7262 "mode_robdd.implications.c"
            MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_15_15, 1) = ((MR_Box) ((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_13_13));
#line 7264 "mode_robdd.implications.c"
          }
#line 301 "mode_robdd.implications.m"
          {
#line 301 "mode_robdd.implications.m"
            mercury__map__member_3_p_0((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_13_13, mode_robdd__implications__TypeInfo_15_15, (MR_Word) (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__ImpMap_7, &(mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv1_VA_8, &(mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__conv0_Vs_10, mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_3, mode_robdd__implications__env_ptr);
          }
#line 298 "mode_robdd.implications.m"
        }
#line 298 "mode_robdd.implications.m"
        (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded = MR_FALSE;
#line 298 "mode_robdd.implications.m"
      }
#line 298 "mode_robdd.implications.m"
    else
#line 298 "mode_robdd.implications.m"
      (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded = MR_TRUE;
#line 298 "mode_robdd.implications.m"
  }
#line 298 "mode_robdd.implications.m"
}

#line 293 "mode_robdd.implications.m"
static MR_bool MR_CALL 
mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0(
#line 293 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_11,
#line 293 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__EQVars_4,
#line 293 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__DisImps_5,
#line 293 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__RevDisImps_6)
#line 293 "mode_robdd.implications.m"
{
#line 293 "mode_robdd.implications.m"
  {
#line 293 "mode_robdd.implications.m"
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s mode_robdd__implications__env;
#line 293 "mode_robdd.implications.m"
    struct mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0_s * mode_robdd__implications__env_ptr;

#line 293 "mode_robdd.implications.m"
    mode_robdd__implications__env_ptr = &mode_robdd__implications__env;
#line 293 "mode_robdd.implications.m"
    (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_for_T_11 = mode_robdd__implications__TypeInfo_for_T_11;
#line 293 "mode_robdd.implications.m"
    (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__EQVars_4 = mode_robdd__implications__EQVars_4;
#line 297 "mode_robdd.implications.m"
    {
#line 297 "mode_robdd.implications.m"
      (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__ImpMap_7 = mode_robdd__implications__intersect_2_f_0((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__TypeInfo_for_T_11, mode_robdd__implications__DisImps_5, mode_robdd__implications__RevDisImps_6);
    }
#line 298 "mode_robdd.implications.m"
    {
#line 298 "mode_robdd.implications.m"
      mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_6(mode_robdd__implications__env_ptr);
    }
#line 298 "mode_robdd.implications.m"
    (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded = !((mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded);
#line 296 "mode_robdd.implications.m"
    return (mode_robdd__implications__env_ptr)->mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0_env_0__succeeded;
#line 293 "mode_robdd.implications.m"
  }
#line 293 "mode_robdd.implications.m"
}

#line 288 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0_1(
#line 288 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 288 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 288 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 288 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3)
#line 288 "mode_robdd.implications.m"
{
#line 288 "mode_robdd.implications.m"
  {
#line 288 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_4;
#line 288 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 288 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__conv0_HeadVar__6_19;

#line 288 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 288 "mode_robdd.implications.m"
    {
#line 288 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__6_19 = mode_robdd__implications__IntroducedFrom__func__propagate_equivalences_into_implications_2__288__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Tuple) mode_robdd__implications__wrapper_arg_3));
    }
#line 288 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__6_19));
#line 288 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_4;
#line 288 "mode_robdd.implications.m"
  }
#line 288 "mode_robdd.implications.m"
}

#line 284 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0(
#line 284 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_30,
#line 284 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__EQVars_5,
#line 284 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__Changed_6,
#line 284 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpMap0_7,
#line 284 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__ImpMap_8)
#line 284 "mode_robdd.implications.m"
{
#line 287 "mode_robdd.implications.m"
  {
#line 287 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 287 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_31_31;
#line 287 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_32_32;
#line 287 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_33_33;
#line 287 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_34_34;
#line 287 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_35_35;
#line 287 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_36_36;
#line 287 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_37_37;
#line 287 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_38_38;
#line 287 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_40_40;
#line 287 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__V_14_14;
#line 287 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_15_15;
#line 287 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__V_23_23;
#line 287 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_24_24;
#line 287 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_25_25;
#line 287 "mode_robdd.implications.m"
    MR_Integer mode_robdd__implications__PolyConst2_39;
#line 291 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv1_V_24_24;
#line 288 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv2_V_14_14;

#line 7423 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 7425 "mode_robdd.implications.c"
    {
#line 7427 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7429 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_32_32, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_31_31));
#line 7431 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_32_32, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_30));
#line 7433 "mode_robdd.implications.c"
    }
#line 7435 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_33_33 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 7437 "mode_robdd.implications.c"
    {
#line 7439 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7441 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_34_34, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_33_33));
#line 7443 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_34_34, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_32_32));
#line 7445 "mode_robdd.implications.c"
    }
#line 7447 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_38_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 7449 "mode_robdd.implications.c"
    mode_robdd__implications__PolyConst2_39 = (MR_Integer) 2;
#line 7451 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_35_35 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 7453 "mode_robdd.implications.c"
    {
#line 7455 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7457 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_36_36, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_35_35));
#line 7459 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_36_36, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_32_32));
#line 7461 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_36_36, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_34_34));
#line 7463 "mode_robdd.implications.c"
    }
#line 7465 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_37_37 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 7467 "mode_robdd.implications.c"
    {
#line 7469 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 7471 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_40_40, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_38_38));
#line 7473 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_40_40, 1) = ((MR_Box) (mode_robdd__implications__PolyConst2_39));
#line 7475 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_40_40, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_36_36));
#line 7477 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_40_40, 3) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_37_37));
#line 7479 "mode_robdd.implications.c"
    }
#line 288 "mode_robdd.implications.m"
    {
#line 288 "mode_robdd.implications.m"
      mode_robdd__implications__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 288 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[2]));
#line 288 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 1) = ((MR_Box) (mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0_1));
#line 288 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 288 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_30));
#line 288 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 4) = ((MR_Box) (mode_robdd__implications__EQVars_5));
#line 288 "mode_robdd.implications.m"
    }
#line 291 "mode_robdd.implications.m"
    {
#line 291 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_V_24_24 = mercury__map__init_0_f_0(mode_robdd__implications__TypeInfo_32_32, mode_robdd__implications__TypeInfo_34_34);
    }
#line 291 "mode_robdd.implications.m"
    mode_robdd__implications__V_24_24 = (MR_Word) mode_robdd__implications__conv1_V_24_24;
#line 291 "mode_robdd.implications.m"
    mode_robdd__implications__V_25_25 = (MR_Integer) 0;
#line 291 "mode_robdd.implications.m"
    {
#line 291 "mode_robdd.implications.m"
      mode_robdd__implications__V_23_23 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 291 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_23_23, 0) = ((MR_Box) (mode_robdd__implications__V_24_24));
#line 291 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_23_23, 1) = ((MR_Box) (mode_robdd__implications__V_25_25));
#line 291 "mode_robdd.implications.m"
    }
#line 288 "mode_robdd.implications.m"
    {
#line 288 "mode_robdd.implications.m"
      mode_robdd__implications__conv2_V_14_14 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_32_32, mode_robdd__implications__TypeInfo_34_34, mode_robdd__implications__TypeInfo_40_40, (MR_Word) mode_robdd__implications__V_15_15, (MR_Word) mode_robdd__implications__ImpMap0_7, ((MR_Box) (mode_robdd__implications__V_23_23)));
    }
#line 288 "mode_robdd.implications.m"
    mode_robdd__implications__V_14_14 = ((MR_Tuple) mode_robdd__implications__conv2_V_14_14);
#line 288 "mode_robdd.implications.m"
    *mode_robdd__implications__ImpMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_14_14, (MR_Integer) 0)));
#line 288 "mode_robdd.implications.m"
    *mode_robdd__implications__Changed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_14_14, (MR_Integer) 1)));
#line 287 "mode_robdd.implications.m"
  }
#line 284 "mode_robdd.implications.m"
}

#line 263 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__normalise_pairs_6_p_0_1(
#line 263 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 263 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 263 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2)
#line 263 "mode_robdd.implications.m"
{
#line 263 "mode_robdd.implications.m"
  {
#line 263 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_3;
#line 263 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 263 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv3_HeadVar__4_37;

#line 263 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 263 "mode_robdd.implications.m"
    {
#line 263 "mode_robdd.implications.m"
      mode_robdd__implications__conv3_HeadVar__4_37 = mode_robdd__implications__IntroducedFrom__func__normalise_pairs__263__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2));
    }
#line 263 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_3 = ((MR_Box) (mode_robdd__implications__conv3_HeadVar__4_37));
#line 263 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_3;
#line 263 "mode_robdd.implications.m"
  }
#line 263 "mode_robdd.implications.m"
}

#line 247 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__normalise_pairs_6_p_0(
#line 247 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_20,
#line 247 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Extract_7,
#line 247 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__Imps_8,
#line 247 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__DisImps_9,
#line 247 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__Changed_10,
#line 247 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__FalseVars0_11,
#line 247 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__FalseVars_12)
#line 247 "mode_robdd.implications.m"
{
#line 250 "mode_robdd.implications.m"
  {
#line 250 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 250 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Intersect_13;
#line 252 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_21_21;
#line 252 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_22_22;
#line 252 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_23_23;
#line 252 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_24_24;

#line 251 "mode_robdd.implications.m"
    {
#line 251 "mode_robdd.implications.m"
      mode_robdd__implications__Intersect_13 = mode_robdd__implications__intersect_2_f_0(mode_robdd__implications__TypeInfo_for_T_20, mode_robdd__implications__Imps_8, mode_robdd__implications__DisImps_9);
    }
#line 7607 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 7609 "mode_robdd.implications.c"
    {
#line 7611 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7613 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_21_21));
#line 7615 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 7617 "mode_robdd.implications.c"
    }
#line 7619 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_23_23 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 7621 "mode_robdd.implications.c"
    {
#line 7623 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7625 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_24_24, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_23_23));
#line 7627 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_22_22));
#line 7629 "mode_robdd.implications.c"
    }
#line 252 "mode_robdd.implications.m"
    {
#line 252 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__implications__TypeInfo_22_22, mode_robdd__implications__TypeInfo_24_24, (MR_Word) mode_robdd__implications__Intersect_13);
    }
#line 255 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 253 "mode_robdd.implications.m"
      {
#line 253 "mode_robdd.implications.m"
        *mode_robdd__implications__Changed_10 = (MR_Integer) 0;
#line 254 "mode_robdd.implications.m"
        *mode_robdd__implications__FalseVars_12 = mode_robdd__implications__FalseVars0_11;
#line 253 "mode_robdd.implications.m"
      }
#line 255 "mode_robdd.implications.m"
    else
#line 256 "mode_robdd.implications.m"
      {
#line 256 "mode_robdd.implications.m"
        *mode_robdd__implications__Changed_10 = (MR_Integer) 1;
#line 261 "mode_robdd.implications.m"
#line 261 "mode_robdd.implications.m"
        switch (mode_robdd__implications__Extract_7) {
#line 261 "mode_robdd.implications.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 261 "mode_robdd.implications.m"
          case (MR_Integer) 0:
#line 258 "mode_robdd.implications.m"
            {
#line 258 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__TypeCtorInfo_25_25;
#line 258 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__TypeInfo_26_26;
#line 258 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__TypeCtorInfo_27_27;
#line 258 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__TypeInfo_28_28;
#line 258 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_29;
#line 258 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__TypeClassInfo_for_enum_30;
#line 258 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__V_18_18;
#line 258 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__V_19_19;
#line 259 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__conv0_V_19_19;
#line 259 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__conv1_V_18_18;
#line 259 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__conv2_FalseVars_12;

#line 7684 "mode_robdd.implications.c"
              mode_robdd__implications__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 7686 "mode_robdd.implications.c"
              {
#line 7688 "mode_robdd.implications.c"
                mode_robdd__implications__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7690 "mode_robdd.implications.c"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_25_25));
#line 7692 "mode_robdd.implications.c"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 7694 "mode_robdd.implications.c"
              }
#line 7696 "mode_robdd.implications.c"
              mode_robdd__implications__TypeCtorInfo_27_27 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 7698 "mode_robdd.implications.c"
              {
#line 7700 "mode_robdd.implications.c"
                mode_robdd__implications__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7702 "mode_robdd.implications.c"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_28_28, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_27_27));
#line 7704 "mode_robdd.implications.c"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_26_26));
#line 7706 "mode_robdd.implications.c"
              }
#line 259 "mode_robdd.implications.m"
              {
#line 259 "mode_robdd.implications.m"
                mode_robdd__implications__conv0_V_19_19 = mercury__map__sorted_keys_1_f_0(mode_robdd__implications__TypeInfo_26_26, mode_robdd__implications__TypeInfo_28_28, (MR_Word) mode_robdd__implications__Intersect_13);
              }
#line 259 "mode_robdd.implications.m"
              mode_robdd__implications__V_19_19 = (MR_Word) mode_robdd__implications__conv0_V_19_19;
#line 7715 "mode_robdd.implications.c"
              mode_robdd__implications__BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 7717 "mode_robdd.implications.c"
              {
#line 7719 "mode_robdd.implications.c"
                mode_robdd__implications__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7721 "mode_robdd.implications.c"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_29));
#line 7723 "mode_robdd.implications.c"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 7725 "mode_robdd.implications.c"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_26_26));
#line 7727 "mode_robdd.implications.c"
              }
#line 259 "mode_robdd.implications.m"
              {
#line 259 "mode_robdd.implications.m"
                mode_robdd__implications__conv1_V_18_18 = mercury__sparse_bitset__sorted_list_to_set_1_f_0(mode_robdd__implications__TypeClassInfo_for_enum_30, (MR_Word) mode_robdd__implications__V_19_19);
              }
#line 259 "mode_robdd.implications.m"
              mode_robdd__implications__V_18_18 = (MR_Word) mode_robdd__implications__conv1_V_18_18;
#line 259 "mode_robdd.implications.m"
              {
#line 259 "mode_robdd.implications.m"
                mode_robdd__implications__conv2_FalseVars_12 = mercury__sparse_bitset__union_2_f_0(mode_robdd__implications__TypeInfo_26_26, (MR_Word) mode_robdd__implications__FalseVars0_11, (MR_Word) mode_robdd__implications__V_18_18);
              }
#line 259 "mode_robdd.implications.m"
              *mode_robdd__implications__FalseVars_12 = (MR_Word) mode_robdd__implications__conv2_FalseVars_12;
#line 258 "mode_robdd.implications.m"
            }
#line 261 "mode_robdd.implications.m"
            break;
#line 261 "mode_robdd.implications.m"
          case (MR_Integer) 1:
#line 262 "mode_robdd.implications.m"
            {
#line 262 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__TypeCtorInfo_31_31;
#line 262 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__TypeInfo_32_32;
#line 262 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__TypeCtorInfo_33_33;
#line 262 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__TypeInfo_34_34;
#line 262 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__Values_14;
#line 262 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__V_15_15;
#line 262 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__V_16_16;
#line 262 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__V_17_17;
#line 263 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__conv4_V_17_17;
#line 263 "mode_robdd.implications.m"
              MR_Box mode_robdd__implications__conv5_Values_14;
#line 264 "mode_robdd.implications.m"
              MR_Word mode_robdd__implications__conv6_FalseVars_12;

#line 7774 "mode_robdd.implications.c"
              mode_robdd__implications__TypeCtorInfo_33_33 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 7776 "mode_robdd.implications.c"
              mode_robdd__implications__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 7778 "mode_robdd.implications.c"
              {
#line 7780 "mode_robdd.implications.c"
                mode_robdd__implications__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7782 "mode_robdd.implications.c"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_32_32, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_31_31));
#line 7784 "mode_robdd.implications.c"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_32_32, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 7786 "mode_robdd.implications.c"
              }
#line 7788 "mode_robdd.implications.c"
              {
#line 7790 "mode_robdd.implications.c"
                mode_robdd__implications__TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7792 "mode_robdd.implications.c"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_34_34, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_33_33));
#line 7794 "mode_robdd.implications.c"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_34_34, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_32_32));
#line 7796 "mode_robdd.implications.c"
              }
#line 263 "mode_robdd.implications.m"
              {
#line 263 "mode_robdd.implications.m"
                mode_robdd__implications__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 263 "mode_robdd.implications.m"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[3]));
#line 263 "mode_robdd.implications.m"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 1) = ((MR_Box) (mode_robdd__implications__normalise_pairs_6_p_0_1));
#line 263 "mode_robdd.implications.m"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 263 "mode_robdd.implications.m"
                MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 263 "mode_robdd.implications.m"
              }
#line 263 "mode_robdd.implications.m"
              {
#line 263 "mode_robdd.implications.m"
                mode_robdd__implications__V_16_16 = mercury__map__values_1_f_0(mode_robdd__implications__TypeInfo_32_32, mode_robdd__implications__TypeInfo_34_34, (MR_Word) mode_robdd__implications__Intersect_13);
              }
#line 263 "mode_robdd.implications.m"
              {
#line 263 "mode_robdd.implications.m"
                mode_robdd__implications__conv4_V_17_17 = mercury__sparse_bitset__init_0_f_0(mode_robdd__implications__TypeInfo_32_32);
              }
#line 263 "mode_robdd.implications.m"
              mode_robdd__implications__V_17_17 = (MR_Word) mode_robdd__implications__conv4_V_17_17;
#line 263 "mode_robdd.implications.m"
              {
#line 263 "mode_robdd.implications.m"
                mode_robdd__implications__conv5_Values_14 = mercury__list__foldl_3_f_0(mode_robdd__implications__TypeInfo_34_34, mode_robdd__implications__TypeInfo_34_34, (MR_Word) mode_robdd__implications__V_15_15, (MR_Word) mode_robdd__implications__V_16_16, ((MR_Box) (mode_robdd__implications__V_17_17)));
              }
#line 263 "mode_robdd.implications.m"
              mode_robdd__implications__Values_14 = ((MR_Word) mode_robdd__implications__conv5_Values_14);
#line 264 "mode_robdd.implications.m"
              {
#line 264 "mode_robdd.implications.m"
                mode_robdd__implications__conv6_FalseVars_12 = mercury__sparse_bitset__union_2_f_0(mode_robdd__implications__TypeInfo_32_32, (MR_Word) mode_robdd__implications__FalseVars0_11, (MR_Word) mode_robdd__implications__Values_14);
              }
#line 264 "mode_robdd.implications.m"
              *mode_robdd__implications__FalseVars_12 = (MR_Word) mode_robdd__implications__conv6_FalseVars_12;
#line 262 "mode_robdd.implications.m"
            }
#line 261 "mode_robdd.implications.m"
            break;
#line 261 "mode_robdd.implications.m"
        }
#line 256 "mode_robdd.implications.m"
      }
#line 250 "mode_robdd.implications.m"
  }
#line 247 "mode_robdd.implications.m"
}

#line 200 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__normalise_true_false_imp_map_8_p_0_1(
#line 200 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 200 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 200 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 200 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3)
#line 200 "mode_robdd.implications.m"
{
#line 200 "mode_robdd.implications.m"
  {
#line 200 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_4;
#line 200 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 200 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__conv0_HeadVar__6_35;

#line 200 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 200 "mode_robdd.implications.m"
    {
#line 200 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__6_35 = mode_robdd__implications__IntroducedFrom__func__normalise_true_false_imp_map__200__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Tuple) mode_robdd__implications__wrapper_arg_3));
    }
#line 200 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__6_35));
#line 200 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_4;
#line 200 "mode_robdd.implications.m"
  }
#line 200 "mode_robdd.implications.m"
}

#line 194 "mode_robdd.implications.m"
static void MR_CALL 
mode_robdd__implications__normalise_true_false_imp_map_8_p_0(
#line 194 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_46,
#line 194 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IsDisImp_9,
#line 194 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__Changed_10,
#line 194 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TrueVars0_11,
#line 194 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__TrueVars_12,
#line 194 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__FalseVars0_13,
#line 194 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__FalseVars_14,
#line 194 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__ImpMap0_15,
#line 194 "mode_robdd.implications.m"
  MR_Word * mode_robdd__implications__ImpMap_16)
#line 194 "mode_robdd.implications.m"
{
#line 199 "mode_robdd.implications.m"
  {
#line 199 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 199 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_47_47;
#line 199 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_48_48;
#line 199 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_49_49;
#line 199 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_50_50;
#line 199 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_51_51;
#line 199 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_52_52;
#line 199 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_53_53;
#line 199 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_54_54;
#line 199 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_56_56;
#line 199 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__V_30_30;
#line 199 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_31_31;
#line 199 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__V_38_38;
#line 199 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_39_39;
#line 199 "mode_robdd.implications.m"
    MR_Integer mode_robdd__implications__PolyConst4_55;
#line 200 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv1_V_30_30;

#line 7947 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_47_47 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 7949 "mode_robdd.implications.c"
    {
#line 7951 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7953 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_48_48, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_47_47));
#line 7955 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_48_48, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 7957 "mode_robdd.implications.c"
    }
#line 7959 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_49_49 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 7961 "mode_robdd.implications.c"
    {
#line 7963 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7965 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_50_50, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_49_49));
#line 7967 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_50_50, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_48_48));
#line 7969 "mode_robdd.implications.c"
    }
#line 7971 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_54_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 7973 "mode_robdd.implications.c"
    mode_robdd__implications__PolyConst4_55 = (MR_Integer) 4;
#line 7975 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_51_51 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 7977 "mode_robdd.implications.c"
    {
#line 7979 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7981 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_52_52, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_51_51));
#line 7983 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_52_52, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_48_48));
#line 7985 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_52_52, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_50_50));
#line 7987 "mode_robdd.implications.c"
    }
#line 7989 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_53_53 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 7991 "mode_robdd.implications.c"
    {
#line 7993 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 7995 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_56_56, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_54_54));
#line 7997 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_56_56, 1) = ((MR_Box) (mode_robdd__implications__PolyConst4_55));
#line 7999 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_56_56, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_50_50));
#line 8001 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_56_56, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_50_50));
#line 8003 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_56_56, 4) = ((MR_Box) (mode_robdd__implications__TypeInfo_52_52));
#line 8005 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_56_56, 5) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_53_53));
#line 8007 "mode_robdd.implications.c"
    }
#line 200 "mode_robdd.implications.m"
    {
#line 200 "mode_robdd.implications.m"
      mode_robdd__implications__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 200 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_31_31, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[1]));
#line 200 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_31_31, 1) = ((MR_Box) (mode_robdd__implications__normalise_true_false_imp_map_8_p_0_1));
#line 200 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 200 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_31_31, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 200 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_31_31, 4) = ((MR_Box) (mode_robdd__implications__IsDisImp_9));
#line 200 "mode_robdd.implications.m"
    }
#line 243 "mode_robdd.implications.m"
    mode_robdd__implications__V_39_39 = (MR_Integer) 0;
#line 243 "mode_robdd.implications.m"
    {
#line 243 "mode_robdd.implications.m"
      mode_robdd__implications__V_38_38 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 243 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_38_38, 0) = ((MR_Box) (mode_robdd__implications__TrueVars0_11));
#line 243 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_38_38, 1) = ((MR_Box) (mode_robdd__implications__FalseVars0_13));
#line 243 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_38_38, 2) = ((MR_Box) (mode_robdd__implications__ImpMap0_15));
#line 243 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_38_38, 3) = ((MR_Box) (mode_robdd__implications__V_39_39));
#line 243 "mode_robdd.implications.m"
    }
#line 200 "mode_robdd.implications.m"
    {
#line 200 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_V_30_30 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_48_48, mode_robdd__implications__TypeInfo_50_50, mode_robdd__implications__TypeInfo_56_56, (MR_Word) mode_robdd__implications__V_31_31, (MR_Word) mode_robdd__implications__ImpMap0_15, ((MR_Box) (mode_robdd__implications__V_38_38)));
    }
#line 200 "mode_robdd.implications.m"
    mode_robdd__implications__V_30_30 = ((MR_Tuple) mode_robdd__implications__conv1_V_30_30);
#line 200 "mode_robdd.implications.m"
    *mode_robdd__implications__TrueVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_30_30, (MR_Integer) 0)));
#line 200 "mode_robdd.implications.m"
    *mode_robdd__implications__FalseVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_30_30, (MR_Integer) 1)));
#line 200 "mode_robdd.implications.m"
    *mode_robdd__implications__ImpMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_30_30, (MR_Integer) 2)));
#line 200 "mode_robdd.implications.m"
    *mode_robdd__implications__Changed_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_30_30, (MR_Integer) 3)));
#line 199 "mode_robdd.implications.m"
  }
#line 194 "mode_robdd.implications.m"
}

#line 123 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__filter_imp_map_2_f_0_1(
#line 123 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 123 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 123 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 123 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3)
#line 123 "mode_robdd.implications.m"
{
#line 123 "mode_robdd.implications.m"
  {
#line 123 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_4;
#line 123 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 123 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__6_13;

#line 123 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 123 "mode_robdd.implications.m"
    {
#line 123 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__6_13 = mode_robdd__implications__IntroducedFrom__func__filter_imp_map__123__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Word) mode_robdd__implications__wrapper_arg_3));
    }
#line 123 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__6_13));
#line 123 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_4;
#line 123 "mode_robdd.implications.m"
  }
#line 123 "mode_robdd.implications.m"
}

#line 120 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__filter_imp_map_2_f_0(
#line 120 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_19,
#line 120 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__P_4,
#line 120 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IM_5)
#line 120 "mode_robdd.implications.m"
{
#line 122 "mode_robdd.implications.m"
  {
#line 122 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 122 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 122 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_20_20;
#line 122 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_21_21;
#line 122 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_22_22;
#line 122 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_23_23;
#line 122 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_24_24;
#line 122 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_25_25;
#line 122 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_9_9;
#line 123 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv1_HeadVar__3_3;

#line 8133 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 8135 "mode_robdd.implications.c"
    {
#line 8137 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8139 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_21_21, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_20_20));
#line 8141 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_21_21, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 8143 "mode_robdd.implications.c"
    }
#line 8145 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_22_22 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 8147 "mode_robdd.implications.c"
    {
#line 8149 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8151 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_22_22));
#line 8153 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_21_21));
#line 8155 "mode_robdd.implications.c"
    }
#line 8157 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_24_24 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 8159 "mode_robdd.implications.c"
    {
#line 8161 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8163 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_25_25, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_24_24));
#line 8165 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_25_25, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_21_21));
#line 8167 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_25_25, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_23_23));
#line 8169 "mode_robdd.implications.c"
    }
#line 123 "mode_robdd.implications.m"
    {
#line 123 "mode_robdd.implications.m"
      mode_robdd__implications__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 123 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_5[0]));
#line 123 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 1) = ((MR_Box) (mode_robdd__implications__filter_imp_map_2_f_0_1));
#line 123 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 123 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 123 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 4) = ((MR_Box) (mode_robdd__implications__P_4));
#line 123 "mode_robdd.implications.m"
    }
#line 123 "mode_robdd.implications.m"
    {
#line 123 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_HeadVar__3_3 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_21_21, mode_robdd__implications__TypeInfo_23_23, mode_robdd__implications__TypeInfo_25_25, (MR_Word) mode_robdd__implications__V_9_9, (MR_Word) mode_robdd__implications__IM_5, ((MR_Box) (mode_robdd__implications__IM_5)));
    }
#line 123 "mode_robdd.implications.m"
    mode_robdd__implications__HeadVar__3_3 = ((MR_Word) mode_robdd__implications__conv1_HeadVar__3_3);
#line 122 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 122 "mode_robdd.implications.m"
  }
#line 120 "mode_robdd.implications.m"
}

#line 105 "mode_robdd.implications.m"
static MR_Word MR_CALL 
mode_robdd__implications__restrict_threshold_2_3_f_0(
#line 105 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__TypeInfo_for_T_16,
#line 105 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__1_1,
#line 105 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__HeadVar__2_2,
#line 105 "mode_robdd.implications.m"
  MR_Word mode_robdd__implications__IM_3)
#line 105 "mode_robdd.implications.m"
{
#line 108 "mode_robdd.implications.m"
  {
#line 108 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 108 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__IM_4;

#line 108 "mode_robdd.implications.m"
    if ((mode_robdd__implications__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 108 "mode_robdd.implications.m"
      mode_robdd__implications__IM_4 = mode_robdd__implications__IM_3;
#line 108 "mode_robdd.implications.m"
    else
#line 109 "mode_robdd.implications.m"
      {
#line 109 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_8;
#line 109 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Vs_9;
#line 109 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__AL_10;
#line 109 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_12_12;
#line 110 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_17_17;
#line 110 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_18_18;
#line 110 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_13_13;
#line 110 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_23_23;

#line 109 "mode_robdd.implications.m"
        mode_robdd__implications__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__implications__HeadVar__2_2, (MR_Integer) 0)));
#line 109 "mode_robdd.implications.m"
        mode_robdd__implications__AL_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__implications__HeadVar__2_2, (MR_Integer) 1)));
#line 109 "mode_robdd.implications.m"
        mode_robdd__implications__V_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_12_12, (MR_Integer) 0)));
#line 109 "mode_robdd.implications.m"
        mode_robdd__implications__Vs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_12_12, (MR_Integer) 1)));
#line 110 "mode_robdd.implications.m"
        mode_robdd__implications__V_13_13 = (MR_Integer) 2;
#line 8256 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 8258 "mode_robdd.implications.c"
        {
#line 8260 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8262 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_17_17));
#line 8264 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_16));
#line 8266 "mode_robdd.implications.c"
        }
#line 110 "mode_robdd.implications.m"
        {
#line 110 "mode_robdd.implications.m"
          mercury__builtin__compare_3_p_0(mode_robdd__implications__TypeInfo_18_18, &mode_robdd__implications__V_23_23, ((MR_Box) (mode_robdd__implications__V_8)), ((MR_Box) (mode_robdd__implications__HeadVar__1_1)));
        }
#line 110 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = (mode_robdd__implications__V_13_13 == mode_robdd__implications__V_23_23);
#line 109 "mode_robdd.implications.m"
        if (mode_robdd__implications__succeeded)
#line 109 "mode_robdd.implications.m"
          mode_robdd__implications__IM_4 = mode_robdd__implications__IM_3;
#line 109 "mode_robdd.implications.m"
        else
#line 113 "mode_robdd.implications.m"
          {
#line 113 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeCtorInfo_19_19;
#line 113 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeInfo_20_20;
#line 113 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_21;
#line 113 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__TypeClassInfo_for_enum_22;
#line 113 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_14_14;
#line 113 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_15_15;
#line 114 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__conv0_V_15_15;

#line 8298 "mode_robdd.implications.c"
            mode_robdd__implications__BaseTypeClassInfo_for_enum_21 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 8300 "mode_robdd.implications.c"
            mode_robdd__implications__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 8302 "mode_robdd.implications.c"
            {
#line 8304 "mode_robdd.implications.c"
              mode_robdd__implications__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8306 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_20_20, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_19_19));
#line 8308 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_20_20, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_16));
#line 8310 "mode_robdd.implications.c"
            }
#line 8312 "mode_robdd.implications.c"
            {
#line 8314 "mode_robdd.implications.c"
              mode_robdd__implications__TypeClassInfo_for_enum_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8316 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_22, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_21));
#line 8318 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_22, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_16));
#line 8320 "mode_robdd.implications.c"
              MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_22, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_20_20));
#line 8322 "mode_robdd.implications.c"
            }
#line 114 "mode_robdd.implications.m"
            {
#line 114 "mode_robdd.implications.m"
              mode_robdd__implications__conv0_V_15_15 = mercury__sparse_bitset__remove_gt_2_f_0(mode_robdd__implications__TypeClassInfo_for_enum_22, (MR_Word) mode_robdd__implications__Vs_9, ((MR_Box) (mode_robdd__implications__HeadVar__1_1)));
            }
#line 114 "mode_robdd.implications.m"
            mode_robdd__implications__V_15_15 = (MR_Word) mode_robdd__implications__conv0_V_15_15;
#line 113 "mode_robdd.implications.m"
            {
#line 113 "mode_robdd.implications.m"
              mode_robdd__implications__V_14_14 = mode_robdd__implications__f_101_110_116_114_121_32_58_61_3_f_0(mode_robdd__implications__TypeInfo_for_T_16, mode_robdd__implications__V_8, mode_robdd__implications__IM_3, mode_robdd__implications__V_15_15);
            }
#line 113 "mode_robdd.implications.m"
            {
#line 113 "mode_robdd.implications.m"
              mode_robdd__implications__IM_4 = mode_robdd__implications__restrict_threshold_2_3_f_0(mode_robdd__implications__TypeInfo_for_T_16, mode_robdd__implications__HeadVar__1_1, mode_robdd__implications__AL_10, mode_robdd__implications__V_14_14);
            }
#line 113 "mode_robdd.implications.m"
          }
#line 109 "mode_robdd.implications.m"
      }
#line 108 "mode_robdd.implications.m"
    return mode_robdd__implications__IM_4;
#line 108 "mode_robdd.implications.m"
  }
#line 105 "mode_robdd.implications.m"
}

#line 363 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__add_equalities_to_imp_vars_2_f_0_1(
#line 363 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 363 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 363 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 363 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3)
#line 363 "mode_robdd.implications.m"
{
#line 363 "mode_robdd.implications.m"
  {
#line 363 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_4;
#line 363 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 363 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__5_13;

#line 363 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 363 "mode_robdd.implications.m"
    {
#line 363 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__5_13 = mode_robdd__implications__IntroducedFrom__func__add_equalities_to_imp_vars__363__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Word) mode_robdd__implications__wrapper_arg_3));
    }
#line 363 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__5_13));
#line 363 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_4;
#line 363 "mode_robdd.implications.m"
  }
#line 363 "mode_robdd.implications.m"
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
#line 362 "mode_robdd.implications.m"
  {
#line 362 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 362 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 362 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_20_20;
#line 362 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_21_21;
#line 362 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_22_22;
#line 362 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_23_23;
#line 362 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_9_9;
#line 362 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_15_15;
#line 363 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv1_HeadVar__3_3;

#line 8422 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 8424 "mode_robdd.implications.c"
    {
#line 8426 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8428 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_21_21, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_20_20));
#line 8430 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_21_21, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 8432 "mode_robdd.implications.c"
    }
#line 8434 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_22_22 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_imp_vars_1;
#line 8436 "mode_robdd.implications.c"
    {
#line 8438 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8440 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_22_22));
#line 8442 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 8444 "mode_robdd.implications.c"
    }
#line 363 "mode_robdd.implications.m"
    {
#line 363 "mode_robdd.implications.m"
      mode_robdd__implications__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 363 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[0]));
#line 363 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 1) = ((MR_Box) (mode_robdd__implications__add_equalities_to_imp_vars_2_f_0_1));
#line 363 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 363 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_19));
#line 363 "mode_robdd.implications.m"
    }
#line 363 "mode_robdd.implications.m"
    mode_robdd__implications__V_15_15 = (MR_Word) mode_robdd__implications__EQVars_4;
#line 363 "mode_robdd.implications.m"
    {
#line 363 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_HeadVar__3_3 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_21_21, mode_robdd__implications__TypeInfo_21_21, mode_robdd__implications__TypeInfo_23_23, (MR_Word) mode_robdd__implications__V_9_9, (MR_Word) mode_robdd__implications__V_15_15, ((MR_Box) (mode_robdd__implications__ImpVars_5)));
    }
#line 363 "mode_robdd.implications.m"
    mode_robdd__implications__HeadVar__3_3 = ((MR_Word) mode_robdd__implications__conv1_HeadVar__3_3);
#line 362 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 362 "mode_robdd.implications.m"
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
#line 342 "mode_robdd.implications.m"
  {
#line 342 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 342 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__ImpVars1_11;
#line 358 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_13_13;
#line 358 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_14_14;

#line 344 "mode_robdd.implications.m"
    {
#line 344 "mode_robdd.implications.m"
      mode_robdd__implications__ImpVars1_11 = mercury__robdd__extract_implications_1_f_0(mode_robdd__implications__TypeInfo_for_T_12, mode_robdd__implications__Robdd0_7);
    }
#line 345 "mode_robdd.implications.m"
    {
#line 345 "mode_robdd.implications.m"
      *mode_robdd__implications__ImpVars_10 = mode_robdd__implications__f_times_2_f_0(mode_robdd__implications__TypeInfo_for_T_12, mode_robdd__implications__ImpVars0_9, mode_robdd__implications__ImpVars1_11);
    }
#line 353 "mode_robdd.implications.m"
    {
#line 353 "mode_robdd.implications.m"
      *mode_robdd__implications__Robdd_8 = mercury__robdd__remove_implications_2_f_0(mode_robdd__implications__TypeInfo_for_T_12, *mode_robdd__implications__ImpVars_10, mode_robdd__implications__Robdd0_7);
    }
#line 8519 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_13_13 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_robdd_1;
#line 8521 "mode_robdd.implications.c"
    {
#line 8523 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8525 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_13_13));
#line 8527 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_14_14, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_12));
#line 8529 "mode_robdd.implications.c"
    }
#line 358 "mode_robdd.implications.m"
    {
#line 358 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__builtin__unify_2_p_0(mode_robdd__implications__TypeInfo_14_14, ((MR_Box) (*mode_robdd__implications__Robdd_8)), ((MR_Box) (mode_robdd__implications__Robdd0_7)));
    }
#line 358 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 358 "mode_robdd.implications.m"
      {
#line 358 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = mode_robdd__implications__empty_1_p_0(mode_robdd__implications__TypeInfo_for_T_12, mode_robdd__implications__ImpVars1_11);
      }
#line 358 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 358 "mode_robdd.implications.m"
      *mode_robdd__implications__Changed_6 = (MR_Integer) 0;
#line 358 "mode_robdd.implications.m"
    else
#line 358 "mode_robdd.implications.m"
      *mode_robdd__implications__Changed_6 = (MR_Integer) 1;
#line 342 "mode_robdd.implications.m"
  }
#line 58 "mode_robdd.implications.m"
}

#line 318 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__propagate_implications_into_equivalences_5_p_0_1(
#line 318 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 318 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 318 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2,
#line 318 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_3)
#line 318 "mode_robdd.implications.m"
{
#line 318 "mode_robdd.implications.m"
  {
#line 318 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_4;
#line 318 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 318 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__conv0_HeadVar__5_34;

#line 318 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 318 "mode_robdd.implications.m"
    {
#line 318 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__5_34 = mode_robdd__implications__IntroducedFrom__func__propagate_implications_into_equivalences__318__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2), ((MR_Tuple) mode_robdd__implications__wrapper_arg_3));
    }
#line 318 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_4 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__5_34));
#line 318 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_4;
#line 318 "mode_robdd.implications.m"
  }
#line 318 "mode_robdd.implications.m"
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
#line 310 "mode_robdd.implications.m"
  {
#line 310 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 310 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Imps0_11;
#line 310 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RevImps0_12;
#line 310 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__DisImps_13;
#line 310 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RevDisImps_14;

#line 311 "mode_robdd.implications.m"
    mode_robdd__implications__Imps0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_9, (MR_Integer) 0)));
#line 311 "mode_robdd.implications.m"
    mode_robdd__implications__RevImps0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_9, (MR_Integer) 1)));
#line 311 "mode_robdd.implications.m"
    mode_robdd__implications__DisImps_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_9, (MR_Integer) 2)));
#line 311 "mode_robdd.implications.m"
    mode_robdd__implications__RevDisImps_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_9, (MR_Integer) 3)));
#line 313 "mode_robdd.implications.m"
    {
#line 313 "mode_robdd.implications.m"
      MR_Word mode_robdd__implications__TypeCtorInfo_47_47;
#line 313 "mode_robdd.implications.m"
      MR_Word mode_robdd__implications__TypeInfo_48_48;
#line 313 "mode_robdd.implications.m"
      MR_Word mode_robdd__implications__TypeCtorInfo_49_49;
#line 313 "mode_robdd.implications.m"
      MR_Word mode_robdd__implications__TypeInfo_50_50;

#line 8643 "mode_robdd.implications.c"
      mode_robdd__implications__TypeCtorInfo_47_47 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 8645 "mode_robdd.implications.c"
      {
#line 8647 "mode_robdd.implications.c"
        mode_robdd__implications__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8649 "mode_robdd.implications.c"
        MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_48_48, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_47_47));
#line 8651 "mode_robdd.implications.c"
        MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_48_48, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 8653 "mode_robdd.implications.c"
      }
#line 8655 "mode_robdd.implications.c"
      mode_robdd__implications__TypeCtorInfo_49_49 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 8657 "mode_robdd.implications.c"
      {
#line 8659 "mode_robdd.implications.c"
        mode_robdd__implications__TypeInfo_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8661 "mode_robdd.implications.c"
        MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_50_50, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_49_49));
#line 8663 "mode_robdd.implications.c"
        MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_50_50, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_48_48));
#line 8665 "mode_robdd.implications.c"
      }
#line 313 "mode_robdd.implications.m"
      {
#line 313 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__implications__TypeInfo_48_48, mode_robdd__implications__TypeInfo_50_50, (MR_Word) mode_robdd__implications__Imps0_11);
      }
#line 313 "mode_robdd.implications.m"
    }
#line 313 "mode_robdd.implications.m"
    if (!(mode_robdd__implications__succeeded))
#line 313 "mode_robdd.implications.m"
      {
#line 313 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_51_51;
#line 313 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_52_52;
#line 313 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_53_53;
#line 313 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_54_54;

#line 8687 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_51_51 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 8689 "mode_robdd.implications.c"
        {
#line 8691 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8693 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_52_52, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_51_51));
#line 8695 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_52_52, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 8697 "mode_robdd.implications.c"
        }
#line 8699 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_53_53 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 8701 "mode_robdd.implications.c"
        {
#line 8703 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8705 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_54_54, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_53_53));
#line 8707 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_54_54, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_52_52));
#line 8709 "mode_robdd.implications.c"
        }
#line 313 "mode_robdd.implications.m"
        {
#line 313 "mode_robdd.implications.m"
          mode_robdd__implications__succeeded = mercury__map__is_empty_1_p_0(mode_robdd__implications__TypeInfo_52_52, mode_robdd__implications__TypeInfo_54_54, (MR_Word) mode_robdd__implications__RevImps0_12);
        }
#line 313 "mode_robdd.implications.m"
      }
#line 317 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 314 "mode_robdd.implications.m"
      {
#line 314 "mode_robdd.implications.m"
        *mode_robdd__implications__Changed_6 = (MR_Integer) 0;
#line 315 "mode_robdd.implications.m"
        *mode_robdd__implications__EQVars_8 = mode_robdd__implications__EQVars0_7;
#line 316 "mode_robdd.implications.m"
        *mode_robdd__implications__ImpVars_10 = mode_robdd__implications__ImpVars0_9;
#line 314 "mode_robdd.implications.m"
      }
#line 317 "mode_robdd.implications.m"
    else
#line 332 "mode_robdd.implications.m"
      {
#line 332 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_55_55;
#line 332 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_56_56;
#line 332 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_57_57;
#line 332 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_58_58;
#line 332 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_59_59;
#line 332 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_60_60;
#line 332 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_61_61;
#line 332 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_62_62;
#line 332 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_63_63;
#line 332 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_64_64;
#line 332 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_66_66;
#line 332 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Imps_15;
#line 332 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__RevImps_16;
#line 332 "mode_robdd.implications.m"
        MR_Tuple mode_robdd__implications__V_29_29;
#line 332 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_30_30;
#line 332 "mode_robdd.implications.m"
        MR_Tuple mode_robdd__implications__V_38_38;
#line 332 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_39_39;
#line 332 "mode_robdd.implications.m"
        MR_Integer mode_robdd__implications__PolyConst4_65;
#line 318 "mode_robdd.implications.m"
        MR_Box mode_robdd__implications__conv1_V_29_29;

#line 8773 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_55_55 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 8775 "mode_robdd.implications.c"
        {
#line 8777 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8779 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_56_56, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_55_55));
#line 8781 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_56_56, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 8783 "mode_robdd.implications.c"
        }
#line 8785 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_57_57 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 8787 "mode_robdd.implications.c"
        {
#line 8789 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8791 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_58_58, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_57_57));
#line 8793 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_58_58, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_56_56));
#line 8795 "mode_robdd.implications.c"
        }
#line 8797 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_64_64 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 8799 "mode_robdd.implications.c"
        mode_robdd__implications__PolyConst4_65 = (MR_Integer) 4;
#line 8801 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_59_59 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 8803 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_60_60 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_equiv_vars_1;
#line 8805 "mode_robdd.implications.c"
        {
#line 8807 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8809 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_61_61, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_60_60));
#line 8811 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_61_61, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 8813 "mode_robdd.implications.c"
        }
#line 8815 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_62_62 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 8817 "mode_robdd.implications.c"
        {
#line 8819 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8821 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_63_63, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_62_62));
#line 8823 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_63_63, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_56_56));
#line 8825 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_63_63, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_58_58));
#line 8827 "mode_robdd.implications.c"
        }
#line 8829 "mode_robdd.implications.c"
        {
#line 8831 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 8833 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_66_66, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_64_64));
#line 8835 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_66_66, 1) = ((MR_Box) (mode_robdd__implications__PolyConst4_65));
#line 8837 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_66_66, 2) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_59_59));
#line 8839 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_66_66, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_61_61));
#line 8841 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_66_66, 4) = ((MR_Box) (mode_robdd__implications__TypeInfo_63_63));
#line 8843 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_66_66, 5) = ((MR_Box) (mode_robdd__implications__TypeInfo_63_63));
#line 8845 "mode_robdd.implications.c"
        }
#line 318 "mode_robdd.implications.m"
        {
#line 318 "mode_robdd.implications.m"
          mode_robdd__implications__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 318 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_30_30, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[1]));
#line 318 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_30_30, 1) = ((MR_Box) (mode_robdd__implications__propagate_implications_into_equivalences_5_p_0_1));
#line 318 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 318 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_30_30, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_46));
#line 318 "mode_robdd.implications.m"
        }
#line 332 "mode_robdd.implications.m"
        mode_robdd__implications__V_39_39 = (MR_Integer) 0;
#line 332 "mode_robdd.implications.m"
        {
#line 332 "mode_robdd.implications.m"
          mode_robdd__implications__V_38_38 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 332 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_38_38, 0) = ((MR_Box) (mode_robdd__implications__V_39_39));
#line 332 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_38_38, 1) = ((MR_Box) (mode_robdd__implications__EQVars0_7));
#line 332 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_38_38, 2) = ((MR_Box) (mode_robdd__implications__Imps0_11));
#line 332 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_38_38, 3) = ((MR_Box) (mode_robdd__implications__RevImps0_12));
#line 332 "mode_robdd.implications.m"
        }
#line 318 "mode_robdd.implications.m"
        {
#line 318 "mode_robdd.implications.m"
          mode_robdd__implications__conv1_V_29_29 = mercury__map__foldl_3_f_0(mode_robdd__implications__TypeInfo_56_56, mode_robdd__implications__TypeInfo_58_58, mode_robdd__implications__TypeInfo_66_66, (MR_Word) mode_robdd__implications__V_30_30, (MR_Word) mode_robdd__implications__Imps0_11, ((MR_Box) (mode_robdd__implications__V_38_38)));
        }
#line 318 "mode_robdd.implications.m"
        mode_robdd__implications__V_29_29 = ((MR_Tuple) mode_robdd__implications__conv1_V_29_29);
#line 318 "mode_robdd.implications.m"
        *mode_robdd__implications__Changed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, (MR_Integer) 0)));
#line 318 "mode_robdd.implications.m"
        *mode_robdd__implications__EQVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, (MR_Integer) 1)));
#line 318 "mode_robdd.implications.m"
        mode_robdd__implications__Imps_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, (MR_Integer) 2)));
#line 318 "mode_robdd.implications.m"
        mode_robdd__implications__RevImps_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__V_29_29, (MR_Integer) 3)));
#line 333 "mode_robdd.implications.m"
        {
#line 333 "mode_robdd.implications.m"
          MR_Word base;
#line 333 "mode_robdd.implications.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 333 "mode_robdd.implications.m"
          *mode_robdd__implications__ImpVars_10 = base;
#line 333 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__implications__Imps_15));
#line 333 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mode_robdd__implications__RevImps_16));
#line 333 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mode_robdd__implications__DisImps_13));
#line 333 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mode_robdd__implications__RevDisImps_14));
#line 333 "mode_robdd.implications.m"
        }
#line 332 "mode_robdd.implications.m"
      }
#line 310 "mode_robdd.implications.m"
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
#line 270 "mode_robdd.implications.m"
  {
#line 270 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 270 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Imps0_9;
#line 270 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RevImps0_10;
#line 270 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__DisImps_11;
#line 270 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RevDisImps_12;
#line 270 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Changed0_13;
#line 270 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Imps_14;
#line 270 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Changed1_15;
#line 270 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RevImps_16;

#line 271 "mode_robdd.implications.m"
    mode_robdd__implications__Imps0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_7, (MR_Integer) 0)));
#line 271 "mode_robdd.implications.m"
    mode_robdd__implications__RevImps0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_7, (MR_Integer) 1)));
#line 271 "mode_robdd.implications.m"
    mode_robdd__implications__DisImps_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_7, (MR_Integer) 2)));
#line 271 "mode_robdd.implications.m"
    mode_robdd__implications__RevDisImps_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_7, (MR_Integer) 3)));
#line 273 "mode_robdd.implications.m"
    {
#line 273 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mode_robdd__implications__propagate_equivalences_into_disimplications_3_p_0(mode_robdd__implications__TypeInfo_for_T_17, mode_robdd__implications__EQVars_5, mode_robdd__implications__DisImps_11, mode_robdd__implications__RevDisImps_12);
    }
#line 270 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 270 "mode_robdd.implications.m"
      {
#line 276 "mode_robdd.implications.m"
        {
#line 276 "mode_robdd.implications.m"
          mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0(mode_robdd__implications__TypeInfo_for_T_17, mode_robdd__implications__EQVars_5, &mode_robdd__implications__Changed0_13, mode_robdd__implications__Imps0_9, &mode_robdd__implications__Imps_14);
        }
#line 278 "mode_robdd.implications.m"
        {
#line 278 "mode_robdd.implications.m"
          mode_robdd__implications__propagate_equivalences_into_implications_2_4_p_0(mode_robdd__implications__TypeInfo_for_T_17, mode_robdd__implications__EQVars_5, &mode_robdd__implications__Changed1_15, mode_robdd__implications__RevImps0_10, &mode_robdd__implications__RevImps_16);
        }
#line 281 "mode_robdd.implications.m"
        {
#line 281 "mode_robdd.implications.m"
          MR_Word base;
#line 281 "mode_robdd.implications.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 281 "mode_robdd.implications.m"
          *mode_robdd__implications__ImpVars_8 = base;
#line 281 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__implications__Imps_14));
#line 281 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mode_robdd__implications__RevImps_16));
#line 281 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mode_robdd__implications__DisImps_11));
#line 281 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mode_robdd__implications__RevDisImps_12));
#line 281 "mode_robdd.implications.m"
        }
#line 282 "mode_robdd.implications.m"
        {
#line 282 "mode_robdd.implications.m"
          *mode_robdd__implications__Changed_6 = mercury__bool__or_2_f_0(mode_robdd__implications__Changed0_13, mode_robdd__implications__Changed1_15);
        }
#line 282 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = MR_TRUE;
#line 270 "mode_robdd.implications.m"
      }
#line 270 "mode_robdd.implications.m"
    return mode_robdd__implications__succeeded;
#line 270 "mode_robdd.implications.m"
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
#line 160 "mode_robdd.implications.m"
  {
#line 160 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 153 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_60_60;
#line 153 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_61_61;

#line 9044 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_60_60 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 9046 "mode_robdd.implications.c"
    {
#line 9048 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9050 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_61_61, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_60_60));
#line 9052 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_61_61, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_59));
#line 9054 "mode_robdd.implications.c"
    }
#line 153 "mode_robdd.implications.m"
    {
#line 153 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__implications__TypeInfo_61_61, (MR_Word) mode_robdd__implications__TrueVars0_9);
    }
#line 153 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 154 "mode_robdd.implications.m"
      {
#line 154 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__implications__TypeInfo_61_61, (MR_Word) mode_robdd__implications__FalseVars0_11);
      }
#line 160 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 156 "mode_robdd.implications.m"
      {
#line 156 "mode_robdd.implications.m"
        *mode_robdd__implications__TrueVars_10 = mode_robdd__implications__TrueVars0_9;
#line 157 "mode_robdd.implications.m"
        *mode_robdd__implications__FalseVars_12 = mode_robdd__implications__FalseVars0_11;
#line 158 "mode_robdd.implications.m"
        *mode_robdd__implications__ImpVars_14 = mode_robdd__implications__ImpVars0_13;
#line 159 "mode_robdd.implications.m"
        *mode_robdd__implications__Changed_8 = (MR_Integer) 0;
#line 156 "mode_robdd.implications.m"
      }
#line 160 "mode_robdd.implications.m"
    else
#line 161 "mode_robdd.implications.m"
      {
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Imps0_15;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__RevImps0_16;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__DisImps0_17;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__RevDisImps0_18;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Changed0_19;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TrueVars1_20;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__FalseVars1_21;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Imps_22;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Changed1_23;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__FalseVars2_24;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TrueVars2_25;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__RevImps_26;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Changed2_27;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__FalseVars3_28;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TrueVars3_29;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__DisImps_30;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Changed3_31;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TrueVars4_32;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__FalseVars4_33;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__RevDisImps_34;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Changed4_35;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__FalseVars5_36;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Changed5_37;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TrueVars5_38;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Changed6_39;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__FalseVars6_40;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__Changed7_41;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TrueVars6_42;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__ImpVars6_43;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_45_45;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_46_46;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_47_47;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_48_48;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_49_49;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_50_50;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_51_51;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_52_52;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_53_53;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_54_54;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_55_55;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_56_56;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_57_57;
#line 161 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_58_58;

#line 161 "mode_robdd.implications.m"
        mode_robdd__implications__Imps0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_13, (MR_Integer) 0)));
#line 161 "mode_robdd.implications.m"
        mode_robdd__implications__RevImps0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_13, (MR_Integer) 1)));
#line 161 "mode_robdd.implications.m"
        mode_robdd__implications__DisImps0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_13, (MR_Integer) 2)));
#line 161 "mode_robdd.implications.m"
        mode_robdd__implications__RevDisImps0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars0_13, (MR_Integer) 3)));
#line 162 "mode_robdd.implications.m"
        mode_robdd__implications__V_45_45 = (MR_Integer) 0;
#line 162 "mode_robdd.implications.m"
        {
#line 162 "mode_robdd.implications.m"
          mode_robdd__implications__normalise_true_false_imp_map_8_p_0(mode_robdd__implications__TypeInfo_for_T_59, mode_robdd__implications__V_45_45, &mode_robdd__implications__Changed0_19, mode_robdd__implications__TrueVars0_9, &mode_robdd__implications__TrueVars1_20, mode_robdd__implications__FalseVars0_11, &mode_robdd__implications__FalseVars1_21, mode_robdd__implications__Imps0_15, &mode_robdd__implications__Imps_22);
        }
#line 164 "mode_robdd.implications.m"
        mode_robdd__implications__V_46_46 = (MR_Integer) 0;
#line 164 "mode_robdd.implications.m"
        {
#line 164 "mode_robdd.implications.m"
          mode_robdd__implications__normalise_true_false_imp_map_8_p_0(mode_robdd__implications__TypeInfo_for_T_59, mode_robdd__implications__V_46_46, &mode_robdd__implications__Changed1_23, mode_robdd__implications__FalseVars1_21, &mode_robdd__implications__FalseVars2_24, mode_robdd__implications__TrueVars1_20, &mode_robdd__implications__TrueVars2_25, mode_robdd__implications__RevImps0_16, &mode_robdd__implications__RevImps_26);
        }
#line 166 "mode_robdd.implications.m"
        mode_robdd__implications__V_47_47 = (MR_Integer) 1;
#line 166 "mode_robdd.implications.m"
        {
#line 166 "mode_robdd.implications.m"
          mode_robdd__implications__normalise_true_false_imp_map_8_p_0(mode_robdd__implications__TypeInfo_for_T_59, mode_robdd__implications__V_47_47, &mode_robdd__implications__Changed2_27, mode_robdd__implications__FalseVars2_24, &mode_robdd__implications__FalseVars3_28, mode_robdd__implications__TrueVars2_25, &mode_robdd__implications__TrueVars3_29, mode_robdd__implications__DisImps0_17, &mode_robdd__implications__DisImps_30);
        }
#line 168 "mode_robdd.implications.m"
        mode_robdd__implications__V_48_48 = (MR_Integer) 1;
#line 168 "mode_robdd.implications.m"
        {
#line 168 "mode_robdd.implications.m"
          mode_robdd__implications__normalise_true_false_imp_map_8_p_0(mode_robdd__implications__TypeInfo_for_T_59, mode_robdd__implications__V_48_48, &mode_robdd__implications__Changed3_31, mode_robdd__implications__TrueVars3_29, &mode_robdd__implications__TrueVars4_32, mode_robdd__implications__FalseVars3_28, &mode_robdd__implications__FalseVars4_33, mode_robdd__implications__RevDisImps0_18, &mode_robdd__implications__RevDisImps_34);
        }
#line 171 "mode_robdd.implications.m"
        mode_robdd__implications__V_49_49 = (MR_Integer) 0;
#line 171 "mode_robdd.implications.m"
        {
#line 171 "mode_robdd.implications.m"
          mode_robdd__implications__normalise_pairs_6_p_0(mode_robdd__implications__TypeInfo_for_T_59, mode_robdd__implications__V_49_49, mode_robdd__implications__Imps_22, mode_robdd__implications__DisImps_30, &mode_robdd__implications__Changed4_35, mode_robdd__implications__FalseVars4_33, &mode_robdd__implications__FalseVars5_36);
        }
#line 173 "mode_robdd.implications.m"
        mode_robdd__implications__V_50_50 = (MR_Integer) 0;
#line 173 "mode_robdd.implications.m"
        {
#line 173 "mode_robdd.implications.m"
          mode_robdd__implications__normalise_pairs_6_p_0(mode_robdd__implications__TypeInfo_for_T_59, mode_robdd__implications__V_50_50, mode_robdd__implications__RevImps_26, mode_robdd__implications__RevDisImps_34, &mode_robdd__implications__Changed5_37, mode_robdd__implications__TrueVars4_32, &mode_robdd__implications__TrueVars5_38);
        }
#line 175 "mode_robdd.implications.m"
        mode_robdd__implications__V_51_51 = (MR_Integer) 1;
#line 175 "mode_robdd.implications.m"
        {
#line 175 "mode_robdd.implications.m"
          mode_robdd__implications__normalise_pairs_6_p_0(mode_robdd__implications__TypeInfo_for_T_59, mode_robdd__implications__V_51_51, mode_robdd__implications__RevImps_26, mode_robdd__implications__DisImps_30, &mode_robdd__implications__Changed6_39, mode_robdd__implications__FalseVars5_36, &mode_robdd__implications__FalseVars6_40);
        }
#line 177 "mode_robdd.implications.m"
        mode_robdd__implications__V_52_52 = (MR_Integer) 1;
#line 177 "mode_robdd.implications.m"
        {
#line 177 "mode_robdd.implications.m"
          mode_robdd__implications__normalise_pairs_6_p_0(mode_robdd__implications__TypeInfo_for_T_59, mode_robdd__implications__V_52_52, mode_robdd__implications__Imps_22, mode_robdd__implications__RevDisImps_34, &mode_robdd__implications__Changed7_41, mode_robdd__implications__TrueVars5_38, &mode_robdd__implications__TrueVars6_42);
        }
#line 180 "mode_robdd.implications.m"
        {
#line 180 "mode_robdd.implications.m"
          mode_robdd__implications__ImpVars6_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 180 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars6_43, 0) = ((MR_Box) (mode_robdd__implications__Imps_22));
#line 180 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars6_43, 1) = ((MR_Box) (mode_robdd__implications__RevImps_26));
#line 180 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars6_43, 2) = ((MR_Box) (mode_robdd__implications__DisImps_30));
#line 180 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__ImpVars6_43, 3) = ((MR_Box) (mode_robdd__implications__RevDisImps_34));
#line 180 "mode_robdd.implications.m"
        }
#line 182 "mode_robdd.implications.m"
        {
#line 182 "mode_robdd.implications.m"
          mode_robdd__implications__V_58_58 = mercury__bool__or_2_f_0(mode_robdd__implications__Changed6_39, mode_robdd__implications__Changed7_41);
        }
#line 182 "mode_robdd.implications.m"
        {
#line 182 "mode_robdd.implications.m"
          mode_robdd__implications__V_57_57 = mercury__bool__or_2_f_0(mode_robdd__implications__Changed5_37, mode_robdd__implications__V_58_58);
        }
#line 182 "mode_robdd.implications.m"
        {
#line 182 "mode_robdd.implications.m"
          mode_robdd__implications__V_56_56 = mercury__bool__or_2_f_0(mode_robdd__implications__Changed4_35, mode_robdd__implications__V_57_57);
        }
#line 181 "mode_robdd.implications.m"
        {
#line 181 "mode_robdd.implications.m"
          mode_robdd__implications__V_55_55 = mercury__bool__or_2_f_0(mode_robdd__implications__Changed3_31, mode_robdd__implications__V_56_56);
        }
#line 181 "mode_robdd.implications.m"
        {
#line 181 "mode_robdd.implications.m"
          mode_robdd__implications__V_54_54 = mercury__bool__or_2_f_0(mode_robdd__implications__Changed2_27, mode_robdd__implications__V_55_55);
        }
#line 181 "mode_robdd.implications.m"
        {
#line 181 "mode_robdd.implications.m"
          mode_robdd__implications__V_53_53 = mercury__bool__or_2_f_0(mode_robdd__implications__Changed1_23, mode_robdd__implications__V_54_54);
        }
#line 181 "mode_robdd.implications.m"
        {
#line 181 "mode_robdd.implications.m"
          *mode_robdd__implications__Changed_8 = mercury__bool__or_2_f_0(mode_robdd__implications__Changed0_19, mode_robdd__implications__V_53_53);
        }
#line 184 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = (*mode_robdd__implications__Changed_8 == (MR_Integer) 1);
#line 187 "mode_robdd.implications.m"
        if (mode_robdd__implications__succeeded)
#line 185 "mode_robdd.implications.m"
          {
#line 185 "mode_robdd.implications.m"
            MR_Word mode_robdd__implications__V_44_44;

#line 185 "mode_robdd.implications.m"
            {
#line 185 "mode_robdd.implications.m"
              mode_robdd__implications__normalise_true_false_implication_vars_7_p_0(mode_robdd__implications__TypeInfo_for_T_59, &mode_robdd__implications__V_44_44, mode_robdd__implications__TrueVars6_42, mode_robdd__implications__TrueVars_10, mode_robdd__implications__FalseVars6_40, mode_robdd__implications__FalseVars_12, mode_robdd__implications__ImpVars6_43, mode_robdd__implications__ImpVars_14);
            }
#line 185 "mode_robdd.implications.m"
          }
#line 187 "mode_robdd.implications.m"
        else
#line 188 "mode_robdd.implications.m"
          {
#line 188 "mode_robdd.implications.m"
            *mode_robdd__implications__TrueVars_10 = mode_robdd__implications__TrueVars6_42;
#line 189 "mode_robdd.implications.m"
            *mode_robdd__implications__FalseVars_12 = mode_robdd__implications__FalseVars6_40;
#line 190 "mode_robdd.implications.m"
            *mode_robdd__implications__ImpVars_14 = mode_robdd__implications__ImpVars6_43;
#line 188 "mode_robdd.implications.m"
          }
#line 161 "mode_robdd.implications.m"
      }
#line 160 "mode_robdd.implications.m"
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
#line 147 "mode_robdd.implications.m"
  {
#line 147 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 147 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__4_4;
#line 147 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__V_8_8;
#line 147 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_9_9;
#line 147 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_10_10;

#line 148 "mode_robdd.implications.m"
    {
#line 148 "mode_robdd.implications.m"
      mode_robdd__implications__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 148 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 0) = ((MR_Box) (mode_robdd__implications__A_5));
#line 148 "mode_robdd.implications.m"
    }
#line 148 "mode_robdd.implications.m"
    {
#line 148 "mode_robdd.implications.m"
      mode_robdd__implications__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 148 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 0) = ((MR_Box) (mode_robdd__implications__B_6));
#line 148 "mode_robdd.implications.m"
    }
#line 148 "mode_robdd.implications.m"
    {
#line 148 "mode_robdd.implications.m"
      mode_robdd__implications__V_8_8 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 148 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 0) = ((MR_Box) (mode_robdd__implications__V_9_9));
#line 148 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 1) = ((MR_Box) (mode_robdd__implications__V_10_10));
#line 148 "mode_robdd.implications.m"
    }
#line 147 "mode_robdd.implications.m"
    {
#line 147 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__4_4 = mode_robdd__implications__add_clause_2_f_0(mode_robdd__implications__TypeInfo_for_T_11, mode_robdd__implications__V_8_8, mode_robdd__implications__ImpVars_7);
    }
#line 147 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__4_4;
#line 147 "mode_robdd.implications.m"
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
#line 144 "mode_robdd.implications.m"
  {
#line 144 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 144 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__4_4;
#line 144 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__V_8_8;
#line 144 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_9_9;
#line 144 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_10_10;

#line 145 "mode_robdd.implications.m"
    {
#line 145 "mode_robdd.implications.m"
      mode_robdd__implications__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 145 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(1), mode_robdd__implications__V_9_9, 0) = ((MR_Box) (mode_robdd__implications__A_5));
#line 145 "mode_robdd.implications.m"
    }
#line 145 "mode_robdd.implications.m"
    {
#line 145 "mode_robdd.implications.m"
      mode_robdd__implications__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 145 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(1), mode_robdd__implications__V_10_10, 0) = ((MR_Box) (mode_robdd__implications__B_6));
#line 145 "mode_robdd.implications.m"
    }
#line 145 "mode_robdd.implications.m"
    {
#line 145 "mode_robdd.implications.m"
      mode_robdd__implications__V_8_8 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 145 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 0) = ((MR_Box) (mode_robdd__implications__V_9_9));
#line 145 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 1) = ((MR_Box) (mode_robdd__implications__V_10_10));
#line 145 "mode_robdd.implications.m"
    }
#line 144 "mode_robdd.implications.m"
    {
#line 144 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__4_4 = mode_robdd__implications__add_clause_2_f_0(mode_robdd__implications__TypeInfo_for_T_11, mode_robdd__implications__V_8_8, mode_robdd__implications__ImpVars_7);
    }
#line 144 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__4_4;
#line 144 "mode_robdd.implications.m"
  }
#line 44 "mode_robdd.implications.m"
}

#line 139 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__at_most_one_of_2_f_0_1(
#line 139 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 139 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 139 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2)
#line 139 "mode_robdd.implications.m"
{
#line 139 "mode_robdd.implications.m"
  {
#line 139 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_3;
#line 139 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 139 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv2_HeadVar__4_4;

#line 139 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 139 "mode_robdd.implications.m"
    {
#line 139 "mode_robdd.implications.m"
      mode_robdd__implications__conv2_HeadVar__4_4 = mode_robdd__implications__not_both_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2));
    }
#line 139 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_3 = ((MR_Box) (mode_robdd__implications__conv2_HeadVar__4_4));
#line 139 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_3;
#line 139 "mode_robdd.implications.m"
  }
#line 139 "mode_robdd.implications.m"
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
#line 137 "mode_robdd.implications.m"
  {
#line 137 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 137 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 137 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Var_6;
#line 137 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Vars_7;
#line 138 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_11_11;
#line 138 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_12_12;
#line 138 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_13;
#line 138 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeClassInfo_for_enum_14;
#line 138 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__conv1_Var_6;
#line 138 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_Vars_7;

#line 9519 "mode_robdd.implications.c"
    mode_robdd__implications__BaseTypeClassInfo_for_enum_13 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 9521 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_11_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 9523 "mode_robdd.implications.c"
    {
#line 9525 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9527 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_12_12, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_11_11));
#line 9529 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_12_12, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_10));
#line 9531 "mode_robdd.implications.c"
    }
#line 9533 "mode_robdd.implications.c"
    {
#line 9535 "mode_robdd.implications.c"
      mode_robdd__implications__TypeClassInfo_for_enum_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9537 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_14, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_13));
#line 9539 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_14, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_10));
#line 9541 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_14, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_12_12));
#line 9543 "mode_robdd.implications.c"
    }
#line 138 "mode_robdd.implications.m"
    {
#line 138 "mode_robdd.implications.m"
      mode_robdd__implications__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__implications__TypeClassInfo_for_enum_14, &mode_robdd__implications__conv1_Var_6, (MR_Word) mode_robdd__implications__Vars0_4, &mode_robdd__implications__conv0_Vars_7);
    }
#line 138 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 138 "mode_robdd.implications.m"
      {
#line 138 "mode_robdd.implications.m"
        mode_robdd__implications__Var_6 = ((MR_Word) mode_robdd__implications__conv1_Var_6);
#line 138 "mode_robdd.implications.m"
        mode_robdd__implications__Vars_7 = (MR_Word) mode_robdd__implications__conv0_Vars_7;
#line 138 "mode_robdd.implications.m"
        mode_robdd__implications__succeeded = MR_TRUE;
#line 138 "mode_robdd.implications.m"
      }
#line 137 "mode_robdd.implications.m"
    if (mode_robdd__implications__succeeded)
#line 137 "mode_robdd.implications.m"
      {
#line 137 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_18_18;
#line 137 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_19_19;
#line 137 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__BaseTypeClassInfo_for_enum_20;
#line 137 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeClassInfo_for_enum_21;
#line 137 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeCtorInfo_22_22;
#line 137 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__TypeInfo_23_23;
#line 137 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_8_8;
#line 137 "mode_robdd.implications.m"
        MR_Word mode_robdd__implications__V_9_9;
#line 137 "mode_robdd.implications.m"
        MR_Box mode_robdd__implications__conv3_V_9_9;

#line 139 "mode_robdd.implications.m"
        {
#line 139 "mode_robdd.implications.m"
          mode_robdd__implications__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 139 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_4[0]));
#line 139 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 1) = ((MR_Box) (mode_robdd__implications__at_most_one_of_2_f_0_1));
#line 139 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 139 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_10));
#line 139 "mode_robdd.implications.m"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 4) = ((MR_Box) (mode_robdd__implications__Var_6));
#line 139 "mode_robdd.implications.m"
        }
#line 9601 "mode_robdd.implications.c"
        mode_robdd__implications__BaseTypeClassInfo_for_enum_20 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 9603 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 9605 "mode_robdd.implications.c"
        {
#line 9607 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9609 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_19_19, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_18_18));
#line 9611 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_19_19, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_10));
#line 9613 "mode_robdd.implications.c"
        }
#line 9615 "mode_robdd.implications.c"
        {
#line 9617 "mode_robdd.implications.c"
          mode_robdd__implications__TypeClassInfo_for_enum_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9619 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_21, 0) = ((MR_Box) (mode_robdd__implications__BaseTypeClassInfo_for_enum_20));
#line 9621 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_21, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_10));
#line 9623 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeClassInfo_for_enum_21, 2) = ((MR_Box) (mode_robdd__implications__TypeInfo_19_19));
#line 9625 "mode_robdd.implications.c"
        }
#line 9627 "mode_robdd.implications.c"
        mode_robdd__implications__TypeCtorInfo_22_22 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_imp_vars_1;
#line 9629 "mode_robdd.implications.c"
        {
#line 9631 "mode_robdd.implications.c"
          mode_robdd__implications__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9633 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_22_22));
#line 9635 "mode_robdd.implications.c"
          MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_23_23, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_10));
#line 9637 "mode_robdd.implications.c"
        }
#line 137 "mode_robdd.implications.m"
        {
#line 137 "mode_robdd.implications.m"
          mode_robdd__implications__conv3_V_9_9 = mercury__sparse_bitset__foldl_3_f_0(mode_robdd__implications__TypeInfo_23_23, mode_robdd__implications__TypeClassInfo_for_enum_21, (MR_Word) mode_robdd__implications__V_8_8, (MR_Word) mode_robdd__implications__Vars_7, ((MR_Box) (mode_robdd__implications__ImpVars_5)));
        }
#line 137 "mode_robdd.implications.m"
        mode_robdd__implications__V_9_9 = ((MR_Word) mode_robdd__implications__conv3_V_9_9);
#line 137 "mode_robdd.implications.m"
        {
#line 137 "mode_robdd.implications.m"
          mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__at_most_one_of_2_f_0(mode_robdd__implications__TypeInfo_for_T_10, mode_robdd__implications__Vars_7, mode_robdd__implications__V_9_9);
        }
#line 137 "mode_robdd.implications.m"
      }
#line 137 "mode_robdd.implications.m"
    else
#line 137 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__ImpVars_5;
#line 137 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 137 "mode_robdd.implications.m"
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
#line 134 "mode_robdd.implications.m"
  {
#line 134 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 134 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__4_4;
#line 134 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__V_8_8;
#line 134 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_9_9;
#line 134 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_10_10;

#line 135 "mode_robdd.implications.m"
    {
#line 135 "mode_robdd.implications.m"
      mode_robdd__implications__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 135 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(1), mode_robdd__implications__V_9_9, 0) = ((MR_Box) (mode_robdd__implications__A_5));
#line 135 "mode_robdd.implications.m"
    }
#line 135 "mode_robdd.implications.m"
    {
#line 135 "mode_robdd.implications.m"
      mode_robdd__implications__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 135 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 0) = ((MR_Box) (mode_robdd__implications__B_6));
#line 135 "mode_robdd.implications.m"
    }
#line 135 "mode_robdd.implications.m"
    {
#line 135 "mode_robdd.implications.m"
      mode_robdd__implications__V_8_8 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 135 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 0) = ((MR_Box) (mode_robdd__implications__V_9_9));
#line 135 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 1) = ((MR_Box) (mode_robdd__implications__V_10_10));
#line 135 "mode_robdd.implications.m"
    }
#line 134 "mode_robdd.implications.m"
    {
#line 134 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__4_4 = mode_robdd__implications__add_clause_2_f_0(mode_robdd__implications__TypeInfo_for_T_11, mode_robdd__implications__V_8_8, mode_robdd__implications__ImpVars_7);
    }
#line 134 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__4_4;
#line 134 "mode_robdd.implications.m"
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
#line 131 "mode_robdd.implications.m"
  {
#line 131 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 131 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__4_4;
#line 131 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__V_8_8;
#line 131 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_9_9;
#line 131 "mode_robdd.implications.m"
    MR_Tuple mode_robdd__implications__V_10_10;
#line 131 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_11_11;
#line 131 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_12_12;
#line 131 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_13_13;
#line 131 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_14_14;

#line 132 "mode_robdd.implications.m"
    {
#line 132 "mode_robdd.implications.m"
      mode_robdd__implications__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 132 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(1), mode_robdd__implications__V_13_13, 0) = ((MR_Box) (mode_robdd__implications__A_5));
#line 132 "mode_robdd.implications.m"
    }
#line 132 "mode_robdd.implications.m"
    {
#line 132 "mode_robdd.implications.m"
      mode_robdd__implications__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 132 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(1), mode_robdd__implications__V_14_14, 0) = ((MR_Box) (mode_robdd__implications__B_6));
#line 132 "mode_robdd.implications.m"
    }
#line 132 "mode_robdd.implications.m"
    {
#line 132 "mode_robdd.implications.m"
      mode_robdd__implications__V_8_8 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 132 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 0) = ((MR_Box) (mode_robdd__implications__V_13_13));
#line 132 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_8_8, 1) = ((MR_Box) (mode_robdd__implications__V_14_14));
#line 132 "mode_robdd.implications.m"
    }
#line 131 "mode_robdd.implications.m"
    {
#line 131 "mode_robdd.implications.m"
      mode_robdd__implications__V_9_9 = mode_robdd__implications__add_clause_2_f_0(mode_robdd__implications__TypeInfo_for_T_15, mode_robdd__implications__V_8_8, mode_robdd__implications__ImpVars_7);
    }
#line 132 "mode_robdd.implications.m"
    {
#line 132 "mode_robdd.implications.m"
      mode_robdd__implications__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 132 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_11_11, 0) = ((MR_Box) (mode_robdd__implications__A_5));
#line 132 "mode_robdd.implications.m"
    }
#line 132 "mode_robdd.implications.m"
    {
#line 132 "mode_robdd.implications.m"
      mode_robdd__implications__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 132 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_12_12, 0) = ((MR_Box) (mode_robdd__implications__B_6));
#line 132 "mode_robdd.implications.m"
    }
#line 132 "mode_robdd.implications.m"
    {
#line 132 "mode_robdd.implications.m"
      mode_robdd__implications__V_10_10 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 132 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 0) = ((MR_Box) (mode_robdd__implications__V_11_11));
#line 132 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 1) = ((MR_Box) (mode_robdd__implications__V_12_12));
#line 132 "mode_robdd.implications.m"
    }
#line 131 "mode_robdd.implications.m"
    {
#line 131 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__4_4 = mode_robdd__implications__add_clause_2_f_0(mode_robdd__implications__TypeInfo_for_T_15, mode_robdd__implications__V_10_10, mode_robdd__implications__V_9_9);
    }
#line 131 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__4_4;
#line 131 "mode_robdd.implications.m"
  }
#line 38 "mode_robdd.implications.m"
}

#line 117 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__filter_2_f_0_1(
#line 117 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 117 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1)
#line 117 "mode_robdd.implications.m"
{
#line 117 "mode_robdd.implications.m"
  {
#line 117 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_2;
#line 117 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 117 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__3_3;

#line 117 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 117 "mode_robdd.implications.m"
    {
#line 117 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__3_3 = mode_robdd__implications__filter_imp_map_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 117 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__3_3));
#line 117 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 117 "mode_robdd.implications.m"
  }
#line 117 "mode_robdd.implications.m"
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
#line 117 "mode_robdd.implications.m"
  {
#line 117 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 117 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 117 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_6_6;

#line 117 "mode_robdd.implications.m"
    {
#line 117 "mode_robdd.implications.m"
      mode_robdd__implications__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 117 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[2]));
#line 117 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 1) = ((MR_Box) (mode_robdd__implications__filter_2_f_0_1));
#line 117 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 117 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_7));
#line 117 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 4) = ((MR_Box) (mode_robdd__implications__P_4));
#line 117 "mode_robdd.implications.m"
    }
#line 117 "mode_robdd.implications.m"
    {
#line 117 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__apply_to_imp_maps_2_f_0(mode_robdd__implications__TypeInfo_for_T_7, mode_robdd__implications__V_6_6, mode_robdd__implications__ImpVars_5);
    }
#line 117 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 117 "mode_robdd.implications.m"
  }
#line 36 "mode_robdd.implications.m"
}

#line 101 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__restrict_threshold_2_f_0_1(
#line 101 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 101 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1)
#line 101 "mode_robdd.implications.m"
{
#line 101 "mode_robdd.implications.m"
  {
#line 101 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_2;
#line 101 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 101 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__4_9;

#line 101 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 101 "mode_robdd.implications.m"
    {
#line 101 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__4_9 = mode_robdd__implications__IntroducedFrom__func__restrict_threshold__101__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 101 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__4_9));
#line 101 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 101 "mode_robdd.implications.m"
  }
#line 101 "mode_robdd.implications.m"
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
#line 100 "mode_robdd.implications.m"
  {
#line 100 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 100 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 100 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_7_7;

#line 101 "mode_robdd.implications.m"
    {
#line 101 "mode_robdd.implications.m"
      mode_robdd__implications__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 101 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[1]));
#line 101 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 1) = ((MR_Box) (mode_robdd__implications__restrict_threshold_2_f_0_1));
#line 101 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 101 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_13));
#line 101 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_7_7, 4) = ((MR_Box) (mode_robdd__implications__Threshold_4));
#line 101 "mode_robdd.implications.m"
    }
#line 101 "mode_robdd.implications.m"
    {
#line 101 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__apply_to_imp_maps_2_f_0(mode_robdd__implications__TypeInfo_for_T_13, mode_robdd__implications__V_7_7, mode_robdd__implications__ImpVars_5);
    }
#line 100 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 100 "mode_robdd.implications.m"
  }
#line 33 "mode_robdd.implications.m"
}

#line 97 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__delete_2_f_0_1(
#line 97 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 97 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1)
#line 97 "mode_robdd.implications.m"
{
#line 97 "mode_robdd.implications.m"
  {
#line 97 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_2;
#line 97 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 97 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__3_3;

#line 97 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 97 "mode_robdd.implications.m"
    {
#line 97 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__3_3 = mode_robdd__implications__delete_var_from_imp_map_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 97 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__3_3));
#line 97 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 97 "mode_robdd.implications.m"
  }
#line 97 "mode_robdd.implications.m"
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
#line 96 "mode_robdd.implications.m"
  {
#line 96 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 96 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 96 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_6_6;

#line 97 "mode_robdd.implications.m"
    {
#line 97 "mode_robdd.implications.m"
      mode_robdd__implications__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 97 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[1]));
#line 97 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 1) = ((MR_Box) (mode_robdd__implications__delete_2_f_0_1));
#line 97 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 97 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_7));
#line 97 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 4) = ((MR_Box) (mode_robdd__implications__Var_5));
#line 97 "mode_robdd.implications.m"
    }
#line 97 "mode_robdd.implications.m"
    {
#line 97 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__apply_to_imp_maps_2_f_0(mode_robdd__implications__TypeInfo_for_T_7, mode_robdd__implications__V_6_6, mode_robdd__implications__ImpVars_4);
    }
#line 96 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 96 "mode_robdd.implications.m"
  }
#line 31 "mode_robdd.implications.m"
}

#line 94 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__difference_2_f_0_1(
#line 94 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 94 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 94 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2)
#line 94 "mode_robdd.implications.m"
{
#line 94 "mode_robdd.implications.m"
  {
#line 94 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_3;
#line 94 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 94 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__3_3;

#line 94 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 94 "mode_robdd.implications.m"
    {
#line 94 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__3_3 = mode_robdd__implications__imp_map_difference_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2));
    }
#line 94 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_3 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__3_3));
#line 94 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_3;
#line 94 "mode_robdd.implications.m"
  }
#line 94 "mode_robdd.implications.m"
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
#line 93 "mode_robdd.implications.m"
  {
#line 93 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 93 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 93 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_6_6;

#line 94 "mode_robdd.implications.m"
    {
#line 94 "mode_robdd.implications.m"
      mode_robdd__implications__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 94 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
#line 94 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 1) = ((MR_Box) (mode_robdd__implications__difference_2_f_0_1));
#line 94 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 94 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_7));
#line 94 "mode_robdd.implications.m"
    }
#line 94 "mode_robdd.implications.m"
    {
#line 94 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__apply_to_coresp_imp_maps_3_f_0(mode_robdd__implications__TypeInfo_for_T_7, mode_robdd__implications__V_6_6, mode_robdd__implications__ImpVarsA_4, mode_robdd__implications__ImpVarsB_5);
    }
#line 93 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 93 "mode_robdd.implications.m"
  }
#line 29 "mode_robdd.implications.m"
}

#line 91 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_plus_2_f_0_1(
#line 91 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 91 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1,
#line 91 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_2)
#line 91 "mode_robdd.implications.m"
{
#line 91 "mode_robdd.implications.m"
  {
#line 91 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_3;
#line 91 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 91 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_HeadVar__3_3;

#line 91 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 91 "mode_robdd.implications.m"
    {
#line 91 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__3_3 = mode_robdd__implications__intersect_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1), ((MR_Word) mode_robdd__implications__wrapper_arg_2));
    }
#line 91 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_3 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__3_3));
#line 91 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_3;
#line 91 "mode_robdd.implications.m"
  }
#line 91 "mode_robdd.implications.m"
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
#line 90 "mode_robdd.implications.m"
  {
#line 90 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 90 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 90 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_6_6;

#line 91 "mode_robdd.implications.m"
    {
#line 91 "mode_robdd.implications.m"
      mode_robdd__implications__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 91 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_3[0]));
#line 91 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 1) = ((MR_Box) (mode_robdd__implications__f_plus_2_f_0_1));
#line 91 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 91 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_6_6, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_7));
#line 91 "mode_robdd.implications.m"
    }
#line 91 "mode_robdd.implications.m"
    {
#line 91 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__apply_to_coresp_imp_maps_3_f_0(mode_robdd__implications__TypeInfo_for_T_7, mode_robdd__implications__V_6_6, mode_robdd__implications__ImpVarsA_4, mode_robdd__implications__ImpVarsB_5);
    }
#line 90 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 90 "mode_robdd.implications.m"
  }
#line 27 "mode_robdd.implications.m"
}

#line 88 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_8(
#line 88 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 88 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1)
#line 88 "mode_robdd.implications.m"
{
#line 88 "mode_robdd.implications.m"
  {
#line 88 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_2;
#line 88 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 88 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv7_HeadVar__2_2;

#line 88 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 88 "mode_robdd.implications.m"
    {
#line 88 "mode_robdd.implications.m"
      mode_robdd__implications__conv7_HeadVar__2_2 = mode_robdd__implications__mkpos_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 88 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv7_HeadVar__2_2));
#line 88 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 88 "mode_robdd.implications.m"
  }
#line 88 "mode_robdd.implications.m"
}

#line 88 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_7(
#line 88 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__closure_arg,
#line 88 "mode_robdd.implications.m"
  MR_Box mode_robdd__implications__wrapper_arg_1)
#line 88 "mode_robdd.implications.m"
{
#line 88 "mode_robdd.implications.m"
  {
#line 88 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__wrapper_arg_2;
#line 88 "mode_robdd.implications.m"
    MR_Box mode_robdd__implications__closure;
#line 88 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv6_HeadVar__2_2;

#line 88 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 88 "mode_robdd.implications.m"
    {
#line 88 "mode_robdd.implications.m"
      mode_robdd__implications__conv6_HeadVar__2_2 = mode_robdd__implications__mkpos_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 88 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv6_HeadVar__2_2));
#line 88 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 88 "mode_robdd.implications.m"
  }
#line 88 "mode_robdd.implications.m"
}

#line 87 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_6(
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
    MR_Word mode_robdd__implications__conv5_HeadVar__2_2;

#line 87 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 87 "mode_robdd.implications.m"
    {
#line 87 "mode_robdd.implications.m"
      mode_robdd__implications__conv5_HeadVar__2_2 = mode_robdd__implications__mkneg_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 87 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv5_HeadVar__2_2));
#line 87 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 87 "mode_robdd.implications.m"
  }
#line 87 "mode_robdd.implications.m"
}

#line 87 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_5(
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
    MR_Word mode_robdd__implications__conv4_HeadVar__2_2;

#line 87 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 87 "mode_robdd.implications.m"
    {
#line 87 "mode_robdd.implications.m"
      mode_robdd__implications__conv4_HeadVar__2_2 = mode_robdd__implications__mkneg_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 87 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv4_HeadVar__2_2));
#line 87 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 87 "mode_robdd.implications.m"
  }
#line 87 "mode_robdd.implications.m"
}

#line 86 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_4(
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
    MR_Word mode_robdd__implications__conv3_HeadVar__2_2;

#line 86 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 86 "mode_robdd.implications.m"
    {
#line 86 "mode_robdd.implications.m"
      mode_robdd__implications__conv3_HeadVar__2_2 = mode_robdd__implications__mkneg_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 86 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv3_HeadVar__2_2));
#line 86 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 86 "mode_robdd.implications.m"
  }
#line 86 "mode_robdd.implications.m"
}

#line 86 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_3(
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
    MR_Word mode_robdd__implications__conv2_HeadVar__2_2;

#line 86 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 86 "mode_robdd.implications.m"
    {
#line 86 "mode_robdd.implications.m"
      mode_robdd__implications__conv2_HeadVar__2_2 = mode_robdd__implications__mkpos_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 86 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv2_HeadVar__2_2));
#line 86 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 86 "mode_robdd.implications.m"
  }
#line 86 "mode_robdd.implications.m"
}

#line 85 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_2(
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
    MR_Word mode_robdd__implications__conv1_HeadVar__2_2;

#line 85 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 85 "mode_robdd.implications.m"
    {
#line 85 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_HeadVar__2_2 = mode_robdd__implications__mkpos_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 85 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv1_HeadVar__2_2));
#line 85 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 85 "mode_robdd.implications.m"
  }
#line 85 "mode_robdd.implications.m"
}

#line 85 "mode_robdd.implications.m"
static MR_Box MR_CALL 
mode_robdd__implications__f_times_2_f_0_1(
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
    MR_Word mode_robdd__implications__conv0_HeadVar__2_2;

#line 85 "mode_robdd.implications.m"
    mode_robdd__implications__closure = mode_robdd__implications__closure_arg;
#line 85 "mode_robdd.implications.m"
    {
#line 85 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_HeadVar__2_2 = mode_robdd__implications__mkneg_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__implications__wrapper_arg_1));
    }
#line 85 "mode_robdd.implications.m"
    mode_robdd__implications__wrapper_arg_2 = ((MR_Box) (mode_robdd__implications__conv0_HeadVar__2_2));
#line 85 "mode_robdd.implications.m"
    return mode_robdd__implications__wrapper_arg_2;
#line 85 "mode_robdd.implications.m"
  }
#line 85 "mode_robdd.implications.m"
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
#line 84 "mode_robdd.implications.m"
  {
#line 84 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 84 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__3_3;
#line 84 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__Imps_5;
#line 84 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RevImps_6;
#line 84 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__DisImps_7;
#line 84 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__RevDisImps_8;
#line 84 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_9_9;
#line 84 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_10_10;
#line 84 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_11_11;
#line 84 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_12_12;
#line 84 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_13_13;
#line 84 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_14_14;
#line 84 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_15_15;
#line 84 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_16_16;
#line 84 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_17_17;
#line 84 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_18_18;
#line 84 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_19_19;

#line 84 "mode_robdd.implications.m"
    mode_robdd__implications__Imps_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__2_2, (MR_Integer) 0)));
#line 84 "mode_robdd.implications.m"
    mode_robdd__implications__RevImps_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__2_2, (MR_Integer) 1)));
#line 84 "mode_robdd.implications.m"
    mode_robdd__implications__DisImps_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__2_2, (MR_Integer) 2)));
#line 84 "mode_robdd.implications.m"
    mode_robdd__implications__RevDisImps_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__2_2, (MR_Integer) 3)));
#line 85 "mode_robdd.implications.m"
    {
#line 85 "mode_robdd.implications.m"
      mode_robdd__implications__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 85 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
#line 85 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_1));
#line 85 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 85 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_9_9, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 85 "mode_robdd.implications.m"
    }
#line 85 "mode_robdd.implications.m"
    {
#line 85 "mode_robdd.implications.m"
      mode_robdd__implications__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 85 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
#line 85 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_2));
#line 85 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 85 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_10_10, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 85 "mode_robdd.implications.m"
    }
#line 84 "mode_robdd.implications.m"
    {
#line 84 "mode_robdd.implications.m"
      mode_robdd__implications__V_11_11 = mode_robdd__implications__add_imp_map_clauses_4_f_0(mode_robdd__implications__TypeInfo_for_T_20, mode_robdd__implications__V_9_9, mode_robdd__implications__V_10_10, mode_robdd__implications__Imps_5, mode_robdd__implications__ImpVars_4);
    }
#line 86 "mode_robdd.implications.m"
    {
#line 86 "mode_robdd.implications.m"
      mode_robdd__implications__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 86 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_12_12, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
#line 86 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_12_12, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_3));
#line 86 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 86 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_12_12, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 86 "mode_robdd.implications.m"
    }
#line 86 "mode_robdd.implications.m"
    {
#line 86 "mode_robdd.implications.m"
      mode_robdd__implications__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 86 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_13_13, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
#line 86 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_13_13, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_4));
#line 86 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 86 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_13_13, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 86 "mode_robdd.implications.m"
    }
#line 84 "mode_robdd.implications.m"
    {
#line 84 "mode_robdd.implications.m"
      mode_robdd__implications__V_14_14 = mode_robdd__implications__add_imp_map_clauses_4_f_0(mode_robdd__implications__TypeInfo_for_T_20, mode_robdd__implications__V_12_12, mode_robdd__implications__V_13_13, mode_robdd__implications__RevImps_6, mode_robdd__implications__V_11_11);
    }
#line 87 "mode_robdd.implications.m"
    {
#line 87 "mode_robdd.implications.m"
      mode_robdd__implications__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 87 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
#line 87 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_5));
#line 87 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 87 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_15_15, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 87 "mode_robdd.implications.m"
    }
#line 87 "mode_robdd.implications.m"
    {
#line 87 "mode_robdd.implications.m"
      mode_robdd__implications__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 87 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_16_16, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
#line 87 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_16_16, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_6));
#line 87 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 87 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_16_16, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 87 "mode_robdd.implications.m"
    }
#line 84 "mode_robdd.implications.m"
    {
#line 84 "mode_robdd.implications.m"
      mode_robdd__implications__V_17_17 = mode_robdd__implications__add_imp_map_clauses_4_f_0(mode_robdd__implications__TypeInfo_for_T_20, mode_robdd__implications__V_15_15, mode_robdd__implications__V_16_16, mode_robdd__implications__DisImps_7, mode_robdd__implications__V_14_14);
    }
#line 88 "mode_robdd.implications.m"
    {
#line 88 "mode_robdd.implications.m"
      mode_robdd__implications__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 88 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_18_18, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
#line 88 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_18_18, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_7));
#line 88 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 88 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_18_18, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 88 "mode_robdd.implications.m"
    }
#line 88 "mode_robdd.implications.m"
    {
#line 88 "mode_robdd.implications.m"
      mode_robdd__implications__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 88 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, 0) = ((MR_Box) (&mode_robdd__implications_scalar_common_2[0]));
#line 88 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, 1) = ((MR_Box) (mode_robdd__implications__f_times_2_f_0_8));
#line 88 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 88 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__V_19_19, 3) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_20));
#line 88 "mode_robdd.implications.m"
    }
#line 84 "mode_robdd.implications.m"
    {
#line 84 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__3_3 = mode_robdd__implications__add_imp_map_clauses_4_f_0(mode_robdd__implications__TypeInfo_for_T_20, mode_robdd__implications__V_18_18, mode_robdd__implications__V_19_19, mode_robdd__implications__RevDisImps_8, mode_robdd__implications__V_17_17);
    }
#line 84 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__3_3;
#line 84 "mode_robdd.implications.m"
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
#line 82 "mode_robdd.implications.m"
  {
#line 82 "mode_robdd.implications.m"
    MR_bool mode_robdd__implications__succeeded;
#line 82 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__HeadVar__1_1;
#line 82 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_7_7;
#line 82 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_8_8;
#line 82 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeCtorInfo_9_9;
#line 82 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__TypeInfo_10_10;
#line 82 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_2_2;
#line 82 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_3_3;
#line 82 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_4_4;
#line 82 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__V_5_5;
#line 82 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv0_V_2_2;
#line 82 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv1_V_3_3;
#line 82 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv2_V_4_4;
#line 82 "mode_robdd.implications.m"
    MR_Word mode_robdd__implications__conv3_V_5_5;

#line 10746 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_7_7 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 10748 "mode_robdd.implications.c"
    {
#line 10750 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10752 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_8_8, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_7_7));
#line 10754 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_8_8, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_for_T_6));
#line 10756 "mode_robdd.implications.c"
    }
#line 10758 "mode_robdd.implications.c"
    mode_robdd__implications__TypeCtorInfo_9_9 = (MR_Word) &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1;
#line 10760 "mode_robdd.implications.c"
    {
#line 10762 "mode_robdd.implications.c"
      mode_robdd__implications__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10764 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__implications__TypeCtorInfo_9_9));
#line 10766 "mode_robdd.implications.c"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__implications__TypeInfo_8_8));
#line 10768 "mode_robdd.implications.c"
    }
#line 82 "mode_robdd.implications.m"
    {
#line 82 "mode_robdd.implications.m"
      mode_robdd__implications__conv0_V_2_2 = mercury__map__init_0_f_0(mode_robdd__implications__TypeInfo_8_8, mode_robdd__implications__TypeInfo_10_10);
    }
#line 82 "mode_robdd.implications.m"
    mode_robdd__implications__V_2_2 = (MR_Word) mode_robdd__implications__conv0_V_2_2;
#line 82 "mode_robdd.implications.m"
    {
#line 82 "mode_robdd.implications.m"
      mode_robdd__implications__conv1_V_3_3 = mercury__map__init_0_f_0(mode_robdd__implications__TypeInfo_8_8, mode_robdd__implications__TypeInfo_10_10);
    }
#line 82 "mode_robdd.implications.m"
    mode_robdd__implications__V_3_3 = (MR_Word) mode_robdd__implications__conv1_V_3_3;
#line 82 "mode_robdd.implications.m"
    {
#line 82 "mode_robdd.implications.m"
      mode_robdd__implications__conv2_V_4_4 = mercury__map__init_0_f_0(mode_robdd__implications__TypeInfo_8_8, mode_robdd__implications__TypeInfo_10_10);
    }
#line 82 "mode_robdd.implications.m"
    mode_robdd__implications__V_4_4 = (MR_Word) mode_robdd__implications__conv2_V_4_4;
#line 82 "mode_robdd.implications.m"
    {
#line 82 "mode_robdd.implications.m"
      mode_robdd__implications__conv3_V_5_5 = mercury__map__init_0_f_0(mode_robdd__implications__TypeInfo_8_8, mode_robdd__implications__TypeInfo_10_10);
    }
#line 82 "mode_robdd.implications.m"
    mode_robdd__implications__V_5_5 = (MR_Word) mode_robdd__implications__conv3_V_5_5;
#line 82 "mode_robdd.implications.m"
    {
#line 82 "mode_robdd.implications.m"
      mode_robdd__implications__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 82 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, 0) = ((MR_Box) (mode_robdd__implications__V_2_2));
#line 82 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, 1) = ((MR_Box) (mode_robdd__implications__V_3_3));
#line 82 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, 2) = ((MR_Box) (mode_robdd__implications__V_4_4));
#line 82 "mode_robdd.implications.m"
      MR_hl_field(MR_mktag(0), mode_robdd__implications__HeadVar__1_1, 3) = ((MR_Box) (mode_robdd__implications__V_5_5));
#line 82 "mode_robdd.implications.m"
    }
#line 82 "mode_robdd.implications.m"
    return mode_robdd__implications__HeadVar__1_1;
#line 82 "mode_robdd.implications.m"
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
