/*
** Automatically generated from `prog_util.m'
** by the Mercury compiler,
** version rotd-2015-01-28
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
#include "cord.mih"
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
#include "set_tree234.mih"
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




#line 139 "parse_tree.prog_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 142 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 145 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 148 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_0[2];

#line 151 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_0;

#line 154 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 157 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 160 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_util__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 163 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 166 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_1[2];

#line 169 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_1;

#line 172 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0;

#line 175 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_2[1];

#line 178 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_2;

#line 181 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_3[1];

#line 184 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_3;

#line 187 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_4;

#line 190 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_5[2];

#line 193 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_5;

#line 196 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_6[1];

#line 199 "parse_tree.prog_util.c"
static const MR_DuFunctorDesc parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_6;

#line 202 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_0[1];

#line 205 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_1[1];

#line 208 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_2[1];

#line 211 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_3[4];

#line 214 "parse_tree.prog_util.c"
static const MR_DuPtagLayout parse_tree__prog_util__parse_tree__prog_util__du_ptag_ordered_new_pred_id_0[4];

#line 217 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_name_ordered_new_pred_id_0[7];

#line 220 "parse_tree.prog_util.c"
static const MR_Integer parse_tree__prog_util__parse_tree__prog_util__functor_number_map_new_pred_id_0[7];

#line 223 "parse_tree.prog_util.c"
static MR_bool MR_CALL 
parse_tree__prog_util____Unify____maybe_modes_0_0_10001(
#line 226 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 228 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2);

#line 231 "parse_tree.prog_util.c"
static void MR_CALL 
parse_tree__prog_util____Compare____maybe_modes_0_0_10001(
#line 234 "parse_tree.prog_util.c"
  MR_Box * parse_tree__prog_util__wrapper_arg_1,
#line 236 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2,
#line 238 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_3);

#line 241 "parse_tree.prog_util.c"
static MR_bool MR_CALL 
parse_tree__prog_util____Unify____new_pred_id_0_0_10001(
#line 244 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 246 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2);

#line 249 "parse_tree.prog_util.c"
static void MR_CALL 
parse_tree__prog_util____Compare____new_pred_id_0_0_10001(
#line 252 "parse_tree.prog_util.c"
  MR_Box * parse_tree__prog_util__wrapper_arg_1,
#line 254 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2,
#line 256 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_3);

#line 578 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(
#line 578 "prog_util.m"
  MR_Word parse_tree__prog_util__V_23_23,
#line 578 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 578 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
#line 578 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4);

#line 571 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(
#line 571 "prog_util.m"
  MR_Word parse_tree__prog_util__V_14_14,
#line 571 "prog_util.m"
  MR_Word parse_tree__prog_util__List_5,
#line 571 "prog_util.m"
  MR_String * parse_tree__prog_util__String_6);

#line 758 "prog_util.m"
static MR_Word MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(
#line 758 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 758 "prog_util.m"
  MR_Word parse_tree__prog_util__Term_2,
#line 758 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_3);

#line 578 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__list_to_string_2__ho4_4_p_0(
#line 578 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 578 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
#line 578 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4);

#line 571 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__list_to_string__ho1_3_p_0(
#line 571 "prog_util.m"
  MR_Word parse_tree__prog_util__List_5,
#line 571 "prog_util.m"
  MR_String * parse_tree__prog_util__String_6);

#line 542 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__542__1_3_p_0(
#line 542 "prog_util.m"
  MR_Word parse_tree__prog_util__VarSet_18,
#line 542 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_37,
#line 542 "prog_util.m"
  MR_String * parse_tree__prog_util__HeadVar__3_38);

#line 784 "prog_util.m"
static MR_Word MR_CALL 
parse_tree__prog_util__goal_list_to_conj_2_3_f_0(
#line 784 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_1,
#line 784 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 784 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3);

#line 677 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__make_n_fresh_vars_2_6_p_0(
#line 677 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_23,
#line 677 "prog_util.m"
  MR_String parse_tree__prog_util__BaseName_7,
#line 677 "prog_util.m"
  MR_Integer parse_tree__prog_util__N_8,
#line 677 "prog_util.m"
  MR_Integer parse_tree__prog_util__Max_9,
#line 677 "prog_util.m"
  MR_Word * parse_tree__prog_util__Vars_10,
#line 677 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_0_17,
#line 677 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_VarSet_18);

#line 512 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_catch_expr_4_p_0(
#line 512 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 512 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 512 "prog_util.m"
  MR_Word parse_tree__prog_util__Catch0_7,
#line 512 "prog_util.m"
  MR_Word * parse_tree__prog_util__Catch_8);

#line 499 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_maybe_var_4_p_0(
#line 499 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 499 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 499 "prog_util.m"
  MR_Word parse_tree__prog_util__MaybeVar0_7,
#line 499 "prog_util.m"
  MR_Word * parse_tree__prog_util__MaybeVar_8);

#line 489 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_var_4_p_0(
#line 489 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 489 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 489 "prog_util.m"
  MR_Word parse_tree__prog_util__Var0_7,
#line 489 "prog_util.m"
  MR_Word * parse_tree__prog_util__Var_8);

#line 481 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_vars_4_p_0(
#line 481 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_1,
#line 481 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_2,
#line 481 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3,
#line 481 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__4_4);

#line 473 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(
#line 473 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 473 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 473 "prog_util.m"
  MR_Word parse_tree__prog_util__TMV0_7,
#line 473 "prog_util.m"
  MR_Word * parse_tree__prog_util__TMV_8);

#line 458 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(
#line 458 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 458 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 458 "prog_util.m"
  MR_Word parse_tree__prog_util__Comp0_7,
#line 458 "prog_util.m"
  MR_Word * parse_tree__prog_util__Comp_8);

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

#line 411 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_4(
#line 411 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 411 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 411 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2);

#line 374 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_3(
#line 374 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 374 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 374 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2);

#line 394 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_2(
#line 394 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 394 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 394 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2);

#line 389 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_1(
#line 389 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 389 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 389 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__prog_util_scalar_common_1[9][2];

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_2[1][3];

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

static /* final */ const MR_Box parse_tree__prog_util_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_util_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0))
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



#line 625 "parse_tree.prog_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 633 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 641 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__prog_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 649 "parse_tree.prog_util.c"
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

#line 670 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 676 "parse_tree.prog_util.c"
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

#line 691 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 699 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 707 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_util__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 716 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_util__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 724 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_util__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 730 "parse_tree.prog_util.c"
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

#line 745 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 753 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 758 "parse_tree.prog_util.c"
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

#line 773 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 778 "parse_tree.prog_util.c"
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

#line 793 "parse_tree.prog_util.c"
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

#line 808 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_5[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 814 "parse_tree.prog_util.c"
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

#line 829 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 834 "parse_tree.prog_util.c"
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

#line 849 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_0[1] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_4
};

#line 854 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_1[1] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_0
};

#line 859 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_2[1] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_1
};

#line 864 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_3[4] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_2,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_3,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_5,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_6
};

#line 872 "parse_tree.prog_util.c"
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

#line 896 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_name_ordered_new_pred_id_0[7] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_0,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_6,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_3,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_4,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_5,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_1,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_2
};

#line 907 "parse_tree.prog_util.c"
static const MR_Integer parse_tree__prog_util__parse_tree__prog_util__functor_number_map_new_pred_id_0[7] = {
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1
};

#line 918 "parse_tree.prog_util.c"
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

#line 939 "parse_tree.prog_util.c"
static MR_bool MR_CALL 
parse_tree__prog_util____Unify____maybe_modes_0_0_10001(
#line 942 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 944 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2)
#line 946 "parse_tree.prog_util.c"
{
#line 948 "parse_tree.prog_util.c"
  {
#line 950 "parse_tree.prog_util.c"
    MR_bool parse_tree__prog_util__succeeded;

#line 953 "parse_tree.prog_util.c"
    {
#line 955 "parse_tree.prog_util.c"
      parse_tree__prog_util__succeeded = parse_tree__prog_util____Unify____maybe_modes_0_0(((MR_Word) parse_tree__prog_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_util__wrapper_arg_2));
    }
#line 958 "parse_tree.prog_util.c"
    return parse_tree__prog_util__succeeded;
#line 960 "parse_tree.prog_util.c"
  }
#line 962 "parse_tree.prog_util.c"
}

#line 965 "parse_tree.prog_util.c"
static void MR_CALL 
parse_tree__prog_util____Compare____maybe_modes_0_0_10001(
#line 968 "parse_tree.prog_util.c"
  MR_Box * parse_tree__prog_util__wrapper_arg_1,
#line 970 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2,
#line 972 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_3)
#line 974 "parse_tree.prog_util.c"
{
#line 976 "parse_tree.prog_util.c"
  {
#line 978 "parse_tree.prog_util.c"
    MR_Word parse_tree__prog_util__conv0_HeadVar__1_1;

#line 981 "parse_tree.prog_util.c"
    {
#line 983 "parse_tree.prog_util.c"
      parse_tree__prog_util____Compare____maybe_modes_0_0(&parse_tree__prog_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_util__wrapper_arg_3));
    }
#line 986 "parse_tree.prog_util.c"
    *parse_tree__prog_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_util__conv0_HeadVar__1_1));
#line 988 "parse_tree.prog_util.c"
  }
#line 990 "parse_tree.prog_util.c"
}

#line 993 "parse_tree.prog_util.c"
static MR_bool MR_CALL 
parse_tree__prog_util____Unify____new_pred_id_0_0_10001(
#line 996 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 998 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2)
#line 1000 "parse_tree.prog_util.c"
{
#line 1002 "parse_tree.prog_util.c"
  {
#line 1004 "parse_tree.prog_util.c"
    MR_bool parse_tree__prog_util__succeeded;

#line 1007 "parse_tree.prog_util.c"
    {
#line 1009 "parse_tree.prog_util.c"
      parse_tree__prog_util__succeeded = parse_tree__prog_util____Unify____new_pred_id_0_0(((MR_Word) parse_tree__prog_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_util__wrapper_arg_2));
    }
#line 1012 "parse_tree.prog_util.c"
    return parse_tree__prog_util__succeeded;
#line 1014 "parse_tree.prog_util.c"
  }
#line 1016 "parse_tree.prog_util.c"
}

#line 1019 "parse_tree.prog_util.c"
static void MR_CALL 
parse_tree__prog_util____Compare____new_pred_id_0_0_10001(
#line 1022 "parse_tree.prog_util.c"
  MR_Box * parse_tree__prog_util__wrapper_arg_1,
#line 1024 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2,
#line 1026 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_3)
#line 1028 "parse_tree.prog_util.c"
{
#line 1030 "parse_tree.prog_util.c"
  {
#line 1032 "parse_tree.prog_util.c"
    MR_Word parse_tree__prog_util__conv0_HeadVar__1_1;

#line 1035 "parse_tree.prog_util.c"
    {
#line 1037 "parse_tree.prog_util.c"
      parse_tree__prog_util____Compare____new_pred_id_0_0(&parse_tree__prog_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_util__wrapper_arg_3));
    }
#line 1040 "parse_tree.prog_util.c"
    *parse_tree__prog_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_util__conv0_HeadVar__1_1));
#line 1042 "parse_tree.prog_util.c"
  }
#line 1044 "parse_tree.prog_util.c"
}

#line 578 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(
#line 578 "prog_util.m"
  MR_Word parse_tree__prog_util__V_23_23,
#line 578 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 578 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
#line 578 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4)
#line 578 "prog_util.m"
{
#line 581 "prog_util.m"
  {
#line 581 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 581 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 581 "prog_util.m"
      *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 581 "prog_util.m"
    else
#line 582 "prog_util.m"
      {
#line 582 "prog_util.m"
        MR_Word parse_tree__prog_util__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
#line 582 "prog_util.m"
        MR_Word parse_tree__prog_util__Ts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 582 "prog_util.m"
        MR_String parse_tree__prog_util__String_15;
#line 582 "prog_util.m"
        MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_19;

#line 585 "prog_util.m"
        if ((parse_tree__prog_util__Ts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 584 "prog_util.m"
          parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 585 "prog_util.m"
        else
#line 586 "prog_util.m"
          {
#line 586 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_18;
#line 586 "prog_util.m"
            MR_Word parse_tree__prog_util__T_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 0)));
#line 586 "prog_util.m"
            MR_Word parse_tree__prog_util__Ts_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 1)));
#line 586 "prog_util.m"
            MR_String parse_tree__prog_util__String_34;
#line 586 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_38;

#line 585 "prog_util.m"
            if ((parse_tree__prog_util__Ts_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 584 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 585 "prog_util.m"
            else
#line 586 "prog_util.m"
              {
#line 586 "prog_util.m"
                MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_37;

#line 587 "prog_util.m"
                {
#line 587 "prog_util.m"
                  parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_util__V_23_23, parse_tree__prog_util__Ts_30, parse_tree__prog_util__STATE_VARIABLE_Strings_0_3, &parse_tree__prog_util__STATE_VARIABLE_Strings_18_37);
                }
#line 588 "prog_util.m"
                {
#line 588 "prog_util.m"
                  parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "prog_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 0) = ((MR_Box) ((MR_String) ", "));
#line 588 "prog_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_37));
#line 588 "prog_util.m"
                }
#line 586 "prog_util.m"
              }
#line 590 "prog_util.m"
            {
#line 590 "prog_util.m"
              parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__542__1_3_p_0(parse_tree__prog_util__V_23_23, parse_tree__prog_util__T_29, &parse_tree__prog_util__String_34);
            }
#line 591 "prog_util.m"
            {
#line 591 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 0) = ((MR_Box) (parse_tree__prog_util__String_34));
#line 591 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_38));
#line 591 "prog_util.m"
            }
#line 588 "prog_util.m"
            {
#line 588 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 0) = ((MR_Box) ((MR_String) ", "));
#line 588 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_18));
#line 588 "prog_util.m"
            }
#line 586 "prog_util.m"
          }
#line 590 "prog_util.m"
        {
#line 590 "prog_util.m"
          parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__542__1_3_p_0(parse_tree__prog_util__V_23_23, parse_tree__prog_util__T_10, &parse_tree__prog_util__String_15);
        }
#line 591 "prog_util.m"
        {
#line 591 "prog_util.m"
          MR_Word base;
#line 591 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "prog_util.m"
          *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = base;
#line 591 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__String_15));
#line 591 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_19));
#line 591 "prog_util.m"
        }
#line 582 "prog_util.m"
      }
#line 581 "prog_util.m"
  }
#line 578 "prog_util.m"
}

#line 571 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(
#line 571 "prog_util.m"
  MR_Word parse_tree__prog_util__V_14_14,
#line 571 "prog_util.m"
  MR_Word parse_tree__prog_util__List_5,
#line 571 "prog_util.m"
  MR_String * parse_tree__prog_util__String_6)
#line 571 "prog_util.m"
{
#line 574 "prog_util.m"
  {
#line 574 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 574 "prog_util.m"
    MR_Word parse_tree__prog_util__Strings_7;
#line 574 "prog_util.m"
    MR_Word parse_tree__prog_util__V_11_11;

#line 575 "prog_util.m"
    {
#line 575 "prog_util.m"
      parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_util__V_14_14, parse_tree__prog_util__List_5, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_1[8]), &parse_tree__prog_util__Strings_7);
    }
#line 576 "prog_util.m"
    {
#line 576 "prog_util.m"
      parse_tree__prog_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 0) = ((MR_Box) ((MR_String) "["));
#line 576 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 1) = ((MR_Box) (parse_tree__prog_util__Strings_7));
#line 576 "prog_util.m"
    }
#line 576 "prog_util.m"
    {
#line 576 "prog_util.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_util__V_11_11, parse_tree__prog_util__String_6);
#line 576 "prog_util.m"
      return;
    }
#line 574 "prog_util.m"
  }
#line 571 "prog_util.m"
}

#line 758 "prog_util.m"
static MR_Word MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(
#line 758 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 758 "prog_util.m"
  MR_Word parse_tree__prog_util__Term_2,
#line 758 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_3)
#line 758 "prog_util.m"
{
#line 761 "prog_util.m"
  {
#line 761 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 761 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__4_4;

#line 761 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 767 "prog_util.m"
      {
#line 767 "prog_util.m"
        MR_Word parse_tree__prog_util__ModuleNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 767 "prog_util.m"
        MR_String parse_tree__prog_util__ModuleName_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 767 "prog_util.m"
        MR_Word parse_tree__prog_util__V_22_22;
#line 767 "prog_util.m"
        MR_Word parse_tree__prog_util__V_23_23;
#line 767 "prog_util.m"
        MR_Word parse_tree__prog_util__V_24_24;
#line 767 "prog_util.m"
        MR_Word parse_tree__prog_util__V_25_25;
#line 767 "prog_util.m"
        MR_Word parse_tree__prog_util__V_27_27;

#line 772 "prog_util.m"
        {
#line 772 "prog_util.m"
          parse_tree__prog_util__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 772 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_25_25, 0) = ((MR_Box) (parse_tree__prog_util__ModuleName_17));
#line 772 "prog_util.m"
        }
#line 772 "prog_util.m"
        {
#line 772 "prog_util.m"
          parse_tree__prog_util__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 772 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_24_24, 0) = ((MR_Box) (parse_tree__prog_util__V_25_25));
#line 772 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_24_24, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 772 "prog_util.m"
        }
#line 770 "prog_util.m"
        {
#line 770 "prog_util.m"
          parse_tree__prog_util__V_23_23 = parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(parse_tree__prog_util__ModuleNames_16, parse_tree__prog_util__V_24_24, parse_tree__prog_util__Context_3);
        }
#line 774 "prog_util.m"
        {
#line 774 "prog_util.m"
          parse_tree__prog_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 774 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_util__Term_2));
#line 774 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 774 "prog_util.m"
        }
#line 773 "prog_util.m"
        {
#line 773 "prog_util.m"
          parse_tree__prog_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 773 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_22_22, 0) = ((MR_Box) (parse_tree__prog_util__V_23_23));
#line 773 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_22_22, 1) = ((MR_Box) (parse_tree__prog_util__V_27_27));
#line 773 "prog_util.m"
        }
#line 768 "prog_util.m"
        {
#line 768 "prog_util.m"
          parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 768 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[0]));
#line 768 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 1) = ((MR_Box) (parse_tree__prog_util__V_22_22));
#line 768 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 768 "prog_util.m"
        }
#line 767 "prog_util.m"
      }
#line 761 "prog_util.m"
    else
#line 761 "prog_util.m"
      {
#line 761 "prog_util.m"
        MR_String parse_tree__prog_util__ModuleName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 761 "prog_util.m"
        MR_Word parse_tree__prog_util__V_10_10;
#line 761 "prog_util.m"
        MR_Word parse_tree__prog_util__V_11_11;
#line 761 "prog_util.m"
        MR_Word parse_tree__prog_util__V_12_12;
#line 761 "prog_util.m"
        MR_Word parse_tree__prog_util__V_14_14;

#line 764 "prog_util.m"
        {
#line 764 "prog_util.m"
          parse_tree__prog_util__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 764 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_12_12, 0) = ((MR_Box) (parse_tree__prog_util__ModuleName_5));
#line 764 "prog_util.m"
        }
#line 764 "prog_util.m"
        {
#line 764 "prog_util.m"
          parse_tree__prog_util__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 764 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_11_11, 0) = ((MR_Box) (parse_tree__prog_util__V_12_12));
#line 764 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 764 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_11_11, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 764 "prog_util.m"
        }
#line 764 "prog_util.m"
        {
#line 764 "prog_util.m"
          parse_tree__prog_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_14_14, 0) = ((MR_Box) (parse_tree__prog_util__Term_2));
#line 764 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 764 "prog_util.m"
        }
#line 764 "prog_util.m"
        {
#line 764 "prog_util.m"
          parse_tree__prog_util__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_10_10, 0) = ((MR_Box) (parse_tree__prog_util__V_11_11));
#line 764 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_10_10, 1) = ((MR_Box) (parse_tree__prog_util__V_14_14));
#line 764 "prog_util.m"
        }
#line 762 "prog_util.m"
        {
#line 762 "prog_util.m"
          parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 762 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[0]));
#line 762 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 1) = ((MR_Box) (parse_tree__prog_util__V_10_10));
#line 762 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 762 "prog_util.m"
        }
#line 761 "prog_util.m"
      }
#line 761 "prog_util.m"
    return parse_tree__prog_util__HeadVar__4_4;
#line 761 "prog_util.m"
  }
#line 758 "prog_util.m"
}

#line 578 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__list_to_string_2__ho4_4_p_0(
#line 578 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 578 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
#line 578 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4)
#line 578 "prog_util.m"
{
#line 581 "prog_util.m"
  {
#line 581 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 581 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 581 "prog_util.m"
      *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 581 "prog_util.m"
    else
#line 582 "prog_util.m"
      {
#line 582 "prog_util.m"
        MR_Integer parse_tree__prog_util__T_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
#line 582 "prog_util.m"
        MR_Word parse_tree__prog_util__Ts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 582 "prog_util.m"
        MR_String parse_tree__prog_util__String_15;
#line 582 "prog_util.m"
        MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_19;

#line 585 "prog_util.m"
        if ((parse_tree__prog_util__Ts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 584 "prog_util.m"
          parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 585 "prog_util.m"
        else
#line 586 "prog_util.m"
          {
#line 586 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_18;
#line 586 "prog_util.m"
            MR_Integer parse_tree__prog_util__T_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 0)));
#line 586 "prog_util.m"
            MR_Word parse_tree__prog_util__Ts_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 1)));
#line 586 "prog_util.m"
            MR_String parse_tree__prog_util__String_34;
#line 586 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_38;

#line 585 "prog_util.m"
            if ((parse_tree__prog_util__Ts_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 584 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 585 "prog_util.m"
            else
#line 586 "prog_util.m"
              {
#line 586 "prog_util.m"
                MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_37;

#line 587 "prog_util.m"
                {
#line 587 "prog_util.m"
                  parse_tree__prog_util__list_to_string_2__ho4_4_p_0(parse_tree__prog_util__Ts_30, parse_tree__prog_util__STATE_VARIABLE_Strings_0_3, &parse_tree__prog_util__STATE_VARIABLE_Strings_18_37);
                }
#line 588 "prog_util.m"
                {
#line 588 "prog_util.m"
                  parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "prog_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 0) = ((MR_Box) ((MR_String) ", "));
#line 588 "prog_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_37));
#line 588 "prog_util.m"
                }
#line 586 "prog_util.m"
              }
#line 590 "prog_util.m"
            {
#line 590 "prog_util.m"
              mercury__string__int_to_string_2_p_0(parse_tree__prog_util__T_29, &parse_tree__prog_util__String_34);
            }
#line 591 "prog_util.m"
            {
#line 591 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 0) = ((MR_Box) (parse_tree__prog_util__String_34));
#line 591 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_38));
#line 591 "prog_util.m"
            }
#line 588 "prog_util.m"
            {
#line 588 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 0) = ((MR_Box) ((MR_String) ", "));
#line 588 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_18));
#line 588 "prog_util.m"
            }
#line 586 "prog_util.m"
          }
#line 590 "prog_util.m"
        {
#line 590 "prog_util.m"
          mercury__string__int_to_string_2_p_0(parse_tree__prog_util__T_10, &parse_tree__prog_util__String_15);
        }
#line 591 "prog_util.m"
        {
#line 591 "prog_util.m"
          MR_Word base;
#line 591 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "prog_util.m"
          *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = base;
#line 591 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__String_15));
#line 591 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_19));
#line 591 "prog_util.m"
        }
#line 582 "prog_util.m"
      }
#line 581 "prog_util.m"
  }
#line 578 "prog_util.m"
}

#line 571 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__list_to_string__ho1_3_p_0(
#line 571 "prog_util.m"
  MR_Word parse_tree__prog_util__List_5,
#line 571 "prog_util.m"
  MR_String * parse_tree__prog_util__String_6)
#line 571 "prog_util.m"
{
#line 574 "prog_util.m"
  {
#line 574 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 574 "prog_util.m"
    MR_Word parse_tree__prog_util__Strings_7;
#line 574 "prog_util.m"
    MR_Word parse_tree__prog_util__V_11_11;

#line 575 "prog_util.m"
    {
#line 575 "prog_util.m"
      parse_tree__prog_util__list_to_string_2__ho4_4_p_0(parse_tree__prog_util__List_5, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_1[8]), &parse_tree__prog_util__Strings_7);
    }
#line 576 "prog_util.m"
    {
#line 576 "prog_util.m"
      parse_tree__prog_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 0) = ((MR_Box) ((MR_String) "["));
#line 576 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 1) = ((MR_Box) (parse_tree__prog_util__Strings_7));
#line 576 "prog_util.m"
    }
#line 576 "prog_util.m"
    {
#line 576 "prog_util.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_util__V_11_11, parse_tree__prog_util__String_6);
#line 576 "prog_util.m"
      return;
    }
#line 574 "prog_util.m"
  }
#line 571 "prog_util.m"
}

#line 542 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__542__1_3_p_0(
#line 542 "prog_util.m"
  MR_Word parse_tree__prog_util__VarSet_18,
#line 542 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_37,
#line 542 "prog_util.m"
  MR_String * parse_tree__prog_util__HeadVar__3_38)
#line 542 "prog_util.m"
{
#line 542 "prog_util.m"
  {
#line 542 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 542 "prog_util.m"
    MR_Word parse_tree__prog_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__2_37, (MR_Integer) 0)));
#line 542 "prog_util.m"
    MR_Word parse_tree__prog_util__Type_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__2_37, (MR_Integer) 1)));
#line 542 "prog_util.m"
    MR_String parse_tree__prog_util__VarName_25;
#line 542 "prog_util.m"
    MR_String parse_tree__prog_util__TypeString_26;
#line 542 "prog_util.m"
    MR_Word parse_tree__prog_util__V_40_40;
#line 542 "prog_util.m"
    MR_Word parse_tree__prog_util__V_41_41;
#line 542 "prog_util.m"
    MR_Word parse_tree__prog_util__V_43_43;

#line 544 "prog_util.m"
    {
#line 544 "prog_util.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_util__VarSet_18, parse_tree__prog_util__Var_23, &parse_tree__prog_util__VarName_25);
    }
#line 545 "prog_util.m"
    {
#line 545 "prog_util.m"
      parse_tree__prog_util__TypeString_26 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(parse_tree__prog_util__VarSet_18, (MR_Integer) 0, parse_tree__prog_util__Type_24);
    }
#line 546 "prog_util.m"
    {
#line 546 "prog_util.m"
      parse_tree__prog_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_43_43, 0) = ((MR_Box) (parse_tree__prog_util__TypeString_26));
#line 546 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 546 "prog_util.m"
    }
#line 546 "prog_util.m"
    {
#line 546 "prog_util.m"
      parse_tree__prog_util__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_41_41, 0) = ((MR_Box) ((MR_String) " = "));
#line 546 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_41_41, 1) = ((MR_Box) (parse_tree__prog_util__V_43_43));
#line 546 "prog_util.m"
    }
#line 546 "prog_util.m"
    {
#line 546 "prog_util.m"
      parse_tree__prog_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_40_40, 0) = ((MR_Box) (parse_tree__prog_util__VarName_25));
#line 546 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_40_40, 1) = ((MR_Box) (parse_tree__prog_util__V_41_41));
#line 546 "prog_util.m"
    }
#line 546 "prog_util.m"
    {
#line 546 "prog_util.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_util__V_40_40, parse_tree__prog_util__HeadVar__3_38);
#line 546 "prog_util.m"
      return;
    }
#line 542 "prog_util.m"
  }
#line 542 "prog_util.m"
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
#line 1685 "parse_tree.prog_util.c"
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
#line 1699 "parse_tree.prog_util.c"
            *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
          else
#line 74 "prog_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1705 "parse_tree.prog_util.c"
              *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
            else
#line 74 "prog_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1711 "parse_tree.prog_util.c"
                *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
              else
#line 74 "prog_util.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1717 "parse_tree.prog_util.c"
                  *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                else
#line 74 "prog_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1723 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                  else
#line 1727 "parse_tree.prog_util.c"
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
#line 1742 "parse_tree.prog_util.c"
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
#line 1762 "parse_tree.prog_util.c"
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
#line 1785 "parse_tree.prog_util.c"
                  *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                else
#line 74 "prog_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1791 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                  else
#line 74 "prog_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1797 "parse_tree.prog_util.c"
                      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                    else
#line 74 "prog_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1803 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                      else
#line 1807 "parse_tree.prog_util.c"
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
#line 1824 "parse_tree.prog_util.c"
                *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
              else
#line 74 "prog_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1830 "parse_tree.prog_util.c"
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
#line 1850 "parse_tree.prog_util.c"
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
#line 1877 "parse_tree.prog_util.c"
                      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                    else
#line 74 "prog_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1883 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                      else
#line 74 "prog_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1889 "parse_tree.prog_util.c"
                          *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                        else
#line 1893 "parse_tree.prog_util.c"
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
#line 1908 "parse_tree.prog_util.c"
                  *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                else
#line 74 "prog_util.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1914 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                  else
#line 74 "prog_util.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1920 "parse_tree.prog_util.c"
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
#line 1944 "parse_tree.prog_util.c"
                          *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                        else
#line 74 "prog_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1950 "parse_tree.prog_util.c"
                            *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                          else
#line 1954 "parse_tree.prog_util.c"
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
#line 1969 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                  else
#line 74 "prog_util.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1975 "parse_tree.prog_util.c"
                      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                    else
#line 74 "prog_util.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1981 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                      else
#line 74 "prog_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1987 "parse_tree.prog_util.c"
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
#line 2011 "parse_tree.prog_util.c"
                              *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                            else
#line 2015 "parse_tree.prog_util.c"
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
#line 2032 "parse_tree.prog_util.c"
                      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                    else
#line 74 "prog_util.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2038 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                      else
#line 74 "prog_util.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2044 "parse_tree.prog_util.c"
                          *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                        else
#line 74 "prog_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2050 "parse_tree.prog_util.c"
                            *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                          else
#line 74 "prog_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2056 "parse_tree.prog_util.c"
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
#line 2076 "parse_tree.prog_util.c"
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
#line 2101 "parse_tree.prog_util.c"
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
#line 2114 "parse_tree.prog_util.c"
                      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                    else
#line 74 "prog_util.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2120 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                      else
#line 74 "prog_util.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2126 "parse_tree.prog_util.c"
                          *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                        else
#line 74 "prog_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2132 "parse_tree.prog_util.c"
                            *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                          else
#line 74 "prog_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2138 "parse_tree.prog_util.c"
                              *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                            else
#line 74 "prog_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2144 "parse_tree.prog_util.c"
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
#line 2233 "parse_tree.prog_util.c"
                parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_3_3 == parse_tree__prog_util__V_5_5);
#line 74 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 2237 "parse_tree.prog_util.c"
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
#line 2272 "parse_tree.prog_util.c"
                  parse_tree__prog_util__TypeInfo_27_27 = (MR_Word) &parse_tree__prog_util_scalar_common_1[5];
#line 2274 "parse_tree.prog_util.c"
                  {
#line 2276 "parse_tree.prog_util.c"
                    parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_27_27, ((MR_Box) (parse_tree__prog_util__V_7_7)), ((MR_Box) (parse_tree__prog_util__V_9_9)));
                  }
#line 74 "prog_util.m"
                  if (parse_tree__prog_util__succeeded)
#line 74 "prog_util.m"
                    {
#line 2283 "parse_tree.prog_util.c"
                      parse_tree__prog_util__TypeInfo_28_28 = (MR_Word) &parse_tree__prog_util_scalar_common_1[6];
#line 2285 "parse_tree.prog_util.c"
                      {
#line 2287 "parse_tree.prog_util.c"
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
#line 2315 "parse_tree.prog_util.c"
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
#line 2342 "parse_tree.prog_util.c"
                      parse_tree__prog_util__TypeInfo_25_25 = (MR_Word) &parse_tree__prog_util_scalar_common_1[4];
#line 2344 "parse_tree.prog_util.c"
                      {
#line 2346 "parse_tree.prog_util.c"
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
#line 2380 "parse_tree.prog_util.c"
                        parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_17_17 == parse_tree__prog_util__V_19_19);
#line 74 "prog_util.m"
                        if (parse_tree__prog_util__succeeded)
#line 74 "prog_util.m"
                          {
#line 2386 "parse_tree.prog_util.c"
                            parse_tree__prog_util__TypeInfo_26_26 = (MR_Word) &parse_tree__prog_util_scalar_common_1[4];
#line 2388 "parse_tree.prog_util.c"
                            {
#line 2390 "parse_tree.prog_util.c"
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
#line 2418 "parse_tree.prog_util.c"
                        parse_tree__prog_util__TypeInfo_29_29 = (MR_Word) &parse_tree__prog_util_scalar_common_1[4];
#line 2420 "parse_tree.prog_util.c"
                        {
#line 2422 "parse_tree.prog_util.c"
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

#line 784 "prog_util.m"
static MR_Word MR_CALL 
parse_tree__prog_util__goal_list_to_conj_2_3_f_0(
#line 784 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_1,
#line 784 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 784 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3)
#line 784 "prog_util.m"
{
#line 786 "prog_util.m"
  {
#line 786 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 786 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__4_4;

#line 786 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 786 "prog_util.m"
      parse_tree__prog_util__HeadVar__4_4 = parse_tree__prog_util__HeadVar__2_2;
#line 786 "prog_util.m"
    else
#line 787 "prog_util.m"
      {
#line 787 "prog_util.m"
        MR_Word parse_tree__prog_util__Goal1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)));
#line 787 "prog_util.m"
        MR_Word parse_tree__prog_util__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
#line 787 "prog_util.m"
        MR_Word parse_tree__prog_util__V_11_11;

#line 788 "prog_util.m"
        {
#line 788 "prog_util.m"
          parse_tree__prog_util__V_11_11 = parse_tree__prog_util__goal_list_to_conj_2_3_f_0(parse_tree__prog_util__Context_1, parse_tree__prog_util__Goal1_9, parse_tree__prog_util__Goals_10);
        }
#line 788 "prog_util.m"
        {
#line 788 "prog_util.m"
          parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 788 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_util__Context_1));
#line 788 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 1) = ((MR_Box) (parse_tree__prog_util__HeadVar__2_2));
#line 788 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 2) = ((MR_Box) (parse_tree__prog_util__V_11_11));
#line 788 "prog_util.m"
        }
#line 787 "prog_util.m"
      }
#line 786 "prog_util.m"
    return parse_tree__prog_util__HeadVar__4_4;
#line 786 "prog_util.m"
  }
#line 784 "prog_util.m"
}

#line 677 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__make_n_fresh_vars_2_6_p_0(
#line 677 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_23,
#line 677 "prog_util.m"
  MR_String parse_tree__prog_util__BaseName_7,
#line 677 "prog_util.m"
  MR_Integer parse_tree__prog_util__N_8,
#line 677 "prog_util.m"
  MR_Integer parse_tree__prog_util__Max_9,
#line 677 "prog_util.m"
  MR_Word * parse_tree__prog_util__Vars_10,
#line 677 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_0_17,
#line 677 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_VarSet_18)
#line 677 "prog_util.m"
{
#line 683 "prog_util.m"
  {
#line 683 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded = (parse_tree__prog_util__N_8 == parse_tree__prog_util__Max_9);

#line 683 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 682 "prog_util.m"
      {
#line 682 "prog_util.m"
        *parse_tree__prog_util__Vars_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 682 "prog_util.m"
        *parse_tree__prog_util__STATE_VARIABLE_VarSet_18 = parse_tree__prog_util__STATE_VARIABLE_VarSet_0_17;
#line 682 "prog_util.m"
      }
#line 683 "prog_util.m"
    else
#line 684 "prog_util.m"
      {
#line 684 "prog_util.m"
        MR_Integer parse_tree__prog_util__N1_12 = (parse_tree__prog_util__N_8 + (MR_Integer) 1);
#line 684 "prog_util.m"
        MR_Word parse_tree__prog_util__Var_13;
#line 684 "prog_util.m"
        MR_String parse_tree__prog_util__Num_14;
#line 684 "prog_util.m"
        MR_String parse_tree__prog_util__VarName_15;
#line 684 "prog_util.m"
        MR_Word parse_tree__prog_util__Vars1_16;
#line 684 "prog_util.m"
        MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_20_20;
#line 684 "prog_util.m"
        MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_21_21;

#line 685 "prog_util.m"
        {
#line 685 "prog_util.m"
          mercury__varset__new_var_3_p_0(parse_tree__prog_util__TypeInfo_for_T_23, &parse_tree__prog_util__Var_13, parse_tree__prog_util__STATE_VARIABLE_VarSet_0_17, &parse_tree__prog_util__STATE_VARIABLE_VarSet_20_20);
        }
#line 686 "prog_util.m"
        {
#line 686 "prog_util.m"
          mercury__string__int_to_string_2_p_0(parse_tree__prog_util__N1_12, &parse_tree__prog_util__Num_14);
        }
#line 687 "prog_util.m"
        {
#line 687 "prog_util.m"
          mercury__string__append_3_p_2(parse_tree__prog_util__BaseName_7, parse_tree__prog_util__Num_14, &parse_tree__prog_util__VarName_15);
        }
#line 688 "prog_util.m"
        {
#line 688 "prog_util.m"
          mercury__varset__name_var_4_p_0(parse_tree__prog_util__TypeInfo_for_T_23, parse_tree__prog_util__Var_13, parse_tree__prog_util__VarName_15, parse_tree__prog_util__STATE_VARIABLE_VarSet_20_20, &parse_tree__prog_util__STATE_VARIABLE_VarSet_21_21);
        }
#line 690 "prog_util.m"
        {
#line 690 "prog_util.m"
          parse_tree__prog_util__make_n_fresh_vars_2_6_p_0(parse_tree__prog_util__TypeInfo_for_T_23, parse_tree__prog_util__BaseName_7, parse_tree__prog_util__N1_12, parse_tree__prog_util__Max_9, &parse_tree__prog_util__Vars1_16, parse_tree__prog_util__STATE_VARIABLE_VarSet_21_21, parse_tree__prog_util__STATE_VARIABLE_VarSet_18);
        }
#line 689 "prog_util.m"
        {
#line 689 "prog_util.m"
          MR_Word base;
#line 689 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "prog_util.m"
          *parse_tree__prog_util__Vars_10 = base;
#line 689 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Var_13));
#line 689 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars1_16));
#line 689 "prog_util.m"
        }
#line 684 "prog_util.m"
      }
#line 683 "prog_util.m"
  }
#line 677 "prog_util.m"
}

#line 512 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_catch_expr_4_p_0(
#line 512 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 512 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 512 "prog_util.m"
  MR_Word parse_tree__prog_util__Catch0_7,
#line 512 "prog_util.m"
  MR_Word * parse_tree__prog_util__Catch_8)
#line 512 "prog_util.m"
{
#line 515 "prog_util.m"
  {
#line 515 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 515 "prog_util.m"
    MR_Word parse_tree__prog_util__Term0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Catch0_7, (MR_Integer) 0)));
#line 515 "prog_util.m"
    MR_Word parse_tree__prog_util__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Catch0_7, (MR_Integer) 1)));
#line 515 "prog_util.m"
    MR_Word parse_tree__prog_util__Term_11;
#line 515 "prog_util.m"
    MR_Word parse_tree__prog_util__Goal_12;
#line 515 "prog_util.m"
    MR_Word parse_tree__prog_util__V_13_13;
#line 515 "prog_util.m"
    MR_Word parse_tree__prog_util__V_14_14;

#line 517 "prog_util.m"
    {
#line 517 "prog_util.m"
      parse_tree__prog_util__V_14_14 = mercury__term__context_init_0_f_0();
    }
#line 517 "prog_util.m"
    {
#line 517 "prog_util.m"
      parse_tree__prog_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 517 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_13_13, 0) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 517 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_util__V_14_14));
#line 517 "prog_util.m"
    }
#line 517 "prog_util.m"
    {
#line 517 "prog_util.m"
      mercury__term__substitute_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_util__Term0_9, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__V_13_13, &parse_tree__prog_util__Term_11);
    }
#line 518 "prog_util.m"
    {
#line 518 "prog_util.m"
      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_10, &parse_tree__prog_util__Goal_12);
    }
#line 519 "prog_util.m"
    {
#line 519 "prog_util.m"
      MR_Word base;
#line 519 "prog_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 519 "prog_util.m"
      *parse_tree__prog_util__Catch_8 = base;
#line 519 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__Term_11));
#line 519 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__Goal_12));
#line 519 "prog_util.m"
    }
#line 515 "prog_util.m"
  }
#line 512 "prog_util.m"
}

#line 499 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_maybe_var_4_p_0(
#line 499 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 499 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 499 "prog_util.m"
  MR_Word parse_tree__prog_util__MaybeVar0_7,
#line 499 "prog_util.m"
  MR_Word * parse_tree__prog_util__MaybeVar_8)
#line 499 "prog_util.m"
{
#line 504 "prog_util.m"
  {
#line 504 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 504 "prog_util.m"
    if ((parse_tree__prog_util__MaybeVar0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 509 "prog_util.m"
      *parse_tree__prog_util__MaybeVar_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 504 "prog_util.m"
    else
#line 504 "prog_util.m"
      {
#line 504 "prog_util.m"
        MR_Word parse_tree__prog_util__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeVar0_7, (MR_Integer) 0)));
#line 504 "prog_util.m"
        MR_Word parse_tree__prog_util__Var_10;

#line 493 "prog_util.m"
        {
#line 493 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__Var0_9)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
#line 495 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 494 "prog_util.m"
          parse_tree__prog_util__Var_10 = parse_tree__prog_util__NewVar_6;
#line 495 "prog_util.m"
        else
#line 496 "prog_util.m"
          parse_tree__prog_util__Var_10 = parse_tree__prog_util__Var0_9;
#line 506 "prog_util.m"
        {
#line 506 "prog_util.m"
          MR_Word base;
#line 506 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 506 "prog_util.m"
          *parse_tree__prog_util__MaybeVar_8 = base;
#line 506 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Var_10));
#line 506 "prog_util.m"
        }
#line 504 "prog_util.m"
      }
#line 504 "prog_util.m"
  }
#line 499 "prog_util.m"
}

#line 489 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_var_4_p_0(
#line 489 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 489 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 489 "prog_util.m"
  MR_Word parse_tree__prog_util__Var0_7,
#line 489 "prog_util.m"
  MR_Word * parse_tree__prog_util__Var_8)
#line 489 "prog_util.m"
{
#line 495 "prog_util.m"
  {
#line 495 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 493 "prog_util.m"
    {
#line 493 "prog_util.m"
      parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__Var0_7)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
    }
#line 495 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 494 "prog_util.m"
      *parse_tree__prog_util__Var_8 = parse_tree__prog_util__NewVar_6;
#line 495 "prog_util.m"
    else
#line 496 "prog_util.m"
      *parse_tree__prog_util__Var_8 = parse_tree__prog_util__Var0_7;
#line 495 "prog_util.m"
  }
#line 489 "prog_util.m"
}

#line 481 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_vars_4_p_0(
#line 481 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_1,
#line 481 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_2,
#line 481 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3,
#line 481 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__4_4)
#line 481 "prog_util.m"
{
#line 484 "prog_util.m"
  {
#line 484 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 484 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "prog_util.m"
      *parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 484 "prog_util.m"
    else
#line 485 "prog_util.m"
      {
#line 485 "prog_util.m"
        MR_Word parse_tree__prog_util__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)));
#line 485 "prog_util.m"
        MR_Word parse_tree__prog_util__Vars0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
#line 485 "prog_util.m"
        MR_Word parse_tree__prog_util__Var_11;
#line 485 "prog_util.m"
        MR_Word parse_tree__prog_util__Vars_12;

#line 493 "prog_util.m"
        {
#line 493 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__Var0_9)), ((MR_Box) (parse_tree__prog_util__OldVar_1)));
        }
#line 495 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 494 "prog_util.m"
          parse_tree__prog_util__Var_11 = parse_tree__prog_util__NewVar_2;
#line 495 "prog_util.m"
        else
#line 496 "prog_util.m"
          parse_tree__prog_util__Var_11 = parse_tree__prog_util__Var0_9;
#line 487 "prog_util.m"
        {
#line 487 "prog_util.m"
          parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_1, parse_tree__prog_util__NewVar_2, parse_tree__prog_util__Vars0_10, &parse_tree__prog_util__Vars_12);
        }
#line 485 "prog_util.m"
        {
#line 485 "prog_util.m"
          MR_Word base;
#line 485 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "prog_util.m"
          *parse_tree__prog_util__HeadVar__4_4 = base;
#line 485 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Var_11));
#line 485 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars_12));
#line 485 "prog_util.m"
        }
#line 485 "prog_util.m"
      }
#line 484 "prog_util.m"
  }
#line 481 "prog_util.m"
}

#line 473 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(
#line 473 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 473 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 473 "prog_util.m"
  MR_Word parse_tree__prog_util__TMV0_7,
#line 473 "prog_util.m"
  MR_Word * parse_tree__prog_util__TMV_8)
#line 473 "prog_util.m"
{
#line 476 "prog_util.m"
  {
#line 476 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 476 "prog_util.m"
    MR_String parse_tree__prog_util__MutableName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__TMV0_7, (MR_Integer) 0)));
#line 476 "prog_util.m"
    MR_Word parse_tree__prog_util__StateVar0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__TMV0_7, (MR_Integer) 1)));
#line 476 "prog_util.m"
    MR_Word parse_tree__prog_util__StateVar_11;

#line 493 "prog_util.m"
    {
#line 493 "prog_util.m"
      parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__StateVar0_10)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
    }
#line 495 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 494 "prog_util.m"
      parse_tree__prog_util__StateVar_11 = parse_tree__prog_util__NewVar_6;
#line 495 "prog_util.m"
    else
#line 496 "prog_util.m"
      parse_tree__prog_util__StateVar_11 = parse_tree__prog_util__StateVar0_10;
#line 479 "prog_util.m"
    {
#line 479 "prog_util.m"
      MR_Word base;
#line 479 "prog_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 479 "prog_util.m"
      *parse_tree__prog_util__TMV_8 = base;
#line 479 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__MutableName_9));
#line 479 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__StateVar_11));
#line 479 "prog_util.m"
    }
#line 476 "prog_util.m"
  }
#line 473 "prog_util.m"
}

#line 458 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(
#line 458 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 458 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 458 "prog_util.m"
  MR_Word parse_tree__prog_util__Comp0_7,
#line 458 "prog_util.m"
  MR_Word * parse_tree__prog_util__Comp_8)
#line 458 "prog_util.m"
{
#line 463 "prog_util.m"
  {
#line 463 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 463 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__Comp0_7)) == (MR_mktag((MR_Integer) 0))))
#line 463 "prog_util.m"
      {
#line 463 "prog_util.m"
        MR_Word parse_tree__prog_util__SVar0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Comp0_7, (MR_Integer) 0)));
#line 463 "prog_util.m"
        MR_Word parse_tree__prog_util__SVar_10;

#line 493 "prog_util.m"
        {
#line 493 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__SVar0_9)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
#line 495 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 494 "prog_util.m"
          parse_tree__prog_util__SVar_10 = parse_tree__prog_util__NewVar_6;
#line 495 "prog_util.m"
        else
#line 496 "prog_util.m"
          parse_tree__prog_util__SVar_10 = parse_tree__prog_util__SVar0_9;
#line 465 "prog_util.m"
        {
#line 465 "prog_util.m"
          MR_Word base;
#line 465 "prog_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 465 "prog_util.m"
          *parse_tree__prog_util__Comp_8 = base;
#line 465 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__SVar_10));
#line 465 "prog_util.m"
        }
#line 463 "prog_util.m"
      }
#line 463 "prog_util.m"
    else
#line 467 "prog_util.m"
      {
#line 467 "prog_util.m"
        MR_Word parse_tree__prog_util__IVar0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Comp0_7, (MR_Integer) 0)));
#line 467 "prog_util.m"
        MR_Word parse_tree__prog_util__OVar0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Comp0_7, (MR_Integer) 1)));
#line 467 "prog_util.m"
        MR_Word parse_tree__prog_util__IVar_13;
#line 467 "prog_util.m"
        MR_Word parse_tree__prog_util__OVar_14;

#line 493 "prog_util.m"
        {
#line 493 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__IVar0_11)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
#line 495 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 494 "prog_util.m"
          parse_tree__prog_util__IVar_13 = parse_tree__prog_util__NewVar_6;
#line 495 "prog_util.m"
        else
#line 496 "prog_util.m"
          parse_tree__prog_util__IVar_13 = parse_tree__prog_util__IVar0_11;
#line 493 "prog_util.m"
        {
#line 493 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__OVar0_12)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
#line 495 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 494 "prog_util.m"
          parse_tree__prog_util__OVar_14 = parse_tree__prog_util__NewVar_6;
#line 495 "prog_util.m"
        else
#line 496 "prog_util.m"
          parse_tree__prog_util__OVar_14 = parse_tree__prog_util__OVar0_12;
#line 470 "prog_util.m"
        {
#line 470 "prog_util.m"
          MR_Word base;
#line 470 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "prog_util.m"
          *parse_tree__prog_util__Comp_8 = base;
#line 470 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__IVar_13));
#line 470 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__OVar_14));
#line 470 "prog_util.m"
        }
#line 467 "prog_util.m"
      }
#line 463 "prog_util.m"
  }
#line 458 "prog_util.m"
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
#line 780 "prog_util.m"
  {
#line 780 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 780 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__3_3;

#line 780 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 780 "prog_util.m"
      {
#line 780 "prog_util.m"
        parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 780 "prog_util.m"
        MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_util__Context_1));
#line 780 "prog_util.m"
      }
#line 780 "prog_util.m"
    else
#line 781 "prog_util.m"
      {
#line 781 "prog_util.m"
        MR_Word parse_tree__prog_util__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
#line 781 "prog_util.m"
        MR_Word parse_tree__prog_util__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));

#line 782 "prog_util.m"
        {
#line 782 "prog_util.m"
          return parse_tree__prog_util__HeadVar__3_3 = parse_tree__prog_util__goal_list_to_conj_2_3_f_0(parse_tree__prog_util__Context_1, parse_tree__prog_util__Goal_6, parse_tree__prog_util__Goals_7);
        }
#line 781 "prog_util.m"
      }
#line 780 "prog_util.m"
    return parse_tree__prog_util__HeadVar__3_3;
#line 780 "prog_util.m"
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
#line 751 "prog_util.m"
  {
#line 751 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 751 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__4_4;

#line 751 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 754 "prog_util.m"
      {
#line 754 "prog_util.m"
        MR_Word parse_tree__prog_util__ModuleNames_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 754 "prog_util.m"
        MR_String parse_tree__prog_util__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 754 "prog_util.m"
        MR_Word parse_tree__prog_util__V_13_13;
#line 754 "prog_util.m"
        MR_Word parse_tree__prog_util__V_14_14;

#line 756 "prog_util.m"
        {
#line 756 "prog_util.m"
          parse_tree__prog_util__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 756 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_14_14, 0) = ((MR_Box) (parse_tree__prog_util__Name_10));
#line 756 "prog_util.m"
        }
#line 756 "prog_util.m"
        {
#line 756 "prog_util.m"
          parse_tree__prog_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 756 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 0) = ((MR_Box) (parse_tree__prog_util__V_14_14));
#line 756 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_util__Xs_2));
#line 756 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 756 "prog_util.m"
        }
#line 755 "prog_util.m"
        {
#line 755 "prog_util.m"
          return parse_tree__prog_util__HeadVar__4_4 = parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(parse_tree__prog_util__ModuleNames_9, parse_tree__prog_util__V_13_13, parse_tree__prog_util__Context_3);
        }
#line 754 "prog_util.m"
      }
#line 751 "prog_util.m"
    else
#line 751 "prog_util.m"
      {
#line 751 "prog_util.m"
        MR_String parse_tree__prog_util__Name_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 751 "prog_util.m"
        MR_Word parse_tree__prog_util__V_8_8;

#line 752 "prog_util.m"
        {
#line 752 "prog_util.m"
          parse_tree__prog_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 752 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_8_8, 0) = ((MR_Box) (parse_tree__prog_util__Name_5));
#line 752 "prog_util.m"
        }
#line 752 "prog_util.m"
        {
#line 752 "prog_util.m"
          parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 752 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_util__V_8_8));
#line 752 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 1) = ((MR_Box) (parse_tree__prog_util__Xs_2));
#line 752 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 752 "prog_util.m"
        }
#line 751 "prog_util.m"
      }
#line 751 "prog_util.m"
    return parse_tree__prog_util__HeadVar__4_4;
#line 751 "prog_util.m"
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
#line 728 "prog_util.m"
  while (MR_TRUE)
#line 728 "prog_util.m"
    {
#line 728 "prog_util.m"
      /* tailcall optimized into a loop */
#line 728 "prog_util.m"
      {
#line 728 "prog_util.m"
        MR_bool parse_tree__prog_util__succeeded;

#line 728 "prog_util.m"
        if ((parse_tree__prog_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 728 "prog_util.m"
          {
#line 728 "prog_util.m"
            *parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_8 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7;
#line 728 "prog_util.m"
            *parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_6 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
#line 728 "prog_util.m"
            *parse_tree__prog_util__STATE_VARIABLE_TVarSet_4 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3;
#line 728 "prog_util.m"
          }
#line 728 "prog_util.m"
        else
#line 729 "prog_util.m"
          {
#line 729 "prog_util.m"
            MR_Word parse_tree__prog_util__TVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 729 "prog_util.m"
            MR_Word parse_tree__prog_util__TVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 729 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34;
#line 729 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36;
#line 729 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37;
#line 730 "prog_util.m"
            MR_Word parse_tree__prog_util__TypeInfo_45_45 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];

#line 730 "prog_util.m"
            {
#line 730 "prog_util.m"
              parse_tree__prog_util__succeeded = mercury__map__contains_2_p_0(parse_tree__prog_util__TypeInfo_45_45, parse_tree__prog_util__TypeInfo_45_45, parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, ((MR_Box) (parse_tree__prog_util__TVar_19)));
            }
#line 732 "prog_util.m"
            if (parse_tree__prog_util__succeeded)
#line 731 "prog_util.m"
              {
#line 731 "prog_util.m"
                parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7;
#line 731 "prog_util.m"
                parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
#line 731 "prog_util.m"
                parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3;
#line 731 "prog_util.m"
              }
#line 732 "prog_util.m"
            else
#line 742 "prog_util.m"
              {
#line 742 "prog_util.m"
                MR_String parse_tree__prog_util__TVarName_25;

#line 733 "prog_util.m"
                {
#line 733 "prog_util.m"
                  parse_tree__prog_util__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_util__VarSet_2, parse_tree__prog_util__TVar_19, &parse_tree__prog_util__TVarName_25);
                }
#line 742 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 736 "prog_util.m"
                  {
#line 736 "prog_util.m"
                    MR_Word parse_tree__prog_util__TVarSetVar_26;
#line 734 "prog_util.m"
                    MR_Box parse_tree__prog_util__conv0_TVarSetVar_26;

#line 734 "prog_util.m"
                    {
#line 734 "prog_util.m"
                      parse_tree__prog_util__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_util_scalar_common_1[0], parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5, ((MR_Box) (parse_tree__prog_util__TVarName_25)), &parse_tree__prog_util__conv0_TVarSetVar_26);
                    }
#line 734 "prog_util.m"
                    if (parse_tree__prog_util__succeeded)
#line 734 "prog_util.m"
                      {
#line 734 "prog_util.m"
                        parse_tree__prog_util__TVarSetVar_26 = ((MR_Word) parse_tree__prog_util__conv0_TVarSetVar_26);
#line 734 "prog_util.m"
                        parse_tree__prog_util__succeeded = MR_TRUE;
#line 734 "prog_util.m"
                      }
#line 736 "prog_util.m"
                    if (parse_tree__prog_util__succeeded)
#line 735 "prog_util.m"
                      {
#line 735 "prog_util.m"
                        MR_Word parse_tree__prog_util__TypeInfo_49_49 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];

#line 735 "prog_util.m"
                        {
#line 735 "prog_util.m"
                          mercury__map__det_insert_4_p_0(parse_tree__prog_util__TypeInfo_49_49, parse_tree__prog_util__TypeInfo_49_49, ((MR_Box) (parse_tree__prog_util__TVar_19)), ((MR_Box) (parse_tree__prog_util__TVarSetVar_26)), parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, &parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34);
                        }
#line 735 "prog_util.m"
                        parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
#line 735 "prog_util.m"
                        parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3;
#line 735 "prog_util.m"
                      }
#line 736 "prog_util.m"
                    else
#line 737 "prog_util.m"
                      {
#line 737 "prog_util.m"
                        MR_Word parse_tree__prog_util__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 737 "prog_util.m"
                        MR_Word parse_tree__prog_util__TypeInfo_52_52;
#line 737 "prog_util.m"
                        MR_Word parse_tree__prog_util__NewTVar_27;
#line 737 "prog_util.m"
                        MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarSet_35_35;

#line 737 "prog_util.m"
                        {
#line 737 "prog_util.m"
                          mercury__varset__new_var_3_p_0(parse_tree__prog_util__TypeCtorInfo_50_50, &parse_tree__prog_util__NewTVar_27, parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3, &parse_tree__prog_util__STATE_VARIABLE_TVarSet_35_35);
                        }
#line 738 "prog_util.m"
                        {
#line 738 "prog_util.m"
                          mercury__varset__name_var_4_p_0(parse_tree__prog_util__TypeCtorInfo_50_50, parse_tree__prog_util__NewTVar_27, parse_tree__prog_util__TVarName_25, parse_tree__prog_util__STATE_VARIABLE_TVarSet_35_35, &parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36);
                        }
#line 3490 "parse_tree.prog_util.c"
                        parse_tree__prog_util__TypeInfo_52_52 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];
#line 739 "prog_util.m"
                        {
#line 739 "prog_util.m"
                          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_util__TypeInfo_52_52, ((MR_Box) (parse_tree__prog_util__TVarName_25)), ((MR_Box) (parse_tree__prog_util__NewTVar_27)), parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5, &parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37);
                        }
#line 740 "prog_util.m"
                        {
#line 740 "prog_util.m"
                          mercury__map__det_insert_4_p_0(parse_tree__prog_util__TypeInfo_52_52, parse_tree__prog_util__TypeInfo_52_52, ((MR_Box) (parse_tree__prog_util__TVar_19)), ((MR_Box) (parse_tree__prog_util__NewTVar_27)), parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, &parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34);
                        }
#line 737 "prog_util.m"
                      }
#line 736 "prog_util.m"
                  }
#line 742 "prog_util.m"
                else
#line 743 "prog_util.m"
                  {
#line 743 "prog_util.m"
                    MR_Word parse_tree__prog_util__TypeInfo_54_54;
#line 743 "prog_util.m"
                    MR_Word parse_tree__prog_util__NewTVar_44;

#line 743 "prog_util.m"
                    {
#line 743 "prog_util.m"
                      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &parse_tree__prog_util__NewTVar_44, parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3, &parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36);
                    }
#line 3520 "parse_tree.prog_util.c"
                    parse_tree__prog_util__TypeInfo_54_54 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];
#line 744 "prog_util.m"
                    {
#line 744 "prog_util.m"
                      mercury__map__det_insert_4_p_0(parse_tree__prog_util__TypeInfo_54_54, parse_tree__prog_util__TypeInfo_54_54, ((MR_Box) (parse_tree__prog_util__TVar_19)), ((MR_Box) (parse_tree__prog_util__NewTVar_44)), parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, &parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34);
                    }
#line 743 "prog_util.m"
                    parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
#line 743 "prog_util.m"
                  }
#line 742 "prog_util.m"
              }
#line 747 "prog_util.m"
            /* direct tailcall eliminated */
#line 747 "prog_util.m"
            {
#line 747 "prog_util.m"
              MR_Word parse_tree__prog_util__HeadVar__1__tmp_copy_1 = parse_tree__prog_util__TVars_20;
#line 747 "prog_util.m"
              MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarSet_0__tmp_copy_3 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36;
#line 747 "prog_util.m"
              MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0__tmp_copy_5 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37;
#line 747 "prog_util.m"
              MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0__tmp_copy_7 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34;

#line 747 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0__tmp_copy_7;
#line 747 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0__tmp_copy_5;
#line 747 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0__tmp_copy_3;
#line 747 "prog_util.m"
              parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__HeadVar__1__tmp_copy_1;
#line 747 "prog_util.m"
            }
#line 747 "prog_util.m"
            continue;
#line 729 "prog_util.m"
          }
#line 728 "prog_util.m"
      }
#line 728 "prog_util.m"
      break;
#line 728 "prog_util.m"
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
#line 723 "prog_util.m"
  {
#line 723 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__RuleTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 723 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadTerm0_9;
#line 723 "prog_util.m"
    MR_Word parse_tree__prog_util__GoalTerm0_10;
#line 720 "prog_util.m"
    MR_Word parse_tree__prog_util__V_12_12;
#line 720 "prog_util.m"
    MR_String parse_tree__prog_util__V_13_13;
#line 720 "prog_util.m"
    MR_Word parse_tree__prog_util__V_14_14;
#line 720 "prog_util.m"
    MR_Word parse_tree__prog_util__V_15_15;
#line 720 "prog_util.m"
    MR_Word parse_tree__prog_util__V_16_16;
#line 720 "prog_util.m"
    MR_Word parse_tree__prog_util__V_11_11;

#line 720 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 720 "prog_util.m"
      {
#line 720 "prog_util.m"
        parse_tree__prog_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__RuleTerm_6, (MR_Integer) 0)));
#line 720 "prog_util.m"
        parse_tree__prog_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__RuleTerm_6, (MR_Integer) 1)));
#line 720 "prog_util.m"
        parse_tree__prog_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__RuleTerm_6, (MR_Integer) 2)));
#line 720 "prog_util.m"
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_12_12)) == (MR_mktag((MR_Integer) 0)));
#line 720 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 720 "prog_util.m"
          {
#line 720 "prog_util.m"
            parse_tree__prog_util__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_12_12, (MR_Integer) 0)));
#line 720 "prog_util.m"
            parse_tree__prog_util__succeeded = (strcmp(parse_tree__prog_util__V_13_13, (MR_String) ":-") == 0);
#line 720 "prog_util.m"
            if (parse_tree__prog_util__succeeded)
#line 720 "prog_util.m"
              {
#line 720 "prog_util.m"
                parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 720 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 720 "prog_util.m"
                  {
#line 720 "prog_util.m"
                    parse_tree__prog_util__HeadTerm0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_14_14, (MR_Integer) 0)));
#line 720 "prog_util.m"
                    parse_tree__prog_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_14_14, (MR_Integer) 1)));
#line 720 "prog_util.m"
                    parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 720 "prog_util.m"
                    if (parse_tree__prog_util__succeeded)
#line 720 "prog_util.m"
                      {
#line 720 "prog_util.m"
                        parse_tree__prog_util__GoalTerm0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_15_15, (MR_Integer) 0)));
#line 720 "prog_util.m"
                        parse_tree__prog_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_15_15, (MR_Integer) 1)));
#line 720 "prog_util.m"
                        parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 720 "prog_util.m"
                      }
#line 720 "prog_util.m"
                  }
#line 720 "prog_util.m"
              }
#line 720 "prog_util.m"
          }
#line 720 "prog_util.m"
      }
#line 723 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 721 "prog_util.m"
      {
#line 721 "prog_util.m"
        *parse_tree__prog_util__HeadTerm_7 = parse_tree__prog_util__HeadTerm0_9;
#line 722 "prog_util.m"
        *parse_tree__prog_util__GoalTerm_8 = parse_tree__prog_util__GoalTerm0_10;
#line 721 "prog_util.m"
      }
#line 723 "prog_util.m"
    else
#line 724 "prog_util.m"
      {
#line 724 "prog_util.m"
        *parse_tree__prog_util__HeadTerm_7 = parse_tree__prog_util__RuleTerm_6;
#line 725 "prog_util.m"
        {
#line 725 "prog_util.m"
          MR_Word base;
#line 725 "prog_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 725 "prog_util.m"
          *parse_tree__prog_util__GoalTerm_8 = base;
#line 725 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[4]));
#line 725 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 725 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_5));
#line 725 "prog_util.m"
        }
#line 724 "prog_util.m"
      }
#line 723 "prog_util.m"
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
#line 713 "prog_util.m"
  {
#line 713 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 713 "prog_util.m"
    MR_Word parse_tree__prog_util__Args1_9;
#line 713 "prog_util.m"
    MR_Box parse_tree__prog_util__State0A_10;
#line 713 "prog_util.m"
    MR_Box parse_tree__prog_util__StateA_11;
#line 703 "prog_util.m"
    MR_Word parse_tree__prog_util__RevArgs0_19;
#line 703 "prog_util.m"
    MR_Word parse_tree__prog_util__RevArgs_20;
#line 703 "prog_util.m"
    MR_Word parse_tree__prog_util__V_21_21;

#line 704 "prog_util.m"
    {
#line 704 "prog_util.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_14, parse_tree__prog_util__Args0_5, &parse_tree__prog_util__RevArgs0_19);
    }
#line 705 "prog_util.m"
    parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__RevArgs0_19)) == (MR_mktag((MR_Integer) 1)));
#line 705 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 705 "prog_util.m"
      {
#line 705 "prog_util.m"
        parse_tree__prog_util__StateA_11 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_19, (MR_Integer) 0));
#line 705 "prog_util.m"
        parse_tree__prog_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_19, (MR_Integer) 1)));
#line 705 "prog_util.m"
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 705 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 705 "prog_util.m"
          {
#line 705 "prog_util.m"
            parse_tree__prog_util__State0A_10 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_21_21, (MR_Integer) 0));
#line 705 "prog_util.m"
            parse_tree__prog_util__RevArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_21_21, (MR_Integer) 1)));
#line 706 "prog_util.m"
            {
#line 706 "prog_util.m"
              mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_14, parse_tree__prog_util__RevArgs_20, &parse_tree__prog_util__Args1_9);
            }
#line 706 "prog_util.m"
            parse_tree__prog_util__succeeded = MR_TRUE;
#line 705 "prog_util.m"
          }
#line 705 "prog_util.m"
      }
#line 713 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 710 "prog_util.m"
      {
#line 710 "prog_util.m"
        *parse_tree__prog_util__Args_6 = parse_tree__prog_util__Args1_9;
#line 711 "prog_util.m"
        *parse_tree__prog_util__State0_7 = parse_tree__prog_util__State0A_10;
#line 712 "prog_util.m"
        *parse_tree__prog_util__State_8 = parse_tree__prog_util__StateA_11;
#line 710 "prog_util.m"
      }
#line 713 "prog_util.m"
    else
#line 714 "prog_util.m"
      {
#line 714 "prog_util.m"
        {
#line 714 "prog_util.m"
          mercury__require__unexpected_2_p_0((MR_String) "parse_tree.prog_util", (MR_String) "predicate \140parse_tree.prog_util.get_state_args_det\'/4");
#line 714 "prog_util.m"
          return;
        }
#line 714 "prog_util.m"
      }
#line 713 "prog_util.m"
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
#line 703 "prog_util.m"
  {
#line 703 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 703 "prog_util.m"
    MR_Word parse_tree__prog_util__RevArgs0_9;
#line 703 "prog_util.m"
    MR_Word parse_tree__prog_util__RevArgs_10;
#line 703 "prog_util.m"
    MR_Word parse_tree__prog_util__V_11_11;

#line 704 "prog_util.m"
    {
#line 704 "prog_util.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_12, parse_tree__prog_util__Args0_5, &parse_tree__prog_util__RevArgs0_9);
    }
#line 705 "prog_util.m"
    parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__RevArgs0_9)) == (MR_mktag((MR_Integer) 1)));
#line 705 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 705 "prog_util.m"
      {
#line 705 "prog_util.m"
        *parse_tree__prog_util__State_8 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_9, (MR_Integer) 0));
#line 705 "prog_util.m"
        parse_tree__prog_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_9, (MR_Integer) 1)));
#line 705 "prog_util.m"
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 705 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 705 "prog_util.m"
          {
#line 705 "prog_util.m"
            *parse_tree__prog_util__State0_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, (MR_Integer) 0));
#line 705 "prog_util.m"
            parse_tree__prog_util__RevArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, (MR_Integer) 1)));
#line 706 "prog_util.m"
            {
#line 706 "prog_util.m"
              mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_12, parse_tree__prog_util__RevArgs_10, parse_tree__prog_util__Args_6);
            }
#line 706 "prog_util.m"
            parse_tree__prog_util__succeeded = MR_TRUE;
#line 705 "prog_util.m"
          }
#line 705 "prog_util.m"
      }
#line 703 "prog_util.m"
    return parse_tree__prog_util__succeeded;
#line 703 "prog_util.m"
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
#line 693 "prog_util.m"
  {
#line 693 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 693 "prog_util.m"
    MR_Integer parse_tree__prog_util__NumPredArgs_7;
#line 693 "prog_util.m"
    MR_Integer parse_tree__prog_util__NumFuncArgs_8;
#line 699 "prog_util.m"
    MR_Word parse_tree__prog_util__FuncArgs0_9;
#line 699 "prog_util.m"
    MR_Box parse_tree__prog_util__FuncReturn0_10;
#line 696 "prog_util.m"
    MR_Word parse_tree__prog_util__V_12_12;
#line 696 "prog_util.m"
    MR_Word parse_tree__prog_util__V_18_18;

#line 694 "prog_util.m"
    {
#line 694 "prog_util.m"
      mercury__list__length_2_p_0(parse_tree__prog_util__TypeInfo_for_T_17, parse_tree__prog_util__PredArgs_4, &parse_tree__prog_util__NumPredArgs_7);
    }
#line 695 "prog_util.m"
    parse_tree__prog_util__NumFuncArgs_8 = (parse_tree__prog_util__NumPredArgs_7 - (MR_Integer) 1);
#line 696 "prog_util.m"
    {
#line 696 "prog_util.m"
      parse_tree__prog_util__succeeded = mercury__list__split_list_4_p_0(parse_tree__prog_util__TypeInfo_for_T_17, parse_tree__prog_util__NumFuncArgs_8, parse_tree__prog_util__PredArgs_4, &parse_tree__prog_util__FuncArgs0_9, &parse_tree__prog_util__V_12_12);
    }
#line 696 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 696 "prog_util.m"
      {
#line 696 "prog_util.m"
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 696 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 696 "prog_util.m"
          {
#line 696 "prog_util.m"
            parse_tree__prog_util__FuncReturn0_10 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_12_12, (MR_Integer) 0));
#line 696 "prog_util.m"
            parse_tree__prog_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_12_12, (MR_Integer) 1)));
#line 696 "prog_util.m"
            {
#line 696 "prog_util.m"
              parse_tree__prog_util__succeeded = mercury__list____Unify____list_1_0(parse_tree__prog_util__TypeInfo_for_T_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_util__V_18_18);
            }
#line 696 "prog_util.m"
          }
#line 696 "prog_util.m"
      }
#line 699 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 697 "prog_util.m"
      {
#line 697 "prog_util.m"
        *parse_tree__prog_util__FuncArgs_5 = parse_tree__prog_util__FuncArgs0_9;
#line 698 "prog_util.m"
        *parse_tree__prog_util__FuncReturn_6 = parse_tree__prog_util__FuncReturn0_10;
#line 697 "prog_util.m"
      }
#line 699 "prog_util.m"
    else
#line 700 "prog_util.m"
      {
#line 700 "prog_util.m"
        {
#line 700 "prog_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "predicate \140parse_tree.prog_util.pred_args_to_func_args\'/3", (MR_String) "function missing return value\?");
#line 700 "prog_util.m"
          return;
        }
#line 700 "prog_util.m"
      }
#line 693 "prog_util.m"
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
#line 674 "prog_util.m"
  {
#line 674 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 675 "prog_util.m"
    {
#line 675 "prog_util.m"
      parse_tree__prog_util__make_n_fresh_vars_2_6_p_0(parse_tree__prog_util__TypeInfo_for_T_12, parse_tree__prog_util__BaseName_6, (MR_Integer) 0, parse_tree__prog_util__N_7, parse_tree__prog_util__Vars_8, parse_tree__prog_util__VarSet0_9, parse_tree__prog_util__VarSet_10);
#line 675 "prog_util.m"
      return;
    }
#line 674 "prog_util.m"
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
#line 664 "prog_util.m"
  {
#line 664 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 664 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__3_3;

#line 664 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 664 "prog_util.m"
      {
#line 664 "prog_util.m"
        MR_String parse_tree__prog_util__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 664 "prog_util.m"
        MR_Word parse_tree__prog_util__V_6_6;
#line 664 "prog_util.m"
        MR_Word parse_tree__prog_util__V_7_7;

#line 665 "prog_util.m"
        {
#line 665 "prog_util.m"
          parse_tree__prog_util__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 665 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_6_6, 0) = ((MR_Box) (parse_tree__prog_util__Name_4));
#line 665 "prog_util.m"
        }
#line 665 "prog_util.m"
        {
#line 665 "prog_util.m"
          parse_tree__prog_util__V_7_7 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
        }
#line 665 "prog_util.m"
        {
#line 665 "prog_util.m"
          parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 665 "prog_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 665 "prog_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_util__V_6_6));
#line 665 "prog_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 2) = ((MR_Box) (parse_tree__prog_util__Arity_2));
#line 665 "prog_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 3) = ((MR_Box) (parse_tree__prog_util__V_7_7));
#line 665 "prog_util.m"
        }
#line 664 "prog_util.m"
      }
#line 664 "prog_util.m"
    else
#line 664 "prog_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 666 "prog_util.m"
        {
#line 666 "prog_util.m"
          MR_Integer parse_tree__prog_util__Int_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));

#line 666 "prog_util.m"
          {
#line 666 "prog_util.m"
            parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "prog_util.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 666 "prog_util.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_util__Int_8));
#line 666 "prog_util.m"
          }
#line 666 "prog_util.m"
        }
#line 664 "prog_util.m"
      else
#line 664 "prog_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 667 "prog_util.m"
          {
#line 667 "prog_util.m"
            MR_String parse_tree__prog_util__String_10 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));

#line 667 "prog_util.m"
            {
#line 667 "prog_util.m"
              parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "prog_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 667 "prog_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_util__String_10));
#line 667 "prog_util.m"
            }
#line 667 "prog_util.m"
          }
#line 664 "prog_util.m"
        else
#line 664 "prog_util.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 668 "prog_util.m"
            {
#line 668 "prog_util.m"
              MR_Float parse_tree__prog_util__Float_12 = MR_unbox_float((MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));

#line 668 "prog_util.m"
              {
#line 668 "prog_util.m"
                parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "prog_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 668 "prog_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 1) = MR_box_float(parse_tree__prog_util__Float_12);
#line 668 "prog_util.m"
              }
#line 668 "prog_util.m"
            }
#line 664 "prog_util.m"
          else
#line 669 "prog_util.m"
            {
#line 669 "prog_util.m"
              MR_String parse_tree__prog_util__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));

#line 670 "prog_util.m"
              {
#line 670 "prog_util.m"
                parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "prog_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 670 "prog_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_util__Name_14));
#line 670 "prog_util.m"
              }
#line 669 "prog_util.m"
            }
#line 664 "prog_util.m"
    return parse_tree__prog_util__HeadVar__3_3;
#line 664 "prog_util.m"
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
#line 644 "prog_util.m"
  while (MR_TRUE)
#line 644 "prog_util.m"
    {
#line 644 "prog_util.m"
      /* tailcall optimized into a loop */
#line 644 "prog_util.m"
      {
#line 644 "prog_util.m"
        MR_bool parse_tree__prog_util__succeeded;
#line 644 "prog_util.m"
        MR_Word parse_tree__prog_util__HeadVar__2_2;

#line 644 "prog_util.m"
        if ((parse_tree__prog_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 655 "prog_util.m"
          parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "prog_util.m"
        else
#line 644 "prog_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 660 "prog_util.m"
            parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "prog_util.m"
          else
#line 644 "prog_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 654 "prog_util.m"
              parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "prog_util.m"
            else
#line 644 "prog_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 653 "prog_util.m"
                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "prog_util.m"
              else
#line 644 "prog_util.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 648 "prog_util.m"
                  {
#line 648 "prog_util.m"
                    parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
#line 648 "prog_util.m"
                  }
#line 644 "prog_util.m"
                else
#line 644 "prog_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 651 "prog_util.m"
                    parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "prog_util.m"
                  else
#line 644 "prog_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 644 "prog_util.m"
                      {
#line 644 "prog_util.m"
                        MR_Integer parse_tree__prog_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 2)));
#line 644 "prog_util.m"
                        MR_Word parse_tree__prog_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 644 "prog_util.m"
                        MR_Word parse_tree__prog_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 3)));

#line 644 "prog_util.m"
                        {
#line 644 "prog_util.m"
                          parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 644 "prog_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__prog_util__Arity_4));
#line 644 "prog_util.m"
                        }
#line 644 "prog_util.m"
                      }
#line 644 "prog_util.m"
                    else
#line 644 "prog_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 661 "prog_util.m"
                        parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "prog_util.m"
                      else
#line 644 "prog_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 647 "prog_util.m"
                          {
#line 647 "prog_util.m"
                            parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
#line 647 "prog_util.m"
                          }
#line 644 "prog_util.m"
                        else
#line 644 "prog_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 658 "prog_util.m"
                            {
#line 658 "prog_util.m"
                              MR_Word parse_tree__prog_util__ConsId_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 2)));
#line 658 "prog_util.m"
                              MR_Integer parse_tree__prog_util__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));

#line 659 "prog_util.m"
                              /* direct tailcall eliminated */
#line 659 "prog_util.m"
                              {
#line 659 "prog_util.m"
                                MR_Word parse_tree__prog_util__HeadVar__1__tmp_copy_1 = parse_tree__prog_util__ConsId_30;

#line 659 "prog_util.m"
                                parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__HeadVar__1__tmp_copy_1;
#line 659 "prog_util.m"
                              }
#line 659 "prog_util.m"
                              continue;
#line 658 "prog_util.m"
                            }
#line 644 "prog_util.m"
                          else
#line 644 "prog_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 650 "prog_util.m"
                              {
#line 650 "prog_util.m"
                                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
#line 650 "prog_util.m"
                              }
#line 644 "prog_util.m"
                            else
#line 644 "prog_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 646 "prog_util.m"
                                {
#line 646 "prog_util.m"
                                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
#line 646 "prog_util.m"
                                }
#line 644 "prog_util.m"
                              else
#line 644 "prog_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 649 "prog_util.m"
                                  {
#line 649 "prog_util.m"
                                    parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
#line 649 "prog_util.m"
                                  }
#line 644 "prog_util.m"
                                else
#line 644 "prog_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 662 "prog_util.m"
                                    parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "prog_util.m"
                                  else
#line 644 "prog_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 645 "prog_util.m"
                                      {
#line 645 "prog_util.m"
                                        MR_Integer parse_tree__prog_util__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));

#line 645 "prog_util.m"
                                        {
#line 645 "prog_util.m"
                                          parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 645 "prog_util.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__prog_util__Arity_6));
#line 645 "prog_util.m"
                                        }
#line 645 "prog_util.m"
                                      }
#line 644 "prog_util.m"
                                    else
#line 644 "prog_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 652 "prog_util.m"
                                        parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "prog_util.m"
                                      else
#line 644 "prog_util.m"
                                        if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 656 "prog_util.m"
                                          parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "prog_util.m"
                                        else
#line 657 "prog_util.m"
                                          parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "prog_util.m"
        return parse_tree__prog_util__HeadVar__2_2;
#line 644 "prog_util.m"
      }
#line 644 "prog_util.m"
      break;
#line 644 "prog_util.m"
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
#line 615 "prog_util.m"
  while (MR_TRUE)
#line 615 "prog_util.m"
    {
#line 615 "prog_util.m"
      /* tailcall optimized into a loop */
#line 615 "prog_util.m"
      {
#line 615 "prog_util.m"
        MR_bool parse_tree__prog_util__succeeded;
#line 615 "prog_util.m"
        MR_Integer parse_tree__prog_util__Arity_4;

#line 615 "prog_util.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 615 "prog_util.m"
          {
#line 615 "prog_util.m"
            MR_Word parse_tree__prog_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 1)));
#line 615 "prog_util.m"
            MR_Word parse_tree__prog_util__V_6_6;

#line 615 "prog_util.m"
            parse_tree__prog_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 2)));
#line 615 "prog_util.m"
            parse_tree__prog_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 3)));
#line 615 "prog_util.m"
          }
#line 615 "prog_util.m"
        else
#line 615 "prog_util.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 619 "prog_util.m"
            {
#line 619 "prog_util.m"
              MR_Word parse_tree__prog_util__SubConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 2)));
#line 619 "prog_util.m"
              MR_Integer parse_tree__prog_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 1)));

#line 620 "prog_util.m"
              /* direct tailcall eliminated */
#line 620 "prog_util.m"
              {
#line 620 "prog_util.m"
                MR_Word parse_tree__prog_util__ConsId__tmp_copy_3 = parse_tree__prog_util__SubConsId_8;

#line 620 "prog_util.m"
                parse_tree__prog_util__ConsId_3 = parse_tree__prog_util__ConsId__tmp_copy_3;
#line 620 "prog_util.m"
              }
#line 620 "prog_util.m"
              continue;
#line 619 "prog_util.m"
            }
#line 615 "prog_util.m"
          else
#line 615 "prog_util.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 617 "prog_util.m"
              parse_tree__prog_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 1)));
#line 615 "prog_util.m"
            else
#line 615 "prog_util.m"
              if (((((((((((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 7)))) || (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 6)))))) || (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 9)))))) || (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 5)))))) || (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 8))))))
#line 628 "prog_util.m"
                parse_tree__prog_util__Arity_4 = (MR_Integer) 0;
#line 615 "prog_util.m"
              else
#line 640 "prog_util.m"
                {
#line 641 "prog_util.m"
                  {
#line 641 "prog_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "function \140parse_tree.prog_util.cons_id_arity\'/1", (MR_String) "unexpected cons_id");
                  }
#line 640 "prog_util.m"
                }
#line 615 "prog_util.m"
        return parse_tree__prog_util__Arity_4;
#line 615 "prog_util.m"
      }
#line 615 "prog_util.m"
      break;
#line 615 "prog_util.m"
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
#line 595 "prog_util.m"
  {
#line 595 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 595 "prog_util.m"
    if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 601 "prog_util.m"
      {
#line 601 "prog_util.m"
        MR_Char parse_tree__prog_util__Char_14;
#line 601 "prog_util.m"
        MR_Word parse_tree__prog_util__SymName_16;
#line 601 "prog_util.m"
        MR_String parse_tree__prog_util__V_17_17;
#line 601 "prog_util.m"
        MR_Word parse_tree__prog_util__V_18_18;
#line 601 "prog_util.m"
        MR_Word parse_tree__prog_util__Context_38;

#line 601 "prog_util.m"
        parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 601 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 601 "prog_util.m"
          {
#line 601 "prog_util.m"
            parse_tree__prog_util__Char_14 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 602 "prog_util.m"
            {
#line 602 "prog_util.m"
              parse_tree__prog_util__V_17_17 = mercury__string__from_char_1_f_0(parse_tree__prog_util__Char_14);
            }
#line 603 "prog_util.m"
            parse_tree__prog_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 602 "prog_util.m"
            {
#line 602 "prog_util.m"
              parse_tree__prog_util__SymName_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 602 "prog_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_util__SymName_16, 0) = ((MR_Box) (parse_tree__prog_util__V_17_17));
#line 602 "prog_util.m"
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
#line 601 "prog_util.m"
          }
#line 601 "prog_util.m"
      }
#line 595 "prog_util.m"
    else
#line 595 "prog_util.m"
      if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 610 "prog_util.m"
        {
#line 610 "prog_util.m"
          MR_Word parse_tree__prog_util__SymName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 610 "prog_util.m"
          MR_Word parse_tree__prog_util__Context_42;
#line 610 "prog_util.m"
          MR_Integer parse_tree__prog_util___Arity_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 2)));
#line 610 "prog_util.m"
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
#line 610 "prog_util.m"
          parse_tree__prog_util__succeeded = MR_TRUE;
#line 610 "prog_util.m"
        }
#line 595 "prog_util.m"
      else
#line 595 "prog_util.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 598 "prog_util.m"
          {
#line 598 "prog_util.m"
            MR_Float parse_tree__prog_util__Float_9;
#line 598 "prog_util.m"
            MR_Word parse_tree__prog_util__Context_11;
#line 598 "prog_util.m"
            MR_Word parse_tree__prog_util__V_12_12;
#line 598 "prog_util.m"
            MR_Word parse_tree__prog_util__V_13_13;

#line 598 "prog_util.m"
            parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 598 "prog_util.m"
            if (parse_tree__prog_util__succeeded)
#line 598 "prog_util.m"
              {
#line 598 "prog_util.m"
                parse_tree__prog_util__Float_9 = MR_unbox_float((MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 599 "prog_util.m"
                {
#line 599 "prog_util.m"
                  mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_11);
                }
#line 600 "prog_util.m"
                parse_tree__prog_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 600 "prog_util.m"
                {
#line 600 "prog_util.m"
                  parse_tree__prog_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "prog_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_util__V_12_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 600 "prog_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_util__V_12_12, 1) = MR_box_float(parse_tree__prog_util__Float_9);
#line 600 "prog_util.m"
                }
#line 600 "prog_util.m"
                {
#line 600 "prog_util.m"
                  MR_Word base;
#line 600 "prog_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 600 "prog_util.m"
                  *parse_tree__prog_util__Term_3 = base;
#line 600 "prog_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__V_12_12));
#line 600 "prog_util.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__V_13_13));
#line 600 "prog_util.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_11));
#line 600 "prog_util.m"
                }
#line 600 "prog_util.m"
                parse_tree__prog_util__succeeded = MR_TRUE;
#line 598 "prog_util.m"
              }
#line 598 "prog_util.m"
          }
#line 595 "prog_util.m"
        else
#line 595 "prog_util.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 595 "prog_util.m"
            {
#line 595 "prog_util.m"
              MR_Integer parse_tree__prog_util__Int_4;
#line 595 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_6;
#line 595 "prog_util.m"
              MR_Word parse_tree__prog_util__V_7_7;
#line 595 "prog_util.m"
              MR_Word parse_tree__prog_util__V_8_8;

#line 595 "prog_util.m"
              parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 595 "prog_util.m"
              if (parse_tree__prog_util__succeeded)
#line 595 "prog_util.m"
                {
#line 595 "prog_util.m"
                  parse_tree__prog_util__Int_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 596 "prog_util.m"
                  {
#line 596 "prog_util.m"
                    mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_6);
                  }
#line 597 "prog_util.m"
                  parse_tree__prog_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 597 "prog_util.m"
                  {
#line 597 "prog_util.m"
                    parse_tree__prog_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 597 "prog_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_7_7, 0) = ((MR_Box) (parse_tree__prog_util__Int_4));
#line 597 "prog_util.m"
                  }
#line 597 "prog_util.m"
                  {
#line 597 "prog_util.m"
                    MR_Word base;
#line 597 "prog_util.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 597 "prog_util.m"
                    *parse_tree__prog_util__Term_3 = base;
#line 597 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__V_7_7));
#line 597 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__V_8_8));
#line 597 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_6));
#line 597 "prog_util.m"
                  }
#line 597 "prog_util.m"
                  parse_tree__prog_util__succeeded = MR_TRUE;
#line 595 "prog_util.m"
                }
#line 595 "prog_util.m"
            }
#line 595 "prog_util.m"
          else
#line 595 "prog_util.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 604 "prog_util.m"
              {
#line 604 "prog_util.m"
                MR_String parse_tree__prog_util__String_19;
#line 604 "prog_util.m"
                MR_Word parse_tree__prog_util__Context_21;
#line 604 "prog_util.m"
                MR_Word parse_tree__prog_util__V_22_22;
#line 604 "prog_util.m"
                MR_Word parse_tree__prog_util__V_23_23;

#line 604 "prog_util.m"
                parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 604 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 604 "prog_util.m"
                  {
#line 604 "prog_util.m"
                    parse_tree__prog_util__String_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 605 "prog_util.m"
                    {
#line 605 "prog_util.m"
                      mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_21);
                    }
#line 606 "prog_util.m"
                    parse_tree__prog_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 606 "prog_util.m"
                    {
#line 606 "prog_util.m"
                      parse_tree__prog_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 606 "prog_util.m"
                      MR_hl_field(MR_mktag(2), parse_tree__prog_util__V_22_22, 0) = ((MR_Box) (parse_tree__prog_util__String_19));
#line 606 "prog_util.m"
                    }
#line 606 "prog_util.m"
                    {
#line 606 "prog_util.m"
                      MR_Word base;
#line 606 "prog_util.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 606 "prog_util.m"
                      *parse_tree__prog_util__Term_3 = base;
#line 606 "prog_util.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__V_22_22));
#line 606 "prog_util.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__V_23_23));
#line 606 "prog_util.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_21));
#line 606 "prog_util.m"
                    }
#line 606 "prog_util.m"
                    parse_tree__prog_util__succeeded = MR_TRUE;
#line 604 "prog_util.m"
                  }
#line 604 "prog_util.m"
              }
#line 595 "prog_util.m"
            else
#line 595 "prog_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 607 "prog_util.m"
                {
#line 607 "prog_util.m"
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
#line 607 "prog_util.m"
                  parse_tree__prog_util__succeeded = MR_TRUE;
#line 607 "prog_util.m"
                }
#line 595 "prog_util.m"
              else
#line 595 "prog_util.m"
                parse_tree__prog_util__succeeded = MR_FALSE;
#line 595 "prog_util.m"
    return parse_tree__prog_util__succeeded;
#line 595 "prog_util.m"
  }
#line 116 "prog_util.m"
}

#line 411 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_4(
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

#line 374 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_3(
#line 374 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 374 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 374 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2)
#line 374 "prog_util.m"
{
#line 374 "prog_util.m"
  {
#line 374 "prog_util.m"
    MR_Box parse_tree__prog_util__closure = parse_tree__prog_util__closure_arg;
#line 374 "prog_util.m"
    MR_Word parse_tree__prog_util__conv2_TMV_8;

#line 374 "prog_util.m"
    {
#line 374 "prog_util.m"
      parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv2_TMV_8);
    }
#line 374 "prog_util.m"
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv2_TMV_8));
#line 374 "prog_util.m"
  }
#line 374 "prog_util.m"
}

#line 394 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_2(
#line 394 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 394 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 394 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2)
#line 394 "prog_util.m"
{
#line 394 "prog_util.m"
  {
#line 394 "prog_util.m"
    MR_Box parse_tree__prog_util__closure = parse_tree__prog_util__closure_arg;
#line 394 "prog_util.m"
    MR_Word parse_tree__prog_util__conv1_Goal_8;

#line 394 "prog_util.m"
    {
#line 394 "prog_util.m"
      parse_tree__prog_util__rename_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv1_Goal_8);
    }
#line 394 "prog_util.m"
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv1_Goal_8));
#line 394 "prog_util.m"
  }
#line 394 "prog_util.m"
}

#line 389 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_1(
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
    MR_Word parse_tree__prog_util__conv0_Var_8;

#line 389 "prog_util.m"
    {
#line 389 "prog_util.m"
      parse_tree__prog_util__rename_in_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv0_Var_8);
    }
#line 389 "prog_util.m"
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv0_Var_8));
#line 389 "prog_util.m"
  }
#line 389 "prog_util.m"
}

#line 106 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0(
#line 106 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 106 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 106 "prog_util.m"
  MR_Word parse_tree__prog_util__Goal0_7,
#line 106 "prog_util.m"
  MR_Word * parse_tree__prog_util__Goal_8)
#line 106 "prog_util.m"
{
#line 271 "prog_util.m"
  {
#line 271 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 271 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 0))))
#line 274 "prog_util.m"
      {
#line 274 "prog_util.m"
        MR_Word parse_tree__prog_util__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)));
#line 274 "prog_util.m"
        MR_Word parse_tree__prog_util__SubGoalA0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 274 "prog_util.m"
        MR_Word parse_tree__prog_util__SubGoalB0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 274 "prog_util.m"
        MR_Word parse_tree__prog_util__SubGoalA_13;
#line 274 "prog_util.m"
        MR_Word parse_tree__prog_util__SubGoalB_14;

#line 275 "prog_util.m"
        {
#line 275 "prog_util.m"
          parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalA0_11, &parse_tree__prog_util__SubGoalA_13);
        }
#line 276 "prog_util.m"
        {
#line 276 "prog_util.m"
          parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalB0_12, &parse_tree__prog_util__SubGoalB_14);
        }
#line 277 "prog_util.m"
        {
#line 277 "prog_util.m"
          MR_Word base;
#line 277 "prog_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 277 "prog_util.m"
          *parse_tree__prog_util__Goal_8 = base;
#line 277 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__Context_10));
#line 277 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__SubGoalA_13));
#line 277 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoalB_14));
#line 277 "prog_util.m"
        }
#line 274 "prog_util.m"
      }
#line 271 "prog_util.m"
    else
#line 271 "prog_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 1))))
#line 279 "prog_util.m"
        {
#line 279 "prog_util.m"
          MR_Word parse_tree__prog_util__Context_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)));
#line 279 "prog_util.m"
          MR_Word parse_tree__prog_util__SubGoalA0_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 279 "prog_util.m"
          MR_Word parse_tree__prog_util__SubGoalB0_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 279 "prog_util.m"
          MR_Word parse_tree__prog_util__SubGoalA_83;
#line 279 "prog_util.m"
          MR_Word parse_tree__prog_util__SubGoalB_84;

#line 280 "prog_util.m"
          {
#line 280 "prog_util.m"
            parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalA0_81, &parse_tree__prog_util__SubGoalA_83);
          }
#line 281 "prog_util.m"
          {
#line 281 "prog_util.m"
            parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalB0_82, &parse_tree__prog_util__SubGoalB_84);
          }
#line 282 "prog_util.m"
          {
#line 282 "prog_util.m"
            MR_Word base;
#line 282 "prog_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 282 "prog_util.m"
            *parse_tree__prog_util__Goal_8 = base;
#line 282 "prog_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Context_80));
#line 282 "prog_util.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__SubGoalA_83));
#line 282 "prog_util.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoalB_84));
#line 282 "prog_util.m"
          }
#line 279 "prog_util.m"
        }
#line 271 "prog_util.m"
      else
#line 271 "prog_util.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 303 "prog_util.m"
          {
#line 303 "prog_util.m"
            MR_Word parse_tree__prog_util__Context_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 303 "prog_util.m"
            MR_Word parse_tree__prog_util__SubGoal0_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 303 "prog_util.m"
            MR_Word parse_tree__prog_util__SubGoal_101;
#line 303 "prog_util.m"
            MR_Word parse_tree__prog_util__Vars0_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 303 "prog_util.m"
            MR_Word parse_tree__prog_util__Vars_103;

#line 304 "prog_util.m"
            {
#line 304 "prog_util.m"
              parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_102, &parse_tree__prog_util__Vars_103);
            }
#line 305 "prog_util.m"
            {
#line 305 "prog_util.m"
              parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_100, &parse_tree__prog_util__SubGoal_101);
            }
#line 306 "prog_util.m"
            {
#line 306 "prog_util.m"
              MR_Word base;
#line 306 "prog_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 306 "prog_util.m"
              *parse_tree__prog_util__Goal_8 = base;
#line 306 "prog_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 306 "prog_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_99));
#line 306 "prog_util.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_103));
#line 306 "prog_util.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_101));
#line 306 "prog_util.m"
            }
#line 303 "prog_util.m"
          }
#line 271 "prog_util.m"
        else
#line 271 "prog_util.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 308 "prog_util.m"
            {
#line 308 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 308 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 308 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal_106;
#line 308 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars0_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 308 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars_108;

#line 309 "prog_util.m"
              {
#line 309 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_107, &parse_tree__prog_util__Vars_108);
              }
#line 310 "prog_util.m"
              {
#line 310 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_105, &parse_tree__prog_util__SubGoal_106);
              }
#line 311 "prog_util.m"
              {
#line 311 "prog_util.m"
                MR_Word base;
#line 311 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 311 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 311 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 311 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_104));
#line 311 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_108));
#line 311 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_106));
#line 311 "prog_util.m"
              }
#line 308 "prog_util.m"
            }
#line 271 "prog_util.m"
          else
#line 271 "prog_util.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 381 "prog_util.m"
              {
#line 381 "prog_util.m"
                MR_Word parse_tree__prog_util__TypeCtorInfo_194_194;
#line 381 "prog_util.m"
                MR_Word parse_tree__prog_util__InVars0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 381 "prog_util.m"
                MR_Word parse_tree__prog_util__OutVars0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 381 "prog_util.m"
                MR_Word parse_tree__prog_util__MaybeVars0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 381 "prog_util.m"
                MR_Word parse_tree__prog_util__MainGoal0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 381 "prog_util.m"
                MR_Word parse_tree__prog_util__OrElseGoal0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 381 "prog_util.m"
                MR_Word parse_tree__prog_util__InVars_42;
#line 381 "prog_util.m"
                MR_Word parse_tree__prog_util__OutVars_43;
#line 381 "prog_util.m"
                MR_Word parse_tree__prog_util__MaybeVars_44;
#line 381 "prog_util.m"
                MR_Word parse_tree__prog_util__MainGoal_47;
#line 381 "prog_util.m"
                MR_Word parse_tree__prog_util__OrElseGoal_48;
#line 381 "prog_util.m"
                MR_Word parse_tree__prog_util__V_77_77;
#line 381 "prog_util.m"
                MR_Word parse_tree__prog_util__Context_154 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));

#line 382 "prog_util.m"
                {
#line 382 "prog_util.m"
                  parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__InVars0_37, &parse_tree__prog_util__InVars_42);
                }
#line 383 "prog_util.m"
                {
#line 383 "prog_util.m"
                  parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__OutVars0_38, &parse_tree__prog_util__OutVars_43);
                }
#line 387 "prog_util.m"
                if ((parse_tree__prog_util__MaybeVars0_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 386 "prog_util.m"
                  parse_tree__prog_util__MaybeVars_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 387 "prog_util.m"
                else
#line 388 "prog_util.m"
                  {
#line 388 "prog_util.m"
                    MR_Word parse_tree__prog_util__TypeInfo_191_191;
#line 388 "prog_util.m"
                    MR_Word parse_tree__prog_util__TransVars0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeVars0_39, (MR_Integer) 0)));
#line 388 "prog_util.m"
                    MR_Word parse_tree__prog_util__TransVars_46;
#line 388 "prog_util.m"
                    MR_Word parse_tree__prog_util__V_76_76;

#line 389 "prog_util.m"
                    {
#line 389 "prog_util.m"
                      parse_tree__prog_util__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 389 "prog_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_76_76, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[0]));
#line 389 "prog_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_76_76, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_1));
#line 389 "prog_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 389 "prog_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_76_76, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
#line 389 "prog_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_76_76, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 389 "prog_util.m"
                    }
#line 5152 "parse_tree.prog_util.c"
                    parse_tree__prog_util__TypeInfo_191_191 = (MR_Word) &parse_tree__prog_util_scalar_common_1[1];
#line 389 "prog_util.m"
                    {
#line 389 "prog_util.m"
                      mercury__list__map_3_p_0(parse_tree__prog_util__TypeInfo_191_191, parse_tree__prog_util__TypeInfo_191_191, parse_tree__prog_util__V_76_76, parse_tree__prog_util__TransVars0_45, &parse_tree__prog_util__TransVars_46);
                    }
#line 391 "prog_util.m"
                    {
#line 391 "prog_util.m"
                      parse_tree__prog_util__MaybeVars_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 391 "prog_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeVars_44, 0) = ((MR_Box) (parse_tree__prog_util__TransVars_46));
#line 391 "prog_util.m"
                    }
#line 388 "prog_util.m"
                  }
#line 393 "prog_util.m"
                {
#line 393 "prog_util.m"
                  parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__MainGoal0_40, &parse_tree__prog_util__MainGoal_47);
                }
#line 394 "prog_util.m"
                {
#line 394 "prog_util.m"
                  parse_tree__prog_util__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 394 "prog_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_77_77, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[1]));
#line 394 "prog_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_77_77, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_2));
#line 394 "prog_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 394 "prog_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_77_77, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
#line 394 "prog_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_77_77, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 394 "prog_util.m"
                }
#line 5190 "parse_tree.prog_util.c"
                parse_tree__prog_util__TypeCtorInfo_194_194 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
#line 394 "prog_util.m"
                {
#line 394 "prog_util.m"
                  mercury__list__map_3_p_0(parse_tree__prog_util__TypeCtorInfo_194_194, parse_tree__prog_util__TypeCtorInfo_194_194, parse_tree__prog_util__V_77_77, parse_tree__prog_util__OrElseGoal0_41, &parse_tree__prog_util__OrElseGoal_48);
                }
#line 395 "prog_util.m"
                {
#line 395 "prog_util.m"
                  MR_Word base;
#line 395 "prog_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 395 "prog_util.m"
                  *parse_tree__prog_util__Goal_8 = base;
#line 395 "prog_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 395 "prog_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_154));
#line 395 "prog_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__InVars_42));
#line 395 "prog_util.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__OutVars_43));
#line 395 "prog_util.m"
                  MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__MaybeVars_44));
#line 395 "prog_util.m"
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__MainGoal_47));
#line 395 "prog_util.m"
                  MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__OrElseGoal_48));
#line 395 "prog_util.m"
                }
#line 381 "prog_util.m"
              }
#line 271 "prog_util.m"
            else
#line 271 "prog_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 448 "prog_util.m"
                {
#line 448 "prog_util.m"
                  MR_Word parse_tree__prog_util__SymName_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 448 "prog_util.m"
                  MR_Word parse_tree__prog_util__Context_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 448 "prog_util.m"
                  MR_Word parse_tree__prog_util__Purity_181 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 448 "prog_util.m"
                  MR_Word parse_tree__prog_util__Terms0_182 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 448 "prog_util.m"
                  MR_Word parse_tree__prog_util__Terms_183;

#line 449 "prog_util.m"
                  {
#line 449 "prog_util.m"
                    mercury__term__rename_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_util__Terms0_182, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, &parse_tree__prog_util__Terms_183);
                  }
#line 450 "prog_util.m"
                  {
#line 450 "prog_util.m"
                    MR_Word base;
#line 450 "prog_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 450 "prog_util.m"
                    *parse_tree__prog_util__Goal_8 = base;
#line 450 "prog_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 450 "prog_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_180));
#line 450 "prog_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SymName_68));
#line 450 "prog_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__Terms_183));
#line 450 "prog_util.m"
                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__Purity_181));
#line 450 "prog_util.m"
                  }
#line 448 "prog_util.m"
                }
#line 271 "prog_util.m"
              else
#line 271 "prog_util.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 284 "prog_util.m"
                  {
#line 284 "prog_util.m"
                    MR_Word parse_tree__prog_util__Context_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 284 "prog_util.m"
                    MR_Word parse_tree__prog_util__SubGoalA0_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 284 "prog_util.m"
                    MR_Word parse_tree__prog_util__SubGoalB0_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 284 "prog_util.m"
                    MR_Word parse_tree__prog_util__SubGoalA_88;
#line 284 "prog_util.m"
                    MR_Word parse_tree__prog_util__SubGoalB_89;

#line 285 "prog_util.m"
                    {
#line 285 "prog_util.m"
                      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalA0_86, &parse_tree__prog_util__SubGoalA_88);
                    }
#line 286 "prog_util.m"
                    {
#line 286 "prog_util.m"
                      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalB0_87, &parse_tree__prog_util__SubGoalB_89);
                    }
#line 287 "prog_util.m"
                    {
#line 287 "prog_util.m"
                      MR_Word base;
#line 287 "prog_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 287 "prog_util.m"
                      *parse_tree__prog_util__Goal_8 = base;
#line 287 "prog_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 287 "prog_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_85));
#line 287 "prog_util.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoalA_88));
#line 287 "prog_util.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoalB_89));
#line 287 "prog_util.m"
                    }
#line 284 "prog_util.m"
                  }
#line 271 "prog_util.m"
                else
#line 271 "prog_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 429 "prog_util.m"
                    {
#line 429 "prog_util.m"
                      MR_Word parse_tree__prog_util__Context_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 429 "prog_util.m"
                      MR_Word parse_tree__prog_util__SubGoalA0_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 429 "prog_util.m"
                      MR_Word parse_tree__prog_util__SubGoalB0_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 429 "prog_util.m"
                      MR_Word parse_tree__prog_util__SubGoalA_168;
#line 429 "prog_util.m"
                      MR_Word parse_tree__prog_util__SubGoalB_169;

#line 430 "prog_util.m"
                      {
#line 430 "prog_util.m"
                        parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalA0_166, &parse_tree__prog_util__SubGoalA_168);
                      }
#line 431 "prog_util.m"
                      {
#line 431 "prog_util.m"
                        parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalB0_167, &parse_tree__prog_util__SubGoalB_169);
                      }
#line 432 "prog_util.m"
                      {
#line 432 "prog_util.m"
                        MR_Word base;
#line 432 "prog_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 432 "prog_util.m"
                        *parse_tree__prog_util__Goal_8 = base;
#line 432 "prog_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 432 "prog_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_165));
#line 432 "prog_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoalA_168));
#line 432 "prog_util.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoalB_169));
#line 432 "prog_util.m"
                      }
#line 429 "prog_util.m"
                    }
#line 271 "prog_util.m"
                  else
#line 271 "prog_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 444 "prog_util.m"
                      {
#line 444 "prog_util.m"
                        MR_String parse_tree__prog_util__Name_65 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 444 "prog_util.m"
                        MR_Word parse_tree__prog_util__Terms0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 444 "prog_util.m"
                        MR_Word parse_tree__prog_util__Terms_67;
#line 444 "prog_util.m"
                        MR_Word parse_tree__prog_util__Context_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));

#line 445 "prog_util.m"
                        {
#line 445 "prog_util.m"
                          mercury__term__rename_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_util__Terms0_66, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, &parse_tree__prog_util__Terms_67);
                        }
#line 446 "prog_util.m"
                        {
#line 446 "prog_util.m"
                          MR_Word base;
#line 446 "prog_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 446 "prog_util.m"
                          *parse_tree__prog_util__Goal_8 = base;
#line 446 "prog_util.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 446 "prog_util.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_179));
#line 446 "prog_util.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Name_65));
#line 446 "prog_util.m"
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__Terms_67));
#line 446 "prog_util.m"
                        }
#line 444 "prog_util.m"
                      }
#line 271 "prog_util.m"
                    else
#line 271 "prog_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 19))))
#line 435 "prog_util.m"
                        {
#line 435 "prog_util.m"
                          MR_Word parse_tree__prog_util__Cond0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 435 "prog_util.m"
                          MR_Word parse_tree__prog_util__Cond_64;
#line 435 "prog_util.m"
                          MR_Word parse_tree__prog_util__Context_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 435 "prog_util.m"
                          MR_Word parse_tree__prog_util__Vars0_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 435 "prog_util.m"
                          MR_Word parse_tree__prog_util__Vars_172;
#line 435 "prog_util.m"
                          MR_Word parse_tree__prog_util__StateVars0_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 435 "prog_util.m"
                          MR_Word parse_tree__prog_util__StateVars_174;
#line 435 "prog_util.m"
                          MR_Word parse_tree__prog_util__Then0_175 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 435 "prog_util.m"
                          MR_Word parse_tree__prog_util__Then_176;
#line 435 "prog_util.m"
                          MR_Word parse_tree__prog_util__Else0_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 435 "prog_util.m"
                          MR_Word parse_tree__prog_util__Else_178;

#line 436 "prog_util.m"
                          {
#line 436 "prog_util.m"
                            parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_171, &parse_tree__prog_util__Vars_172);
                          }
#line 437 "prog_util.m"
                          {
#line 437 "prog_util.m"
                            parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_173, &parse_tree__prog_util__StateVars_174);
                          }
#line 438 "prog_util.m"
                          {
#line 438 "prog_util.m"
                            parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Cond0_63, &parse_tree__prog_util__Cond_64);
                          }
#line 439 "prog_util.m"
                          {
#line 439 "prog_util.m"
                            parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Then0_175, &parse_tree__prog_util__Then_176);
                          }
#line 440 "prog_util.m"
                          {
#line 440 "prog_util.m"
                            parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Else0_177, &parse_tree__prog_util__Else_178);
                          }
#line 441 "prog_util.m"
                          {
#line 441 "prog_util.m"
                            MR_Word base;
#line 441 "prog_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 441 "prog_util.m"
                            *parse_tree__prog_util__Goal_8 = base;
#line 441 "prog_util.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 441 "prog_util.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_170));
#line 441 "prog_util.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_172));
#line 441 "prog_util.m"
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__StateVars_174));
#line 441 "prog_util.m"
                            MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__Cond_64));
#line 441 "prog_util.m"
                            MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__Then_176));
#line 441 "prog_util.m"
                            MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__Else_178));
#line 441 "prog_util.m"
                          }
#line 435 "prog_util.m"
                        }
#line 271 "prog_util.m"
                      else
#line 271 "prog_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 424 "prog_util.m"
                          {
#line 424 "prog_util.m"
                            MR_Word parse_tree__prog_util__Context_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 424 "prog_util.m"
                            MR_Word parse_tree__prog_util__SubGoalA0_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 424 "prog_util.m"
                            MR_Word parse_tree__prog_util__SubGoalB0_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 424 "prog_util.m"
                            MR_Word parse_tree__prog_util__SubGoalA_163;
#line 424 "prog_util.m"
                            MR_Word parse_tree__prog_util__SubGoalB_164;

#line 425 "prog_util.m"
                            {
#line 425 "prog_util.m"
                              parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalA0_161, &parse_tree__prog_util__SubGoalA_163);
                            }
#line 426 "prog_util.m"
                            {
#line 426 "prog_util.m"
                              parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalB0_162, &parse_tree__prog_util__SubGoalB_164);
                            }
#line 427 "prog_util.m"
                            {
#line 427 "prog_util.m"
                              MR_Word base;
#line 427 "prog_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 427 "prog_util.m"
                              *parse_tree__prog_util__Goal_8 = base;
#line 427 "prog_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 427 "prog_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_160));
#line 427 "prog_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoalA_163));
#line 427 "prog_util.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoalB_164));
#line 427 "prog_util.m"
                            }
#line 424 "prog_util.m"
                          }
#line 271 "prog_util.m"
                        else
#line 271 "prog_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 289 "prog_util.m"
                            {
#line 289 "prog_util.m"
                              MR_Word parse_tree__prog_util__SubGoal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 289 "prog_util.m"
                              MR_Word parse_tree__prog_util__SubGoal_16;
#line 289 "prog_util.m"
                              MR_Word parse_tree__prog_util__Context_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));

#line 290 "prog_util.m"
                              {
#line 290 "prog_util.m"
                                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_15, &parse_tree__prog_util__SubGoal_16);
                              }
#line 291 "prog_util.m"
                              {
#line 291 "prog_util.m"
                                MR_Word base;
#line 291 "prog_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 291 "prog_util.m"
                                *parse_tree__prog_util__Goal_8 = base;
#line 291 "prog_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 291 "prog_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_90));
#line 291 "prog_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoal_16));
#line 291 "prog_util.m"
                              }
#line 289 "prog_util.m"
                            }
#line 271 "prog_util.m"
                          else
#line 271 "prog_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 338 "prog_util.m"
                              {
#line 338 "prog_util.m"
                                MR_Word parse_tree__prog_util__Context_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 338 "prog_util.m"
                                MR_Word parse_tree__prog_util__SubGoal0_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 338 "prog_util.m"
                                MR_Word parse_tree__prog_util__SubGoal_130;
#line 338 "prog_util.m"
                                MR_Word parse_tree__prog_util__Vars0_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 338 "prog_util.m"
                                MR_Word parse_tree__prog_util__Vars_132;
#line 338 "prog_util.m"
                                MR_Word parse_tree__prog_util__StateVars0_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 338 "prog_util.m"
                                MR_Word parse_tree__prog_util__DotSVars0_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 338 "prog_util.m"
                                MR_Word parse_tree__prog_util__ColonSVars0_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 338 "prog_util.m"
                                MR_Word parse_tree__prog_util__StateVars_136;
#line 338 "prog_util.m"
                                MR_Word parse_tree__prog_util__DotSVars_137;
#line 338 "prog_util.m"
                                MR_Word parse_tree__prog_util__ColonSVars_138;

#line 339 "prog_util.m"
                                {
#line 339 "prog_util.m"
                                  parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_131, &parse_tree__prog_util__Vars_132);
                                }
#line 340 "prog_util.m"
                                {
#line 340 "prog_util.m"
                                  parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_133, &parse_tree__prog_util__StateVars_136);
                                }
#line 341 "prog_util.m"
                                {
#line 341 "prog_util.m"
                                  parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__DotSVars0_134, &parse_tree__prog_util__DotSVars_137);
                                }
#line 342 "prog_util.m"
                                {
#line 342 "prog_util.m"
                                  parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__ColonSVars0_135, &parse_tree__prog_util__ColonSVars_138);
                                }
#line 343 "prog_util.m"
                                {
#line 343 "prog_util.m"
                                  parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_129, &parse_tree__prog_util__SubGoal_130);
                                }
#line 344 "prog_util.m"
                                {
#line 344 "prog_util.m"
                                  MR_Word base;
#line 344 "prog_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 344 "prog_util.m"
                                  *parse_tree__prog_util__Goal_8 = base;
#line 344 "prog_util.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 344 "prog_util.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_128));
#line 344 "prog_util.m"
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_132));
#line 344 "prog_util.m"
                                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__StateVars_136));
#line 344 "prog_util.m"
                                  MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__DotSVars_137));
#line 344 "prog_util.m"
                                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__ColonSVars_138));
#line 344 "prog_util.m"
                                  MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__SubGoal_130));
#line 344 "prog_util.m"
                                }
#line 338 "prog_util.m"
                              }
#line 271 "prog_util.m"
                            else
#line 271 "prog_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 328 "prog_util.m"
                                {
#line 328 "prog_util.m"
                                  MR_Word parse_tree__prog_util__Context_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 328 "prog_util.m"
                                  MR_Word parse_tree__prog_util__SubGoal0_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 328 "prog_util.m"
                                  MR_Word parse_tree__prog_util__SubGoal_119;
#line 328 "prog_util.m"
                                  MR_Word parse_tree__prog_util__Vars0_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 328 "prog_util.m"
                                  MR_Word parse_tree__prog_util__Vars_121;
#line 328 "prog_util.m"
                                  MR_Word parse_tree__prog_util__StateVars0_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 328 "prog_util.m"
                                  MR_Word parse_tree__prog_util__DotSVars0_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 328 "prog_util.m"
                                  MR_Word parse_tree__prog_util__ColonSVars0_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 328 "prog_util.m"
                                  MR_Word parse_tree__prog_util__StateVars_125;
#line 328 "prog_util.m"
                                  MR_Word parse_tree__prog_util__DotSVars_126;
#line 328 "prog_util.m"
                                  MR_Word parse_tree__prog_util__ColonSVars_127;

#line 329 "prog_util.m"
                                  {
#line 329 "prog_util.m"
                                    parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_120, &parse_tree__prog_util__Vars_121);
                                  }
#line 330 "prog_util.m"
                                  {
#line 330 "prog_util.m"
                                    parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_122, &parse_tree__prog_util__StateVars_125);
                                  }
#line 331 "prog_util.m"
                                  {
#line 331 "prog_util.m"
                                    parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__DotSVars0_123, &parse_tree__prog_util__DotSVars_126);
                                  }
#line 332 "prog_util.m"
                                  {
#line 332 "prog_util.m"
                                    parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__ColonSVars0_124, &parse_tree__prog_util__ColonSVars_127);
                                  }
#line 333 "prog_util.m"
                                  {
#line 333 "prog_util.m"
                                    parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_118, &parse_tree__prog_util__SubGoal_119);
                                  }
#line 334 "prog_util.m"
                                  {
#line 334 "prog_util.m"
                                    MR_Word base;
#line 334 "prog_util.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 334 "prog_util.m"
                                    *parse_tree__prog_util__Goal_8 = base;
#line 334 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 334 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_117));
#line 334 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_121));
#line 334 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__StateVars_125));
#line 334 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__DotSVars_126));
#line 334 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__ColonSVars_127));
#line 334 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__SubGoal_119));
#line 334 "prog_util.m"
                                  }
#line 328 "prog_util.m"
                                }
#line 271 "prog_util.m"
                              else
#line 271 "prog_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 318 "prog_util.m"
                                  {
#line 318 "prog_util.m"
                                    MR_Word parse_tree__prog_util__StateVars0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 318 "prog_util.m"
                                    MR_Word parse_tree__prog_util__DotSVars0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 318 "prog_util.m"
                                    MR_Word parse_tree__prog_util__ColonSVars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 318 "prog_util.m"
                                    MR_Word parse_tree__prog_util__StateVars_23;
#line 318 "prog_util.m"
                                    MR_Word parse_tree__prog_util__DotSVars_24;
#line 318 "prog_util.m"
                                    MR_Word parse_tree__prog_util__ColonSVars_25;
#line 318 "prog_util.m"
                                    MR_Word parse_tree__prog_util__Context_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 318 "prog_util.m"
                                    MR_Word parse_tree__prog_util__SubGoal0_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 318 "prog_util.m"
                                    MR_Word parse_tree__prog_util__SubGoal_114;
#line 318 "prog_util.m"
                                    MR_Word parse_tree__prog_util__Vars0_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 318 "prog_util.m"
                                    MR_Word parse_tree__prog_util__Vars_116;

#line 319 "prog_util.m"
                                    {
#line 319 "prog_util.m"
                                      parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_115, &parse_tree__prog_util__Vars_116);
                                    }
#line 320 "prog_util.m"
                                    {
#line 320 "prog_util.m"
                                      parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_20, &parse_tree__prog_util__StateVars_23);
                                    }
#line 321 "prog_util.m"
                                    {
#line 321 "prog_util.m"
                                      parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__DotSVars0_21, &parse_tree__prog_util__DotSVars_24);
                                    }
#line 322 "prog_util.m"
                                    {
#line 322 "prog_util.m"
                                      parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__ColonSVars0_22, &parse_tree__prog_util__ColonSVars_25);
                                    }
#line 323 "prog_util.m"
                                    {
#line 323 "prog_util.m"
                                      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_113, &parse_tree__prog_util__SubGoal_114);
                                    }
#line 324 "prog_util.m"
                                    {
#line 324 "prog_util.m"
                                      MR_Word base;
#line 324 "prog_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 324 "prog_util.m"
                                      *parse_tree__prog_util__Goal_8 = base;
#line 324 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 324 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_112));
#line 324 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_116));
#line 324 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__StateVars_23));
#line 324 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__DotSVars_24));
#line 324 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__ColonSVars_25));
#line 324 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__SubGoal_114));
#line 324 "prog_util.m"
                                    }
#line 318 "prog_util.m"
                                  }
#line 271 "prog_util.m"
                                else
#line 271 "prog_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 313 "prog_util.m"
                                    {
#line 313 "prog_util.m"
                                      MR_Word parse_tree__prog_util__Purity_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 313 "prog_util.m"
                                      MR_Word parse_tree__prog_util__Context_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 313 "prog_util.m"
                                      MR_Word parse_tree__prog_util__SubGoal0_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 313 "prog_util.m"
                                      MR_Word parse_tree__prog_util__SubGoal_111;

#line 314 "prog_util.m"
                                      {
#line 314 "prog_util.m"
                                        parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_110, &parse_tree__prog_util__SubGoal_111);
                                      }
#line 315 "prog_util.m"
                                      {
#line 315 "prog_util.m"
                                        MR_Word base;
#line 315 "prog_util.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 315 "prog_util.m"
                                        *parse_tree__prog_util__Goal_8 = base;
#line 315 "prog_util.m"
                                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 315 "prog_util.m"
                                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_109));
#line 315 "prog_util.m"
                                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Purity_19));
#line 315 "prog_util.m"
                                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_111));
#line 315 "prog_util.m"
                                      }
#line 313 "prog_util.m"
                                    }
#line 271 "prog_util.m"
                                  else
#line 271 "prog_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 352 "prog_util.m"
                                      {
#line 352 "prog_util.m"
                                        MR_Word parse_tree__prog_util__Var0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 352 "prog_util.m"
                                        MR_Word parse_tree__prog_util__Var_28;
#line 352 "prog_util.m"
                                        MR_Word parse_tree__prog_util__Context_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 352 "prog_util.m"
                                        MR_Word parse_tree__prog_util__SubGoal0_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 352 "prog_util.m"
                                        MR_Word parse_tree__prog_util__SubGoal_144;

#line 353 "prog_util.m"
                                        {
#line 353 "prog_util.m"
                                          parse_tree__prog_util__rename_in_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Var0_27, &parse_tree__prog_util__Var_28);
                                        }
#line 354 "prog_util.m"
                                        {
#line 354 "prog_util.m"
                                          parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_143, &parse_tree__prog_util__SubGoal_144);
                                        }
#line 355 "prog_util.m"
                                        {
#line 355 "prog_util.m"
                                          MR_Word base;
#line 355 "prog_util.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 355 "prog_util.m"
                                          *parse_tree__prog_util__Goal_8 = base;
#line 355 "prog_util.m"
                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 355 "prog_util.m"
                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_142));
#line 355 "prog_util.m"
                                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Var_28));
#line 355 "prog_util.m"
                                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_144));
#line 355 "prog_util.m"
                                        }
#line 352 "prog_util.m"
                                      }
#line 271 "prog_util.m"
                                    else
#line 271 "prog_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 348 "prog_util.m"
                                        {
#line 348 "prog_util.m"
                                          MR_Word parse_tree__prog_util__Detism_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 348 "prog_util.m"
                                          MR_Word parse_tree__prog_util__Context_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 348 "prog_util.m"
                                          MR_Word parse_tree__prog_util__SubGoal0_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 348 "prog_util.m"
                                          MR_Word parse_tree__prog_util__SubGoal_141;

#line 349 "prog_util.m"
                                          {
#line 349 "prog_util.m"
                                            parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_140, &parse_tree__prog_util__SubGoal_141);
                                          }
#line 350 "prog_util.m"
                                          {
#line 350 "prog_util.m"
                                            MR_Word base;
#line 350 "prog_util.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 350 "prog_util.m"
                                            *parse_tree__prog_util__Goal_8 = base;
#line 350 "prog_util.m"
                                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 350 "prog_util.m"
                                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_139));
#line 350 "prog_util.m"
                                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Detism_26));
#line 350 "prog_util.m"
                                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_141));
#line 350 "prog_util.m"
                                          }
#line 348 "prog_util.m"
                                        }
#line 271 "prog_util.m"
                                      else
#line 271 "prog_util.m"
                                        if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 358 "prog_util.m"
                                          {
#line 358 "prog_util.m"
                                            MR_Word parse_tree__prog_util__Context_145 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 358 "prog_util.m"
                                            MR_Word parse_tree__prog_util__SubGoal0_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 358 "prog_util.m"
                                            MR_Word parse_tree__prog_util__SubGoal_147;
#line 358 "prog_util.m"
                                            MR_Word parse_tree__prog_util__Detism_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 358 "prog_util.m"
                                            MR_Word parse_tree__prog_util__Var0_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 358 "prog_util.m"
                                            MR_Word parse_tree__prog_util__Var_150;

#line 359 "prog_util.m"
                                            {
#line 359 "prog_util.m"
                                              parse_tree__prog_util__rename_in_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Var0_149, &parse_tree__prog_util__Var_150);
                                            }
#line 360 "prog_util.m"
                                            {
#line 360 "prog_util.m"
                                              parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_146, &parse_tree__prog_util__SubGoal_147);
                                            }
#line 361 "prog_util.m"
                                            {
#line 361 "prog_util.m"
                                              MR_Word base;
#line 361 "prog_util.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 361 "prog_util.m"
                                              *parse_tree__prog_util__Goal_8 = base;
#line 361 "prog_util.m"
                                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 361 "prog_util.m"
                                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_145));
#line 361 "prog_util.m"
                                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Var_150));
#line 361 "prog_util.m"
                                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__Detism_148));
#line 361 "prog_util.m"
                                              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__SubGoal_147));
#line 361 "prog_util.m"
                                            }
#line 358 "prog_util.m"
                                          }
#line 271 "prog_util.m"
                                        else
#line 271 "prog_util.m"
                                          if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 293 "prog_util.m"
                                            {
#line 293 "prog_util.m"
                                              MR_Word parse_tree__prog_util__Vars0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 293 "prog_util.m"
                                              MR_Word parse_tree__prog_util__Vars_18;
#line 293 "prog_util.m"
                                              MR_Word parse_tree__prog_util__Context_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 293 "prog_util.m"
                                              MR_Word parse_tree__prog_util__SubGoal0_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 293 "prog_util.m"
                                              MR_Word parse_tree__prog_util__SubGoal_93;

#line 294 "prog_util.m"
                                              {
#line 294 "prog_util.m"
                                                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_17, &parse_tree__prog_util__Vars_18);
                                              }
#line 295 "prog_util.m"
                                              {
#line 295 "prog_util.m"
                                                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_92, &parse_tree__prog_util__SubGoal_93);
                                              }
#line 296 "prog_util.m"
                                              {
#line 296 "prog_util.m"
                                                MR_Word base;
#line 296 "prog_util.m"
                                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 296 "prog_util.m"
                                                *parse_tree__prog_util__Goal_8 = base;
#line 296 "prog_util.m"
                                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 296 "prog_util.m"
                                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_91));
#line 296 "prog_util.m"
                                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_18));
#line 296 "prog_util.m"
                                                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_93));
#line 296 "prog_util.m"
                                              }
#line 293 "prog_util.m"
                                            }
#line 271 "prog_util.m"
                                          else
#line 271 "prog_util.m"
                                            if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 298 "prog_util.m"
                                              {
#line 298 "prog_util.m"
                                                MR_Word parse_tree__prog_util__Context_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 298 "prog_util.m"
                                                MR_Word parse_tree__prog_util__SubGoal0_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 298 "prog_util.m"
                                                MR_Word parse_tree__prog_util__SubGoal_96;
#line 298 "prog_util.m"
                                                MR_Word parse_tree__prog_util__Vars0_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 298 "prog_util.m"
                                                MR_Word parse_tree__prog_util__Vars_98;

#line 299 "prog_util.m"
                                                {
#line 299 "prog_util.m"
                                                  parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_97, &parse_tree__prog_util__Vars_98);
                                                }
#line 300 "prog_util.m"
                                                {
#line 300 "prog_util.m"
                                                  parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_95, &parse_tree__prog_util__SubGoal_96);
                                                }
#line 301 "prog_util.m"
                                                {
#line 301 "prog_util.m"
                                                  MR_Word base;
#line 301 "prog_util.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 301 "prog_util.m"
                                                  *parse_tree__prog_util__Goal_8 = base;
#line 301 "prog_util.m"
                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 301 "prog_util.m"
                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_94));
#line 301 "prog_util.m"
                                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_98));
#line 301 "prog_util.m"
                                                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_96));
#line 301 "prog_util.m"
                                                }
#line 298 "prog_util.m"
                                              }
#line 271 "prog_util.m"
                                            else
#line 271 "prog_util.m"
                                              if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 365 "prog_util.m"
                                                {
#line 365 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__TypeCtorInfo_188_188;
#line 365 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__CompileTime_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 365 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__RunTime_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 365 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__MaybeIO0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 365 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__Mutables0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 365 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__MaybeIO_33;
#line 365 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__Mutables_36;
#line 365 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__V_78_78;
#line 365 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__Context_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 365 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__SubGoal0_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 365 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__SubGoal_153;

#line 369 "prog_util.m"
                                                  if ((parse_tree__prog_util__MaybeIO0_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 368 "prog_util.m"
                                                    parse_tree__prog_util__MaybeIO_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 369 "prog_util.m"
                                                  else
#line 370 "prog_util.m"
                                                    {
#line 370 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__IOStateVar0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeIO0_31, (MR_Integer) 0)));
#line 370 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__IOStateVar_35;

#line 371 "prog_util.m"
                                                      {
#line 371 "prog_util.m"
                                                        parse_tree__prog_util__rename_in_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__IOStateVar0_34, &parse_tree__prog_util__IOStateVar_35);
                                                      }
#line 372 "prog_util.m"
                                                      {
#line 372 "prog_util.m"
                                                        parse_tree__prog_util__MaybeIO_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 372 "prog_util.m"
                                                        MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeIO_33, 0) = ((MR_Box) (parse_tree__prog_util__IOStateVar_35));
#line 372 "prog_util.m"
                                                      }
#line 370 "prog_util.m"
                                                    }
#line 374 "prog_util.m"
                                                  {
#line 374 "prog_util.m"
                                                    parse_tree__prog_util__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 374 "prog_util.m"
                                                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_78_78, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[2]));
#line 374 "prog_util.m"
                                                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_78_78, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_3));
#line 374 "prog_util.m"
                                                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 374 "prog_util.m"
                                                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_78_78, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
#line 374 "prog_util.m"
                                                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_78_78, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 374 "prog_util.m"
                                                  }
#line 6149 "parse_tree.prog_util.c"
                                                  parse_tree__prog_util__TypeCtorInfo_188_188 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0;
#line 374 "prog_util.m"
                                                  {
#line 374 "prog_util.m"
                                                    mercury__list__map_3_p_0(parse_tree__prog_util__TypeCtorInfo_188_188, parse_tree__prog_util__TypeCtorInfo_188_188, parse_tree__prog_util__V_78_78, parse_tree__prog_util__Mutables0_32, &parse_tree__prog_util__Mutables_36);
                                                  }
#line 376 "prog_util.m"
                                                  {
#line 376 "prog_util.m"
                                                    parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_152, &parse_tree__prog_util__SubGoal_153);
                                                  }
#line 377 "prog_util.m"
                                                  {
#line 377 "prog_util.m"
                                                    MR_Word base;
#line 377 "prog_util.m"
                                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 377 "prog_util.m"
                                                    *parse_tree__prog_util__Goal_8 = base;
#line 377 "prog_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 377 "prog_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_151));
#line 377 "prog_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__CompileTime_29));
#line 377 "prog_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__RunTime_30));
#line 377 "prog_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__MaybeIO_33));
#line 377 "prog_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__Mutables_36));
#line 377 "prog_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__SubGoal_153));
#line 377 "prog_util.m"
                                                  }
#line 365 "prog_util.m"
                                                }
#line 271 "prog_util.m"
                                              else
#line 271 "prog_util.m"
                                                if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 399 "prog_util.m"
                                                  {
#line 399 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__TypeCtorInfo_197_197;
#line 399 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__Then0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 399 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__MaybeElse0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 399 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__Catches0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 399 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__MaybeCatchAny0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 7)));
#line 399 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__Then_53;
#line 399 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__MaybeElse_56;
#line 399 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__Catches_57;
#line 399 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__MaybeCatchAny_62;
#line 399 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__V_73_73;
#line 399 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__Context_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 399 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__SubGoal0_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 399 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__SubGoal_157;
#line 399 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__MaybeIO0_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 399 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__MaybeIO_159;

#line 400 "prog_util.m"
                                                    {
#line 400 "prog_util.m"
                                                      parse_tree__prog_util__rename_in_maybe_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__MaybeIO0_158, &parse_tree__prog_util__MaybeIO_159);
                                                    }
#line 401 "prog_util.m"
                                                    {
#line 401 "prog_util.m"
                                                      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_156, &parse_tree__prog_util__SubGoal_157);
                                                    }
#line 402 "prog_util.m"
                                                    {
#line 402 "prog_util.m"
                                                      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Then0_49, &parse_tree__prog_util__Then_53);
                                                    }
#line 407 "prog_util.m"
                                                    if ((parse_tree__prog_util__MaybeElse0_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 409 "prog_util.m"
                                                      parse_tree__prog_util__MaybeElse_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 407 "prog_util.m"
                                                    else
#line 404 "prog_util.m"
                                                      {
#line 404 "prog_util.m"
                                                        MR_Word parse_tree__prog_util__Else0_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeElse0_50, (MR_Integer) 0)));
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
                                                      parse_tree__prog_util__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 411 "prog_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_73_73, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[3]));
#line 411 "prog_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_73_73, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_4));
#line 411 "prog_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_73_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 411 "prog_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_73_73, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
#line 411 "prog_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_73_73, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 411 "prog_util.m"
                                                    }
#line 6283 "parse_tree.prog_util.c"
                                                    parse_tree__prog_util__TypeCtorInfo_197_197 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0;
#line 411 "prog_util.m"
                                                    {
#line 411 "prog_util.m"
                                                      mercury__list__map_3_p_0(parse_tree__prog_util__TypeCtorInfo_197_197, parse_tree__prog_util__TypeCtorInfo_197_197, parse_tree__prog_util__V_73_73, parse_tree__prog_util__Catches0_51, &parse_tree__prog_util__Catches_57);
                                                    }
#line 417 "prog_util.m"
                                                    if ((parse_tree__prog_util__MaybeCatchAny0_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
                                                        MR_Word parse_tree__prog_util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeCatchAny0_52, (MR_Integer) 0)));
#line 413 "prog_util.m"
                                                        MR_Word parse_tree__prog_util__V_75_75;

#line 413 "prog_util.m"
                                                        parse_tree__prog_util__CatchAnyVar0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_74_74, (MR_Integer) 0)));
#line 413 "prog_util.m"
                                                        parse_tree__prog_util__CatchAnyGoal0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_74_74, (MR_Integer) 1)));
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
                                                          parse_tree__prog_util__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 416 "prog_util.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_75_75, 0) = ((MR_Box) (parse_tree__prog_util__CatchAnyVar_60));
#line 416 "prog_util.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_75_75, 1) = ((MR_Box) (parse_tree__prog_util__CatchAnyGoal_61));
#line 416 "prog_util.m"
                                                        }
#line 416 "prog_util.m"
                                                        {
#line 416 "prog_util.m"
                                                          parse_tree__prog_util__MaybeCatchAny_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 416 "prog_util.m"
                                                          MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeCatchAny_62, 0) = ((MR_Box) (parse_tree__prog_util__V_75_75));
#line 416 "prog_util.m"
                                                        }
#line 413 "prog_util.m"
                                                      }
#line 421 "prog_util.m"
                                                    {
#line 421 "prog_util.m"
                                                      MR_Word base;
#line 421 "prog_util.m"
                                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 421 "prog_util.m"
                                                      *parse_tree__prog_util__Goal_8 = base;
#line 421 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 421 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_155));
#line 421 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__MaybeIO_159));
#line 421 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_157));
#line 421 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__Then_53));
#line 421 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__MaybeElse_56));
#line 421 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__Catches_57));
#line 421 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (parse_tree__prog_util__MaybeCatchAny_62));
#line 421 "prog_util.m"
                                                    }
#line 399 "prog_util.m"
                                                  }
#line 271 "prog_util.m"
                                                else
#line 271 "prog_util.m"
                                                  if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 452 "prog_util.m"
                                                    {
#line 452 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__TypeCtorInfo_200_200 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 452 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__TermA0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 452 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__TermB0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 452 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__TermA_71;
#line 452 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__TermB_72;
#line 452 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__Context_184 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 452 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__Purity_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));

#line 453 "prog_util.m"
                                                      {
#line 453 "prog_util.m"
                                                        mercury__term__rename_4_p_0(parse_tree__prog_util__TypeCtorInfo_200_200, parse_tree__prog_util__TermA0_69, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, &parse_tree__prog_util__TermA_71);
                                                      }
#line 454 "prog_util.m"
                                                      {
#line 454 "prog_util.m"
                                                        mercury__term__rename_4_p_0(parse_tree__prog_util__TypeCtorInfo_200_200, parse_tree__prog_util__TermB0_70, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, &parse_tree__prog_util__TermB_72);
                                                      }
#line 455 "prog_util.m"
                                                      {
#line 455 "prog_util.m"
                                                        MR_Word base;
#line 455 "prog_util.m"
                                                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 455 "prog_util.m"
                                                        *parse_tree__prog_util__Goal_8 = base;
#line 455 "prog_util.m"
                                                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 455 "prog_util.m"
                                                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_184));
#line 455 "prog_util.m"
                                                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__TermA_71));
#line 455 "prog_util.m"
                                                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__TermB_72));
#line 455 "prog_util.m"
                                                        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__Purity_185));
#line 455 "prog_util.m"
                                                      }
#line 452 "prog_util.m"
                                                    }
#line 271 "prog_util.m"
                                                  else
#line 272 "prog_util.m"
                                                    *parse_tree__prog_util__Goal_8 = parse_tree__prog_util__Goal0_7;
#line 271 "prog_util.m"
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
#line 524 "prog_util.m"
  {
#line 524 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 524 "prog_util.m"
    MR_Word parse_tree__prog_util__V_15_15;
#line 524 "prog_util.m"
    MR_Word parse_tree__prog_util__V_16_16;

#line 525 "prog_util.m"
    {
#line 525 "prog_util.m"
      parse_tree__prog_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 525 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_15_15, 0) = ((MR_Box) (parse_tree__prog_util__PredOrFunc_10));
#line 525 "prog_util.m"
    }
#line 526 "prog_util.m"
    {
#line 526 "prog_util.m"
      parse_tree__prog_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 526 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_util__Line_12));
#line 526 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_16_16, 1) = ((MR_Box) (parse_tree__prog_util__Counter_13));
#line 526 "prog_util.m"
    }
#line 525 "prog_util.m"
    {
#line 525 "prog_util.m"
      parse_tree__prog_util__make_pred_name_6_p_0(parse_tree__prog_util__ModuleName_8, parse_tree__prog_util__Prefix_9, parse_tree__prog_util__V_15_15, parse_tree__prog_util__PredName_11, parse_tree__prog_util__V_16_16, parse_tree__prog_util__SymName_14);
#line 525 "prog_util.m"
      return;
    }
#line 524 "prog_util.m"
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
#line 529 "prog_util.m"
  {
#line 529 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 529 "prog_util.m"
    MR_String parse_tree__prog_util__PFS_14;
#line 529 "prog_util.m"
    MR_String parse_tree__prog_util__PredIdStr_17;
#line 529 "prog_util.m"
    MR_String parse_tree__prog_util__Name_32;
#line 529 "prog_util.m"
    MR_String parse_tree__prog_util__V_93_93;
#line 529 "prog_util.m"
    MR_Word parse_tree__prog_util__V_99_99;
#line 529 "prog_util.m"
    MR_String parse_tree__prog_util__V_101_101;
#line 529 "prog_util.m"
    MR_String parse_tree__prog_util__V_102_102;
#line 529 "prog_util.m"
    MR_String parse_tree__prog_util__V_109_109;
#line 529 "prog_util.m"
    MR_String parse_tree__prog_util__V_111_111;
#line 529 "prog_util.m"
    MR_String parse_tree__prog_util__V_112_112;
#line 529 "prog_util.m"
    MR_String parse_tree__prog_util__V_119_119;
#line 529 "prog_util.m"
    MR_String parse_tree__prog_util__V_121_121;
#line 529 "prog_util.m"
    MR_String parse_tree__prog_util__V_122_122;

#line 533 "prog_util.m"
    if ((parse_tree__prog_util__MaybePredOrFunc_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 535 "prog_util.m"
      parse_tree__prog_util__PFS_14 = (MR_String) "pred_or_func";
#line 533 "prog_util.m"
    else
#line 531 "prog_util.m"
      {
#line 531 "prog_util.m"
        MR_Word parse_tree__prog_util__PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybePredOrFunc_9, (MR_Integer) 0)));

#line 532 "prog_util.m"
        {
#line 532 "prog_util.m"
          parse_tree__prog_util__PFS_14 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(parse_tree__prog_util__PredOrFunc_13);
        }
#line 531 "prog_util.m"
      }
#line 540 "prog_util.m"
    if ((parse_tree__prog_util__NewPredId_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "prog_util.m"
      parse_tree__prog_util__PredIdStr_17 = (MR_String) "";
#line 540 "prog_util.m"
    else
#line 540 "prog_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_util__NewPredId_11)) == (MR_mktag((MR_Integer) 1))))
#line 538 "prog_util.m"
        {
#line 538 "prog_util.m"
          MR_Integer parse_tree__prog_util__Line_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)));
#line 538 "prog_util.m"
          MR_Integer parse_tree__prog_util__Counter_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));
#line 538 "prog_util.m"
          MR_String parse_tree__prog_util__V_77_77;
#line 538 "prog_util.m"
          MR_Word parse_tree__prog_util__V_83_83 = (MR_Word) &parse_tree__prog_util_scalar_common_3[1];
#line 538 "prog_util.m"
          MR_String parse_tree__prog_util__V_85_85;
#line 538 "prog_util.m"
          MR_String parse_tree__prog_util__V_86_86;

#line 539 "prog_util.m"
          {
#line 539 "prog_util.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_83_83, parse_tree__prog_util__Counter_16, &parse_tree__prog_util__V_77_77);
          }
#line 539 "prog_util.m"
          {
#line 539 "prog_util.m"
            parse_tree__prog_util__V_85_85 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__V_77_77);
          }
#line 539 "prog_util.m"
          {
#line 539 "prog_util.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_83_83, parse_tree__prog_util__Line_15, &parse_tree__prog_util__V_86_86);
          }
#line 539 "prog_util.m"
          {
#line 539 "prog_util.m"
            parse_tree__prog_util__PredIdStr_17 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__V_86_86, parse_tree__prog_util__V_85_85);
          }
#line 538 "prog_util.m"
        }
#line 540 "prog_util.m"
      else
#line 540 "prog_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_util__NewPredId_11)) == (MR_mktag((MR_Integer) 2))))
#line 541 "prog_util.m"
          {
#line 541 "prog_util.m"
            MR_Word parse_tree__prog_util__VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)));
#line 541 "prog_util.m"
            MR_Word parse_tree__prog_util__TypeSubst_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

#line 548 "prog_util.m"
            {
#line 548 "prog_util.m"
              parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(parse_tree__prog_util__VarSet_18, parse_tree__prog_util__TypeSubst_19, &parse_tree__prog_util__PredIdStr_17);
            }
#line 541 "prog_util.m"
          }
#line 540 "prog_util.m"
        else
#line 540 "prog_util.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_util__NewPredId_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 560 "prog_util.m"
            {
#line 560 "prog_util.m"
              MR_Integer parse_tree__prog_util__Distance_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

#line 561 "prog_util.m"
              {
#line 561 "prog_util.m"
                mercury__string__int_to_string_2_p_0(parse_tree__prog_util__Distance_31, &parse_tree__prog_util__PredIdStr_17);
              }
#line 560 "prog_util.m"
            }
#line 540 "prog_util.m"
          else
#line 540 "prog_util.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_util__NewPredId_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 552 "prog_util.m"
              {
#line 552 "prog_util.m"
                MR_Word parse_tree__prog_util__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

#line 553 "prog_util.m"
                {
#line 553 "prog_util.m"
                  parse_tree__prog_util__list_to_string__ho1_3_p_0(parse_tree__prog_util__Args_27, &parse_tree__prog_util__PredIdStr_17);
                }
#line 552 "prog_util.m"
              }
#line 540 "prog_util.m"
            else
#line 540 "prog_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_util__NewPredId_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 555 "prog_util.m"
                {
#line 555 "prog_util.m"
                  MR_Integer parse_tree__prog_util__ModeNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));
#line 555 "prog_util.m"
                  MR_String parse_tree__prog_util__ModeStr_29;
#line 555 "prog_util.m"
                  MR_String parse_tree__prog_util__ArgsStr_30;
#line 555 "prog_util.m"
                  MR_String parse_tree__prog_util__V_34_34;
#line 555 "prog_util.m"
                  MR_Word parse_tree__prog_util__Args_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 2)));

#line 556 "prog_util.m"
                  {
#line 556 "prog_util.m"
                    mercury__string__int_to_string_2_p_0(parse_tree__prog_util__ModeNum_28, &parse_tree__prog_util__ModeStr_29);
                  }
#line 557 "prog_util.m"
                  {
#line 557 "prog_util.m"
                    parse_tree__prog_util__list_to_string__ho1_3_p_0(parse_tree__prog_util__Args_63, &parse_tree__prog_util__ArgsStr_30);
                  }
#line 558 "prog_util.m"
                  {
#line 558 "prog_util.m"
                    parse_tree__prog_util__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__ArgsStr_30);
                  }
#line 558 "prog_util.m"
                  {
#line 558 "prog_util.m"
                    parse_tree__prog_util__PredIdStr_17 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__ModeStr_29, parse_tree__prog_util__V_34_34);
                  }
#line 555 "prog_util.m"
                }
#line 540 "prog_util.m"
              else
#line 552 "prog_util.m"
                {
#line 552 "prog_util.m"
                  MR_Word parse_tree__prog_util__Args_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

#line 553 "prog_util.m"
                  {
#line 553 "prog_util.m"
                    parse_tree__prog_util__list_to_string__ho1_3_p_0(parse_tree__prog_util__Args_74, &parse_tree__prog_util__PredIdStr_17);
                  }
#line 552 "prog_util.m"
                }
#line 6811 "parse_tree.prog_util.c"
    parse_tree__prog_util__V_99_99 = (MR_Word) &parse_tree__prog_util_scalar_common_3[1];
#line 568 "prog_util.m"
    {
#line 568 "prog_util.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_99_99, parse_tree__prog_util__PredIdStr_17, &parse_tree__prog_util__V_93_93);
    }
#line 567 "prog_util.m"
    {
#line 567 "prog_util.m"
      parse_tree__prog_util__V_101_101 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__V_93_93);
    }
#line 568 "prog_util.m"
    {
#line 568 "prog_util.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_99_99, parse_tree__prog_util__PredName_10, &parse_tree__prog_util__V_102_102);
    }
#line 567 "prog_util.m"
    {
#line 567 "prog_util.m"
      parse_tree__prog_util__V_109_109 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__V_102_102, parse_tree__prog_util__V_101_101);
    }
#line 567 "prog_util.m"
    {
#line 567 "prog_util.m"
      parse_tree__prog_util__V_111_111 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__V_109_109);
    }
#line 568 "prog_util.m"
    {
#line 568 "prog_util.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_99_99, parse_tree__prog_util__PFS_14, &parse_tree__prog_util__V_112_112);
    }
#line 567 "prog_util.m"
    {
#line 567 "prog_util.m"
      parse_tree__prog_util__V_119_119 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__V_112_112, parse_tree__prog_util__V_111_111);
    }
#line 567 "prog_util.m"
    {
#line 567 "prog_util.m"
      parse_tree__prog_util__V_121_121 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__V_119_119);
    }
#line 568 "prog_util.m"
    {
#line 568 "prog_util.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_99_99, parse_tree__prog_util__Prefix_8, &parse_tree__prog_util__V_122_122);
    }
#line 567 "prog_util.m"
    {
#line 567 "prog_util.m"
      parse_tree__prog_util__Name_32 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__V_122_122, parse_tree__prog_util__V_121_121);
    }
#line 569 "prog_util.m"
    {
#line 569 "prog_util.m"
      MR_Word base;
#line 569 "prog_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "prog_util.m"
      *parse_tree__prog_util__SymName_12 = base;
#line 569 "prog_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__ModuleName_7));
#line 569 "prog_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Name_32));
#line 569 "prog_util.m"
    }
#line 529 "prog_util.m"
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
