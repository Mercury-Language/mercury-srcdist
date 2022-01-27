/*
** Automatically generated from `prog_util.m'
** by the Mercury compiler,
** version rotd-2014-12-12
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
#include "mdbcomp.sym_name.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 137 "parse_tree.prog_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 140 "parse_tree.prog_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_util__pair__pti_pair_2__plain_parse_tree__prog_item__type_ctor_info_goal_expr_0__plain_term__type_ctor_info_context_0;

#line 143 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 146 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 149 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_0[2];

#line 152 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_0;

#line 155 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 158 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 161 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_util__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 164 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 167 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_1[2];

#line 170 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_1;

#line 173 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0;

#line 176 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_2[1];

#line 179 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_2;

#line 182 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_3[1];

#line 185 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_3;

#line 188 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_4;

#line 191 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_5[2];

#line 194 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_5;

#line 197 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_6[1];

#line 200 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_6;

#line 203 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_0[1];

#line 206 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_1[1];

#line 209 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_2[1];

#line 212 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_3[4];

#line 215 "parse_tree.prog_util.c"
static const MR_DuPtagLayout parse_tree__prog_util__parse_tree__prog_util__du_ptag_ordered_new_pred_id_0[4];

#line 218 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_name_ordered_new_pred_id_0[7];

#line 221 "parse_tree.prog_util.c"
static const MR_Integer parse_tree__prog_util__parse_tree__prog_util__functor_number_map_new_pred_id_0[7];

#line 224 "parse_tree.prog_util.c"
static MR_bool MR_CALL 
parse_tree__prog_util____Unify____maybe_modes_0_0_10001(
#line 227 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 229 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2);

#line 232 "parse_tree.prog_util.c"
static void MR_CALL 
parse_tree__prog_util____Compare____maybe_modes_0_0_10001(
#line 235 "parse_tree.prog_util.c"
  MR_Box * parse_tree__prog_util__wrapper_arg_1,
#line 237 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2,
#line 239 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_3);

#line 242 "parse_tree.prog_util.c"
static MR_bool MR_CALL 
parse_tree__prog_util____Unify____new_pred_id_0_0_10001(
#line 245 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 247 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2);

#line 250 "parse_tree.prog_util.c"
static void MR_CALL 
parse_tree__prog_util____Compare____new_pred_id_0_0_10001(
#line 253 "parse_tree.prog_util.c"
  MR_Box * parse_tree__prog_util__wrapper_arg_1,
#line 255 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2,
#line 257 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_3);

#line 580 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(
#line 580 "prog_util.m"
  MR_Word parse_tree__prog_util__V_23_23,
#line 580 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 580 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
#line 580 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4);

#line 573 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(
#line 573 "prog_util.m"
  MR_Word parse_tree__prog_util__V_14_14,
#line 573 "prog_util.m"
  MR_Word parse_tree__prog_util__List_5,
#line 573 "prog_util.m"
  MR_String * parse_tree__prog_util__String_6);

#line 760 "prog_util.m"
static MR_Word MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(
#line 760 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 760 "prog_util.m"
  MR_Word parse_tree__prog_util__Term_2,
#line 760 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_3);

#line 580 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__list_to_string_2__ho4_4_p_0(
#line 580 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 580 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
#line 580 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4);

#line 573 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__list_to_string__ho1_3_p_0(
#line 573 "prog_util.m"
  MR_Word parse_tree__prog_util__List_5,
#line 573 "prog_util.m"
  MR_String * parse_tree__prog_util__String_6);

#line 544 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__544__1_3_p_0(
#line 544 "prog_util.m"
  MR_Word parse_tree__prog_util__VarSet_18,
#line 544 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_37,
#line 544 "prog_util.m"
  MR_String * parse_tree__prog_util__HeadVar__3_38);

#line 786 "prog_util.m"
static MR_Word MR_CALL 
parse_tree__prog_util__goal_list_to_conj_2_3_f_0(
#line 786 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_1,
#line 786 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 786 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3);

#line 679 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__make_n_fresh_vars_2_6_p_0(
#line 679 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_23,
#line 679 "prog_util.m"
  MR_String parse_tree__prog_util__BaseName_7,
#line 679 "prog_util.m"
  MR_Integer parse_tree__prog_util__N_8,
#line 679 "prog_util.m"
  MR_Integer parse_tree__prog_util__Max_9,
#line 679 "prog_util.m"
  MR_Word * parse_tree__prog_util__Vars_10,
#line 679 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_0_17,
#line 679 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_VarSet_18);

#line 514 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_catch_expr_4_p_0(
#line 514 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 514 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 514 "prog_util.m"
  MR_Word parse_tree__prog_util__Catch0_7,
#line 514 "prog_util.m"
  MR_Word * parse_tree__prog_util__Catch_8);

#line 501 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_maybe_var_4_p_0(
#line 501 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 501 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 501 "prog_util.m"
  MR_Word parse_tree__prog_util__MaybeVar0_7,
#line 501 "prog_util.m"
  MR_Word * parse_tree__prog_util__MaybeVar_8);

#line 491 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_var_4_p_0(
#line 491 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 491 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 491 "prog_util.m"
  MR_Word parse_tree__prog_util__Var0_7,
#line 491 "prog_util.m"
  MR_Word * parse_tree__prog_util__Var_8);

#line 483 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_vars_4_p_0(
#line 483 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_1,
#line 483 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_2,
#line 483 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3,
#line 483 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__4_4);

#line 475 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(
#line 475 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 475 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 475 "prog_util.m"
  MR_Word parse_tree__prog_util__TMV0_7,
#line 475 "prog_util.m"
  MR_Word * parse_tree__prog_util__TMV_8);

#line 460 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(
#line 460 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 460 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 460 "prog_util.m"
  MR_Word parse_tree__prog_util__Comp0_7,
#line 460 "prog_util.m"
  MR_Word * parse_tree__prog_util__Comp_8);

#line 411 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_expr_4_p_0_4(
#line 411 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 411 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 411 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2);

#line 376 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_expr_4_p_0_3(
#line 376 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 376 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 376 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2);

#line 395 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_expr_4_p_0_2(
#line 395 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 395 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 395 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2);

#line 390 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_expr_4_p_0_1(
#line 390 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 390 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 390 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2);

#line 270 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_expr_4_p_0(
#line 270 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 270 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 270 "prog_util.m"
  MR_Word parse_tree__prog_util__Expr0_7,
#line 270 "prog_util.m"
  MR_Word * parse_tree__prog_util__Expr_8);

#line 243 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__split_types_and_modes_2_5_p_0(
#line 243 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 243 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 243 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__3_3,
#line 243 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__4_4,
#line 243 "prog_util.m"
  MR_Word * parse_tree__prog_util__Result_5);


static /* final */ const MR_Box parse_tree__prog_util_scalar_common_1[9][2];

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_2[2][3];

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_3[5][1];

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

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_3[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "."))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
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



#line 644 "parse_tree.prog_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 652 "parse_tree.prog_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_util__pair__pti_pair_2__plain_parse_tree__prog_item__type_ctor_info_goal_expr_0__plain_term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_expr_0,
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 661 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 669 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__prog_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 677 "parse_tree.prog_util.c"
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

#line 698 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 704 "parse_tree.prog_util.c"
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

#line 719 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 727 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 735 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_util__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 744 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_util__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 752 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_util__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 758 "parse_tree.prog_util.c"
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

#line 773 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 781 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 786 "parse_tree.prog_util.c"
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

#line 801 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 806 "parse_tree.prog_util.c"
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

#line 821 "parse_tree.prog_util.c"
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

#line 836 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_5[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 842 "parse_tree.prog_util.c"
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

#line 857 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 862 "parse_tree.prog_util.c"
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

#line 877 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_0[1] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_4
};

#line 882 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_1[1] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_0
};

#line 887 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_2[1] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_1
};

#line 892 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_3[4] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_2,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_3,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_5,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_6
};

#line 900 "parse_tree.prog_util.c"
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

#line 924 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_name_ordered_new_pred_id_0[7] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_0,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_6,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_3,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_4,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_5,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_1,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_2
};

#line 935 "parse_tree.prog_util.c"
static const MR_Integer parse_tree__prog_util__parse_tree__prog_util__functor_number_map_new_pred_id_0[7] = {
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1
};

#line 946 "parse_tree.prog_util.c"
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

#line 967 "parse_tree.prog_util.c"
static MR_bool MR_CALL 
parse_tree__prog_util____Unify____maybe_modes_0_0_10001(
#line 970 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 972 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2)
#line 974 "parse_tree.prog_util.c"
{
#line 976 "parse_tree.prog_util.c"
  {
#line 978 "parse_tree.prog_util.c"
    MR_bool parse_tree__prog_util__succeeded;

#line 981 "parse_tree.prog_util.c"
    {
#line 983 "parse_tree.prog_util.c"
      parse_tree__prog_util__succeeded = parse_tree__prog_util____Unify____maybe_modes_0_0(((MR_Word) parse_tree__prog_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_util__wrapper_arg_2));
    }
#line 986 "parse_tree.prog_util.c"
    return parse_tree__prog_util__succeeded;
#line 988 "parse_tree.prog_util.c"
  }
#line 990 "parse_tree.prog_util.c"
}

#line 993 "parse_tree.prog_util.c"
static void MR_CALL 
parse_tree__prog_util____Compare____maybe_modes_0_0_10001(
#line 996 "parse_tree.prog_util.c"
  MR_Box * parse_tree__prog_util__wrapper_arg_1,
#line 998 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2,
#line 1000 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_3)
#line 1002 "parse_tree.prog_util.c"
{
#line 1004 "parse_tree.prog_util.c"
  {
#line 1006 "parse_tree.prog_util.c"
    MR_Word parse_tree__prog_util__conv0_HeadVar__1_1;

#line 1009 "parse_tree.prog_util.c"
    {
#line 1011 "parse_tree.prog_util.c"
      parse_tree__prog_util____Compare____maybe_modes_0_0(&parse_tree__prog_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_util__wrapper_arg_3));
    }
#line 1014 "parse_tree.prog_util.c"
    *parse_tree__prog_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_util__conv0_HeadVar__1_1));
#line 1016 "parse_tree.prog_util.c"
  }
#line 1018 "parse_tree.prog_util.c"
}

#line 1021 "parse_tree.prog_util.c"
static MR_bool MR_CALL 
parse_tree__prog_util____Unify____new_pred_id_0_0_10001(
#line 1024 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 1026 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2)
#line 1028 "parse_tree.prog_util.c"
{
#line 1030 "parse_tree.prog_util.c"
  {
#line 1032 "parse_tree.prog_util.c"
    MR_bool parse_tree__prog_util__succeeded;

#line 1035 "parse_tree.prog_util.c"
    {
#line 1037 "parse_tree.prog_util.c"
      parse_tree__prog_util__succeeded = parse_tree__prog_util____Unify____new_pred_id_0_0(((MR_Word) parse_tree__prog_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_util__wrapper_arg_2));
    }
#line 1040 "parse_tree.prog_util.c"
    return parse_tree__prog_util__succeeded;
#line 1042 "parse_tree.prog_util.c"
  }
#line 1044 "parse_tree.prog_util.c"
}

#line 1047 "parse_tree.prog_util.c"
static void MR_CALL 
parse_tree__prog_util____Compare____new_pred_id_0_0_10001(
#line 1050 "parse_tree.prog_util.c"
  MR_Box * parse_tree__prog_util__wrapper_arg_1,
#line 1052 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2,
#line 1054 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_3)
#line 1056 "parse_tree.prog_util.c"
{
#line 1058 "parse_tree.prog_util.c"
  {
#line 1060 "parse_tree.prog_util.c"
    MR_Word parse_tree__prog_util__conv0_HeadVar__1_1;

#line 1063 "parse_tree.prog_util.c"
    {
#line 1065 "parse_tree.prog_util.c"
      parse_tree__prog_util____Compare____new_pred_id_0_0(&parse_tree__prog_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_util__wrapper_arg_3));
    }
#line 1068 "parse_tree.prog_util.c"
    *parse_tree__prog_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_util__conv0_HeadVar__1_1));
#line 1070 "parse_tree.prog_util.c"
  }
#line 1072 "parse_tree.prog_util.c"
}

#line 580 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(
#line 580 "prog_util.m"
  MR_Word parse_tree__prog_util__V_23_23,
#line 580 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 580 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
#line 580 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4)
#line 580 "prog_util.m"
{
#line 583 "prog_util.m"
  {
#line 583 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 583 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 583 "prog_util.m"
      *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 583 "prog_util.m"
    else
#line 584 "prog_util.m"
      {
#line 584 "prog_util.m"
        MR_Word parse_tree__prog_util__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
#line 584 "prog_util.m"
        MR_Word parse_tree__prog_util__Ts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 584 "prog_util.m"
        MR_String parse_tree__prog_util__String_15;
#line 584 "prog_util.m"
        MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_19;

#line 587 "prog_util.m"
        if ((parse_tree__prog_util__Ts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 586 "prog_util.m"
          parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 587 "prog_util.m"
        else
#line 588 "prog_util.m"
          {
#line 588 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_18;
#line 588 "prog_util.m"
            MR_Word parse_tree__prog_util__T_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 0)));
#line 588 "prog_util.m"
            MR_Word parse_tree__prog_util__Ts_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 1)));
#line 588 "prog_util.m"
            MR_String parse_tree__prog_util__String_34;
#line 588 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_38;

#line 587 "prog_util.m"
            if ((parse_tree__prog_util__Ts_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 586 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 587 "prog_util.m"
            else
#line 588 "prog_util.m"
              {
#line 588 "prog_util.m"
                MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_37;

#line 589 "prog_util.m"
                {
#line 589 "prog_util.m"
                  parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_util__V_23_23, parse_tree__prog_util__Ts_30, parse_tree__prog_util__STATE_VARIABLE_Strings_0_3, &parse_tree__prog_util__STATE_VARIABLE_Strings_18_37);
                }
#line 590 "prog_util.m"
                {
#line 590 "prog_util.m"
                  parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 590 "prog_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 0) = ((MR_Box) ((MR_String) ", "));
#line 590 "prog_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_37));
#line 590 "prog_util.m"
                }
#line 588 "prog_util.m"
              }
#line 592 "prog_util.m"
            {
#line 592 "prog_util.m"
              parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__544__1_3_p_0(parse_tree__prog_util__V_23_23, parse_tree__prog_util__T_29, &parse_tree__prog_util__String_34);
            }
#line 593 "prog_util.m"
            {
#line 593 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 593 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 0) = ((MR_Box) (parse_tree__prog_util__String_34));
#line 593 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_38));
#line 593 "prog_util.m"
            }
#line 590 "prog_util.m"
            {
#line 590 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 590 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 0) = ((MR_Box) ((MR_String) ", "));
#line 590 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_18));
#line 590 "prog_util.m"
            }
#line 588 "prog_util.m"
          }
#line 592 "prog_util.m"
        {
#line 592 "prog_util.m"
          parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__544__1_3_p_0(parse_tree__prog_util__V_23_23, parse_tree__prog_util__T_10, &parse_tree__prog_util__String_15);
        }
#line 593 "prog_util.m"
        {
#line 593 "prog_util.m"
          MR_Word base;
#line 593 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 593 "prog_util.m"
          *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = base;
#line 593 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__String_15));
#line 593 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_19));
#line 593 "prog_util.m"
        }
#line 584 "prog_util.m"
      }
#line 583 "prog_util.m"
  }
#line 580 "prog_util.m"
}

#line 573 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(
#line 573 "prog_util.m"
  MR_Word parse_tree__prog_util__V_14_14,
#line 573 "prog_util.m"
  MR_Word parse_tree__prog_util__List_5,
#line 573 "prog_util.m"
  MR_String * parse_tree__prog_util__String_6)
#line 573 "prog_util.m"
{
#line 576 "prog_util.m"
  {
#line 576 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 576 "prog_util.m"
    MR_Word parse_tree__prog_util__Strings_7;
#line 576 "prog_util.m"
    MR_Word parse_tree__prog_util__V_11_11;

#line 577 "prog_util.m"
    {
#line 577 "prog_util.m"
      parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_util__V_14_14, parse_tree__prog_util__List_5, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_1[8]), &parse_tree__prog_util__Strings_7);
    }
#line 578 "prog_util.m"
    {
#line 578 "prog_util.m"
      parse_tree__prog_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 0) = ((MR_Box) ((MR_String) "["));
#line 578 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 1) = ((MR_Box) (parse_tree__prog_util__Strings_7));
#line 578 "prog_util.m"
    }
#line 578 "prog_util.m"
    {
#line 578 "prog_util.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_util__V_11_11, parse_tree__prog_util__String_6);
#line 578 "prog_util.m"
      return;
    }
#line 576 "prog_util.m"
  }
#line 573 "prog_util.m"
}

#line 760 "prog_util.m"
static MR_Word MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(
#line 760 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 760 "prog_util.m"
  MR_Word parse_tree__prog_util__Term_2,
#line 760 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_3)
#line 760 "prog_util.m"
{
#line 763 "prog_util.m"
  {
#line 763 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 763 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__4_4;

#line 763 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 769 "prog_util.m"
      {
#line 769 "prog_util.m"
        MR_Word parse_tree__prog_util__ModuleNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 769 "prog_util.m"
        MR_String parse_tree__prog_util__ModuleName_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 769 "prog_util.m"
        MR_Word parse_tree__prog_util__V_22_22;
#line 769 "prog_util.m"
        MR_Word parse_tree__prog_util__V_23_23;
#line 769 "prog_util.m"
        MR_Word parse_tree__prog_util__V_24_24;
#line 769 "prog_util.m"
        MR_Word parse_tree__prog_util__V_25_25;
#line 769 "prog_util.m"
        MR_Word parse_tree__prog_util__V_27_27;

#line 774 "prog_util.m"
        {
#line 774 "prog_util.m"
          parse_tree__prog_util__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 774 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_25_25, 0) = ((MR_Box) (parse_tree__prog_util__ModuleName_17));
#line 774 "prog_util.m"
        }
#line 774 "prog_util.m"
        {
#line 774 "prog_util.m"
          parse_tree__prog_util__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 774 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_24_24, 0) = ((MR_Box) (parse_tree__prog_util__V_25_25));
#line 774 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 774 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_24_24, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 774 "prog_util.m"
        }
#line 772 "prog_util.m"
        {
#line 772 "prog_util.m"
          parse_tree__prog_util__V_23_23 = parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(parse_tree__prog_util__ModuleNames_16, parse_tree__prog_util__V_24_24, parse_tree__prog_util__Context_3);
        }
#line 776 "prog_util.m"
        {
#line 776 "prog_util.m"
          parse_tree__prog_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 776 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_util__Term_2));
#line 776 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 776 "prog_util.m"
        }
#line 775 "prog_util.m"
        {
#line 775 "prog_util.m"
          parse_tree__prog_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_22_22, 0) = ((MR_Box) (parse_tree__prog_util__V_23_23));
#line 775 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_22_22, 1) = ((MR_Box) (parse_tree__prog_util__V_27_27));
#line 775 "prog_util.m"
        }
#line 770 "prog_util.m"
        {
#line 770 "prog_util.m"
          parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 770 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[0]));
#line 770 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 1) = ((MR_Box) (parse_tree__prog_util__V_22_22));
#line 770 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 770 "prog_util.m"
        }
#line 769 "prog_util.m"
      }
#line 763 "prog_util.m"
    else
#line 763 "prog_util.m"
      {
#line 763 "prog_util.m"
        MR_String parse_tree__prog_util__ModuleName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 763 "prog_util.m"
        MR_Word parse_tree__prog_util__V_10_10;
#line 763 "prog_util.m"
        MR_Word parse_tree__prog_util__V_11_11;
#line 763 "prog_util.m"
        MR_Word parse_tree__prog_util__V_12_12;
#line 763 "prog_util.m"
        MR_Word parse_tree__prog_util__V_14_14;

#line 766 "prog_util.m"
        {
#line 766 "prog_util.m"
          parse_tree__prog_util__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 766 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_12_12, 0) = ((MR_Box) (parse_tree__prog_util__ModuleName_5));
#line 766 "prog_util.m"
        }
#line 766 "prog_util.m"
        {
#line 766 "prog_util.m"
          parse_tree__prog_util__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 766 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_11_11, 0) = ((MR_Box) (parse_tree__prog_util__V_12_12));
#line 766 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 766 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_11_11, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 766 "prog_util.m"
        }
#line 766 "prog_util.m"
        {
#line 766 "prog_util.m"
          parse_tree__prog_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 766 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_14_14, 0) = ((MR_Box) (parse_tree__prog_util__Term_2));
#line 766 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 766 "prog_util.m"
        }
#line 766 "prog_util.m"
        {
#line 766 "prog_util.m"
          parse_tree__prog_util__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 766 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_10_10, 0) = ((MR_Box) (parse_tree__prog_util__V_11_11));
#line 766 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_10_10, 1) = ((MR_Box) (parse_tree__prog_util__V_14_14));
#line 766 "prog_util.m"
        }
#line 764 "prog_util.m"
        {
#line 764 "prog_util.m"
          parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 764 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[0]));
#line 764 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 1) = ((MR_Box) (parse_tree__prog_util__V_10_10));
#line 764 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 764 "prog_util.m"
        }
#line 763 "prog_util.m"
      }
#line 763 "prog_util.m"
    return parse_tree__prog_util__HeadVar__4_4;
#line 763 "prog_util.m"
  }
#line 760 "prog_util.m"
}

#line 580 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__list_to_string_2__ho4_4_p_0(
#line 580 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 580 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
#line 580 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4)
#line 580 "prog_util.m"
{
#line 583 "prog_util.m"
  {
#line 583 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 583 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 583 "prog_util.m"
      *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 583 "prog_util.m"
    else
#line 584 "prog_util.m"
      {
#line 584 "prog_util.m"
        MR_Integer parse_tree__prog_util__T_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
#line 584 "prog_util.m"
        MR_Word parse_tree__prog_util__Ts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 584 "prog_util.m"
        MR_String parse_tree__prog_util__String_15;
#line 584 "prog_util.m"
        MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_19;

#line 587 "prog_util.m"
        if ((parse_tree__prog_util__Ts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 586 "prog_util.m"
          parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 587 "prog_util.m"
        else
#line 588 "prog_util.m"
          {
#line 588 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_18;
#line 588 "prog_util.m"
            MR_Integer parse_tree__prog_util__T_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 0)));
#line 588 "prog_util.m"
            MR_Word parse_tree__prog_util__Ts_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 1)));
#line 588 "prog_util.m"
            MR_String parse_tree__prog_util__String_34;
#line 588 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_38;

#line 587 "prog_util.m"
            if ((parse_tree__prog_util__Ts_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 586 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 587 "prog_util.m"
            else
#line 588 "prog_util.m"
              {
#line 588 "prog_util.m"
                MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_37;

#line 589 "prog_util.m"
                {
#line 589 "prog_util.m"
                  parse_tree__prog_util__list_to_string_2__ho4_4_p_0(parse_tree__prog_util__Ts_30, parse_tree__prog_util__STATE_VARIABLE_Strings_0_3, &parse_tree__prog_util__STATE_VARIABLE_Strings_18_37);
                }
#line 590 "prog_util.m"
                {
#line 590 "prog_util.m"
                  parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 590 "prog_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 0) = ((MR_Box) ((MR_String) ", "));
#line 590 "prog_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_37));
#line 590 "prog_util.m"
                }
#line 588 "prog_util.m"
              }
#line 592 "prog_util.m"
            {
#line 592 "prog_util.m"
              mercury__string__int_to_string_2_p_0(parse_tree__prog_util__T_29, &parse_tree__prog_util__String_34);
            }
#line 593 "prog_util.m"
            {
#line 593 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 593 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 0) = ((MR_Box) (parse_tree__prog_util__String_34));
#line 593 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_38));
#line 593 "prog_util.m"
            }
#line 590 "prog_util.m"
            {
#line 590 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 590 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 0) = ((MR_Box) ((MR_String) ", "));
#line 590 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_18));
#line 590 "prog_util.m"
            }
#line 588 "prog_util.m"
          }
#line 592 "prog_util.m"
        {
#line 592 "prog_util.m"
          mercury__string__int_to_string_2_p_0(parse_tree__prog_util__T_10, &parse_tree__prog_util__String_15);
        }
#line 593 "prog_util.m"
        {
#line 593 "prog_util.m"
          MR_Word base;
#line 593 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 593 "prog_util.m"
          *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = base;
#line 593 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__String_15));
#line 593 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_19));
#line 593 "prog_util.m"
        }
#line 584 "prog_util.m"
      }
#line 583 "prog_util.m"
  }
#line 580 "prog_util.m"
}

#line 573 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__list_to_string__ho1_3_p_0(
#line 573 "prog_util.m"
  MR_Word parse_tree__prog_util__List_5,
#line 573 "prog_util.m"
  MR_String * parse_tree__prog_util__String_6)
#line 573 "prog_util.m"
{
#line 576 "prog_util.m"
  {
#line 576 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 576 "prog_util.m"
    MR_Word parse_tree__prog_util__Strings_7;
#line 576 "prog_util.m"
    MR_Word parse_tree__prog_util__V_11_11;

#line 577 "prog_util.m"
    {
#line 577 "prog_util.m"
      parse_tree__prog_util__list_to_string_2__ho4_4_p_0(parse_tree__prog_util__List_5, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_1[8]), &parse_tree__prog_util__Strings_7);
    }
#line 578 "prog_util.m"
    {
#line 578 "prog_util.m"
      parse_tree__prog_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 0) = ((MR_Box) ((MR_String) "["));
#line 578 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 1) = ((MR_Box) (parse_tree__prog_util__Strings_7));
#line 578 "prog_util.m"
    }
#line 578 "prog_util.m"
    {
#line 578 "prog_util.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_util__V_11_11, parse_tree__prog_util__String_6);
#line 578 "prog_util.m"
      return;
    }
#line 576 "prog_util.m"
  }
#line 573 "prog_util.m"
}

#line 544 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__544__1_3_p_0(
#line 544 "prog_util.m"
  MR_Word parse_tree__prog_util__VarSet_18,
#line 544 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_37,
#line 544 "prog_util.m"
  MR_String * parse_tree__prog_util__HeadVar__3_38)
#line 544 "prog_util.m"
{
#line 544 "prog_util.m"
  {
#line 544 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 544 "prog_util.m"
    MR_Word parse_tree__prog_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__2_37, (MR_Integer) 0)));
#line 544 "prog_util.m"
    MR_Word parse_tree__prog_util__Type_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__2_37, (MR_Integer) 1)));
#line 544 "prog_util.m"
    MR_String parse_tree__prog_util__VarName_25;
#line 544 "prog_util.m"
    MR_String parse_tree__prog_util__TypeString_26;
#line 544 "prog_util.m"
    MR_Word parse_tree__prog_util__V_40_40;
#line 544 "prog_util.m"
    MR_Word parse_tree__prog_util__V_41_41;
#line 544 "prog_util.m"
    MR_Word parse_tree__prog_util__V_43_43;

#line 546 "prog_util.m"
    {
#line 546 "prog_util.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_util__VarSet_18, parse_tree__prog_util__Var_23, &parse_tree__prog_util__VarName_25);
    }
#line 547 "prog_util.m"
    {
#line 547 "prog_util.m"
      parse_tree__prog_util__TypeString_26 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(parse_tree__prog_util__VarSet_18, (MR_Integer) 0, parse_tree__prog_util__Type_24);
    }
#line 548 "prog_util.m"
    {
#line 548 "prog_util.m"
      parse_tree__prog_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_43_43, 0) = ((MR_Box) (parse_tree__prog_util__TypeString_26));
#line 548 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 548 "prog_util.m"
    }
#line 548 "prog_util.m"
    {
#line 548 "prog_util.m"
      parse_tree__prog_util__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_41_41, 0) = ((MR_Box) ((MR_String) " = "));
#line 548 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_41_41, 1) = ((MR_Box) (parse_tree__prog_util__V_43_43));
#line 548 "prog_util.m"
    }
#line 548 "prog_util.m"
    {
#line 548 "prog_util.m"
      parse_tree__prog_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_40_40, 0) = ((MR_Box) (parse_tree__prog_util__VarName_25));
#line 548 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_40_40, 1) = ((MR_Box) (parse_tree__prog_util__V_41_41));
#line 548 "prog_util.m"
    }
#line 548 "prog_util.m"
    {
#line 548 "prog_util.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_util__V_40_40, parse_tree__prog_util__HeadVar__3_38);
#line 548 "prog_util.m"
      return;
    }
#line 544 "prog_util.m"
  }
#line 544 "prog_util.m"
}

#line 74 "prog_util.m"
void MR_CALL 
parse_tree__prog_util____Compare____new_pred_id_0_0(
#line 74 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__1_1,
#line 74 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 74 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3)
#line 74 "prog_util.m"
{
#line 74 "prog_util.m"
  {
#line 74 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 74 "prog_util.m"
    MR_Integer parse_tree__prog_util__CastX_133 = (MR_Integer) parse_tree__prog_util__HeadVar__2_2;
#line 74 "prog_util.m"
    MR_Integer parse_tree__prog_util__CastY_134 = (MR_Integer) parse_tree__prog_util__HeadVar__3_3;

#line 74 "prog_util.m"
    parse_tree__prog_util__succeeded = (parse_tree__prog_util__CastX_133 == parse_tree__prog_util__CastY_134);
#line 74 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 1713 "parse_tree.prog_util.c"
      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "prog_util.m"
    else
#line 74 "prog_util.m"
      if ((parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 74 "prog_util.m"
        if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 74 "prog_util.m"
          *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "prog_util.m"
        else
#line 74 "prog_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1727 "parse_tree.prog_util.c"
            *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
          else
#line 74 "prog_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1733 "parse_tree.prog_util.c"
              *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
            else
#line 74 "prog_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1739 "parse_tree.prog_util.c"
                *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
              else
#line 74 "prog_util.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1745 "parse_tree.prog_util.c"
                  *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                else
#line 74 "prog_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1751 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                  else
#line 1755 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
      else
#line 74 "prog_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 74 "prog_util.m"
          {
#line 74 "prog_util.m"
            MR_Integer parse_tree__prog_util__V_144_144 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 74 "prog_util.m"
            MR_Integer parse_tree__prog_util__V_145_145 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));

#line 74 "prog_util.m"
            if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1770 "parse_tree.prog_util.c"
              *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
            else
#line 74 "prog_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 74 "prog_util.m"
                {
#line 74 "prog_util.m"
                  MR_Integer parse_tree__prog_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)));
#line 74 "prog_util.m"
                  MR_Integer parse_tree__prog_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
#line 74 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_8_8;

#line 74 "prog_util.m"
                  {
#line 74 "prog_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_util__V_8_8, parse_tree__prog_util__V_145_145, parse_tree__prog_util__V_6_6);
                  }
#line 1790 "parse_tree.prog_util.c"
                  parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_8_8 == (MR_Integer) 0);
#line 74 "prog_util.m"
                  parse_tree__prog_util__succeeded = !(parse_tree__prog_util__succeeded);
#line 74 "prog_util.m"
                  if (parse_tree__prog_util__succeeded)
#line 74 "prog_util.m"
                    *parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__V_8_8;
#line 74 "prog_util.m"
                  else
#line 74 "prog_util.m"
                    {
#line 74 "prog_util.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_util__HeadVar__1_1, parse_tree__prog_util__V_144_144, parse_tree__prog_util__V_7_7);
#line 74 "prog_util.m"
                      return;
                    }
#line 74 "prog_util.m"
                }
#line 74 "prog_util.m"
              else
#line 74 "prog_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1813 "parse_tree.prog_util.c"
                  *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                else
#line 74 "prog_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1819 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                  else
#line 74 "prog_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1825 "parse_tree.prog_util.c"
                      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                    else
#line 74 "prog_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1831 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                      else
#line 1835 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
          }
#line 74 "prog_util.m"
        else
#line 74 "prog_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 74 "prog_util.m"
            {
#line 74 "prog_util.m"
              MR_Word parse_tree__prog_util__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 74 "prog_util.m"
              MR_Word parse_tree__prog_util__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));

#line 74 "prog_util.m"
              if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1852 "parse_tree.prog_util.c"
                *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
              else
#line 74 "prog_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1858 "parse_tree.prog_util.c"
                  *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                else
#line 74 "prog_util.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 74 "prog_util.m"
                    {
#line 74 "prog_util.m"
                      MR_Word parse_tree__prog_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)));
#line 74 "prog_util.m"
                      MR_Word parse_tree__prog_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
#line 74 "prog_util.m"
                      MR_Word parse_tree__prog_util__V_36_36;

#line 74 "prog_util.m"
                      {
#line 74 "prog_util.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[5], &parse_tree__prog_util__V_36_36, ((MR_Box) (parse_tree__prog_util__V_151_151)), ((MR_Box) (parse_tree__prog_util__V_34_34)));
                      }
#line 1878 "parse_tree.prog_util.c"
                      parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_36_36 == (MR_Integer) 0);
#line 74 "prog_util.m"
                      parse_tree__prog_util__succeeded = !(parse_tree__prog_util__succeeded);
#line 74 "prog_util.m"
                      if (parse_tree__prog_util__succeeded)
#line 74 "prog_util.m"
                        *parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__V_36_36;
#line 74 "prog_util.m"
                      else
#line 74 "prog_util.m"
                        {
#line 74 "prog_util.m"
                          {
#line 74 "prog_util.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[6], parse_tree__prog_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_util__V_150_150)), ((MR_Box) (parse_tree__prog_util__V_35_35)));
#line 74 "prog_util.m"
                            return;
                          }
#line 74 "prog_util.m"
                        }
#line 74 "prog_util.m"
                    }
#line 74 "prog_util.m"
                  else
#line 74 "prog_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1905 "parse_tree.prog_util.c"
                      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                    else
#line 74 "prog_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1911 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                      else
#line 74 "prog_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1917 "parse_tree.prog_util.c"
                          *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                        else
#line 1921 "parse_tree.prog_util.c"
                          *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
            }
#line 74 "prog_util.m"
          else
#line 74 "prog_util.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 74 "prog_util.m"
              {
#line 74 "prog_util.m"
                MR_Integer parse_tree__prog_util__V_146_146 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));

#line 74 "prog_util.m"
                if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1936 "parse_tree.prog_util.c"
                  *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                else
#line 74 "prog_util.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1942 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                  else
#line 74 "prog_util.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1948 "parse_tree.prog_util.c"
                      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                    else
#line 74 "prog_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 74 "prog_util.m"
                        {
#line 74 "prog_util.m"
                          MR_Integer parse_tree__prog_util__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));

#line 74 "prog_util.m"
                          {
#line 74 "prog_util.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_util__HeadVar__1_1, parse_tree__prog_util__V_146_146, parse_tree__prog_util__V_132_132);
#line 74 "prog_util.m"
                            return;
                          }
#line 74 "prog_util.m"
                        }
#line 74 "prog_util.m"
                      else
#line 74 "prog_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1972 "parse_tree.prog_util.c"
                          *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                        else
#line 74 "prog_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1978 "parse_tree.prog_util.c"
                            *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                          else
#line 1982 "parse_tree.prog_util.c"
                            *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
              }
#line 74 "prog_util.m"
            else
#line 74 "prog_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 74 "prog_util.m"
                {
#line 74 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));

#line 74 "prog_util.m"
                  if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1997 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                  else
#line 74 "prog_util.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2003 "parse_tree.prog_util.c"
                      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                    else
#line 74 "prog_util.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2009 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                      else
#line 74 "prog_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2015 "parse_tree.prog_util.c"
                          *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                        else
#line 74 "prog_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 74 "prog_util.m"
                            {
#line 74 "prog_util.m"
                              MR_Word parse_tree__prog_util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));

#line 74 "prog_util.m"
                              {
#line 74 "prog_util.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[4], parse_tree__prog_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_util__V_147_147)), ((MR_Box) (parse_tree__prog_util__V_77_77)));
#line 74 "prog_util.m"
                                return;
                              }
#line 74 "prog_util.m"
                            }
#line 74 "prog_util.m"
                          else
#line 74 "prog_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2039 "parse_tree.prog_util.c"
                              *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                            else
#line 2043 "parse_tree.prog_util.c"
                              *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                }
#line 74 "prog_util.m"
              else
#line 74 "prog_util.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 74 "prog_util.m"
                  {
#line 74 "prog_util.m"
                    MR_Word parse_tree__prog_util__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 2)));
#line 74 "prog_util.m"
                    MR_Integer parse_tree__prog_util__V_149_149 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));

#line 74 "prog_util.m"
                    if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2060 "parse_tree.prog_util.c"
                      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                    else
#line 74 "prog_util.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2066 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                      else
#line 74 "prog_util.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2072 "parse_tree.prog_util.c"
                          *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                        else
#line 74 "prog_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2078 "parse_tree.prog_util.c"
                            *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                          else
#line 74 "prog_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2084 "parse_tree.prog_util.c"
                              *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                            else
#line 74 "prog_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 74 "prog_util.m"
                                {
#line 74 "prog_util.m"
                                  MR_Integer parse_tree__prog_util__V_111_111 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
#line 74 "prog_util.m"
                                  MR_Word parse_tree__prog_util__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 2)));
#line 74 "prog_util.m"
                                  MR_Word parse_tree__prog_util__V_113_113;

#line 74 "prog_util.m"
                                  {
#line 74 "prog_util.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_util__V_113_113, parse_tree__prog_util__V_149_149, parse_tree__prog_util__V_111_111);
                                  }
#line 2104 "parse_tree.prog_util.c"
                                  parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_113_113 == (MR_Integer) 0);
#line 74 "prog_util.m"
                                  parse_tree__prog_util__succeeded = !(parse_tree__prog_util__succeeded);
#line 74 "prog_util.m"
                                  if (parse_tree__prog_util__succeeded)
#line 74 "prog_util.m"
                                    *parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__V_113_113;
#line 74 "prog_util.m"
                                  else
#line 74 "prog_util.m"
                                    {
#line 74 "prog_util.m"
                                      {
#line 74 "prog_util.m"
                                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[4], parse_tree__prog_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_util__V_148_148)), ((MR_Box) (parse_tree__prog_util__V_112_112)));
#line 74 "prog_util.m"
                                        return;
                                      }
#line 74 "prog_util.m"
                                    }
#line 74 "prog_util.m"
                                }
#line 74 "prog_util.m"
                              else
#line 2129 "parse_tree.prog_util.c"
                                *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                  }
#line 74 "prog_util.m"
                else
#line 74 "prog_util.m"
                  {
#line 74 "prog_util.m"
                    MR_Word parse_tree__prog_util__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));

#line 74 "prog_util.m"
                    if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2142 "parse_tree.prog_util.c"
                      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                    else
#line 74 "prog_util.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2148 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                      else
#line 74 "prog_util.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2154 "parse_tree.prog_util.c"
                          *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                        else
#line 74 "prog_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2160 "parse_tree.prog_util.c"
                            *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                          else
#line 74 "prog_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2166 "parse_tree.prog_util.c"
                              *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                            else
#line 74 "prog_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2172 "parse_tree.prog_util.c"
                                *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                              else
#line 74 "prog_util.m"
                                {
#line 74 "prog_util.m"
                                  MR_Word parse_tree__prog_util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));

#line 74 "prog_util.m"
                                  {
#line 74 "prog_util.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[4], parse_tree__prog_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_util__V_152_152)), ((MR_Box) (parse_tree__prog_util__V_59_59)));
#line 74 "prog_util.m"
                                    return;
                                  }
#line 74 "prog_util.m"
                                }
#line 74 "prog_util.m"
                  }
#line 74 "prog_util.m"
  }
#line 74 "prog_util.m"
}

#line 74 "prog_util.m"
MR_bool MR_CALL 
parse_tree__prog_util____Unify____new_pred_id_0_0(
#line 74 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 74 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2)
#line 74 "prog_util.m"
{
#line 74 "prog_util.m"
  {
#line 74 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 74 "prog_util.m"
    MR_Integer parse_tree__prog_util__CastX_23 = (MR_Integer) parse_tree__prog_util__HeadVar__1_1;
#line 74 "prog_util.m"
    MR_Integer parse_tree__prog_util__CastY_24 = (MR_Integer) parse_tree__prog_util__HeadVar__2_2;

#line 74 "prog_util.m"
    parse_tree__prog_util__succeeded = (parse_tree__prog_util__CastX_23 == parse_tree__prog_util__CastY_24);
#line 74 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 74 "prog_util.m"
      parse_tree__prog_util__succeeded = MR_TRUE;
#line 74 "prog_util.m"
    else
#line 74 "prog_util.m"
      if ((parse_tree__prog_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 74 "prog_util.m"
        {
#line 74 "prog_util.m"
          MR_Integer parse_tree__prog_util__CastX_15 = (MR_Integer) parse_tree__prog_util__HeadVar__1_1;
#line 74 "prog_util.m"
          MR_Integer parse_tree__prog_util__CastY_16 = (MR_Integer) parse_tree__prog_util__HeadVar__2_2;

#line 74 "prog_util.m"
          parse_tree__prog_util__succeeded = (parse_tree__prog_util__CastY_16 == parse_tree__prog_util__CastX_15);
#line 74 "prog_util.m"
        }
#line 74 "prog_util.m"
      else
#line 74 "prog_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 74 "prog_util.m"
          {
#line 74 "prog_util.m"
            MR_Integer parse_tree__prog_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 74 "prog_util.m"
            MR_Integer parse_tree__prog_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 74 "prog_util.m"
            MR_Integer parse_tree__prog_util__V_5_5;
#line 74 "prog_util.m"
            MR_Integer parse_tree__prog_util__V_6_6;

#line 74 "prog_util.m"
            parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 74 "prog_util.m"
            if (parse_tree__prog_util__succeeded)
#line 74 "prog_util.m"
              {
#line 74 "prog_util.m"
                parse_tree__prog_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
#line 74 "prog_util.m"
                parse_tree__prog_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2261 "parse_tree.prog_util.c"
                parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_3_3 == parse_tree__prog_util__V_5_5);
#line 74 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 2265 "parse_tree.prog_util.c"
                  parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_4_4 == parse_tree__prog_util__V_6_6);
#line 74 "prog_util.m"
              }
#line 74 "prog_util.m"
          }
#line 74 "prog_util.m"
        else
#line 74 "prog_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 74 "prog_util.m"
            {
#line 74 "prog_util.m"
              MR_Word parse_tree__prog_util__TypeInfo_27_27;
#line 74 "prog_util.m"
              MR_Word parse_tree__prog_util__TypeInfo_28_28;
#line 74 "prog_util.m"
              MR_Word parse_tree__prog_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 74 "prog_util.m"
              MR_Word parse_tree__prog_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 74 "prog_util.m"
              MR_Word parse_tree__prog_util__V_9_9;
#line 74 "prog_util.m"
              MR_Word parse_tree__prog_util__V_10_10;

#line 74 "prog_util.m"
              parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 74 "prog_util.m"
              if (parse_tree__prog_util__succeeded)
#line 74 "prog_util.m"
                {
#line 74 "prog_util.m"
                  parse_tree__prog_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
#line 74 "prog_util.m"
                  parse_tree__prog_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2300 "parse_tree.prog_util.c"
                  parse_tree__prog_util__TypeInfo_27_27 = (MR_Word) &parse_tree__prog_util_scalar_common_1[5];
#line 2302 "parse_tree.prog_util.c"
                  {
#line 2304 "parse_tree.prog_util.c"
                    parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_27_27, ((MR_Box) (parse_tree__prog_util__V_7_7)), ((MR_Box) (parse_tree__prog_util__V_9_9)));
                  }
#line 74 "prog_util.m"
                  if (parse_tree__prog_util__succeeded)
#line 74 "prog_util.m"
                    {
#line 2311 "parse_tree.prog_util.c"
                      parse_tree__prog_util__TypeInfo_28_28 = (MR_Word) &parse_tree__prog_util_scalar_common_1[6];
#line 2313 "parse_tree.prog_util.c"
                      {
#line 2315 "parse_tree.prog_util.c"
                        return parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_28_28, ((MR_Box) (parse_tree__prog_util__V_8_8)), ((MR_Box) (parse_tree__prog_util__V_10_10)));
                      }
#line 74 "prog_util.m"
                    }
#line 74 "prog_util.m"
                }
#line 74 "prog_util.m"
            }
#line 74 "prog_util.m"
          else
#line 74 "prog_util.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 74 "prog_util.m"
              {
#line 74 "prog_util.m"
                MR_Integer parse_tree__prog_util__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 74 "prog_util.m"
                MR_Integer parse_tree__prog_util__V_22_22;

#line 74 "prog_util.m"
                parse_tree__prog_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 74 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 74 "prog_util.m"
                  {
#line 74 "prog_util.m"
                    parse_tree__prog_util__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2343 "parse_tree.prog_util.c"
                    parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_21_21 == parse_tree__prog_util__V_22_22);
#line 74 "prog_util.m"
                  }
#line 74 "prog_util.m"
              }
#line 74 "prog_util.m"
            else
#line 74 "prog_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 74 "prog_util.m"
                {
#line 74 "prog_util.m"
                  MR_Word parse_tree__prog_util__TypeInfo_25_25;
#line 74 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 74 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_14_14;

#line 74 "prog_util.m"
                  parse_tree__prog_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 74 "prog_util.m"
                  if (parse_tree__prog_util__succeeded)
#line 74 "prog_util.m"
                    {
#line 74 "prog_util.m"
                      parse_tree__prog_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2370 "parse_tree.prog_util.c"
                      parse_tree__prog_util__TypeInfo_25_25 = (MR_Word) &parse_tree__prog_util_scalar_common_1[4];
#line 2372 "parse_tree.prog_util.c"
                      {
#line 2374 "parse_tree.prog_util.c"
                        return parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_25_25, ((MR_Box) (parse_tree__prog_util__V_13_13)), ((MR_Box) (parse_tree__prog_util__V_14_14)));
                      }
#line 74 "prog_util.m"
                    }
#line 74 "prog_util.m"
                }
#line 74 "prog_util.m"
              else
#line 74 "prog_util.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 74 "prog_util.m"
                  {
#line 74 "prog_util.m"
                    MR_Word parse_tree__prog_util__TypeInfo_26_26;
#line 74 "prog_util.m"
                    MR_Integer parse_tree__prog_util__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 74 "prog_util.m"
                    MR_Word parse_tree__prog_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 2)));
#line 74 "prog_util.m"
                    MR_Integer parse_tree__prog_util__V_19_19;
#line 74 "prog_util.m"
                    MR_Word parse_tree__prog_util__V_20_20;

#line 74 "prog_util.m"
                    parse_tree__prog_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 74 "prog_util.m"
                    if (parse_tree__prog_util__succeeded)
#line 74 "prog_util.m"
                      {
#line 74 "prog_util.m"
                        parse_tree__prog_util__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 74 "prog_util.m"
                        parse_tree__prog_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 2)));
#line 2408 "parse_tree.prog_util.c"
                        parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_17_17 == parse_tree__prog_util__V_19_19);
#line 74 "prog_util.m"
                        if (parse_tree__prog_util__succeeded)
#line 74 "prog_util.m"
                          {
#line 2414 "parse_tree.prog_util.c"
                            parse_tree__prog_util__TypeInfo_26_26 = (MR_Word) &parse_tree__prog_util_scalar_common_1[4];
#line 2416 "parse_tree.prog_util.c"
                            {
#line 2418 "parse_tree.prog_util.c"
                              return parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_26_26, ((MR_Box) (parse_tree__prog_util__V_18_18)), ((MR_Box) (parse_tree__prog_util__V_20_20)));
                            }
#line 74 "prog_util.m"
                          }
#line 74 "prog_util.m"
                      }
#line 74 "prog_util.m"
                  }
#line 74 "prog_util.m"
                else
#line 74 "prog_util.m"
                  {
#line 74 "prog_util.m"
                    MR_Word parse_tree__prog_util__TypeInfo_29_29;
#line 74 "prog_util.m"
                    MR_Word parse_tree__prog_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 74 "prog_util.m"
                    MR_Word parse_tree__prog_util__V_12_12;

#line 74 "prog_util.m"
                    parse_tree__prog_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 74 "prog_util.m"
                    if (parse_tree__prog_util__succeeded)
#line 74 "prog_util.m"
                      {
#line 74 "prog_util.m"
                        parse_tree__prog_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 2446 "parse_tree.prog_util.c"
                        parse_tree__prog_util__TypeInfo_29_29 = (MR_Word) &parse_tree__prog_util_scalar_common_1[4];
#line 2448 "parse_tree.prog_util.c"
                        {
#line 2450 "parse_tree.prog_util.c"
                          return parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_29_29, ((MR_Box) (parse_tree__prog_util__V_11_11)), ((MR_Box) (parse_tree__prog_util__V_12_12)));
                        }
#line 74 "prog_util.m"
                      }
#line 74 "prog_util.m"
                  }
#line 74 "prog_util.m"
    return parse_tree__prog_util__succeeded;
#line 74 "prog_util.m"
  }
#line 74 "prog_util.m"
}

#line 94 "prog_util.m"
void MR_CALL 
parse_tree__prog_util____Compare____maybe_modes_0_0(
#line 94 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__1_1,
#line 94 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 94 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3)
#line 94 "prog_util.m"
{
#line 94 "prog_util.m"
  {
#line 94 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 94 "prog_util.m"
    MR_Word parse_tree__prog_util__Cast_HeadVar1_4 = parse_tree__prog_util__HeadVar__2_2;
#line 94 "prog_util.m"
    MR_Word parse_tree__prog_util__Cast_HeadVar2_5 = parse_tree__prog_util__HeadVar__3_3;

#line 94 "prog_util.m"
    {
#line 94 "prog_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[3], parse_tree__prog_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_util__Cast_HeadVar2_5)));
#line 94 "prog_util.m"
      return;
    }
#line 94 "prog_util.m"
  }
#line 94 "prog_util.m"
}

#line 94 "prog_util.m"
MR_bool MR_CALL 
parse_tree__prog_util____Unify____maybe_modes_0_0(
#line 94 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 94 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2)
#line 94 "prog_util.m"
{
#line 94 "prog_util.m"
  {
#line 94 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 94 "prog_util.m"
    MR_Word parse_tree__prog_util__Cast_HeadVar1_3 = parse_tree__prog_util__HeadVar__1_1;
#line 94 "prog_util.m"
    MR_Word parse_tree__prog_util__Cast_HeadVar2_4 = parse_tree__prog_util__HeadVar__2_2;

#line 94 "prog_util.m"
    {
#line 94 "prog_util.m"
      return parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[3], ((MR_Box) (parse_tree__prog_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_util__Cast_HeadVar2_4)));
    }
#line 94 "prog_util.m"
    return parse_tree__prog_util__succeeded;
#line 94 "prog_util.m"
  }
#line 94 "prog_util.m"
}

#line 786 "prog_util.m"
static MR_Word MR_CALL 
parse_tree__prog_util__goal_list_to_conj_2_3_f_0(
#line 786 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_1,
#line 786 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 786 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3)
#line 786 "prog_util.m"
{
#line 788 "prog_util.m"
  {
#line 788 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 788 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__4_4;

#line 788 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 788 "prog_util.m"
      parse_tree__prog_util__HeadVar__4_4 = parse_tree__prog_util__HeadVar__2_2;
#line 788 "prog_util.m"
    else
#line 789 "prog_util.m"
      {
#line 789 "prog_util.m"
        MR_Word parse_tree__prog_util__Goal1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)));
#line 789 "prog_util.m"
        MR_Word parse_tree__prog_util__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
#line 789 "prog_util.m"
        MR_Word parse_tree__prog_util__V_11_11;
#line 789 "prog_util.m"
        MR_Word parse_tree__prog_util__V_12_12;

#line 790 "prog_util.m"
        {
#line 790 "prog_util.m"
          parse_tree__prog_util__V_12_12 = parse_tree__prog_util__goal_list_to_conj_2_3_f_0(parse_tree__prog_util__Context_1, parse_tree__prog_util__Goal1_9, parse_tree__prog_util__Goals_10);
        }
#line 790 "prog_util.m"
        {
#line 790 "prog_util.m"
          parse_tree__prog_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 0) = ((MR_Box) (parse_tree__prog_util__HeadVar__2_2));
#line 790 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 1) = ((MR_Box) (parse_tree__prog_util__V_12_12));
#line 790 "prog_util.m"
        }
#line 790 "prog_util.m"
        {
#line 790 "prog_util.m"
          parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 790 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_util__V_11_11));
#line 790 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 1) = ((MR_Box) (parse_tree__prog_util__Context_1));
#line 790 "prog_util.m"
        }
#line 789 "prog_util.m"
      }
#line 788 "prog_util.m"
    return parse_tree__prog_util__HeadVar__4_4;
#line 788 "prog_util.m"
  }
#line 786 "prog_util.m"
}

#line 679 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__make_n_fresh_vars_2_6_p_0(
#line 679 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_23,
#line 679 "prog_util.m"
  MR_String parse_tree__prog_util__BaseName_7,
#line 679 "prog_util.m"
  MR_Integer parse_tree__prog_util__N_8,
#line 679 "prog_util.m"
  MR_Integer parse_tree__prog_util__Max_9,
#line 679 "prog_util.m"
  MR_Word * parse_tree__prog_util__Vars_10,
#line 679 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_0_17,
#line 679 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_VarSet_18)
#line 679 "prog_util.m"
{
#line 685 "prog_util.m"
  {
#line 685 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded = (parse_tree__prog_util__N_8 == parse_tree__prog_util__Max_9);

#line 685 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 684 "prog_util.m"
      {
#line 684 "prog_util.m"
        *parse_tree__prog_util__Vars_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 684 "prog_util.m"
        *parse_tree__prog_util__STATE_VARIABLE_VarSet_18 = parse_tree__prog_util__STATE_VARIABLE_VarSet_0_17;
#line 684 "prog_util.m"
      }
#line 685 "prog_util.m"
    else
#line 686 "prog_util.m"
      {
#line 686 "prog_util.m"
        MR_Integer parse_tree__prog_util__N1_12 = (parse_tree__prog_util__N_8 + (MR_Integer) 1);
#line 686 "prog_util.m"
        MR_Word parse_tree__prog_util__Var_13;
#line 686 "prog_util.m"
        MR_String parse_tree__prog_util__Num_14;
#line 686 "prog_util.m"
        MR_String parse_tree__prog_util__VarName_15;
#line 686 "prog_util.m"
        MR_Word parse_tree__prog_util__Vars1_16;
#line 686 "prog_util.m"
        MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_20_20;
#line 686 "prog_util.m"
        MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_21_21;

#line 687 "prog_util.m"
        {
#line 687 "prog_util.m"
          mercury__varset__new_var_3_p_0(parse_tree__prog_util__TypeInfo_for_T_23, &parse_tree__prog_util__Var_13, parse_tree__prog_util__STATE_VARIABLE_VarSet_0_17, &parse_tree__prog_util__STATE_VARIABLE_VarSet_20_20);
        }
#line 688 "prog_util.m"
        {
#line 688 "prog_util.m"
          mercury__string__int_to_string_2_p_0(parse_tree__prog_util__N1_12, &parse_tree__prog_util__Num_14);
        }
#line 689 "prog_util.m"
        {
#line 689 "prog_util.m"
          mercury__string__append_3_p_2(parse_tree__prog_util__BaseName_7, parse_tree__prog_util__Num_14, &parse_tree__prog_util__VarName_15);
        }
#line 690 "prog_util.m"
        {
#line 690 "prog_util.m"
          mercury__varset__name_var_4_p_0(parse_tree__prog_util__TypeInfo_for_T_23, parse_tree__prog_util__Var_13, parse_tree__prog_util__VarName_15, parse_tree__prog_util__STATE_VARIABLE_VarSet_20_20, &parse_tree__prog_util__STATE_VARIABLE_VarSet_21_21);
        }
#line 692 "prog_util.m"
        {
#line 692 "prog_util.m"
          parse_tree__prog_util__make_n_fresh_vars_2_6_p_0(parse_tree__prog_util__TypeInfo_for_T_23, parse_tree__prog_util__BaseName_7, parse_tree__prog_util__N1_12, parse_tree__prog_util__Max_9, &parse_tree__prog_util__Vars1_16, parse_tree__prog_util__STATE_VARIABLE_VarSet_21_21, parse_tree__prog_util__STATE_VARIABLE_VarSet_18);
        }
#line 691 "prog_util.m"
        {
#line 691 "prog_util.m"
          MR_Word base;
#line 691 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "prog_util.m"
          *parse_tree__prog_util__Vars_10 = base;
#line 691 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Var_13));
#line 691 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars1_16));
#line 691 "prog_util.m"
        }
#line 686 "prog_util.m"
      }
#line 685 "prog_util.m"
  }
#line 679 "prog_util.m"
}

#line 514 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_catch_expr_4_p_0(
#line 514 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 514 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 514 "prog_util.m"
  MR_Word parse_tree__prog_util__Catch0_7,
#line 514 "prog_util.m"
  MR_Word * parse_tree__prog_util__Catch_8)
#line 514 "prog_util.m"
{
#line 517 "prog_util.m"
  {
#line 517 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 517 "prog_util.m"
    MR_Word parse_tree__prog_util__Term0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Catch0_7, (MR_Integer) 0)));
#line 517 "prog_util.m"
    MR_Word parse_tree__prog_util__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Catch0_7, (MR_Integer) 1)));
#line 517 "prog_util.m"
    MR_Word parse_tree__prog_util__Term_11;
#line 517 "prog_util.m"
    MR_Word parse_tree__prog_util__Goal_12;
#line 517 "prog_util.m"
    MR_Word parse_tree__prog_util__V_13_13;
#line 517 "prog_util.m"
    MR_Word parse_tree__prog_util__V_14_14;
#line 517 "prog_util.m"
    MR_Word parse_tree__prog_util__Goal0_18;
#line 517 "prog_util.m"
    MR_Word parse_tree__prog_util__Context_19;
#line 517 "prog_util.m"
    MR_Word parse_tree__prog_util__Goal_20;

#line 519 "prog_util.m"
    {
#line 519 "prog_util.m"
      parse_tree__prog_util__V_14_14 = mercury__term__context_init_0_f_0();
    }
#line 519 "prog_util.m"
    {
#line 519 "prog_util.m"
      parse_tree__prog_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_13_13, 0) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 519 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_util__V_14_14));
#line 519 "prog_util.m"
    }
#line 519 "prog_util.m"
    {
#line 519 "prog_util.m"
      mercury__term__substitute_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_util__Term0_9, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__V_13_13, &parse_tree__prog_util__Term_11);
    }
#line 267 "prog_util.m"
    parse_tree__prog_util__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal0_10, (MR_Integer) 0)));
#line 267 "prog_util.m"
    parse_tree__prog_util__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal0_10, (MR_Integer) 1)));
#line 268 "prog_util.m"
    {
#line 268 "prog_util.m"
      parse_tree__prog_util__rename_in_goal_expr_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_18, &parse_tree__prog_util__Goal_20);
    }
#line 267 "prog_util.m"
    {
#line 267 "prog_util.m"
      parse_tree__prog_util__Goal_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 267 "prog_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal_12, 0) = ((MR_Box) (parse_tree__prog_util__Goal_20));
#line 267 "prog_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal_12, 1) = ((MR_Box) (parse_tree__prog_util__Context_19));
#line 267 "prog_util.m"
    }
#line 521 "prog_util.m"
    {
#line 521 "prog_util.m"
      MR_Word base;
#line 521 "prog_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 521 "prog_util.m"
      *parse_tree__prog_util__Catch_8 = base;
#line 521 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__Term_11));
#line 521 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__Goal_12));
#line 521 "prog_util.m"
    }
#line 517 "prog_util.m"
  }
#line 514 "prog_util.m"
}

#line 501 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_maybe_var_4_p_0(
#line 501 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 501 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 501 "prog_util.m"
  MR_Word parse_tree__prog_util__MaybeVar0_7,
#line 501 "prog_util.m"
  MR_Word * parse_tree__prog_util__MaybeVar_8)
#line 501 "prog_util.m"
{
#line 506 "prog_util.m"
  {
#line 506 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 506 "prog_util.m"
    if ((parse_tree__prog_util__MaybeVar0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 511 "prog_util.m"
      *parse_tree__prog_util__MaybeVar_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 506 "prog_util.m"
    else
#line 506 "prog_util.m"
      {
#line 506 "prog_util.m"
        MR_Word parse_tree__prog_util__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeVar0_7, (MR_Integer) 0)));
#line 506 "prog_util.m"
        MR_Word parse_tree__prog_util__Var_10;

#line 495 "prog_util.m"
        {
#line 495 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__Var0_9)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
#line 497 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 496 "prog_util.m"
          parse_tree__prog_util__Var_10 = parse_tree__prog_util__NewVar_6;
#line 497 "prog_util.m"
        else
#line 498 "prog_util.m"
          parse_tree__prog_util__Var_10 = parse_tree__prog_util__Var0_9;
#line 508 "prog_util.m"
        {
#line 508 "prog_util.m"
          MR_Word base;
#line 508 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 508 "prog_util.m"
          *parse_tree__prog_util__MaybeVar_8 = base;
#line 508 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Var_10));
#line 508 "prog_util.m"
        }
#line 506 "prog_util.m"
      }
#line 506 "prog_util.m"
  }
#line 501 "prog_util.m"
}

#line 491 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_var_4_p_0(
#line 491 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 491 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 491 "prog_util.m"
  MR_Word parse_tree__prog_util__Var0_7,
#line 491 "prog_util.m"
  MR_Word * parse_tree__prog_util__Var_8)
#line 491 "prog_util.m"
{
#line 497 "prog_util.m"
  {
#line 497 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 495 "prog_util.m"
    {
#line 495 "prog_util.m"
      parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__Var0_7)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
    }
#line 497 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 496 "prog_util.m"
      *parse_tree__prog_util__Var_8 = parse_tree__prog_util__NewVar_6;
#line 497 "prog_util.m"
    else
#line 498 "prog_util.m"
      *parse_tree__prog_util__Var_8 = parse_tree__prog_util__Var0_7;
#line 497 "prog_util.m"
  }
#line 491 "prog_util.m"
}

#line 483 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_vars_4_p_0(
#line 483 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_1,
#line 483 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_2,
#line 483 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3,
#line 483 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__4_4)
#line 483 "prog_util.m"
{
#line 486 "prog_util.m"
  {
#line 486 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 486 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "prog_util.m"
      *parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 486 "prog_util.m"
    else
#line 487 "prog_util.m"
      {
#line 487 "prog_util.m"
        MR_Word parse_tree__prog_util__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)));
#line 487 "prog_util.m"
        MR_Word parse_tree__prog_util__Vars0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
#line 487 "prog_util.m"
        MR_Word parse_tree__prog_util__Var_11;
#line 487 "prog_util.m"
        MR_Word parse_tree__prog_util__Vars_12;

#line 495 "prog_util.m"
        {
#line 495 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__Var0_9)), ((MR_Box) (parse_tree__prog_util__OldVar_1)));
        }
#line 497 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 496 "prog_util.m"
          parse_tree__prog_util__Var_11 = parse_tree__prog_util__NewVar_2;
#line 497 "prog_util.m"
        else
#line 498 "prog_util.m"
          parse_tree__prog_util__Var_11 = parse_tree__prog_util__Var0_9;
#line 489 "prog_util.m"
        {
#line 489 "prog_util.m"
          parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_1, parse_tree__prog_util__NewVar_2, parse_tree__prog_util__Vars0_10, &parse_tree__prog_util__Vars_12);
        }
#line 487 "prog_util.m"
        {
#line 487 "prog_util.m"
          MR_Word base;
#line 487 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "prog_util.m"
          *parse_tree__prog_util__HeadVar__4_4 = base;
#line 487 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Var_11));
#line 487 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars_12));
#line 487 "prog_util.m"
        }
#line 487 "prog_util.m"
      }
#line 486 "prog_util.m"
  }
#line 483 "prog_util.m"
}

#line 475 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(
#line 475 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 475 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 475 "prog_util.m"
  MR_Word parse_tree__prog_util__TMV0_7,
#line 475 "prog_util.m"
  MR_Word * parse_tree__prog_util__TMV_8)
#line 475 "prog_util.m"
{
#line 478 "prog_util.m"
  {
#line 478 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 478 "prog_util.m"
    MR_String parse_tree__prog_util__MutableName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__TMV0_7, (MR_Integer) 0)));
#line 478 "prog_util.m"
    MR_Word parse_tree__prog_util__StateVar0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__TMV0_7, (MR_Integer) 1)));
#line 478 "prog_util.m"
    MR_Word parse_tree__prog_util__StateVar_11;

#line 495 "prog_util.m"
    {
#line 495 "prog_util.m"
      parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__StateVar0_10)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
    }
#line 497 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 496 "prog_util.m"
      parse_tree__prog_util__StateVar_11 = parse_tree__prog_util__NewVar_6;
#line 497 "prog_util.m"
    else
#line 498 "prog_util.m"
      parse_tree__prog_util__StateVar_11 = parse_tree__prog_util__StateVar0_10;
#line 481 "prog_util.m"
    {
#line 481 "prog_util.m"
      MR_Word base;
#line 481 "prog_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 481 "prog_util.m"
      *parse_tree__prog_util__TMV_8 = base;
#line 481 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__MutableName_9));
#line 481 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__StateVar_11));
#line 481 "prog_util.m"
    }
#line 478 "prog_util.m"
  }
#line 475 "prog_util.m"
}

#line 460 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(
#line 460 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 460 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 460 "prog_util.m"
  MR_Word parse_tree__prog_util__Comp0_7,
#line 460 "prog_util.m"
  MR_Word * parse_tree__prog_util__Comp_8)
#line 460 "prog_util.m"
{
#line 465 "prog_util.m"
  {
#line 465 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 465 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__Comp0_7)) == (MR_mktag((MR_Integer) 0))))
#line 465 "prog_util.m"
      {
#line 465 "prog_util.m"
        MR_Word parse_tree__prog_util__SVar0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Comp0_7, (MR_Integer) 0)));
#line 465 "prog_util.m"
        MR_Word parse_tree__prog_util__SVar_10;

#line 495 "prog_util.m"
        {
#line 495 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__SVar0_9)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
#line 497 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 496 "prog_util.m"
          parse_tree__prog_util__SVar_10 = parse_tree__prog_util__NewVar_6;
#line 497 "prog_util.m"
        else
#line 498 "prog_util.m"
          parse_tree__prog_util__SVar_10 = parse_tree__prog_util__SVar0_9;
#line 467 "prog_util.m"
        {
#line 467 "prog_util.m"
          MR_Word base;
#line 467 "prog_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 467 "prog_util.m"
          *parse_tree__prog_util__Comp_8 = base;
#line 467 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__SVar_10));
#line 467 "prog_util.m"
        }
#line 465 "prog_util.m"
      }
#line 465 "prog_util.m"
    else
#line 469 "prog_util.m"
      {
#line 469 "prog_util.m"
        MR_Word parse_tree__prog_util__IVar0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Comp0_7, (MR_Integer) 0)));
#line 469 "prog_util.m"
        MR_Word parse_tree__prog_util__OVar0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Comp0_7, (MR_Integer) 1)));
#line 469 "prog_util.m"
        MR_Word parse_tree__prog_util__IVar_13;
#line 469 "prog_util.m"
        MR_Word parse_tree__prog_util__OVar_14;

#line 495 "prog_util.m"
        {
#line 495 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__IVar0_11)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
#line 497 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 496 "prog_util.m"
          parse_tree__prog_util__IVar_13 = parse_tree__prog_util__NewVar_6;
#line 497 "prog_util.m"
        else
#line 498 "prog_util.m"
          parse_tree__prog_util__IVar_13 = parse_tree__prog_util__IVar0_11;
#line 495 "prog_util.m"
        {
#line 495 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__OVar0_12)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
#line 497 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 496 "prog_util.m"
          parse_tree__prog_util__OVar_14 = parse_tree__prog_util__NewVar_6;
#line 497 "prog_util.m"
        else
#line 498 "prog_util.m"
          parse_tree__prog_util__OVar_14 = parse_tree__prog_util__OVar0_12;
#line 472 "prog_util.m"
        {
#line 472 "prog_util.m"
          MR_Word base;
#line 472 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "prog_util.m"
          *parse_tree__prog_util__Comp_8 = base;
#line 472 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__IVar_13));
#line 472 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__OVar_14));
#line 472 "prog_util.m"
        }
#line 469 "prog_util.m"
      }
#line 465 "prog_util.m"
  }
#line 460 "prog_util.m"
}

#line 411 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_expr_4_p_0_4(
#line 411 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 411 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 411 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2)
#line 411 "prog_util.m"
{
#line 411 "prog_util.m"
  {
#line 411 "prog_util.m"
    MR_Box parse_tree__prog_util__closure = parse_tree__prog_util__closure_arg;
#line 411 "prog_util.m"
    MR_Word parse_tree__prog_util__conv3_Catch_8;

#line 411 "prog_util.m"
    {
#line 411 "prog_util.m"
      parse_tree__prog_util__rename_in_catch_expr_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv3_Catch_8);
    }
#line 411 "prog_util.m"
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv3_Catch_8));
#line 411 "prog_util.m"
  }
#line 411 "prog_util.m"
}

#line 376 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_expr_4_p_0_3(
#line 376 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 376 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 376 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2)
#line 376 "prog_util.m"
{
#line 376 "prog_util.m"
  {
#line 376 "prog_util.m"
    MR_Box parse_tree__prog_util__closure = parse_tree__prog_util__closure_arg;
#line 376 "prog_util.m"
    MR_Word parse_tree__prog_util__conv2_TMV_8;

#line 376 "prog_util.m"
    {
#line 376 "prog_util.m"
      parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv2_TMV_8);
    }
#line 376 "prog_util.m"
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv2_TMV_8));
#line 376 "prog_util.m"
  }
#line 376 "prog_util.m"
}

#line 395 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_expr_4_p_0_2(
#line 395 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 395 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 395 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2)
#line 395 "prog_util.m"
{
#line 395 "prog_util.m"
  {
#line 395 "prog_util.m"
    MR_Box parse_tree__prog_util__closure = parse_tree__prog_util__closure_arg;
#line 395 "prog_util.m"
    MR_Word parse_tree__prog_util__conv1_HeadVar__4_4;

#line 395 "prog_util.m"
    {
#line 395 "prog_util.m"
      parse_tree__prog_util__rename_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv1_HeadVar__4_4);
    }
#line 395 "prog_util.m"
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv1_HeadVar__4_4));
#line 395 "prog_util.m"
  }
#line 395 "prog_util.m"
}

#line 390 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_expr_4_p_0_1(
#line 390 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 390 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 390 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2)
#line 390 "prog_util.m"
{
#line 390 "prog_util.m"
  {
#line 390 "prog_util.m"
    MR_Box parse_tree__prog_util__closure = parse_tree__prog_util__closure_arg;
#line 390 "prog_util.m"
    MR_Word parse_tree__prog_util__conv0_Var_8;

#line 390 "prog_util.m"
    {
#line 390 "prog_util.m"
      parse_tree__prog_util__rename_in_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv0_Var_8);
    }
#line 390 "prog_util.m"
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv0_Var_8));
#line 390 "prog_util.m"
  }
#line 390 "prog_util.m"
}

#line 270 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_expr_4_p_0(
#line 270 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 270 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 270 "prog_util.m"
  MR_Word parse_tree__prog_util__Expr0_7,
#line 270 "prog_util.m"
  MR_Word * parse_tree__prog_util__Expr_8)
#line 270 "prog_util.m"
{
#line 277 "prog_util.m"
  {
#line 277 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 277 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 1))))
#line 280 "prog_util.m"
      {
#line 280 "prog_util.m"
        MR_Word parse_tree__prog_util__GoalA0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)));
#line 280 "prog_util.m"
        MR_Word parse_tree__prog_util__GoalB0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 280 "prog_util.m"
        MR_Word parse_tree__prog_util__GoalA_11;
#line 280 "prog_util.m"
        MR_Word parse_tree__prog_util__GoalB_12;

#line 281 "prog_util.m"
        {
#line 281 "prog_util.m"
          parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__GoalA0_9, &parse_tree__prog_util__GoalA_11);
        }
#line 282 "prog_util.m"
        {
#line 282 "prog_util.m"
          parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__GoalB0_10, &parse_tree__prog_util__GoalB_12);
        }
#line 283 "prog_util.m"
        {
#line 283 "prog_util.m"
          MR_Word base;
#line 283 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "prog_util.m"
          *parse_tree__prog_util__Expr_8 = base;
#line 283 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__GoalA_11));
#line 283 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__GoalB_12));
#line 283 "prog_util.m"
        }
#line 280 "prog_util.m"
      }
#line 277 "prog_util.m"
    else
#line 277 "prog_util.m"
      if ((((parse_tree__prog_util__Expr0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))) || ((parse_tree__prog_util__Expr0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))))
#line 278 "prog_util.m"
        *parse_tree__prog_util__Expr_8 = parse_tree__prog_util__Expr0_7;
#line 277 "prog_util.m"
      else
#line 277 "prog_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 2))))
#line 285 "prog_util.m"
          {
#line 285 "prog_util.m"
            MR_Word parse_tree__prog_util__GoalA0_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)));
#line 285 "prog_util.m"
            MR_Word parse_tree__prog_util__GoalB0_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 285 "prog_util.m"
            MR_Word parse_tree__prog_util__GoalA_89;
#line 285 "prog_util.m"
            MR_Word parse_tree__prog_util__GoalB_90;

#line 286 "prog_util.m"
            {
#line 286 "prog_util.m"
              parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__GoalA0_87, &parse_tree__prog_util__GoalA_89);
            }
#line 287 "prog_util.m"
            {
#line 287 "prog_util.m"
              parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__GoalB0_88, &parse_tree__prog_util__GoalB_90);
            }
#line 288 "prog_util.m"
            {
#line 288 "prog_util.m"
              MR_Word base;
#line 288 "prog_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "prog_util.m"
              *parse_tree__prog_util__Expr_8 = base;
#line 288 "prog_util.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_util__GoalA_89));
#line 288 "prog_util.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_util__GoalB_90));
#line 288 "prog_util.m"
            }
#line 285 "prog_util.m"
          }
#line 277 "prog_util.m"
        else
#line 277 "prog_util.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 309 "prog_util.m"
            {
#line 309 "prog_util.m"
              MR_Word parse_tree__prog_util__Goal0_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 309 "prog_util.m"
              MR_Word parse_tree__prog_util__Goal_102;
#line 309 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 309 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars_104;

#line 310 "prog_util.m"
              {
#line 310 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_103, &parse_tree__prog_util__Vars_104);
              }
#line 311 "prog_util.m"
              {
#line 311 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_101, &parse_tree__prog_util__Goal_102);
              }
#line 312 "prog_util.m"
              {
#line 312 "prog_util.m"
                MR_Word base;
#line 312 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 312 "prog_util.m"
                *parse_tree__prog_util__Expr_8 = base;
#line 312 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 312 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars_104));
#line 312 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Goal_102));
#line 312 "prog_util.m"
              }
#line 309 "prog_util.m"
            }
#line 277 "prog_util.m"
          else
#line 277 "prog_util.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 314 "prog_util.m"
              {
#line 314 "prog_util.m"
                MR_Word parse_tree__prog_util__Goal0_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 314 "prog_util.m"
                MR_Word parse_tree__prog_util__Goal_106;
#line 314 "prog_util.m"
                MR_Word parse_tree__prog_util__Vars0_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 314 "prog_util.m"
                MR_Word parse_tree__prog_util__Vars_108;

#line 315 "prog_util.m"
                {
#line 315 "prog_util.m"
                  parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_107, &parse_tree__prog_util__Vars_108);
                }
#line 316 "prog_util.m"
                {
#line 316 "prog_util.m"
                  parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_105, &parse_tree__prog_util__Goal_106);
                }
#line 317 "prog_util.m"
                {
#line 317 "prog_util.m"
                  MR_Word base;
#line 317 "prog_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 317 "prog_util.m"
                  *parse_tree__prog_util__Expr_8 = base;
#line 317 "prog_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 317 "prog_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars_108));
#line 317 "prog_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Goal_106));
#line 317 "prog_util.m"
                }
#line 314 "prog_util.m"
              }
#line 277 "prog_util.m"
            else
#line 277 "prog_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 382 "prog_util.m"
                {
#line 382 "prog_util.m"
                  MR_Word parse_tree__prog_util__TypeInfo_176_176;
#line 382 "prog_util.m"
                  MR_Word parse_tree__prog_util__InVars0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 382 "prog_util.m"
                  MR_Word parse_tree__prog_util__OutVars0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 382 "prog_util.m"
                  MR_Word parse_tree__prog_util__MaybeVars0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 3)));
#line 382 "prog_util.m"
                  MR_Word parse_tree__prog_util__MainExpr0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 4)));
#line 382 "prog_util.m"
                  MR_Word parse_tree__prog_util__OrElseExpr0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 5)));
#line 382 "prog_util.m"
                  MR_Word parse_tree__prog_util__InVars_40;
#line 382 "prog_util.m"
                  MR_Word parse_tree__prog_util__OutVars_41;
#line 382 "prog_util.m"
                  MR_Word parse_tree__prog_util__MaybeVars_42;
#line 382 "prog_util.m"
                  MR_Word parse_tree__prog_util__MainExpr_45;
#line 382 "prog_util.m"
                  MR_Word parse_tree__prog_util__OrElseExpr_46;
#line 382 "prog_util.m"
                  MR_Word parse_tree__prog_util__V_85_85;

#line 383 "prog_util.m"
                  {
#line 383 "prog_util.m"
                    parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__InVars0_35, &parse_tree__prog_util__InVars_40);
                  }
#line 384 "prog_util.m"
                  {
#line 384 "prog_util.m"
                    parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__OutVars0_36, &parse_tree__prog_util__OutVars_41);
                  }
#line 388 "prog_util.m"
                  if ((parse_tree__prog_util__MaybeVars0_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 387 "prog_util.m"
                    parse_tree__prog_util__MaybeVars_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "prog_util.m"
                  else
#line 389 "prog_util.m"
                    {
#line 389 "prog_util.m"
                      MR_Word parse_tree__prog_util__TypeInfo_173_173;
#line 389 "prog_util.m"
                      MR_Word parse_tree__prog_util__TransVars0_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeVars0_37, (MR_Integer) 0)));
#line 389 "prog_util.m"
                      MR_Word parse_tree__prog_util__TransVars_44;
#line 389 "prog_util.m"
                      MR_Word parse_tree__prog_util__V_84_84;

#line 390 "prog_util.m"
                      {
#line 390 "prog_util.m"
                        parse_tree__prog_util__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 390 "prog_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_84_84, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[0]));
#line 390 "prog_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_84_84, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_expr_4_p_0_1));
#line 390 "prog_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_84_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 390 "prog_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_84_84, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
#line 390 "prog_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_84_84, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 390 "prog_util.m"
                      }
#line 3515 "parse_tree.prog_util.c"
                      parse_tree__prog_util__TypeInfo_173_173 = (MR_Word) &parse_tree__prog_util_scalar_common_1[1];
#line 390 "prog_util.m"
                      {
#line 390 "prog_util.m"
                        mercury__list__map_3_p_0(parse_tree__prog_util__TypeInfo_173_173, parse_tree__prog_util__TypeInfo_173_173, parse_tree__prog_util__V_84_84, parse_tree__prog_util__TransVars0_43, &parse_tree__prog_util__TransVars_44);
                      }
#line 392 "prog_util.m"
                      {
#line 392 "prog_util.m"
                        parse_tree__prog_util__MaybeVars_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 392 "prog_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeVars_42, 0) = ((MR_Box) (parse_tree__prog_util__TransVars_44));
#line 392 "prog_util.m"
                      }
#line 389 "prog_util.m"
                    }
#line 394 "prog_util.m"
                  {
#line 394 "prog_util.m"
                    parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__MainExpr0_38, &parse_tree__prog_util__MainExpr_45);
                  }
#line 395 "prog_util.m"
                  {
#line 395 "prog_util.m"
                    parse_tree__prog_util__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 395 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_85_85, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[1]));
#line 395 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_85_85, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_expr_4_p_0_2));
#line 395 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 395 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_85_85, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
#line 395 "prog_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_85_85, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 395 "prog_util.m"
                  }
#line 3553 "parse_tree.prog_util.c"
                  parse_tree__prog_util__TypeInfo_176_176 = (MR_Word) &parse_tree__prog_util_scalar_common_2[1];
#line 395 "prog_util.m"
                  {
#line 395 "prog_util.m"
                    mercury__list__map_3_p_0(parse_tree__prog_util__TypeInfo_176_176, parse_tree__prog_util__TypeInfo_176_176, parse_tree__prog_util__V_85_85, parse_tree__prog_util__OrElseExpr0_39, &parse_tree__prog_util__OrElseExpr_46);
                  }
#line 396 "prog_util.m"
                  {
#line 396 "prog_util.m"
                    MR_Word base;
#line 396 "prog_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 396 "prog_util.m"
                    *parse_tree__prog_util__Expr_8 = base;
#line 396 "prog_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 396 "prog_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__InVars_40));
#line 396 "prog_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__OutVars_41));
#line 396 "prog_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__MaybeVars_42));
#line 396 "prog_util.m"
                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__MainExpr_45));
#line 396 "prog_util.m"
                    MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__OrElseExpr_46));
#line 396 "prog_util.m"
                  }
#line 382 "prog_util.m"
                }
#line 277 "prog_util.m"
              else
#line 277 "prog_util.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 447 "prog_util.m"
                  {
#line 447 "prog_util.m"
                    MR_Word parse_tree__prog_util__SymName_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 447 "prog_util.m"
                    MR_Word parse_tree__prog_util__V_77_77;
#line 447 "prog_util.m"
                    MR_Word parse_tree__prog_util__V_78_78;
#line 447 "prog_util.m"
                    MR_Word parse_tree__prog_util__Purity_164 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 3)));
#line 447 "prog_util.m"
                    MR_Word parse_tree__prog_util__Terms0_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 447 "prog_util.m"
                    MR_Word parse_tree__prog_util__Terms_166;

#line 448 "prog_util.m"
                    {
#line 448 "prog_util.m"
                      parse_tree__prog_util__V_78_78 = mercury__term__context_init_0_f_0();
                    }
#line 448 "prog_util.m"
                    {
#line 448 "prog_util.m"
                      parse_tree__prog_util__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "prog_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_77_77, 0) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 448 "prog_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_77_77, 1) = ((MR_Box) (parse_tree__prog_util__V_78_78));
#line 448 "prog_util.m"
                    }
#line 448 "prog_util.m"
                    {
#line 448 "prog_util.m"
                      mercury__term__substitute_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_util__Terms0_165, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__V_77_77, &parse_tree__prog_util__Terms_166);
                    }
#line 450 "prog_util.m"
                    {
#line 450 "prog_util.m"
                      MR_Word base;
#line 450 "prog_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 450 "prog_util.m"
                      *parse_tree__prog_util__Expr_8 = base;
#line 450 "prog_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 450 "prog_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__SymName_68));
#line 450 "prog_util.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Terms_166));
#line 450 "prog_util.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__Purity_164));
#line 450 "prog_util.m"
                    }
#line 447 "prog_util.m"
                  }
#line 277 "prog_util.m"
                else
#line 277 "prog_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 290 "prog_util.m"
                    {
#line 290 "prog_util.m"
                      MR_Word parse_tree__prog_util__GoalA0_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 290 "prog_util.m"
                      MR_Word parse_tree__prog_util__GoalB0_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 290 "prog_util.m"
                      MR_Word parse_tree__prog_util__GoalA_93;
#line 290 "prog_util.m"
                      MR_Word parse_tree__prog_util__GoalB_94;

#line 291 "prog_util.m"
                      {
#line 291 "prog_util.m"
                        parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__GoalA0_91, &parse_tree__prog_util__GoalA_93);
                      }
#line 292 "prog_util.m"
                      {
#line 292 "prog_util.m"
                        parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__GoalB0_92, &parse_tree__prog_util__GoalB_94);
                      }
#line 293 "prog_util.m"
                      {
#line 293 "prog_util.m"
                        MR_Word base;
#line 293 "prog_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 293 "prog_util.m"
                        *parse_tree__prog_util__Expr_8 = base;
#line 293 "prog_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 293 "prog_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__GoalA_93));
#line 293 "prog_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__GoalB_94));
#line 293 "prog_util.m"
                      }
#line 290 "prog_util.m"
                    }
#line 277 "prog_util.m"
                  else
#line 277 "prog_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 429 "prog_util.m"
                      {
#line 429 "prog_util.m"
                        MR_Word parse_tree__prog_util__GoalA0_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 429 "prog_util.m"
                        MR_Word parse_tree__prog_util__GoalB0_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 429 "prog_util.m"
                        MR_Word parse_tree__prog_util__GoalA_154;
#line 429 "prog_util.m"
                        MR_Word parse_tree__prog_util__GoalB_155;

#line 430 "prog_util.m"
                        {
#line 430 "prog_util.m"
                          parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__GoalA0_152, &parse_tree__prog_util__GoalA_154);
                        }
#line 431 "prog_util.m"
                        {
#line 431 "prog_util.m"
                          parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__GoalB0_153, &parse_tree__prog_util__GoalB_155);
                        }
#line 432 "prog_util.m"
                        {
#line 432 "prog_util.m"
                          MR_Word base;
#line 432 "prog_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 432 "prog_util.m"
                          *parse_tree__prog_util__Expr_8 = base;
#line 432 "prog_util.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 432 "prog_util.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__GoalA_154));
#line 432 "prog_util.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__GoalB_155));
#line 432 "prog_util.m"
                        }
#line 429 "prog_util.m"
                      }
#line 277 "prog_util.m"
                    else
#line 277 "prog_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 19))))
#line 442 "prog_util.m"
                        {
#line 442 "prog_util.m"
                          MR_String parse_tree__prog_util__Name_65 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 442 "prog_util.m"
                          MR_Word parse_tree__prog_util__Terms0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 442 "prog_util.m"
                          MR_Word parse_tree__prog_util__Terms_67;
#line 442 "prog_util.m"
                          MR_Word parse_tree__prog_util__V_79_79;
#line 442 "prog_util.m"
                          MR_Word parse_tree__prog_util__V_80_80;

#line 443 "prog_util.m"
                          {
#line 443 "prog_util.m"
                            parse_tree__prog_util__V_80_80 = mercury__term__context_init_0_f_0();
                          }
#line 443 "prog_util.m"
                          {
#line 443 "prog_util.m"
                            parse_tree__prog_util__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "prog_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_79_79, 0) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 443 "prog_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_79_79, 1) = ((MR_Box) (parse_tree__prog_util__V_80_80));
#line 443 "prog_util.m"
                          }
#line 443 "prog_util.m"
                          {
#line 443 "prog_util.m"
                            mercury__term__substitute_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_util__Terms0_66, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__V_79_79, &parse_tree__prog_util__Terms_67);
                          }
#line 445 "prog_util.m"
                          {
#line 445 "prog_util.m"
                            MR_Word base;
#line 445 "prog_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 445 "prog_util.m"
                            *parse_tree__prog_util__Expr_8 = base;
#line 445 "prog_util.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 445 "prog_util.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Name_65));
#line 445 "prog_util.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Terms_67));
#line 445 "prog_util.m"
                          }
#line 442 "prog_util.m"
                        }
#line 277 "prog_util.m"
                      else
#line 277 "prog_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 434 "prog_util.m"
                          {
#line 434 "prog_util.m"
                            MR_Word parse_tree__prog_util__Cond0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 3)));
#line 434 "prog_util.m"
                            MR_Word parse_tree__prog_util__Cond_64;
#line 434 "prog_util.m"
                            MR_Word parse_tree__prog_util__Vars0_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 434 "prog_util.m"
                            MR_Word parse_tree__prog_util__Vars_157;
#line 434 "prog_util.m"
                            MR_Word parse_tree__prog_util__StateVars0_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 434 "prog_util.m"
                            MR_Word parse_tree__prog_util__StateVars_159;
#line 434 "prog_util.m"
                            MR_Word parse_tree__prog_util__Then0_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 4)));
#line 434 "prog_util.m"
                            MR_Word parse_tree__prog_util__Then_161;
#line 434 "prog_util.m"
                            MR_Word parse_tree__prog_util__Else0_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 5)));
#line 434 "prog_util.m"
                            MR_Word parse_tree__prog_util__Else_163;

#line 435 "prog_util.m"
                            {
#line 435 "prog_util.m"
                              parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_156, &parse_tree__prog_util__Vars_157);
                            }
#line 436 "prog_util.m"
                            {
#line 436 "prog_util.m"
                              parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_158, &parse_tree__prog_util__StateVars_159);
                            }
#line 437 "prog_util.m"
                            {
#line 437 "prog_util.m"
                              parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Cond0_63, &parse_tree__prog_util__Cond_64);
                            }
#line 438 "prog_util.m"
                            {
#line 438 "prog_util.m"
                              parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Then0_160, &parse_tree__prog_util__Then_161);
                            }
#line 439 "prog_util.m"
                            {
#line 439 "prog_util.m"
                              parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Else0_162, &parse_tree__prog_util__Else_163);
                            }
#line 440 "prog_util.m"
                            {
#line 440 "prog_util.m"
                              MR_Word base;
#line 440 "prog_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 440 "prog_util.m"
                              *parse_tree__prog_util__Expr_8 = base;
#line 440 "prog_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 440 "prog_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars_157));
#line 440 "prog_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__StateVars_159));
#line 440 "prog_util.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__Cond_64));
#line 440 "prog_util.m"
                              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__Then_161));
#line 440 "prog_util.m"
                              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__Else_163));
#line 440 "prog_util.m"
                            }
#line 434 "prog_util.m"
                          }
#line 277 "prog_util.m"
                        else
#line 277 "prog_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 424 "prog_util.m"
                            {
#line 424 "prog_util.m"
                              MR_Word parse_tree__prog_util__GoalA0_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 424 "prog_util.m"
                              MR_Word parse_tree__prog_util__GoalB0_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 424 "prog_util.m"
                              MR_Word parse_tree__prog_util__GoalA_150;
#line 424 "prog_util.m"
                              MR_Word parse_tree__prog_util__GoalB_151;

#line 425 "prog_util.m"
                              {
#line 425 "prog_util.m"
                                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__GoalA0_148, &parse_tree__prog_util__GoalA_150);
                              }
#line 426 "prog_util.m"
                              {
#line 426 "prog_util.m"
                                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__GoalB0_149, &parse_tree__prog_util__GoalB_151);
                              }
#line 427 "prog_util.m"
                              {
#line 427 "prog_util.m"
                                MR_Word base;
#line 427 "prog_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 427 "prog_util.m"
                                *parse_tree__prog_util__Expr_8 = base;
#line 427 "prog_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 427 "prog_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__GoalA_150));
#line 427 "prog_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__GoalB_151));
#line 427 "prog_util.m"
                              }
#line 424 "prog_util.m"
                            }
#line 277 "prog_util.m"
                          else
#line 277 "prog_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 295 "prog_util.m"
                              {
#line 295 "prog_util.m"
                                MR_Word parse_tree__prog_util__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 295 "prog_util.m"
                                MR_Word parse_tree__prog_util__Goal_14;

#line 296 "prog_util.m"
                                {
#line 296 "prog_util.m"
                                  parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_13, &parse_tree__prog_util__Goal_14);
                                }
#line 297 "prog_util.m"
                                {
#line 297 "prog_util.m"
                                  MR_Word base;
#line 297 "prog_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "prog_util.m"
                                  *parse_tree__prog_util__Expr_8 = base;
#line 297 "prog_util.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 297 "prog_util.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Goal_14));
#line 297 "prog_util.m"
                                }
#line 295 "prog_util.m"
                              }
#line 277 "prog_util.m"
                            else
#line 277 "prog_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 344 "prog_util.m"
                                {
#line 344 "prog_util.m"
                                  MR_Word parse_tree__prog_util__Goal0_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 5)));
#line 344 "prog_util.m"
                                  MR_Word parse_tree__prog_util__Goal_126;
#line 344 "prog_util.m"
                                  MR_Word parse_tree__prog_util__Vars0_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 344 "prog_util.m"
                                  MR_Word parse_tree__prog_util__Vars_128;
#line 344 "prog_util.m"
                                  MR_Word parse_tree__prog_util__StateVars0_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 344 "prog_util.m"
                                  MR_Word parse_tree__prog_util__DotSVars0_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 3)));
#line 344 "prog_util.m"
                                  MR_Word parse_tree__prog_util__ColonSVars0_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 4)));
#line 344 "prog_util.m"
                                  MR_Word parse_tree__prog_util__StateVars_132;
#line 344 "prog_util.m"
                                  MR_Word parse_tree__prog_util__DotSVars_133;
#line 344 "prog_util.m"
                                  MR_Word parse_tree__prog_util__ColonSVars_134;

#line 345 "prog_util.m"
                                  {
#line 345 "prog_util.m"
                                    parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_127, &parse_tree__prog_util__Vars_128);
                                  }
#line 346 "prog_util.m"
                                  {
#line 346 "prog_util.m"
                                    parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_129, &parse_tree__prog_util__StateVars_132);
                                  }
#line 347 "prog_util.m"
                                  {
#line 347 "prog_util.m"
                                    parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__DotSVars0_130, &parse_tree__prog_util__DotSVars_133);
                                  }
#line 348 "prog_util.m"
                                  {
#line 348 "prog_util.m"
                                    parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__ColonSVars0_131, &parse_tree__prog_util__ColonSVars_134);
                                  }
#line 349 "prog_util.m"
                                  {
#line 349 "prog_util.m"
                                    parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_125, &parse_tree__prog_util__Goal_126);
                                  }
#line 350 "prog_util.m"
                                  {
#line 350 "prog_util.m"
                                    MR_Word base;
#line 350 "prog_util.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 350 "prog_util.m"
                                    *parse_tree__prog_util__Expr_8 = base;
#line 350 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 350 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars_128));
#line 350 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__StateVars_132));
#line 350 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__DotSVars_133));
#line 350 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__ColonSVars_134));
#line 350 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__Goal_126));
#line 350 "prog_util.m"
                                  }
#line 344 "prog_util.m"
                                }
#line 277 "prog_util.m"
                              else
#line 277 "prog_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 334 "prog_util.m"
                                  {
#line 334 "prog_util.m"
                                    MR_Word parse_tree__prog_util__Goal0_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 5)));
#line 334 "prog_util.m"
                                    MR_Word parse_tree__prog_util__Goal_116;
#line 334 "prog_util.m"
                                    MR_Word parse_tree__prog_util__Vars0_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 334 "prog_util.m"
                                    MR_Word parse_tree__prog_util__Vars_118;
#line 334 "prog_util.m"
                                    MR_Word parse_tree__prog_util__StateVars0_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 334 "prog_util.m"
                                    MR_Word parse_tree__prog_util__DotSVars0_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 3)));
#line 334 "prog_util.m"
                                    MR_Word parse_tree__prog_util__ColonSVars0_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 4)));
#line 334 "prog_util.m"
                                    MR_Word parse_tree__prog_util__StateVars_122;
#line 334 "prog_util.m"
                                    MR_Word parse_tree__prog_util__DotSVars_123;
#line 334 "prog_util.m"
                                    MR_Word parse_tree__prog_util__ColonSVars_124;

#line 335 "prog_util.m"
                                    {
#line 335 "prog_util.m"
                                      parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_117, &parse_tree__prog_util__Vars_118);
                                    }
#line 336 "prog_util.m"
                                    {
#line 336 "prog_util.m"
                                      parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_119, &parse_tree__prog_util__StateVars_122);
                                    }
#line 337 "prog_util.m"
                                    {
#line 337 "prog_util.m"
                                      parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__DotSVars0_120, &parse_tree__prog_util__DotSVars_123);
                                    }
#line 338 "prog_util.m"
                                    {
#line 338 "prog_util.m"
                                      parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__ColonSVars0_121, &parse_tree__prog_util__ColonSVars_124);
                                    }
#line 339 "prog_util.m"
                                    {
#line 339 "prog_util.m"
                                      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_115, &parse_tree__prog_util__Goal_116);
                                    }
#line 340 "prog_util.m"
                                    {
#line 340 "prog_util.m"
                                      MR_Word base;
#line 340 "prog_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 340 "prog_util.m"
                                      *parse_tree__prog_util__Expr_8 = base;
#line 340 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 340 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars_118));
#line 340 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__StateVars_122));
#line 340 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__DotSVars_123));
#line 340 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__ColonSVars_124));
#line 340 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__Goal_116));
#line 340 "prog_util.m"
                                    }
#line 334 "prog_util.m"
                                  }
#line 277 "prog_util.m"
                                else
#line 277 "prog_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 324 "prog_util.m"
                                    {
#line 324 "prog_util.m"
                                      MR_Word parse_tree__prog_util__StateVars0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 324 "prog_util.m"
                                      MR_Word parse_tree__prog_util__DotSVars0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 3)));
#line 324 "prog_util.m"
                                      MR_Word parse_tree__prog_util__ColonSVars0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 4)));
#line 324 "prog_util.m"
                                      MR_Word parse_tree__prog_util__StateVars_21;
#line 324 "prog_util.m"
                                      MR_Word parse_tree__prog_util__DotSVars_22;
#line 324 "prog_util.m"
                                      MR_Word parse_tree__prog_util__ColonSVars_23;
#line 324 "prog_util.m"
                                      MR_Word parse_tree__prog_util__Goal0_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 5)));
#line 324 "prog_util.m"
                                      MR_Word parse_tree__prog_util__Goal_112;
#line 324 "prog_util.m"
                                      MR_Word parse_tree__prog_util__Vars0_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 324 "prog_util.m"
                                      MR_Word parse_tree__prog_util__Vars_114;

#line 325 "prog_util.m"
                                      {
#line 325 "prog_util.m"
                                        parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_113, &parse_tree__prog_util__Vars_114);
                                      }
#line 326 "prog_util.m"
                                      {
#line 326 "prog_util.m"
                                        parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_18, &parse_tree__prog_util__StateVars_21);
                                      }
#line 327 "prog_util.m"
                                      {
#line 327 "prog_util.m"
                                        parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__DotSVars0_19, &parse_tree__prog_util__DotSVars_22);
                                      }
#line 328 "prog_util.m"
                                      {
#line 328 "prog_util.m"
                                        parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__ColonSVars0_20, &parse_tree__prog_util__ColonSVars_23);
                                      }
#line 329 "prog_util.m"
                                      {
#line 329 "prog_util.m"
                                        parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_111, &parse_tree__prog_util__Goal_112);
                                      }
#line 330 "prog_util.m"
                                      {
#line 330 "prog_util.m"
                                        MR_Word base;
#line 330 "prog_util.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 330 "prog_util.m"
                                        *parse_tree__prog_util__Expr_8 = base;
#line 330 "prog_util.m"
                                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 330 "prog_util.m"
                                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars_114));
#line 330 "prog_util.m"
                                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__StateVars_21));
#line 330 "prog_util.m"
                                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__DotSVars_22));
#line 330 "prog_util.m"
                                        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__ColonSVars_23));
#line 330 "prog_util.m"
                                        MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__Goal_112));
#line 330 "prog_util.m"
                                      }
#line 324 "prog_util.m"
                                    }
#line 277 "prog_util.m"
                                  else
#line 277 "prog_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 319 "prog_util.m"
                                      {
#line 319 "prog_util.m"
                                        MR_Word parse_tree__prog_util__Purity_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 319 "prog_util.m"
                                        MR_Word parse_tree__prog_util__Goal0_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 319 "prog_util.m"
                                        MR_Word parse_tree__prog_util__Goal_110;

#line 320 "prog_util.m"
                                        {
#line 320 "prog_util.m"
                                          parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_109, &parse_tree__prog_util__Goal_110);
                                        }
#line 321 "prog_util.m"
                                        {
#line 321 "prog_util.m"
                                          MR_Word base;
#line 321 "prog_util.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 321 "prog_util.m"
                                          *parse_tree__prog_util__Expr_8 = base;
#line 321 "prog_util.m"
                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 321 "prog_util.m"
                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Purity_17));
#line 321 "prog_util.m"
                                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Goal_110));
#line 321 "prog_util.m"
                                        }
#line 319 "prog_util.m"
                                      }
#line 277 "prog_util.m"
                                    else
#line 277 "prog_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 357 "prog_util.m"
                                        {
#line 357 "prog_util.m"
                                          MR_Word parse_tree__prog_util__Var0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 357 "prog_util.m"
                                          MR_Word parse_tree__prog_util__Var_26;
#line 357 "prog_util.m"
                                          MR_Word parse_tree__prog_util__Goal0_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 357 "prog_util.m"
                                          MR_Word parse_tree__prog_util__Goal_138;

#line 358 "prog_util.m"
                                          {
#line 358 "prog_util.m"
                                            parse_tree__prog_util__rename_in_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Var0_25, &parse_tree__prog_util__Var_26);
                                          }
#line 359 "prog_util.m"
                                          {
#line 359 "prog_util.m"
                                            parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_137, &parse_tree__prog_util__Goal_138);
                                          }
#line 360 "prog_util.m"
                                          {
#line 360 "prog_util.m"
                                            MR_Word base;
#line 360 "prog_util.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 360 "prog_util.m"
                                            *parse_tree__prog_util__Expr_8 = base;
#line 360 "prog_util.m"
                                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 360 "prog_util.m"
                                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Var_26));
#line 360 "prog_util.m"
                                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Goal_138));
#line 360 "prog_util.m"
                                          }
#line 357 "prog_util.m"
                                        }
#line 277 "prog_util.m"
                                      else
#line 277 "prog_util.m"
                                        if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 353 "prog_util.m"
                                          {
#line 353 "prog_util.m"
                                            MR_Word parse_tree__prog_util__Detism_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 353 "prog_util.m"
                                            MR_Word parse_tree__prog_util__Goal0_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 353 "prog_util.m"
                                            MR_Word parse_tree__prog_util__Goal_136;

#line 354 "prog_util.m"
                                            {
#line 354 "prog_util.m"
                                              parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_135, &parse_tree__prog_util__Goal_136);
                                            }
#line 355 "prog_util.m"
                                            {
#line 355 "prog_util.m"
                                              MR_Word base;
#line 355 "prog_util.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 355 "prog_util.m"
                                              *parse_tree__prog_util__Expr_8 = base;
#line 355 "prog_util.m"
                                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 355 "prog_util.m"
                                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Detism_24));
#line 355 "prog_util.m"
                                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Goal_136));
#line 355 "prog_util.m"
                                            }
#line 353 "prog_util.m"
                                          }
#line 277 "prog_util.m"
                                        else
#line 277 "prog_util.m"
                                          if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 362 "prog_util.m"
                                            {
#line 362 "prog_util.m"
                                              MR_Word parse_tree__prog_util__Goal0_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 3)));
#line 362 "prog_util.m"
                                              MR_Word parse_tree__prog_util__Goal_140;
#line 362 "prog_util.m"
                                              MR_Word parse_tree__prog_util__Detism_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 362 "prog_util.m"
                                              MR_Word parse_tree__prog_util__Var0_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 362 "prog_util.m"
                                              MR_Word parse_tree__prog_util__Var_143;

#line 363 "prog_util.m"
                                              {
#line 363 "prog_util.m"
                                                parse_tree__prog_util__rename_in_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Var0_142, &parse_tree__prog_util__Var_143);
                                              }
#line 364 "prog_util.m"
                                              {
#line 364 "prog_util.m"
                                                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_139, &parse_tree__prog_util__Goal_140);
                                              }
#line 365 "prog_util.m"
                                              {
#line 365 "prog_util.m"
                                                MR_Word base;
#line 365 "prog_util.m"
                                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 365 "prog_util.m"
                                                *parse_tree__prog_util__Expr_8 = base;
#line 365 "prog_util.m"
                                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 365 "prog_util.m"
                                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Var_143));
#line 365 "prog_util.m"
                                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Detism_141));
#line 365 "prog_util.m"
                                                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__Goal_140));
#line 365 "prog_util.m"
                                              }
#line 362 "prog_util.m"
                                            }
#line 277 "prog_util.m"
                                          else
#line 277 "prog_util.m"
                                            if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 299 "prog_util.m"
                                              {
#line 299 "prog_util.m"
                                                MR_Word parse_tree__prog_util__Vars0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 299 "prog_util.m"
                                                MR_Word parse_tree__prog_util__Vars_16;
#line 299 "prog_util.m"
                                                MR_Word parse_tree__prog_util__Goal0_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 299 "prog_util.m"
                                                MR_Word parse_tree__prog_util__Goal_96;

#line 300 "prog_util.m"
                                                {
#line 300 "prog_util.m"
                                                  parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_15, &parse_tree__prog_util__Vars_16);
                                                }
#line 301 "prog_util.m"
                                                {
#line 301 "prog_util.m"
                                                  parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_95, &parse_tree__prog_util__Goal_96);
                                                }
#line 302 "prog_util.m"
                                                {
#line 302 "prog_util.m"
                                                  MR_Word base;
#line 302 "prog_util.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 302 "prog_util.m"
                                                  *parse_tree__prog_util__Expr_8 = base;
#line 302 "prog_util.m"
                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 302 "prog_util.m"
                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars_16));
#line 302 "prog_util.m"
                                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Goal_96));
#line 302 "prog_util.m"
                                                }
#line 299 "prog_util.m"
                                              }
#line 277 "prog_util.m"
                                            else
#line 277 "prog_util.m"
                                              if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 304 "prog_util.m"
                                                {
#line 304 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__Goal0_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 304 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__Goal_98;
#line 304 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__Vars0_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 304 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__Vars_100;

#line 305 "prog_util.m"
                                                  {
#line 305 "prog_util.m"
                                                    parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_99, &parse_tree__prog_util__Vars_100);
                                                  }
#line 306 "prog_util.m"
                                                  {
#line 306 "prog_util.m"
                                                    parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_97, &parse_tree__prog_util__Goal_98);
                                                  }
#line 307 "prog_util.m"
                                                  {
#line 307 "prog_util.m"
                                                    MR_Word base;
#line 307 "prog_util.m"
                                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 307 "prog_util.m"
                                                    *parse_tree__prog_util__Expr_8 = base;
#line 307 "prog_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 307 "prog_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars_100));
#line 307 "prog_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Goal_98));
#line 307 "prog_util.m"
                                                  }
#line 304 "prog_util.m"
                                                }
#line 277 "prog_util.m"
                                              else
#line 277 "prog_util.m"
                                                if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 367 "prog_util.m"
                                                  {
#line 367 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__TypeCtorInfo_170_170;
#line 367 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__CompileTime_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 367 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__RunTime_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 367 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__MaybeIO0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 3)));
#line 367 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__Mutables0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 4)));
#line 367 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__MaybeIO_31;
#line 367 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__Mutables_34;
#line 367 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__V_86_86;
#line 367 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__Goal0_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 5)));
#line 367 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__Goal_145;

#line 371 "prog_util.m"
                                                    if ((parse_tree__prog_util__MaybeIO0_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 370 "prog_util.m"
                                                      parse_tree__prog_util__MaybeIO_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 371 "prog_util.m"
                                                    else
#line 372 "prog_util.m"
                                                      {
#line 372 "prog_util.m"
                                                        MR_Word parse_tree__prog_util__IOStateVar0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeIO0_29, (MR_Integer) 0)));
#line 372 "prog_util.m"
                                                        MR_Word parse_tree__prog_util__IOStateVar_33;

#line 373 "prog_util.m"
                                                        {
#line 373 "prog_util.m"
                                                          parse_tree__prog_util__rename_in_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__IOStateVar0_32, &parse_tree__prog_util__IOStateVar_33);
                                                        }
#line 374 "prog_util.m"
                                                        {
#line 374 "prog_util.m"
                                                          parse_tree__prog_util__MaybeIO_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 374 "prog_util.m"
                                                          MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeIO_31, 0) = ((MR_Box) (parse_tree__prog_util__IOStateVar_33));
#line 374 "prog_util.m"
                                                        }
#line 372 "prog_util.m"
                                                      }
#line 376 "prog_util.m"
                                                    {
#line 376 "prog_util.m"
                                                      parse_tree__prog_util__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 376 "prog_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_86_86, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[2]));
#line 376 "prog_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_86_86, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_expr_4_p_0_3));
#line 376 "prog_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_86_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 376 "prog_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_86_86, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
#line 376 "prog_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_86_86, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 376 "prog_util.m"
                                                    }
#line 4482 "parse_tree.prog_util.c"
                                                    parse_tree__prog_util__TypeCtorInfo_170_170 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0;
#line 376 "prog_util.m"
                                                    {
#line 376 "prog_util.m"
                                                      mercury__list__map_3_p_0(parse_tree__prog_util__TypeCtorInfo_170_170, parse_tree__prog_util__TypeCtorInfo_170_170, parse_tree__prog_util__V_86_86, parse_tree__prog_util__Mutables0_30, &parse_tree__prog_util__Mutables_34);
                                                    }
#line 378 "prog_util.m"
                                                    {
#line 378 "prog_util.m"
                                                      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_144, &parse_tree__prog_util__Goal_145);
                                                    }
#line 379 "prog_util.m"
                                                    {
#line 379 "prog_util.m"
                                                      MR_Word base;
#line 379 "prog_util.m"
                                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 379 "prog_util.m"
                                                      *parse_tree__prog_util__Expr_8 = base;
#line 379 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 379 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__CompileTime_27));
#line 379 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__RunTime_28));
#line 379 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__MaybeIO_31));
#line 379 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__Mutables_34));
#line 379 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__Goal_145));
#line 379 "prog_util.m"
                                                    }
#line 367 "prog_util.m"
                                                  }
#line 277 "prog_util.m"
                                                else
#line 277 "prog_util.m"
                                                  if (((((MR_tag((MR_Word) parse_tree__prog_util__Expr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 399 "prog_util.m"
                                                    {
#line 399 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__TypeCtorInfo_179_179;
#line 399 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__SubGoal0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 399 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__Then0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 3)));
#line 399 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__MaybeElse0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 4)));
#line 399 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__Catches0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 5)));
#line 399 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__MaybeCatchAny0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 6)));
#line 399 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__SubGoal_52;
#line 399 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__Then_53;
#line 399 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__MaybeElse_56;
#line 399 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__Catches_57;
#line 399 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__MaybeCatchAny_62;
#line 399 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__V_81_81;
#line 399 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__MaybeIO0_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 399 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__MaybeIO_147;

#line 400 "prog_util.m"
                                                      {
#line 400 "prog_util.m"
                                                        parse_tree__prog_util__rename_in_maybe_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__MaybeIO0_146, &parse_tree__prog_util__MaybeIO_147);
                                                      }
#line 401 "prog_util.m"
                                                      {
#line 401 "prog_util.m"
                                                        parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_47, &parse_tree__prog_util__SubGoal_52);
                                                      }
#line 402 "prog_util.m"
                                                      {
#line 402 "prog_util.m"
                                                        parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Then0_48, &parse_tree__prog_util__Then_53);
                                                      }
#line 407 "prog_util.m"
                                                      if ((parse_tree__prog_util__MaybeElse0_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 409 "prog_util.m"
                                                        parse_tree__prog_util__MaybeElse_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 407 "prog_util.m"
                                                      else
#line 404 "prog_util.m"
                                                        {
#line 404 "prog_util.m"
                                                          MR_Word parse_tree__prog_util__Else0_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeElse0_49, (MR_Integer) 0)));
#line 404 "prog_util.m"
                                                          MR_Word parse_tree__prog_util__Else_55;

#line 405 "prog_util.m"
                                                          {
#line 405 "prog_util.m"
                                                            parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Else0_54, &parse_tree__prog_util__Else_55);
                                                          }
#line 406 "prog_util.m"
                                                          {
#line 406 "prog_util.m"
                                                            parse_tree__prog_util__MaybeElse_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 406 "prog_util.m"
                                                            MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeElse_56, 0) = ((MR_Box) (parse_tree__prog_util__Else_55));
#line 406 "prog_util.m"
                                                          }
#line 404 "prog_util.m"
                                                        }
#line 411 "prog_util.m"
                                                      {
#line 411 "prog_util.m"
                                                        parse_tree__prog_util__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 411 "prog_util.m"
                                                        MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_81_81, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[3]));
#line 411 "prog_util.m"
                                                        MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_81_81, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_expr_4_p_0_4));
#line 411 "prog_util.m"
                                                        MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 411 "prog_util.m"
                                                        MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_81_81, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
#line 411 "prog_util.m"
                                                        MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_81_81, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 411 "prog_util.m"
                                                      }
#line 4612 "parse_tree.prog_util.c"
                                                      parse_tree__prog_util__TypeCtorInfo_179_179 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0;
#line 411 "prog_util.m"
                                                      {
#line 411 "prog_util.m"
                                                        mercury__list__map_3_p_0(parse_tree__prog_util__TypeCtorInfo_179_179, parse_tree__prog_util__TypeCtorInfo_179_179, parse_tree__prog_util__V_81_81, parse_tree__prog_util__Catches0_50, &parse_tree__prog_util__Catches_57);
                                                      }
#line 417 "prog_util.m"
                                                      if ((parse_tree__prog_util__MaybeCatchAny0_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 419 "prog_util.m"
                                                        parse_tree__prog_util__MaybeCatchAny_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 417 "prog_util.m"
                                                      else
#line 413 "prog_util.m"
                                                        {
#line 413 "prog_util.m"
                                                          MR_Word parse_tree__prog_util__CatchAnyVar0_58;
#line 413 "prog_util.m"
                                                          MR_Word parse_tree__prog_util__CatchAnyGoal0_59;
#line 413 "prog_util.m"
                                                          MR_Word parse_tree__prog_util__CatchAnyVar_60;
#line 413 "prog_util.m"
                                                          MR_Word parse_tree__prog_util__CatchAnyGoal_61;
#line 413 "prog_util.m"
                                                          MR_Word parse_tree__prog_util__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeCatchAny0_51, (MR_Integer) 0)));
#line 413 "prog_util.m"
                                                          MR_Word parse_tree__prog_util__V_83_83;

#line 413 "prog_util.m"
                                                          parse_tree__prog_util__CatchAnyVar0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_82_82, (MR_Integer) 0)));
#line 413 "prog_util.m"
                                                          parse_tree__prog_util__CatchAnyGoal0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_82_82, (MR_Integer) 1)));
#line 414 "prog_util.m"
                                                          {
#line 414 "prog_util.m"
                                                            parse_tree__prog_util__rename_in_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__CatchAnyVar0_58, &parse_tree__prog_util__CatchAnyVar_60);
                                                          }
#line 415 "prog_util.m"
                                                          {
#line 415 "prog_util.m"
                                                            parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__CatchAnyGoal0_59, &parse_tree__prog_util__CatchAnyGoal_61);
                                                          }
#line 416 "prog_util.m"
                                                          {
#line 416 "prog_util.m"
                                                            parse_tree__prog_util__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 416 "prog_util.m"
                                                            MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_83_83, 0) = ((MR_Box) (parse_tree__prog_util__CatchAnyVar_60));
#line 416 "prog_util.m"
                                                            MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_83_83, 1) = ((MR_Box) (parse_tree__prog_util__CatchAnyGoal_61));
#line 416 "prog_util.m"
                                                          }
#line 416 "prog_util.m"
                                                          {
#line 416 "prog_util.m"
                                                            parse_tree__prog_util__MaybeCatchAny_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 416 "prog_util.m"
                                                            MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeCatchAny_62, 0) = ((MR_Box) (parse_tree__prog_util__V_83_83));
#line 416 "prog_util.m"
                                                          }
#line 413 "prog_util.m"
                                                        }
#line 421 "prog_util.m"
                                                      {
#line 421 "prog_util.m"
                                                        MR_Word base;
#line 421 "prog_util.m"
                                                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 421 "prog_util.m"
                                                        *parse_tree__prog_util__Expr_8 = base;
#line 421 "prog_util.m"
                                                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 421 "prog_util.m"
                                                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__MaybeIO_147));
#line 421 "prog_util.m"
                                                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoal_52));
#line 421 "prog_util.m"
                                                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__Then_53));
#line 421 "prog_util.m"
                                                        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__MaybeElse_56));
#line 421 "prog_util.m"
                                                        MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__Catches_57));
#line 421 "prog_util.m"
                                                        MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__MaybeCatchAny_62));
#line 421 "prog_util.m"
                                                      }
#line 399 "prog_util.m"
                                                    }
#line 277 "prog_util.m"
                                                  else
#line 452 "prog_util.m"
                                                    {
#line 452 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__TypeCtorInfo_182_182;
#line 452 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__TermA0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 1)));
#line 452 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__TermB0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 2)));
#line 452 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__TermA_71;
#line 452 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__TermB_72;
#line 452 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__V_73_73;
#line 452 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__V_74_74;
#line 452 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__V_75_75;
#line 452 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__V_76_76;
#line 452 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__Purity_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Expr0_7, (MR_Integer) 3)));

#line 453 "prog_util.m"
                                                      {
#line 453 "prog_util.m"
                                                        parse_tree__prog_util__V_74_74 = mercury__term__context_init_0_f_0();
                                                      }
#line 453 "prog_util.m"
                                                      {
#line 453 "prog_util.m"
                                                        parse_tree__prog_util__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "prog_util.m"
                                                        MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_73_73, 0) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 453 "prog_util.m"
                                                        MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_73_73, 1) = ((MR_Box) (parse_tree__prog_util__V_74_74));
#line 453 "prog_util.m"
                                                      }
#line 4740 "parse_tree.prog_util.c"
                                                      parse_tree__prog_util__TypeCtorInfo_182_182 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 453 "prog_util.m"
                                                      {
#line 453 "prog_util.m"
                                                        mercury__term__substitute_4_p_0(parse_tree__prog_util__TypeCtorInfo_182_182, parse_tree__prog_util__TermA0_69, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__V_73_73, &parse_tree__prog_util__TermA_71);
                                                      }
#line 455 "prog_util.m"
                                                      {
#line 455 "prog_util.m"
                                                        parse_tree__prog_util__V_76_76 = mercury__term__context_init_0_f_0();
                                                      }
#line 455 "prog_util.m"
                                                      {
#line 455 "prog_util.m"
                                                        parse_tree__prog_util__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 455 "prog_util.m"
                                                        MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_75_75, 0) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 455 "prog_util.m"
                                                        MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_75_75, 1) = ((MR_Box) (parse_tree__prog_util__V_76_76));
#line 455 "prog_util.m"
                                                      }
#line 455 "prog_util.m"
                                                      {
#line 455 "prog_util.m"
                                                        mercury__term__substitute_4_p_0(parse_tree__prog_util__TypeCtorInfo_182_182, parse_tree__prog_util__TermB0_70, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__V_75_75, &parse_tree__prog_util__TermB_72);
                                                      }
#line 457 "prog_util.m"
                                                      {
#line 457 "prog_util.m"
                                                        MR_Word base;
#line 457 "prog_util.m"
                                                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 457 "prog_util.m"
                                                        *parse_tree__prog_util__Expr_8 = base;
#line 457 "prog_util.m"
                                                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 457 "prog_util.m"
                                                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__TermA_71));
#line 457 "prog_util.m"
                                                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__TermB_72));
#line 457 "prog_util.m"
                                                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__Purity_167));
#line 457 "prog_util.m"
                                                      }
#line 452 "prog_util.m"
                                                    }
#line 277 "prog_util.m"
  }
#line 270 "prog_util.m"
}

#line 243 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__split_types_and_modes_2_5_p_0(
#line 243 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 243 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 243 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__3_3,
#line 243 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__4_4,
#line 243 "prog_util.m"
  MR_Word * parse_tree__prog_util__Result_5)
#line 243 "prog_util.m"
{
#line 247 "prog_util.m"
  {
#line 247 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 247 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 247 "prog_util.m"
      {
#line 247 "prog_util.m"
        *parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 247 "prog_util.m"
        *parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 247 "prog_util.m"
        *parse_tree__prog_util__Result_5 = parse_tree__prog_util__HeadVar__2_2;
#line 247 "prog_util.m"
      }
#line 247 "prog_util.m"
    else
#line 248 "prog_util.m"
      {
#line 248 "prog_util.m"
        MR_Word parse_tree__prog_util__TM_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 248 "prog_util.m"
        MR_Word parse_tree__prog_util__TMs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 248 "prog_util.m"
        MR_Word parse_tree__prog_util__T_10;
#line 248 "prog_util.m"
        MR_Word parse_tree__prog_util__Ts_11;
#line 248 "prog_util.m"
        MR_Word parse_tree__prog_util__M_12;
#line 248 "prog_util.m"
        MR_Word parse_tree__prog_util__Ms_13;
#line 248 "prog_util.m"
        MR_Word parse_tree__prog_util__Result1_15;

#line 259 "prog_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_util__TM_7)) == (MR_mktag((MR_Integer) 1))))
#line 260 "prog_util.m"
          {
#line 260 "prog_util.m"
            parse_tree__prog_util__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__TM_7, (MR_Integer) 0)));
#line 260 "prog_util.m"
            parse_tree__prog_util__M_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__TM_7, (MR_Integer) 1)));
#line 260 "prog_util.m"
            parse_tree__prog_util__Result1_15 = parse_tree__prog_util__HeadVar__2_2;
#line 260 "prog_util.m"
          }
#line 259 "prog_util.m"
        else
#line 259 "prog_util.m"
          {
#line 259 "prog_util.m"
            parse_tree__prog_util__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__TM_7, (MR_Integer) 0)));
#line 259 "prog_util.m"
            parse_tree__prog_util__M_12 = (MR_Word) &parse_tree__prog_util_scalar_common_1[7];
#line 259 "prog_util.m"
            parse_tree__prog_util__Result1_15 = (MR_Integer) 0;
#line 259 "prog_util.m"
          }
#line 250 "prog_util.m"
        {
#line 250 "prog_util.m"
          parse_tree__prog_util__split_types_and_modes_2_5_p_0(parse_tree__prog_util__TMs_8, parse_tree__prog_util__Result1_15, &parse_tree__prog_util__Ts_11, &parse_tree__prog_util__Ms_13, parse_tree__prog_util__Result_5);
        }
#line 248 "prog_util.m"
        {
#line 248 "prog_util.m"
          MR_Word base;
#line 248 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "prog_util.m"
          *parse_tree__prog_util__HeadVar__3_3 = base;
#line 248 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__T_10));
#line 248 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Ts_11));
#line 248 "prog_util.m"
        }
#line 248 "prog_util.m"
        {
#line 248 "prog_util.m"
          MR_Word base;
#line 248 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "prog_util.m"
          *parse_tree__prog_util__HeadVar__4_4 = base;
#line 248 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__M_12));
#line 248 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Ms_13));
#line 248 "prog_util.m"
        }
#line 248 "prog_util.m"
      }
#line 247 "prog_util.m"
  }
#line 243 "prog_util.m"
}

#line 187 "prog_util.m"
MR_Word MR_CALL 
parse_tree__prog_util__goal_list_to_conj_2_f_0(
#line 187 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_1,
#line 187 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2)
#line 187 "prog_util.m"
{
#line 782 "prog_util.m"
  {
#line 782 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 782 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__3_3;

#line 782 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 782 "prog_util.m"
      {
#line 782 "prog_util.m"
        {
#line 782 "prog_util.m"
          parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 782 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 782 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_util__Context_1));
#line 782 "prog_util.m"
        }
#line 782 "prog_util.m"
      }
#line 782 "prog_util.m"
    else
#line 783 "prog_util.m"
      {
#line 783 "prog_util.m"
        MR_Word parse_tree__prog_util__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
#line 783 "prog_util.m"
        MR_Word parse_tree__prog_util__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));

#line 784 "prog_util.m"
        {
#line 784 "prog_util.m"
          return parse_tree__prog_util__HeadVar__3_3 = parse_tree__prog_util__goal_list_to_conj_2_3_f_0(parse_tree__prog_util__Context_1, parse_tree__prog_util__Goal_7, parse_tree__prog_util__Goals_8);
        }
#line 783 "prog_util.m"
      }
#line 782 "prog_util.m"
    return parse_tree__prog_util__HeadVar__3_3;
#line 782 "prog_util.m"
  }
#line 187 "prog_util.m"
}

#line 180 "prog_util.m"
MR_Word MR_CALL 
parse_tree__prog_util__sym_name_and_args_to_term_3_f_0(
#line 180 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_15,
#line 180 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 180 "prog_util.m"
  MR_Word parse_tree__prog_util__Xs_2,
#line 180 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_3)
#line 180 "prog_util.m"
{
#line 753 "prog_util.m"
  {
#line 753 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 753 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__4_4;

#line 753 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 756 "prog_util.m"
      {
#line 756 "prog_util.m"
        MR_Word parse_tree__prog_util__ModuleNames_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 756 "prog_util.m"
        MR_String parse_tree__prog_util__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 756 "prog_util.m"
        MR_Word parse_tree__prog_util__V_13_13;
#line 756 "prog_util.m"
        MR_Word parse_tree__prog_util__V_14_14;

#line 758 "prog_util.m"
        {
#line 758 "prog_util.m"
          parse_tree__prog_util__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 758 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_14_14, 0) = ((MR_Box) (parse_tree__prog_util__Name_10));
#line 758 "prog_util.m"
        }
#line 758 "prog_util.m"
        {
#line 758 "prog_util.m"
          parse_tree__prog_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 758 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 0) = ((MR_Box) (parse_tree__prog_util__V_14_14));
#line 758 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_util__Xs_2));
#line 758 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 758 "prog_util.m"
        }
#line 757 "prog_util.m"
        {
#line 757 "prog_util.m"
          return parse_tree__prog_util__HeadVar__4_4 = parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(parse_tree__prog_util__ModuleNames_9, parse_tree__prog_util__V_13_13, parse_tree__prog_util__Context_3);
        }
#line 756 "prog_util.m"
      }
#line 753 "prog_util.m"
    else
#line 753 "prog_util.m"
      {
#line 753 "prog_util.m"
        MR_String parse_tree__prog_util__Name_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 753 "prog_util.m"
        MR_Word parse_tree__prog_util__V_8_8;

#line 754 "prog_util.m"
        {
#line 754 "prog_util.m"
          parse_tree__prog_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 754 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_8_8, 0) = ((MR_Box) (parse_tree__prog_util__Name_5));
#line 754 "prog_util.m"
        }
#line 754 "prog_util.m"
        {
#line 754 "prog_util.m"
          parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 754 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_util__V_8_8));
#line 754 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 1) = ((MR_Box) (parse_tree__prog_util__Xs_2));
#line 754 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 754 "prog_util.m"
        }
#line 753 "prog_util.m"
      }
#line 753 "prog_util.m"
    return parse_tree__prog_util__HeadVar__4_4;
#line 753 "prog_util.m"
  }
#line 180 "prog_util.m"
}

#line 171 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__get_new_tvars_8_p_0(
#line 171 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 171 "prog_util.m"
  MR_Word parse_tree__prog_util__VarSet_2,
#line 171 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3,
#line 171 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_TVarSet_4,
#line 171 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5,
#line 171 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_6,
#line 171 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7,
#line 171 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_8)
#line 171 "prog_util.m"
{
#line 730 "prog_util.m"
  while (MR_TRUE)
#line 730 "prog_util.m"
    {
#line 730 "prog_util.m"
      /* tailcall optimized into a loop */
#line 730 "prog_util.m"
      {
#line 730 "prog_util.m"
        MR_bool parse_tree__prog_util__succeeded;

#line 730 "prog_util.m"
        if ((parse_tree__prog_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 730 "prog_util.m"
          {
#line 730 "prog_util.m"
            *parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_8 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7;
#line 730 "prog_util.m"
            *parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_6 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
#line 730 "prog_util.m"
            *parse_tree__prog_util__STATE_VARIABLE_TVarSet_4 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3;
#line 730 "prog_util.m"
          }
#line 730 "prog_util.m"
        else
#line 731 "prog_util.m"
          {
#line 731 "prog_util.m"
            MR_Word parse_tree__prog_util__TVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 731 "prog_util.m"
            MR_Word parse_tree__prog_util__TVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 731 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34;
#line 731 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36;
#line 731 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37;
#line 732 "prog_util.m"
            MR_Word parse_tree__prog_util__TypeInfo_45_45 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];

#line 732 "prog_util.m"
            {
#line 732 "prog_util.m"
              parse_tree__prog_util__succeeded = mercury__map__contains_2_p_0(parse_tree__prog_util__TypeInfo_45_45, parse_tree__prog_util__TypeInfo_45_45, parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, ((MR_Box) (parse_tree__prog_util__TVar_19)));
            }
#line 734 "prog_util.m"
            if (parse_tree__prog_util__succeeded)
#line 733 "prog_util.m"
              {
#line 733 "prog_util.m"
                parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7;
#line 733 "prog_util.m"
                parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
#line 733 "prog_util.m"
                parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3;
#line 733 "prog_util.m"
              }
#line 734 "prog_util.m"
            else
#line 744 "prog_util.m"
              {
#line 744 "prog_util.m"
                MR_String parse_tree__prog_util__TVarName_25;

#line 735 "prog_util.m"
                {
#line 735 "prog_util.m"
                  parse_tree__prog_util__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_util__VarSet_2, parse_tree__prog_util__TVar_19, &parse_tree__prog_util__TVarName_25);
                }
#line 744 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 738 "prog_util.m"
                  {
#line 738 "prog_util.m"
                    MR_Word parse_tree__prog_util__TVarSetVar_26;
#line 736 "prog_util.m"
                    MR_Box parse_tree__prog_util__conv0_TVarSetVar_26;

#line 736 "prog_util.m"
                    {
#line 736 "prog_util.m"
                      parse_tree__prog_util__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_util_scalar_common_1[0], parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5, ((MR_Box) (parse_tree__prog_util__TVarName_25)), &parse_tree__prog_util__conv0_TVarSetVar_26);
                    }
#line 736 "prog_util.m"
                    if (parse_tree__prog_util__succeeded)
#line 736 "prog_util.m"
                      {
#line 736 "prog_util.m"
                        parse_tree__prog_util__TVarSetVar_26 = ((MR_Word) parse_tree__prog_util__conv0_TVarSetVar_26);
#line 736 "prog_util.m"
                        parse_tree__prog_util__succeeded = MR_TRUE;
#line 736 "prog_util.m"
                      }
#line 738 "prog_util.m"
                    if (parse_tree__prog_util__succeeded)
#line 737 "prog_util.m"
                      {
#line 737 "prog_util.m"
                        MR_Word parse_tree__prog_util__TypeInfo_49_49 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];

#line 737 "prog_util.m"
                        {
#line 737 "prog_util.m"
                          mercury__map__det_insert_4_p_0(parse_tree__prog_util__TypeInfo_49_49, parse_tree__prog_util__TypeInfo_49_49, ((MR_Box) (parse_tree__prog_util__TVar_19)), ((MR_Box) (parse_tree__prog_util__TVarSetVar_26)), parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, &parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34);
                        }
#line 737 "prog_util.m"
                        parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
#line 737 "prog_util.m"
                        parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3;
#line 737 "prog_util.m"
                      }
#line 738 "prog_util.m"
                    else
#line 739 "prog_util.m"
                      {
#line 739 "prog_util.m"
                        MR_Word parse_tree__prog_util__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 739 "prog_util.m"
                        MR_Word parse_tree__prog_util__TypeInfo_52_52;
#line 739 "prog_util.m"
                        MR_Word parse_tree__prog_util__NewTVar_27;
#line 739 "prog_util.m"
                        MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarSet_35_35;

#line 739 "prog_util.m"
                        {
#line 739 "prog_util.m"
                          mercury__varset__new_var_3_p_0(parse_tree__prog_util__TypeCtorInfo_50_50, &parse_tree__prog_util__NewTVar_27, parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3, &parse_tree__prog_util__STATE_VARIABLE_TVarSet_35_35);
                        }
#line 740 "prog_util.m"
                        {
#line 740 "prog_util.m"
                          mercury__varset__name_var_4_p_0(parse_tree__prog_util__TypeCtorInfo_50_50, parse_tree__prog_util__NewTVar_27, parse_tree__prog_util__TVarName_25, parse_tree__prog_util__STATE_VARIABLE_TVarSet_35_35, &parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36);
                        }
#line 5215 "parse_tree.prog_util.c"
                        parse_tree__prog_util__TypeInfo_52_52 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];
#line 741 "prog_util.m"
                        {
#line 741 "prog_util.m"
                          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_util__TypeInfo_52_52, ((MR_Box) (parse_tree__prog_util__TVarName_25)), ((MR_Box) (parse_tree__prog_util__NewTVar_27)), parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5, &parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37);
                        }
#line 742 "prog_util.m"
                        {
#line 742 "prog_util.m"
                          mercury__map__det_insert_4_p_0(parse_tree__prog_util__TypeInfo_52_52, parse_tree__prog_util__TypeInfo_52_52, ((MR_Box) (parse_tree__prog_util__TVar_19)), ((MR_Box) (parse_tree__prog_util__NewTVar_27)), parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, &parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34);
                        }
#line 739 "prog_util.m"
                      }
#line 738 "prog_util.m"
                  }
#line 744 "prog_util.m"
                else
#line 745 "prog_util.m"
                  {
#line 745 "prog_util.m"
                    MR_Word parse_tree__prog_util__TypeInfo_54_54;
#line 745 "prog_util.m"
                    MR_Word parse_tree__prog_util__NewTVar_44;

#line 745 "prog_util.m"
                    {
#line 745 "prog_util.m"
                      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &parse_tree__prog_util__NewTVar_44, parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3, &parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36);
                    }
#line 5245 "parse_tree.prog_util.c"
                    parse_tree__prog_util__TypeInfo_54_54 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];
#line 746 "prog_util.m"
                    {
#line 746 "prog_util.m"
                      mercury__map__det_insert_4_p_0(parse_tree__prog_util__TypeInfo_54_54, parse_tree__prog_util__TypeInfo_54_54, ((MR_Box) (parse_tree__prog_util__TVar_19)), ((MR_Box) (parse_tree__prog_util__NewTVar_44)), parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, &parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34);
                    }
#line 746 "prog_util.m"
                    parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
#line 745 "prog_util.m"
                  }
#line 744 "prog_util.m"
              }
#line 749 "prog_util.m"
            /* direct tailcall eliminated */
#line 749 "prog_util.m"
            {
#line 749 "prog_util.m"
              MR_Word parse_tree__prog_util__HeadVar__1__tmp_copy_1 = parse_tree__prog_util__TVars_20;
#line 749 "prog_util.m"
              MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarSet_0__tmp_copy_3 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36;
#line 749 "prog_util.m"
              MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0__tmp_copy_5 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37;
#line 749 "prog_util.m"
              MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0__tmp_copy_7 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34;

#line 749 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0__tmp_copy_7;
#line 749 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0__tmp_copy_5;
#line 749 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0__tmp_copy_3;
#line 749 "prog_util.m"
              parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__HeadVar__1__tmp_copy_1;
#line 749 "prog_util.m"
            }
#line 749 "prog_util.m"
            continue;
#line 731 "prog_util.m"
          }
#line 730 "prog_util.m"
      }
#line 730 "prog_util.m"
      break;
#line 730 "prog_util.m"
    }
#line 171 "prog_util.m"
}

#line 164 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__parse_rule_term_4_p_0(
#line 164 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_20,
#line 164 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_5,
#line 164 "prog_util.m"
  MR_Word parse_tree__prog_util__RuleTerm_6,
#line 164 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadTerm_7,
#line 164 "prog_util.m"
  MR_Word * parse_tree__prog_util__GoalTerm_8)
#line 164 "prog_util.m"
{
#line 725 "prog_util.m"
  {
#line 725 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__RuleTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 725 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadTerm0_9;
#line 725 "prog_util.m"
    MR_Word parse_tree__prog_util__GoalTerm0_10;
#line 722 "prog_util.m"
    MR_Word parse_tree__prog_util__V_12_12;
#line 722 "prog_util.m"
    MR_String parse_tree__prog_util__V_13_13;
#line 722 "prog_util.m"
    MR_Word parse_tree__prog_util__V_14_14;
#line 722 "prog_util.m"
    MR_Word parse_tree__prog_util__V_15_15;
#line 722 "prog_util.m"
    MR_Word parse_tree__prog_util__V_16_16;
#line 722 "prog_util.m"
    MR_Word parse_tree__prog_util__V_11_11;

#line 722 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 722 "prog_util.m"
      {
#line 722 "prog_util.m"
        parse_tree__prog_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__RuleTerm_6, (MR_Integer) 0)));
#line 722 "prog_util.m"
        parse_tree__prog_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__RuleTerm_6, (MR_Integer) 1)));
#line 722 "prog_util.m"
        parse_tree__prog_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__RuleTerm_6, (MR_Integer) 2)));
#line 722 "prog_util.m"
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_12_12)) == (MR_mktag((MR_Integer) 0)));
#line 722 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 722 "prog_util.m"
          {
#line 722 "prog_util.m"
            parse_tree__prog_util__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_12_12, (MR_Integer) 0)));
#line 722 "prog_util.m"
            parse_tree__prog_util__succeeded = (strcmp(parse_tree__prog_util__V_13_13, (MR_String) ":-") == 0);
#line 722 "prog_util.m"
            if (parse_tree__prog_util__succeeded)
#line 722 "prog_util.m"
              {
#line 722 "prog_util.m"
                parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 722 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 722 "prog_util.m"
                  {
#line 722 "prog_util.m"
                    parse_tree__prog_util__HeadTerm0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_14_14, (MR_Integer) 0)));
#line 722 "prog_util.m"
                    parse_tree__prog_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_14_14, (MR_Integer) 1)));
#line 722 "prog_util.m"
                    parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 722 "prog_util.m"
                    if (parse_tree__prog_util__succeeded)
#line 722 "prog_util.m"
                      {
#line 722 "prog_util.m"
                        parse_tree__prog_util__GoalTerm0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_15_15, (MR_Integer) 0)));
#line 722 "prog_util.m"
                        parse_tree__prog_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_15_15, (MR_Integer) 1)));
#line 722 "prog_util.m"
                        parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 722 "prog_util.m"
                      }
#line 722 "prog_util.m"
                  }
#line 722 "prog_util.m"
              }
#line 722 "prog_util.m"
          }
#line 722 "prog_util.m"
      }
#line 725 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 723 "prog_util.m"
      {
#line 723 "prog_util.m"
        *parse_tree__prog_util__HeadTerm_7 = parse_tree__prog_util__HeadTerm0_9;
#line 724 "prog_util.m"
        *parse_tree__prog_util__GoalTerm_8 = parse_tree__prog_util__GoalTerm0_10;
#line 723 "prog_util.m"
      }
#line 725 "prog_util.m"
    else
#line 726 "prog_util.m"
      {
#line 726 "prog_util.m"
        *parse_tree__prog_util__HeadTerm_7 = parse_tree__prog_util__RuleTerm_6;
#line 727 "prog_util.m"
        {
#line 727 "prog_util.m"
          MR_Word base;
#line 727 "prog_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 727 "prog_util.m"
          *parse_tree__prog_util__GoalTerm_8 = base;
#line 727 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[4]));
#line 727 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_5));
#line 727 "prog_util.m"
        }
#line 726 "prog_util.m"
      }
#line 725 "prog_util.m"
  }
#line 164 "prog_util.m"
}

#line 159 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__get_state_args_det_4_p_0(
#line 159 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_14,
#line 159 "prog_util.m"
  MR_Word parse_tree__prog_util__Args0_5,
#line 159 "prog_util.m"
  MR_Word * parse_tree__prog_util__Args_6,
#line 159 "prog_util.m"
  MR_Box * parse_tree__prog_util__State0_7,
#line 159 "prog_util.m"
  MR_Box * parse_tree__prog_util__State_8)
#line 159 "prog_util.m"
{
#line 715 "prog_util.m"
  {
#line 715 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 715 "prog_util.m"
    MR_Word parse_tree__prog_util__Args1_9;
#line 715 "prog_util.m"
    MR_Box parse_tree__prog_util__State0A_10;
#line 715 "prog_util.m"
    MR_Box parse_tree__prog_util__StateA_11;
#line 705 "prog_util.m"
    MR_Word parse_tree__prog_util__RevArgs0_19;
#line 705 "prog_util.m"
    MR_Word parse_tree__prog_util__RevArgs_20;
#line 705 "prog_util.m"
    MR_Word parse_tree__prog_util__V_21_21;

#line 706 "prog_util.m"
    {
#line 706 "prog_util.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_14, parse_tree__prog_util__Args0_5, &parse_tree__prog_util__RevArgs0_19);
    }
#line 707 "prog_util.m"
    parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__RevArgs0_19)) == (MR_mktag((MR_Integer) 1)));
#line 707 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 707 "prog_util.m"
      {
#line 707 "prog_util.m"
        parse_tree__prog_util__StateA_11 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_19, (MR_Integer) 0));
#line 707 "prog_util.m"
        parse_tree__prog_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_19, (MR_Integer) 1)));
#line 707 "prog_util.m"
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 707 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 707 "prog_util.m"
          {
#line 707 "prog_util.m"
            parse_tree__prog_util__State0A_10 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_21_21, (MR_Integer) 0));
#line 707 "prog_util.m"
            parse_tree__prog_util__RevArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_21_21, (MR_Integer) 1)));
#line 708 "prog_util.m"
            {
#line 708 "prog_util.m"
              mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_14, parse_tree__prog_util__RevArgs_20, &parse_tree__prog_util__Args1_9);
            }
#line 708 "prog_util.m"
            parse_tree__prog_util__succeeded = MR_TRUE;
#line 707 "prog_util.m"
          }
#line 707 "prog_util.m"
      }
#line 715 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 712 "prog_util.m"
      {
#line 712 "prog_util.m"
        *parse_tree__prog_util__Args_6 = parse_tree__prog_util__Args1_9;
#line 713 "prog_util.m"
        *parse_tree__prog_util__State0_7 = parse_tree__prog_util__State0A_10;
#line 714 "prog_util.m"
        *parse_tree__prog_util__State_8 = parse_tree__prog_util__StateA_11;
#line 712 "prog_util.m"
      }
#line 715 "prog_util.m"
    else
#line 716 "prog_util.m"
      {
#line 716 "prog_util.m"
        {
#line 716 "prog_util.m"
          mercury__require__unexpected_2_p_0((MR_String) "parse_tree.prog_util", (MR_String) "predicate \140parse_tree.prog_util.get_state_args_det\'/4");
#line 716 "prog_util.m"
          return;
        }
#line 716 "prog_util.m"
      }
#line 715 "prog_util.m"
  }
#line 159 "prog_util.m"
}

#line 154 "prog_util.m"
MR_bool MR_CALL 
parse_tree__prog_util__get_state_args_4_p_0(
#line 154 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_12,
#line 154 "prog_util.m"
  MR_Word parse_tree__prog_util__Args0_5,
#line 154 "prog_util.m"
  MR_Word * parse_tree__prog_util__Args_6,
#line 154 "prog_util.m"
  MR_Box * parse_tree__prog_util__State0_7,
#line 154 "prog_util.m"
  MR_Box * parse_tree__prog_util__State_8)
#line 154 "prog_util.m"
{
#line 705 "prog_util.m"
  {
#line 705 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 705 "prog_util.m"
    MR_Word parse_tree__prog_util__RevArgs0_9;
#line 705 "prog_util.m"
    MR_Word parse_tree__prog_util__RevArgs_10;
#line 705 "prog_util.m"
    MR_Word parse_tree__prog_util__V_11_11;

#line 706 "prog_util.m"
    {
#line 706 "prog_util.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_12, parse_tree__prog_util__Args0_5, &parse_tree__prog_util__RevArgs0_9);
    }
#line 707 "prog_util.m"
    parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__RevArgs0_9)) == (MR_mktag((MR_Integer) 1)));
#line 707 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 707 "prog_util.m"
      {
#line 707 "prog_util.m"
        *parse_tree__prog_util__State_8 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_9, (MR_Integer) 0));
#line 707 "prog_util.m"
        parse_tree__prog_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_9, (MR_Integer) 1)));
#line 707 "prog_util.m"
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 707 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 707 "prog_util.m"
          {
#line 707 "prog_util.m"
            *parse_tree__prog_util__State0_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, (MR_Integer) 0));
#line 707 "prog_util.m"
            parse_tree__prog_util__RevArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, (MR_Integer) 1)));
#line 708 "prog_util.m"
            {
#line 708 "prog_util.m"
              mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_12, parse_tree__prog_util__RevArgs_10, parse_tree__prog_util__Args_6);
            }
#line 708 "prog_util.m"
            parse_tree__prog_util__succeeded = MR_TRUE;
#line 707 "prog_util.m"
          }
#line 707 "prog_util.m"
      }
#line 705 "prog_util.m"
    return parse_tree__prog_util__succeeded;
#line 705 "prog_util.m"
  }
#line 154 "prog_util.m"
}

#line 149 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__pred_args_to_func_args_3_p_0(
#line 149 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_17,
#line 149 "prog_util.m"
  MR_Word parse_tree__prog_util__PredArgs_4,
#line 149 "prog_util.m"
  MR_Word * parse_tree__prog_util__FuncArgs_5,
#line 149 "prog_util.m"
  MR_Box * parse_tree__prog_util__FuncReturn_6)
#line 149 "prog_util.m"
{
#line 695 "prog_util.m"
  {
#line 695 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 695 "prog_util.m"
    MR_Integer parse_tree__prog_util__NumPredArgs_7;
#line 695 "prog_util.m"
    MR_Integer parse_tree__prog_util__NumFuncArgs_8;
#line 701 "prog_util.m"
    MR_Word parse_tree__prog_util__FuncArgs0_9;
#line 701 "prog_util.m"
    MR_Box parse_tree__prog_util__FuncReturn0_10;
#line 698 "prog_util.m"
    MR_Word parse_tree__prog_util__V_12_12;
#line 698 "prog_util.m"
    MR_Word parse_tree__prog_util__V_18_18;

#line 696 "prog_util.m"
    {
#line 696 "prog_util.m"
      mercury__list__length_2_p_0(parse_tree__prog_util__TypeInfo_for_T_17, parse_tree__prog_util__PredArgs_4, &parse_tree__prog_util__NumPredArgs_7);
    }
#line 697 "prog_util.m"
    parse_tree__prog_util__NumFuncArgs_8 = (parse_tree__prog_util__NumPredArgs_7 - (MR_Integer) 1);
#line 698 "prog_util.m"
    {
#line 698 "prog_util.m"
      parse_tree__prog_util__succeeded = mercury__list__split_list_4_p_0(parse_tree__prog_util__TypeInfo_for_T_17, parse_tree__prog_util__NumFuncArgs_8, parse_tree__prog_util__PredArgs_4, &parse_tree__prog_util__FuncArgs0_9, &parse_tree__prog_util__V_12_12);
    }
#line 698 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 698 "prog_util.m"
      {
#line 698 "prog_util.m"
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 698 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 698 "prog_util.m"
          {
#line 698 "prog_util.m"
            parse_tree__prog_util__FuncReturn0_10 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_12_12, (MR_Integer) 0));
#line 698 "prog_util.m"
            parse_tree__prog_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_12_12, (MR_Integer) 1)));
#line 698 "prog_util.m"
            {
#line 698 "prog_util.m"
              parse_tree__prog_util__succeeded = mercury__list____Unify____list_1_0(parse_tree__prog_util__TypeInfo_for_T_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_util__V_18_18);
            }
#line 698 "prog_util.m"
          }
#line 698 "prog_util.m"
      }
#line 701 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 699 "prog_util.m"
      {
#line 699 "prog_util.m"
        *parse_tree__prog_util__FuncArgs_5 = parse_tree__prog_util__FuncArgs0_9;
#line 700 "prog_util.m"
        *parse_tree__prog_util__FuncReturn_6 = parse_tree__prog_util__FuncReturn0_10;
#line 699 "prog_util.m"
      }
#line 701 "prog_util.m"
    else
#line 702 "prog_util.m"
      {
#line 702 "prog_util.m"
        {
#line 702 "prog_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "predicate \140parse_tree.prog_util.pred_args_to_func_args\'/3", (MR_String) "function missing return value\?");
#line 702 "prog_util.m"
          return;
        }
#line 702 "prog_util.m"
      }
#line 695 "prog_util.m"
  }
#line 149 "prog_util.m"
}

#line 142 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__make_n_fresh_vars_5_p_0(
#line 142 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_12,
#line 142 "prog_util.m"
  MR_String parse_tree__prog_util__BaseName_6,
#line 142 "prog_util.m"
  MR_Integer parse_tree__prog_util__N_7,
#line 142 "prog_util.m"
  MR_Word * parse_tree__prog_util__Vars_8,
#line 142 "prog_util.m"
  MR_Word parse_tree__prog_util__VarSet0_9,
#line 142 "prog_util.m"
  MR_Word * parse_tree__prog_util__VarSet_10)
#line 142 "prog_util.m"
{
#line 676 "prog_util.m"
  {
#line 676 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 677 "prog_util.m"
    {
#line 677 "prog_util.m"
      parse_tree__prog_util__make_n_fresh_vars_2_6_p_0(parse_tree__prog_util__TypeInfo_for_T_12, parse_tree__prog_util__BaseName_6, (MR_Integer) 0, parse_tree__prog_util__N_7, parse_tree__prog_util__Vars_8, parse_tree__prog_util__VarSet0_9, parse_tree__prog_util__VarSet_10);
#line 677 "prog_util.m"
      return;
    }
#line 676 "prog_util.m"
  }
#line 142 "prog_util.m"
}

#line 132 "prog_util.m"
MR_Word MR_CALL 
parse_tree__prog_util__make_functor_cons_id_2_f_0(
#line 132 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 132 "prog_util.m"
  MR_Integer parse_tree__prog_util__Arity_2)
#line 132 "prog_util.m"
{
#line 666 "prog_util.m"
  {
#line 666 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 666 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__3_3;

#line 666 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 666 "prog_util.m"
      {
#line 666 "prog_util.m"
        MR_String parse_tree__prog_util__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 666 "prog_util.m"
        MR_Word parse_tree__prog_util__V_6_6;
#line 666 "prog_util.m"
        MR_Word parse_tree__prog_util__V_7_7;

#line 667 "prog_util.m"
        {
#line 667 "prog_util.m"
          parse_tree__prog_util__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 667 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_6_6, 0) = ((MR_Box) (parse_tree__prog_util__Name_4));
#line 667 "prog_util.m"
        }
#line 667 "prog_util.m"
        {
#line 667 "prog_util.m"
          parse_tree__prog_util__V_7_7 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
        }
#line 667 "prog_util.m"
        {
#line 667 "prog_util.m"
          parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 667 "prog_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 667 "prog_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_util__V_6_6));
#line 667 "prog_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 2) = ((MR_Box) (parse_tree__prog_util__Arity_2));
#line 667 "prog_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 3) = ((MR_Box) (parse_tree__prog_util__V_7_7));
#line 667 "prog_util.m"
        }
#line 666 "prog_util.m"
      }
#line 666 "prog_util.m"
    else
#line 666 "prog_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 668 "prog_util.m"
        {
#line 668 "prog_util.m"
          MR_Integer parse_tree__prog_util__Int_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));

#line 668 "prog_util.m"
          {
#line 668 "prog_util.m"
            parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "prog_util.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 668 "prog_util.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_util__Int_8));
#line 668 "prog_util.m"
          }
#line 668 "prog_util.m"
        }
#line 666 "prog_util.m"
      else
#line 666 "prog_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 669 "prog_util.m"
          {
#line 669 "prog_util.m"
            MR_String parse_tree__prog_util__String_10 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));

#line 669 "prog_util.m"
            {
#line 669 "prog_util.m"
              parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "prog_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 669 "prog_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_util__String_10));
#line 669 "prog_util.m"
            }
#line 669 "prog_util.m"
          }
#line 666 "prog_util.m"
        else
#line 666 "prog_util.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 670 "prog_util.m"
            {
#line 670 "prog_util.m"
              MR_Float parse_tree__prog_util__Float_12 = MR_unbox_float((MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));

#line 670 "prog_util.m"
              {
#line 670 "prog_util.m"
                parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "prog_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 670 "prog_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 1) = MR_box_float(parse_tree__prog_util__Float_12);
#line 670 "prog_util.m"
              }
#line 670 "prog_util.m"
            }
#line 666 "prog_util.m"
          else
#line 671 "prog_util.m"
            {
#line 671 "prog_util.m"
              MR_String parse_tree__prog_util__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));

#line 672 "prog_util.m"
              {
#line 672 "prog_util.m"
                parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "prog_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 672 "prog_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_util__Name_14));
#line 672 "prog_util.m"
              }
#line 671 "prog_util.m"
            }
#line 666 "prog_util.m"
    return parse_tree__prog_util__HeadVar__3_3;
#line 666 "prog_util.m"
  }
#line 132 "prog_util.m"
}

#line 127 "prog_util.m"
MR_Word MR_CALL 
parse_tree__prog_util__cons_id_maybe_arity_1_f_0(
#line 127 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1)
#line 127 "prog_util.m"
{
#line 646 "prog_util.m"
  while (MR_TRUE)
#line 646 "prog_util.m"
    {
#line 646 "prog_util.m"
      /* tailcall optimized into a loop */
#line 646 "prog_util.m"
      {
#line 646 "prog_util.m"
        MR_bool parse_tree__prog_util__succeeded;
#line 646 "prog_util.m"
        MR_Word parse_tree__prog_util__HeadVar__2_2;

#line 646 "prog_util.m"
        if ((parse_tree__prog_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 657 "prog_util.m"
          parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 646 "prog_util.m"
        else
#line 646 "prog_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 662 "prog_util.m"
            parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 646 "prog_util.m"
          else
#line 646 "prog_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 656 "prog_util.m"
              parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 646 "prog_util.m"
            else
#line 646 "prog_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 655 "prog_util.m"
                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 646 "prog_util.m"
              else
#line 646 "prog_util.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 650 "prog_util.m"
                  {
#line 650 "prog_util.m"
                    parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
#line 650 "prog_util.m"
                  }
#line 646 "prog_util.m"
                else
#line 646 "prog_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 653 "prog_util.m"
                    parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 646 "prog_util.m"
                  else
#line 646 "prog_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 646 "prog_util.m"
                      {
#line 646 "prog_util.m"
                        MR_Integer parse_tree__prog_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 2)));
#line 646 "prog_util.m"
                        MR_Word parse_tree__prog_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 646 "prog_util.m"
                        MR_Word parse_tree__prog_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 3)));

#line 646 "prog_util.m"
                        {
#line 646 "prog_util.m"
                          parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 646 "prog_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__prog_util__Arity_4));
#line 646 "prog_util.m"
                        }
#line 646 "prog_util.m"
                      }
#line 646 "prog_util.m"
                    else
#line 646 "prog_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 663 "prog_util.m"
                        parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 646 "prog_util.m"
                      else
#line 646 "prog_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 649 "prog_util.m"
                          {
#line 649 "prog_util.m"
                            parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
#line 649 "prog_util.m"
                          }
#line 646 "prog_util.m"
                        else
#line 646 "prog_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 660 "prog_util.m"
                            {
#line 660 "prog_util.m"
                              MR_Word parse_tree__prog_util__ConsId_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 2)));
#line 660 "prog_util.m"
                              MR_Integer parse_tree__prog_util__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));

#line 661 "prog_util.m"
                              /* direct tailcall eliminated */
#line 661 "prog_util.m"
                              {
#line 661 "prog_util.m"
                                MR_Word parse_tree__prog_util__HeadVar__1__tmp_copy_1 = parse_tree__prog_util__ConsId_30;

#line 661 "prog_util.m"
                                parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__HeadVar__1__tmp_copy_1;
#line 661 "prog_util.m"
                              }
#line 661 "prog_util.m"
                              continue;
#line 660 "prog_util.m"
                            }
#line 646 "prog_util.m"
                          else
#line 646 "prog_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 652 "prog_util.m"
                              {
#line 652 "prog_util.m"
                                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
#line 652 "prog_util.m"
                              }
#line 646 "prog_util.m"
                            else
#line 646 "prog_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 648 "prog_util.m"
                                {
#line 648 "prog_util.m"
                                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
#line 648 "prog_util.m"
                                }
#line 646 "prog_util.m"
                              else
#line 646 "prog_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 651 "prog_util.m"
                                  {
#line 651 "prog_util.m"
                                    parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
#line 651 "prog_util.m"
                                  }
#line 646 "prog_util.m"
                                else
#line 646 "prog_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 664 "prog_util.m"
                                    parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 646 "prog_util.m"
                                  else
#line 646 "prog_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 647 "prog_util.m"
                                      {
#line 647 "prog_util.m"
                                        MR_Integer parse_tree__prog_util__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));

#line 647 "prog_util.m"
                                        {
#line 647 "prog_util.m"
                                          parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 647 "prog_util.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__prog_util__Arity_6));
#line 647 "prog_util.m"
                                        }
#line 647 "prog_util.m"
                                      }
#line 646 "prog_util.m"
                                    else
#line 646 "prog_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 654 "prog_util.m"
                                        parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 646 "prog_util.m"
                                      else
#line 646 "prog_util.m"
                                        if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 658 "prog_util.m"
                                          parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 646 "prog_util.m"
                                        else
#line 659 "prog_util.m"
                                          parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 646 "prog_util.m"
        return parse_tree__prog_util__HeadVar__2_2;
#line 646 "prog_util.m"
      }
#line 646 "prog_util.m"
      break;
#line 646 "prog_util.m"
    }
#line 127 "prog_util.m"
}

#line 122 "prog_util.m"
MR_Integer MR_CALL 
parse_tree__prog_util__cons_id_arity_1_f_0(
#line 122 "prog_util.m"
  MR_Word parse_tree__prog_util__ConsId_3)
#line 122 "prog_util.m"
{
#line 617 "prog_util.m"
  while (MR_TRUE)
#line 617 "prog_util.m"
    {
#line 617 "prog_util.m"
      /* tailcall optimized into a loop */
#line 617 "prog_util.m"
      {
#line 617 "prog_util.m"
        MR_bool parse_tree__prog_util__succeeded;
#line 617 "prog_util.m"
        MR_Integer parse_tree__prog_util__Arity_4;

#line 617 "prog_util.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 617 "prog_util.m"
          {
#line 617 "prog_util.m"
            MR_Word parse_tree__prog_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 1)));
#line 617 "prog_util.m"
            MR_Word parse_tree__prog_util__V_6_6;

#line 617 "prog_util.m"
            parse_tree__prog_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 2)));
#line 617 "prog_util.m"
            parse_tree__prog_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 3)));
#line 617 "prog_util.m"
          }
#line 617 "prog_util.m"
        else
#line 617 "prog_util.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 621 "prog_util.m"
            {
#line 621 "prog_util.m"
              MR_Word parse_tree__prog_util__SubConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 2)));
#line 621 "prog_util.m"
              MR_Integer parse_tree__prog_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 1)));

#line 622 "prog_util.m"
              /* direct tailcall eliminated */
#line 622 "prog_util.m"
              {
#line 622 "prog_util.m"
                MR_Word parse_tree__prog_util__ConsId__tmp_copy_3 = parse_tree__prog_util__SubConsId_8;

#line 622 "prog_util.m"
                parse_tree__prog_util__ConsId_3 = parse_tree__prog_util__ConsId__tmp_copy_3;
#line 622 "prog_util.m"
              }
#line 622 "prog_util.m"
              continue;
#line 621 "prog_util.m"
            }
#line 617 "prog_util.m"
          else
#line 617 "prog_util.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 619 "prog_util.m"
              parse_tree__prog_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 1)));
#line 617 "prog_util.m"
            else
#line 617 "prog_util.m"
              if (((((((((((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 7)))) || (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 6)))))) || (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 9)))))) || (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 5)))))) || (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 8))))))
#line 630 "prog_util.m"
                parse_tree__prog_util__Arity_4 = (MR_Integer) 0;
#line 617 "prog_util.m"
              else
#line 642 "prog_util.m"
                {
#line 643 "prog_util.m"
                  {
#line 643 "prog_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "function \140parse_tree.prog_util.cons_id_arity\'/1", (MR_String) "unexpected cons_id");
                  }
#line 642 "prog_util.m"
                }
#line 617 "prog_util.m"
        return parse_tree__prog_util__Arity_4;
#line 617 "prog_util.m"
      }
#line 617 "prog_util.m"
      break;
#line 617 "prog_util.m"
    }
#line 122 "prog_util.m"
}

#line 116 "prog_util.m"
MR_bool MR_CALL 
parse_tree__prog_util__cons_id_and_args_to_term_3_p_0(
#line 116 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_34,
#line 116 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 116 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 116 "prog_util.m"
  MR_Word * parse_tree__prog_util__Term_3)
#line 116 "prog_util.m"
{
#line 597 "prog_util.m"
  {
#line 597 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 597 "prog_util.m"
    if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 603 "prog_util.m"
      {
#line 603 "prog_util.m"
        MR_Char parse_tree__prog_util__Char_14;
#line 603 "prog_util.m"
        MR_Word parse_tree__prog_util__SymName_16;
#line 603 "prog_util.m"
        MR_String parse_tree__prog_util__V_17_17;
#line 603 "prog_util.m"
        MR_Word parse_tree__prog_util__V_18_18;
#line 603 "prog_util.m"
        MR_Word parse_tree__prog_util__Context_38;

#line 603 "prog_util.m"
        parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 603 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 603 "prog_util.m"
          {
#line 603 "prog_util.m"
            parse_tree__prog_util__Char_14 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 604 "prog_util.m"
            {
#line 604 "prog_util.m"
              parse_tree__prog_util__V_17_17 = mercury__string__from_char_1_f_0(parse_tree__prog_util__Char_14);
            }
#line 605 "prog_util.m"
            parse_tree__prog_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 604 "prog_util.m"
            {
#line 604 "prog_util.m"
              parse_tree__prog_util__SymName_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 604 "prog_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_util__SymName_16, 0) = ((MR_Box) (parse_tree__prog_util__V_17_17));
#line 604 "prog_util.m"
            }
#line 210 "prog_util.m"
            {
#line 210 "prog_util.m"
              mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_38);
            }
#line 211 "prog_util.m"
            {
#line 211 "prog_util.m"
              parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__prog_util__TypeInfo_for_T_34, parse_tree__prog_util__SymName_16, parse_tree__prog_util__V_18_18, parse_tree__prog_util__Context_38, parse_tree__prog_util__Term_3);
            }
#line 211 "prog_util.m"
            parse_tree__prog_util__succeeded = MR_TRUE;
#line 603 "prog_util.m"
          }
#line 603 "prog_util.m"
      }
#line 597 "prog_util.m"
    else
#line 597 "prog_util.m"
      if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 612 "prog_util.m"
        {
#line 612 "prog_util.m"
          MR_Word parse_tree__prog_util__SymName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 612 "prog_util.m"
          MR_Word parse_tree__prog_util__Context_42;
#line 612 "prog_util.m"
          MR_Integer parse_tree__prog_util___Arity_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 2)));
#line 612 "prog_util.m"
          MR_Word parse_tree__prog_util___TypeCtor_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 3)));

#line 210 "prog_util.m"
          {
#line 210 "prog_util.m"
            mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_42);
          }
#line 211 "prog_util.m"
          {
#line 211 "prog_util.m"
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__prog_util__TypeInfo_for_T_34, parse_tree__prog_util__SymName_29, parse_tree__prog_util__HeadVar__2_2, parse_tree__prog_util__Context_42, parse_tree__prog_util__Term_3);
          }
#line 612 "prog_util.m"
          parse_tree__prog_util__succeeded = MR_TRUE;
#line 612 "prog_util.m"
        }
#line 597 "prog_util.m"
      else
#line 597 "prog_util.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 600 "prog_util.m"
          {
#line 600 "prog_util.m"
            MR_Float parse_tree__prog_util__Float_9;
#line 600 "prog_util.m"
            MR_Word parse_tree__prog_util__Context_11;
#line 600 "prog_util.m"
            MR_Word parse_tree__prog_util__V_12_12;
#line 600 "prog_util.m"
            MR_Word parse_tree__prog_util__V_13_13;

#line 600 "prog_util.m"
            parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 600 "prog_util.m"
            if (parse_tree__prog_util__succeeded)
#line 600 "prog_util.m"
              {
#line 600 "prog_util.m"
                parse_tree__prog_util__Float_9 = MR_unbox_float((MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 601 "prog_util.m"
                {
#line 601 "prog_util.m"
                  mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_11);
                }
#line 602 "prog_util.m"
                parse_tree__prog_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 602 "prog_util.m"
                {
#line 602 "prog_util.m"
                  parse_tree__prog_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 602 "prog_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_util__V_12_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 602 "prog_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_util__V_12_12, 1) = MR_box_float(parse_tree__prog_util__Float_9);
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
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__V_12_12));
#line 602 "prog_util.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__V_13_13));
#line 602 "prog_util.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_11));
#line 602 "prog_util.m"
                }
#line 602 "prog_util.m"
                parse_tree__prog_util__succeeded = MR_TRUE;
#line 600 "prog_util.m"
              }
#line 600 "prog_util.m"
          }
#line 597 "prog_util.m"
        else
#line 597 "prog_util.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 597 "prog_util.m"
            {
#line 597 "prog_util.m"
              MR_Integer parse_tree__prog_util__Int_4;
#line 597 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_6;
#line 597 "prog_util.m"
              MR_Word parse_tree__prog_util__V_7_7;
#line 597 "prog_util.m"
              MR_Word parse_tree__prog_util__V_8_8;

#line 597 "prog_util.m"
              parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 597 "prog_util.m"
              if (parse_tree__prog_util__succeeded)
#line 597 "prog_util.m"
                {
#line 597 "prog_util.m"
                  parse_tree__prog_util__Int_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 598 "prog_util.m"
                  {
#line 598 "prog_util.m"
                    mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_6);
                  }
#line 599 "prog_util.m"
                  parse_tree__prog_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 599 "prog_util.m"
                  {
#line 599 "prog_util.m"
                    parse_tree__prog_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 599 "prog_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_7_7, 0) = ((MR_Box) (parse_tree__prog_util__Int_4));
#line 599 "prog_util.m"
                  }
#line 599 "prog_util.m"
                  {
#line 599 "prog_util.m"
                    MR_Word base;
#line 599 "prog_util.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 599 "prog_util.m"
                    *parse_tree__prog_util__Term_3 = base;
#line 599 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__V_7_7));
#line 599 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__V_8_8));
#line 599 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_6));
#line 599 "prog_util.m"
                  }
#line 599 "prog_util.m"
                  parse_tree__prog_util__succeeded = MR_TRUE;
#line 597 "prog_util.m"
                }
#line 597 "prog_util.m"
            }
#line 597 "prog_util.m"
          else
#line 597 "prog_util.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 606 "prog_util.m"
              {
#line 606 "prog_util.m"
                MR_String parse_tree__prog_util__String_19;
#line 606 "prog_util.m"
                MR_Word parse_tree__prog_util__Context_21;
#line 606 "prog_util.m"
                MR_Word parse_tree__prog_util__V_22_22;
#line 606 "prog_util.m"
                MR_Word parse_tree__prog_util__V_23_23;

#line 606 "prog_util.m"
                parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 606 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 606 "prog_util.m"
                  {
#line 606 "prog_util.m"
                    parse_tree__prog_util__String_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 607 "prog_util.m"
                    {
#line 607 "prog_util.m"
                      mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_21);
                    }
#line 608 "prog_util.m"
                    parse_tree__prog_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 608 "prog_util.m"
                    {
#line 608 "prog_util.m"
                      parse_tree__prog_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 608 "prog_util.m"
                      MR_hl_field(MR_mktag(2), parse_tree__prog_util__V_22_22, 0) = ((MR_Box) (parse_tree__prog_util__String_19));
#line 608 "prog_util.m"
                    }
#line 608 "prog_util.m"
                    {
#line 608 "prog_util.m"
                      MR_Word base;
#line 608 "prog_util.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 608 "prog_util.m"
                      *parse_tree__prog_util__Term_3 = base;
#line 608 "prog_util.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__V_22_22));
#line 608 "prog_util.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__V_23_23));
#line 608 "prog_util.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_21));
#line 608 "prog_util.m"
                    }
#line 608 "prog_util.m"
                    parse_tree__prog_util__succeeded = MR_TRUE;
#line 606 "prog_util.m"
                  }
#line 606 "prog_util.m"
              }
#line 597 "prog_util.m"
            else
#line 597 "prog_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 609 "prog_util.m"
                {
#line 609 "prog_util.m"
                  MR_Word parse_tree__prog_util__Context_46;

#line 210 "prog_util.m"
                  {
#line 210 "prog_util.m"
                    mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_46);
                  }
#line 211 "prog_util.m"
                  {
#line 211 "prog_util.m"
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__prog_util__TypeInfo_for_T_34, (MR_Word) &parse_tree__prog_util_scalar_common_3[2], parse_tree__prog_util__HeadVar__2_2, parse_tree__prog_util__Context_46, parse_tree__prog_util__Term_3);
                  }
#line 609 "prog_util.m"
                  parse_tree__prog_util__succeeded = MR_TRUE;
#line 609 "prog_util.m"
                }
#line 597 "prog_util.m"
              else
#line 597 "prog_util.m"
                parse_tree__prog_util__succeeded = MR_FALSE;
#line 597 "prog_util.m"
    return parse_tree__prog_util__succeeded;
#line 597 "prog_util.m"
  }
#line 116 "prog_util.m"
}

#line 106 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0(
#line 106 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 106 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 106 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3,
#line 106 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__4_4)
#line 106 "prog_util.m"
{
#line 267 "prog_util.m"
  {
#line 267 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 267 "prog_util.m"
    MR_Word parse_tree__prog_util__Goal0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)));
#line 267 "prog_util.m"
    MR_Word parse_tree__prog_util__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
#line 267 "prog_util.m"
    MR_Word parse_tree__prog_util__Goal_9;

#line 268 "prog_util.m"
    {
#line 268 "prog_util.m"
      parse_tree__prog_util__rename_in_goal_expr_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_7, &parse_tree__prog_util__Goal_9);
    }
#line 267 "prog_util.m"
    {
#line 267 "prog_util.m"
      MR_Word base;
#line 267 "prog_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 267 "prog_util.m"
      *parse_tree__prog_util__HeadVar__4_4 = base;
#line 267 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__Goal_9));
#line 267 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_8));
#line 267 "prog_util.m"
    }
#line 267 "prog_util.m"
  }
#line 106 "prog_util.m"
}

#line 99 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__split_type_and_mode_3_p_0(
#line 99 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 99 "prog_util.m"
  MR_Word * parse_tree__prog_util__T_2,
#line 99 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__3_3)
#line 99 "prog_util.m"
{
#line 262 "prog_util.m"
  {
#line 262 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 262 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 263 "prog_util.m"
      {
#line 263 "prog_util.m"
        MR_Word parse_tree__prog_util__M_6;

#line 263 "prog_util.m"
        *parse_tree__prog_util__T_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 263 "prog_util.m"
        parse_tree__prog_util__M_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 263 "prog_util.m"
        {
#line 263 "prog_util.m"
          MR_Word base;
#line 263 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 263 "prog_util.m"
          *parse_tree__prog_util__HeadVar__3_3 = base;
#line 263 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__M_6));
#line 263 "prog_util.m"
        }
#line 263 "prog_util.m"
      }
#line 262 "prog_util.m"
    else
#line 262 "prog_util.m"
      {
#line 262 "prog_util.m"
        *parse_tree__prog_util__T_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 262 "prog_util.m"
        *parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 262 "prog_util.m"
      }
#line 262 "prog_util.m"
  }
#line 99 "prog_util.m"
}

#line 96 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__split_types_and_modes_3_p_0(
#line 96 "prog_util.m"
  MR_Word parse_tree__prog_util__TypesAndModes_4,
#line 96 "prog_util.m"
  MR_Word * parse_tree__prog_util__Types_5,
#line 96 "prog_util.m"
  MR_Word * parse_tree__prog_util__MaybeModes_6)
#line 96 "prog_util.m"
{
#line 233 "prog_util.m"
  {
#line 233 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 233 "prog_util.m"
    MR_Word parse_tree__prog_util__Modes_7;
#line 233 "prog_util.m"
    MR_Word parse_tree__prog_util__Result_8;

#line 234 "prog_util.m"
    {
#line 234 "prog_util.m"
      parse_tree__prog_util__split_types_and_modes_2_5_p_0(parse_tree__prog_util__TypesAndModes_4, (MR_Integer) 1, parse_tree__prog_util__Types_5, &parse_tree__prog_util__Modes_7, &parse_tree__prog_util__Result_8);
    }
#line 238 "prog_util.m"
    if ((parse_tree__prog_util__Result_8 == (MR_Integer) 0))
#line 240 "prog_util.m"
      *parse_tree__prog_util__MaybeModes_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 238 "prog_util.m"
    else
#line 237 "prog_util.m"
      {
#line 237 "prog_util.m"
        MR_Word base;
#line 237 "prog_util.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 237 "prog_util.m"
        *parse_tree__prog_util__MaybeModes_6 = base;
#line 237 "prog_util.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Modes_7));
#line 237 "prog_util.m"
      }
#line 233 "prog_util.m"
  }
#line 96 "prog_util.m"
}

#line 71 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__make_pred_name_with_context_7_p_0(
#line 71 "prog_util.m"
  MR_Word parse_tree__prog_util__ModuleName_8,
#line 71 "prog_util.m"
  MR_String parse_tree__prog_util__Prefix_9,
#line 71 "prog_util.m"
  MR_Word parse_tree__prog_util__PredOrFunc_10,
#line 71 "prog_util.m"
  MR_String parse_tree__prog_util__PredName_11,
#line 71 "prog_util.m"
  MR_Integer parse_tree__prog_util__Line_12,
#line 71 "prog_util.m"
  MR_Integer parse_tree__prog_util__Counter_13,
#line 71 "prog_util.m"
  MR_Word * parse_tree__prog_util__SymName_14)
#line 71 "prog_util.m"
{
#line 526 "prog_util.m"
  {
#line 526 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 526 "prog_util.m"
    MR_Word parse_tree__prog_util__V_15_15;
#line 526 "prog_util.m"
    MR_Word parse_tree__prog_util__V_16_16;

#line 527 "prog_util.m"
    {
#line 527 "prog_util.m"
      parse_tree__prog_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 527 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_15_15, 0) = ((MR_Box) (parse_tree__prog_util__PredOrFunc_10));
#line 527 "prog_util.m"
    }
#line 528 "prog_util.m"
    {
#line 528 "prog_util.m"
      parse_tree__prog_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_util__Line_12));
#line 528 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_16_16, 1) = ((MR_Box) (parse_tree__prog_util__Counter_13));
#line 528 "prog_util.m"
    }
#line 527 "prog_util.m"
    {
#line 527 "prog_util.m"
      parse_tree__prog_util__make_pred_name_6_p_0(parse_tree__prog_util__ModuleName_8, parse_tree__prog_util__Prefix_9, parse_tree__prog_util__V_15_15, parse_tree__prog_util__PredName_11, parse_tree__prog_util__V_16_16, parse_tree__prog_util__SymName_14);
#line 527 "prog_util.m"
      return;
    }
#line 526 "prog_util.m"
  }
#line 71 "prog_util.m"
}

#line 62 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__make_pred_name_6_p_0(
#line 62 "prog_util.m"
  MR_Word parse_tree__prog_util__ModuleName_7,
#line 62 "prog_util.m"
  MR_String parse_tree__prog_util__Prefix_8,
#line 62 "prog_util.m"
  MR_Word parse_tree__prog_util__MaybePredOrFunc_9,
#line 62 "prog_util.m"
  MR_String parse_tree__prog_util__PredName_10,
#line 62 "prog_util.m"
  MR_Word parse_tree__prog_util__NewPredId_11,
#line 62 "prog_util.m"
  MR_Word * parse_tree__prog_util__SymName_12)
#line 62 "prog_util.m"
{
#line 531 "prog_util.m"
  {
#line 531 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 531 "prog_util.m"
    MR_String parse_tree__prog_util__PFS_14;
#line 531 "prog_util.m"
    MR_String parse_tree__prog_util__PredIdStr_17;
#line 531 "prog_util.m"
    MR_String parse_tree__prog_util__Name_32;
#line 531 "prog_util.m"
    MR_String parse_tree__prog_util__V_93_93;
#line 531 "prog_util.m"
    MR_Word parse_tree__prog_util__V_99_99;
#line 531 "prog_util.m"
    MR_String parse_tree__prog_util__V_101_101;
#line 531 "prog_util.m"
    MR_String parse_tree__prog_util__V_102_102;
#line 531 "prog_util.m"
    MR_String parse_tree__prog_util__V_109_109;
#line 531 "prog_util.m"
    MR_String parse_tree__prog_util__V_111_111;
#line 531 "prog_util.m"
    MR_String parse_tree__prog_util__V_112_112;
#line 531 "prog_util.m"
    MR_String parse_tree__prog_util__V_119_119;
#line 531 "prog_util.m"
    MR_String parse_tree__prog_util__V_121_121;
#line 531 "prog_util.m"
    MR_String parse_tree__prog_util__V_122_122;

#line 535 "prog_util.m"
    if ((parse_tree__prog_util__MaybePredOrFunc_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 537 "prog_util.m"
      parse_tree__prog_util__PFS_14 = (MR_String) "pred_or_func";
#line 535 "prog_util.m"
    else
#line 533 "prog_util.m"
      {
#line 533 "prog_util.m"
        MR_Word parse_tree__prog_util__PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybePredOrFunc_9, (MR_Integer) 0)));

#line 534 "prog_util.m"
        {
#line 534 "prog_util.m"
          parse_tree__prog_util__PFS_14 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(parse_tree__prog_util__PredOrFunc_13);
        }
#line 533 "prog_util.m"
      }
#line 542 "prog_util.m"
    if ((parse_tree__prog_util__NewPredId_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 566 "prog_util.m"
      parse_tree__prog_util__PredIdStr_17 = (MR_String) "";
#line 542 "prog_util.m"
    else
#line 542 "prog_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_util__NewPredId_11)) == (MR_mktag((MR_Integer) 1))))
#line 540 "prog_util.m"
        {
#line 540 "prog_util.m"
          MR_Integer parse_tree__prog_util__Line_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)));
#line 540 "prog_util.m"
          MR_Integer parse_tree__prog_util__Counter_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));
#line 540 "prog_util.m"
          MR_String parse_tree__prog_util__V_77_77;
#line 540 "prog_util.m"
          MR_Word parse_tree__prog_util__V_83_83 = (MR_Word) &parse_tree__prog_util_scalar_common_3[1];
#line 540 "prog_util.m"
          MR_String parse_tree__prog_util__V_85_85;
#line 540 "prog_util.m"
          MR_String parse_tree__prog_util__V_86_86;

#line 541 "prog_util.m"
          {
#line 541 "prog_util.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_83_83, parse_tree__prog_util__Counter_16, &parse_tree__prog_util__V_77_77);
          }
#line 541 "prog_util.m"
          {
#line 541 "prog_util.m"
            parse_tree__prog_util__V_85_85 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__V_77_77);
          }
#line 541 "prog_util.m"
          {
#line 541 "prog_util.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_83_83, parse_tree__prog_util__Line_15, &parse_tree__prog_util__V_86_86);
          }
#line 541 "prog_util.m"
          {
#line 541 "prog_util.m"
            parse_tree__prog_util__PredIdStr_17 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__V_86_86, parse_tree__prog_util__V_85_85);
          }
#line 540 "prog_util.m"
        }
#line 542 "prog_util.m"
      else
#line 542 "prog_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_util__NewPredId_11)) == (MR_mktag((MR_Integer) 2))))
#line 543 "prog_util.m"
          {
#line 543 "prog_util.m"
            MR_Word parse_tree__prog_util__VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)));
#line 543 "prog_util.m"
            MR_Word parse_tree__prog_util__TypeSubst_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

#line 550 "prog_util.m"
            {
#line 550 "prog_util.m"
              parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(parse_tree__prog_util__VarSet_18, parse_tree__prog_util__TypeSubst_19, &parse_tree__prog_util__PredIdStr_17);
            }
#line 543 "prog_util.m"
          }
#line 542 "prog_util.m"
        else
#line 542 "prog_util.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_util__NewPredId_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 562 "prog_util.m"
            {
#line 562 "prog_util.m"
              MR_Integer parse_tree__prog_util__Distance_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

#line 563 "prog_util.m"
              {
#line 563 "prog_util.m"
                mercury__string__int_to_string_2_p_0(parse_tree__prog_util__Distance_31, &parse_tree__prog_util__PredIdStr_17);
              }
#line 562 "prog_util.m"
            }
#line 542 "prog_util.m"
          else
#line 542 "prog_util.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_util__NewPredId_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 554 "prog_util.m"
              {
#line 554 "prog_util.m"
                MR_Word parse_tree__prog_util__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

#line 555 "prog_util.m"
                {
#line 555 "prog_util.m"
                  parse_tree__prog_util__list_to_string__ho1_3_p_0(parse_tree__prog_util__Args_27, &parse_tree__prog_util__PredIdStr_17);
                }
#line 554 "prog_util.m"
              }
#line 542 "prog_util.m"
            else
#line 542 "prog_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_util__NewPredId_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 557 "prog_util.m"
                {
#line 557 "prog_util.m"
                  MR_Integer parse_tree__prog_util__ModeNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));
#line 557 "prog_util.m"
                  MR_String parse_tree__prog_util__ModeStr_29;
#line 557 "prog_util.m"
                  MR_String parse_tree__prog_util__ArgsStr_30;
#line 557 "prog_util.m"
                  MR_String parse_tree__prog_util__V_34_34;
#line 557 "prog_util.m"
                  MR_Word parse_tree__prog_util__Args_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 2)));

#line 558 "prog_util.m"
                  {
#line 558 "prog_util.m"
                    mercury__string__int_to_string_2_p_0(parse_tree__prog_util__ModeNum_28, &parse_tree__prog_util__ModeStr_29);
                  }
#line 559 "prog_util.m"
                  {
#line 559 "prog_util.m"
                    parse_tree__prog_util__list_to_string__ho1_3_p_0(parse_tree__prog_util__Args_63, &parse_tree__prog_util__ArgsStr_30);
                  }
#line 560 "prog_util.m"
                  {
#line 560 "prog_util.m"
                    parse_tree__prog_util__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__ArgsStr_30);
                  }
#line 560 "prog_util.m"
                  {
#line 560 "prog_util.m"
                    parse_tree__prog_util__PredIdStr_17 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__ModeStr_29, parse_tree__prog_util__V_34_34);
                  }
#line 557 "prog_util.m"
                }
#line 542 "prog_util.m"
              else
#line 554 "prog_util.m"
                {
#line 554 "prog_util.m"
                  MR_Word parse_tree__prog_util__Args_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

#line 555 "prog_util.m"
                  {
#line 555 "prog_util.m"
                    parse_tree__prog_util__list_to_string__ho1_3_p_0(parse_tree__prog_util__Args_74, &parse_tree__prog_util__PredIdStr_17);
                  }
#line 554 "prog_util.m"
                }
#line 6905 "parse_tree.prog_util.c"
    parse_tree__prog_util__V_99_99 = (MR_Word) &parse_tree__prog_util_scalar_common_3[1];
#line 570 "prog_util.m"
    {
#line 570 "prog_util.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_99_99, parse_tree__prog_util__PredIdStr_17, &parse_tree__prog_util__V_93_93);
    }
#line 569 "prog_util.m"
    {
#line 569 "prog_util.m"
      parse_tree__prog_util__V_101_101 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__V_93_93);
    }
#line 570 "prog_util.m"
    {
#line 570 "prog_util.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_99_99, parse_tree__prog_util__PredName_10, &parse_tree__prog_util__V_102_102);
    }
#line 569 "prog_util.m"
    {
#line 569 "prog_util.m"
      parse_tree__prog_util__V_109_109 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__V_102_102, parse_tree__prog_util__V_101_101);
    }
#line 569 "prog_util.m"
    {
#line 569 "prog_util.m"
      parse_tree__prog_util__V_111_111 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__V_109_109);
    }
#line 570 "prog_util.m"
    {
#line 570 "prog_util.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_99_99, parse_tree__prog_util__PFS_14, &parse_tree__prog_util__V_112_112);
    }
#line 569 "prog_util.m"
    {
#line 569 "prog_util.m"
      parse_tree__prog_util__V_119_119 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__V_112_112, parse_tree__prog_util__V_111_111);
    }
#line 569 "prog_util.m"
    {
#line 569 "prog_util.m"
      parse_tree__prog_util__V_121_121 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__V_119_119);
    }
#line 570 "prog_util.m"
    {
#line 570 "prog_util.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_99_99, parse_tree__prog_util__Prefix_8, &parse_tree__prog_util__V_122_122);
    }
#line 569 "prog_util.m"
    {
#line 569 "prog_util.m"
      parse_tree__prog_util__Name_32 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__V_122_122, parse_tree__prog_util__V_121_121);
    }
#line 571 "prog_util.m"
    {
#line 571 "prog_util.m"
      MR_Word base;
#line 571 "prog_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "prog_util.m"
      *parse_tree__prog_util__SymName_12 = base;
#line 571 "prog_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__ModuleName_7));
#line 571 "prog_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Name_32));
#line 571 "prog_util.m"
    }
#line 531 "prog_util.m"
  }
#line 62 "prog_util.m"
}

#line 52 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__adjust_func_arity_3_p_1(
#line 52 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 52 "prog_util.m"
  MR_Integer * parse_tree__prog_util__HeadVar__2_2,
#line 52 "prog_util.m"
  MR_Integer parse_tree__prog_util__Arity_3)
#line 52 "prog_util.m"
{
#line 227 "prog_util.m"
  {
#line 227 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 227 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__1_1 == (MR_Integer) 1))
#line 228 "prog_util.m"
      {
#line 228 "prog_util.m"
        *parse_tree__prog_util__HeadVar__2_2 = (parse_tree__prog_util__Arity_3 - (MR_Integer) 1);
#line 228 "prog_util.m"
      }
#line 227 "prog_util.m"
    else
#line 227 "prog_util.m"
      *parse_tree__prog_util__HeadVar__2_2 = parse_tree__prog_util__Arity_3;
#line 227 "prog_util.m"
  }
#line 52 "prog_util.m"
}

#line 51 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__adjust_func_arity_3_p_0(
#line 51 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 51 "prog_util.m"
  MR_Integer parse_tree__prog_util__HeadVar__2_2,
#line 51 "prog_util.m"
  MR_Integer * parse_tree__prog_util__Arity_3)
#line 51 "prog_util.m"
{
#line 227 "prog_util.m"
  {
#line 227 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 227 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__1_1 == (MR_Integer) 1))
#line 228 "prog_util.m"
      {
#line 228 "prog_util.m"
        *parse_tree__prog_util__Arity_3 = ((MR_Integer) 1 + parse_tree__prog_util__HeadVar__2_2);
#line 228 "prog_util.m"
      }
#line 227 "prog_util.m"
    else
#line 227 "prog_util.m"
      *parse_tree__prog_util__Arity_3 = parse_tree__prog_util__HeadVar__2_2;
#line 227 "prog_util.m"
  }
#line 51 "prog_util.m"
}

#line 39 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(
#line 39 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_22,
#line 39 "prog_util.m"
  MR_Word parse_tree__prog_util__SymName_5,
#line 39 "prog_util.m"
  MR_Word parse_tree__prog_util__Args_6,
#line 39 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_7,
#line 39 "prog_util.m"
  MR_Word * parse_tree__prog_util__Term_8)
#line 39 "prog_util.m"
{
#line 220 "prog_util.m"
  {
#line 220 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 220 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__SymName_5)) == (MR_mktag((MR_Integer) 1))))
#line 215 "prog_util.m"
      {
#line 215 "prog_util.m"
        MR_Word parse_tree__prog_util__Module_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__SymName_5, (MR_Integer) 0)));
#line 215 "prog_util.m"
        MR_String parse_tree__prog_util__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__SymName_5, (MR_Integer) 1)));
#line 215 "prog_util.m"
        MR_Word parse_tree__prog_util__ModuleTerm_11;
#line 215 "prog_util.m"
        MR_Word parse_tree__prog_util__UnqualifiedTerm_12;
#line 215 "prog_util.m"
        MR_Word parse_tree__prog_util__V_15_15;
#line 215 "prog_util.m"
        MR_Word parse_tree__prog_util__V_18_18;
#line 215 "prog_util.m"
        MR_Word parse_tree__prog_util__V_19_19;

#line 216 "prog_util.m"
        {
#line 216 "prog_util.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__prog_util__TypeInfo_for_T_22, parse_tree__prog_util__Module_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_util__Context_7, &parse_tree__prog_util__ModuleTerm_11);
        }
#line 217 "prog_util.m"
        {
#line 217 "prog_util.m"
          parse_tree__prog_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 217 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_15_15, 0) = ((MR_Box) (parse_tree__prog_util__Name_10));
#line 217 "prog_util.m"
        }
#line 217 "prog_util.m"
        {
#line 217 "prog_util.m"
          parse_tree__prog_util__UnqualifiedTerm_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 217 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__UnqualifiedTerm_12, 0) = ((MR_Box) (parse_tree__prog_util__V_15_15));
#line 217 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__UnqualifiedTerm_12, 1) = ((MR_Box) (parse_tree__prog_util__Args_6));
#line 217 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__UnqualifiedTerm_12, 2) = ((MR_Box) (parse_tree__prog_util__Context_7));
#line 217 "prog_util.m"
        }
#line 219 "prog_util.m"
        {
#line 219 "prog_util.m"
          parse_tree__prog_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_19_19, 0) = ((MR_Box) (parse_tree__prog_util__UnqualifiedTerm_12));
#line 219 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 219 "prog_util.m"
        }
#line 219 "prog_util.m"
        {
#line 219 "prog_util.m"
          parse_tree__prog_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_18_18, 0) = ((MR_Box) (parse_tree__prog_util__ModuleTerm_11));
#line 219 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_18_18, 1) = ((MR_Box) (parse_tree__prog_util__V_19_19));
#line 219 "prog_util.m"
        }
#line 218 "prog_util.m"
        {
#line 218 "prog_util.m"
          MR_Word base;
#line 218 "prog_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 218 "prog_util.m"
          *parse_tree__prog_util__Term_8 = base;
#line 218 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[0]));
#line 218 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__V_18_18));
#line 218 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_7));
#line 218 "prog_util.m"
        }
#line 215 "prog_util.m"
      }
#line 220 "prog_util.m"
    else
#line 221 "prog_util.m"
      {
#line 221 "prog_util.m"
        MR_Word parse_tree__prog_util__V_13_13;
#line 221 "prog_util.m"
        MR_String parse_tree__prog_util__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__SymName_5, (MR_Integer) 0)));

#line 222 "prog_util.m"
        {
#line 222 "prog_util.m"
          parse_tree__prog_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 222 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 0) = ((MR_Box) (parse_tree__prog_util__Name_21));
#line 222 "prog_util.m"
        }
#line 222 "prog_util.m"
        {
#line 222 "prog_util.m"
          MR_Word base;
#line 222 "prog_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 222 "prog_util.m"
          *parse_tree__prog_util__Term_8 = base;
#line 222 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__V_13_13));
#line 222 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__Args_6));
#line 222 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_7));
#line 222 "prog_util.m"
        }
#line 221 "prog_util.m"
      }
#line 220 "prog_util.m"
  }
#line 39 "prog_util.m"
}

#line 36 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__construct_qualified_term_3_p_0(
#line 36 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_8,
#line 36 "prog_util.m"
  MR_Word parse_tree__prog_util__SymName_4,
#line 36 "prog_util.m"
  MR_Word parse_tree__prog_util__Args_5,
#line 36 "prog_util.m"
  MR_Word * parse_tree__prog_util__Term_6)
#line 36 "prog_util.m"
{
#line 209 "prog_util.m"
  {
#line 209 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 209 "prog_util.m"
    MR_Word parse_tree__prog_util__Context_7;

#line 210 "prog_util.m"
    {
#line 210 "prog_util.m"
      mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_7);
    }
#line 211 "prog_util.m"
    {
#line 211 "prog_util.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__prog_util__TypeInfo_for_T_8, parse_tree__prog_util__SymName_4, parse_tree__prog_util__Args_5, parse_tree__prog_util__Context_7, parse_tree__prog_util__Term_6);
#line 211 "prog_util.m"
      return;
    }
#line 209 "prog_util.m"
  }
#line 36 "prog_util.m"
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
