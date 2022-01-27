/*
** Automatically generated from `prog_util.m'
** by the Mercury compiler,
** version rotd-14.01.1-2014-05-28, configured for x86_64-apple-darwin13.1.0.
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


/* :- module parse_tree.prog_util. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_util__init
ENDINIT
*/

#include "parse_tree.prog_util.mih"


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
#include "term_io.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 133 "parse_tree.prog_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 136 "parse_tree.prog_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_util__pair__pti_pair_2__plain_parse_tree__prog_item__type_ctor_info_goal_expr_0__plain_term__type_ctor_info_context_0;

#line 139 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 142 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 145 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_0[2];

#line 148 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_0;

#line 151 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 154 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 157 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_util__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 160 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 163 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_1[2];

#line 166 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_1;

#line 169 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0;

#line 172 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_2[1];

#line 175 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_2;

#line 178 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_3[1];

#line 181 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_3;

#line 184 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_4;

#line 187 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_5[2];

#line 190 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_5;

#line 193 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_6[1];

#line 196 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_6;

#line 199 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_0[1];

#line 202 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_1[1];

#line 205 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_2[1];

#line 208 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_3[4];

#line 211 "parse_tree.prog_util.c"
static const MR_DuPtagLayout parse_tree__prog_util__parse_tree__prog_util__du_ptag_ordered_new_pred_id_0[4];

#line 214 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_name_ordered_new_pred_id_0[7];

#line 217 "parse_tree.prog_util.c"
static const MR_Integer parse_tree__prog_util__parse_tree__prog_util__functor_number_map_new_pred_id_0[7];

#line 220 "parse_tree.prog_util.c"
static MR_bool MR_CALL 
parse_tree__prog_util____Unify____maybe_modes_0_0_10001(
#line 223 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 225 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2);

#line 228 "parse_tree.prog_util.c"
static void MR_CALL 
parse_tree__prog_util____Compare____maybe_modes_0_0_10001(
#line 231 "parse_tree.prog_util.c"
  MR_Box * parse_tree__prog_util__wrapper_arg_1,
#line 233 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2,
#line 235 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_3);

#line 238 "parse_tree.prog_util.c"
static MR_bool MR_CALL 
parse_tree__prog_util____Unify____new_pred_id_0_0_10001(
#line 241 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 243 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2);

#line 246 "parse_tree.prog_util.c"
static void MR_CALL 
parse_tree__prog_util____Compare____new_pred_id_0_0_10001(
#line 249 "parse_tree.prog_util.c"
  MR_Box * parse_tree__prog_util__wrapper_arg_1,
#line 251 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2,
#line 253 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_3);

#line 574 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(
#line 574 "prog_util.m"
  MR_Word parse_tree__prog_util__V_23_23,
#line 574 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 574 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
#line 574 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4);

#line 567 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(
#line 567 "prog_util.m"
  MR_Word parse_tree__prog_util__V_14_14,
#line 567 "prog_util.m"
  MR_Word parse_tree__prog_util__List_5,
#line 567 "prog_util.m"
  MR_String * parse_tree__prog_util__String_6);

#line 754 "prog_util.m"
static MR_Word MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(
#line 754 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 754 "prog_util.m"
  MR_Word parse_tree__prog_util__Term_2,
#line 754 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_3);

#line 574 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__list_to_string_2__ho4_4_p_0(
#line 574 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 574 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
#line 574 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4);

#line 567 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__list_to_string__ho1_3_p_0(
#line 567 "prog_util.m"
  MR_Word parse_tree__prog_util__List_5,
#line 567 "prog_util.m"
  MR_String * parse_tree__prog_util__String_6);

#line 538 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__538__1_3_p_0(
#line 538 "prog_util.m"
  MR_Word parse_tree__prog_util__VarSet_18,
#line 538 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_37,
#line 538 "prog_util.m"
  MR_String * parse_tree__prog_util__HeadVar__3_38);

#line 780 "prog_util.m"
static MR_Word MR_CALL 
parse_tree__prog_util__goal_list_to_conj_2_3_f_0(
#line 780 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_1,
#line 780 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 780 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3);

#line 673 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__make_n_fresh_vars_2_6_p_0(
#line 673 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_23,
#line 673 "prog_util.m"
  MR_String parse_tree__prog_util__BaseName_7,
#line 673 "prog_util.m"
  MR_Integer parse_tree__prog_util__N_8,
#line 673 "prog_util.m"
  MR_Integer parse_tree__prog_util__Max_9,
#line 673 "prog_util.m"
  MR_Word * parse_tree__prog_util__Vars_10,
#line 673 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_0_17,
#line 673 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_VarSet_18);

#line 508 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_catch_expr_4_p_0(
#line 508 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 508 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 508 "prog_util.m"
  MR_Word parse_tree__prog_util__Catch0_7,
#line 508 "prog_util.m"
  MR_Word * parse_tree__prog_util__Catch_8);

#line 495 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_maybe_var_4_p_0(
#line 495 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 495 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 495 "prog_util.m"
  MR_Word parse_tree__prog_util__MaybeVar0_7,
#line 495 "prog_util.m"
  MR_Word * parse_tree__prog_util__MaybeVar_8);

#line 485 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_var_4_p_0(
#line 485 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 485 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 485 "prog_util.m"
  MR_Word parse_tree__prog_util__Var0_7,
#line 485 "prog_util.m"
  MR_Word * parse_tree__prog_util__Var_8);

#line 477 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_vars_4_p_0(
#line 477 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_1,
#line 477 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_2,
#line 477 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3,
#line 477 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__4_4);

#line 469 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(
#line 469 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 469 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 469 "prog_util.m"
  MR_Word parse_tree__prog_util__TMV0_7,
#line 469 "prog_util.m"
  MR_Word * parse_tree__prog_util__TMV_8);

#line 454 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(
#line 454 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 454 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 454 "prog_util.m"
  MR_Word parse_tree__prog_util__Comp0_7,
#line 454 "prog_util.m"
  MR_Word * parse_tree__prog_util__Comp_8);

#line 405 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_expr_4_p_0_4(
#line 405 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 405 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 405 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2);

#line 370 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_expr_4_p_0_3(
#line 370 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 370 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 370 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2);

#line 389 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_expr_4_p_0_2(
#line 389 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 389 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 389 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2);

#line 384 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_expr_4_p_0_1(
#line 384 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 384 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 384 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2);

#line 269 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_expr_4_p_0(
#line 269 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 269 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 269 "prog_util.m"
  MR_Word parse_tree__prog_util__Expr0_7,
#line 269 "prog_util.m"
  MR_Word * parse_tree__prog_util__Expr_8);

#line 242 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__split_types_and_modes_2_5_p_0(
#line 242 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 242 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 242 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__3_3,
#line 242 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__4_4,
#line 242 "prog_util.m"
  MR_Word * parse_tree__prog_util__Result_5);


static /* final */ const MR_Box parse_tree__prog_util_scalar_common_1[9][2];

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_2[2][3];

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_3[4][1];

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_4[4][7];




static /* final */ const MR_Box parse_tree__prog_util_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_util_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_util_scalar_common_2[0]))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "]")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_util_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_expr_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "."))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "true"))
  },
};

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_4[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_util__pair__pti_pair_2__plain_parse_tree__prog_item__type_ctor_info_goal_expr_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_util__pair__pti_pair_2__plain_parse_tree__prog_item__type_ctor_info_goal_expr_0__plain_term__type_ctor_info_context_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0))
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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 636 "parse_tree.prog_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 644 "parse_tree.prog_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_util__pair__pti_pair_2__plain_parse_tree__prog_item__type_ctor_info_goal_expr_0__plain_term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_expr_0,
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 653 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 661 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__prog_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 669 "parse_tree.prog_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_util__parse_tree__prog_util__type_ctor_info_maybe_modes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_util____Unify____maybe_modes_0_0_10001)),
  ((MR_Box) (parse_tree__prog_util____Compare____maybe_modes_0_0_10001)),
  (MR_String) "parse_tree.prog_util",
  (MR_String) "maybe_modes",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_util__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 690 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 696 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_0 = {
  (MR_String) "newpred_counter",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_0,
  NULL,
  NULL,
  NULL
};

#line 711 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 719 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 727 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_util__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 736 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_util__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 744 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_util__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 750 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_1 = {
  (MR_String) "newpred_type_subst",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_1,
  NULL,
  NULL,
  NULL
};

#line 765 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 773 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 778 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_2 = {
  (MR_String) "newpred_unused_args",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_2,
  NULL,
  NULL,
  NULL
};

#line 793 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 798 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_3 = {
  (MR_String) "newpred_parallel_args",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 3,
  parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_3,
  NULL,
  NULL,
  NULL
};

#line 813 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_4 = {
  (MR_String) "newpred_parallel_loop_control",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 828 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_5[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 834 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_5 = {
  (MR_String) "newpred_structure_reuse",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_5,
  NULL,
  NULL,
  NULL
};

#line 849 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 854 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_6 = {
  (MR_String) "newpred_distance_granularity",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_6,
  NULL,
  NULL,
  NULL
};

#line 869 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_0[1] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_4
};

#line 874 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_1[1] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_0
};

#line 879 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_2[1] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_1
};

#line 884 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_3[4] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_2,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_3,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_5,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_6
};

#line 892 "parse_tree.prog_util.c"
static const MR_DuPtagLayout parse_tree__prog_util__parse_tree__prog_util__du_ptag_ordered_new_pred_id_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_2
  },
  {
    (MR_Integer) 4,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_3
  }
};

#line 916 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_name_ordered_new_pred_id_0[7] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_0,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_6,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_3,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_4,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_5,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_1,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_2
};

#line 927 "parse_tree.prog_util.c"
static const MR_Integer parse_tree__prog_util__parse_tree__prog_util__functor_number_map_new_pred_id_0[7] = {
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1
};

#line 938 "parse_tree.prog_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_util__parse_tree__prog_util__type_ctor_info_new_pred_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_util____Unify____new_pred_id_0_0_10001)),
  ((MR_Box) (parse_tree__prog_util____Compare____new_pred_id_0_0_10001)),
  (MR_String) "parse_tree.prog_util",
  (MR_String) "new_pred_id",
  {
    parse_tree__prog_util__parse_tree__prog_util__du_name_ordered_new_pred_id_0
  },
  {
    parse_tree__prog_util__parse_tree__prog_util__du_ptag_ordered_new_pred_id_0
  },
  (MR_Integer) 7,
  (MR_Integer) 4,
  parse_tree__prog_util__parse_tree__prog_util__functor_number_map_new_pred_id_0
};

#line 959 "parse_tree.prog_util.c"
static MR_bool MR_CALL 
parse_tree__prog_util____Unify____maybe_modes_0_0_10001(
#line 962 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 964 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2)
#line 966 "parse_tree.prog_util.c"
{
#line 968 "parse_tree.prog_util.c"
  {
#line 970 "parse_tree.prog_util.c"
    MR_bool parse_tree__prog_util__succeeded;

#line 973 "parse_tree.prog_util.c"
    {
#line 975 "parse_tree.prog_util.c"
      parse_tree__prog_util__succeeded = parse_tree__prog_util____Unify____maybe_modes_0_0(((MR_Word) parse_tree__prog_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_util__wrapper_arg_2));
    }
#line 978 "parse_tree.prog_util.c"
    return parse_tree__prog_util__succeeded;
#line 980 "parse_tree.prog_util.c"
  }
#line 982 "parse_tree.prog_util.c"
}

#line 985 "parse_tree.prog_util.c"
static void MR_CALL 
parse_tree__prog_util____Compare____maybe_modes_0_0_10001(
#line 988 "parse_tree.prog_util.c"
  MR_Box * parse_tree__prog_util__wrapper_arg_1,
#line 990 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2,
#line 992 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_3)
#line 994 "parse_tree.prog_util.c"
{
#line 996 "parse_tree.prog_util.c"
  {
#line 998 "parse_tree.prog_util.c"
    MR_Word parse_tree__prog_util__conv0_HeadVar__1_1;

#line 1001 "parse_tree.prog_util.c"
    {
#line 1003 "parse_tree.prog_util.c"
      parse_tree__prog_util____Compare____maybe_modes_0_0(&parse_tree__prog_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_util__wrapper_arg_3));
    }
#line 1006 "parse_tree.prog_util.c"
    *parse_tree__prog_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_util__conv0_HeadVar__1_1));
#line 1008 "parse_tree.prog_util.c"
  }
#line 1010 "parse_tree.prog_util.c"
}

#line 1013 "parse_tree.prog_util.c"
static MR_bool MR_CALL 
parse_tree__prog_util____Unify____new_pred_id_0_0_10001(
#line 1016 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 1018 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2)
#line 1020 "parse_tree.prog_util.c"
{
#line 1022 "parse_tree.prog_util.c"
  {
#line 1024 "parse_tree.prog_util.c"
    MR_bool parse_tree__prog_util__succeeded;

#line 1027 "parse_tree.prog_util.c"
    {
#line 1029 "parse_tree.prog_util.c"
      parse_tree__prog_util__succeeded = parse_tree__prog_util____Unify____new_pred_id_0_0(((MR_Word) parse_tree__prog_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_util__wrapper_arg_2));
    }
#line 1032 "parse_tree.prog_util.c"
    return parse_tree__prog_util__succeeded;
#line 1034 "parse_tree.prog_util.c"
  }
#line 1036 "parse_tree.prog_util.c"
}

#line 1039 "parse_tree.prog_util.c"
static void MR_CALL 
parse_tree__prog_util____Compare____new_pred_id_0_0_10001(
#line 1042 "parse_tree.prog_util.c"
  MR_Box * parse_tree__prog_util__wrapper_arg_1,
#line 1044 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2,
#line 1046 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_3)
#line 1048 "parse_tree.prog_util.c"
{
#line 1050 "parse_tree.prog_util.c"
  {
#line 1052 "parse_tree.prog_util.c"
    MR_Word parse_tree__prog_util__conv0_HeadVar__1_1;

#line 1055 "parse_tree.prog_util.c"
    {
#line 1057 "parse_tree.prog_util.c"
      parse_tree__prog_util____Compare____new_pred_id_0_0(&parse_tree__prog_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_util__wrapper_arg_3));
    }
#line 1060 "parse_tree.prog_util.c"
    *parse_tree__prog_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_util__conv0_HeadVar__1_1));
#line 1062 "parse_tree.prog_util.c"
  }
#line 1064 "parse_tree.prog_util.c"
}

#line 574 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(
#line 574 "prog_util.m"
  MR_Word parse_tree__prog_util__V_23_23,
#line 574 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 574 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
#line 574 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4)
#line 574 "prog_util.m"
{
#line 577 "prog_util.m"
  {
#line 577 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 577 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 577 "prog_util.m"
      *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 577 "prog_util.m"
    else
#line 578 "prog_util.m"
      {
#line 578 "prog_util.m"
        MR_Word parse_tree__prog_util__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
#line 578 "prog_util.m"
        MR_Word parse_tree__prog_util__Ts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 578 "prog_util.m"
        MR_String parse_tree__prog_util__String_15;
#line 578 "prog_util.m"
        MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_19;

#line 581 "prog_util.m"
        if ((parse_tree__prog_util__Ts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 580 "prog_util.m"
          parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 581 "prog_util.m"
        else
#line 582 "prog_util.m"
          {
#line 582 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_18;
#line 582 "prog_util.m"
            MR_Word parse_tree__prog_util__T_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 0)));
#line 582 "prog_util.m"
            MR_Word parse_tree__prog_util__Ts_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 1)));
#line 582 "prog_util.m"
            MR_String parse_tree__prog_util__String_34;
#line 582 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_38;

#line 581 "prog_util.m"
            if ((parse_tree__prog_util__Ts_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 580 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 581 "prog_util.m"
            else
#line 582 "prog_util.m"
              {
#line 582 "prog_util.m"
                MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_37;

#line 583 "prog_util.m"
                {
#line 583 "prog_util.m"
                  parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_util__V_23_23, parse_tree__prog_util__Ts_30, parse_tree__prog_util__STATE_VARIABLE_Strings_0_3, &parse_tree__prog_util__STATE_VARIABLE_Strings_18_37);
                }
#line 584 "prog_util.m"
                {
#line 584 "prog_util.m"
                  parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "prog_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 0) = ((MR_Box) ((MR_String) ", "));
#line 584 "prog_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_37));
#line 584 "prog_util.m"
                }
#line 582 "prog_util.m"
              }
#line 586 "prog_util.m"
            {
#line 586 "prog_util.m"
              parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__538__1_3_p_0(parse_tree__prog_util__V_23_23, parse_tree__prog_util__T_29, &parse_tree__prog_util__String_34);
            }
#line 587 "prog_util.m"
            {
#line 587 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 0) = ((MR_Box) (parse_tree__prog_util__String_34));
#line 587 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_38));
#line 587 "prog_util.m"
            }
#line 584 "prog_util.m"
            {
#line 584 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 0) = ((MR_Box) ((MR_String) ", "));
#line 584 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_18));
#line 584 "prog_util.m"
            }
#line 582 "prog_util.m"
          }
#line 586 "prog_util.m"
        {
#line 586 "prog_util.m"
          parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__538__1_3_p_0(parse_tree__prog_util__V_23_23, parse_tree__prog_util__T_10, &parse_tree__prog_util__String_15);
        }
#line 587 "prog_util.m"
        {
#line 587 "prog_util.m"
          MR_Word base;
#line 587 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "prog_util.m"
          *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = base;
#line 587 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__String_15));
#line 587 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_19));
#line 587 "prog_util.m"
        }
#line 578 "prog_util.m"
      }
#line 577 "prog_util.m"
  }
#line 574 "prog_util.m"
}

#line 567 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(
#line 567 "prog_util.m"
  MR_Word parse_tree__prog_util__V_14_14,
#line 567 "prog_util.m"
  MR_Word parse_tree__prog_util__List_5,
#line 567 "prog_util.m"
  MR_String * parse_tree__prog_util__String_6)
#line 567 "prog_util.m"
{
#line 570 "prog_util.m"
  {
#line 570 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 570 "prog_util.m"
    MR_Word parse_tree__prog_util__Strings_7;
#line 570 "prog_util.m"
    MR_Word parse_tree__prog_util__V_11_11;

#line 571 "prog_util.m"
    {
#line 571 "prog_util.m"
      parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_util__V_14_14, parse_tree__prog_util__List_5, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_1[8]), &parse_tree__prog_util__Strings_7);
    }
#line 572 "prog_util.m"
    {
#line 572 "prog_util.m"
      parse_tree__prog_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 0) = ((MR_Box) ((MR_String) "["));
#line 572 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 1) = ((MR_Box) (parse_tree__prog_util__Strings_7));
#line 572 "prog_util.m"
    }
#line 572 "prog_util.m"
    {
#line 572 "prog_util.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_util__V_11_11, parse_tree__prog_util__String_6);
#line 572 "prog_util.m"
      return;
    }
#line 570 "prog_util.m"
  }
#line 567 "prog_util.m"
}

#line 754 "prog_util.m"
static MR_Word MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(
#line 754 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 754 "prog_util.m"
  MR_Word parse_tree__prog_util__Term_2,
#line 754 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_3)
#line 754 "prog_util.m"
{
#line 757 "prog_util.m"
  {
#line 757 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 757 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__4_4;

#line 757 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 763 "prog_util.m"
      {
#line 763 "prog_util.m"
        MR_Word parse_tree__prog_util__ModuleNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 763 "prog_util.m"
        MR_String parse_tree__prog_util__ModuleName_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 763 "prog_util.m"
        MR_Word parse_tree__prog_util__V_22_22;
#line 763 "prog_util.m"
        MR_Word parse_tree__prog_util__V_23_23;
#line 763 "prog_util.m"
        MR_Word parse_tree__prog_util__V_24_24;
#line 763 "prog_util.m"
        MR_Word parse_tree__prog_util__V_25_25;
#line 763 "prog_util.m"
        MR_Word parse_tree__prog_util__V_27_27;

#line 768 "prog_util.m"
        {
#line 768 "prog_util.m"
          parse_tree__prog_util__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 768 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_25_25, 0) = ((MR_Box) (parse_tree__prog_util__ModuleName_17));
#line 768 "prog_util.m"
        }
#line 766 "prog_util.m"
        {
#line 766 "prog_util.m"
          parse_tree__prog_util__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 766 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_24_24, 0) = ((MR_Box) (parse_tree__prog_util__V_25_25));
#line 766 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 766 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_24_24, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 766 "prog_util.m"
        }
#line 769 "prog_util.m"
        {
#line 769 "prog_util.m"
          parse_tree__prog_util__V_23_23 = parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(parse_tree__prog_util__ModuleNames_16, parse_tree__prog_util__V_24_24, parse_tree__prog_util__Context_3);
        }
#line 769 "prog_util.m"
        {
#line 769 "prog_util.m"
          parse_tree__prog_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_util__Term_2));
#line 769 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 769 "prog_util.m"
        }
#line 764 "prog_util.m"
        {
#line 764 "prog_util.m"
          parse_tree__prog_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_22_22, 0) = ((MR_Box) (parse_tree__prog_util__V_23_23));
#line 764 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_22_22, 1) = ((MR_Box) (parse_tree__prog_util__V_27_27));
#line 764 "prog_util.m"
        }
#line 763 "prog_util.m"
        {
#line 763 "prog_util.m"
          parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 763 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[0]));
#line 763 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 1) = ((MR_Box) (parse_tree__prog_util__V_22_22));
#line 763 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 763 "prog_util.m"
        }
#line 763 "prog_util.m"
      }
#line 757 "prog_util.m"
    else
#line 757 "prog_util.m"
      {
#line 757 "prog_util.m"
        MR_String parse_tree__prog_util__ModuleName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 757 "prog_util.m"
        MR_Word parse_tree__prog_util__V_10_10;
#line 757 "prog_util.m"
        MR_Word parse_tree__prog_util__V_11_11;
#line 757 "prog_util.m"
        MR_Word parse_tree__prog_util__V_12_12;
#line 757 "prog_util.m"
        MR_Word parse_tree__prog_util__V_14_14;

#line 760 "prog_util.m"
        {
#line 760 "prog_util.m"
          parse_tree__prog_util__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 760 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_12_12, 0) = ((MR_Box) (parse_tree__prog_util__ModuleName_5));
#line 760 "prog_util.m"
        }
#line 760 "prog_util.m"
        {
#line 760 "prog_util.m"
          parse_tree__prog_util__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 760 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_11_11, 0) = ((MR_Box) (parse_tree__prog_util__V_12_12));
#line 760 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 760 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_11_11, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 760 "prog_util.m"
        }
#line 760 "prog_util.m"
        {
#line 760 "prog_util.m"
          parse_tree__prog_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 760 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_14_14, 0) = ((MR_Box) (parse_tree__prog_util__Term_2));
#line 760 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 760 "prog_util.m"
        }
#line 758 "prog_util.m"
        {
#line 758 "prog_util.m"
          parse_tree__prog_util__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_10_10, 0) = ((MR_Box) (parse_tree__prog_util__V_11_11));
#line 758 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_10_10, 1) = ((MR_Box) (parse_tree__prog_util__V_14_14));
#line 758 "prog_util.m"
        }
#line 757 "prog_util.m"
        {
#line 757 "prog_util.m"
          parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 757 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[0]));
#line 757 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 1) = ((MR_Box) (parse_tree__prog_util__V_10_10));
#line 757 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 757 "prog_util.m"
        }
#line 757 "prog_util.m"
      }
#line 757 "prog_util.m"
    return parse_tree__prog_util__HeadVar__4_4;
#line 757 "prog_util.m"
  }
#line 754 "prog_util.m"
}

#line 574 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__list_to_string_2__ho4_4_p_0(
#line 574 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 574 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
#line 574 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4)
#line 574 "prog_util.m"
{
#line 577 "prog_util.m"
  {
#line 577 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 577 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 577 "prog_util.m"
      *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 577 "prog_util.m"
    else
#line 578 "prog_util.m"
      {
#line 578 "prog_util.m"
        MR_Integer parse_tree__prog_util__T_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
#line 578 "prog_util.m"
        MR_Word parse_tree__prog_util__Ts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 578 "prog_util.m"
        MR_String parse_tree__prog_util__String_15;
#line 578 "prog_util.m"
        MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_19;

#line 581 "prog_util.m"
        if ((parse_tree__prog_util__Ts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 580 "prog_util.m"
          parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 581 "prog_util.m"
        else
#line 582 "prog_util.m"
          {
#line 582 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_18;
#line 582 "prog_util.m"
            MR_Integer parse_tree__prog_util__T_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 0)));
#line 582 "prog_util.m"
            MR_Word parse_tree__prog_util__Ts_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 1)));
#line 582 "prog_util.m"
            MR_String parse_tree__prog_util__String_34;
#line 582 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_38;

#line 581 "prog_util.m"
            if ((parse_tree__prog_util__Ts_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 580 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 581 "prog_util.m"
            else
#line 582 "prog_util.m"
              {
#line 582 "prog_util.m"
                MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_37;

#line 583 "prog_util.m"
                {
#line 583 "prog_util.m"
                  parse_tree__prog_util__list_to_string_2__ho4_4_p_0(parse_tree__prog_util__Ts_30, parse_tree__prog_util__STATE_VARIABLE_Strings_0_3, &parse_tree__prog_util__STATE_VARIABLE_Strings_18_37);
                }
#line 584 "prog_util.m"
                {
#line 584 "prog_util.m"
                  parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "prog_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 0) = ((MR_Box) ((MR_String) ", "));
#line 584 "prog_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_37));
#line 584 "prog_util.m"
                }
#line 582 "prog_util.m"
              }
#line 586 "prog_util.m"
            {
#line 586 "prog_util.m"
              mercury__string__int_to_string_2_p_0(parse_tree__prog_util__T_29, &parse_tree__prog_util__String_34);
            }
#line 587 "prog_util.m"
            {
#line 587 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 0) = ((MR_Box) (parse_tree__prog_util__String_34));
#line 587 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_38));
#line 587 "prog_util.m"
            }
#line 584 "prog_util.m"
            {
#line 584 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 0) = ((MR_Box) ((MR_String) ", "));
#line 584 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_18));
#line 584 "prog_util.m"
            }
#line 582 "prog_util.m"
          }
#line 586 "prog_util.m"
        {
#line 586 "prog_util.m"
          mercury__string__int_to_string_2_p_0(parse_tree__prog_util__T_10, &parse_tree__prog_util__String_15);
        }
#line 587 "prog_util.m"
        {
#line 587 "prog_util.m"
          MR_Word base;
#line 587 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "prog_util.m"
          *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = base;
#line 587 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__String_15));
#line 587 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_19));
#line 587 "prog_util.m"
        }
#line 578 "prog_util.m"
      }
#line 577 "prog_util.m"
  }
#line 574 "prog_util.m"
}

#line 567 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__list_to_string__ho1_3_p_0(
#line 567 "prog_util.m"
  MR_Word parse_tree__prog_util__List_5,
#line 567 "prog_util.m"
  MR_String * parse_tree__prog_util__String_6)
#line 567 "prog_util.m"
{
#line 570 "prog_util.m"
  {
#line 570 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 570 "prog_util.m"
    MR_Word parse_tree__prog_util__Strings_7;
#line 570 "prog_util.m"
    MR_Word parse_tree__prog_util__V_11_11;

#line 571 "prog_util.m"
    {
#line 571 "prog_util.m"
      parse_tree__prog_util__list_to_string_2__ho4_4_p_0(parse_tree__prog_util__List_5, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_1[8]), &parse_tree__prog_util__Strings_7);
    }
#line 572 "prog_util.m"
    {
#line 572 "prog_util.m"
      parse_tree__prog_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 0) = ((MR_Box) ((MR_String) "["));
#line 572 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 1) = ((MR_Box) (parse_tree__prog_util__Strings_7));
#line 572 "prog_util.m"
    }
#line 572 "prog_util.m"
    {
#line 572 "prog_util.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_util__V_11_11, parse_tree__prog_util__String_6);
#line 572 "prog_util.m"
      return;
    }
#line 570 "prog_util.m"
  }
#line 567 "prog_util.m"
}

#line 538 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__538__1_3_p_0(
#line 538 "prog_util.m"
  MR_Word parse_tree__prog_util__VarSet_18,
#line 538 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_37,
#line 538 "prog_util.m"
  MR_String * parse_tree__prog_util__HeadVar__3_38)
#line 538 "prog_util.m"
{
#line 538 "prog_util.m"
  {
#line 538 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 538 "prog_util.m"
    MR_Word parse_tree__prog_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__2_37, (MR_Integer) 0)));
#line 538 "prog_util.m"
    MR_Word parse_tree__prog_util__Type_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__2_37, (MR_Integer) 1)));
#line 538 "prog_util.m"
    MR_String parse_tree__prog_util__VarName_25;
#line 538 "prog_util.m"
    MR_String parse_tree__prog_util__TypeString_26;
#line 538 "prog_util.m"
    MR_Word parse_tree__prog_util__V_40_40;
#line 538 "prog_util.m"
    MR_Word parse_tree__prog_util__V_41_41;
#line 538 "prog_util.m"
    MR_Word parse_tree__prog_util__V_43_43;

#line 540 "prog_util.m"
    {
#line 540 "prog_util.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_util__VarSet_18, parse_tree__prog_util__Var_23, &parse_tree__prog_util__VarName_25);
    }
#line 541 "prog_util.m"
    {
#line 541 "prog_util.m"
      parse_tree__prog_util__TypeString_26 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(parse_tree__prog_util__VarSet_18, (MR_Integer) 0, parse_tree__prog_util__Type_24);
    }
#line 542 "prog_util.m"
    {
#line 542 "prog_util.m"
      parse_tree__prog_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_43_43, 0) = ((MR_Box) (parse_tree__prog_util__TypeString_26));
#line 542 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "prog_util.m"
    }
#line 542 "prog_util.m"
    {
#line 542 "prog_util.m"
      parse_tree__prog_util__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_41_41, 0) = ((MR_Box) ((MR_String) " = "));
#line 542 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_41_41, 1) = ((MR_Box) (parse_tree__prog_util__V_43_43));
#line 542 "prog_util.m"
    }
#line 542 "prog_util.m"
    {
#line 542 "prog_util.m"
      parse_tree__prog_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_40_40, 0) = ((MR_Box) (parse_tree__prog_util__VarName_25));
#line 542 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_40_40, 1) = ((MR_Box) (parse_tree__prog_util__V_41_41));
#line 542 "prog_util.m"
    }
#line 542 "prog_util.m"
    {
#line 542 "prog_util.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_util__V_40_40, parse_tree__prog_util__HeadVar__3_38);
#line 542 "prog_util.m"
      return;
    }
#line 538 "prog_util.m"
  }
#line 538 "prog_util.m"
}

#line 73 "prog_util.m"
void MR_CALL 
parse_tree__prog_util____Compare____new_pred_id_0_0(
#line 73 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__1_1,
#line 73 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 73 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3)
#line 73 "prog_util.m"
{
#line 73 "prog_util.m"
  {
#line 73 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 73 "prog_util.m"
    MR_Integer parse_tree__prog_util__CastX_133 = (MR_Integer) parse_tree__prog_util__HeadVar__2_2;
#line 73 "prog_util.m"
    MR_Integer parse_tree__prog_util__CastY_134 = (MR_Integer) parse_tree__prog_util__HeadVar__3_3;

#line 73 "prog_util.m"
    parse_tree__prog_util__succeeded = (parse_tree__prog_util__CastX_133 == parse_tree__prog_util__CastY_134);
#line 73 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 1705 "parse_tree.prog_util.c"
      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 0;
#line 73 "prog_util.m"
    else
#line 73 "prog_util.m"
      if ((parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 73 "prog_util.m"
        if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 73 "prog_util.m"
          *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 0;
#line 73 "prog_util.m"
        else
#line 73 "prog_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1719 "parse_tree.prog_util.c"
            *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "prog_util.m"
          else
#line 73 "prog_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1725 "parse_tree.prog_util.c"
              *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "prog_util.m"
            else
#line 73 "prog_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1731 "parse_tree.prog_util.c"
                *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "prog_util.m"
              else
#line 73 "prog_util.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1737 "parse_tree.prog_util.c"
                  *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "prog_util.m"
                else
#line 73 "prog_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1743 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "prog_util.m"
                  else
#line 1747 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "prog_util.m"
      else
#line 73 "prog_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 73 "prog_util.m"
          {
#line 73 "prog_util.m"
            MR_Integer parse_tree__prog_util__V_144_144 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "prog_util.m"
            MR_Integer parse_tree__prog_util__V_145_145 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));

#line 73 "prog_util.m"
            if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1762 "parse_tree.prog_util.c"
              *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "prog_util.m"
            else
#line 73 "prog_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 73 "prog_util.m"
                {
#line 73 "prog_util.m"
                  MR_Integer parse_tree__prog_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)));
#line 73 "prog_util.m"
                  MR_Integer parse_tree__prog_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_8_8;

#line 73 "prog_util.m"
                  {
#line 73 "prog_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_util__V_8_8, parse_tree__prog_util__V_145_145, parse_tree__prog_util__V_6_6);
                  }
#line 1782 "parse_tree.prog_util.c"
                  parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_8_8 == (MR_Integer) 0);
#line 73 "prog_util.m"
                  parse_tree__prog_util__succeeded = !(parse_tree__prog_util__succeeded);
#line 73 "prog_util.m"
                  if (parse_tree__prog_util__succeeded)
#line 73 "prog_util.m"
                    *parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__V_8_8;
#line 73 "prog_util.m"
                  else
#line 73 "prog_util.m"
                    {
#line 73 "prog_util.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_util__HeadVar__1_1, parse_tree__prog_util__V_144_144, parse_tree__prog_util__V_7_7);
#line 73 "prog_util.m"
                      return;
                    }
#line 73 "prog_util.m"
                }
#line 73 "prog_util.m"
              else
#line 73 "prog_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1805 "parse_tree.prog_util.c"
                  *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "prog_util.m"
                else
#line 73 "prog_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1811 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "prog_util.m"
                  else
#line 73 "prog_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1817 "parse_tree.prog_util.c"
                      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "prog_util.m"
                    else
#line 73 "prog_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1823 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "prog_util.m"
                      else
#line 1827 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "prog_util.m"
          }
#line 73 "prog_util.m"
        else
#line 73 "prog_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 73 "prog_util.m"
            {
#line 73 "prog_util.m"
              MR_Word parse_tree__prog_util__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "prog_util.m"
              MR_Word parse_tree__prog_util__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));

#line 73 "prog_util.m"
              if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1844 "parse_tree.prog_util.c"
                *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "prog_util.m"
              else
#line 73 "prog_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1850 "parse_tree.prog_util.c"
                  *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "prog_util.m"
                else
#line 73 "prog_util.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 73 "prog_util.m"
                    {
#line 73 "prog_util.m"
                      MR_Word parse_tree__prog_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)));
#line 73 "prog_util.m"
                      MR_Word parse_tree__prog_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "prog_util.m"
                      MR_Word parse_tree__prog_util__V_36_36;

#line 73 "prog_util.m"
                      {
#line 73 "prog_util.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[5], &parse_tree__prog_util__V_36_36, ((MR_Box) (parse_tree__prog_util__V_151_151)), ((MR_Box) (parse_tree__prog_util__V_34_34)));
                      }
#line 1870 "parse_tree.prog_util.c"
                      parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_36_36 == (MR_Integer) 0);
#line 73 "prog_util.m"
                      parse_tree__prog_util__succeeded = !(parse_tree__prog_util__succeeded);
#line 73 "prog_util.m"
                      if (parse_tree__prog_util__succeeded)
#line 73 "prog_util.m"
                        *parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__V_36_36;
#line 73 "prog_util.m"
                      else
#line 73 "prog_util.m"
                        {
#line 73 "prog_util.m"
                          {
#line 73 "prog_util.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[6], parse_tree__prog_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_util__V_150_150)), ((MR_Box) (parse_tree__prog_util__V_35_35)));
#line 73 "prog_util.m"
                            return;
                          }
#line 73 "prog_util.m"
                        }
#line 73 "prog_util.m"
                    }
#line 73 "prog_util.m"
                  else
#line 73 "prog_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1897 "parse_tree.prog_util.c"
                      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "prog_util.m"
                    else
#line 73 "prog_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1903 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "prog_util.m"
                      else
#line 73 "prog_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1909 "parse_tree.prog_util.c"
                          *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "prog_util.m"
                        else
#line 1913 "parse_tree.prog_util.c"
                          *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "prog_util.m"
            }
#line 73 "prog_util.m"
          else
#line 73 "prog_util.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 73 "prog_util.m"
              {
#line 73 "prog_util.m"
                MR_Integer parse_tree__prog_util__V_146_146 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));

#line 73 "prog_util.m"
                if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1928 "parse_tree.prog_util.c"
                  *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "prog_util.m"
                else
#line 73 "prog_util.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1934 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "prog_util.m"
                  else
#line 73 "prog_util.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1940 "parse_tree.prog_util.c"
                      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "prog_util.m"
                    else
#line 73 "prog_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 73 "prog_util.m"
                        {
#line 73 "prog_util.m"
                          MR_Integer parse_tree__prog_util__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));

#line 73 "prog_util.m"
                          {
#line 73 "prog_util.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_util__HeadVar__1_1, parse_tree__prog_util__V_146_146, parse_tree__prog_util__V_132_132);
#line 73 "prog_util.m"
                            return;
                          }
#line 73 "prog_util.m"
                        }
#line 73 "prog_util.m"
                      else
#line 73 "prog_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1964 "parse_tree.prog_util.c"
                          *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "prog_util.m"
                        else
#line 73 "prog_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1970 "parse_tree.prog_util.c"
                            *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "prog_util.m"
                          else
#line 1974 "parse_tree.prog_util.c"
                            *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "prog_util.m"
              }
#line 73 "prog_util.m"
            else
#line 73 "prog_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 73 "prog_util.m"
                {
#line 73 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));

#line 73 "prog_util.m"
                  if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1989 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "prog_util.m"
                  else
#line 73 "prog_util.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1995 "parse_tree.prog_util.c"
                      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "prog_util.m"
                    else
#line 73 "prog_util.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2001 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "prog_util.m"
                      else
#line 73 "prog_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2007 "parse_tree.prog_util.c"
                          *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "prog_util.m"
                        else
#line 73 "prog_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 73 "prog_util.m"
                            {
#line 73 "prog_util.m"
                              MR_Word parse_tree__prog_util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));

#line 73 "prog_util.m"
                              {
#line 73 "prog_util.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[4], parse_tree__prog_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_util__V_147_147)), ((MR_Box) (parse_tree__prog_util__V_77_77)));
#line 73 "prog_util.m"
                                return;
                              }
#line 73 "prog_util.m"
                            }
#line 73 "prog_util.m"
                          else
#line 73 "prog_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2031 "parse_tree.prog_util.c"
                              *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "prog_util.m"
                            else
#line 2035 "parse_tree.prog_util.c"
                              *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "prog_util.m"
                }
#line 73 "prog_util.m"
              else
#line 73 "prog_util.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 73 "prog_util.m"
                  {
#line 73 "prog_util.m"
                    MR_Word parse_tree__prog_util__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 2)));
#line 73 "prog_util.m"
                    MR_Integer parse_tree__prog_util__V_149_149 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));

#line 73 "prog_util.m"
                    if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2052 "parse_tree.prog_util.c"
                      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "prog_util.m"
                    else
#line 73 "prog_util.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2058 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "prog_util.m"
                      else
#line 73 "prog_util.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2064 "parse_tree.prog_util.c"
                          *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "prog_util.m"
                        else
#line 73 "prog_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2070 "parse_tree.prog_util.c"
                            *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "prog_util.m"
                          else
#line 73 "prog_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2076 "parse_tree.prog_util.c"
                              *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "prog_util.m"
                            else
#line 73 "prog_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 73 "prog_util.m"
                                {
#line 73 "prog_util.m"
                                  MR_Integer parse_tree__prog_util__V_111_111 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "prog_util.m"
                                  MR_Word parse_tree__prog_util__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 2)));
#line 73 "prog_util.m"
                                  MR_Word parse_tree__prog_util__V_113_113;

#line 73 "prog_util.m"
                                  {
#line 73 "prog_util.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_util__V_113_113, parse_tree__prog_util__V_149_149, parse_tree__prog_util__V_111_111);
                                  }
#line 2096 "parse_tree.prog_util.c"
                                  parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_113_113 == (MR_Integer) 0);
#line 73 "prog_util.m"
                                  parse_tree__prog_util__succeeded = !(parse_tree__prog_util__succeeded);
#line 73 "prog_util.m"
                                  if (parse_tree__prog_util__succeeded)
#line 73 "prog_util.m"
                                    *parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__V_113_113;
#line 73 "prog_util.m"
                                  else
#line 73 "prog_util.m"
                                    {
#line 73 "prog_util.m"
                                      {
#line 73 "prog_util.m"
                                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[4], parse_tree__prog_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_util__V_148_148)), ((MR_Box) (parse_tree__prog_util__V_112_112)));
#line 73 "prog_util.m"
                                        return;
                                      }
#line 73 "prog_util.m"
                                    }
#line 73 "prog_util.m"
                                }
#line 73 "prog_util.m"
                              else
#line 2121 "parse_tree.prog_util.c"
                                *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "prog_util.m"
                  }
#line 73 "prog_util.m"
                else
#line 73 "prog_util.m"
                  {
#line 73 "prog_util.m"
                    MR_Word parse_tree__prog_util__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));

#line 73 "prog_util.m"
                    if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2134 "parse_tree.prog_util.c"
                      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "prog_util.m"
                    else
#line 73 "prog_util.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2140 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "prog_util.m"
                      else
#line 73 "prog_util.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2146 "parse_tree.prog_util.c"
                          *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "prog_util.m"
                        else
#line 73 "prog_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2152 "parse_tree.prog_util.c"
                            *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "prog_util.m"
                          else
#line 73 "prog_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2158 "parse_tree.prog_util.c"
                              *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "prog_util.m"
                            else
#line 73 "prog_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2164 "parse_tree.prog_util.c"
                                *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "prog_util.m"
                              else
#line 73 "prog_util.m"
                                {
#line 73 "prog_util.m"
                                  MR_Word parse_tree__prog_util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));

#line 73 "prog_util.m"
                                  {
#line 73 "prog_util.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[4], parse_tree__prog_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_util__V_152_152)), ((MR_Box) (parse_tree__prog_util__V_59_59)));
#line 73 "prog_util.m"
                                    return;
                                  }
#line 73 "prog_util.m"
                                }
#line 73 "prog_util.m"
                  }
#line 73 "prog_util.m"
  }
#line 73 "prog_util.m"
}

#line 73 "prog_util.m"
MR_bool MR_CALL 
parse_tree__prog_util____Unify____new_pred_id_0_0(
#line 73 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 73 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2)
#line 73 "prog_util.m"
{
#line 73 "prog_util.m"
  {
#line 73 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 73 "prog_util.m"
    MR_Integer parse_tree__prog_util__CastX_23 = (MR_Integer) parse_tree__prog_util__HeadVar__1_1;
#line 73 "prog_util.m"
    MR_Integer parse_tree__prog_util__CastY_24 = (MR_Integer) parse_tree__prog_util__HeadVar__2_2;

#line 73 "prog_util.m"
    parse_tree__prog_util__succeeded = (parse_tree__prog_util__CastX_23 == parse_tree__prog_util__CastY_24);
#line 73 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 73 "prog_util.m"
      parse_tree__prog_util__succeeded = MR_TRUE;
#line 73 "prog_util.m"
    else
#line 73 "prog_util.m"
      if ((parse_tree__prog_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 73 "prog_util.m"
        {
#line 73 "prog_util.m"
          MR_Integer parse_tree__prog_util__CastX_15 = (MR_Integer) parse_tree__prog_util__HeadVar__1_1;
#line 73 "prog_util.m"
          MR_Integer parse_tree__prog_util__CastY_16 = (MR_Integer) parse_tree__prog_util__HeadVar__2_2;

#line 73 "prog_util.m"
          parse_tree__prog_util__succeeded = (parse_tree__prog_util__CastY_16 == parse_tree__prog_util__CastX_15);
#line 73 "prog_util.m"
        }
#line 73 "prog_util.m"
      else
#line 73 "prog_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 73 "prog_util.m"
          {
#line 73 "prog_util.m"
            MR_Integer parse_tree__prog_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 73 "prog_util.m"
            MR_Integer parse_tree__prog_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "prog_util.m"
            MR_Integer parse_tree__prog_util__V_5_5;
#line 73 "prog_util.m"
            MR_Integer parse_tree__prog_util__V_6_6;

#line 73 "prog_util.m"
            parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 73 "prog_util.m"
            if (parse_tree__prog_util__succeeded)
#line 73 "prog_util.m"
              {
#line 73 "prog_util.m"
                parse_tree__prog_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
#line 73 "prog_util.m"
                parse_tree__prog_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2253 "parse_tree.prog_util.c"
                parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_3_3 == parse_tree__prog_util__V_5_5);
#line 73 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 2257 "parse_tree.prog_util.c"
                  parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_4_4 == parse_tree__prog_util__V_6_6);
#line 73 "prog_util.m"
              }
#line 73 "prog_util.m"
          }
#line 73 "prog_util.m"
        else
#line 73 "prog_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 73 "prog_util.m"
            {
#line 73 "prog_util.m"
              MR_Word parse_tree__prog_util__TypeInfo_27_27;
#line 73 "prog_util.m"
              MR_Word parse_tree__prog_util__TypeInfo_28_28;
#line 73 "prog_util.m"
              MR_Word parse_tree__prog_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 73 "prog_util.m"
              MR_Word parse_tree__prog_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "prog_util.m"
              MR_Word parse_tree__prog_util__V_9_9;
#line 73 "prog_util.m"
              MR_Word parse_tree__prog_util__V_10_10;

#line 73 "prog_util.m"
              parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 73 "prog_util.m"
              if (parse_tree__prog_util__succeeded)
#line 73 "prog_util.m"
                {
#line 73 "prog_util.m"
                  parse_tree__prog_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
#line 73 "prog_util.m"
                  parse_tree__prog_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2292 "parse_tree.prog_util.c"
                  parse_tree__prog_util__TypeInfo_27_27 = (MR_Word) &parse_tree__prog_util_scalar_common_1[5];
#line 2294 "parse_tree.prog_util.c"
                  {
#line 2296 "parse_tree.prog_util.c"
                    parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_27_27, ((MR_Box) (parse_tree__prog_util__V_7_7)), ((MR_Box) (parse_tree__prog_util__V_9_9)));
                  }
#line 73 "prog_util.m"
                  if (parse_tree__prog_util__succeeded)
#line 73 "prog_util.m"
                    {
#line 2303 "parse_tree.prog_util.c"
                      parse_tree__prog_util__TypeInfo_28_28 = (MR_Word) &parse_tree__prog_util_scalar_common_1[6];
#line 2305 "parse_tree.prog_util.c"
                      {
#line 2307 "parse_tree.prog_util.c"
                        return parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_28_28, ((MR_Box) (parse_tree__prog_util__V_8_8)), ((MR_Box) (parse_tree__prog_util__V_10_10)));
                      }
#line 73 "prog_util.m"
                    }
#line 73 "prog_util.m"
                }
#line 73 "prog_util.m"
            }
#line 73 "prog_util.m"
          else
#line 73 "prog_util.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 73 "prog_util.m"
              {
#line 73 "prog_util.m"
                MR_Integer parse_tree__prog_util__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "prog_util.m"
                MR_Integer parse_tree__prog_util__V_22_22;

#line 73 "prog_util.m"
                parse_tree__prog_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 73 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 73 "prog_util.m"
                  {
#line 73 "prog_util.m"
                    parse_tree__prog_util__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2335 "parse_tree.prog_util.c"
                    parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_21_21 == parse_tree__prog_util__V_22_22);
#line 73 "prog_util.m"
                  }
#line 73 "prog_util.m"
              }
#line 73 "prog_util.m"
            else
#line 73 "prog_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 73 "prog_util.m"
                {
#line 73 "prog_util.m"
                  MR_Word parse_tree__prog_util__TypeInfo_25_25;
#line 73 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_14_14;

#line 73 "prog_util.m"
                  parse_tree__prog_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 73 "prog_util.m"
                  if (parse_tree__prog_util__succeeded)
#line 73 "prog_util.m"
                    {
#line 73 "prog_util.m"
                      parse_tree__prog_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2362 "parse_tree.prog_util.c"
                      parse_tree__prog_util__TypeInfo_25_25 = (MR_Word) &parse_tree__prog_util_scalar_common_1[4];
#line 2364 "parse_tree.prog_util.c"
                      {
#line 2366 "parse_tree.prog_util.c"
                        return parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_25_25, ((MR_Box) (parse_tree__prog_util__V_13_13)), ((MR_Box) (parse_tree__prog_util__V_14_14)));
                      }
#line 73 "prog_util.m"
                    }
#line 73 "prog_util.m"
                }
#line 73 "prog_util.m"
              else
#line 73 "prog_util.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 73 "prog_util.m"
                  {
#line 73 "prog_util.m"
                    MR_Word parse_tree__prog_util__TypeInfo_26_26;
#line 73 "prog_util.m"
                    MR_Integer parse_tree__prog_util__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "prog_util.m"
                    MR_Word parse_tree__prog_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 2)));
#line 73 "prog_util.m"
                    MR_Integer parse_tree__prog_util__V_19_19;
#line 73 "prog_util.m"
                    MR_Word parse_tree__prog_util__V_20_20;

#line 73 "prog_util.m"
                    parse_tree__prog_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 73 "prog_util.m"
                    if (parse_tree__prog_util__succeeded)
#line 73 "prog_util.m"
                      {
#line 73 "prog_util.m"
                        parse_tree__prog_util__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "prog_util.m"
                        parse_tree__prog_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 2)));
#line 2400 "parse_tree.prog_util.c"
                        parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_17_17 == parse_tree__prog_util__V_19_19);
#line 73 "prog_util.m"
                        if (parse_tree__prog_util__succeeded)
#line 73 "prog_util.m"
                          {
#line 2406 "parse_tree.prog_util.c"
                            parse_tree__prog_util__TypeInfo_26_26 = (MR_Word) &parse_tree__prog_util_scalar_common_1[4];
#line 2408 "parse_tree.prog_util.c"
                            {
#line 2410 "parse_tree.prog_util.c"
                              return parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_26_26, ((MR_Box) (parse_tree__prog_util__V_18_18)), ((MR_Box) (parse_tree__prog_util__V_20_20)));
                            }
#line 73 "prog_util.m"
                          }
#line 73 "prog_util.m"
                      }
#line 73 "prog_util.m"
                  }
#line 73 "prog_util.m"
                else
#line 73 "prog_util.m"
                  {
#line 73 "prog_util.m"
                    MR_Word parse_tree__prog_util__TypeInfo_29_29;
#line 73 "prog_util.m"
                    MR_Word parse_tree__prog_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "prog_util.m"
                    MR_Word parse_tree__prog_util__V_12_12;

#line 73 "prog_util.m"
                    parse_tree__prog_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 73 "prog_util.m"
                    if (parse_tree__prog_util__succeeded)
#line 73 "prog_util.m"
                      {
#line 73 "prog_util.m"
                        parse_tree__prog_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2438 "parse_tree.prog_util.c"
                        parse_tree__prog_util__TypeInfo_29_29 = (MR_Word) &parse_tree__prog_util_scalar_common_1[4];
#line 2440 "parse_tree.prog_util.c"
                        {
#line 2442 "parse_tree.prog_util.c"
                          return parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_29_29, ((MR_Box) (parse_tree__prog_util__V_11_11)), ((MR_Box) (parse_tree__prog_util__V_12_12)));
                        }
#line 73 "prog_util.m"
                      }
#line 73 "prog_util.m"
                  }
#line 73 "prog_util.m"
    return parse_tree__prog_util__succeeded;
#line 73 "prog_util.m"
  }
#line 73 "prog_util.m"
}

#line 93 "prog_util.m"
void MR_CALL 
parse_tree__prog_util____Compare____maybe_modes_0_0(
#line 93 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__1_1,
#line 93 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 93 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3)
#line 93 "prog_util.m"
{
#line 93 "prog_util.m"
  {
#line 93 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 93 "prog_util.m"
    MR_Word parse_tree__prog_util__Cast_HeadVar1_4 = parse_tree__prog_util__HeadVar__2_2;
#line 93 "prog_util.m"
    MR_Word parse_tree__prog_util__Cast_HeadVar2_5 = parse_tree__prog_util__HeadVar__3_3;

#line 93 "prog_util.m"
    {
#line 93 "prog_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[3], parse_tree__prog_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_util__Cast_HeadVar2_5)));
#line 93 "prog_util.m"
      return;
    }
#line 93 "prog_util.m"
  }
#line 93 "prog_util.m"
}

#line 93 "prog_util.m"
MR_bool MR_CALL 
parse_tree__prog_util____Unify____maybe_modes_0_0(
#line 93 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 93 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2)
#line 93 "prog_util.m"
{
#line 93 "prog_util.m"
  {
#line 93 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 93 "prog_util.m"
    MR_Word parse_tree__prog_util__Cast_HeadVar1_3 = parse_tree__prog_util__HeadVar__1_1;
#line 93 "prog_util.m"
    MR_Word parse_tree__prog_util__Cast_HeadVar2_4 = parse_tree__prog_util__HeadVar__2_2;

#line 93 "prog_util.m"
    {
#line 93 "prog_util.m"
      return parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[3], ((MR_Box) (parse_tree__prog_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_util__Cast_HeadVar2_4)));
    }
#line 93 "prog_util.m"
    return parse_tree__prog_util__succeeded;
#line 93 "prog_util.m"
  }
#line 93 "prog_util.m"
}

#line 780 "prog_util.m"
static MR_Word MR_CALL 
parse_tree__prog_util__goal_list_to_conj_2_3_f_0(
#line 780 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_1,
#line 780 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 780 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3)
#line 780 "prog_util.m"
{
#line 782 "prog_util.m"
  {
#line 782 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 782 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__4_4;

#line 782 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 782 "prog_util.m"
      parse_tree__prog_util__HeadVar__4_4 = parse_tree__prog_util__HeadVar__2_2;
#line 782 "prog_util.m"
    else
#line 783 "prog_util.m"
      {
#line 783 "prog_util.m"
        MR_Word parse_tree__prog_util__Goal1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)));
#line 783 "prog_util.m"
        MR_Word parse_tree__prog_util__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
#line 783 "prog_util.m"
        MR_Word parse_tree__prog_util__V_11_11;
#line 783 "prog_util.m"
        MR_Word parse_tree__prog_util__V_12_12;

#line 784 "prog_util.m"
        {
#line 784 "prog_util.m"
          parse_tree__prog_util__V_12_12 = parse_tree__prog_util__goal_list_to_conj_2_3_f_0(parse_tree__prog_util__Context_1, parse_tree__prog_util__Goal1_9, parse_tree__prog_util__Goals_10);
        }
#line 784 "prog_util.m"
        {
#line 784 "prog_util.m"
          parse_tree__prog_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 784 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 0) = ((MR_Box) (parse_tree__prog_util__HeadVar__2_2));
#line 784 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 1) = ((MR_Box) (parse_tree__prog_util__V_12_12));
#line 784 "prog_util.m"
        }
#line 783 "prog_util.m"
        {
#line 783 "prog_util.m"
          parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 783 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_util__V_11_11));
#line 783 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 1) = ((MR_Box) (parse_tree__prog_util__Context_1));
#line 783 "prog_util.m"
        }
#line 783 "prog_util.m"
      }
#line 782 "prog_util.m"
    return parse_tree__prog_util__HeadVar__4_4;
#line 782 "prog_util.m"
  }
#line 780 "prog_util.m"
}

#line 673 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__make_n_fresh_vars_2_6_p_0(
#line 673 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_23,
#line 673 "prog_util.m"
  MR_String parse_tree__prog_util__BaseName_7,
#line 673 "prog_util.m"
  MR_Integer parse_tree__prog_util__N_8,
#line 673 "prog_util.m"
  MR_Integer parse_tree__prog_util__Max_9,
#line 673 "prog_util.m"
  MR_Word * parse_tree__prog_util__Vars_10,
#line 673 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_0_17,
#line 673 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_VarSet_18)
#line 673 "prog_util.m"
{
#line 679 "prog_util.m"
  {
#line 679 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded = (parse_tree__prog_util__N_8 == parse_tree__prog_util__Max_9);

#line 679 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 678 "prog_util.m"
      {
#line 678 "prog_util.m"
        *parse_tree__prog_util__Vars_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 678 "prog_util.m"
        *parse_tree__prog_util__STATE_VARIABLE_VarSet_18 = parse_tree__prog_util__STATE_VARIABLE_VarSet_0_17;
#line 678 "prog_util.m"
      }
#line 679 "prog_util.m"
    else
#line 680 "prog_util.m"
      {
#line 680 "prog_util.m"
        MR_Integer parse_tree__prog_util__N1_12 = (parse_tree__prog_util__N_8 + (MR_Integer) 1);
#line 680 "prog_util.m"
        MR_Word parse_tree__prog_util__Var_13;
#line 680 "prog_util.m"
        MR_String parse_tree__prog_util__Num_14;
#line 680 "prog_util.m"
        MR_String parse_tree__prog_util__VarName_15;
#line 680 "prog_util.m"
        MR_Word parse_tree__prog_util__Vars1_16;
#line 680 "prog_util.m"
        MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_20_20;
#line 680 "prog_util.m"
        MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_21_21;

#line 681 "prog_util.m"
        {
#line 681 "prog_util.m"
          mercury__varset__new_var_3_p_0(parse_tree__prog_util__TypeInfo_for_T_23, &parse_tree__prog_util__Var_13, parse_tree__prog_util__STATE_VARIABLE_VarSet_0_17, &parse_tree__prog_util__STATE_VARIABLE_VarSet_20_20);
        }
#line 682 "prog_util.m"
        {
#line 682 "prog_util.m"
          mercury__string__int_to_string_2_p_0(parse_tree__prog_util__N1_12, &parse_tree__prog_util__Num_14);
        }
#line 683 "prog_util.m"
        {
#line 683 "prog_util.m"
          mercury__string__append_3_p_2(parse_tree__prog_util__BaseName_7, parse_tree__prog_util__Num_14, &parse_tree__prog_util__VarName_15);
        }
#line 684 "prog_util.m"
        {
#line 684 "prog_util.m"
          mercury__varset__name_var_4_p_0(parse_tree__prog_util__TypeInfo_for_T_23, parse_tree__prog_util__Var_13, parse_tree__prog_util__VarName_15, parse_tree__prog_util__STATE_VARIABLE_VarSet_20_20, &parse_tree__prog_util__STATE_VARIABLE_VarSet_21_21);
        }
#line 686 "prog_util.m"
        {
#line 686 "prog_util.m"
          parse_tree__prog_util__make_n_fresh_vars_2_6_p_0(parse_tree__prog_util__TypeInfo_for_T_23, parse_tree__prog_util__BaseName_7, parse_tree__prog_util__N1_12, parse_tree__prog_util__Max_9, &parse_tree__prog_util__Vars1_16, parse_tree__prog_util__STATE_VARIABLE_VarSet_21_21, parse_tree__prog_util__STATE_VARIABLE_VarSet_18);
        }
#line 685 "prog_util.m"
        {
#line 685 "prog_util.m"
          MR_Word base;
#line 685 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "prog_util.m"
          *parse_tree__prog_util__Vars_10 = base;
#line 685 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Var_13));
#line 685 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars1_16));
#line 685 "prog_util.m"
        }
#line 680 "prog_util.m"
      }
#line 679 "prog_util.m"
  }
#line 673 "prog_util.m"
}

#line 508 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_catch_expr_4_p_0(
#line 508 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 508 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 508 "prog_util.m"
  MR_Word parse_tree__prog_util__Catch0_7,
#line 508 "prog_util.m"
  MR_Word * parse_tree__prog_util__Catch_8)
#line 508 "prog_util.m"
{
#line 511 "prog_util.m"
  {
#line 511 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 511 "prog_util.m"
    MR_Word parse_tree__prog_util__Term0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Catch0_7, (MR_Integer) 0)));
#line 511 "prog_util.m"
    MR_Word parse_tree__prog_util__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Catch0_7, (MR_Integer) 1)));
#line 511 "prog_util.m"
    MR_Word parse_tree__prog_util__Term_11;
#line 511 "prog_util.m"
    MR_Word parse_tree__prog_util__Goal_12;
#line 511 "prog_util.m"
    MR_Word parse_tree__prog_util__V_13_13;
#line 511 "prog_util.m"
    MR_Word parse_tree__prog_util__V_14_14;
#line 511 "prog_util.m"
    MR_Word parse_tree__prog_util__Goal0_18;
#line 511 "prog_util.m"
    MR_Word parse_tree__prog_util__Context_19;
#line 511 "prog_util.m"
    MR_Word parse_tree__prog_util__Goal_20;

#line 513 "prog_util.m"
    {
#line 513 "prog_util.m"
      parse_tree__prog_util__V_14_14 = mercury__term__context_init_0_f_0();
    }
#line 513 "prog_util.m"
    {
#line 513 "prog_util.m"
      parse_tree__prog_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_13_13, 0) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 513 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_util__V_14_14));
#line 513 "prog_util.m"
    }
#line 513 "prog_util.m"
    {
#line 513 "prog_util.m"
      mercury__term__substitute_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_util__Term0_9, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__V_13_13, &parse_tree__prog_util__Term_11);
    }
#line 266 "prog_util.m"
    parse_tree__prog_util__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal0_10, (MR_Integer) 0)));
#line 266 "prog_util.m"
    parse_tree__prog_util__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal0_10, (MR_Integer) 1)));
#line 267 "prog_util.m"
    {
#line 267 "prog_util.m"
      parse_tree__prog_util__rename_in_goal_expr_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_18, &parse_tree__prog_util__Goal_20);
    }
#line 266 "prog_util.m"
    {
#line 266 "prog_util.m"
      parse_tree__prog_util__Goal_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 266 "prog_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal_12, 0) = ((MR_Box) (parse_tree__prog_util__Goal_20));
#line 266 "prog_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal_12, 1) = ((MR_Box) (parse_tree__prog_util__Context_19));
#line 266 "prog_util.m"
    }
#line 515 "prog_util.m"
    {
#line 515 "prog_util.m"
      MR_Word base;
#line 515 "prog_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 515 "prog_util.m"
      *parse_tree__prog_util__Catch_8 = base;
#line 515 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__Term_11));
#line 515 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__Goal_12));
#line 515 "prog_util.m"
    }
#line 511 "prog_util.m"
  }
#line 508 "prog_util.m"
}

#line 495 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_maybe_var_4_p_0(
#line 495 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 495 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 495 "prog_util.m"
  MR_Word parse_tree__prog_util__MaybeVar0_7,
#line 495 "prog_util.m"
  MR_Word * parse_tree__prog_util__MaybeVar_8)
#line 495 "prog_util.m"
{
#line 500 "prog_util.m"
  {
#line 500 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 500 "prog_util.m"
    if ((parse_tree__prog_util__MaybeVar0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 505 "prog_util.m"
      *parse_tree__prog_util__MaybeVar_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 500 "prog_util.m"
    else
#line 500 "prog_util.m"
      {
#line 500 "prog_util.m"
        MR_Word parse_tree__prog_util__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeVar0_7, (MR_Integer) 0)));
#line 500 "prog_util.m"
        MR_Word parse_tree__prog_util__Var_10;

#line 489 "prog_util.m"
        {
#line 489 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__Var0_9)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
#line 491 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 490 "prog_util.m"
          parse_tree__prog_util__Var_10 = parse_tree__prog_util__NewVar_6;
#line 491 "prog_util.m"
        else
#line 492 "prog_util.m"
          parse_tree__prog_util__Var_10 = parse_tree__prog_util__Var0_9;
#line 502 "prog_util.m"
        {
#line 502 "prog_util.m"
          MR_Word base;
#line 502 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 502 "prog_util.m"
          *parse_tree__prog_util__MaybeVar_8 = base;
#line 502 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Var_10));
#line 502 "prog_util.m"
        }
#line 500 "prog_util.m"
      }
#line 500 "prog_util.m"
  }
#line 495 "prog_util.m"
}

#line 485 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_var_4_p_0(
#line 485 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 485 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 485 "prog_util.m"
  MR_Word parse_tree__prog_util__Var0_7,
#line 485 "prog_util.m"
  MR_Word * parse_tree__prog_util__Var_8)
#line 485 "prog_util.m"
{
#line 491 "prog_util.m"
  {
#line 491 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 489 "prog_util.m"
    {
#line 489 "prog_util.m"
      parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__Var0_7)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
    }
#line 491 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 490 "prog_util.m"
      *parse_tree__prog_util__Var_8 = parse_tree__prog_util__NewVar_6;
#line 491 "prog_util.m"
    else
#line 492 "prog_util.m"
      *parse_tree__prog_util__Var_8 = parse_tree__prog_util__Var0_7;
#line 491 "prog_util.m"
  }
#line 485 "prog_util.m"
}

#line 477 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_vars_4_p_0(
#line 477 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_1,
#line 477 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_2,
#line 477 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3,
#line 477 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__4_4)
#line 477 "prog_util.m"
{
#line 480 "prog_util.m"
  {
#line 480 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 480 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 480 "prog_util.m"
      *parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 480 "prog_util.m"
    else
#line 481 "prog_util.m"
      {
#line 481 "prog_util.m"
        MR_Word parse_tree__prog_util__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)));
#line 481 "prog_util.m"
        MR_Word parse_tree__prog_util__Vars0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
#line 481 "prog_util.m"
        MR_Word parse_tree__prog_util__Var_11;
#line 481 "prog_util.m"
        MR_Word parse_tree__prog_util__Vars_12;

#line 489 "prog_util.m"
        {
#line 489 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__Var0_9)), ((MR_Box) (parse_tree__prog_util__OldVar_1)));
        }
#line 491 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 490 "prog_util.m"
          parse_tree__prog_util__Var_11 = parse_tree__prog_util__NewVar_2;
#line 491 "prog_util.m"
        else
#line 492 "prog_util.m"
          parse_tree__prog_util__Var_11 = parse_tree__prog_util__Var0_9;
#line 483 "prog_util.m"
        {
#line 483 "prog_util.m"
          parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_1, parse_tree__prog_util__NewVar_2, parse_tree__prog_util__Vars0_10, &parse_tree__prog_util__Vars_12);
        }
#line 481 "prog_util.m"
        {
#line 481 "prog_util.m"
          MR_Word base;
#line 481 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "prog_util.m"
          *parse_tree__prog_util__HeadVar__4_4 = base;
#line 481 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Var_11));
#line 481 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars_12));
#line 481 "prog_util.m"
        }
#line 481 "prog_util.m"
      }
#line 480 "prog_util.m"
  }
#line 477 "prog_util.m"
}

#line 469 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(
#line 469 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 469 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 469 "prog_util.m"
  MR_Word parse_tree__prog_util__TMV0_7,
#line 469 "prog_util.m"
  MR_Word * parse_tree__prog_util__TMV_8)
#line 469 "prog_util.m"
{
#line 472 "prog_util.m"
  {
#line 472 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 472 "prog_util.m"
    MR_String parse_tree__prog_util__MutableName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__TMV0_7, (MR_Integer) 0)));
#line 472 "prog_util.m"
    MR_Word parse_tree__prog_util__StateVar0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__TMV0_7, (MR_Integer) 1)));
#line 472 "prog_util.m"
    MR_Word parse_tree__prog_util__StateVar_11;

#line 489 "prog_util.m"
    {
#line 489 "prog_util.m"
      parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__StateVar0_10)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
    }
#line 491 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 490 "prog_util.m"
      parse_tree__prog_util__StateVar_11 = parse_tree__prog_util__NewVar_6;
#line 491 "prog_util.m"
    else
#line 492 "prog_util.m"
      parse_tree__prog_util__StateVar_11 = parse_tree__prog_util__StateVar0_10;
#line 475 "prog_util.m"
    {
#line 475 "prog_util.m"
      MR_Word base;
#line 475 "prog_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 475 "prog_util.m"
      *parse_tree__prog_util__TMV_8 = base;
#line 475 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__MutableName_9));
#line 475 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__StateVar_11));
#line 475 "prog_util.m"
    }
#line 472 "prog_util.m"
  }
#line 469 "prog_util.m"
}

#line 454 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(
#line 454 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 454 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 454 "prog_util.m"
  MR_Word parse_tree__prog_util__Comp0_7,
#line 454 "prog_util.m"
  MR_Word * parse_tree__prog_util__Comp_8)
#line 454 "prog_util.m"
{
#line 459 "prog_util.m"
  {
#line 459 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 459 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__Comp0_7)) == (MR_mktag((MR_Integer) 0))))
#line 459 "prog_util.m"
      {
#line 459 "prog_util.m"
        MR_Word parse_tree__prog_util__SVar0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Comp0_7, (MR_Integer) 0)));
#line 459 "prog_util.m"
        MR_Word parse_tree__prog_util__SVar_10;

#line 489 "prog_util.m"
        {
#line 489 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__SVar0_9)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
#line 491 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 490 "prog_util.m"
          parse_tree__prog_util__SVar_10 = parse_tree__prog_util__NewVar_6;
#line 491 "prog_util.m"
        else
#line 492 "prog_util.m"
          parse_tree__prog_util__SVar_10 = parse_tree__prog_util__SVar0_9;
#line 461 "prog_util.m"
        {
#line 461 "prog_util.m"
          MR_Word base;
#line 461 "prog_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 461 "prog_util.m"
          *parse_tree__prog_util__Comp_8 = base;
#line 461 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__SVar_10));
#line 461 "prog_util.m"
        }
#line 459 "prog_util.m"
      }
#line 459 "prog_util.m"
    else
#line 463 "prog_util.m"
      {
#line 463 "prog_util.m"
        MR_Word parse_tree__prog_util__IVar0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Comp0_7, (MR_Integer) 0)));
#line 463 "prog_util.m"
        MR_Word parse_tree__prog_util__OVar0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Comp0_7, (MR_Integer) 1)));
#line 463 "prog_util.m"
        MR_Word parse_tree__prog_util__IVar_13;
#line 463 "prog_util.m"
        MR_Word parse_tree__prog_util__OVar_14;

#line 489 "prog_util.m"
        {
#line 489 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__IVar0_11)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
#line 491 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 490 "prog_util.m"
          parse_tree__prog_util__IVar_13 = parse_tree__prog_util__NewVar_6;
#line 491 "prog_util.m"
        else
#line 492 "prog_util.m"
          parse_tree__prog_util__IVar_13 = parse_tree__prog_util__IVar0_11;
#line 489 "prog_util.m"
        {
#line 489 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__OVar0_12)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
#line 491 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 490 "prog_util.m"
          parse_tree__prog_util__OVar_14 = parse_tree__prog_util__NewVar_6;
#line 491 "prog_util.m"
        else
#line 492 "prog_util.m"
          parse_tree__prog_util__OVar_14 = parse_tree__prog_util__OVar0_12;
#line 466 "prog_util.m"
        {
#line 466 "prog_util.m"
          MR_Word base;
#line 466 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "prog_util.m"
          *parse_tree__prog_util__Comp_8 = base;
#line 466 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__IVar_13));
#line 466 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__OVar_14));
#line 466 "prog_util.m"
        }
#line 463 "prog_util.m"
      }
#line 459 "prog_util.m"
  }
#line 454 "prog_util.m"
}

#line 405 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_expr_4_p_0_4(
#line 405 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 405 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 405 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2)
#line 405 "prog_util.m"
{
#line 405 "prog_util.m"
  {
#line 405 "prog_util.m"
    MR_Box parse_tree__prog_util__closure = parse_tree__prog_util__closure_arg;
#line 405 "prog_util.m"
    MR_Word parse_tree__prog_util__conv3_Catch_8;

#line 405 "prog_util.m"
    {
#line 405 "prog_util.m"
      parse_tree__prog_util__rename_in_catch_expr_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv3_Catch_8);
    }
#line 405 "prog_util.m"
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv3_Catch_8));
#line 405 "prog_util.m"
  }
#line 405 "prog_util.m"
}

#line 370 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_expr_4_p_0_3(
#line 370 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 370 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 370 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2)
#line 370 "prog_util.m"
{
#line 370 "prog_util.m"
  {
#line 370 "prog_util.m"
    MR_Box parse_tree__prog_util__closure = parse_tree__prog_util__closure_arg;
#line 370 "prog_util.m"
    MR_Word parse_tree__prog_util__conv2_TMV_8;

#line 370 "prog_util.m"
    {
#line 370 "prog_util.m"
      parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv2_TMV_8);
    }
#line 370 "prog_util.m"
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv2_TMV_8));
#line 370 "prog_util.m"
  }
#line 370 "prog_util.m"
}

#line 389 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_expr_4_p_0_2(
#line 389 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 389 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 389 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2)
#line 389 "prog_util.m"
{
#line 389 "prog_util.m"
  {
#line 389 "prog_util.m"
    MR_Box parse_tree__prog_util__closure = parse_tree__prog_util__closure_arg;
#line 389 "prog_util.m"
    MR_Word parse_tree__prog_util__conv1_HeadVar__4_4;

#line 389 "prog_util.m"
    {
#line 389 "prog_util.m"
      parse_tree__prog_util__rename_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv1_HeadVar__4_4);
    }
#line 389 "prog_util.m"
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv1_HeadVar__4_4));
#line 389 "prog_util.m"
  }
#line 389 "prog_util.m"
}

#line 384 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_expr_4_p_0_1(
#line 384 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 384 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 384 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2)
#line 384 "prog_util.m"
{
#line 384 "prog_util.m"
  {
#line 384 "prog_util.m"
    MR_Box parse_tree__prog_util__closure = parse_tree__prog_util__closure_arg;
#line 384 "prog_util.m"
    MR_Word parse_tree__prog_util__conv0_Var_8;

#line 384 "prog_util.m"
    {
#line 384 "prog_util.m"
      parse_tree__prog_util__rename_in_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv0_Var_8);
    }
#line 384 "prog_util.m"
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv0_Var_8));
#line 384 "prog_util.m"
  }
#line 384 "prog_util.m"
}

#line 269 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_expr_4_p_0(
#line 269 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 269 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 269 "prog_util.m"
  MR_Word parse_tree__prog_util__Expr0_7,
#line 269 "prog_util.m"
  MR_Word * parse_tree__prog_util__Expr_8)
#line 269 "prog_util.m"
{
#line 276 "prog_util.m"
  {
#line 276 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 276 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 1))))
#line 279 "prog_util.m"
      {
#line 279 "prog_util.m"
        MR_Word parse_tree__prog_util__GoalA0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)));
#line 279 "prog_util.m"
        MR_Word parse_tree__prog_util__GoalB0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 279 "prog_util.m"
        MR_Word parse_tree__prog_util__GoalA_11;
#line 279 "prog_util.m"
        MR_Word parse_tree__prog_util__GoalB_12;

#line 280 "prog_util.m"
        {
#line 280 "prog_util.m"
          parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__GoalA0_9, &parse_tree__prog_util__GoalA_11);
        }
#line 281 "prog_util.m"
        {
#line 281 "prog_util.m"
          parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__GoalB0_10, &parse_tree__prog_util__GoalB_12);
        }
#line 282 "prog_util.m"
        {
#line 282 "prog_util.m"
          MR_Word base;
#line 282 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "prog_util.m"
          *parse_tree__prog_util__Expr_8 = base;
#line 282 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__GoalA_11));
#line 282 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__GoalB_12));
#line 282 "prog_util.m"
        }
#line 279 "prog_util.m"
      }
#line 276 "prog_util.m"
    else
#line 276 "prog_util.m"
      if ((((parse_tree__prog_util__Expr0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))) || ((parse_tree__prog_util__Expr0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))))
#line 277 "prog_util.m"
        *parse_tree__prog_util__Expr_8 = parse_tree__prog_util__Expr0_7;
#line 276 "prog_util.m"
      else
#line 276 "prog_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 2))))
#line 284 "prog_util.m"
          {
#line 284 "prog_util.m"
            MR_Word parse_tree__prog_util__GoalA0_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)));
#line 284 "prog_util.m"
            MR_Word parse_tree__prog_util__GoalB0_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 284 "prog_util.m"
            MR_Word parse_tree__prog_util__GoalA_89;
#line 284 "prog_util.m"
            MR_Word parse_tree__prog_util__GoalB_90;

#line 285 "prog_util.m"
            {
#line 285 "prog_util.m"
              parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__GoalA0_87, &parse_tree__prog_util__GoalA_89);
            }
#line 286 "prog_util.m"
            {
#line 286 "prog_util.m"
              parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__GoalB0_88, &parse_tree__prog_util__GoalB_90);
            }
#line 287 "prog_util.m"
            {
#line 287 "prog_util.m"
              MR_Word base;
#line 287 "prog_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "prog_util.m"
              *parse_tree__prog_util__Expr_8 = base;
#line 287 "prog_util.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_util__GoalA_89));
#line 287 "prog_util.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_util__GoalB_90));
#line 287 "prog_util.m"
            }
#line 284 "prog_util.m"
          }
#line 276 "prog_util.m"
        else
#line 276 "prog_util.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 308 "prog_util.m"
            {
#line 308 "prog_util.m"
              MR_Word parse_tree__prog_util__Goal0_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 308 "prog_util.m"
              MR_Word parse_tree__prog_util__Goal_102;
#line 308 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 308 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars_104;

#line 309 "prog_util.m"
              {
#line 309 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_103, &parse_tree__prog_util__Vars_104);
              }
#line 310 "prog_util.m"
              {
#line 310 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_101, &parse_tree__prog_util__Goal_102);
              }
#line 311 "prog_util.m"
              {
#line 311 "prog_util.m"
                MR_Word base;
#line 311 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 311 "prog_util.m"
                *parse_tree__prog_util__Expr_8 = base;
#line 311 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 311 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars_104));
#line 311 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Goal_102));
#line 311 "prog_util.m"
              }
#line 308 "prog_util.m"
            }
#line 276 "prog_util.m"
          else
#line 276 "prog_util.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 313 "prog_util.m"
              {
#line 313 "prog_util.m"
                MR_Word parse_tree__prog_util__Goal0_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 313 "prog_util.m"
                MR_Word parse_tree__prog_util__Goal_106;
#line 313 "prog_util.m"
                MR_Word parse_tree__prog_util__Vars0_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 313 "prog_util.m"
                MR_Word parse_tree__prog_util__Vars_108;

#line 314 "prog_util.m"
                {
#line 314 "prog_util.m"
                  parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_107, &parse_tree__prog_util__Vars_108);
                }
#line 315 "prog_util.m"
                {
#line 315 "prog_util.m"
                  parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_105, &parse_tree__prog_util__Goal_106);
                }
#line 316 "prog_util.m"
                {
#line 316 "prog_util.m"
                  MR_Word base;
#line 316 "prog_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 316 "prog_util.m"
                  *parse_tree__prog_util__Expr_8 = base;
#line 316 "prog_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 316 "prog_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars_108));
#line 316 "prog_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Goal_106));
#line 316 "prog_util.m"
                }
#line 313 "prog_util.m"
              }
#line 276 "prog_util.m"
            else
#line 276 "prog_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 376 "prog_util.m"
                {
#line 376 "prog_util.m"
                  MR_Word parse_tree__prog_util__TypeInfo_171_171;
#line 376 "prog_util.m"
                  MR_Word parse_tree__prog_util__InVars0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 376 "prog_util.m"
                  MR_Word parse_tree__prog_util__OutVars0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 376 "prog_util.m"
                  MR_Word parse_tree__prog_util__MaybeVars0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 3)));
#line 376 "prog_util.m"
                  MR_Word parse_tree__prog_util__MainExpr0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 4)));
#line 376 "prog_util.m"
                  MR_Word parse_tree__prog_util__OrElseExpr0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 5)));
#line 376 "prog_util.m"
                  MR_Word parse_tree__prog_util__InVars_40;
#line 376 "prog_util.m"
                  MR_Word parse_tree__prog_util__OutVars_41;
#line 376 "prog_util.m"
                  MR_Word parse_tree__prog_util__MaybeVars_42;
#line 376 "prog_util.m"
                  MR_Word parse_tree__prog_util__MainExpr_45;
#line 376 "prog_util.m"
                  MR_Word parse_tree__prog_util__OrElseExpr_46;
#line 376 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_85_85;

#line 377 "prog_util.m"
                  {
#line 377 "prog_util.m"
                    parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__InVars0_35, &parse_tree__prog_util__InVars_40);
                  }
#line 378 "prog_util.m"
                  {
#line 378 "prog_util.m"
                    parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__OutVars0_36, &parse_tree__prog_util__OutVars_41);
                  }
#line 382 "prog_util.m"
                  if ((parse_tree__prog_util__MaybeVars0_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 381 "prog_util.m"
                    parse_tree__prog_util__MaybeVars_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 382 "prog_util.m"
                  else
#line 383 "prog_util.m"
                    {
#line 383 "prog_util.m"
                      MR_Word parse_tree__prog_util__TypeInfo_168_168;
#line 383 "prog_util.m"
                      MR_Word parse_tree__prog_util__TransVars0_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeVars0_37, (MR_Integer) 0)));
#line 383 "prog_util.m"
                      MR_Word parse_tree__prog_util__TransVars_44;
#line 383 "prog_util.m"
                      MR_Word parse_tree__prog_util__V_84_84;

#line 384 "prog_util.m"
                      {
#line 384 "prog_util.m"
                        parse_tree__prog_util__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 384 "prog_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_84_84, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[0]));
#line 384 "prog_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_84_84, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_expr_4_p_0_1));
#line 384 "prog_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_84_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 384 "prog_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_84_84, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
#line 384 "prog_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_84_84, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 384 "prog_util.m"
                      }
#line 3507 "parse_tree.prog_util.c"
                      parse_tree__prog_util__TypeInfo_168_168 = (MR_Word) &parse_tree__prog_util_scalar_common_1[1];
#line 384 "prog_util.m"
                      {
#line 384 "prog_util.m"
                        mercury__list__map_3_p_0(parse_tree__prog_util__TypeInfo_168_168, parse_tree__prog_util__TypeInfo_168_168, parse_tree__prog_util__V_84_84, parse_tree__prog_util__TransVars0_43, &parse_tree__prog_util__TransVars_44);
                      }
#line 386 "prog_util.m"
                      {
#line 386 "prog_util.m"
                        parse_tree__prog_util__MaybeVars_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 386 "prog_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeVars_42, 0) = ((MR_Box) (parse_tree__prog_util__TransVars_44));
#line 386 "prog_util.m"
                      }
#line 383 "prog_util.m"
                    }
#line 388 "prog_util.m"
                  {
#line 388 "prog_util.m"
                    parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__MainExpr0_38, &parse_tree__prog_util__MainExpr_45);
                  }
#line 389 "prog_util.m"
                  {
#line 389 "prog_util.m"
                    parse_tree__prog_util__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 389 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_85_85, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[1]));
#line 389 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_85_85, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_expr_4_p_0_2));
#line 389 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 389 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_85_85, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
#line 389 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_85_85, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 389 "prog_util.m"
                  }
#line 3545 "parse_tree.prog_util.c"
                  parse_tree__prog_util__TypeInfo_171_171 = (MR_Word) &parse_tree__prog_util_scalar_common_2[1];
#line 389 "prog_util.m"
                  {
#line 389 "prog_util.m"
                    mercury__list__map_3_p_0(parse_tree__prog_util__TypeInfo_171_171, parse_tree__prog_util__TypeInfo_171_171, parse_tree__prog_util__V_85_85, parse_tree__prog_util__OrElseExpr0_39, &parse_tree__prog_util__OrElseExpr_46);
                  }
#line 390 "prog_util.m"
                  {
#line 390 "prog_util.m"
                    MR_Word base;
#line 390 "prog_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 390 "prog_util.m"
                    *parse_tree__prog_util__Expr_8 = base;
#line 390 "prog_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 390 "prog_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__InVars_40));
#line 390 "prog_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__OutVars_41));
#line 390 "prog_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__MaybeVars_42));
#line 390 "prog_util.m"
                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__MainExpr_45));
#line 390 "prog_util.m"
                    MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__OrElseExpr_46));
#line 390 "prog_util.m"
                  }
#line 376 "prog_util.m"
                }
#line 276 "prog_util.m"
              else
#line 276 "prog_util.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 19))))
#line 441 "prog_util.m"
                  {
#line 441 "prog_util.m"
                    MR_Word parse_tree__prog_util__SymName_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 441 "prog_util.m"
                    MR_Word parse_tree__prog_util__V_77_77;
#line 441 "prog_util.m"
                    MR_Word parse_tree__prog_util__V_78_78;
#line 441 "prog_util.m"
                    MR_Word parse_tree__prog_util__Purity_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 3)));
#line 441 "prog_util.m"
                    MR_Word parse_tree__prog_util__Terms0_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 441 "prog_util.m"
                    MR_Word parse_tree__prog_util__Terms_161;

#line 442 "prog_util.m"
                    {
#line 442 "prog_util.m"
                      parse_tree__prog_util__V_78_78 = mercury__term__context_init_0_f_0();
                    }
#line 442 "prog_util.m"
                    {
#line 442 "prog_util.m"
                      parse_tree__prog_util__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "prog_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_77_77, 0) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 442 "prog_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_77_77, 1) = ((MR_Box) (parse_tree__prog_util__V_78_78));
#line 442 "prog_util.m"
                    }
#line 442 "prog_util.m"
                    {
#line 442 "prog_util.m"
                      mercury__term__substitute_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_util__Terms0_160, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__V_77_77, &parse_tree__prog_util__Terms_161);
                    }
#line 444 "prog_util.m"
                    {
#line 444 "prog_util.m"
                      MR_Word base;
#line 444 "prog_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 444 "prog_util.m"
                      *parse_tree__prog_util__Expr_8 = base;
#line 444 "prog_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 444 "prog_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__SymName_68));
#line 444 "prog_util.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Terms_161));
#line 444 "prog_util.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__Purity_159));
#line 444 "prog_util.m"
                    }
#line 441 "prog_util.m"
                  }
#line 276 "prog_util.m"
                else
#line 276 "prog_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 289 "prog_util.m"
                    {
#line 289 "prog_util.m"
                      MR_Word parse_tree__prog_util__GoalA0_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 289 "prog_util.m"
                      MR_Word parse_tree__prog_util__GoalB0_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 289 "prog_util.m"
                      MR_Word parse_tree__prog_util__GoalA_93;
#line 289 "prog_util.m"
                      MR_Word parse_tree__prog_util__GoalB_94;

#line 290 "prog_util.m"
                      {
#line 290 "prog_util.m"
                        parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__GoalA0_91, &parse_tree__prog_util__GoalA_93);
                      }
#line 291 "prog_util.m"
                      {
#line 291 "prog_util.m"
                        parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__GoalB0_92, &parse_tree__prog_util__GoalB_94);
                      }
#line 292 "prog_util.m"
                      {
#line 292 "prog_util.m"
                        MR_Word base;
#line 292 "prog_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 292 "prog_util.m"
                        *parse_tree__prog_util__Expr_8 = base;
#line 292 "prog_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 292 "prog_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__GoalA_93));
#line 292 "prog_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__GoalB_94));
#line 292 "prog_util.m"
                      }
#line 289 "prog_util.m"
                    }
#line 276 "prog_util.m"
                  else
#line 276 "prog_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 423 "prog_util.m"
                      {
#line 423 "prog_util.m"
                        MR_Word parse_tree__prog_util__GoalA0_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 423 "prog_util.m"
                        MR_Word parse_tree__prog_util__GoalB0_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 423 "prog_util.m"
                        MR_Word parse_tree__prog_util__GoalA_149;
#line 423 "prog_util.m"
                        MR_Word parse_tree__prog_util__GoalB_150;

#line 424 "prog_util.m"
                        {
#line 424 "prog_util.m"
                          parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__GoalA0_147, &parse_tree__prog_util__GoalA_149);
                        }
#line 425 "prog_util.m"
                        {
#line 425 "prog_util.m"
                          parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__GoalB0_148, &parse_tree__prog_util__GoalB_150);
                        }
#line 426 "prog_util.m"
                        {
#line 426 "prog_util.m"
                          MR_Word base;
#line 426 "prog_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 426 "prog_util.m"
                          *parse_tree__prog_util__Expr_8 = base;
#line 426 "prog_util.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 426 "prog_util.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__GoalA_149));
#line 426 "prog_util.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__GoalB_150));
#line 426 "prog_util.m"
                        }
#line 423 "prog_util.m"
                      }
#line 276 "prog_util.m"
                    else
#line 276 "prog_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 436 "prog_util.m"
                        {
#line 436 "prog_util.m"
                          MR_String parse_tree__prog_util__Name_65 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 436 "prog_util.m"
                          MR_Word parse_tree__prog_util__Terms0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 436 "prog_util.m"
                          MR_Word parse_tree__prog_util__Terms_67;
#line 436 "prog_util.m"
                          MR_Word parse_tree__prog_util__V_79_79;
#line 436 "prog_util.m"
                          MR_Word parse_tree__prog_util__V_80_80;

#line 437 "prog_util.m"
                          {
#line 437 "prog_util.m"
                            parse_tree__prog_util__V_80_80 = mercury__term__context_init_0_f_0();
                          }
#line 437 "prog_util.m"
                          {
#line 437 "prog_util.m"
                            parse_tree__prog_util__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "prog_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_79_79, 0) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 437 "prog_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_79_79, 1) = ((MR_Box) (parse_tree__prog_util__V_80_80));
#line 437 "prog_util.m"
                          }
#line 437 "prog_util.m"
                          {
#line 437 "prog_util.m"
                            mercury__term__substitute_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_util__Terms0_66, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__V_79_79, &parse_tree__prog_util__Terms_67);
                          }
#line 439 "prog_util.m"
                          {
#line 439 "prog_util.m"
                            MR_Word base;
#line 439 "prog_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 439 "prog_util.m"
                            *parse_tree__prog_util__Expr_8 = base;
#line 439 "prog_util.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 439 "prog_util.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Name_65));
#line 439 "prog_util.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Terms_67));
#line 439 "prog_util.m"
                          }
#line 436 "prog_util.m"
                        }
#line 276 "prog_util.m"
                      else
#line 276 "prog_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 428 "prog_util.m"
                          {
#line 428 "prog_util.m"
                            MR_Word parse_tree__prog_util__Cond0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 3)));
#line 428 "prog_util.m"
                            MR_Word parse_tree__prog_util__Cond_64;
#line 428 "prog_util.m"
                            MR_Word parse_tree__prog_util__Vars0_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 428 "prog_util.m"
                            MR_Word parse_tree__prog_util__Vars_152;
#line 428 "prog_util.m"
                            MR_Word parse_tree__prog_util__StateVars0_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 428 "prog_util.m"
                            MR_Word parse_tree__prog_util__StateVars_154;
#line 428 "prog_util.m"
                            MR_Word parse_tree__prog_util__Then0_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 4)));
#line 428 "prog_util.m"
                            MR_Word parse_tree__prog_util__Then_156;
#line 428 "prog_util.m"
                            MR_Word parse_tree__prog_util__Else0_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 5)));
#line 428 "prog_util.m"
                            MR_Word parse_tree__prog_util__Else_158;

#line 429 "prog_util.m"
                            {
#line 429 "prog_util.m"
                              parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_151, &parse_tree__prog_util__Vars_152);
                            }
#line 430 "prog_util.m"
                            {
#line 430 "prog_util.m"
                              parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_153, &parse_tree__prog_util__StateVars_154);
                            }
#line 431 "prog_util.m"
                            {
#line 431 "prog_util.m"
                              parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Cond0_63, &parse_tree__prog_util__Cond_64);
                            }
#line 432 "prog_util.m"
                            {
#line 432 "prog_util.m"
                              parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Then0_155, &parse_tree__prog_util__Then_156);
                            }
#line 433 "prog_util.m"
                            {
#line 433 "prog_util.m"
                              parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Else0_157, &parse_tree__prog_util__Else_158);
                            }
#line 434 "prog_util.m"
                            {
#line 434 "prog_util.m"
                              MR_Word base;
#line 434 "prog_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 434 "prog_util.m"
                              *parse_tree__prog_util__Expr_8 = base;
#line 434 "prog_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 434 "prog_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars_152));
#line 434 "prog_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__StateVars_154));
#line 434 "prog_util.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__Cond_64));
#line 434 "prog_util.m"
                              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__Then_156));
#line 434 "prog_util.m"
                              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__Else_158));
#line 434 "prog_util.m"
                            }
#line 428 "prog_util.m"
                          }
#line 276 "prog_util.m"
                        else
#line 276 "prog_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 418 "prog_util.m"
                            {
#line 418 "prog_util.m"
                              MR_Word parse_tree__prog_util__GoalA0_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 418 "prog_util.m"
                              MR_Word parse_tree__prog_util__GoalB0_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 418 "prog_util.m"
                              MR_Word parse_tree__prog_util__GoalA_145;
#line 418 "prog_util.m"
                              MR_Word parse_tree__prog_util__GoalB_146;

#line 419 "prog_util.m"
                              {
#line 419 "prog_util.m"
                                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__GoalA0_143, &parse_tree__prog_util__GoalA_145);
                              }
#line 420 "prog_util.m"
                              {
#line 420 "prog_util.m"
                                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__GoalB0_144, &parse_tree__prog_util__GoalB_146);
                              }
#line 421 "prog_util.m"
                              {
#line 421 "prog_util.m"
                                MR_Word base;
#line 421 "prog_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 421 "prog_util.m"
                                *parse_tree__prog_util__Expr_8 = base;
#line 421 "prog_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 421 "prog_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__GoalA_145));
#line 421 "prog_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__GoalB_146));
#line 421 "prog_util.m"
                              }
#line 418 "prog_util.m"
                            }
#line 276 "prog_util.m"
                          else
#line 276 "prog_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 294 "prog_util.m"
                              {
#line 294 "prog_util.m"
                                MR_Word parse_tree__prog_util__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 294 "prog_util.m"
                                MR_Word parse_tree__prog_util__Goal_14;

#line 295 "prog_util.m"
                                {
#line 295 "prog_util.m"
                                  parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_13, &parse_tree__prog_util__Goal_14);
                                }
#line 296 "prog_util.m"
                                {
#line 296 "prog_util.m"
                                  MR_Word base;
#line 296 "prog_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "prog_util.m"
                                  *parse_tree__prog_util__Expr_8 = base;
#line 296 "prog_util.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 296 "prog_util.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Goal_14));
#line 296 "prog_util.m"
                                }
#line 294 "prog_util.m"
                              }
#line 276 "prog_util.m"
                            else
#line 276 "prog_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 343 "prog_util.m"
                                {
#line 343 "prog_util.m"
                                  MR_Word parse_tree__prog_util__Goal0_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 5)));
#line 343 "prog_util.m"
                                  MR_Word parse_tree__prog_util__Goal_126;
#line 343 "prog_util.m"
                                  MR_Word parse_tree__prog_util__Vars0_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 343 "prog_util.m"
                                  MR_Word parse_tree__prog_util__Vars_128;
#line 343 "prog_util.m"
                                  MR_Word parse_tree__prog_util__StateVars0_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 343 "prog_util.m"
                                  MR_Word parse_tree__prog_util__DotSVars0_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 3)));
#line 343 "prog_util.m"
                                  MR_Word parse_tree__prog_util__ColonSVars0_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 4)));
#line 343 "prog_util.m"
                                  MR_Word parse_tree__prog_util__StateVars_132;
#line 343 "prog_util.m"
                                  MR_Word parse_tree__prog_util__DotSVars_133;
#line 343 "prog_util.m"
                                  MR_Word parse_tree__prog_util__ColonSVars_134;

#line 344 "prog_util.m"
                                  {
#line 344 "prog_util.m"
                                    parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_127, &parse_tree__prog_util__Vars_128);
                                  }
#line 345 "prog_util.m"
                                  {
#line 345 "prog_util.m"
                                    parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_129, &parse_tree__prog_util__StateVars_132);
                                  }
#line 346 "prog_util.m"
                                  {
#line 346 "prog_util.m"
                                    parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__DotSVars0_130, &parse_tree__prog_util__DotSVars_133);
                                  }
#line 347 "prog_util.m"
                                  {
#line 347 "prog_util.m"
                                    parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__ColonSVars0_131, &parse_tree__prog_util__ColonSVars_134);
                                  }
#line 348 "prog_util.m"
                                  {
#line 348 "prog_util.m"
                                    parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_125, &parse_tree__prog_util__Goal_126);
                                  }
#line 349 "prog_util.m"
                                  {
#line 349 "prog_util.m"
                                    MR_Word base;
#line 349 "prog_util.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 349 "prog_util.m"
                                    *parse_tree__prog_util__Expr_8 = base;
#line 349 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 349 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars_128));
#line 349 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__StateVars_132));
#line 349 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__DotSVars_133));
#line 349 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__ColonSVars_134));
#line 349 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__Goal_126));
#line 349 "prog_util.m"
                                  }
#line 343 "prog_util.m"
                                }
#line 276 "prog_util.m"
                              else
#line 276 "prog_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 333 "prog_util.m"
                                  {
#line 333 "prog_util.m"
                                    MR_Word parse_tree__prog_util__Goal0_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 5)));
#line 333 "prog_util.m"
                                    MR_Word parse_tree__prog_util__Goal_116;
#line 333 "prog_util.m"
                                    MR_Word parse_tree__prog_util__Vars0_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 333 "prog_util.m"
                                    MR_Word parse_tree__prog_util__Vars_118;
#line 333 "prog_util.m"
                                    MR_Word parse_tree__prog_util__StateVars0_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 333 "prog_util.m"
                                    MR_Word parse_tree__prog_util__DotSVars0_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 3)));
#line 333 "prog_util.m"
                                    MR_Word parse_tree__prog_util__ColonSVars0_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 4)));
#line 333 "prog_util.m"
                                    MR_Word parse_tree__prog_util__StateVars_122;
#line 333 "prog_util.m"
                                    MR_Word parse_tree__prog_util__DotSVars_123;
#line 333 "prog_util.m"
                                    MR_Word parse_tree__prog_util__ColonSVars_124;

#line 334 "prog_util.m"
                                    {
#line 334 "prog_util.m"
                                      parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_117, &parse_tree__prog_util__Vars_118);
                                    }
#line 335 "prog_util.m"
                                    {
#line 335 "prog_util.m"
                                      parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_119, &parse_tree__prog_util__StateVars_122);
                                    }
#line 336 "prog_util.m"
                                    {
#line 336 "prog_util.m"
                                      parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__DotSVars0_120, &parse_tree__prog_util__DotSVars_123);
                                    }
#line 337 "prog_util.m"
                                    {
#line 337 "prog_util.m"
                                      parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__ColonSVars0_121, &parse_tree__prog_util__ColonSVars_124);
                                    }
#line 338 "prog_util.m"
                                    {
#line 338 "prog_util.m"
                                      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_115, &parse_tree__prog_util__Goal_116);
                                    }
#line 339 "prog_util.m"
                                    {
#line 339 "prog_util.m"
                                      MR_Word base;
#line 339 "prog_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 339 "prog_util.m"
                                      *parse_tree__prog_util__Expr_8 = base;
#line 339 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 339 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars_118));
#line 339 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__StateVars_122));
#line 339 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__DotSVars_123));
#line 339 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__ColonSVars_124));
#line 339 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__Goal_116));
#line 339 "prog_util.m"
                                    }
#line 333 "prog_util.m"
                                  }
#line 276 "prog_util.m"
                                else
#line 276 "prog_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 323 "prog_util.m"
                                    {
#line 323 "prog_util.m"
                                      MR_Word parse_tree__prog_util__StateVars0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 323 "prog_util.m"
                                      MR_Word parse_tree__prog_util__DotSVars0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 3)));
#line 323 "prog_util.m"
                                      MR_Word parse_tree__prog_util__ColonSVars0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 4)));
#line 323 "prog_util.m"
                                      MR_Word parse_tree__prog_util__StateVars_21;
#line 323 "prog_util.m"
                                      MR_Word parse_tree__prog_util__DotSVars_22;
#line 323 "prog_util.m"
                                      MR_Word parse_tree__prog_util__ColonSVars_23;
#line 323 "prog_util.m"
                                      MR_Word parse_tree__prog_util__Goal0_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 5)));
#line 323 "prog_util.m"
                                      MR_Word parse_tree__prog_util__Goal_112;
#line 323 "prog_util.m"
                                      MR_Word parse_tree__prog_util__Vars0_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 323 "prog_util.m"
                                      MR_Word parse_tree__prog_util__Vars_114;

#line 324 "prog_util.m"
                                      {
#line 324 "prog_util.m"
                                        parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_113, &parse_tree__prog_util__Vars_114);
                                      }
#line 325 "prog_util.m"
                                      {
#line 325 "prog_util.m"
                                        parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_18, &parse_tree__prog_util__StateVars_21);
                                      }
#line 326 "prog_util.m"
                                      {
#line 326 "prog_util.m"
                                        parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__DotSVars0_19, &parse_tree__prog_util__DotSVars_22);
                                      }
#line 327 "prog_util.m"
                                      {
#line 327 "prog_util.m"
                                        parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__ColonSVars0_20, &parse_tree__prog_util__ColonSVars_23);
                                      }
#line 328 "prog_util.m"
                                      {
#line 328 "prog_util.m"
                                        parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_111, &parse_tree__prog_util__Goal_112);
                                      }
#line 329 "prog_util.m"
                                      {
#line 329 "prog_util.m"
                                        MR_Word base;
#line 329 "prog_util.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 329 "prog_util.m"
                                        *parse_tree__prog_util__Expr_8 = base;
#line 329 "prog_util.m"
                                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 329 "prog_util.m"
                                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars_114));
#line 329 "prog_util.m"
                                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__StateVars_21));
#line 329 "prog_util.m"
                                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__DotSVars_22));
#line 329 "prog_util.m"
                                        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__ColonSVars_23));
#line 329 "prog_util.m"
                                        MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__Goal_112));
#line 329 "prog_util.m"
                                      }
#line 323 "prog_util.m"
                                    }
#line 276 "prog_util.m"
                                  else
#line 276 "prog_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 318 "prog_util.m"
                                      {
#line 318 "prog_util.m"
                                        MR_Word parse_tree__prog_util__Purity_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 318 "prog_util.m"
                                        MR_Word parse_tree__prog_util__Goal0_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 318 "prog_util.m"
                                        MR_Word parse_tree__prog_util__Goal_110;

#line 319 "prog_util.m"
                                        {
#line 319 "prog_util.m"
                                          parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_109, &parse_tree__prog_util__Goal_110);
                                        }
#line 320 "prog_util.m"
                                        {
#line 320 "prog_util.m"
                                          MR_Word base;
#line 320 "prog_util.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 320 "prog_util.m"
                                          *parse_tree__prog_util__Expr_8 = base;
#line 320 "prog_util.m"
                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 320 "prog_util.m"
                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Purity_17));
#line 320 "prog_util.m"
                                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Goal_110));
#line 320 "prog_util.m"
                                        }
#line 318 "prog_util.m"
                                      }
#line 276 "prog_util.m"
                                    else
#line 276 "prog_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 356 "prog_util.m"
                                        {
#line 356 "prog_util.m"
                                          MR_Word parse_tree__prog_util__Var0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 356 "prog_util.m"
                                          MR_Word parse_tree__prog_util__Var_26;
#line 356 "prog_util.m"
                                          MR_Word parse_tree__prog_util__Goal0_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 356 "prog_util.m"
                                          MR_Word parse_tree__prog_util__Goal_138;

#line 357 "prog_util.m"
                                          {
#line 357 "prog_util.m"
                                            parse_tree__prog_util__rename_in_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Var0_25, &parse_tree__prog_util__Var_26);
                                          }
#line 358 "prog_util.m"
                                          {
#line 358 "prog_util.m"
                                            parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_137, &parse_tree__prog_util__Goal_138);
                                          }
#line 359 "prog_util.m"
                                          {
#line 359 "prog_util.m"
                                            MR_Word base;
#line 359 "prog_util.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 359 "prog_util.m"
                                            *parse_tree__prog_util__Expr_8 = base;
#line 359 "prog_util.m"
                                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 359 "prog_util.m"
                                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Var_26));
#line 359 "prog_util.m"
                                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Goal_138));
#line 359 "prog_util.m"
                                          }
#line 356 "prog_util.m"
                                        }
#line 276 "prog_util.m"
                                      else
#line 276 "prog_util.m"
                                        if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 352 "prog_util.m"
                                          {
#line 352 "prog_util.m"
                                            MR_Word parse_tree__prog_util__Detism_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 352 "prog_util.m"
                                            MR_Word parse_tree__prog_util__Goal0_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 352 "prog_util.m"
                                            MR_Word parse_tree__prog_util__Goal_136;

#line 353 "prog_util.m"
                                            {
#line 353 "prog_util.m"
                                              parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_135, &parse_tree__prog_util__Goal_136);
                                            }
#line 354 "prog_util.m"
                                            {
#line 354 "prog_util.m"
                                              MR_Word base;
#line 354 "prog_util.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 354 "prog_util.m"
                                              *parse_tree__prog_util__Expr_8 = base;
#line 354 "prog_util.m"
                                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 354 "prog_util.m"
                                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Detism_24));
#line 354 "prog_util.m"
                                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Goal_136));
#line 354 "prog_util.m"
                                            }
#line 352 "prog_util.m"
                                          }
#line 276 "prog_util.m"
                                        else
#line 276 "prog_util.m"
                                          if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 298 "prog_util.m"
                                            {
#line 298 "prog_util.m"
                                              MR_Word parse_tree__prog_util__Vars0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 298 "prog_util.m"
                                              MR_Word parse_tree__prog_util__Vars_16;
#line 298 "prog_util.m"
                                              MR_Word parse_tree__prog_util__Goal0_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 298 "prog_util.m"
                                              MR_Word parse_tree__prog_util__Goal_96;

#line 299 "prog_util.m"
                                              {
#line 299 "prog_util.m"
                                                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_15, &parse_tree__prog_util__Vars_16);
                                              }
#line 300 "prog_util.m"
                                              {
#line 300 "prog_util.m"
                                                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_95, &parse_tree__prog_util__Goal_96);
                                              }
#line 301 "prog_util.m"
                                              {
#line 301 "prog_util.m"
                                                MR_Word base;
#line 301 "prog_util.m"
                                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 301 "prog_util.m"
                                                *parse_tree__prog_util__Expr_8 = base;
#line 301 "prog_util.m"
                                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 301 "prog_util.m"
                                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars_16));
#line 301 "prog_util.m"
                                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Goal_96));
#line 301 "prog_util.m"
                                              }
#line 298 "prog_util.m"
                                            }
#line 276 "prog_util.m"
                                          else
#line 276 "prog_util.m"
                                            if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 303 "prog_util.m"
                                              {
#line 303 "prog_util.m"
                                                MR_Word parse_tree__prog_util__Goal0_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 303 "prog_util.m"
                                                MR_Word parse_tree__prog_util__Goal_98;
#line 303 "prog_util.m"
                                                MR_Word parse_tree__prog_util__Vars0_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 303 "prog_util.m"
                                                MR_Word parse_tree__prog_util__Vars_100;

#line 304 "prog_util.m"
                                                {
#line 304 "prog_util.m"
                                                  parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_99, &parse_tree__prog_util__Vars_100);
                                                }
#line 305 "prog_util.m"
                                                {
#line 305 "prog_util.m"
                                                  parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_97, &parse_tree__prog_util__Goal_98);
                                                }
#line 306 "prog_util.m"
                                                {
#line 306 "prog_util.m"
                                                  MR_Word base;
#line 306 "prog_util.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 306 "prog_util.m"
                                                  *parse_tree__prog_util__Expr_8 = base;
#line 306 "prog_util.m"
                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 306 "prog_util.m"
                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars_100));
#line 306 "prog_util.m"
                                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Goal_98));
#line 306 "prog_util.m"
                                                }
#line 303 "prog_util.m"
                                              }
#line 276 "prog_util.m"
                                            else
#line 276 "prog_util.m"
                                              if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 361 "prog_util.m"
                                                {
#line 361 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__TypeCtorInfo_165_165;
#line 361 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__CompileTime_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 361 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__RunTime_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 361 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__MaybeIO0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 3)));
#line 361 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__Mutables0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 4)));
#line 361 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__MaybeIO_31;
#line 361 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__Mutables_34;
#line 361 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__V_86_86;
#line 361 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__Goal0_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 5)));
#line 361 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__Goal_140;

#line 365 "prog_util.m"
                                                  if ((parse_tree__prog_util__MaybeIO0_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 364 "prog_util.m"
                                                    parse_tree__prog_util__MaybeIO_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 365 "prog_util.m"
                                                  else
#line 366 "prog_util.m"
                                                    {
#line 366 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__IOStateVar0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeIO0_29, (MR_Integer) 0)));
#line 366 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__IOStateVar_33;

#line 367 "prog_util.m"
                                                      {
#line 367 "prog_util.m"
                                                        parse_tree__prog_util__rename_in_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__IOStateVar0_32, &parse_tree__prog_util__IOStateVar_33);
                                                      }
#line 368 "prog_util.m"
                                                      {
#line 368 "prog_util.m"
                                                        parse_tree__prog_util__MaybeIO_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 368 "prog_util.m"
                                                        MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeIO_31, 0) = ((MR_Box) (parse_tree__prog_util__IOStateVar_33));
#line 368 "prog_util.m"
                                                      }
#line 366 "prog_util.m"
                                                    }
#line 370 "prog_util.m"
                                                  {
#line 370 "prog_util.m"
                                                    parse_tree__prog_util__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 370 "prog_util.m"
                                                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_86_86, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[2]));
#line 370 "prog_util.m"
                                                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_86_86, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_expr_4_p_0_3));
#line 370 "prog_util.m"
                                                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_86_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 370 "prog_util.m"
                                                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_86_86, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
#line 370 "prog_util.m"
                                                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_86_86, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 370 "prog_util.m"
                                                  }
#line 4427 "parse_tree.prog_util.c"
                                                  parse_tree__prog_util__TypeCtorInfo_165_165 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0;
#line 370 "prog_util.m"
                                                  {
#line 370 "prog_util.m"
                                                    mercury__list__map_3_p_0(parse_tree__prog_util__TypeCtorInfo_165_165, parse_tree__prog_util__TypeCtorInfo_165_165, parse_tree__prog_util__V_86_86, parse_tree__prog_util__Mutables0_30, &parse_tree__prog_util__Mutables_34);
                                                  }
#line 372 "prog_util.m"
                                                  {
#line 372 "prog_util.m"
                                                    parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_139, &parse_tree__prog_util__Goal_140);
                                                  }
#line 373 "prog_util.m"
                                                  {
#line 373 "prog_util.m"
                                                    MR_Word base;
#line 373 "prog_util.m"
                                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 373 "prog_util.m"
                                                    *parse_tree__prog_util__Expr_8 = base;
#line 373 "prog_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 373 "prog_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__CompileTime_27));
#line 373 "prog_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__RunTime_28));
#line 373 "prog_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__MaybeIO_31));
#line 373 "prog_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__Mutables_34));
#line 373 "prog_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__Goal_140));
#line 373 "prog_util.m"
                                                  }
#line 361 "prog_util.m"
                                                }
#line 276 "prog_util.m"
                                              else
#line 276 "prog_util.m"
                                                if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 393 "prog_util.m"
                                                  {
#line 393 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__TypeCtorInfo_174_174;
#line 393 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__SubGoal0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 393 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__Then0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 3)));
#line 393 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__MaybeElse0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 4)));
#line 393 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__Catches0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 5)));
#line 393 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__MaybeCatchAny0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 6)));
#line 393 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__SubGoal_52;
#line 393 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__Then_53;
#line 393 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__MaybeElse_56;
#line 393 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__Catches_57;
#line 393 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__MaybeCatchAny_62;
#line 393 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__V_81_81;
#line 393 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__MaybeIO0_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 393 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__MaybeIO_142;

#line 394 "prog_util.m"
                                                    {
#line 394 "prog_util.m"
                                                      parse_tree__prog_util__rename_in_maybe_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__MaybeIO0_141, &parse_tree__prog_util__MaybeIO_142);
                                                    }
#line 395 "prog_util.m"
                                                    {
#line 395 "prog_util.m"
                                                      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_47, &parse_tree__prog_util__SubGoal_52);
                                                    }
#line 396 "prog_util.m"
                                                    {
#line 396 "prog_util.m"
                                                      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Then0_48, &parse_tree__prog_util__Then_53);
                                                    }
#line 401 "prog_util.m"
                                                    if ((parse_tree__prog_util__MaybeElse0_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 403 "prog_util.m"
                                                      parse_tree__prog_util__MaybeElse_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 401 "prog_util.m"
                                                    else
#line 398 "prog_util.m"
                                                      {
#line 398 "prog_util.m"
                                                        MR_Word parse_tree__prog_util__Else0_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeElse0_49, (MR_Integer) 0)));
#line 398 "prog_util.m"
                                                        MR_Word parse_tree__prog_util__Else_55;

#line 399 "prog_util.m"
                                                        {
#line 399 "prog_util.m"
                                                          parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Else0_54, &parse_tree__prog_util__Else_55);
                                                        }
#line 400 "prog_util.m"
                                                        {
#line 400 "prog_util.m"
                                                          parse_tree__prog_util__MaybeElse_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 400 "prog_util.m"
                                                          MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeElse_56, 0) = ((MR_Box) (parse_tree__prog_util__Else_55));
#line 400 "prog_util.m"
                                                        }
#line 398 "prog_util.m"
                                                      }
#line 405 "prog_util.m"
                                                    {
#line 405 "prog_util.m"
                                                      parse_tree__prog_util__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 405 "prog_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_81_81, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[3]));
#line 405 "prog_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_81_81, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_expr_4_p_0_4));
#line 405 "prog_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 405 "prog_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_81_81, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
#line 405 "prog_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_81_81, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 405 "prog_util.m"
                                                    }
#line 4557 "parse_tree.prog_util.c"
                                                    parse_tree__prog_util__TypeCtorInfo_174_174 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0;
#line 405 "prog_util.m"
                                                    {
#line 405 "prog_util.m"
                                                      mercury__list__map_3_p_0(parse_tree__prog_util__TypeCtorInfo_174_174, parse_tree__prog_util__TypeCtorInfo_174_174, parse_tree__prog_util__V_81_81, parse_tree__prog_util__Catches0_50, &parse_tree__prog_util__Catches_57);
                                                    }
#line 411 "prog_util.m"
                                                    if ((parse_tree__prog_util__MaybeCatchAny0_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 413 "prog_util.m"
                                                      parse_tree__prog_util__MaybeCatchAny_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 411 "prog_util.m"
                                                    else
#line 407 "prog_util.m"
                                                      {
#line 407 "prog_util.m"
                                                        MR_Word parse_tree__prog_util__CatchAnyVar0_58;
#line 407 "prog_util.m"
                                                        MR_Word parse_tree__prog_util__CatchAnyGoal0_59;
#line 407 "prog_util.m"
                                                        MR_Word parse_tree__prog_util__CatchAnyVar_60;
#line 407 "prog_util.m"
                                                        MR_Word parse_tree__prog_util__CatchAnyGoal_61;
#line 407 "prog_util.m"
                                                        MR_Word parse_tree__prog_util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeCatchAny0_51, (MR_Integer) 0)));
#line 407 "prog_util.m"
                                                        MR_Word parse_tree__prog_util__V_83_83;

#line 407 "prog_util.m"
                                                        parse_tree__prog_util__CatchAnyVar0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_82_82, (MR_Integer) 0)));
#line 407 "prog_util.m"
                                                        parse_tree__prog_util__CatchAnyGoal0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_82_82, (MR_Integer) 1)));
#line 408 "prog_util.m"
                                                        {
#line 408 "prog_util.m"
                                                          parse_tree__prog_util__rename_in_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__CatchAnyVar0_58, &parse_tree__prog_util__CatchAnyVar_60);
                                                        }
#line 409 "prog_util.m"
                                                        {
#line 409 "prog_util.m"
                                                          parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__CatchAnyGoal0_59, &parse_tree__prog_util__CatchAnyGoal_61);
                                                        }
#line 410 "prog_util.m"
                                                        {
#line 410 "prog_util.m"
                                                          parse_tree__prog_util__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 410 "prog_util.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_83_83, 0) = ((MR_Box) (parse_tree__prog_util__CatchAnyVar_60));
#line 410 "prog_util.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_83_83, 1) = ((MR_Box) (parse_tree__prog_util__CatchAnyGoal_61));
#line 410 "prog_util.m"
                                                        }
#line 410 "prog_util.m"
                                                        {
#line 410 "prog_util.m"
                                                          parse_tree__prog_util__MaybeCatchAny_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 410 "prog_util.m"
                                                          MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeCatchAny_62, 0) = ((MR_Box) (parse_tree__prog_util__V_83_83));
#line 410 "prog_util.m"
                                                        }
#line 407 "prog_util.m"
                                                      }
#line 415 "prog_util.m"
                                                    {
#line 415 "prog_util.m"
                                                      MR_Word base;
#line 415 "prog_util.m"
                                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 415 "prog_util.m"
                                                      *parse_tree__prog_util__Expr_8 = base;
#line 415 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 415 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__MaybeIO_142));
#line 415 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoal_52));
#line 415 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__Then_53));
#line 415 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__MaybeElse_56));
#line 415 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__Catches_57));
#line 415 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__MaybeCatchAny_62));
#line 415 "prog_util.m"
                                                    }
#line 393 "prog_util.m"
                                                  }
#line 276 "prog_util.m"
                                                else
#line 446 "prog_util.m"
                                                  {
#line 446 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__TypeCtorInfo_177_177;
#line 446 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__TermA0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 446 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__TermB0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 446 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__TermA_71;
#line 446 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__TermB_72;
#line 446 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__V_73_73;
#line 446 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__V_74_74;
#line 446 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__V_75_75;
#line 446 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__V_76_76;
#line 446 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__Purity_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 3)));

#line 447 "prog_util.m"
                                                    {
#line 447 "prog_util.m"
                                                      parse_tree__prog_util__V_74_74 = mercury__term__context_init_0_f_0();
                                                    }
#line 447 "prog_util.m"
                                                    {
#line 447 "prog_util.m"
                                                      parse_tree__prog_util__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "prog_util.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_73_73, 0) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 447 "prog_util.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_73_73, 1) = ((MR_Box) (parse_tree__prog_util__V_74_74));
#line 447 "prog_util.m"
                                                    }
#line 4685 "parse_tree.prog_util.c"
                                                    parse_tree__prog_util__TypeCtorInfo_177_177 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 447 "prog_util.m"
                                                    {
#line 447 "prog_util.m"
                                                      mercury__term__substitute_4_p_0(parse_tree__prog_util__TypeCtorInfo_177_177, parse_tree__prog_util__TermA0_69, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__V_73_73, &parse_tree__prog_util__TermA_71);
                                                    }
#line 449 "prog_util.m"
                                                    {
#line 449 "prog_util.m"
                                                      parse_tree__prog_util__V_76_76 = mercury__term__context_init_0_f_0();
                                                    }
#line 449 "prog_util.m"
                                                    {
#line 449 "prog_util.m"
                                                      parse_tree__prog_util__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "prog_util.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_75_75, 0) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 449 "prog_util.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_75_75, 1) = ((MR_Box) (parse_tree__prog_util__V_76_76));
#line 449 "prog_util.m"
                                                    }
#line 449 "prog_util.m"
                                                    {
#line 449 "prog_util.m"
                                                      mercury__term__substitute_4_p_0(parse_tree__prog_util__TypeCtorInfo_177_177, parse_tree__prog_util__TermB0_70, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__V_75_75, &parse_tree__prog_util__TermB_72);
                                                    }
#line 451 "prog_util.m"
                                                    {
#line 451 "prog_util.m"
                                                      MR_Word base;
#line 451 "prog_util.m"
                                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 451 "prog_util.m"
                                                      *parse_tree__prog_util__Expr_8 = base;
#line 451 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 451 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__TermA_71));
#line 451 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__TermB_72));
#line 451 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__Purity_162));
#line 451 "prog_util.m"
                                                    }
#line 446 "prog_util.m"
                                                  }
#line 276 "prog_util.m"
  }
#line 269 "prog_util.m"
}

#line 242 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__split_types_and_modes_2_5_p_0(
#line 242 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 242 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 242 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__3_3,
#line 242 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__4_4,
#line 242 "prog_util.m"
  MR_Word * parse_tree__prog_util__Result_5)
#line 242 "prog_util.m"
{
#line 246 "prog_util.m"
  {
#line 246 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 246 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 246 "prog_util.m"
      {
#line 246 "prog_util.m"
        *parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 246 "prog_util.m"
        *parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 246 "prog_util.m"
        *parse_tree__prog_util__Result_5 = parse_tree__prog_util__HeadVar__2_2;
#line 246 "prog_util.m"
      }
#line 246 "prog_util.m"
    else
#line 247 "prog_util.m"
      {
#line 247 "prog_util.m"
        MR_Word parse_tree__prog_util__TM_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 247 "prog_util.m"
        MR_Word parse_tree__prog_util__TMs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 247 "prog_util.m"
        MR_Word parse_tree__prog_util__T_10;
#line 247 "prog_util.m"
        MR_Word parse_tree__prog_util__Ts_11;
#line 247 "prog_util.m"
        MR_Word parse_tree__prog_util__M_12;
#line 247 "prog_util.m"
        MR_Word parse_tree__prog_util__Ms_13;
#line 247 "prog_util.m"
        MR_Word parse_tree__prog_util__Result1_15;

#line 258 "prog_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_util__TM_7)) == (MR_mktag((MR_Integer) 1))))
#line 259 "prog_util.m"
          {
#line 259 "prog_util.m"
            parse_tree__prog_util__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__TM_7, (MR_Integer) 0)));
#line 259 "prog_util.m"
            parse_tree__prog_util__M_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__TM_7, (MR_Integer) 1)));
#line 259 "prog_util.m"
            parse_tree__prog_util__Result1_15 = parse_tree__prog_util__HeadVar__2_2;
#line 259 "prog_util.m"
          }
#line 258 "prog_util.m"
        else
#line 258 "prog_util.m"
          {
#line 258 "prog_util.m"
            parse_tree__prog_util__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__TM_7, (MR_Integer) 0)));
#line 258 "prog_util.m"
            parse_tree__prog_util__M_12 = (MR_Word) &parse_tree__prog_util_scalar_common_1[7];
#line 258 "prog_util.m"
            parse_tree__prog_util__Result1_15 = (MR_Integer) 0;
#line 258 "prog_util.m"
          }
#line 249 "prog_util.m"
        {
#line 249 "prog_util.m"
          parse_tree__prog_util__split_types_and_modes_2_5_p_0(parse_tree__prog_util__TMs_8, parse_tree__prog_util__Result1_15, &parse_tree__prog_util__Ts_11, &parse_tree__prog_util__Ms_13, parse_tree__prog_util__Result_5);
        }
#line 247 "prog_util.m"
        {
#line 247 "prog_util.m"
          MR_Word base;
#line 247 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "prog_util.m"
          *parse_tree__prog_util__HeadVar__3_3 = base;
#line 247 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__T_10));
#line 247 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Ts_11));
#line 247 "prog_util.m"
        }
#line 247 "prog_util.m"
        {
#line 247 "prog_util.m"
          MR_Word base;
#line 247 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "prog_util.m"
          *parse_tree__prog_util__HeadVar__4_4 = base;
#line 247 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__M_12));
#line 247 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Ms_13));
#line 247 "prog_util.m"
        }
#line 247 "prog_util.m"
      }
#line 246 "prog_util.m"
  }
#line 242 "prog_util.m"
}

#line 186 "prog_util.m"
MR_Word MR_CALL 
parse_tree__prog_util__goal_list_to_conj_2_f_0(
#line 186 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_1,
#line 186 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2)
#line 186 "prog_util.m"
{
#line 776 "prog_util.m"
  {
#line 776 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 776 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__3_3;

#line 776 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 776 "prog_util.m"
      {
#line 776 "prog_util.m"
        {
#line 776 "prog_util.m"
          parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 776 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 776 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_util__Context_1));
#line 776 "prog_util.m"
        }
#line 776 "prog_util.m"
      }
#line 776 "prog_util.m"
    else
#line 777 "prog_util.m"
      {
#line 777 "prog_util.m"
        MR_Word parse_tree__prog_util__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
#line 777 "prog_util.m"
        MR_Word parse_tree__prog_util__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));

#line 777 "prog_util.m"
        {
#line 777 "prog_util.m"
          return parse_tree__prog_util__HeadVar__3_3 = parse_tree__prog_util__goal_list_to_conj_2_3_f_0(parse_tree__prog_util__Context_1, parse_tree__prog_util__Goal_7, parse_tree__prog_util__Goals_8);
        }
#line 777 "prog_util.m"
      }
#line 776 "prog_util.m"
    return parse_tree__prog_util__HeadVar__3_3;
#line 776 "prog_util.m"
  }
#line 186 "prog_util.m"
}

#line 179 "prog_util.m"
MR_Word MR_CALL 
parse_tree__prog_util__sym_name_and_args_to_term_3_f_0(
#line 179 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_15,
#line 179 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 179 "prog_util.m"
  MR_Word parse_tree__prog_util__Xs_2,
#line 179 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_3)
#line 179 "prog_util.m"
{
#line 747 "prog_util.m"
  {
#line 747 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 747 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__4_4;

#line 747 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 750 "prog_util.m"
      {
#line 750 "prog_util.m"
        MR_Word parse_tree__prog_util__ModuleNames_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 750 "prog_util.m"
        MR_String parse_tree__prog_util__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 750 "prog_util.m"
        MR_Word parse_tree__prog_util__V_13_13;
#line 750 "prog_util.m"
        MR_Word parse_tree__prog_util__V_14_14;

#line 752 "prog_util.m"
        {
#line 752 "prog_util.m"
          parse_tree__prog_util__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 752 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_14_14, 0) = ((MR_Box) (parse_tree__prog_util__Name_10));
#line 752 "prog_util.m"
        }
#line 751 "prog_util.m"
        {
#line 751 "prog_util.m"
          parse_tree__prog_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 751 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 0) = ((MR_Box) (parse_tree__prog_util__V_14_14));
#line 751 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_util__Xs_2));
#line 751 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 751 "prog_util.m"
        }
#line 750 "prog_util.m"
        {
#line 750 "prog_util.m"
          return parse_tree__prog_util__HeadVar__4_4 = parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(parse_tree__prog_util__ModuleNames_9, parse_tree__prog_util__V_13_13, parse_tree__prog_util__Context_3);
        }
#line 750 "prog_util.m"
      }
#line 747 "prog_util.m"
    else
#line 747 "prog_util.m"
      {
#line 747 "prog_util.m"
        MR_String parse_tree__prog_util__Name_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 747 "prog_util.m"
        MR_Word parse_tree__prog_util__V_8_8;

#line 748 "prog_util.m"
        {
#line 748 "prog_util.m"
          parse_tree__prog_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 748 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_8_8, 0) = ((MR_Box) (parse_tree__prog_util__Name_5));
#line 748 "prog_util.m"
        }
#line 747 "prog_util.m"
        {
#line 747 "prog_util.m"
          parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 747 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_util__V_8_8));
#line 747 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 1) = ((MR_Box) (parse_tree__prog_util__Xs_2));
#line 747 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 747 "prog_util.m"
        }
#line 747 "prog_util.m"
      }
#line 747 "prog_util.m"
    return parse_tree__prog_util__HeadVar__4_4;
#line 747 "prog_util.m"
  }
#line 179 "prog_util.m"
}

#line 170 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__get_new_tvars_8_p_0(
#line 170 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 170 "prog_util.m"
  MR_Word parse_tree__prog_util__VarSet_2,
#line 170 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3,
#line 170 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_TVarSet_4,
#line 170 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5,
#line 170 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_6,
#line 170 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7,
#line 170 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_8)
#line 170 "prog_util.m"
{
#line 724 "prog_util.m"
  while (MR_TRUE)
#line 724 "prog_util.m"
    {
#line 724 "prog_util.m"
      /* tailcall optimized into a loop */
#line 724 "prog_util.m"
      {
#line 724 "prog_util.m"
        MR_bool parse_tree__prog_util__succeeded;

#line 724 "prog_util.m"
        if ((parse_tree__prog_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 724 "prog_util.m"
          {
#line 724 "prog_util.m"
            *parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_8 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7;
#line 724 "prog_util.m"
            *parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_6 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
#line 724 "prog_util.m"
            *parse_tree__prog_util__STATE_VARIABLE_TVarSet_4 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3;
#line 724 "prog_util.m"
          }
#line 724 "prog_util.m"
        else
#line 725 "prog_util.m"
          {
#line 725 "prog_util.m"
            MR_Word parse_tree__prog_util__TVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 725 "prog_util.m"
            MR_Word parse_tree__prog_util__TVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 725 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34;
#line 725 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36;
#line 725 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37;
#line 726 "prog_util.m"
            MR_Word parse_tree__prog_util__TypeInfo_45_45 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];

#line 726 "prog_util.m"
            {
#line 726 "prog_util.m"
              parse_tree__prog_util__succeeded = mercury__map__contains_2_p_0(parse_tree__prog_util__TypeInfo_45_45, parse_tree__prog_util__TypeInfo_45_45, parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, ((MR_Box) (parse_tree__prog_util__TVar_19)));
            }
#line 728 "prog_util.m"
            if (parse_tree__prog_util__succeeded)
#line 727 "prog_util.m"
              {
#line 727 "prog_util.m"
                parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7;
#line 727 "prog_util.m"
                parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
#line 727 "prog_util.m"
                parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3;
#line 727 "prog_util.m"
              }
#line 728 "prog_util.m"
            else
#line 738 "prog_util.m"
              {
#line 738 "prog_util.m"
                MR_String parse_tree__prog_util__TVarName_25;

#line 729 "prog_util.m"
                {
#line 729 "prog_util.m"
                  parse_tree__prog_util__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_util__VarSet_2, parse_tree__prog_util__TVar_19, &parse_tree__prog_util__TVarName_25);
                }
#line 738 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 732 "prog_util.m"
                  {
#line 732 "prog_util.m"
                    MR_Word parse_tree__prog_util__TVarSetVar_26;
#line 730 "prog_util.m"
                    MR_Box parse_tree__prog_util__conv0_TVarSetVar_26;

#line 730 "prog_util.m"
                    {
#line 730 "prog_util.m"
                      parse_tree__prog_util__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_util_scalar_common_1[0], parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5, ((MR_Box) (parse_tree__prog_util__TVarName_25)), &parse_tree__prog_util__conv0_TVarSetVar_26);
                    }
#line 730 "prog_util.m"
                    if (parse_tree__prog_util__succeeded)
#line 730 "prog_util.m"
                      {
#line 730 "prog_util.m"
                        parse_tree__prog_util__TVarSetVar_26 = ((MR_Word) parse_tree__prog_util__conv0_TVarSetVar_26);
#line 730 "prog_util.m"
                        parse_tree__prog_util__succeeded = MR_TRUE;
#line 730 "prog_util.m"
                      }
#line 732 "prog_util.m"
                    if (parse_tree__prog_util__succeeded)
#line 731 "prog_util.m"
                      {
#line 731 "prog_util.m"
                        MR_Word parse_tree__prog_util__TypeInfo_49_49 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];

#line 731 "prog_util.m"
                        {
#line 731 "prog_util.m"
                          mercury__map__det_insert_4_p_0(parse_tree__prog_util__TypeInfo_49_49, parse_tree__prog_util__TypeInfo_49_49, ((MR_Box) (parse_tree__prog_util__TVar_19)), ((MR_Box) (parse_tree__prog_util__TVarSetVar_26)), parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, &parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34);
                        }
#line 731 "prog_util.m"
                        parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
#line 731 "prog_util.m"
                        parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3;
#line 731 "prog_util.m"
                      }
#line 732 "prog_util.m"
                    else
#line 733 "prog_util.m"
                      {
#line 733 "prog_util.m"
                        MR_Word parse_tree__prog_util__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 733 "prog_util.m"
                        MR_Word parse_tree__prog_util__TypeInfo_52_52;
#line 733 "prog_util.m"
                        MR_Word parse_tree__prog_util__NewTVar_27;
#line 733 "prog_util.m"
                        MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarSet_35_35;

#line 733 "prog_util.m"
                        {
#line 733 "prog_util.m"
                          mercury__varset__new_var_3_p_0(parse_tree__prog_util__TypeCtorInfo_50_50, &parse_tree__prog_util__NewTVar_27, parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3, &parse_tree__prog_util__STATE_VARIABLE_TVarSet_35_35);
                        }
#line 734 "prog_util.m"
                        {
#line 734 "prog_util.m"
                          mercury__varset__name_var_4_p_0(parse_tree__prog_util__TypeCtorInfo_50_50, parse_tree__prog_util__NewTVar_27, parse_tree__prog_util__TVarName_25, parse_tree__prog_util__STATE_VARIABLE_TVarSet_35_35, &parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36);
                        }
#line 5160 "parse_tree.prog_util.c"
                        parse_tree__prog_util__TypeInfo_52_52 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];
#line 735 "prog_util.m"
                        {
#line 735 "prog_util.m"
                          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_util__TypeInfo_52_52, ((MR_Box) (parse_tree__prog_util__TVarName_25)), ((MR_Box) (parse_tree__prog_util__NewTVar_27)), parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5, &parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37);
                        }
#line 736 "prog_util.m"
                        {
#line 736 "prog_util.m"
                          mercury__map__det_insert_4_p_0(parse_tree__prog_util__TypeInfo_52_52, parse_tree__prog_util__TypeInfo_52_52, ((MR_Box) (parse_tree__prog_util__TVar_19)), ((MR_Box) (parse_tree__prog_util__NewTVar_27)), parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, &parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34);
                        }
#line 733 "prog_util.m"
                      }
#line 732 "prog_util.m"
                  }
#line 738 "prog_util.m"
                else
#line 739 "prog_util.m"
                  {
#line 739 "prog_util.m"
                    MR_Word parse_tree__prog_util__TypeInfo_54_54;
#line 739 "prog_util.m"
                    MR_Word parse_tree__prog_util__NewTVar_44;

#line 739 "prog_util.m"
                    {
#line 739 "prog_util.m"
                      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &parse_tree__prog_util__NewTVar_44, parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3, &parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36);
                    }
#line 5190 "parse_tree.prog_util.c"
                    parse_tree__prog_util__TypeInfo_54_54 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];
#line 740 "prog_util.m"
                    {
#line 740 "prog_util.m"
                      mercury__map__det_insert_4_p_0(parse_tree__prog_util__TypeInfo_54_54, parse_tree__prog_util__TypeInfo_54_54, ((MR_Box) (parse_tree__prog_util__TVar_19)), ((MR_Box) (parse_tree__prog_util__NewTVar_44)), parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, &parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34);
                    }
#line 740 "prog_util.m"
                    parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
#line 739 "prog_util.m"
                  }
#line 738 "prog_util.m"
              }
#line 743 "prog_util.m"
            /* direct tailcall eliminated */
#line 743 "prog_util.m"
            {
#line 743 "prog_util.m"
              MR_Word parse_tree__prog_util__HeadVar__1__tmp_copy_1 = parse_tree__prog_util__TVars_20;
#line 743 "prog_util.m"
              MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarSet_0__tmp_copy_3 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36;
#line 743 "prog_util.m"
              MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0__tmp_copy_5 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37;
#line 743 "prog_util.m"
              MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0__tmp_copy_7 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34;

#line 743 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0__tmp_copy_7;
#line 743 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0__tmp_copy_5;
#line 743 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0__tmp_copy_3;
#line 743 "prog_util.m"
              parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__HeadVar__1__tmp_copy_1;
#line 743 "prog_util.m"
            }
#line 743 "prog_util.m"
            continue;
#line 725 "prog_util.m"
          }
#line 724 "prog_util.m"
      }
#line 724 "prog_util.m"
      break;
#line 724 "prog_util.m"
    }
#line 170 "prog_util.m"
}

#line 163 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__parse_rule_term_4_p_0(
#line 163 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_20,
#line 163 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_5,
#line 163 "prog_util.m"
  MR_Word parse_tree__prog_util__RuleTerm_6,
#line 163 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadTerm_7,
#line 163 "prog_util.m"
  MR_Word * parse_tree__prog_util__GoalTerm_8)
#line 163 "prog_util.m"
{
#line 719 "prog_util.m"
  {
#line 719 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__RuleTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 719 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadTerm0_9;
#line 719 "prog_util.m"
    MR_Word parse_tree__prog_util__GoalTerm0_10;
#line 716 "prog_util.m"
    MR_Word parse_tree__prog_util__V_12_12;
#line 716 "prog_util.m"
    MR_String parse_tree__prog_util__V_13_13;
#line 716 "prog_util.m"
    MR_Word parse_tree__prog_util__V_14_14;
#line 716 "prog_util.m"
    MR_Word parse_tree__prog_util__V_15_15;
#line 716 "prog_util.m"
    MR_Word parse_tree__prog_util__V_16_16;
#line 716 "prog_util.m"
    MR_Word parse_tree__prog_util__V_11_11;

#line 716 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 716 "prog_util.m"
      {
#line 716 "prog_util.m"
        parse_tree__prog_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__RuleTerm_6, (MR_Integer) 0)));
#line 716 "prog_util.m"
        parse_tree__prog_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__RuleTerm_6, (MR_Integer) 1)));
#line 716 "prog_util.m"
        parse_tree__prog_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__RuleTerm_6, (MR_Integer) 2)));
#line 716 "prog_util.m"
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_12_12)) == (MR_mktag((MR_Integer) 0)));
#line 716 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 716 "prog_util.m"
          {
#line 716 "prog_util.m"
            parse_tree__prog_util__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_12_12, (MR_Integer) 0)));
#line 716 "prog_util.m"
            parse_tree__prog_util__succeeded = (strcmp(parse_tree__prog_util__V_13_13, (MR_String) ":-") == 0);
#line 716 "prog_util.m"
            if (parse_tree__prog_util__succeeded)
#line 716 "prog_util.m"
              {
#line 716 "prog_util.m"
                parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 716 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 716 "prog_util.m"
                  {
#line 716 "prog_util.m"
                    parse_tree__prog_util__HeadTerm0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_14_14, (MR_Integer) 0)));
#line 716 "prog_util.m"
                    parse_tree__prog_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_14_14, (MR_Integer) 1)));
#line 716 "prog_util.m"
                    parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 716 "prog_util.m"
                    if (parse_tree__prog_util__succeeded)
#line 716 "prog_util.m"
                      {
#line 716 "prog_util.m"
                        parse_tree__prog_util__GoalTerm0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_15_15, (MR_Integer) 0)));
#line 716 "prog_util.m"
                        parse_tree__prog_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_15_15, (MR_Integer) 1)));
#line 716 "prog_util.m"
                        parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 716 "prog_util.m"
                      }
#line 716 "prog_util.m"
                  }
#line 716 "prog_util.m"
              }
#line 716 "prog_util.m"
          }
#line 716 "prog_util.m"
      }
#line 719 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 717 "prog_util.m"
      {
#line 717 "prog_util.m"
        *parse_tree__prog_util__HeadTerm_7 = parse_tree__prog_util__HeadTerm0_9;
#line 718 "prog_util.m"
        *parse_tree__prog_util__GoalTerm_8 = parse_tree__prog_util__GoalTerm0_10;
#line 717 "prog_util.m"
      }
#line 719 "prog_util.m"
    else
#line 720 "prog_util.m"
      {
#line 720 "prog_util.m"
        *parse_tree__prog_util__HeadTerm_7 = parse_tree__prog_util__RuleTerm_6;
#line 721 "prog_util.m"
        {
#line 721 "prog_util.m"
          MR_Word base;
#line 721 "prog_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 721 "prog_util.m"
          *parse_tree__prog_util__GoalTerm_8 = base;
#line 721 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[3]));
#line 721 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 721 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_5));
#line 721 "prog_util.m"
        }
#line 720 "prog_util.m"
      }
#line 719 "prog_util.m"
  }
#line 163 "prog_util.m"
}

#line 158 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__get_state_args_det_4_p_0(
#line 158 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_14,
#line 158 "prog_util.m"
  MR_Word parse_tree__prog_util__Args0_5,
#line 158 "prog_util.m"
  MR_Word * parse_tree__prog_util__Args_6,
#line 158 "prog_util.m"
  MR_Box * parse_tree__prog_util__State0_7,
#line 158 "prog_util.m"
  MR_Box * parse_tree__prog_util__State_8)
#line 158 "prog_util.m"
{
#line 709 "prog_util.m"
  {
#line 709 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 709 "prog_util.m"
    MR_Word parse_tree__prog_util__Args1_9;
#line 709 "prog_util.m"
    MR_Box parse_tree__prog_util__State0A_10;
#line 709 "prog_util.m"
    MR_Box parse_tree__prog_util__StateA_11;
#line 699 "prog_util.m"
    MR_Word parse_tree__prog_util__RevArgs0_19;
#line 699 "prog_util.m"
    MR_Word parse_tree__prog_util__RevArgs_20;
#line 699 "prog_util.m"
    MR_Word parse_tree__prog_util__V_21_21;

#line 700 "prog_util.m"
    {
#line 700 "prog_util.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_14, parse_tree__prog_util__Args0_5, &parse_tree__prog_util__RevArgs0_19);
    }
#line 701 "prog_util.m"
    parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__RevArgs0_19)) == (MR_mktag((MR_Integer) 1)));
#line 701 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 701 "prog_util.m"
      {
#line 701 "prog_util.m"
        parse_tree__prog_util__StateA_11 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_19, (MR_Integer) 0));
#line 701 "prog_util.m"
        parse_tree__prog_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_19, (MR_Integer) 1)));
#line 701 "prog_util.m"
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 701 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 701 "prog_util.m"
          {
#line 701 "prog_util.m"
            parse_tree__prog_util__State0A_10 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_21_21, (MR_Integer) 0));
#line 701 "prog_util.m"
            parse_tree__prog_util__RevArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_21_21, (MR_Integer) 1)));
#line 702 "prog_util.m"
            {
#line 702 "prog_util.m"
              mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_14, parse_tree__prog_util__RevArgs_20, &parse_tree__prog_util__Args1_9);
            }
#line 702 "prog_util.m"
            parse_tree__prog_util__succeeded = MR_TRUE;
#line 701 "prog_util.m"
          }
#line 701 "prog_util.m"
      }
#line 709 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 706 "prog_util.m"
      {
#line 706 "prog_util.m"
        *parse_tree__prog_util__Args_6 = parse_tree__prog_util__Args1_9;
#line 707 "prog_util.m"
        *parse_tree__prog_util__State0_7 = parse_tree__prog_util__State0A_10;
#line 708 "prog_util.m"
        *parse_tree__prog_util__State_8 = parse_tree__prog_util__StateA_11;
#line 706 "prog_util.m"
      }
#line 709 "prog_util.m"
    else
#line 710 "prog_util.m"
      {
#line 710 "prog_util.m"
        {
#line 710 "prog_util.m"
          mercury__require__unexpected_2_p_0((MR_String) "parse_tree.prog_util", (MR_String) "predicate \140parse_tree.prog_util.get_state_args_det\'/4");
#line 710 "prog_util.m"
          return;
        }
#line 710 "prog_util.m"
      }
#line 709 "prog_util.m"
  }
#line 158 "prog_util.m"
}

#line 153 "prog_util.m"
MR_bool MR_CALL 
parse_tree__prog_util__get_state_args_4_p_0(
#line 153 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_12,
#line 153 "prog_util.m"
  MR_Word parse_tree__prog_util__Args0_5,
#line 153 "prog_util.m"
  MR_Word * parse_tree__prog_util__Args_6,
#line 153 "prog_util.m"
  MR_Box * parse_tree__prog_util__State0_7,
#line 153 "prog_util.m"
  MR_Box * parse_tree__prog_util__State_8)
#line 153 "prog_util.m"
{
#line 699 "prog_util.m"
  {
#line 699 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 699 "prog_util.m"
    MR_Word parse_tree__prog_util__RevArgs0_9;
#line 699 "prog_util.m"
    MR_Word parse_tree__prog_util__RevArgs_10;
#line 699 "prog_util.m"
    MR_Word parse_tree__prog_util__V_11_11;

#line 700 "prog_util.m"
    {
#line 700 "prog_util.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_12, parse_tree__prog_util__Args0_5, &parse_tree__prog_util__RevArgs0_9);
    }
#line 701 "prog_util.m"
    parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__RevArgs0_9)) == (MR_mktag((MR_Integer) 1)));
#line 701 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 701 "prog_util.m"
      {
#line 701 "prog_util.m"
        *parse_tree__prog_util__State_8 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_9, (MR_Integer) 0));
#line 701 "prog_util.m"
        parse_tree__prog_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_9, (MR_Integer) 1)));
#line 701 "prog_util.m"
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 701 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 701 "prog_util.m"
          {
#line 701 "prog_util.m"
            *parse_tree__prog_util__State0_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, (MR_Integer) 0));
#line 701 "prog_util.m"
            parse_tree__prog_util__RevArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, (MR_Integer) 1)));
#line 702 "prog_util.m"
            {
#line 702 "prog_util.m"
              mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_12, parse_tree__prog_util__RevArgs_10, parse_tree__prog_util__Args_6);
            }
#line 702 "prog_util.m"
            parse_tree__prog_util__succeeded = MR_TRUE;
#line 701 "prog_util.m"
          }
#line 701 "prog_util.m"
      }
#line 699 "prog_util.m"
    return parse_tree__prog_util__succeeded;
#line 699 "prog_util.m"
  }
#line 153 "prog_util.m"
}

#line 148 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__pred_args_to_func_args_3_p_0(
#line 148 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_17,
#line 148 "prog_util.m"
  MR_Word parse_tree__prog_util__PredArgs_4,
#line 148 "prog_util.m"
  MR_Word * parse_tree__prog_util__FuncArgs_5,
#line 148 "prog_util.m"
  MR_Box * parse_tree__prog_util__FuncReturn_6)
#line 148 "prog_util.m"
{
#line 689 "prog_util.m"
  {
#line 689 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 689 "prog_util.m"
    MR_Integer parse_tree__prog_util__NumPredArgs_7;
#line 689 "prog_util.m"
    MR_Integer parse_tree__prog_util__NumFuncArgs_8;
#line 695 "prog_util.m"
    MR_Word parse_tree__prog_util__FuncArgs0_9;
#line 695 "prog_util.m"
    MR_Box parse_tree__prog_util__FuncReturn0_10;
#line 692 "prog_util.m"
    MR_Word parse_tree__prog_util__V_12_12;
#line 692 "prog_util.m"
    MR_Word parse_tree__prog_util__V_18_18;

#line 690 "prog_util.m"
    {
#line 690 "prog_util.m"
      mercury__list__length_2_p_0(parse_tree__prog_util__TypeInfo_for_T_17, parse_tree__prog_util__PredArgs_4, &parse_tree__prog_util__NumPredArgs_7);
    }
#line 691 "prog_util.m"
    parse_tree__prog_util__NumFuncArgs_8 = (parse_tree__prog_util__NumPredArgs_7 - (MR_Integer) 1);
#line 692 "prog_util.m"
    {
#line 692 "prog_util.m"
      parse_tree__prog_util__succeeded = mercury__list__split_list_4_p_0(parse_tree__prog_util__TypeInfo_for_T_17, parse_tree__prog_util__NumFuncArgs_8, parse_tree__prog_util__PredArgs_4, &parse_tree__prog_util__FuncArgs0_9, &parse_tree__prog_util__V_12_12);
    }
#line 692 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 692 "prog_util.m"
      {
#line 692 "prog_util.m"
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 692 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 692 "prog_util.m"
          {
#line 692 "prog_util.m"
            parse_tree__prog_util__FuncReturn0_10 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_12_12, (MR_Integer) 0));
#line 692 "prog_util.m"
            parse_tree__prog_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_12_12, (MR_Integer) 1)));
#line 692 "prog_util.m"
            {
#line 692 "prog_util.m"
              parse_tree__prog_util__succeeded = mercury__list____Unify____list_1_0(parse_tree__prog_util__TypeInfo_for_T_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_util__V_18_18);
            }
#line 692 "prog_util.m"
          }
#line 692 "prog_util.m"
      }
#line 695 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 693 "prog_util.m"
      {
#line 693 "prog_util.m"
        *parse_tree__prog_util__FuncArgs_5 = parse_tree__prog_util__FuncArgs0_9;
#line 694 "prog_util.m"
        *parse_tree__prog_util__FuncReturn_6 = parse_tree__prog_util__FuncReturn0_10;
#line 693 "prog_util.m"
      }
#line 695 "prog_util.m"
    else
#line 696 "prog_util.m"
      {
#line 696 "prog_util.m"
        {
#line 696 "prog_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "predicate \140parse_tree.prog_util.pred_args_to_func_args\'/3", (MR_String) "function missing return value\?");
#line 696 "prog_util.m"
          return;
        }
#line 696 "prog_util.m"
      }
#line 689 "prog_util.m"
  }
#line 148 "prog_util.m"
}

#line 141 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__make_n_fresh_vars_5_p_0(
#line 141 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_12,
#line 141 "prog_util.m"
  MR_String parse_tree__prog_util__BaseName_6,
#line 141 "prog_util.m"
  MR_Integer parse_tree__prog_util__N_7,
#line 141 "prog_util.m"
  MR_Word * parse_tree__prog_util__Vars_8,
#line 141 "prog_util.m"
  MR_Word parse_tree__prog_util__VarSet0_9,
#line 141 "prog_util.m"
  MR_Word * parse_tree__prog_util__VarSet_10)
#line 141 "prog_util.m"
{
#line 670 "prog_util.m"
  {
#line 670 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 671 "prog_util.m"
    {
#line 671 "prog_util.m"
      parse_tree__prog_util__make_n_fresh_vars_2_6_p_0(parse_tree__prog_util__TypeInfo_for_T_12, parse_tree__prog_util__BaseName_6, (MR_Integer) 0, parse_tree__prog_util__N_7, parse_tree__prog_util__Vars_8, parse_tree__prog_util__VarSet0_9, parse_tree__prog_util__VarSet_10);
#line 671 "prog_util.m"
      return;
    }
#line 670 "prog_util.m"
  }
#line 141 "prog_util.m"
}

#line 131 "prog_util.m"
MR_Word MR_CALL 
parse_tree__prog_util__make_functor_cons_id_2_f_0(
#line 131 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 131 "prog_util.m"
  MR_Integer parse_tree__prog_util__Arity_2)
#line 131 "prog_util.m"
{
#line 660 "prog_util.m"
  {
#line 660 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 660 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__3_3;

#line 660 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 660 "prog_util.m"
      {
#line 660 "prog_util.m"
        MR_String parse_tree__prog_util__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 660 "prog_util.m"
        MR_Word parse_tree__prog_util__V_6_6;
#line 660 "prog_util.m"
        MR_Word parse_tree__prog_util__V_7_7;

#line 661 "prog_util.m"
        {
#line 661 "prog_util.m"
          parse_tree__prog_util__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 661 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_6_6, 0) = ((MR_Box) (parse_tree__prog_util__Name_4));
#line 661 "prog_util.m"
        }
#line 661 "prog_util.m"
        {
#line 661 "prog_util.m"
          parse_tree__prog_util__V_7_7 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
        }
#line 660 "prog_util.m"
        {
#line 660 "prog_util.m"
          parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 660 "prog_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 660 "prog_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_util__V_6_6));
#line 660 "prog_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 2) = ((MR_Box) (parse_tree__prog_util__Arity_2));
#line 660 "prog_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 3) = ((MR_Box) (parse_tree__prog_util__V_7_7));
#line 660 "prog_util.m"
        }
#line 660 "prog_util.m"
      }
#line 660 "prog_util.m"
    else
#line 660 "prog_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 662 "prog_util.m"
        {
#line 662 "prog_util.m"
          MR_Integer parse_tree__prog_util__Int_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));

#line 662 "prog_util.m"
          {
#line 662 "prog_util.m"
            parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "prog_util.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 662 "prog_util.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_util__Int_8));
#line 662 "prog_util.m"
          }
#line 662 "prog_util.m"
        }
#line 660 "prog_util.m"
      else
#line 660 "prog_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 663 "prog_util.m"
          {
#line 663 "prog_util.m"
            MR_String parse_tree__prog_util__String_10 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));

#line 663 "prog_util.m"
            {
#line 663 "prog_util.m"
              parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "prog_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 663 "prog_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_util__String_10));
#line 663 "prog_util.m"
            }
#line 663 "prog_util.m"
          }
#line 660 "prog_util.m"
        else
#line 660 "prog_util.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 664 "prog_util.m"
            {
#line 664 "prog_util.m"
              MR_Float parse_tree__prog_util__Float_12 = MR_unbox_float((MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));

#line 664 "prog_util.m"
              {
#line 664 "prog_util.m"
                parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "prog_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 664 "prog_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 1) = MR_box_float(parse_tree__prog_util__Float_12);
#line 664 "prog_util.m"
              }
#line 664 "prog_util.m"
            }
#line 660 "prog_util.m"
          else
#line 665 "prog_util.m"
            {
#line 665 "prog_util.m"
              MR_String parse_tree__prog_util__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));

#line 665 "prog_util.m"
              {
#line 665 "prog_util.m"
                parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "prog_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 665 "prog_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_util__Name_14));
#line 665 "prog_util.m"
              }
#line 665 "prog_util.m"
            }
#line 660 "prog_util.m"
    return parse_tree__prog_util__HeadVar__3_3;
#line 660 "prog_util.m"
  }
#line 131 "prog_util.m"
}

#line 126 "prog_util.m"
MR_Word MR_CALL 
parse_tree__prog_util__cons_id_maybe_arity_1_f_0(
#line 126 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1)
#line 126 "prog_util.m"
{
#line 640 "prog_util.m"
  while (MR_TRUE)
#line 640 "prog_util.m"
    {
#line 640 "prog_util.m"
      /* tailcall optimized into a loop */
#line 640 "prog_util.m"
      {
#line 640 "prog_util.m"
        MR_bool parse_tree__prog_util__succeeded;
#line 640 "prog_util.m"
        MR_Word parse_tree__prog_util__HeadVar__2_2;

#line 640 "prog_util.m"
        if ((parse_tree__prog_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 651 "prog_util.m"
          parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 640 "prog_util.m"
        else
#line 640 "prog_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 656 "prog_util.m"
            parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 640 "prog_util.m"
          else
#line 640 "prog_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 650 "prog_util.m"
              parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 640 "prog_util.m"
            else
#line 640 "prog_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 649 "prog_util.m"
                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 640 "prog_util.m"
              else
#line 640 "prog_util.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 644 "prog_util.m"
                  {
#line 644 "prog_util.m"
                    parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[2]);
#line 644 "prog_util.m"
                  }
#line 640 "prog_util.m"
                else
#line 640 "prog_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 647 "prog_util.m"
                    parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 640 "prog_util.m"
                  else
#line 640 "prog_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 640 "prog_util.m"
                      {
#line 640 "prog_util.m"
                        MR_Integer parse_tree__prog_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 2)));
#line 640 "prog_util.m"
                        MR_Word parse_tree__prog_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 640 "prog_util.m"
                        MR_Word parse_tree__prog_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 3)));

#line 640 "prog_util.m"
                        {
#line 640 "prog_util.m"
                          parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 640 "prog_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__prog_util__Arity_4));
#line 640 "prog_util.m"
                        }
#line 640 "prog_util.m"
                      }
#line 640 "prog_util.m"
                    else
#line 640 "prog_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 657 "prog_util.m"
                        parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 640 "prog_util.m"
                      else
#line 640 "prog_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 643 "prog_util.m"
                          {
#line 643 "prog_util.m"
                            parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[2]);
#line 643 "prog_util.m"
                          }
#line 640 "prog_util.m"
                        else
#line 640 "prog_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 654 "prog_util.m"
                            {
#line 654 "prog_util.m"
                              MR_Word parse_tree__prog_util__ConsId_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 2)));
#line 654 "prog_util.m"
                              MR_Integer parse_tree__prog_util__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));

#line 654 "prog_util.m"
                              /* direct tailcall eliminated */
#line 654 "prog_util.m"
                              {
#line 654 "prog_util.m"
                                MR_Word parse_tree__prog_util__HeadVar__1__tmp_copy_1 = parse_tree__prog_util__ConsId_30;

#line 654 "prog_util.m"
                                parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__HeadVar__1__tmp_copy_1;
#line 654 "prog_util.m"
                              }
#line 654 "prog_util.m"
                              continue;
#line 654 "prog_util.m"
                            }
#line 640 "prog_util.m"
                          else
#line 640 "prog_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 646 "prog_util.m"
                              {
#line 646 "prog_util.m"
                                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[2]);
#line 646 "prog_util.m"
                              }
#line 640 "prog_util.m"
                            else
#line 640 "prog_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 642 "prog_util.m"
                                {
#line 642 "prog_util.m"
                                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[2]);
#line 642 "prog_util.m"
                                }
#line 640 "prog_util.m"
                              else
#line 640 "prog_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 645 "prog_util.m"
                                  {
#line 645 "prog_util.m"
                                    parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[2]);
#line 645 "prog_util.m"
                                  }
#line 640 "prog_util.m"
                                else
#line 640 "prog_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 658 "prog_util.m"
                                    parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 640 "prog_util.m"
                                  else
#line 640 "prog_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 641 "prog_util.m"
                                      {
#line 641 "prog_util.m"
                                        MR_Integer parse_tree__prog_util__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));

#line 641 "prog_util.m"
                                        {
#line 641 "prog_util.m"
                                          parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 641 "prog_util.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__prog_util__Arity_6));
#line 641 "prog_util.m"
                                        }
#line 641 "prog_util.m"
                                      }
#line 640 "prog_util.m"
                                    else
#line 640 "prog_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 648 "prog_util.m"
                                        parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 640 "prog_util.m"
                                      else
#line 640 "prog_util.m"
                                        if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 652 "prog_util.m"
                                          parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 640 "prog_util.m"
                                        else
#line 653 "prog_util.m"
                                          parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 640 "prog_util.m"
        return parse_tree__prog_util__HeadVar__2_2;
#line 640 "prog_util.m"
      }
#line 640 "prog_util.m"
      break;
#line 640 "prog_util.m"
    }
#line 126 "prog_util.m"
}

#line 121 "prog_util.m"
MR_Integer MR_CALL 
parse_tree__prog_util__cons_id_arity_1_f_0(
#line 121 "prog_util.m"
  MR_Word parse_tree__prog_util__ConsId_3)
#line 121 "prog_util.m"
{
#line 611 "prog_util.m"
  while (MR_TRUE)
#line 611 "prog_util.m"
    {
#line 611 "prog_util.m"
      /* tailcall optimized into a loop */
#line 611 "prog_util.m"
      {
#line 611 "prog_util.m"
        MR_bool parse_tree__prog_util__succeeded;
#line 611 "prog_util.m"
        MR_Integer parse_tree__prog_util__Arity_4;

#line 611 "prog_util.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 611 "prog_util.m"
          {
#line 611 "prog_util.m"
            MR_Word parse_tree__prog_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 1)));
#line 611 "prog_util.m"
            MR_Word parse_tree__prog_util__V_6_6;

#line 611 "prog_util.m"
            parse_tree__prog_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 2)));
#line 611 "prog_util.m"
            parse_tree__prog_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 3)));
#line 611 "prog_util.m"
          }
#line 611 "prog_util.m"
        else
#line 611 "prog_util.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 615 "prog_util.m"
            {
#line 615 "prog_util.m"
              MR_Word parse_tree__prog_util__SubConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 2)));
#line 615 "prog_util.m"
              MR_Integer parse_tree__prog_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 1)));

#line 616 "prog_util.m"
              /* direct tailcall eliminated */
#line 616 "prog_util.m"
              {
#line 616 "prog_util.m"
                MR_Word parse_tree__prog_util__ConsId__tmp_copy_3 = parse_tree__prog_util__SubConsId_8;

#line 616 "prog_util.m"
                parse_tree__prog_util__ConsId_3 = parse_tree__prog_util__ConsId__tmp_copy_3;
#line 616 "prog_util.m"
              }
#line 616 "prog_util.m"
              continue;
#line 615 "prog_util.m"
            }
#line 611 "prog_util.m"
          else
#line 611 "prog_util.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 613 "prog_util.m"
              parse_tree__prog_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 1)));
#line 611 "prog_util.m"
            else
#line 611 "prog_util.m"
              if (((((((((((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 7)))) || (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 6)))))) || (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 9)))))) || (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 5)))))) || (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 8))))))
#line 624 "prog_util.m"
                parse_tree__prog_util__Arity_4 = (MR_Integer) 0;
#line 611 "prog_util.m"
              else
#line 636 "prog_util.m"
                {
#line 637 "prog_util.m"
                  {
#line 637 "prog_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "function \140parse_tree.prog_util.cons_id_arity\'/1", (MR_String) "unexpected cons_id");
                  }
#line 636 "prog_util.m"
                }
#line 611 "prog_util.m"
        return parse_tree__prog_util__Arity_4;
#line 611 "prog_util.m"
      }
#line 611 "prog_util.m"
      break;
#line 611 "prog_util.m"
    }
#line 121 "prog_util.m"
}

#line 115 "prog_util.m"
MR_bool MR_CALL 
parse_tree__prog_util__cons_id_and_args_to_term_3_p_0(
#line 115 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_34,
#line 115 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 115 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 115 "prog_util.m"
  MR_Word * parse_tree__prog_util__Term_3)
#line 115 "prog_util.m"
{
#line 591 "prog_util.m"
  {
#line 591 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 591 "prog_util.m"
    if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 597 "prog_util.m"
      {
#line 597 "prog_util.m"
        MR_Char parse_tree__prog_util__Char_14;
#line 597 "prog_util.m"
        MR_Word parse_tree__prog_util__SymName_16;
#line 597 "prog_util.m"
        MR_String parse_tree__prog_util__V_17_17;
#line 597 "prog_util.m"
        MR_Word parse_tree__prog_util__V_18_18;
#line 597 "prog_util.m"
        MR_Word parse_tree__prog_util__Context_38;

#line 597 "prog_util.m"
        parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 597 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 597 "prog_util.m"
          {
#line 597 "prog_util.m"
            parse_tree__prog_util__Char_14 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 598 "prog_util.m"
            {
#line 598 "prog_util.m"
              parse_tree__prog_util__V_17_17 = mercury__string__from_char_1_f_0(parse_tree__prog_util__Char_14);
            }
#line 599 "prog_util.m"
            parse_tree__prog_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 598 "prog_util.m"
            {
#line 598 "prog_util.m"
              parse_tree__prog_util__SymName_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 598 "prog_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_util__SymName_16, 0) = ((MR_Box) (parse_tree__prog_util__V_17_17));
#line 598 "prog_util.m"
            }
#line 209 "prog_util.m"
            {
#line 209 "prog_util.m"
              mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_38);
            }
#line 210 "prog_util.m"
            {
#line 210 "prog_util.m"
              parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__prog_util__TypeInfo_for_T_34, parse_tree__prog_util__SymName_16, parse_tree__prog_util__V_18_18, parse_tree__prog_util__Context_38, parse_tree__prog_util__Term_3);
            }
#line 210 "prog_util.m"
            parse_tree__prog_util__succeeded = MR_TRUE;
#line 597 "prog_util.m"
          }
#line 597 "prog_util.m"
      }
#line 591 "prog_util.m"
    else
#line 591 "prog_util.m"
      if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 606 "prog_util.m"
        {
#line 606 "prog_util.m"
          MR_Word parse_tree__prog_util__SymName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 606 "prog_util.m"
          MR_Word parse_tree__prog_util__Context_42;
#line 606 "prog_util.m"
          MR_Integer parse_tree__prog_util___Arity_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 2)));
#line 606 "prog_util.m"
          MR_Word parse_tree__prog_util___TypeCtor_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 3)));

#line 209 "prog_util.m"
          {
#line 209 "prog_util.m"
            mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_42);
          }
#line 210 "prog_util.m"
          {
#line 210 "prog_util.m"
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__prog_util__TypeInfo_for_T_34, parse_tree__prog_util__SymName_29, parse_tree__prog_util__HeadVar__2_2, parse_tree__prog_util__Context_42, parse_tree__prog_util__Term_3);
          }
#line 606 "prog_util.m"
          parse_tree__prog_util__succeeded = MR_TRUE;
#line 606 "prog_util.m"
        }
#line 591 "prog_util.m"
      else
#line 591 "prog_util.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 594 "prog_util.m"
          {
#line 594 "prog_util.m"
            MR_Float parse_tree__prog_util__Float_9;
#line 594 "prog_util.m"
            MR_Word parse_tree__prog_util__Context_11;
#line 594 "prog_util.m"
            MR_Word parse_tree__prog_util__V_12_12;
#line 594 "prog_util.m"
            MR_Word parse_tree__prog_util__V_13_13;

#line 594 "prog_util.m"
            parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 594 "prog_util.m"
            if (parse_tree__prog_util__succeeded)
#line 594 "prog_util.m"
              {
#line 594 "prog_util.m"
                parse_tree__prog_util__Float_9 = MR_unbox_float((MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 595 "prog_util.m"
                {
#line 595 "prog_util.m"
                  mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_11);
                }
#line 596 "prog_util.m"
                parse_tree__prog_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 596 "prog_util.m"
                {
#line 596 "prog_util.m"
                  parse_tree__prog_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 596 "prog_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_util__V_12_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 596 "prog_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_util__V_12_12, 1) = MR_box_float(parse_tree__prog_util__Float_9);
#line 596 "prog_util.m"
                }
#line 596 "prog_util.m"
                {
#line 596 "prog_util.m"
                  MR_Word base;
#line 596 "prog_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 596 "prog_util.m"
                  *parse_tree__prog_util__Term_3 = base;
#line 596 "prog_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__V_12_12));
#line 596 "prog_util.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__V_13_13));
#line 596 "prog_util.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_11));
#line 596 "prog_util.m"
                }
#line 596 "prog_util.m"
                parse_tree__prog_util__succeeded = MR_TRUE;
#line 594 "prog_util.m"
              }
#line 594 "prog_util.m"
          }
#line 591 "prog_util.m"
        else
#line 591 "prog_util.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 591 "prog_util.m"
            {
#line 591 "prog_util.m"
              MR_Integer parse_tree__prog_util__Int_4;
#line 591 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_6;
#line 591 "prog_util.m"
              MR_Word parse_tree__prog_util__V_7_7;
#line 591 "prog_util.m"
              MR_Word parse_tree__prog_util__V_8_8;

#line 591 "prog_util.m"
              parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 591 "prog_util.m"
              if (parse_tree__prog_util__succeeded)
#line 591 "prog_util.m"
                {
#line 591 "prog_util.m"
                  parse_tree__prog_util__Int_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 592 "prog_util.m"
                  {
#line 592 "prog_util.m"
                    mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_6);
                  }
#line 593 "prog_util.m"
                  parse_tree__prog_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 593 "prog_util.m"
                  {
#line 593 "prog_util.m"
                    parse_tree__prog_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 593 "prog_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_7_7, 0) = ((MR_Box) (parse_tree__prog_util__Int_4));
#line 593 "prog_util.m"
                  }
#line 593 "prog_util.m"
                  {
#line 593 "prog_util.m"
                    MR_Word base;
#line 593 "prog_util.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 593 "prog_util.m"
                    *parse_tree__prog_util__Term_3 = base;
#line 593 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__V_7_7));
#line 593 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__V_8_8));
#line 593 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_6));
#line 593 "prog_util.m"
                  }
#line 593 "prog_util.m"
                  parse_tree__prog_util__succeeded = MR_TRUE;
#line 591 "prog_util.m"
                }
#line 591 "prog_util.m"
            }
#line 591 "prog_util.m"
          else
#line 591 "prog_util.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 600 "prog_util.m"
              {
#line 600 "prog_util.m"
                MR_String parse_tree__prog_util__String_19;
#line 600 "prog_util.m"
                MR_Word parse_tree__prog_util__Context_21;
#line 600 "prog_util.m"
                MR_Word parse_tree__prog_util__V_22_22;
#line 600 "prog_util.m"
                MR_Word parse_tree__prog_util__V_23_23;

#line 600 "prog_util.m"
                parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 600 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 600 "prog_util.m"
                  {
#line 600 "prog_util.m"
                    parse_tree__prog_util__String_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 601 "prog_util.m"
                    {
#line 601 "prog_util.m"
                      mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_21);
                    }
#line 602 "prog_util.m"
                    parse_tree__prog_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 602 "prog_util.m"
                    {
#line 602 "prog_util.m"
                      parse_tree__prog_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 602 "prog_util.m"
                      MR_hl_field(MR_mktag(2), parse_tree__prog_util__V_22_22, 0) = ((MR_Box) (parse_tree__prog_util__String_19));
#line 602 "prog_util.m"
                    }
#line 602 "prog_util.m"
                    {
#line 602 "prog_util.m"
                      MR_Word base;
#line 602 "prog_util.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 602 "prog_util.m"
                      *parse_tree__prog_util__Term_3 = base;
#line 602 "prog_util.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__V_22_22));
#line 602 "prog_util.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__V_23_23));
#line 602 "prog_util.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_21));
#line 602 "prog_util.m"
                    }
#line 602 "prog_util.m"
                    parse_tree__prog_util__succeeded = MR_TRUE;
#line 600 "prog_util.m"
                  }
#line 600 "prog_util.m"
              }
#line 591 "prog_util.m"
            else
#line 591 "prog_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 603 "prog_util.m"
                {
#line 603 "prog_util.m"
                  MR_Word parse_tree__prog_util__Context_46;

#line 209 "prog_util.m"
                  {
#line 209 "prog_util.m"
                    mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_46);
                  }
#line 210 "prog_util.m"
                  {
#line 210 "prog_util.m"
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__prog_util__TypeInfo_for_T_34, (MR_Word) &parse_tree__prog_util_scalar_common_3[1], parse_tree__prog_util__HeadVar__2_2, parse_tree__prog_util__Context_46, parse_tree__prog_util__Term_3);
                  }
#line 603 "prog_util.m"
                  parse_tree__prog_util__succeeded = MR_TRUE;
#line 603 "prog_util.m"
                }
#line 591 "prog_util.m"
              else
#line 591 "prog_util.m"
                parse_tree__prog_util__succeeded = MR_FALSE;
#line 591 "prog_util.m"
    return parse_tree__prog_util__succeeded;
#line 591 "prog_util.m"
  }
#line 115 "prog_util.m"
}

#line 105 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0(
#line 105 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 105 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 105 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3,
#line 105 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__4_4)
#line 105 "prog_util.m"
{
#line 266 "prog_util.m"
  {
#line 266 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 266 "prog_util.m"
    MR_Word parse_tree__prog_util__Goal0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)));
#line 266 "prog_util.m"
    MR_Word parse_tree__prog_util__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
#line 266 "prog_util.m"
    MR_Word parse_tree__prog_util__Goal_9;

#line 267 "prog_util.m"
    {
#line 267 "prog_util.m"
      parse_tree__prog_util__rename_in_goal_expr_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_7, &parse_tree__prog_util__Goal_9);
    }
#line 266 "prog_util.m"
    {
#line 266 "prog_util.m"
      MR_Word base;
#line 266 "prog_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 266 "prog_util.m"
      *parse_tree__prog_util__HeadVar__4_4 = base;
#line 266 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__Goal_9));
#line 266 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_8));
#line 266 "prog_util.m"
    }
#line 266 "prog_util.m"
  }
#line 105 "prog_util.m"
}

#line 98 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__split_type_and_mode_3_p_0(
#line 98 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 98 "prog_util.m"
  MR_Word * parse_tree__prog_util__T_2,
#line 98 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__3_3)
#line 98 "prog_util.m"
{
#line 261 "prog_util.m"
  {
#line 261 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 261 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 262 "prog_util.m"
      {
#line 262 "prog_util.m"
        MR_Word parse_tree__prog_util__M_6;

#line 262 "prog_util.m"
        *parse_tree__prog_util__T_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 262 "prog_util.m"
        parse_tree__prog_util__M_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 262 "prog_util.m"
        {
#line 262 "prog_util.m"
          MR_Word base;
#line 262 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 262 "prog_util.m"
          *parse_tree__prog_util__HeadVar__3_3 = base;
#line 262 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__M_6));
#line 262 "prog_util.m"
        }
#line 262 "prog_util.m"
      }
#line 261 "prog_util.m"
    else
#line 261 "prog_util.m"
      {
#line 261 "prog_util.m"
        *parse_tree__prog_util__T_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 261 "prog_util.m"
        *parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 261 "prog_util.m"
      }
#line 261 "prog_util.m"
  }
#line 98 "prog_util.m"
}

#line 95 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__split_types_and_modes_3_p_0(
#line 95 "prog_util.m"
  MR_Word parse_tree__prog_util__TypesAndModes_4,
#line 95 "prog_util.m"
  MR_Word * parse_tree__prog_util__Types_5,
#line 95 "prog_util.m"
  MR_Word * parse_tree__prog_util__MaybeModes_6)
#line 95 "prog_util.m"
{
#line 232 "prog_util.m"
  {
#line 232 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 232 "prog_util.m"
    MR_Word parse_tree__prog_util__Modes_7;
#line 232 "prog_util.m"
    MR_Word parse_tree__prog_util__Result_8;

#line 233 "prog_util.m"
    {
#line 233 "prog_util.m"
      parse_tree__prog_util__split_types_and_modes_2_5_p_0(parse_tree__prog_util__TypesAndModes_4, (MR_Integer) 1, parse_tree__prog_util__Types_5, &parse_tree__prog_util__Modes_7, &parse_tree__prog_util__Result_8);
    }
#line 237 "prog_util.m"
    if ((parse_tree__prog_util__Result_8 == (MR_Integer) 0))
#line 239 "prog_util.m"
      *parse_tree__prog_util__MaybeModes_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 237 "prog_util.m"
    else
#line 236 "prog_util.m"
      {
#line 236 "prog_util.m"
        MR_Word base;
#line 236 "prog_util.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 236 "prog_util.m"
        *parse_tree__prog_util__MaybeModes_6 = base;
#line 236 "prog_util.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Modes_7));
#line 236 "prog_util.m"
      }
#line 232 "prog_util.m"
  }
#line 95 "prog_util.m"
}

#line 70 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__make_pred_name_with_context_7_p_0(
#line 70 "prog_util.m"
  MR_Word parse_tree__prog_util__ModuleName_8,
#line 70 "prog_util.m"
  MR_String parse_tree__prog_util__Prefix_9,
#line 70 "prog_util.m"
  MR_Word parse_tree__prog_util__PredOrFunc_10,
#line 70 "prog_util.m"
  MR_String parse_tree__prog_util__PredName_11,
#line 70 "prog_util.m"
  MR_Integer parse_tree__prog_util__Line_12,
#line 70 "prog_util.m"
  MR_Integer parse_tree__prog_util__Counter_13,
#line 70 "prog_util.m"
  MR_Word * parse_tree__prog_util__SymName_14)
#line 70 "prog_util.m"
{
#line 520 "prog_util.m"
  {
#line 520 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 520 "prog_util.m"
    MR_Word parse_tree__prog_util__V_15_15;
#line 520 "prog_util.m"
    MR_Word parse_tree__prog_util__V_16_16;

#line 521 "prog_util.m"
    {
#line 521 "prog_util.m"
      parse_tree__prog_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 521 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_15_15, 0) = ((MR_Box) (parse_tree__prog_util__PredOrFunc_10));
#line 521 "prog_util.m"
    }
#line 521 "prog_util.m"
    {
#line 521 "prog_util.m"
      parse_tree__prog_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_util__Line_12));
#line 521 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_16_16, 1) = ((MR_Box) (parse_tree__prog_util__Counter_13));
#line 521 "prog_util.m"
    }
#line 521 "prog_util.m"
    {
#line 521 "prog_util.m"
      parse_tree__prog_util__make_pred_name_6_p_0(parse_tree__prog_util__ModuleName_8, parse_tree__prog_util__Prefix_9, parse_tree__prog_util__V_15_15, parse_tree__prog_util__PredName_11, parse_tree__prog_util__V_16_16, parse_tree__prog_util__SymName_14);
#line 521 "prog_util.m"
      return;
    }
#line 520 "prog_util.m"
  }
#line 70 "prog_util.m"
}

#line 61 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__make_pred_name_6_p_0(
#line 61 "prog_util.m"
  MR_Word parse_tree__prog_util__ModuleName_7,
#line 61 "prog_util.m"
  MR_String parse_tree__prog_util__Prefix_8,
#line 61 "prog_util.m"
  MR_Word parse_tree__prog_util__MaybePredOrFunc_9,
#line 61 "prog_util.m"
  MR_String parse_tree__prog_util__PredName_10,
#line 61 "prog_util.m"
  MR_Word parse_tree__prog_util__NewPredId_11,
#line 61 "prog_util.m"
  MR_Word * parse_tree__prog_util__SymName_12)
#line 61 "prog_util.m"
{
#line 525 "prog_util.m"
  {
#line 525 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 525 "prog_util.m"
    MR_String parse_tree__prog_util__PFS_14;
#line 525 "prog_util.m"
    MR_String parse_tree__prog_util__PredIdStr_17;
#line 525 "prog_util.m"
    MR_String parse_tree__prog_util__Name_32;
#line 525 "prog_util.m"
    MR_String parse_tree__prog_util__V_78_78;
#line 525 "prog_util.m"
    MR_String parse_tree__prog_util__V_79_79;
#line 525 "prog_util.m"
    MR_String parse_tree__prog_util__V_81_81;
#line 525 "prog_util.m"
    MR_String parse_tree__prog_util__V_82_82;
#line 525 "prog_util.m"
    MR_String parse_tree__prog_util__V_84_84;

#line 529 "prog_util.m"
    if ((parse_tree__prog_util__MaybePredOrFunc_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 531 "prog_util.m"
      parse_tree__prog_util__PFS_14 = (MR_String) "pred_or_func";
#line 529 "prog_util.m"
    else
#line 527 "prog_util.m"
      {
#line 527 "prog_util.m"
        MR_Word parse_tree__prog_util__PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybePredOrFunc_9, (MR_Integer) 0)));

#line 528 "prog_util.m"
        {
#line 528 "prog_util.m"
          parse_tree__prog_util__PFS_14 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(parse_tree__prog_util__PredOrFunc_13);
        }
#line 527 "prog_util.m"
      }
#line 536 "prog_util.m"
    if ((parse_tree__prog_util__NewPredId_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 560 "prog_util.m"
      parse_tree__prog_util__PredIdStr_17 = (MR_String) "";
#line 536 "prog_util.m"
    else
#line 536 "prog_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_util__NewPredId_11)) == (MR_mktag((MR_Integer) 1))))
#line 534 "prog_util.m"
        {
#line 534 "prog_util.m"
          MR_Integer parse_tree__prog_util__Line_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)));
#line 534 "prog_util.m"
          MR_Integer parse_tree__prog_util__Counter_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));
#line 534 "prog_util.m"
          MR_String parse_tree__prog_util__V_85_85;
#line 534 "prog_util.m"
          MR_String parse_tree__prog_util__V_87_87;
#line 534 "prog_util.m"
          MR_String parse_tree__prog_util__V_88_88;

#line 6713 "parse_tree.prog_util.c"
          {
#line 6715 "parse_tree.prog_util.c"
            parse_tree__prog_util__V_85_85 = mercury__string__int_to_string_1_f_0(parse_tree__prog_util__Counter_16);
          }
#line 6718 "parse_tree.prog_util.c"
          {
#line 6720 "parse_tree.prog_util.c"
            parse_tree__prog_util__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__V_85_85);
          }
#line 6723 "parse_tree.prog_util.c"
          {
#line 6725 "parse_tree.prog_util.c"
            parse_tree__prog_util__V_88_88 = mercury__string__int_to_string_1_f_0(parse_tree__prog_util__Line_15);
          }
#line 6728 "parse_tree.prog_util.c"
          {
#line 6730 "parse_tree.prog_util.c"
            parse_tree__prog_util__PredIdStr_17 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__V_88_88, parse_tree__prog_util__V_87_87);
          }
#line 534 "prog_util.m"
        }
#line 536 "prog_util.m"
      else
#line 536 "prog_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_util__NewPredId_11)) == (MR_mktag((MR_Integer) 2))))
#line 537 "prog_util.m"
          {
#line 537 "prog_util.m"
            MR_Word parse_tree__prog_util__VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)));
#line 537 "prog_util.m"
            MR_Word parse_tree__prog_util__TypeSubst_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

#line 544 "prog_util.m"
            {
#line 544 "prog_util.m"
              parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(parse_tree__prog_util__VarSet_18, parse_tree__prog_util__TypeSubst_19, &parse_tree__prog_util__PredIdStr_17);
            }
#line 537 "prog_util.m"
          }
#line 536 "prog_util.m"
        else
#line 536 "prog_util.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_util__NewPredId_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 556 "prog_util.m"
            {
#line 556 "prog_util.m"
              MR_Integer parse_tree__prog_util__Distance_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

#line 557 "prog_util.m"
              {
#line 557 "prog_util.m"
                mercury__string__int_to_string_2_p_0(parse_tree__prog_util__Distance_31, &parse_tree__prog_util__PredIdStr_17);
              }
#line 556 "prog_util.m"
            }
#line 536 "prog_util.m"
          else
#line 536 "prog_util.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_util__NewPredId_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 548 "prog_util.m"
              {
#line 548 "prog_util.m"
                MR_Word parse_tree__prog_util__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

#line 549 "prog_util.m"
                {
#line 549 "prog_util.m"
                  parse_tree__prog_util__list_to_string__ho1_3_p_0(parse_tree__prog_util__Args_27, &parse_tree__prog_util__PredIdStr_17);
                }
#line 548 "prog_util.m"
              }
#line 536 "prog_util.m"
            else
#line 536 "prog_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_util__NewPredId_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 551 "prog_util.m"
                {
#line 551 "prog_util.m"
                  MR_Integer parse_tree__prog_util__ModeNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));
#line 551 "prog_util.m"
                  MR_String parse_tree__prog_util__ModeStr_29;
#line 551 "prog_util.m"
                  MR_String parse_tree__prog_util__ArgsStr_30;
#line 551 "prog_util.m"
                  MR_String parse_tree__prog_util__V_34_34;
#line 551 "prog_util.m"
                  MR_Word parse_tree__prog_util__Args_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 2)));

#line 552 "prog_util.m"
                  {
#line 552 "prog_util.m"
                    mercury__string__int_to_string_2_p_0(parse_tree__prog_util__ModeNum_28, &parse_tree__prog_util__ModeStr_29);
                  }
#line 553 "prog_util.m"
                  {
#line 553 "prog_util.m"
                    parse_tree__prog_util__list_to_string__ho1_3_p_0(parse_tree__prog_util__Args_63, &parse_tree__prog_util__ArgsStr_30);
                  }
#line 554 "prog_util.m"
                  {
#line 554 "prog_util.m"
                    parse_tree__prog_util__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__ArgsStr_30);
                  }
#line 554 "prog_util.m"
                  {
#line 554 "prog_util.m"
                    parse_tree__prog_util__PredIdStr_17 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__ModeStr_29, parse_tree__prog_util__V_34_34);
                  }
#line 551 "prog_util.m"
                }
#line 536 "prog_util.m"
              else
#line 548 "prog_util.m"
                {
#line 548 "prog_util.m"
                  MR_Word parse_tree__prog_util__Args_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

#line 549 "prog_util.m"
                  {
#line 549 "prog_util.m"
                    parse_tree__prog_util__list_to_string__ho1_3_p_0(parse_tree__prog_util__Args_74, &parse_tree__prog_util__PredIdStr_17);
                  }
#line 548 "prog_util.m"
                }
#line 6838 "parse_tree.prog_util.c"
    {
#line 6840 "parse_tree.prog_util.c"
      parse_tree__prog_util__V_78_78 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__PredIdStr_17);
    }
#line 6843 "parse_tree.prog_util.c"
    {
#line 6845 "parse_tree.prog_util.c"
      parse_tree__prog_util__V_79_79 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__PredName_10, parse_tree__prog_util__V_78_78);
    }
#line 6848 "parse_tree.prog_util.c"
    {
#line 6850 "parse_tree.prog_util.c"
      parse_tree__prog_util__V_81_81 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__V_79_79);
    }
#line 6853 "parse_tree.prog_util.c"
    {
#line 6855 "parse_tree.prog_util.c"
      parse_tree__prog_util__V_82_82 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__PFS_14, parse_tree__prog_util__V_81_81);
    }
#line 6858 "parse_tree.prog_util.c"
    {
#line 6860 "parse_tree.prog_util.c"
      parse_tree__prog_util__V_84_84 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__V_82_82);
    }
#line 6863 "parse_tree.prog_util.c"
    {
#line 6865 "parse_tree.prog_util.c"
      parse_tree__prog_util__Name_32 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__Prefix_8, parse_tree__prog_util__V_84_84);
    }
#line 565 "prog_util.m"
    {
#line 565 "prog_util.m"
      MR_Word base;
#line 565 "prog_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "prog_util.m"
      *parse_tree__prog_util__SymName_12 = base;
#line 565 "prog_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__ModuleName_7));
#line 565 "prog_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Name_32));
#line 565 "prog_util.m"
    }
#line 525 "prog_util.m"
  }
#line 61 "prog_util.m"
}

#line 51 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__adjust_func_arity_3_p_1(
#line 51 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 51 "prog_util.m"
  MR_Integer * parse_tree__prog_util__HeadVar__2_2,
#line 51 "prog_util.m"
  MR_Integer parse_tree__prog_util__Arity_3)
#line 51 "prog_util.m"
{
#line 226 "prog_util.m"
  {
#line 226 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 226 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__1_1 == (MR_Integer) 1))
#line 227 "prog_util.m"
      {
#line 227 "prog_util.m"
        *parse_tree__prog_util__HeadVar__2_2 = (parse_tree__prog_util__Arity_3 - (MR_Integer) 1);
#line 227 "prog_util.m"
      }
#line 226 "prog_util.m"
    else
#line 226 "prog_util.m"
      *parse_tree__prog_util__HeadVar__2_2 = parse_tree__prog_util__Arity_3;
#line 226 "prog_util.m"
  }
#line 51 "prog_util.m"
}

#line 50 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__adjust_func_arity_3_p_0(
#line 50 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 50 "prog_util.m"
  MR_Integer parse_tree__prog_util__HeadVar__2_2,
#line 50 "prog_util.m"
  MR_Integer * parse_tree__prog_util__Arity_3)
#line 50 "prog_util.m"
{
#line 226 "prog_util.m"
  {
#line 226 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 226 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__1_1 == (MR_Integer) 1))
#line 227 "prog_util.m"
      {
#line 227 "prog_util.m"
        *parse_tree__prog_util__Arity_3 = ((MR_Integer) 1 + parse_tree__prog_util__HeadVar__2_2);
#line 227 "prog_util.m"
      }
#line 226 "prog_util.m"
    else
#line 226 "prog_util.m"
      *parse_tree__prog_util__Arity_3 = parse_tree__prog_util__HeadVar__2_2;
#line 226 "prog_util.m"
  }
#line 50 "prog_util.m"
}

#line 38 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(
#line 38 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_22,
#line 38 "prog_util.m"
  MR_Word parse_tree__prog_util__SymName_5,
#line 38 "prog_util.m"
  MR_Word parse_tree__prog_util__Args_6,
#line 38 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_7,
#line 38 "prog_util.m"
  MR_Word * parse_tree__prog_util__Term_8)
#line 38 "prog_util.m"
{
#line 219 "prog_util.m"
  {
#line 219 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 219 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__SymName_5)) == (MR_mktag((MR_Integer) 1))))
#line 214 "prog_util.m"
      {
#line 214 "prog_util.m"
        MR_Word parse_tree__prog_util__Module_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__SymName_5, (MR_Integer) 0)));
#line 214 "prog_util.m"
        MR_String parse_tree__prog_util__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__SymName_5, (MR_Integer) 1)));
#line 214 "prog_util.m"
        MR_Word parse_tree__prog_util__ModuleTerm_11;
#line 214 "prog_util.m"
        MR_Word parse_tree__prog_util__UnqualifiedTerm_12;
#line 214 "prog_util.m"
        MR_Word parse_tree__prog_util__V_15_15;
#line 214 "prog_util.m"
        MR_Word parse_tree__prog_util__V_18_18;
#line 214 "prog_util.m"
        MR_Word parse_tree__prog_util__V_19_19;

#line 215 "prog_util.m"
        {
#line 215 "prog_util.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__prog_util__TypeInfo_for_T_22, parse_tree__prog_util__Module_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_util__Context_7, &parse_tree__prog_util__ModuleTerm_11);
        }
#line 216 "prog_util.m"
        {
#line 216 "prog_util.m"
          parse_tree__prog_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 216 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_15_15, 0) = ((MR_Box) (parse_tree__prog_util__Name_10));
#line 216 "prog_util.m"
        }
#line 216 "prog_util.m"
        {
#line 216 "prog_util.m"
          parse_tree__prog_util__UnqualifiedTerm_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 216 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__UnqualifiedTerm_12, 0) = ((MR_Box) (parse_tree__prog_util__V_15_15));
#line 216 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__UnqualifiedTerm_12, 1) = ((MR_Box) (parse_tree__prog_util__Args_6));
#line 216 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__UnqualifiedTerm_12, 2) = ((MR_Box) (parse_tree__prog_util__Context_7));
#line 216 "prog_util.m"
        }
#line 218 "prog_util.m"
        {
#line 218 "prog_util.m"
          parse_tree__prog_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_19_19, 0) = ((MR_Box) (parse_tree__prog_util__UnqualifiedTerm_12));
#line 218 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "prog_util.m"
        }
#line 217 "prog_util.m"
        {
#line 217 "prog_util.m"
          parse_tree__prog_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_18_18, 0) = ((MR_Box) (parse_tree__prog_util__ModuleTerm_11));
#line 217 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_18_18, 1) = ((MR_Box) (parse_tree__prog_util__V_19_19));
#line 217 "prog_util.m"
        }
#line 217 "prog_util.m"
        {
#line 217 "prog_util.m"
          MR_Word base;
#line 217 "prog_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 217 "prog_util.m"
          *parse_tree__prog_util__Term_8 = base;
#line 217 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[0]));
#line 217 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__V_18_18));
#line 217 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_7));
#line 217 "prog_util.m"
        }
#line 214 "prog_util.m"
      }
#line 219 "prog_util.m"
    else
#line 220 "prog_util.m"
      {
#line 220 "prog_util.m"
        MR_Word parse_tree__prog_util__V_13_13;
#line 220 "prog_util.m"
        MR_String parse_tree__prog_util__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__SymName_5, (MR_Integer) 0)));

#line 221 "prog_util.m"
        {
#line 221 "prog_util.m"
          parse_tree__prog_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 221 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 0) = ((MR_Box) (parse_tree__prog_util__Name_21));
#line 221 "prog_util.m"
        }
#line 221 "prog_util.m"
        {
#line 221 "prog_util.m"
          MR_Word base;
#line 221 "prog_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 221 "prog_util.m"
          *parse_tree__prog_util__Term_8 = base;
#line 221 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__V_13_13));
#line 221 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__Args_6));
#line 221 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_7));
#line 221 "prog_util.m"
        }
#line 220 "prog_util.m"
      }
#line 219 "prog_util.m"
  }
#line 38 "prog_util.m"
}

#line 35 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__construct_qualified_term_3_p_0(
#line 35 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_8,
#line 35 "prog_util.m"
  MR_Word parse_tree__prog_util__SymName_4,
#line 35 "prog_util.m"
  MR_Word parse_tree__prog_util__Args_5,
#line 35 "prog_util.m"
  MR_Word * parse_tree__prog_util__Term_6)
#line 35 "prog_util.m"
{
#line 208 "prog_util.m"
  {
#line 208 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 208 "prog_util.m"
    MR_Word parse_tree__prog_util__Context_7;

#line 209 "prog_util.m"
    {
#line 209 "prog_util.m"
      mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_7);
    }
#line 210 "prog_util.m"
    {
#line 210 "prog_util.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__prog_util__TypeInfo_for_T_8, parse_tree__prog_util__SymName_4, parse_tree__prog_util__Args_5, parse_tree__prog_util__Context_7, parse_tree__prog_util__Term_6);
#line 210 "prog_util.m"
      return;
    }
#line 208 "prog_util.m"
  }
#line 35 "prog_util.m"
}

void mercury__parse_tree__prog_util__init(void)
{
}

void mercury__parse_tree__prog_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_util__parse_tree__prog_util__type_ctor_info_maybe_modes_0);
	MR_register_type_ctor_info(&parse_tree__prog_util__parse_tree__prog_util__type_ctor_info_new_pred_id_0);
}

void mercury__parse_tree__prog_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_util. */
