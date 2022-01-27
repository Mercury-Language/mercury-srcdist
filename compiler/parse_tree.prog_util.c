/*
** Automatically generated from `prog_util.m'
** by the Mercury compiler,
** version rotd-2015-02-04
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
#include "mdbcomp.builtin_modules.mih"
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




#line 140 "parse_tree.prog_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

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

#line 586 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(
#line 586 "prog_util.m"
  MR_Word parse_tree__prog_util__V_23_23,
#line 586 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 586 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
#line 586 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4);

#line 579 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(
#line 579 "prog_util.m"
  MR_Word parse_tree__prog_util__V_14_14,
#line 579 "prog_util.m"
  MR_Word parse_tree__prog_util__List_5,
#line 579 "prog_util.m"
  MR_String * parse_tree__prog_util__String_6);

#line 786 "prog_util.m"
static MR_Word MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(
#line 786 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 786 "prog_util.m"
  MR_Word parse_tree__prog_util__Term_2,
#line 786 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_3);

#line 586 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__list_to_string_2__ho4_4_p_0(
#line 586 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 586 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
#line 586 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4);

#line 579 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__list_to_string__ho1_3_p_0(
#line 579 "prog_util.m"
  MR_Word parse_tree__prog_util__List_5,
#line 579 "prog_util.m"
  MR_String * parse_tree__prog_util__String_6);

#line 550 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__550__1_3_p_0(
#line 550 "prog_util.m"
  MR_Word parse_tree__prog_util__VarSet_18,
#line 550 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_37,
#line 550 "prog_util.m"
  MR_String * parse_tree__prog_util__HeadVar__3_38);

#line 812 "prog_util.m"
static MR_Word MR_CALL 
parse_tree__prog_util__goal_list_to_conj_2_3_f_0(
#line 812 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_1,
#line 812 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 812 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3);

#line 705 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__make_n_fresh_vars_2_6_p_0(
#line 705 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_23,
#line 705 "prog_util.m"
  MR_String parse_tree__prog_util__BaseName_7,
#line 705 "prog_util.m"
  MR_Integer parse_tree__prog_util__N_8,
#line 705 "prog_util.m"
  MR_Integer parse_tree__prog_util__Max_9,
#line 705 "prog_util.m"
  MR_Word * parse_tree__prog_util__Vars_10,
#line 705 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_0_17,
#line 705 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_VarSet_18);

#line 520 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_catch_expr_4_p_0(
#line 520 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 520 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 520 "prog_util.m"
  MR_Word parse_tree__prog_util__Catch0_7,
#line 520 "prog_util.m"
  MR_Word * parse_tree__prog_util__Catch_8);

#line 507 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_maybe_var_4_p_0(
#line 507 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 507 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 507 "prog_util.m"
  MR_Word parse_tree__prog_util__MaybeVar0_7,
#line 507 "prog_util.m"
  MR_Word * parse_tree__prog_util__MaybeVar_8);

#line 497 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_var_4_p_0(
#line 497 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 497 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 497 "prog_util.m"
  MR_Word parse_tree__prog_util__Var0_7,
#line 497 "prog_util.m"
  MR_Word * parse_tree__prog_util__Var_8);

#line 489 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_vars_4_p_0(
#line 489 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_1,
#line 489 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_2,
#line 489 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3,
#line 489 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__4_4);

#line 481 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(
#line 481 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 481 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 481 "prog_util.m"
  MR_Word parse_tree__prog_util__TMV0_7,
#line 481 "prog_util.m"
  MR_Word * parse_tree__prog_util__TMV_8);

#line 466 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(
#line 466 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 466 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 466 "prog_util.m"
  MR_Word parse_tree__prog_util__Comp0_7,
#line 466 "prog_util.m"
  MR_Word * parse_tree__prog_util__Comp_8);

#line 251 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__split_types_and_modes_2_5_p_0(
#line 251 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 251 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 251 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__3_3,
#line 251 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__4_4,
#line 251 "prog_util.m"
  MR_Word * parse_tree__prog_util__Result_5);

#line 419 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_4(
#line 419 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 419 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 419 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2);

#line 382 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_3(
#line 382 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 382 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 382 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2);

#line 402 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_2(
#line 402 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 402 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 402 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2);

#line 397 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_1(
#line 397 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 397 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 397 "prog_util.m"
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



#line 626 "parse_tree.prog_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 634 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 642 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__prog_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 650 "parse_tree.prog_util.c"
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

#line 671 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 677 "parse_tree.prog_util.c"
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

#line 692 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 700 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 708 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_util__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 717 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_util__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 725 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_util__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 731 "parse_tree.prog_util.c"
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

#line 746 "parse_tree.prog_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 754 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 759 "parse_tree.prog_util.c"
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

#line 774 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 779 "parse_tree.prog_util.c"
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

#line 794 "parse_tree.prog_util.c"
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

#line 809 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_5[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_util__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 815 "parse_tree.prog_util.c"
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

#line 830 "parse_tree.prog_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_util__parse_tree__prog_util__field_types_new_pred_id_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 835 "parse_tree.prog_util.c"
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

#line 850 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_0[1] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_4
};

#line 855 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_1[1] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_0
};

#line 860 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_2[1] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_1
};

#line 865 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_stag_ordered_new_pred_id_0_3[4] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_2,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_3,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_5,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_6
};

#line 873 "parse_tree.prog_util.c"
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

#line 897 "parse_tree.prog_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_util__parse_tree__prog_util__du_name_ordered_new_pred_id_0[7] = {
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_0,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_6,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_3,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_4,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_5,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_1,
  &parse_tree__prog_util__parse_tree__prog_util__du_functor_desc_new_pred_id_0_2
};

#line 908 "parse_tree.prog_util.c"
static const MR_Integer parse_tree__prog_util__parse_tree__prog_util__functor_number_map_new_pred_id_0[7] = {
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1
};

#line 919 "parse_tree.prog_util.c"
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

#line 940 "parse_tree.prog_util.c"
static MR_bool MR_CALL 
parse_tree__prog_util____Unify____maybe_modes_0_0_10001(
#line 943 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 945 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2)
#line 947 "parse_tree.prog_util.c"
{
#line 949 "parse_tree.prog_util.c"
  {
#line 951 "parse_tree.prog_util.c"
    MR_bool parse_tree__prog_util__succeeded;

#line 954 "parse_tree.prog_util.c"
    {
#line 956 "parse_tree.prog_util.c"
      parse_tree__prog_util__succeeded = parse_tree__prog_util____Unify____maybe_modes_0_0(((MR_Word) parse_tree__prog_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_util__wrapper_arg_2));
    }
#line 959 "parse_tree.prog_util.c"
    return parse_tree__prog_util__succeeded;
#line 961 "parse_tree.prog_util.c"
  }
#line 963 "parse_tree.prog_util.c"
}

#line 966 "parse_tree.prog_util.c"
static void MR_CALL 
parse_tree__prog_util____Compare____maybe_modes_0_0_10001(
#line 969 "parse_tree.prog_util.c"
  MR_Box * parse_tree__prog_util__wrapper_arg_1,
#line 971 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2,
#line 973 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_3)
#line 975 "parse_tree.prog_util.c"
{
#line 977 "parse_tree.prog_util.c"
  {
#line 979 "parse_tree.prog_util.c"
    MR_Word parse_tree__prog_util__conv0_HeadVar__1_1;

#line 982 "parse_tree.prog_util.c"
    {
#line 984 "parse_tree.prog_util.c"
      parse_tree__prog_util____Compare____maybe_modes_0_0(&parse_tree__prog_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_util__wrapper_arg_3));
    }
#line 987 "parse_tree.prog_util.c"
    *parse_tree__prog_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_util__conv0_HeadVar__1_1));
#line 989 "parse_tree.prog_util.c"
  }
#line 991 "parse_tree.prog_util.c"
}

#line 994 "parse_tree.prog_util.c"
static MR_bool MR_CALL 
parse_tree__prog_util____Unify____new_pred_id_0_0_10001(
#line 997 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 999 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2)
#line 1001 "parse_tree.prog_util.c"
{
#line 1003 "parse_tree.prog_util.c"
  {
#line 1005 "parse_tree.prog_util.c"
    MR_bool parse_tree__prog_util__succeeded;

#line 1008 "parse_tree.prog_util.c"
    {
#line 1010 "parse_tree.prog_util.c"
      parse_tree__prog_util__succeeded = parse_tree__prog_util____Unify____new_pred_id_0_0(((MR_Word) parse_tree__prog_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_util__wrapper_arg_2));
    }
#line 1013 "parse_tree.prog_util.c"
    return parse_tree__prog_util__succeeded;
#line 1015 "parse_tree.prog_util.c"
  }
#line 1017 "parse_tree.prog_util.c"
}

#line 1020 "parse_tree.prog_util.c"
static void MR_CALL 
parse_tree__prog_util____Compare____new_pred_id_0_0_10001(
#line 1023 "parse_tree.prog_util.c"
  MR_Box * parse_tree__prog_util__wrapper_arg_1,
#line 1025 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_2,
#line 1027 "parse_tree.prog_util.c"
  MR_Box parse_tree__prog_util__wrapper_arg_3)
#line 1029 "parse_tree.prog_util.c"
{
#line 1031 "parse_tree.prog_util.c"
  {
#line 1033 "parse_tree.prog_util.c"
    MR_Word parse_tree__prog_util__conv0_HeadVar__1_1;

#line 1036 "parse_tree.prog_util.c"
    {
#line 1038 "parse_tree.prog_util.c"
      parse_tree__prog_util____Compare____new_pred_id_0_0(&parse_tree__prog_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_util__wrapper_arg_3));
    }
#line 1041 "parse_tree.prog_util.c"
    *parse_tree__prog_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_util__conv0_HeadVar__1_1));
#line 1043 "parse_tree.prog_util.c"
  }
#line 1045 "parse_tree.prog_util.c"
}

#line 586 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(
#line 586 "prog_util.m"
  MR_Word parse_tree__prog_util__V_23_23,
#line 586 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 586 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
#line 586 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4)
#line 586 "prog_util.m"
{
#line 589 "prog_util.m"
  {
#line 589 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 589 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 589 "prog_util.m"
      *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 589 "prog_util.m"
    else
#line 590 "prog_util.m"
      {
#line 590 "prog_util.m"
        MR_Word parse_tree__prog_util__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
#line 590 "prog_util.m"
        MR_Word parse_tree__prog_util__Ts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 590 "prog_util.m"
        MR_String parse_tree__prog_util__String_15;
#line 590 "prog_util.m"
        MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_19;

#line 593 "prog_util.m"
        if ((parse_tree__prog_util__Ts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 592 "prog_util.m"
          parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 593 "prog_util.m"
        else
#line 594 "prog_util.m"
          {
#line 594 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_18;
#line 594 "prog_util.m"
            MR_Word parse_tree__prog_util__T_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 0)));
#line 594 "prog_util.m"
            MR_Word parse_tree__prog_util__Ts_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 1)));
#line 594 "prog_util.m"
            MR_String parse_tree__prog_util__String_34;
#line 594 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_38;

#line 593 "prog_util.m"
            if ((parse_tree__prog_util__Ts_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 592 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 593 "prog_util.m"
            else
#line 594 "prog_util.m"
              {
#line 594 "prog_util.m"
                MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_37;

#line 595 "prog_util.m"
                {
#line 595 "prog_util.m"
                  parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_util__V_23_23, parse_tree__prog_util__Ts_30, parse_tree__prog_util__STATE_VARIABLE_Strings_0_3, &parse_tree__prog_util__STATE_VARIABLE_Strings_18_37);
                }
#line 596 "prog_util.m"
                {
#line 596 "prog_util.m"
                  parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 596 "prog_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 0) = ((MR_Box) ((MR_String) ", "));
#line 596 "prog_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_37));
#line 596 "prog_util.m"
                }
#line 594 "prog_util.m"
              }
#line 598 "prog_util.m"
            {
#line 598 "prog_util.m"
              parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__550__1_3_p_0(parse_tree__prog_util__V_23_23, parse_tree__prog_util__T_29, &parse_tree__prog_util__String_34);
            }
#line 599 "prog_util.m"
            {
#line 599 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 0) = ((MR_Box) (parse_tree__prog_util__String_34));
#line 599 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_38));
#line 599 "prog_util.m"
            }
#line 596 "prog_util.m"
            {
#line 596 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 596 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 0) = ((MR_Box) ((MR_String) ", "));
#line 596 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_18));
#line 596 "prog_util.m"
            }
#line 594 "prog_util.m"
          }
#line 598 "prog_util.m"
        {
#line 598 "prog_util.m"
          parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__550__1_3_p_0(parse_tree__prog_util__V_23_23, parse_tree__prog_util__T_10, &parse_tree__prog_util__String_15);
        }
#line 599 "prog_util.m"
        {
#line 599 "prog_util.m"
          MR_Word base;
#line 599 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "prog_util.m"
          *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = base;
#line 599 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__String_15));
#line 599 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_19));
#line 599 "prog_util.m"
        }
#line 590 "prog_util.m"
      }
#line 589 "prog_util.m"
  }
#line 586 "prog_util.m"
}

#line 579 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(
#line 579 "prog_util.m"
  MR_Word parse_tree__prog_util__V_14_14,
#line 579 "prog_util.m"
  MR_Word parse_tree__prog_util__List_5,
#line 579 "prog_util.m"
  MR_String * parse_tree__prog_util__String_6)
#line 579 "prog_util.m"
{
#line 582 "prog_util.m"
  {
#line 582 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 582 "prog_util.m"
    MR_Word parse_tree__prog_util__Strings_7;
#line 582 "prog_util.m"
    MR_Word parse_tree__prog_util__V_11_11;

#line 583 "prog_util.m"
    {
#line 583 "prog_util.m"
      parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_50_95_95_104_111_51_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_util__V_14_14, parse_tree__prog_util__List_5, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_1[8]), &parse_tree__prog_util__Strings_7);
    }
#line 584 "prog_util.m"
    {
#line 584 "prog_util.m"
      parse_tree__prog_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 0) = ((MR_Box) ((MR_String) "["));
#line 584 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 1) = ((MR_Box) (parse_tree__prog_util__Strings_7));
#line 584 "prog_util.m"
    }
#line 584 "prog_util.m"
    {
#line 584 "prog_util.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_util__V_11_11, parse_tree__prog_util__String_6);
#line 584 "prog_util.m"
      return;
    }
#line 582 "prog_util.m"
  }
#line 579 "prog_util.m"
}

#line 786 "prog_util.m"
static MR_Word MR_CALL 
parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(
#line 786 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 786 "prog_util.m"
  MR_Word parse_tree__prog_util__Term_2,
#line 786 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_3)
#line 786 "prog_util.m"
{
#line 789 "prog_util.m"
  {
#line 789 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 789 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__4_4;

#line 789 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 795 "prog_util.m"
      {
#line 795 "prog_util.m"
        MR_Word parse_tree__prog_util__ModuleNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 795 "prog_util.m"
        MR_String parse_tree__prog_util__ModuleName_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 795 "prog_util.m"
        MR_Word parse_tree__prog_util__V_22_22;
#line 795 "prog_util.m"
        MR_Word parse_tree__prog_util__V_23_23;
#line 795 "prog_util.m"
        MR_Word parse_tree__prog_util__V_24_24;
#line 795 "prog_util.m"
        MR_Word parse_tree__prog_util__V_25_25;
#line 795 "prog_util.m"
        MR_Word parse_tree__prog_util__V_27_27;

#line 800 "prog_util.m"
        {
#line 800 "prog_util.m"
          parse_tree__prog_util__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 800 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_25_25, 0) = ((MR_Box) (parse_tree__prog_util__ModuleName_17));
#line 800 "prog_util.m"
        }
#line 800 "prog_util.m"
        {
#line 800 "prog_util.m"
          parse_tree__prog_util__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 800 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_24_24, 0) = ((MR_Box) (parse_tree__prog_util__V_25_25));
#line 800 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 800 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_24_24, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 800 "prog_util.m"
        }
#line 798 "prog_util.m"
        {
#line 798 "prog_util.m"
          parse_tree__prog_util__V_23_23 = parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(parse_tree__prog_util__ModuleNames_16, parse_tree__prog_util__V_24_24, parse_tree__prog_util__Context_3);
        }
#line 802 "prog_util.m"
        {
#line 802 "prog_util.m"
          parse_tree__prog_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_util__Term_2));
#line 802 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 802 "prog_util.m"
        }
#line 801 "prog_util.m"
        {
#line 801 "prog_util.m"
          parse_tree__prog_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_22_22, 0) = ((MR_Box) (parse_tree__prog_util__V_23_23));
#line 801 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_22_22, 1) = ((MR_Box) (parse_tree__prog_util__V_27_27));
#line 801 "prog_util.m"
        }
#line 796 "prog_util.m"
        {
#line 796 "prog_util.m"
          parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 796 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[0]));
#line 796 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 1) = ((MR_Box) (parse_tree__prog_util__V_22_22));
#line 796 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 796 "prog_util.m"
        }
#line 795 "prog_util.m"
      }
#line 789 "prog_util.m"
    else
#line 789 "prog_util.m"
      {
#line 789 "prog_util.m"
        MR_String parse_tree__prog_util__ModuleName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 789 "prog_util.m"
        MR_Word parse_tree__prog_util__V_10_10;
#line 789 "prog_util.m"
        MR_Word parse_tree__prog_util__V_11_11;
#line 789 "prog_util.m"
        MR_Word parse_tree__prog_util__V_12_12;
#line 789 "prog_util.m"
        MR_Word parse_tree__prog_util__V_14_14;

#line 792 "prog_util.m"
        {
#line 792 "prog_util.m"
          parse_tree__prog_util__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 792 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_12_12, 0) = ((MR_Box) (parse_tree__prog_util__ModuleName_5));
#line 792 "prog_util.m"
        }
#line 792 "prog_util.m"
        {
#line 792 "prog_util.m"
          parse_tree__prog_util__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 792 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_11_11, 0) = ((MR_Box) (parse_tree__prog_util__V_12_12));
#line 792 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 792 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_11_11, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 792 "prog_util.m"
        }
#line 792 "prog_util.m"
        {
#line 792 "prog_util.m"
          parse_tree__prog_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_14_14, 0) = ((MR_Box) (parse_tree__prog_util__Term_2));
#line 792 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 792 "prog_util.m"
        }
#line 792 "prog_util.m"
        {
#line 792 "prog_util.m"
          parse_tree__prog_util__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_10_10, 0) = ((MR_Box) (parse_tree__prog_util__V_11_11));
#line 792 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_10_10, 1) = ((MR_Box) (parse_tree__prog_util__V_14_14));
#line 792 "prog_util.m"
        }
#line 790 "prog_util.m"
        {
#line 790 "prog_util.m"
          parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 790 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[0]));
#line 790 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 1) = ((MR_Box) (parse_tree__prog_util__V_10_10));
#line 790 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 790 "prog_util.m"
        }
#line 789 "prog_util.m"
      }
#line 789 "prog_util.m"
    return parse_tree__prog_util__HeadVar__4_4;
#line 789 "prog_util.m"
  }
#line 786 "prog_util.m"
}

#line 586 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__list_to_string_2__ho4_4_p_0(
#line 586 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 586 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_0_3,
#line 586 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_Strings_4)
#line 586 "prog_util.m"
{
#line 589 "prog_util.m"
  {
#line 589 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 589 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 589 "prog_util.m"
      *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 589 "prog_util.m"
    else
#line 590 "prog_util.m"
      {
#line 590 "prog_util.m"
        MR_Integer parse_tree__prog_util__T_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
#line 590 "prog_util.m"
        MR_Word parse_tree__prog_util__Ts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));
#line 590 "prog_util.m"
        MR_String parse_tree__prog_util__String_15;
#line 590 "prog_util.m"
        MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_19;

#line 593 "prog_util.m"
        if ((parse_tree__prog_util__Ts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 592 "prog_util.m"
          parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 593 "prog_util.m"
        else
#line 594 "prog_util.m"
          {
#line 594 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_18;
#line 594 "prog_util.m"
            MR_Integer parse_tree__prog_util__T_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 0)));
#line 594 "prog_util.m"
            MR_Word parse_tree__prog_util__Ts_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Ts_11, (MR_Integer) 1)));
#line 594 "prog_util.m"
            MR_String parse_tree__prog_util__String_34;
#line 594 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_19_38;

#line 593 "prog_util.m"
            if ((parse_tree__prog_util__Ts_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 592 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = parse_tree__prog_util__STATE_VARIABLE_Strings_0_3;
#line 593 "prog_util.m"
            else
#line 594 "prog_util.m"
              {
#line 594 "prog_util.m"
                MR_Word parse_tree__prog_util__STATE_VARIABLE_Strings_18_37;

#line 595 "prog_util.m"
                {
#line 595 "prog_util.m"
                  parse_tree__prog_util__list_to_string_2__ho4_4_p_0(parse_tree__prog_util__Ts_30, parse_tree__prog_util__STATE_VARIABLE_Strings_0_3, &parse_tree__prog_util__STATE_VARIABLE_Strings_18_37);
                }
#line 596 "prog_util.m"
                {
#line 596 "prog_util.m"
                  parse_tree__prog_util__STATE_VARIABLE_Strings_19_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 596 "prog_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 0) = ((MR_Box) ((MR_String) ", "));
#line 596 "prog_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_38, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_37));
#line 596 "prog_util.m"
                }
#line 594 "prog_util.m"
              }
#line 598 "prog_util.m"
            {
#line 598 "prog_util.m"
              mercury__string__int_to_string_2_p_0(parse_tree__prog_util__T_29, &parse_tree__prog_util__String_34);
            }
#line 599 "prog_util.m"
            {
#line 599 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 0) = ((MR_Box) (parse_tree__prog_util__String_34));
#line 599 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_18_18, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_38));
#line 599 "prog_util.m"
            }
#line 596 "prog_util.m"
            {
#line 596 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_Strings_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 596 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 0) = ((MR_Box) ((MR_String) ", "));
#line 596 "prog_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_util__STATE_VARIABLE_Strings_19_19, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_18_18));
#line 596 "prog_util.m"
            }
#line 594 "prog_util.m"
          }
#line 598 "prog_util.m"
        {
#line 598 "prog_util.m"
          mercury__string__int_to_string_2_p_0(parse_tree__prog_util__T_10, &parse_tree__prog_util__String_15);
        }
#line 599 "prog_util.m"
        {
#line 599 "prog_util.m"
          MR_Word base;
#line 599 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "prog_util.m"
          *parse_tree__prog_util__STATE_VARIABLE_Strings_4 = base;
#line 599 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__String_15));
#line 599 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__STATE_VARIABLE_Strings_19_19));
#line 599 "prog_util.m"
        }
#line 590 "prog_util.m"
      }
#line 589 "prog_util.m"
  }
#line 586 "prog_util.m"
}

#line 579 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__list_to_string__ho1_3_p_0(
#line 579 "prog_util.m"
  MR_Word parse_tree__prog_util__List_5,
#line 579 "prog_util.m"
  MR_String * parse_tree__prog_util__String_6)
#line 579 "prog_util.m"
{
#line 582 "prog_util.m"
  {
#line 582 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 582 "prog_util.m"
    MR_Word parse_tree__prog_util__Strings_7;
#line 582 "prog_util.m"
    MR_Word parse_tree__prog_util__V_11_11;

#line 583 "prog_util.m"
    {
#line 583 "prog_util.m"
      parse_tree__prog_util__list_to_string_2__ho4_4_p_0(parse_tree__prog_util__List_5, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_1[8]), &parse_tree__prog_util__Strings_7);
    }
#line 584 "prog_util.m"
    {
#line 584 "prog_util.m"
      parse_tree__prog_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 0) = ((MR_Box) ((MR_String) "["));
#line 584 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, 1) = ((MR_Box) (parse_tree__prog_util__Strings_7));
#line 584 "prog_util.m"
    }
#line 584 "prog_util.m"
    {
#line 584 "prog_util.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_util__V_11_11, parse_tree__prog_util__String_6);
#line 584 "prog_util.m"
      return;
    }
#line 582 "prog_util.m"
  }
#line 579 "prog_util.m"
}

#line 550 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__IntroducedFrom__pred__make_pred_name__550__1_3_p_0(
#line 550 "prog_util.m"
  MR_Word parse_tree__prog_util__VarSet_18,
#line 550 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_37,
#line 550 "prog_util.m"
  MR_String * parse_tree__prog_util__HeadVar__3_38)
#line 550 "prog_util.m"
{
#line 550 "prog_util.m"
  {
#line 550 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 550 "prog_util.m"
    MR_Word parse_tree__prog_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__2_37, (MR_Integer) 0)));
#line 550 "prog_util.m"
    MR_Word parse_tree__prog_util__Type_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__2_37, (MR_Integer) 1)));
#line 550 "prog_util.m"
    MR_String parse_tree__prog_util__VarName_25;
#line 550 "prog_util.m"
    MR_String parse_tree__prog_util__TypeString_26;
#line 550 "prog_util.m"
    MR_Word parse_tree__prog_util__V_40_40;
#line 550 "prog_util.m"
    MR_Word parse_tree__prog_util__V_41_41;
#line 550 "prog_util.m"
    MR_Word parse_tree__prog_util__V_43_43;

#line 552 "prog_util.m"
    {
#line 552 "prog_util.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_util__VarSet_18, parse_tree__prog_util__Var_23, &parse_tree__prog_util__VarName_25);
    }
#line 553 "prog_util.m"
    {
#line 553 "prog_util.m"
      parse_tree__prog_util__TypeString_26 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(parse_tree__prog_util__VarSet_18, (MR_Integer) 0, parse_tree__prog_util__Type_24);
    }
#line 554 "prog_util.m"
    {
#line 554 "prog_util.m"
      parse_tree__prog_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 554 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_43_43, 0) = ((MR_Box) (parse_tree__prog_util__TypeString_26));
#line 554 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "prog_util.m"
    }
#line 554 "prog_util.m"
    {
#line 554 "prog_util.m"
      parse_tree__prog_util__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 554 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_41_41, 0) = ((MR_Box) ((MR_String) " = "));
#line 554 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_41_41, 1) = ((MR_Box) (parse_tree__prog_util__V_43_43));
#line 554 "prog_util.m"
    }
#line 554 "prog_util.m"
    {
#line 554 "prog_util.m"
      parse_tree__prog_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 554 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_40_40, 0) = ((MR_Box) (parse_tree__prog_util__VarName_25));
#line 554 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_40_40, 1) = ((MR_Box) (parse_tree__prog_util__V_41_41));
#line 554 "prog_util.m"
    }
#line 554 "prog_util.m"
    {
#line 554 "prog_util.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_util__V_40_40, parse_tree__prog_util__HeadVar__3_38);
#line 554 "prog_util.m"
      return;
    }
#line 550 "prog_util.m"
  }
#line 550 "prog_util.m"
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
#line 1686 "parse_tree.prog_util.c"
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
#line 1700 "parse_tree.prog_util.c"
            *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
          else
#line 74 "prog_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1706 "parse_tree.prog_util.c"
              *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
            else
#line 74 "prog_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1712 "parse_tree.prog_util.c"
                *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
              else
#line 74 "prog_util.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1718 "parse_tree.prog_util.c"
                  *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                else
#line 74 "prog_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1724 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                  else
#line 1728 "parse_tree.prog_util.c"
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
#line 1743 "parse_tree.prog_util.c"
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
#line 1763 "parse_tree.prog_util.c"
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
#line 1786 "parse_tree.prog_util.c"
                  *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                else
#line 74 "prog_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1792 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                  else
#line 74 "prog_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1798 "parse_tree.prog_util.c"
                      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                    else
#line 74 "prog_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1804 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                      else
#line 1808 "parse_tree.prog_util.c"
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
#line 1825 "parse_tree.prog_util.c"
                *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
              else
#line 74 "prog_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1831 "parse_tree.prog_util.c"
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
#line 1851 "parse_tree.prog_util.c"
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
#line 1878 "parse_tree.prog_util.c"
                      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                    else
#line 74 "prog_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1884 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                      else
#line 74 "prog_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1890 "parse_tree.prog_util.c"
                          *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                        else
#line 1894 "parse_tree.prog_util.c"
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
#line 1909 "parse_tree.prog_util.c"
                  *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                else
#line 74 "prog_util.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1915 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                  else
#line 74 "prog_util.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1921 "parse_tree.prog_util.c"
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
#line 1945 "parse_tree.prog_util.c"
                          *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                        else
#line 74 "prog_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1951 "parse_tree.prog_util.c"
                            *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                          else
#line 1955 "parse_tree.prog_util.c"
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
#line 1970 "parse_tree.prog_util.c"
                    *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                  else
#line 74 "prog_util.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1976 "parse_tree.prog_util.c"
                      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                    else
#line 74 "prog_util.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1982 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                      else
#line 74 "prog_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1988 "parse_tree.prog_util.c"
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
#line 2012 "parse_tree.prog_util.c"
                              *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                            else
#line 2016 "parse_tree.prog_util.c"
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
#line 2033 "parse_tree.prog_util.c"
                      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                    else
#line 74 "prog_util.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2039 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                      else
#line 74 "prog_util.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2045 "parse_tree.prog_util.c"
                          *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                        else
#line 74 "prog_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2051 "parse_tree.prog_util.c"
                            *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                          else
#line 74 "prog_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2057 "parse_tree.prog_util.c"
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
#line 2077 "parse_tree.prog_util.c"
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
#line 2102 "parse_tree.prog_util.c"
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
#line 2115 "parse_tree.prog_util.c"
                      *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                    else
#line 74 "prog_util.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2121 "parse_tree.prog_util.c"
                        *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                      else
#line 74 "prog_util.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2127 "parse_tree.prog_util.c"
                          *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "prog_util.m"
                        else
#line 74 "prog_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2133 "parse_tree.prog_util.c"
                            *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                          else
#line 74 "prog_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2139 "parse_tree.prog_util.c"
                              *parse_tree__prog_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "prog_util.m"
                            else
#line 74 "prog_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2145 "parse_tree.prog_util.c"
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
#line 2234 "parse_tree.prog_util.c"
                parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_3_3 == parse_tree__prog_util__V_5_5);
#line 74 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 2238 "parse_tree.prog_util.c"
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
#line 2273 "parse_tree.prog_util.c"
                  parse_tree__prog_util__TypeInfo_27_27 = (MR_Word) &parse_tree__prog_util_scalar_common_1[5];
#line 2275 "parse_tree.prog_util.c"
                  {
#line 2277 "parse_tree.prog_util.c"
                    parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_util__TypeInfo_27_27, ((MR_Box) (parse_tree__prog_util__V_7_7)), ((MR_Box) (parse_tree__prog_util__V_9_9)));
                  }
#line 74 "prog_util.m"
                  if (parse_tree__prog_util__succeeded)
#line 74 "prog_util.m"
                    {
#line 2284 "parse_tree.prog_util.c"
                      parse_tree__prog_util__TypeInfo_28_28 = (MR_Word) &parse_tree__prog_util_scalar_common_1[6];
#line 2286 "parse_tree.prog_util.c"
                      {
#line 2288 "parse_tree.prog_util.c"
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
#line 2316 "parse_tree.prog_util.c"
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
#line 2343 "parse_tree.prog_util.c"
                      parse_tree__prog_util__TypeInfo_25_25 = (MR_Word) &parse_tree__prog_util_scalar_common_1[4];
#line 2345 "parse_tree.prog_util.c"
                      {
#line 2347 "parse_tree.prog_util.c"
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
#line 2381 "parse_tree.prog_util.c"
                        parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_17_17 == parse_tree__prog_util__V_19_19);
#line 74 "prog_util.m"
                        if (parse_tree__prog_util__succeeded)
#line 74 "prog_util.m"
                          {
#line 2387 "parse_tree.prog_util.c"
                            parse_tree__prog_util__TypeInfo_26_26 = (MR_Word) &parse_tree__prog_util_scalar_common_1[4];
#line 2389 "parse_tree.prog_util.c"
                            {
#line 2391 "parse_tree.prog_util.c"
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
#line 2419 "parse_tree.prog_util.c"
                        parse_tree__prog_util__TypeInfo_29_29 = (MR_Word) &parse_tree__prog_util_scalar_common_1[4];
#line 2421 "parse_tree.prog_util.c"
                        {
#line 2423 "parse_tree.prog_util.c"
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

#line 812 "prog_util.m"
static MR_Word MR_CALL 
parse_tree__prog_util__goal_list_to_conj_2_3_f_0(
#line 812 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_1,
#line 812 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 812 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3)
#line 812 "prog_util.m"
{
#line 814 "prog_util.m"
  {
#line 814 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 814 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__4_4;

#line 814 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 814 "prog_util.m"
      parse_tree__prog_util__HeadVar__4_4 = parse_tree__prog_util__HeadVar__2_2;
#line 814 "prog_util.m"
    else
#line 815 "prog_util.m"
      {
#line 815 "prog_util.m"
        MR_Word parse_tree__prog_util__Goal1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)));
#line 815 "prog_util.m"
        MR_Word parse_tree__prog_util__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
#line 815 "prog_util.m"
        MR_Word parse_tree__prog_util__V_11_11;

#line 816 "prog_util.m"
        {
#line 816 "prog_util.m"
          parse_tree__prog_util__V_11_11 = parse_tree__prog_util__goal_list_to_conj_2_3_f_0(parse_tree__prog_util__Context_1, parse_tree__prog_util__Goal1_9, parse_tree__prog_util__Goals_10);
        }
#line 816 "prog_util.m"
        {
#line 816 "prog_util.m"
          parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 816 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_util__Context_1));
#line 816 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 1) = ((MR_Box) (parse_tree__prog_util__HeadVar__2_2));
#line 816 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 2) = ((MR_Box) (parse_tree__prog_util__V_11_11));
#line 816 "prog_util.m"
        }
#line 815 "prog_util.m"
      }
#line 814 "prog_util.m"
    return parse_tree__prog_util__HeadVar__4_4;
#line 814 "prog_util.m"
  }
#line 812 "prog_util.m"
}

#line 705 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__make_n_fresh_vars_2_6_p_0(
#line 705 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_23,
#line 705 "prog_util.m"
  MR_String parse_tree__prog_util__BaseName_7,
#line 705 "prog_util.m"
  MR_Integer parse_tree__prog_util__N_8,
#line 705 "prog_util.m"
  MR_Integer parse_tree__prog_util__Max_9,
#line 705 "prog_util.m"
  MR_Word * parse_tree__prog_util__Vars_10,
#line 705 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_0_17,
#line 705 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_VarSet_18)
#line 705 "prog_util.m"
{
#line 711 "prog_util.m"
  {
#line 711 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded = (parse_tree__prog_util__N_8 == parse_tree__prog_util__Max_9);

#line 711 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 710 "prog_util.m"
      {
#line 710 "prog_util.m"
        *parse_tree__prog_util__Vars_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 710 "prog_util.m"
        *parse_tree__prog_util__STATE_VARIABLE_VarSet_18 = parse_tree__prog_util__STATE_VARIABLE_VarSet_0_17;
#line 710 "prog_util.m"
      }
#line 711 "prog_util.m"
    else
#line 712 "prog_util.m"
      {
#line 712 "prog_util.m"
        MR_Integer parse_tree__prog_util__N1_12 = (parse_tree__prog_util__N_8 + (MR_Integer) 1);
#line 712 "prog_util.m"
        MR_Word parse_tree__prog_util__Var_13;
#line 712 "prog_util.m"
        MR_String parse_tree__prog_util__Num_14;
#line 712 "prog_util.m"
        MR_String parse_tree__prog_util__VarName_15;
#line 712 "prog_util.m"
        MR_Word parse_tree__prog_util__Vars1_16;
#line 712 "prog_util.m"
        MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_20_20;
#line 712 "prog_util.m"
        MR_Word parse_tree__prog_util__STATE_VARIABLE_VarSet_21_21;

#line 713 "prog_util.m"
        {
#line 713 "prog_util.m"
          mercury__varset__new_var_3_p_0(parse_tree__prog_util__TypeInfo_for_T_23, &parse_tree__prog_util__Var_13, parse_tree__prog_util__STATE_VARIABLE_VarSet_0_17, &parse_tree__prog_util__STATE_VARIABLE_VarSet_20_20);
        }
#line 714 "prog_util.m"
        {
#line 714 "prog_util.m"
          mercury__string__int_to_string_2_p_0(parse_tree__prog_util__N1_12, &parse_tree__prog_util__Num_14);
        }
#line 715 "prog_util.m"
        {
#line 715 "prog_util.m"
          mercury__string__append_3_p_2(parse_tree__prog_util__BaseName_7, parse_tree__prog_util__Num_14, &parse_tree__prog_util__VarName_15);
        }
#line 716 "prog_util.m"
        {
#line 716 "prog_util.m"
          mercury__varset__name_var_4_p_0(parse_tree__prog_util__TypeInfo_for_T_23, parse_tree__prog_util__Var_13, parse_tree__prog_util__VarName_15, parse_tree__prog_util__STATE_VARIABLE_VarSet_20_20, &parse_tree__prog_util__STATE_VARIABLE_VarSet_21_21);
        }
#line 718 "prog_util.m"
        {
#line 718 "prog_util.m"
          parse_tree__prog_util__make_n_fresh_vars_2_6_p_0(parse_tree__prog_util__TypeInfo_for_T_23, parse_tree__prog_util__BaseName_7, parse_tree__prog_util__N1_12, parse_tree__prog_util__Max_9, &parse_tree__prog_util__Vars1_16, parse_tree__prog_util__STATE_VARIABLE_VarSet_21_21, parse_tree__prog_util__STATE_VARIABLE_VarSet_18);
        }
#line 717 "prog_util.m"
        {
#line 717 "prog_util.m"
          MR_Word base;
#line 717 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 717 "prog_util.m"
          *parse_tree__prog_util__Vars_10 = base;
#line 717 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Var_13));
#line 717 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars1_16));
#line 717 "prog_util.m"
        }
#line 712 "prog_util.m"
      }
#line 711 "prog_util.m"
  }
#line 705 "prog_util.m"
}

#line 520 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_catch_expr_4_p_0(
#line 520 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 520 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 520 "prog_util.m"
  MR_Word parse_tree__prog_util__Catch0_7,
#line 520 "prog_util.m"
  MR_Word * parse_tree__prog_util__Catch_8)
#line 520 "prog_util.m"
{
#line 523 "prog_util.m"
  {
#line 523 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 523 "prog_util.m"
    MR_Word parse_tree__prog_util__Term0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Catch0_7, (MR_Integer) 0)));
#line 523 "prog_util.m"
    MR_Word parse_tree__prog_util__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Catch0_7, (MR_Integer) 1)));
#line 523 "prog_util.m"
    MR_Word parse_tree__prog_util__Term_11;
#line 523 "prog_util.m"
    MR_Word parse_tree__prog_util__Goal_12;
#line 523 "prog_util.m"
    MR_Word parse_tree__prog_util__V_13_13;
#line 523 "prog_util.m"
    MR_Word parse_tree__prog_util__V_14_14;

#line 525 "prog_util.m"
    {
#line 525 "prog_util.m"
      parse_tree__prog_util__V_14_14 = mercury__term__context_init_0_f_0();
    }
#line 525 "prog_util.m"
    {
#line 525 "prog_util.m"
      parse_tree__prog_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_13_13, 0) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 525 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_util__V_14_14));
#line 525 "prog_util.m"
    }
#line 525 "prog_util.m"
    {
#line 525 "prog_util.m"
      mercury__term__substitute_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_util__Term0_9, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__V_13_13, &parse_tree__prog_util__Term_11);
    }
#line 526 "prog_util.m"
    {
#line 526 "prog_util.m"
      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Goal0_10, &parse_tree__prog_util__Goal_12);
    }
#line 527 "prog_util.m"
    {
#line 527 "prog_util.m"
      MR_Word base;
#line 527 "prog_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 527 "prog_util.m"
      *parse_tree__prog_util__Catch_8 = base;
#line 527 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__Term_11));
#line 527 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__Goal_12));
#line 527 "prog_util.m"
    }
#line 523 "prog_util.m"
  }
#line 520 "prog_util.m"
}

#line 507 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_maybe_var_4_p_0(
#line 507 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 507 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 507 "prog_util.m"
  MR_Word parse_tree__prog_util__MaybeVar0_7,
#line 507 "prog_util.m"
  MR_Word * parse_tree__prog_util__MaybeVar_8)
#line 507 "prog_util.m"
{
#line 512 "prog_util.m"
  {
#line 512 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 512 "prog_util.m"
    if ((parse_tree__prog_util__MaybeVar0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 517 "prog_util.m"
      *parse_tree__prog_util__MaybeVar_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 512 "prog_util.m"
    else
#line 512 "prog_util.m"
      {
#line 512 "prog_util.m"
        MR_Word parse_tree__prog_util__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeVar0_7, (MR_Integer) 0)));
#line 512 "prog_util.m"
        MR_Word parse_tree__prog_util__Var_10;

#line 501 "prog_util.m"
        {
#line 501 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__Var0_9)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
#line 503 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 502 "prog_util.m"
          parse_tree__prog_util__Var_10 = parse_tree__prog_util__NewVar_6;
#line 503 "prog_util.m"
        else
#line 504 "prog_util.m"
          parse_tree__prog_util__Var_10 = parse_tree__prog_util__Var0_9;
#line 514 "prog_util.m"
        {
#line 514 "prog_util.m"
          MR_Word base;
#line 514 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 514 "prog_util.m"
          *parse_tree__prog_util__MaybeVar_8 = base;
#line 514 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Var_10));
#line 514 "prog_util.m"
        }
#line 512 "prog_util.m"
      }
#line 512 "prog_util.m"
  }
#line 507 "prog_util.m"
}

#line 497 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_var_4_p_0(
#line 497 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 497 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 497 "prog_util.m"
  MR_Word parse_tree__prog_util__Var0_7,
#line 497 "prog_util.m"
  MR_Word * parse_tree__prog_util__Var_8)
#line 497 "prog_util.m"
{
#line 503 "prog_util.m"
  {
#line 503 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 501 "prog_util.m"
    {
#line 501 "prog_util.m"
      parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__Var0_7)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
    }
#line 503 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 502 "prog_util.m"
      *parse_tree__prog_util__Var_8 = parse_tree__prog_util__NewVar_6;
#line 503 "prog_util.m"
    else
#line 504 "prog_util.m"
      *parse_tree__prog_util__Var_8 = parse_tree__prog_util__Var0_7;
#line 503 "prog_util.m"
  }
#line 497 "prog_util.m"
}

#line 489 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_vars_4_p_0(
#line 489 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_1,
#line 489 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_2,
#line 489 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__3_3,
#line 489 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__4_4)
#line 489 "prog_util.m"
{
#line 492 "prog_util.m"
  {
#line 492 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 492 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 492 "prog_util.m"
      *parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 492 "prog_util.m"
    else
#line 493 "prog_util.m"
      {
#line 493 "prog_util.m"
        MR_Word parse_tree__prog_util__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 0)));
#line 493 "prog_util.m"
        MR_Word parse_tree__prog_util__Vars0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__3_3, (MR_Integer) 1)));
#line 493 "prog_util.m"
        MR_Word parse_tree__prog_util__Var_11;
#line 493 "prog_util.m"
        MR_Word parse_tree__prog_util__Vars_12;

#line 501 "prog_util.m"
        {
#line 501 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__Var0_9)), ((MR_Box) (parse_tree__prog_util__OldVar_1)));
        }
#line 503 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 502 "prog_util.m"
          parse_tree__prog_util__Var_11 = parse_tree__prog_util__NewVar_2;
#line 503 "prog_util.m"
        else
#line 504 "prog_util.m"
          parse_tree__prog_util__Var_11 = parse_tree__prog_util__Var0_9;
#line 495 "prog_util.m"
        {
#line 495 "prog_util.m"
          parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_1, parse_tree__prog_util__NewVar_2, parse_tree__prog_util__Vars0_10, &parse_tree__prog_util__Vars_12);
        }
#line 493 "prog_util.m"
        {
#line 493 "prog_util.m"
          MR_Word base;
#line 493 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "prog_util.m"
          *parse_tree__prog_util__HeadVar__4_4 = base;
#line 493 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Var_11));
#line 493 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Vars_12));
#line 493 "prog_util.m"
        }
#line 493 "prog_util.m"
      }
#line 492 "prog_util.m"
  }
#line 489 "prog_util.m"
}

#line 481 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(
#line 481 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 481 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 481 "prog_util.m"
  MR_Word parse_tree__prog_util__TMV0_7,
#line 481 "prog_util.m"
  MR_Word * parse_tree__prog_util__TMV_8)
#line 481 "prog_util.m"
{
#line 484 "prog_util.m"
  {
#line 484 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 484 "prog_util.m"
    MR_String parse_tree__prog_util__MutableName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__TMV0_7, (MR_Integer) 0)));
#line 484 "prog_util.m"
    MR_Word parse_tree__prog_util__StateVar0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__TMV0_7, (MR_Integer) 1)));
#line 484 "prog_util.m"
    MR_Word parse_tree__prog_util__StateVar_11;

#line 501 "prog_util.m"
    {
#line 501 "prog_util.m"
      parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__StateVar0_10)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
    }
#line 503 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 502 "prog_util.m"
      parse_tree__prog_util__StateVar_11 = parse_tree__prog_util__NewVar_6;
#line 503 "prog_util.m"
    else
#line 504 "prog_util.m"
      parse_tree__prog_util__StateVar_11 = parse_tree__prog_util__StateVar0_10;
#line 487 "prog_util.m"
    {
#line 487 "prog_util.m"
      MR_Word base;
#line 487 "prog_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 487 "prog_util.m"
      *parse_tree__prog_util__TMV_8 = base;
#line 487 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__MutableName_9));
#line 487 "prog_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__StateVar_11));
#line 487 "prog_util.m"
    }
#line 484 "prog_util.m"
  }
#line 481 "prog_util.m"
}

#line 466 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(
#line 466 "prog_util.m"
  MR_Word parse_tree__prog_util__OldVar_5,
#line 466 "prog_util.m"
  MR_Word parse_tree__prog_util__NewVar_6,
#line 466 "prog_util.m"
  MR_Word parse_tree__prog_util__Comp0_7,
#line 466 "prog_util.m"
  MR_Word * parse_tree__prog_util__Comp_8)
#line 466 "prog_util.m"
{
#line 471 "prog_util.m"
  {
#line 471 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 471 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__Comp0_7)) == (MR_mktag((MR_Integer) 0))))
#line 471 "prog_util.m"
      {
#line 471 "prog_util.m"
        MR_Word parse_tree__prog_util__SVar0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Comp0_7, (MR_Integer) 0)));
#line 471 "prog_util.m"
        MR_Word parse_tree__prog_util__SVar_10;

#line 501 "prog_util.m"
        {
#line 501 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__SVar0_9)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
#line 503 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 502 "prog_util.m"
          parse_tree__prog_util__SVar_10 = parse_tree__prog_util__NewVar_6;
#line 503 "prog_util.m"
        else
#line 504 "prog_util.m"
          parse_tree__prog_util__SVar_10 = parse_tree__prog_util__SVar0_9;
#line 473 "prog_util.m"
        {
#line 473 "prog_util.m"
          MR_Word base;
#line 473 "prog_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 473 "prog_util.m"
          *parse_tree__prog_util__Comp_8 = base;
#line 473 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__SVar_10));
#line 473 "prog_util.m"
        }
#line 471 "prog_util.m"
      }
#line 471 "prog_util.m"
    else
#line 475 "prog_util.m"
      {
#line 475 "prog_util.m"
        MR_Word parse_tree__prog_util__IVar0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Comp0_7, (MR_Integer) 0)));
#line 475 "prog_util.m"
        MR_Word parse_tree__prog_util__OVar0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Comp0_7, (MR_Integer) 1)));
#line 475 "prog_util.m"
        MR_Word parse_tree__prog_util__IVar_13;
#line 475 "prog_util.m"
        MR_Word parse_tree__prog_util__OVar_14;

#line 501 "prog_util.m"
        {
#line 501 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__IVar0_11)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
#line 503 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 502 "prog_util.m"
          parse_tree__prog_util__IVar_13 = parse_tree__prog_util__NewVar_6;
#line 503 "prog_util.m"
        else
#line 504 "prog_util.m"
          parse_tree__prog_util__IVar_13 = parse_tree__prog_util__IVar0_11;
#line 501 "prog_util.m"
        {
#line 501 "prog_util.m"
          parse_tree__prog_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_util_scalar_common_1[1], ((MR_Box) (parse_tree__prog_util__OVar0_12)), ((MR_Box) (parse_tree__prog_util__OldVar_5)));
        }
#line 503 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 502 "prog_util.m"
          parse_tree__prog_util__OVar_14 = parse_tree__prog_util__NewVar_6;
#line 503 "prog_util.m"
        else
#line 504 "prog_util.m"
          parse_tree__prog_util__OVar_14 = parse_tree__prog_util__OVar0_12;
#line 478 "prog_util.m"
        {
#line 478 "prog_util.m"
          MR_Word base;
#line 478 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "prog_util.m"
          *parse_tree__prog_util__Comp_8 = base;
#line 478 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__IVar_13));
#line 478 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__OVar_14));
#line 478 "prog_util.m"
        }
#line 475 "prog_util.m"
      }
#line 471 "prog_util.m"
  }
#line 466 "prog_util.m"
}

#line 251 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__split_types_and_modes_2_5_p_0(
#line 251 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 251 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2,
#line 251 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__3_3,
#line 251 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadVar__4_4,
#line 251 "prog_util.m"
  MR_Word * parse_tree__prog_util__Result_5)
#line 251 "prog_util.m"
{
#line 255 "prog_util.m"
  {
#line 255 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 255 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 255 "prog_util.m"
      {
#line 255 "prog_util.m"
        *parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 255 "prog_util.m"
        *parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 255 "prog_util.m"
        *parse_tree__prog_util__Result_5 = parse_tree__prog_util__HeadVar__2_2;
#line 255 "prog_util.m"
      }
#line 255 "prog_util.m"
    else
#line 256 "prog_util.m"
      {
#line 256 "prog_util.m"
        MR_Word parse_tree__prog_util__TM_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 256 "prog_util.m"
        MR_Word parse_tree__prog_util__TMs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 256 "prog_util.m"
        MR_Word parse_tree__prog_util__T_10;
#line 256 "prog_util.m"
        MR_Word parse_tree__prog_util__Ts_11;
#line 256 "prog_util.m"
        MR_Word parse_tree__prog_util__M_12;
#line 256 "prog_util.m"
        MR_Word parse_tree__prog_util__Ms_13;
#line 256 "prog_util.m"
        MR_Word parse_tree__prog_util__Result1_15;

#line 267 "prog_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_util__TM_7)) == (MR_mktag((MR_Integer) 1))))
#line 268 "prog_util.m"
          {
#line 268 "prog_util.m"
            parse_tree__prog_util__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__TM_7, (MR_Integer) 0)));
#line 268 "prog_util.m"
            parse_tree__prog_util__M_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__TM_7, (MR_Integer) 1)));
#line 268 "prog_util.m"
            parse_tree__prog_util__Result1_15 = parse_tree__prog_util__HeadVar__2_2;
#line 268 "prog_util.m"
          }
#line 267 "prog_util.m"
        else
#line 267 "prog_util.m"
          {
#line 267 "prog_util.m"
            parse_tree__prog_util__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__TM_7, (MR_Integer) 0)));
#line 267 "prog_util.m"
            parse_tree__prog_util__M_12 = (MR_Word) &parse_tree__prog_util_scalar_common_1[7];
#line 267 "prog_util.m"
            parse_tree__prog_util__Result1_15 = (MR_Integer) 0;
#line 267 "prog_util.m"
          }
#line 258 "prog_util.m"
        {
#line 258 "prog_util.m"
          parse_tree__prog_util__split_types_and_modes_2_5_p_0(parse_tree__prog_util__TMs_8, parse_tree__prog_util__Result1_15, &parse_tree__prog_util__Ts_11, &parse_tree__prog_util__Ms_13, parse_tree__prog_util__Result_5);
        }
#line 256 "prog_util.m"
        {
#line 256 "prog_util.m"
          MR_Word base;
#line 256 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "prog_util.m"
          *parse_tree__prog_util__HeadVar__3_3 = base;
#line 256 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__T_10));
#line 256 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Ts_11));
#line 256 "prog_util.m"
        }
#line 256 "prog_util.m"
        {
#line 256 "prog_util.m"
          MR_Word base;
#line 256 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "prog_util.m"
          *parse_tree__prog_util__HeadVar__4_4 = base;
#line 256 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__M_12));
#line 256 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Ms_13));
#line 256 "prog_util.m"
        }
#line 256 "prog_util.m"
      }
#line 255 "prog_util.m"
  }
#line 251 "prog_util.m"
}

#line 193 "prog_util.m"
MR_Word MR_CALL 
parse_tree__prog_util__goal_list_to_conj_2_f_0(
#line 193 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_1,
#line 193 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__2_2)
#line 193 "prog_util.m"
{
#line 808 "prog_util.m"
  {
#line 808 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 808 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__3_3;

#line 808 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 808 "prog_util.m"
      {
#line 808 "prog_util.m"
        parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 808 "prog_util.m"
        MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_util__Context_1));
#line 808 "prog_util.m"
      }
#line 808 "prog_util.m"
    else
#line 809 "prog_util.m"
      {
#line 809 "prog_util.m"
        MR_Word parse_tree__prog_util__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 0)));
#line 809 "prog_util.m"
        MR_Word parse_tree__prog_util__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, (MR_Integer) 1)));

#line 810 "prog_util.m"
        {
#line 810 "prog_util.m"
          return parse_tree__prog_util__HeadVar__3_3 = parse_tree__prog_util__goal_list_to_conj_2_3_f_0(parse_tree__prog_util__Context_1, parse_tree__prog_util__Goal_6, parse_tree__prog_util__Goals_7);
        }
#line 809 "prog_util.m"
      }
#line 808 "prog_util.m"
    return parse_tree__prog_util__HeadVar__3_3;
#line 808 "prog_util.m"
  }
#line 193 "prog_util.m"
}

#line 186 "prog_util.m"
MR_Word MR_CALL 
parse_tree__prog_util__sym_name_and_args_to_term_3_f_0(
#line 186 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_15,
#line 186 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 186 "prog_util.m"
  MR_Word parse_tree__prog_util__Xs_2,
#line 186 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_3)
#line 186 "prog_util.m"
{
#line 779 "prog_util.m"
  {
#line 779 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 779 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__4_4;

#line 779 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 782 "prog_util.m"
      {
#line 782 "prog_util.m"
        MR_Word parse_tree__prog_util__ModuleNames_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 782 "prog_util.m"
        MR_String parse_tree__prog_util__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 782 "prog_util.m"
        MR_Word parse_tree__prog_util__V_13_13;
#line 782 "prog_util.m"
        MR_Word parse_tree__prog_util__V_14_14;

#line 784 "prog_util.m"
        {
#line 784 "prog_util.m"
          parse_tree__prog_util__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 784 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_14_14, 0) = ((MR_Box) (parse_tree__prog_util__Name_10));
#line 784 "prog_util.m"
        }
#line 784 "prog_util.m"
        {
#line 784 "prog_util.m"
          parse_tree__prog_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 784 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 0) = ((MR_Box) (parse_tree__prog_util__V_14_14));
#line 784 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_util__Xs_2));
#line 784 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 784 "prog_util.m"
        }
#line 783 "prog_util.m"
        {
#line 783 "prog_util.m"
          return parse_tree__prog_util__HeadVar__4_4 = parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_121_109_95_110_97_109_101_95_97_110_100_95_116_101_114_109_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_f_0(parse_tree__prog_util__ModuleNames_9, parse_tree__prog_util__V_13_13, parse_tree__prog_util__Context_3);
        }
#line 782 "prog_util.m"
      }
#line 779 "prog_util.m"
    else
#line 779 "prog_util.m"
      {
#line 779 "prog_util.m"
        MR_String parse_tree__prog_util__Name_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 779 "prog_util.m"
        MR_Word parse_tree__prog_util__V_8_8;

#line 780 "prog_util.m"
        {
#line 780 "prog_util.m"
          parse_tree__prog_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 780 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_8_8, 0) = ((MR_Box) (parse_tree__prog_util__Name_5));
#line 780 "prog_util.m"
        }
#line 780 "prog_util.m"
        {
#line 780 "prog_util.m"
          parse_tree__prog_util__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 780 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_util__V_8_8));
#line 780 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 1) = ((MR_Box) (parse_tree__prog_util__Xs_2));
#line 780 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__4_4, 2) = ((MR_Box) (parse_tree__prog_util__Context_3));
#line 780 "prog_util.m"
        }
#line 779 "prog_util.m"
      }
#line 779 "prog_util.m"
    return parse_tree__prog_util__HeadVar__4_4;
#line 779 "prog_util.m"
  }
#line 186 "prog_util.m"
}

#line 177 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__get_new_tvars_8_p_0(
#line 177 "prog_util.m"
  MR_Word parse_tree__prog_util__HeadVar__1_1,
#line 177 "prog_util.m"
  MR_Word parse_tree__prog_util__VarSet_2,
#line 177 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3,
#line 177 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_TVarSet_4,
#line 177 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5,
#line 177 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_6,
#line 177 "prog_util.m"
  MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7,
#line 177 "prog_util.m"
  MR_Word * parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_8)
#line 177 "prog_util.m"
{
#line 756 "prog_util.m"
  while (MR_TRUE)
#line 756 "prog_util.m"
    {
#line 756 "prog_util.m"
      /* tailcall optimized into a loop */
#line 756 "prog_util.m"
      {
#line 756 "prog_util.m"
        MR_bool parse_tree__prog_util__succeeded;

#line 756 "prog_util.m"
        if ((parse_tree__prog_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 756 "prog_util.m"
          {
#line 756 "prog_util.m"
            *parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_8 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7;
#line 756 "prog_util.m"
            *parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_6 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
#line 756 "prog_util.m"
            *parse_tree__prog_util__STATE_VARIABLE_TVarSet_4 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3;
#line 756 "prog_util.m"
          }
#line 756 "prog_util.m"
        else
#line 757 "prog_util.m"
          {
#line 757 "prog_util.m"
            MR_Word parse_tree__prog_util__TVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 757 "prog_util.m"
            MR_Word parse_tree__prog_util__TVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 757 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34;
#line 757 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36;
#line 757 "prog_util.m"
            MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37;
#line 758 "prog_util.m"
            MR_Word parse_tree__prog_util__TypeInfo_45_45 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];

#line 758 "prog_util.m"
            {
#line 758 "prog_util.m"
              parse_tree__prog_util__succeeded = mercury__map__contains_2_p_0(parse_tree__prog_util__TypeInfo_45_45, parse_tree__prog_util__TypeInfo_45_45, parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, ((MR_Box) (parse_tree__prog_util__TVar_19)));
            }
#line 760 "prog_util.m"
            if (parse_tree__prog_util__succeeded)
#line 759 "prog_util.m"
              {
#line 759 "prog_util.m"
                parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7;
#line 759 "prog_util.m"
                parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
#line 759 "prog_util.m"
                parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3;
#line 759 "prog_util.m"
              }
#line 760 "prog_util.m"
            else
#line 770 "prog_util.m"
              {
#line 770 "prog_util.m"
                MR_String parse_tree__prog_util__TVarName_25;

#line 761 "prog_util.m"
                {
#line 761 "prog_util.m"
                  parse_tree__prog_util__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_util__VarSet_2, parse_tree__prog_util__TVar_19, &parse_tree__prog_util__TVarName_25);
                }
#line 770 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 764 "prog_util.m"
                  {
#line 764 "prog_util.m"
                    MR_Word parse_tree__prog_util__TVarSetVar_26;
#line 762 "prog_util.m"
                    MR_Box parse_tree__prog_util__conv0_TVarSetVar_26;

#line 762 "prog_util.m"
                    {
#line 762 "prog_util.m"
                      parse_tree__prog_util__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_util_scalar_common_1[0], parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5, ((MR_Box) (parse_tree__prog_util__TVarName_25)), &parse_tree__prog_util__conv0_TVarSetVar_26);
                    }
#line 762 "prog_util.m"
                    if (parse_tree__prog_util__succeeded)
#line 762 "prog_util.m"
                      {
#line 762 "prog_util.m"
                        parse_tree__prog_util__TVarSetVar_26 = ((MR_Word) parse_tree__prog_util__conv0_TVarSetVar_26);
#line 762 "prog_util.m"
                        parse_tree__prog_util__succeeded = MR_TRUE;
#line 762 "prog_util.m"
                      }
#line 764 "prog_util.m"
                    if (parse_tree__prog_util__succeeded)
#line 763 "prog_util.m"
                      {
#line 763 "prog_util.m"
                        MR_Word parse_tree__prog_util__TypeInfo_49_49 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];

#line 763 "prog_util.m"
                        {
#line 763 "prog_util.m"
                          mercury__map__det_insert_4_p_0(parse_tree__prog_util__TypeInfo_49_49, parse_tree__prog_util__TypeInfo_49_49, ((MR_Box) (parse_tree__prog_util__TVar_19)), ((MR_Box) (parse_tree__prog_util__TVarSetVar_26)), parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, &parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34);
                        }
#line 763 "prog_util.m"
                        parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
#line 763 "prog_util.m"
                        parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3;
#line 763 "prog_util.m"
                      }
#line 764 "prog_util.m"
                    else
#line 765 "prog_util.m"
                      {
#line 765 "prog_util.m"
                        MR_Word parse_tree__prog_util__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 765 "prog_util.m"
                        MR_Word parse_tree__prog_util__TypeInfo_52_52;
#line 765 "prog_util.m"
                        MR_Word parse_tree__prog_util__NewTVar_27;
#line 765 "prog_util.m"
                        MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarSet_35_35;

#line 765 "prog_util.m"
                        {
#line 765 "prog_util.m"
                          mercury__varset__new_var_3_p_0(parse_tree__prog_util__TypeCtorInfo_50_50, &parse_tree__prog_util__NewTVar_27, parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3, &parse_tree__prog_util__STATE_VARIABLE_TVarSet_35_35);
                        }
#line 766 "prog_util.m"
                        {
#line 766 "prog_util.m"
                          mercury__varset__name_var_4_p_0(parse_tree__prog_util__TypeCtorInfo_50_50, parse_tree__prog_util__NewTVar_27, parse_tree__prog_util__TVarName_25, parse_tree__prog_util__STATE_VARIABLE_TVarSet_35_35, &parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36);
                        }
#line 3491 "parse_tree.prog_util.c"
                        parse_tree__prog_util__TypeInfo_52_52 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];
#line 767 "prog_util.m"
                        {
#line 767 "prog_util.m"
                          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_util__TypeInfo_52_52, ((MR_Box) (parse_tree__prog_util__TVarName_25)), ((MR_Box) (parse_tree__prog_util__NewTVar_27)), parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5, &parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37);
                        }
#line 768 "prog_util.m"
                        {
#line 768 "prog_util.m"
                          mercury__map__det_insert_4_p_0(parse_tree__prog_util__TypeInfo_52_52, parse_tree__prog_util__TypeInfo_52_52, ((MR_Box) (parse_tree__prog_util__TVar_19)), ((MR_Box) (parse_tree__prog_util__NewTVar_27)), parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, &parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34);
                        }
#line 765 "prog_util.m"
                      }
#line 764 "prog_util.m"
                  }
#line 770 "prog_util.m"
                else
#line 771 "prog_util.m"
                  {
#line 771 "prog_util.m"
                    MR_Word parse_tree__prog_util__TypeInfo_54_54;
#line 771 "prog_util.m"
                    MR_Word parse_tree__prog_util__NewTVar_44;

#line 771 "prog_util.m"
                    {
#line 771 "prog_util.m"
                      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &parse_tree__prog_util__NewTVar_44, parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3, &parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36);
                    }
#line 3521 "parse_tree.prog_util.c"
                    parse_tree__prog_util__TypeInfo_54_54 = (MR_Word) &parse_tree__prog_util_scalar_common_1[0];
#line 772 "prog_util.m"
                    {
#line 772 "prog_util.m"
                      mercury__map__det_insert_4_p_0(parse_tree__prog_util__TypeInfo_54_54, parse_tree__prog_util__TypeInfo_54_54, ((MR_Box) (parse_tree__prog_util__TVar_19)), ((MR_Box) (parse_tree__prog_util__NewTVar_44)), parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7, &parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34);
                    }
#line 771 "prog_util.m"
                    parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5;
#line 771 "prog_util.m"
                  }
#line 770 "prog_util.m"
              }
#line 775 "prog_util.m"
            /* direct tailcall eliminated */
#line 775 "prog_util.m"
            {
#line 775 "prog_util.m"
              MR_Word parse_tree__prog_util__HeadVar__1__tmp_copy_1 = parse_tree__prog_util__TVars_20;
#line 775 "prog_util.m"
              MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarSet_0__tmp_copy_3 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_36_36;
#line 775 "prog_util.m"
              MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0__tmp_copy_5 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_37_37;
#line 775 "prog_util.m"
              MR_Word parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0__tmp_copy_7 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_34_34;

#line 775 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0_7 = parse_tree__prog_util__STATE_VARIABLE_TVarRenaming_0__tmp_copy_7;
#line 775 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0_5 = parse_tree__prog_util__STATE_VARIABLE_TVarNameMap_0__tmp_copy_5;
#line 775 "prog_util.m"
              parse_tree__prog_util__STATE_VARIABLE_TVarSet_0_3 = parse_tree__prog_util__STATE_VARIABLE_TVarSet_0__tmp_copy_3;
#line 775 "prog_util.m"
              parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__HeadVar__1__tmp_copy_1;
#line 775 "prog_util.m"
            }
#line 775 "prog_util.m"
            continue;
#line 757 "prog_util.m"
          }
#line 756 "prog_util.m"
      }
#line 756 "prog_util.m"
      break;
#line 756 "prog_util.m"
    }
#line 177 "prog_util.m"
}

#line 170 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__parse_rule_term_4_p_0(
#line 170 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_20,
#line 170 "prog_util.m"
  MR_Word parse_tree__prog_util__Context_5,
#line 170 "prog_util.m"
  MR_Word parse_tree__prog_util__RuleTerm_6,
#line 170 "prog_util.m"
  MR_Word * parse_tree__prog_util__HeadTerm_7,
#line 170 "prog_util.m"
  MR_Word * parse_tree__prog_util__GoalTerm_8)
#line 170 "prog_util.m"
{
#line 751 "prog_util.m"
  {
#line 751 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__RuleTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 751 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadTerm0_9;
#line 751 "prog_util.m"
    MR_Word parse_tree__prog_util__GoalTerm0_10;
#line 748 "prog_util.m"
    MR_Word parse_tree__prog_util__V_12_12;
#line 748 "prog_util.m"
    MR_String parse_tree__prog_util__V_13_13;
#line 748 "prog_util.m"
    MR_Word parse_tree__prog_util__V_14_14;
#line 748 "prog_util.m"
    MR_Word parse_tree__prog_util__V_15_15;
#line 748 "prog_util.m"
    MR_Word parse_tree__prog_util__V_16_16;
#line 748 "prog_util.m"
    MR_Word parse_tree__prog_util__V_11_11;

#line 748 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 748 "prog_util.m"
      {
#line 748 "prog_util.m"
        parse_tree__prog_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__RuleTerm_6, (MR_Integer) 0)));
#line 748 "prog_util.m"
        parse_tree__prog_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__RuleTerm_6, (MR_Integer) 1)));
#line 748 "prog_util.m"
        parse_tree__prog_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__RuleTerm_6, (MR_Integer) 2)));
#line 748 "prog_util.m"
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_12_12)) == (MR_mktag((MR_Integer) 0)));
#line 748 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 748 "prog_util.m"
          {
#line 748 "prog_util.m"
            parse_tree__prog_util__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_12_12, (MR_Integer) 0)));
#line 748 "prog_util.m"
            parse_tree__prog_util__succeeded = (strcmp(parse_tree__prog_util__V_13_13, (MR_String) ":-") == 0);
#line 748 "prog_util.m"
            if (parse_tree__prog_util__succeeded)
#line 748 "prog_util.m"
              {
#line 748 "prog_util.m"
                parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 748 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 748 "prog_util.m"
                  {
#line 748 "prog_util.m"
                    parse_tree__prog_util__HeadTerm0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_14_14, (MR_Integer) 0)));
#line 748 "prog_util.m"
                    parse_tree__prog_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_14_14, (MR_Integer) 1)));
#line 748 "prog_util.m"
                    parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 748 "prog_util.m"
                    if (parse_tree__prog_util__succeeded)
#line 748 "prog_util.m"
                      {
#line 748 "prog_util.m"
                        parse_tree__prog_util__GoalTerm0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_15_15, (MR_Integer) 0)));
#line 748 "prog_util.m"
                        parse_tree__prog_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_15_15, (MR_Integer) 1)));
#line 748 "prog_util.m"
                        parse_tree__prog_util__succeeded = (parse_tree__prog_util__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 748 "prog_util.m"
                      }
#line 748 "prog_util.m"
                  }
#line 748 "prog_util.m"
              }
#line 748 "prog_util.m"
          }
#line 748 "prog_util.m"
      }
#line 751 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 749 "prog_util.m"
      {
#line 749 "prog_util.m"
        *parse_tree__prog_util__HeadTerm_7 = parse_tree__prog_util__HeadTerm0_9;
#line 750 "prog_util.m"
        *parse_tree__prog_util__GoalTerm_8 = parse_tree__prog_util__GoalTerm0_10;
#line 749 "prog_util.m"
      }
#line 751 "prog_util.m"
    else
#line 752 "prog_util.m"
      {
#line 752 "prog_util.m"
        *parse_tree__prog_util__HeadTerm_7 = parse_tree__prog_util__RuleTerm_6;
#line 753 "prog_util.m"
        {
#line 753 "prog_util.m"
          MR_Word base;
#line 753 "prog_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 753 "prog_util.m"
          *parse_tree__prog_util__GoalTerm_8 = base;
#line 753 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[4]));
#line 753 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 753 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_5));
#line 753 "prog_util.m"
        }
#line 752 "prog_util.m"
      }
#line 751 "prog_util.m"
  }
#line 170 "prog_util.m"
}

#line 165 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__get_state_args_det_4_p_0(
#line 165 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_14,
#line 165 "prog_util.m"
  MR_Word parse_tree__prog_util__Args0_5,
#line 165 "prog_util.m"
  MR_Word * parse_tree__prog_util__Args_6,
#line 165 "prog_util.m"
  MR_Box * parse_tree__prog_util__State0_7,
#line 165 "prog_util.m"
  MR_Box * parse_tree__prog_util__State_8)
#line 165 "prog_util.m"
{
#line 741 "prog_util.m"
  {
#line 741 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 741 "prog_util.m"
    MR_Word parse_tree__prog_util__Args1_9;
#line 741 "prog_util.m"
    MR_Box parse_tree__prog_util__State0A_10;
#line 741 "prog_util.m"
    MR_Box parse_tree__prog_util__StateA_11;
#line 731 "prog_util.m"
    MR_Word parse_tree__prog_util__RevArgs0_19;
#line 731 "prog_util.m"
    MR_Word parse_tree__prog_util__RevArgs_20;
#line 731 "prog_util.m"
    MR_Word parse_tree__prog_util__V_21_21;

#line 732 "prog_util.m"
    {
#line 732 "prog_util.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_14, parse_tree__prog_util__Args0_5, &parse_tree__prog_util__RevArgs0_19);
    }
#line 733 "prog_util.m"
    parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__RevArgs0_19)) == (MR_mktag((MR_Integer) 1)));
#line 733 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 733 "prog_util.m"
      {
#line 733 "prog_util.m"
        parse_tree__prog_util__StateA_11 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_19, (MR_Integer) 0));
#line 733 "prog_util.m"
        parse_tree__prog_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_19, (MR_Integer) 1)));
#line 733 "prog_util.m"
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 733 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 733 "prog_util.m"
          {
#line 733 "prog_util.m"
            parse_tree__prog_util__State0A_10 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_21_21, (MR_Integer) 0));
#line 733 "prog_util.m"
            parse_tree__prog_util__RevArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_21_21, (MR_Integer) 1)));
#line 734 "prog_util.m"
            {
#line 734 "prog_util.m"
              mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_14, parse_tree__prog_util__RevArgs_20, &parse_tree__prog_util__Args1_9);
            }
#line 734 "prog_util.m"
            parse_tree__prog_util__succeeded = MR_TRUE;
#line 733 "prog_util.m"
          }
#line 733 "prog_util.m"
      }
#line 741 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 738 "prog_util.m"
      {
#line 738 "prog_util.m"
        *parse_tree__prog_util__Args_6 = parse_tree__prog_util__Args1_9;
#line 739 "prog_util.m"
        *parse_tree__prog_util__State0_7 = parse_tree__prog_util__State0A_10;
#line 740 "prog_util.m"
        *parse_tree__prog_util__State_8 = parse_tree__prog_util__StateA_11;
#line 738 "prog_util.m"
      }
#line 741 "prog_util.m"
    else
#line 742 "prog_util.m"
      {
#line 742 "prog_util.m"
        {
#line 742 "prog_util.m"
          mercury__require__unexpected_2_p_0((MR_String) "parse_tree.prog_util", (MR_String) "predicate \140parse_tree.prog_util.get_state_args_det\'/4");
#line 742 "prog_util.m"
          return;
        }
#line 742 "prog_util.m"
      }
#line 741 "prog_util.m"
  }
#line 165 "prog_util.m"
}

#line 160 "prog_util.m"
MR_bool MR_CALL 
parse_tree__prog_util__get_state_args_4_p_0(
#line 160 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_12,
#line 160 "prog_util.m"
  MR_Word parse_tree__prog_util__Args0_5,
#line 160 "prog_util.m"
  MR_Word * parse_tree__prog_util__Args_6,
#line 160 "prog_util.m"
  MR_Box * parse_tree__prog_util__State0_7,
#line 160 "prog_util.m"
  MR_Box * parse_tree__prog_util__State_8)
#line 160 "prog_util.m"
{
#line 731 "prog_util.m"
  {
#line 731 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 731 "prog_util.m"
    MR_Word parse_tree__prog_util__RevArgs0_9;
#line 731 "prog_util.m"
    MR_Word parse_tree__prog_util__RevArgs_10;
#line 731 "prog_util.m"
    MR_Word parse_tree__prog_util__V_11_11;

#line 732 "prog_util.m"
    {
#line 732 "prog_util.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_12, parse_tree__prog_util__Args0_5, &parse_tree__prog_util__RevArgs0_9);
    }
#line 733 "prog_util.m"
    parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__RevArgs0_9)) == (MR_mktag((MR_Integer) 1)));
#line 733 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 733 "prog_util.m"
      {
#line 733 "prog_util.m"
        *parse_tree__prog_util__State_8 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_9, (MR_Integer) 0));
#line 733 "prog_util.m"
        parse_tree__prog_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__RevArgs0_9, (MR_Integer) 1)));
#line 733 "prog_util.m"
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 733 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 733 "prog_util.m"
          {
#line 733 "prog_util.m"
            *parse_tree__prog_util__State0_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, (MR_Integer) 0));
#line 733 "prog_util.m"
            parse_tree__prog_util__RevArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_11_11, (MR_Integer) 1)));
#line 734 "prog_util.m"
            {
#line 734 "prog_util.m"
              mercury__list__reverse_2_p_0(parse_tree__prog_util__TypeInfo_for_T_12, parse_tree__prog_util__RevArgs_10, parse_tree__prog_util__Args_6);
            }
#line 734 "prog_util.m"
            parse_tree__prog_util__succeeded = MR_TRUE;
#line 733 "prog_util.m"
          }
#line 733 "prog_util.m"
      }
#line 731 "prog_util.m"
    return parse_tree__prog_util__succeeded;
#line 731 "prog_util.m"
  }
#line 160 "prog_util.m"
}

#line 155 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__pred_args_to_func_args_3_p_0(
#line 155 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_17,
#line 155 "prog_util.m"
  MR_Word parse_tree__prog_util__PredArgs_4,
#line 155 "prog_util.m"
  MR_Word * parse_tree__prog_util__FuncArgs_5,
#line 155 "prog_util.m"
  MR_Box * parse_tree__prog_util__FuncReturn_6)
#line 155 "prog_util.m"
{
#line 721 "prog_util.m"
  {
#line 721 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 721 "prog_util.m"
    MR_Integer parse_tree__prog_util__NumPredArgs_7;
#line 721 "prog_util.m"
    MR_Integer parse_tree__prog_util__NumFuncArgs_8;
#line 727 "prog_util.m"
    MR_Word parse_tree__prog_util__FuncArgs0_9;
#line 727 "prog_util.m"
    MR_Box parse_tree__prog_util__FuncReturn0_10;
#line 724 "prog_util.m"
    MR_Word parse_tree__prog_util__V_12_12;
#line 724 "prog_util.m"
    MR_Word parse_tree__prog_util__V_18_18;

#line 722 "prog_util.m"
    {
#line 722 "prog_util.m"
      mercury__list__length_2_p_0(parse_tree__prog_util__TypeInfo_for_T_17, parse_tree__prog_util__PredArgs_4, &parse_tree__prog_util__NumPredArgs_7);
    }
#line 723 "prog_util.m"
    parse_tree__prog_util__NumFuncArgs_8 = (parse_tree__prog_util__NumPredArgs_7 - (MR_Integer) 1);
#line 724 "prog_util.m"
    {
#line 724 "prog_util.m"
      parse_tree__prog_util__succeeded = mercury__list__split_list_4_p_0(parse_tree__prog_util__TypeInfo_for_T_17, parse_tree__prog_util__NumFuncArgs_8, parse_tree__prog_util__PredArgs_4, &parse_tree__prog_util__FuncArgs0_9, &parse_tree__prog_util__V_12_12);
    }
#line 724 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 724 "prog_util.m"
      {
#line 724 "prog_util.m"
        parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 724 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 724 "prog_util.m"
          {
#line 724 "prog_util.m"
            parse_tree__prog_util__FuncReturn0_10 = (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_12_12, (MR_Integer) 0));
#line 724 "prog_util.m"
            parse_tree__prog_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_12_12, (MR_Integer) 1)));
#line 724 "prog_util.m"
            {
#line 724 "prog_util.m"
              parse_tree__prog_util__succeeded = mercury__list____Unify____list_1_0(parse_tree__prog_util__TypeInfo_for_T_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_util__V_18_18);
            }
#line 724 "prog_util.m"
          }
#line 724 "prog_util.m"
      }
#line 727 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 725 "prog_util.m"
      {
#line 725 "prog_util.m"
        *parse_tree__prog_util__FuncArgs_5 = parse_tree__prog_util__FuncArgs0_9;
#line 726 "prog_util.m"
        *parse_tree__prog_util__FuncReturn_6 = parse_tree__prog_util__FuncReturn0_10;
#line 725 "prog_util.m"
      }
#line 727 "prog_util.m"
    else
#line 728 "prog_util.m"
      {
#line 728 "prog_util.m"
        {
#line 728 "prog_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "predicate \140parse_tree.prog_util.pred_args_to_func_args\'/3", (MR_String) "function missing return value\?");
#line 728 "prog_util.m"
          return;
        }
#line 728 "prog_util.m"
      }
#line 721 "prog_util.m"
  }
#line 155 "prog_util.m"
}

#line 148 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__make_n_fresh_vars_5_p_0(
#line 148 "prog_util.m"
  MR_Word parse_tree__prog_util__TypeInfo_for_T_12,
#line 148 "prog_util.m"
  MR_String parse_tree__prog_util__BaseName_6,
#line 148 "prog_util.m"
  MR_Integer parse_tree__prog_util__N_7,
#line 148 "prog_util.m"
  MR_Word * parse_tree__prog_util__Vars_8,
#line 148 "prog_util.m"
  MR_Word parse_tree__prog_util__VarSet0_9,
#line 148 "prog_util.m"
  MR_Word * parse_tree__prog_util__VarSet_10)
#line 148 "prog_util.m"
{
#line 702 "prog_util.m"
  {
#line 702 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 703 "prog_util.m"
    {
#line 703 "prog_util.m"
      parse_tree__prog_util__make_n_fresh_vars_2_6_p_0(parse_tree__prog_util__TypeInfo_for_T_12, parse_tree__prog_util__BaseName_6, (MR_Integer) 0, parse_tree__prog_util__N_7, parse_tree__prog_util__Vars_8, parse_tree__prog_util__VarSet0_9, parse_tree__prog_util__VarSet_10);
#line 703 "prog_util.m"
      return;
    }
#line 702 "prog_util.m"
  }
#line 148 "prog_util.m"
}

#line 137 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__strip_builtin_qualifier_from_sym_name_2_p_0(
#line 137 "prog_util.m"
  MR_Word parse_tree__prog_util__SymName0_3,
#line 137 "prog_util.m"
  MR_Word * parse_tree__prog_util__SymName_4)
#line 137 "prog_util.m"
{
#line 696 "prog_util.m"
  {
#line 696 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__SymName0_3)) == (MR_mktag((MR_Integer) 1)));
#line 696 "prog_util.m"
    MR_String parse_tree__prog_util__Name_6;
#line 692 "prog_util.m"
    MR_Word parse_tree__prog_util__Module_5;
#line 692 "prog_util.m"
    MR_Word parse_tree__prog_util__V_7_7;

#line 692 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 692 "prog_util.m"
      {
#line 692 "prog_util.m"
        parse_tree__prog_util__Module_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__SymName0_3, (MR_Integer) 0)));
#line 692 "prog_util.m"
        parse_tree__prog_util__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__SymName0_3, (MR_Integer) 1)));
#line 693 "prog_util.m"
        {
#line 693 "prog_util.m"
          parse_tree__prog_util__V_7_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        }
#line 693 "prog_util.m"
        {
#line 693 "prog_util.m"
          parse_tree__prog_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_util__Module_5, parse_tree__prog_util__V_7_7);
        }
#line 692 "prog_util.m"
      }
#line 696 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 695 "prog_util.m"
      {
#line 695 "prog_util.m"
        MR_Word base;
#line 695 "prog_util.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 695 "prog_util.m"
        *parse_tree__prog_util__SymName_4 = base;
#line 695 "prog_util.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__Name_6));
#line 695 "prog_util.m"
      }
#line 696 "prog_util.m"
    else
#line 697 "prog_util.m"
      *parse_tree__prog_util__SymName_4 = parse_tree__prog_util__SymName0_3;
#line 696 "prog_util.m"
  }
#line 137 "prog_util.m"
}

#line 136 "prog_util.m"
void MR_CALL 
parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(
#line 136 "prog_util.m"
  MR_Word parse_tree__prog_util__ConsId0_3,
#line 136 "prog_util.m"
  MR_Word * parse_tree__prog_util__ConsId_4)
#line 136 "prog_util.m"
{
#line 686 "prog_util.m"
  {
#line 686 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_util__ConsId0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId0_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 686 "prog_util.m"
    MR_Word parse_tree__prog_util__Name0_5;
#line 686 "prog_util.m"
    MR_Integer parse_tree__prog_util__Arity_6;
#line 686 "prog_util.m"
    MR_Word parse_tree__prog_util__TypeCtor_7;

#line 683 "prog_util.m"
    if (parse_tree__prog_util__succeeded)
#line 683 "prog_util.m"
      {
#line 683 "prog_util.m"
        parse_tree__prog_util__Name0_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId0_3, (MR_Integer) 1)));
#line 683 "prog_util.m"
        parse_tree__prog_util__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId0_3, (MR_Integer) 2)));
#line 683 "prog_util.m"
        parse_tree__prog_util__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId0_3, (MR_Integer) 3)));
#line 684 "prog_util.m"
        {
#line 684 "prog_util.m"
          MR_Word parse_tree__prog_util__Name_8;
#line 696 "prog_util.m"
          MR_String parse_tree__prog_util__Name_12;
#line 692 "prog_util.m"
          MR_Word parse_tree__prog_util__Module_11;
#line 692 "prog_util.m"
          MR_Word parse_tree__prog_util__V_13_13;

#line 692 "prog_util.m"
          parse_tree__prog_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_util__Name0_5)) == (MR_mktag((MR_Integer) 1)));
#line 692 "prog_util.m"
          if (parse_tree__prog_util__succeeded)
#line 692 "prog_util.m"
            {
#line 692 "prog_util.m"
              parse_tree__prog_util__Module_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Name0_5, (MR_Integer) 0)));
#line 692 "prog_util.m"
              parse_tree__prog_util__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Name0_5, (MR_Integer) 1)));
#line 693 "prog_util.m"
              {
#line 693 "prog_util.m"
                parse_tree__prog_util__V_13_13 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
#line 693 "prog_util.m"
              {
#line 693 "prog_util.m"
                parse_tree__prog_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_util__Module_11, parse_tree__prog_util__V_13_13);
              }
#line 692 "prog_util.m"
            }
#line 696 "prog_util.m"
          if (parse_tree__prog_util__succeeded)
#line 695 "prog_util.m"
            {
#line 695 "prog_util.m"
              parse_tree__prog_util__Name_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 695 "prog_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_util__Name_8, 0) = ((MR_Box) (parse_tree__prog_util__Name_12));
#line 695 "prog_util.m"
            }
#line 696 "prog_util.m"
          else
#line 697 "prog_util.m"
            parse_tree__prog_util__Name_8 = parse_tree__prog_util__Name0_5;
#line 685 "prog_util.m"
          {
#line 685 "prog_util.m"
            MR_Word base;
#line 685 "prog_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 685 "prog_util.m"
            *parse_tree__prog_util__ConsId_4 = base;
#line 685 "prog_util.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 685 "prog_util.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Name_8));
#line 685 "prog_util.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Arity_6));
#line 685 "prog_util.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__TypeCtor_7));
#line 685 "prog_util.m"
          }
#line 684 "prog_util.m"
        }
#line 683 "prog_util.m"
      }
#line 683 "prog_util.m"
    else
#line 687 "prog_util.m"
      *parse_tree__prog_util__ConsId_4 = parse_tree__prog_util__ConsId0_3;
#line 686 "prog_util.m"
  }
#line 136 "prog_util.m"
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
#line 672 "prog_util.m"
  {
#line 672 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 672 "prog_util.m"
    MR_Word parse_tree__prog_util__HeadVar__3_3;

#line 672 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 672 "prog_util.m"
      {
#line 672 "prog_util.m"
        MR_String parse_tree__prog_util__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 672 "prog_util.m"
        MR_Word parse_tree__prog_util__V_6_6;
#line 672 "prog_util.m"
        MR_Word parse_tree__prog_util__V_7_7;

#line 673 "prog_util.m"
        {
#line 673 "prog_util.m"
          parse_tree__prog_util__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 673 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_6_6, 0) = ((MR_Box) (parse_tree__prog_util__Name_4));
#line 673 "prog_util.m"
        }
#line 673 "prog_util.m"
        {
#line 673 "prog_util.m"
          parse_tree__prog_util__V_7_7 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
        }
#line 673 "prog_util.m"
        {
#line 673 "prog_util.m"
          parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 673 "prog_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 673 "prog_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_util__V_6_6));
#line 673 "prog_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 2) = ((MR_Box) (parse_tree__prog_util__Arity_2));
#line 673 "prog_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 3) = ((MR_Box) (parse_tree__prog_util__V_7_7));
#line 673 "prog_util.m"
        }
#line 672 "prog_util.m"
      }
#line 672 "prog_util.m"
    else
#line 672 "prog_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 674 "prog_util.m"
        {
#line 674 "prog_util.m"
          MR_Integer parse_tree__prog_util__Int_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));

#line 674 "prog_util.m"
          {
#line 674 "prog_util.m"
            parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "prog_util.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 674 "prog_util.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_util__Int_8));
#line 674 "prog_util.m"
          }
#line 674 "prog_util.m"
        }
#line 672 "prog_util.m"
      else
#line 672 "prog_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 675 "prog_util.m"
          {
#line 675 "prog_util.m"
            MR_String parse_tree__prog_util__String_10 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));

#line 675 "prog_util.m"
            {
#line 675 "prog_util.m"
              parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "prog_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 675 "prog_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_util__String_10));
#line 675 "prog_util.m"
            }
#line 675 "prog_util.m"
          }
#line 672 "prog_util.m"
        else
#line 672 "prog_util.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 676 "prog_util.m"
            {
#line 676 "prog_util.m"
              MR_Float parse_tree__prog_util__Float_12 = MR_unbox_float((MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));

#line 676 "prog_util.m"
              {
#line 676 "prog_util.m"
                parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 676 "prog_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 676 "prog_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 1) = MR_box_float(parse_tree__prog_util__Float_12);
#line 676 "prog_util.m"
              }
#line 676 "prog_util.m"
            }
#line 672 "prog_util.m"
          else
#line 677 "prog_util.m"
            {
#line 677 "prog_util.m"
              MR_String parse_tree__prog_util__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));

#line 678 "prog_util.m"
              {
#line 678 "prog_util.m"
                parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 678 "prog_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 678 "prog_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_util__Name_14));
#line 678 "prog_util.m"
              }
#line 677 "prog_util.m"
            }
#line 672 "prog_util.m"
    return parse_tree__prog_util__HeadVar__3_3;
#line 672 "prog_util.m"
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
#line 652 "prog_util.m"
  while (MR_TRUE)
#line 652 "prog_util.m"
    {
#line 652 "prog_util.m"
      /* tailcall optimized into a loop */
#line 652 "prog_util.m"
      {
#line 652 "prog_util.m"
        MR_bool parse_tree__prog_util__succeeded;
#line 652 "prog_util.m"
        MR_Word parse_tree__prog_util__HeadVar__2_2;

#line 652 "prog_util.m"
        if ((parse_tree__prog_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 663 "prog_util.m"
          parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 652 "prog_util.m"
        else
#line 652 "prog_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 668 "prog_util.m"
            parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 652 "prog_util.m"
          else
#line 652 "prog_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 662 "prog_util.m"
              parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 652 "prog_util.m"
            else
#line 652 "prog_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 661 "prog_util.m"
                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 652 "prog_util.m"
              else
#line 652 "prog_util.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 656 "prog_util.m"
                  {
#line 656 "prog_util.m"
                    parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
#line 656 "prog_util.m"
                  }
#line 652 "prog_util.m"
                else
#line 652 "prog_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 659 "prog_util.m"
                    parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 652 "prog_util.m"
                  else
#line 652 "prog_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 652 "prog_util.m"
                      {
#line 652 "prog_util.m"
                        MR_Integer parse_tree__prog_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 2)));
#line 652 "prog_util.m"
                        MR_Word parse_tree__prog_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 652 "prog_util.m"
                        MR_Word parse_tree__prog_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 3)));

#line 652 "prog_util.m"
                        {
#line 652 "prog_util.m"
                          parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 652 "prog_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__prog_util__Arity_4));
#line 652 "prog_util.m"
                        }
#line 652 "prog_util.m"
                      }
#line 652 "prog_util.m"
                    else
#line 652 "prog_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 669 "prog_util.m"
                        parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 652 "prog_util.m"
                      else
#line 652 "prog_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 655 "prog_util.m"
                          {
#line 655 "prog_util.m"
                            parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
#line 655 "prog_util.m"
                          }
#line 652 "prog_util.m"
                        else
#line 652 "prog_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 666 "prog_util.m"
                            {
#line 666 "prog_util.m"
                              MR_Word parse_tree__prog_util__ConsId_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 2)));
#line 666 "prog_util.m"
                              MR_Integer parse_tree__prog_util__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));

#line 667 "prog_util.m"
                              /* direct tailcall eliminated */
#line 667 "prog_util.m"
                              {
#line 667 "prog_util.m"
                                MR_Word parse_tree__prog_util__HeadVar__1__tmp_copy_1 = parse_tree__prog_util__ConsId_30;

#line 667 "prog_util.m"
                                parse_tree__prog_util__HeadVar__1_1 = parse_tree__prog_util__HeadVar__1__tmp_copy_1;
#line 667 "prog_util.m"
                              }
#line 667 "prog_util.m"
                              continue;
#line 666 "prog_util.m"
                            }
#line 652 "prog_util.m"
                          else
#line 652 "prog_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 658 "prog_util.m"
                              {
#line 658 "prog_util.m"
                                parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
#line 658 "prog_util.m"
                              }
#line 652 "prog_util.m"
                            else
#line 652 "prog_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 654 "prog_util.m"
                                {
#line 654 "prog_util.m"
                                  parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
#line 654 "prog_util.m"
                                }
#line 652 "prog_util.m"
                              else
#line 652 "prog_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 657 "prog_util.m"
                                  {
#line 657 "prog_util.m"
                                    parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_util_scalar_common_3[3]);
#line 657 "prog_util.m"
                                  }
#line 652 "prog_util.m"
                                else
#line 652 "prog_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 670 "prog_util.m"
                                    parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 652 "prog_util.m"
                                  else
#line 652 "prog_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 653 "prog_util.m"
                                      {
#line 653 "prog_util.m"
                                        MR_Integer parse_tree__prog_util__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));

#line 653 "prog_util.m"
                                        {
#line 653 "prog_util.m"
                                          parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 653 "prog_util.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__prog_util__Arity_6));
#line 653 "prog_util.m"
                                        }
#line 653 "prog_util.m"
                                      }
#line 652 "prog_util.m"
                                    else
#line 652 "prog_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 660 "prog_util.m"
                                        parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 652 "prog_util.m"
                                      else
#line 652 "prog_util.m"
                                        if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 664 "prog_util.m"
                                          parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 652 "prog_util.m"
                                        else
#line 665 "prog_util.m"
                                          parse_tree__prog_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 652 "prog_util.m"
        return parse_tree__prog_util__HeadVar__2_2;
#line 652 "prog_util.m"
      }
#line 652 "prog_util.m"
      break;
#line 652 "prog_util.m"
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
#line 623 "prog_util.m"
  while (MR_TRUE)
#line 623 "prog_util.m"
    {
#line 623 "prog_util.m"
      /* tailcall optimized into a loop */
#line 623 "prog_util.m"
      {
#line 623 "prog_util.m"
        MR_bool parse_tree__prog_util__succeeded;
#line 623 "prog_util.m"
        MR_Integer parse_tree__prog_util__Arity_4;

#line 623 "prog_util.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 623 "prog_util.m"
          {
#line 623 "prog_util.m"
            MR_Word parse_tree__prog_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 1)));
#line 623 "prog_util.m"
            MR_Word parse_tree__prog_util__V_6_6;

#line 623 "prog_util.m"
            parse_tree__prog_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 2)));
#line 623 "prog_util.m"
            parse_tree__prog_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 3)));
#line 623 "prog_util.m"
          }
#line 623 "prog_util.m"
        else
#line 623 "prog_util.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 627 "prog_util.m"
            {
#line 627 "prog_util.m"
              MR_Word parse_tree__prog_util__SubConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 2)));
#line 627 "prog_util.m"
              MR_Integer parse_tree__prog_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 1)));

#line 628 "prog_util.m"
              /* direct tailcall eliminated */
#line 628 "prog_util.m"
              {
#line 628 "prog_util.m"
                MR_Word parse_tree__prog_util__ConsId__tmp_copy_3 = parse_tree__prog_util__SubConsId_8;

#line 628 "prog_util.m"
                parse_tree__prog_util__ConsId_3 = parse_tree__prog_util__ConsId__tmp_copy_3;
#line 628 "prog_util.m"
              }
#line 628 "prog_util.m"
              continue;
#line 627 "prog_util.m"
            }
#line 623 "prog_util.m"
          else
#line 623 "prog_util.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 625 "prog_util.m"
              parse_tree__prog_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 1)));
#line 623 "prog_util.m"
            else
#line 623 "prog_util.m"
              if (((((((((((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 7)))) || (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 6)))))) || (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 9)))))) || (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 5)))))) || (((((MR_tag((MR_Word) parse_tree__prog_util__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 8))))))
#line 636 "prog_util.m"
                parse_tree__prog_util__Arity_4 = (MR_Integer) 0;
#line 623 "prog_util.m"
              else
#line 648 "prog_util.m"
                {
#line 649 "prog_util.m"
                  {
#line 649 "prog_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_util", (MR_String) "function \140parse_tree.prog_util.cons_id_arity\'/1", (MR_String) "unexpected cons_id");
                  }
#line 648 "prog_util.m"
                }
#line 623 "prog_util.m"
        return parse_tree__prog_util__Arity_4;
#line 623 "prog_util.m"
      }
#line 623 "prog_util.m"
      break;
#line 623 "prog_util.m"
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
#line 603 "prog_util.m"
  {
#line 603 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 603 "prog_util.m"
    if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 609 "prog_util.m"
      {
#line 609 "prog_util.m"
        MR_Char parse_tree__prog_util__Char_14;
#line 609 "prog_util.m"
        MR_Word parse_tree__prog_util__SymName_16;
#line 609 "prog_util.m"
        MR_String parse_tree__prog_util__V_17_17;
#line 609 "prog_util.m"
        MR_Word parse_tree__prog_util__V_18_18;
#line 609 "prog_util.m"
        MR_Word parse_tree__prog_util__Context_38;

#line 609 "prog_util.m"
        parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 609 "prog_util.m"
        if (parse_tree__prog_util__succeeded)
#line 609 "prog_util.m"
          {
#line 609 "prog_util.m"
            parse_tree__prog_util__Char_14 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 610 "prog_util.m"
            {
#line 610 "prog_util.m"
              parse_tree__prog_util__V_17_17 = mercury__string__from_char_1_f_0(parse_tree__prog_util__Char_14);
            }
#line 611 "prog_util.m"
            parse_tree__prog_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "prog_util.m"
            {
#line 610 "prog_util.m"
              parse_tree__prog_util__SymName_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 610 "prog_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_util__SymName_16, 0) = ((MR_Box) (parse_tree__prog_util__V_17_17));
#line 610 "prog_util.m"
            }
#line 218 "prog_util.m"
            {
#line 218 "prog_util.m"
              mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_38);
            }
#line 219 "prog_util.m"
            {
#line 219 "prog_util.m"
              parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__prog_util__TypeInfo_for_T_34, parse_tree__prog_util__SymName_16, parse_tree__prog_util__V_18_18, parse_tree__prog_util__Context_38, parse_tree__prog_util__Term_3);
            }
#line 219 "prog_util.m"
            parse_tree__prog_util__succeeded = MR_TRUE;
#line 609 "prog_util.m"
          }
#line 609 "prog_util.m"
      }
#line 603 "prog_util.m"
    else
#line 603 "prog_util.m"
      if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 618 "prog_util.m"
        {
#line 618 "prog_util.m"
          MR_Word parse_tree__prog_util__SymName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 618 "prog_util.m"
          MR_Word parse_tree__prog_util__Context_42;
#line 618 "prog_util.m"
          MR_Integer parse_tree__prog_util___Arity_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 2)));
#line 618 "prog_util.m"
          MR_Word parse_tree__prog_util___TypeCtor_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 3)));

#line 218 "prog_util.m"
          {
#line 218 "prog_util.m"
            mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_42);
          }
#line 219 "prog_util.m"
          {
#line 219 "prog_util.m"
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__prog_util__TypeInfo_for_T_34, parse_tree__prog_util__SymName_29, parse_tree__prog_util__HeadVar__2_2, parse_tree__prog_util__Context_42, parse_tree__prog_util__Term_3);
          }
#line 618 "prog_util.m"
          parse_tree__prog_util__succeeded = MR_TRUE;
#line 618 "prog_util.m"
        }
#line 603 "prog_util.m"
      else
#line 603 "prog_util.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 606 "prog_util.m"
          {
#line 606 "prog_util.m"
            MR_Float parse_tree__prog_util__Float_9;
#line 606 "prog_util.m"
            MR_Word parse_tree__prog_util__Context_11;
#line 606 "prog_util.m"
            MR_Word parse_tree__prog_util__V_12_12;
#line 606 "prog_util.m"
            MR_Word parse_tree__prog_util__V_13_13;

#line 606 "prog_util.m"
            parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 606 "prog_util.m"
            if (parse_tree__prog_util__succeeded)
#line 606 "prog_util.m"
              {
#line 606 "prog_util.m"
                parse_tree__prog_util__Float_9 = MR_unbox_float((MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 607 "prog_util.m"
                {
#line 607 "prog_util.m"
                  mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_11);
                }
#line 608 "prog_util.m"
                parse_tree__prog_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 608 "prog_util.m"
                {
#line 608 "prog_util.m"
                  parse_tree__prog_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 608 "prog_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_util__V_12_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 608 "prog_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_util__V_12_12, 1) = MR_box_float(parse_tree__prog_util__Float_9);
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
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__V_12_12));
#line 608 "prog_util.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__V_13_13));
#line 608 "prog_util.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_11));
#line 608 "prog_util.m"
                }
#line 608 "prog_util.m"
                parse_tree__prog_util__succeeded = MR_TRUE;
#line 606 "prog_util.m"
              }
#line 606 "prog_util.m"
          }
#line 603 "prog_util.m"
        else
#line 603 "prog_util.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 603 "prog_util.m"
            {
#line 603 "prog_util.m"
              MR_Integer parse_tree__prog_util__Int_4;
#line 603 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_6;
#line 603 "prog_util.m"
              MR_Word parse_tree__prog_util__V_7_7;
#line 603 "prog_util.m"
              MR_Word parse_tree__prog_util__V_8_8;

#line 603 "prog_util.m"
              parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 603 "prog_util.m"
              if (parse_tree__prog_util__succeeded)
#line 603 "prog_util.m"
                {
#line 603 "prog_util.m"
                  parse_tree__prog_util__Int_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 604 "prog_util.m"
                  {
#line 604 "prog_util.m"
                    mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_6);
                  }
#line 605 "prog_util.m"
                  parse_tree__prog_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 605 "prog_util.m"
                  {
#line 605 "prog_util.m"
                    parse_tree__prog_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 605 "prog_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_7_7, 0) = ((MR_Box) (parse_tree__prog_util__Int_4));
#line 605 "prog_util.m"
                  }
#line 605 "prog_util.m"
                  {
#line 605 "prog_util.m"
                    MR_Word base;
#line 605 "prog_util.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 605 "prog_util.m"
                    *parse_tree__prog_util__Term_3 = base;
#line 605 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__V_7_7));
#line 605 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__V_8_8));
#line 605 "prog_util.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_6));
#line 605 "prog_util.m"
                  }
#line 605 "prog_util.m"
                  parse_tree__prog_util__succeeded = MR_TRUE;
#line 603 "prog_util.m"
                }
#line 603 "prog_util.m"
            }
#line 603 "prog_util.m"
          else
#line 603 "prog_util.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 612 "prog_util.m"
              {
#line 612 "prog_util.m"
                MR_String parse_tree__prog_util__String_19;
#line 612 "prog_util.m"
                MR_Word parse_tree__prog_util__Context_21;
#line 612 "prog_util.m"
                MR_Word parse_tree__prog_util__V_22_22;
#line 612 "prog_util.m"
                MR_Word parse_tree__prog_util__V_23_23;

#line 612 "prog_util.m"
                parse_tree__prog_util__succeeded = (parse_tree__prog_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 612 "prog_util.m"
                if (parse_tree__prog_util__succeeded)
#line 612 "prog_util.m"
                  {
#line 612 "prog_util.m"
                    parse_tree__prog_util__String_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 613 "prog_util.m"
                    {
#line 613 "prog_util.m"
                      mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_21);
                    }
#line 614 "prog_util.m"
                    parse_tree__prog_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 614 "prog_util.m"
                    {
#line 614 "prog_util.m"
                      parse_tree__prog_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 614 "prog_util.m"
                      MR_hl_field(MR_mktag(2), parse_tree__prog_util__V_22_22, 0) = ((MR_Box) (parse_tree__prog_util__String_19));
#line 614 "prog_util.m"
                    }
#line 614 "prog_util.m"
                    {
#line 614 "prog_util.m"
                      MR_Word base;
#line 614 "prog_util.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 614 "prog_util.m"
                      *parse_tree__prog_util__Term_3 = base;
#line 614 "prog_util.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__V_22_22));
#line 614 "prog_util.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__V_23_23));
#line 614 "prog_util.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_21));
#line 614 "prog_util.m"
                    }
#line 614 "prog_util.m"
                    parse_tree__prog_util__succeeded = MR_TRUE;
#line 612 "prog_util.m"
                  }
#line 612 "prog_util.m"
              }
#line 603 "prog_util.m"
            else
#line 603 "prog_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 615 "prog_util.m"
                {
#line 615 "prog_util.m"
                  MR_Word parse_tree__prog_util__Context_46;

#line 218 "prog_util.m"
                  {
#line 218 "prog_util.m"
                    mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_46);
                  }
#line 219 "prog_util.m"
                  {
#line 219 "prog_util.m"
                    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__prog_util__TypeInfo_for_T_34, (MR_Word) &parse_tree__prog_util_scalar_common_3[2], parse_tree__prog_util__HeadVar__2_2, parse_tree__prog_util__Context_46, parse_tree__prog_util__Term_3);
                  }
#line 615 "prog_util.m"
                  parse_tree__prog_util__succeeded = MR_TRUE;
#line 615 "prog_util.m"
                }
#line 603 "prog_util.m"
              else
#line 603 "prog_util.m"
                parse_tree__prog_util__succeeded = MR_FALSE;
#line 603 "prog_util.m"
    return parse_tree__prog_util__succeeded;
#line 603 "prog_util.m"
  }
#line 116 "prog_util.m"
}

#line 419 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_4(
#line 419 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 419 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 419 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2)
#line 419 "prog_util.m"
{
#line 419 "prog_util.m"
  {
#line 419 "prog_util.m"
    MR_Box parse_tree__prog_util__closure = parse_tree__prog_util__closure_arg;
#line 419 "prog_util.m"
    MR_Word parse_tree__prog_util__conv3_Catch_8;

#line 419 "prog_util.m"
    {
#line 419 "prog_util.m"
      parse_tree__prog_util__rename_in_catch_expr_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv3_Catch_8);
    }
#line 419 "prog_util.m"
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv3_Catch_8));
#line 419 "prog_util.m"
  }
#line 419 "prog_util.m"
}

#line 382 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_3(
#line 382 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 382 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 382 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2)
#line 382 "prog_util.m"
{
#line 382 "prog_util.m"
  {
#line 382 "prog_util.m"
    MR_Box parse_tree__prog_util__closure = parse_tree__prog_util__closure_arg;
#line 382 "prog_util.m"
    MR_Word parse_tree__prog_util__conv2_TMV_8;

#line 382 "prog_util.m"
    {
#line 382 "prog_util.m"
      parse_tree__prog_util__rename_in_trace_mutable_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv2_TMV_8);
    }
#line 382 "prog_util.m"
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv2_TMV_8));
#line 382 "prog_util.m"
  }
#line 382 "prog_util.m"
}

#line 402 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_2(
#line 402 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 402 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 402 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2)
#line 402 "prog_util.m"
{
#line 402 "prog_util.m"
  {
#line 402 "prog_util.m"
    MR_Box parse_tree__prog_util__closure = parse_tree__prog_util__closure_arg;
#line 402 "prog_util.m"
    MR_Word parse_tree__prog_util__conv1_Goal_8;

#line 402 "prog_util.m"
    {
#line 402 "prog_util.m"
      parse_tree__prog_util__rename_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv1_Goal_8);
    }
#line 402 "prog_util.m"
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv1_Goal_8));
#line 402 "prog_util.m"
  }
#line 402 "prog_util.m"
}

#line 397 "prog_util.m"
static void MR_CALL 
parse_tree__prog_util__rename_in_goal_4_p_0_1(
#line 397 "prog_util.m"
  MR_Box parse_tree__prog_util__closure_arg,
#line 397 "prog_util.m"
  MR_Box parse_tree__prog_util__wrapper_arg_1,
#line 397 "prog_util.m"
  MR_Box * parse_tree__prog_util__wrapper_arg_2)
#line 397 "prog_util.m"
{
#line 397 "prog_util.m"
  {
#line 397 "prog_util.m"
    MR_Box parse_tree__prog_util__closure = parse_tree__prog_util__closure_arg;
#line 397 "prog_util.m"
    MR_Word parse_tree__prog_util__conv0_Var_8;

#line 397 "prog_util.m"
    {
#line 397 "prog_util.m"
      parse_tree__prog_util__rename_in_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_util__wrapper_arg_1), &parse_tree__prog_util__conv0_Var_8);
    }
#line 397 "prog_util.m"
    *parse_tree__prog_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_util__conv0_Var_8));
#line 397 "prog_util.m"
  }
#line 397 "prog_util.m"
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
#line 279 "prog_util.m"
  {
#line 279 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 279 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 0))))
#line 282 "prog_util.m"
      {
#line 282 "prog_util.m"
        MR_Word parse_tree__prog_util__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)));
#line 282 "prog_util.m"
        MR_Word parse_tree__prog_util__SubGoalA0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 282 "prog_util.m"
        MR_Word parse_tree__prog_util__SubGoalB0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 282 "prog_util.m"
        MR_Word parse_tree__prog_util__SubGoalA_13;
#line 282 "prog_util.m"
        MR_Word parse_tree__prog_util__SubGoalB_14;

#line 283 "prog_util.m"
        {
#line 283 "prog_util.m"
          parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalA0_11, &parse_tree__prog_util__SubGoalA_13);
        }
#line 284 "prog_util.m"
        {
#line 284 "prog_util.m"
          parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalB0_12, &parse_tree__prog_util__SubGoalB_14);
        }
#line 285 "prog_util.m"
        {
#line 285 "prog_util.m"
          MR_Word base;
#line 285 "prog_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 285 "prog_util.m"
          *parse_tree__prog_util__Goal_8 = base;
#line 285 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__Context_10));
#line 285 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__SubGoalA_13));
#line 285 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoalB_14));
#line 285 "prog_util.m"
        }
#line 282 "prog_util.m"
      }
#line 279 "prog_util.m"
    else
#line 279 "prog_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 1))))
#line 287 "prog_util.m"
        {
#line 287 "prog_util.m"
          MR_Word parse_tree__prog_util__Context_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)));
#line 287 "prog_util.m"
          MR_Word parse_tree__prog_util__SubGoalA0_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 287 "prog_util.m"
          MR_Word parse_tree__prog_util__SubGoalB0_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 287 "prog_util.m"
          MR_Word parse_tree__prog_util__SubGoalA_83;
#line 287 "prog_util.m"
          MR_Word parse_tree__prog_util__SubGoalB_84;

#line 288 "prog_util.m"
          {
#line 288 "prog_util.m"
            parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalA0_81, &parse_tree__prog_util__SubGoalA_83);
          }
#line 289 "prog_util.m"
          {
#line 289 "prog_util.m"
            parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalB0_82, &parse_tree__prog_util__SubGoalB_84);
          }
#line 290 "prog_util.m"
          {
#line 290 "prog_util.m"
            MR_Word base;
#line 290 "prog_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 290 "prog_util.m"
            *parse_tree__prog_util__Goal_8 = base;
#line 290 "prog_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Context_80));
#line 290 "prog_util.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__SubGoalA_83));
#line 290 "prog_util.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoalB_84));
#line 290 "prog_util.m"
          }
#line 287 "prog_util.m"
        }
#line 279 "prog_util.m"
      else
#line 279 "prog_util.m"
        if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 311 "prog_util.m"
          {
#line 311 "prog_util.m"
            MR_Word parse_tree__prog_util__Context_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 311 "prog_util.m"
            MR_Word parse_tree__prog_util__SubGoal0_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 311 "prog_util.m"
            MR_Word parse_tree__prog_util__SubGoal_101;
#line 311 "prog_util.m"
            MR_Word parse_tree__prog_util__Vars0_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 311 "prog_util.m"
            MR_Word parse_tree__prog_util__Vars_103;

#line 312 "prog_util.m"
            {
#line 312 "prog_util.m"
              parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_102, &parse_tree__prog_util__Vars_103);
            }
#line 313 "prog_util.m"
            {
#line 313 "prog_util.m"
              parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_100, &parse_tree__prog_util__SubGoal_101);
            }
#line 314 "prog_util.m"
            {
#line 314 "prog_util.m"
              MR_Word base;
#line 314 "prog_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 314 "prog_util.m"
              *parse_tree__prog_util__Goal_8 = base;
#line 314 "prog_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 314 "prog_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_99));
#line 314 "prog_util.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_103));
#line 314 "prog_util.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_101));
#line 314 "prog_util.m"
            }
#line 311 "prog_util.m"
          }
#line 279 "prog_util.m"
        else
#line 279 "prog_util.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 316 "prog_util.m"
            {
#line 316 "prog_util.m"
              MR_Word parse_tree__prog_util__Context_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 316 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal0_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 316 "prog_util.m"
              MR_Word parse_tree__prog_util__SubGoal_106;
#line 316 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars0_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 316 "prog_util.m"
              MR_Word parse_tree__prog_util__Vars_108;

#line 317 "prog_util.m"
              {
#line 317 "prog_util.m"
                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_107, &parse_tree__prog_util__Vars_108);
              }
#line 318 "prog_util.m"
              {
#line 318 "prog_util.m"
                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_105, &parse_tree__prog_util__SubGoal_106);
              }
#line 319 "prog_util.m"
              {
#line 319 "prog_util.m"
                MR_Word base;
#line 319 "prog_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 319 "prog_util.m"
                *parse_tree__prog_util__Goal_8 = base;
#line 319 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 319 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_104));
#line 319 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_108));
#line 319 "prog_util.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_106));
#line 319 "prog_util.m"
              }
#line 316 "prog_util.m"
            }
#line 279 "prog_util.m"
          else
#line 279 "prog_util.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 389 "prog_util.m"
              {
#line 389 "prog_util.m"
                MR_Word parse_tree__prog_util__TypeCtorInfo_194_194;
#line 389 "prog_util.m"
                MR_Word parse_tree__prog_util__InVars0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 389 "prog_util.m"
                MR_Word parse_tree__prog_util__OutVars0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 389 "prog_util.m"
                MR_Word parse_tree__prog_util__MaybeVars0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 389 "prog_util.m"
                MR_Word parse_tree__prog_util__MainGoal0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 389 "prog_util.m"
                MR_Word parse_tree__prog_util__OrElseGoal0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 389 "prog_util.m"
                MR_Word parse_tree__prog_util__InVars_42;
#line 389 "prog_util.m"
                MR_Word parse_tree__prog_util__OutVars_43;
#line 389 "prog_util.m"
                MR_Word parse_tree__prog_util__MaybeVars_44;
#line 389 "prog_util.m"
                MR_Word parse_tree__prog_util__MainGoal_47;
#line 389 "prog_util.m"
                MR_Word parse_tree__prog_util__OrElseGoal_48;
#line 389 "prog_util.m"
                MR_Word parse_tree__prog_util__V_77_77;
#line 389 "prog_util.m"
                MR_Word parse_tree__prog_util__Context_154 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));

#line 390 "prog_util.m"
                {
#line 390 "prog_util.m"
                  parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__InVars0_37, &parse_tree__prog_util__InVars_42);
                }
#line 391 "prog_util.m"
                {
#line 391 "prog_util.m"
                  parse_tree__prog_util__rename_in_atomic_varlist_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__OutVars0_38, &parse_tree__prog_util__OutVars_43);
                }
#line 395 "prog_util.m"
                if ((parse_tree__prog_util__MaybeVars0_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 394 "prog_util.m"
                  parse_tree__prog_util__MaybeVars_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 395 "prog_util.m"
                else
#line 396 "prog_util.m"
                  {
#line 396 "prog_util.m"
                    MR_Word parse_tree__prog_util__TypeInfo_191_191;
#line 396 "prog_util.m"
                    MR_Word parse_tree__prog_util__TransVars0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeVars0_39, (MR_Integer) 0)));
#line 396 "prog_util.m"
                    MR_Word parse_tree__prog_util__TransVars_46;
#line 396 "prog_util.m"
                    MR_Word parse_tree__prog_util__V_76_76;

#line 397 "prog_util.m"
                    {
#line 397 "prog_util.m"
                      parse_tree__prog_util__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 397 "prog_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_76_76, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[0]));
#line 397 "prog_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_76_76, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_1));
#line 397 "prog_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 397 "prog_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_76_76, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
#line 397 "prog_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_76_76, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 397 "prog_util.m"
                    }
#line 5324 "parse_tree.prog_util.c"
                    parse_tree__prog_util__TypeInfo_191_191 = (MR_Word) &parse_tree__prog_util_scalar_common_1[1];
#line 397 "prog_util.m"
                    {
#line 397 "prog_util.m"
                      mercury__list__map_3_p_0(parse_tree__prog_util__TypeInfo_191_191, parse_tree__prog_util__TypeInfo_191_191, parse_tree__prog_util__V_76_76, parse_tree__prog_util__TransVars0_45, &parse_tree__prog_util__TransVars_46);
                    }
#line 399 "prog_util.m"
                    {
#line 399 "prog_util.m"
                      parse_tree__prog_util__MaybeVars_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 399 "prog_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeVars_44, 0) = ((MR_Box) (parse_tree__prog_util__TransVars_46));
#line 399 "prog_util.m"
                    }
#line 396 "prog_util.m"
                  }
#line 401 "prog_util.m"
                {
#line 401 "prog_util.m"
                  parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__MainGoal0_40, &parse_tree__prog_util__MainGoal_47);
                }
#line 402 "prog_util.m"
                {
#line 402 "prog_util.m"
                  parse_tree__prog_util__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 402 "prog_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_77_77, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[1]));
#line 402 "prog_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_77_77, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_2));
#line 402 "prog_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 402 "prog_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_77_77, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
#line 402 "prog_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_77_77, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 402 "prog_util.m"
                }
#line 5362 "parse_tree.prog_util.c"
                parse_tree__prog_util__TypeCtorInfo_194_194 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
#line 402 "prog_util.m"
                {
#line 402 "prog_util.m"
                  mercury__list__map_3_p_0(parse_tree__prog_util__TypeCtorInfo_194_194, parse_tree__prog_util__TypeCtorInfo_194_194, parse_tree__prog_util__V_77_77, parse_tree__prog_util__OrElseGoal0_41, &parse_tree__prog_util__OrElseGoal_48);
                }
#line 403 "prog_util.m"
                {
#line 403 "prog_util.m"
                  MR_Word base;
#line 403 "prog_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 403 "prog_util.m"
                  *parse_tree__prog_util__Goal_8 = base;
#line 403 "prog_util.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 403 "prog_util.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_154));
#line 403 "prog_util.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__InVars_42));
#line 403 "prog_util.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__OutVars_43));
#line 403 "prog_util.m"
                  MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__MaybeVars_44));
#line 403 "prog_util.m"
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__MainGoal_47));
#line 403 "prog_util.m"
                  MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__OrElseGoal_48));
#line 403 "prog_util.m"
                }
#line 389 "prog_util.m"
              }
#line 279 "prog_util.m"
            else
#line 279 "prog_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 456 "prog_util.m"
                {
#line 456 "prog_util.m"
                  MR_Word parse_tree__prog_util__SymName_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 456 "prog_util.m"
                  MR_Word parse_tree__prog_util__Context_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 456 "prog_util.m"
                  MR_Word parse_tree__prog_util__Purity_181 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 456 "prog_util.m"
                  MR_Word parse_tree__prog_util__Terms0_182 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 456 "prog_util.m"
                  MR_Word parse_tree__prog_util__Terms_183;

#line 457 "prog_util.m"
                  {
#line 457 "prog_util.m"
                    mercury__term__rename_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_util__Terms0_182, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, &parse_tree__prog_util__Terms_183);
                  }
#line 458 "prog_util.m"
                  {
#line 458 "prog_util.m"
                    MR_Word base;
#line 458 "prog_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 458 "prog_util.m"
                    *parse_tree__prog_util__Goal_8 = base;
#line 458 "prog_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 458 "prog_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_180));
#line 458 "prog_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SymName_68));
#line 458 "prog_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__Terms_183));
#line 458 "prog_util.m"
                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__Purity_181));
#line 458 "prog_util.m"
                  }
#line 456 "prog_util.m"
                }
#line 279 "prog_util.m"
              else
#line 279 "prog_util.m"
                if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 292 "prog_util.m"
                  {
#line 292 "prog_util.m"
                    MR_Word parse_tree__prog_util__Context_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 292 "prog_util.m"
                    MR_Word parse_tree__prog_util__SubGoalA0_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 292 "prog_util.m"
                    MR_Word parse_tree__prog_util__SubGoalB0_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 292 "prog_util.m"
                    MR_Word parse_tree__prog_util__SubGoalA_88;
#line 292 "prog_util.m"
                    MR_Word parse_tree__prog_util__SubGoalB_89;

#line 293 "prog_util.m"
                    {
#line 293 "prog_util.m"
                      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalA0_86, &parse_tree__prog_util__SubGoalA_88);
                    }
#line 294 "prog_util.m"
                    {
#line 294 "prog_util.m"
                      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalB0_87, &parse_tree__prog_util__SubGoalB_89);
                    }
#line 295 "prog_util.m"
                    {
#line 295 "prog_util.m"
                      MR_Word base;
#line 295 "prog_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 295 "prog_util.m"
                      *parse_tree__prog_util__Goal_8 = base;
#line 295 "prog_util.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 295 "prog_util.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_85));
#line 295 "prog_util.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoalA_88));
#line 295 "prog_util.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoalB_89));
#line 295 "prog_util.m"
                    }
#line 292 "prog_util.m"
                  }
#line 279 "prog_util.m"
                else
#line 279 "prog_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 437 "prog_util.m"
                    {
#line 437 "prog_util.m"
                      MR_Word parse_tree__prog_util__Context_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 437 "prog_util.m"
                      MR_Word parse_tree__prog_util__SubGoalA0_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 437 "prog_util.m"
                      MR_Word parse_tree__prog_util__SubGoalB0_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 437 "prog_util.m"
                      MR_Word parse_tree__prog_util__SubGoalA_168;
#line 437 "prog_util.m"
                      MR_Word parse_tree__prog_util__SubGoalB_169;

#line 438 "prog_util.m"
                      {
#line 438 "prog_util.m"
                        parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalA0_166, &parse_tree__prog_util__SubGoalA_168);
                      }
#line 439 "prog_util.m"
                      {
#line 439 "prog_util.m"
                        parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalB0_167, &parse_tree__prog_util__SubGoalB_169);
                      }
#line 440 "prog_util.m"
                      {
#line 440 "prog_util.m"
                        MR_Word base;
#line 440 "prog_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 440 "prog_util.m"
                        *parse_tree__prog_util__Goal_8 = base;
#line 440 "prog_util.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 440 "prog_util.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_165));
#line 440 "prog_util.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoalA_168));
#line 440 "prog_util.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoalB_169));
#line 440 "prog_util.m"
                      }
#line 437 "prog_util.m"
                    }
#line 279 "prog_util.m"
                  else
#line 279 "prog_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 452 "prog_util.m"
                      {
#line 452 "prog_util.m"
                        MR_String parse_tree__prog_util__Name_65 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 452 "prog_util.m"
                        MR_Word parse_tree__prog_util__Terms0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 452 "prog_util.m"
                        MR_Word parse_tree__prog_util__Terms_67;
#line 452 "prog_util.m"
                        MR_Word parse_tree__prog_util__Context_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));

#line 453 "prog_util.m"
                        {
#line 453 "prog_util.m"
                          mercury__term__rename_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_util__Terms0_66, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, &parse_tree__prog_util__Terms_67);
                        }
#line 454 "prog_util.m"
                        {
#line 454 "prog_util.m"
                          MR_Word base;
#line 454 "prog_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 454 "prog_util.m"
                          *parse_tree__prog_util__Goal_8 = base;
#line 454 "prog_util.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 454 "prog_util.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_179));
#line 454 "prog_util.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Name_65));
#line 454 "prog_util.m"
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__Terms_67));
#line 454 "prog_util.m"
                        }
#line 452 "prog_util.m"
                      }
#line 279 "prog_util.m"
                    else
#line 279 "prog_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 19))))
#line 443 "prog_util.m"
                        {
#line 443 "prog_util.m"
                          MR_Word parse_tree__prog_util__Cond0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 443 "prog_util.m"
                          MR_Word parse_tree__prog_util__Cond_64;
#line 443 "prog_util.m"
                          MR_Word parse_tree__prog_util__Context_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 443 "prog_util.m"
                          MR_Word parse_tree__prog_util__Vars0_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 443 "prog_util.m"
                          MR_Word parse_tree__prog_util__Vars_172;
#line 443 "prog_util.m"
                          MR_Word parse_tree__prog_util__StateVars0_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 443 "prog_util.m"
                          MR_Word parse_tree__prog_util__StateVars_174;
#line 443 "prog_util.m"
                          MR_Word parse_tree__prog_util__Then0_175 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 443 "prog_util.m"
                          MR_Word parse_tree__prog_util__Then_176;
#line 443 "prog_util.m"
                          MR_Word parse_tree__prog_util__Else0_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 443 "prog_util.m"
                          MR_Word parse_tree__prog_util__Else_178;

#line 444 "prog_util.m"
                          {
#line 444 "prog_util.m"
                            parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_171, &parse_tree__prog_util__Vars_172);
                          }
#line 445 "prog_util.m"
                          {
#line 445 "prog_util.m"
                            parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_173, &parse_tree__prog_util__StateVars_174);
                          }
#line 446 "prog_util.m"
                          {
#line 446 "prog_util.m"
                            parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Cond0_63, &parse_tree__prog_util__Cond_64);
                          }
#line 447 "prog_util.m"
                          {
#line 447 "prog_util.m"
                            parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Then0_175, &parse_tree__prog_util__Then_176);
                          }
#line 448 "prog_util.m"
                          {
#line 448 "prog_util.m"
                            parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Else0_177, &parse_tree__prog_util__Else_178);
                          }
#line 449 "prog_util.m"
                          {
#line 449 "prog_util.m"
                            MR_Word base;
#line 449 "prog_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 449 "prog_util.m"
                            *parse_tree__prog_util__Goal_8 = base;
#line 449 "prog_util.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 449 "prog_util.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_170));
#line 449 "prog_util.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_172));
#line 449 "prog_util.m"
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__StateVars_174));
#line 449 "prog_util.m"
                            MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__Cond_64));
#line 449 "prog_util.m"
                            MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__Then_176));
#line 449 "prog_util.m"
                            MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__Else_178));
#line 449 "prog_util.m"
                          }
#line 443 "prog_util.m"
                        }
#line 279 "prog_util.m"
                      else
#line 279 "prog_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 432 "prog_util.m"
                          {
#line 432 "prog_util.m"
                            MR_Word parse_tree__prog_util__Context_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 432 "prog_util.m"
                            MR_Word parse_tree__prog_util__SubGoalA0_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 432 "prog_util.m"
                            MR_Word parse_tree__prog_util__SubGoalB0_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 432 "prog_util.m"
                            MR_Word parse_tree__prog_util__SubGoalA_163;
#line 432 "prog_util.m"
                            MR_Word parse_tree__prog_util__SubGoalB_164;

#line 433 "prog_util.m"
                            {
#line 433 "prog_util.m"
                              parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalA0_161, &parse_tree__prog_util__SubGoalA_163);
                            }
#line 434 "prog_util.m"
                            {
#line 434 "prog_util.m"
                              parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoalB0_162, &parse_tree__prog_util__SubGoalB_164);
                            }
#line 435 "prog_util.m"
                            {
#line 435 "prog_util.m"
                              MR_Word base;
#line 435 "prog_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 435 "prog_util.m"
                              *parse_tree__prog_util__Goal_8 = base;
#line 435 "prog_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 435 "prog_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_160));
#line 435 "prog_util.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoalA_163));
#line 435 "prog_util.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoalB_164));
#line 435 "prog_util.m"
                            }
#line 432 "prog_util.m"
                          }
#line 279 "prog_util.m"
                        else
#line 279 "prog_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 297 "prog_util.m"
                            {
#line 297 "prog_util.m"
                              MR_Word parse_tree__prog_util__SubGoal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 297 "prog_util.m"
                              MR_Word parse_tree__prog_util__SubGoal_16;
#line 297 "prog_util.m"
                              MR_Word parse_tree__prog_util__Context_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));

#line 298 "prog_util.m"
                              {
#line 298 "prog_util.m"
                                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_15, &parse_tree__prog_util__SubGoal_16);
                              }
#line 299 "prog_util.m"
                              {
#line 299 "prog_util.m"
                                MR_Word base;
#line 299 "prog_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 299 "prog_util.m"
                                *parse_tree__prog_util__Goal_8 = base;
#line 299 "prog_util.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 299 "prog_util.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_90));
#line 299 "prog_util.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__SubGoal_16));
#line 299 "prog_util.m"
                              }
#line 297 "prog_util.m"
                            }
#line 279 "prog_util.m"
                          else
#line 279 "prog_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 346 "prog_util.m"
                              {
#line 346 "prog_util.m"
                                MR_Word parse_tree__prog_util__Context_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 346 "prog_util.m"
                                MR_Word parse_tree__prog_util__SubGoal0_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 346 "prog_util.m"
                                MR_Word parse_tree__prog_util__SubGoal_130;
#line 346 "prog_util.m"
                                MR_Word parse_tree__prog_util__Vars0_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 346 "prog_util.m"
                                MR_Word parse_tree__prog_util__Vars_132;
#line 346 "prog_util.m"
                                MR_Word parse_tree__prog_util__StateVars0_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 346 "prog_util.m"
                                MR_Word parse_tree__prog_util__DotSVars0_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 346 "prog_util.m"
                                MR_Word parse_tree__prog_util__ColonSVars0_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 346 "prog_util.m"
                                MR_Word parse_tree__prog_util__StateVars_136;
#line 346 "prog_util.m"
                                MR_Word parse_tree__prog_util__DotSVars_137;
#line 346 "prog_util.m"
                                MR_Word parse_tree__prog_util__ColonSVars_138;

#line 347 "prog_util.m"
                                {
#line 347 "prog_util.m"
                                  parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_131, &parse_tree__prog_util__Vars_132);
                                }
#line 348 "prog_util.m"
                                {
#line 348 "prog_util.m"
                                  parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_133, &parse_tree__prog_util__StateVars_136);
                                }
#line 349 "prog_util.m"
                                {
#line 349 "prog_util.m"
                                  parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__DotSVars0_134, &parse_tree__prog_util__DotSVars_137);
                                }
#line 350 "prog_util.m"
                                {
#line 350 "prog_util.m"
                                  parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__ColonSVars0_135, &parse_tree__prog_util__ColonSVars_138);
                                }
#line 351 "prog_util.m"
                                {
#line 351 "prog_util.m"
                                  parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_129, &parse_tree__prog_util__SubGoal_130);
                                }
#line 352 "prog_util.m"
                                {
#line 352 "prog_util.m"
                                  MR_Word base;
#line 352 "prog_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 352 "prog_util.m"
                                  *parse_tree__prog_util__Goal_8 = base;
#line 352 "prog_util.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 352 "prog_util.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_128));
#line 352 "prog_util.m"
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_132));
#line 352 "prog_util.m"
                                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__StateVars_136));
#line 352 "prog_util.m"
                                  MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__DotSVars_137));
#line 352 "prog_util.m"
                                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__ColonSVars_138));
#line 352 "prog_util.m"
                                  MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__SubGoal_130));
#line 352 "prog_util.m"
                                }
#line 346 "prog_util.m"
                              }
#line 279 "prog_util.m"
                            else
#line 279 "prog_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 336 "prog_util.m"
                                {
#line 336 "prog_util.m"
                                  MR_Word parse_tree__prog_util__Context_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 336 "prog_util.m"
                                  MR_Word parse_tree__prog_util__SubGoal0_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 336 "prog_util.m"
                                  MR_Word parse_tree__prog_util__SubGoal_119;
#line 336 "prog_util.m"
                                  MR_Word parse_tree__prog_util__Vars0_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 336 "prog_util.m"
                                  MR_Word parse_tree__prog_util__Vars_121;
#line 336 "prog_util.m"
                                  MR_Word parse_tree__prog_util__StateVars0_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 336 "prog_util.m"
                                  MR_Word parse_tree__prog_util__DotSVars0_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 336 "prog_util.m"
                                  MR_Word parse_tree__prog_util__ColonSVars0_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 336 "prog_util.m"
                                  MR_Word parse_tree__prog_util__StateVars_125;
#line 336 "prog_util.m"
                                  MR_Word parse_tree__prog_util__DotSVars_126;
#line 336 "prog_util.m"
                                  MR_Word parse_tree__prog_util__ColonSVars_127;

#line 337 "prog_util.m"
                                  {
#line 337 "prog_util.m"
                                    parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_120, &parse_tree__prog_util__Vars_121);
                                  }
#line 338 "prog_util.m"
                                  {
#line 338 "prog_util.m"
                                    parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_122, &parse_tree__prog_util__StateVars_125);
                                  }
#line 339 "prog_util.m"
                                  {
#line 339 "prog_util.m"
                                    parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__DotSVars0_123, &parse_tree__prog_util__DotSVars_126);
                                  }
#line 340 "prog_util.m"
                                  {
#line 340 "prog_util.m"
                                    parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__ColonSVars0_124, &parse_tree__prog_util__ColonSVars_127);
                                  }
#line 341 "prog_util.m"
                                  {
#line 341 "prog_util.m"
                                    parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_118, &parse_tree__prog_util__SubGoal_119);
                                  }
#line 342 "prog_util.m"
                                  {
#line 342 "prog_util.m"
                                    MR_Word base;
#line 342 "prog_util.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 342 "prog_util.m"
                                    *parse_tree__prog_util__Goal_8 = base;
#line 342 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 342 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_117));
#line 342 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_121));
#line 342 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__StateVars_125));
#line 342 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__DotSVars_126));
#line 342 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__ColonSVars_127));
#line 342 "prog_util.m"
                                    MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__SubGoal_119));
#line 342 "prog_util.m"
                                  }
#line 336 "prog_util.m"
                                }
#line 279 "prog_util.m"
                              else
#line 279 "prog_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 326 "prog_util.m"
                                  {
#line 326 "prog_util.m"
                                    MR_Word parse_tree__prog_util__StateVars0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 326 "prog_util.m"
                                    MR_Word parse_tree__prog_util__DotSVars0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 326 "prog_util.m"
                                    MR_Word parse_tree__prog_util__ColonSVars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 326 "prog_util.m"
                                    MR_Word parse_tree__prog_util__StateVars_23;
#line 326 "prog_util.m"
                                    MR_Word parse_tree__prog_util__DotSVars_24;
#line 326 "prog_util.m"
                                    MR_Word parse_tree__prog_util__ColonSVars_25;
#line 326 "prog_util.m"
                                    MR_Word parse_tree__prog_util__Context_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 326 "prog_util.m"
                                    MR_Word parse_tree__prog_util__SubGoal0_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 326 "prog_util.m"
                                    MR_Word parse_tree__prog_util__SubGoal_114;
#line 326 "prog_util.m"
                                    MR_Word parse_tree__prog_util__Vars0_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 326 "prog_util.m"
                                    MR_Word parse_tree__prog_util__Vars_116;

#line 327 "prog_util.m"
                                    {
#line 327 "prog_util.m"
                                      parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_115, &parse_tree__prog_util__Vars_116);
                                    }
#line 328 "prog_util.m"
                                    {
#line 328 "prog_util.m"
                                      parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__StateVars0_20, &parse_tree__prog_util__StateVars_23);
                                    }
#line 329 "prog_util.m"
                                    {
#line 329 "prog_util.m"
                                      parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__DotSVars0_21, &parse_tree__prog_util__DotSVars_24);
                                    }
#line 330 "prog_util.m"
                                    {
#line 330 "prog_util.m"
                                      parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__ColonSVars0_22, &parse_tree__prog_util__ColonSVars_25);
                                    }
#line 331 "prog_util.m"
                                    {
#line 331 "prog_util.m"
                                      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_113, &parse_tree__prog_util__SubGoal_114);
                                    }
#line 332 "prog_util.m"
                                    {
#line 332 "prog_util.m"
                                      MR_Word base;
#line 332 "prog_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 332 "prog_util.m"
                                      *parse_tree__prog_util__Goal_8 = base;
#line 332 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 332 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_112));
#line 332 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_116));
#line 332 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__StateVars_23));
#line 332 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__DotSVars_24));
#line 332 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__ColonSVars_25));
#line 332 "prog_util.m"
                                      MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__SubGoal_114));
#line 332 "prog_util.m"
                                    }
#line 326 "prog_util.m"
                                  }
#line 279 "prog_util.m"
                                else
#line 279 "prog_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 321 "prog_util.m"
                                    {
#line 321 "prog_util.m"
                                      MR_Word parse_tree__prog_util__Purity_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 321 "prog_util.m"
                                      MR_Word parse_tree__prog_util__Context_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 321 "prog_util.m"
                                      MR_Word parse_tree__prog_util__SubGoal0_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 321 "prog_util.m"
                                      MR_Word parse_tree__prog_util__SubGoal_111;

#line 322 "prog_util.m"
                                      {
#line 322 "prog_util.m"
                                        parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_110, &parse_tree__prog_util__SubGoal_111);
                                      }
#line 323 "prog_util.m"
                                      {
#line 323 "prog_util.m"
                                        MR_Word base;
#line 323 "prog_util.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 323 "prog_util.m"
                                        *parse_tree__prog_util__Goal_8 = base;
#line 323 "prog_util.m"
                                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 323 "prog_util.m"
                                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_109));
#line 323 "prog_util.m"
                                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Purity_19));
#line 323 "prog_util.m"
                                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_111));
#line 323 "prog_util.m"
                                      }
#line 321 "prog_util.m"
                                    }
#line 279 "prog_util.m"
                                  else
#line 279 "prog_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 360 "prog_util.m"
                                      {
#line 360 "prog_util.m"
                                        MR_Word parse_tree__prog_util__Var0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 360 "prog_util.m"
                                        MR_Word parse_tree__prog_util__Var_28;
#line 360 "prog_util.m"
                                        MR_Word parse_tree__prog_util__Context_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 360 "prog_util.m"
                                        MR_Word parse_tree__prog_util__SubGoal0_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 360 "prog_util.m"
                                        MR_Word parse_tree__prog_util__SubGoal_144;

#line 361 "prog_util.m"
                                        {
#line 361 "prog_util.m"
                                          parse_tree__prog_util__rename_in_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Var0_27, &parse_tree__prog_util__Var_28);
                                        }
#line 362 "prog_util.m"
                                        {
#line 362 "prog_util.m"
                                          parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_143, &parse_tree__prog_util__SubGoal_144);
                                        }
#line 363 "prog_util.m"
                                        {
#line 363 "prog_util.m"
                                          MR_Word base;
#line 363 "prog_util.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 363 "prog_util.m"
                                          *parse_tree__prog_util__Goal_8 = base;
#line 363 "prog_util.m"
                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 363 "prog_util.m"
                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_142));
#line 363 "prog_util.m"
                                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Var_28));
#line 363 "prog_util.m"
                                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_144));
#line 363 "prog_util.m"
                                        }
#line 360 "prog_util.m"
                                      }
#line 279 "prog_util.m"
                                    else
#line 279 "prog_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 356 "prog_util.m"
                                        {
#line 356 "prog_util.m"
                                          MR_Word parse_tree__prog_util__Detism_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 356 "prog_util.m"
                                          MR_Word parse_tree__prog_util__Context_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 356 "prog_util.m"
                                          MR_Word parse_tree__prog_util__SubGoal0_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 356 "prog_util.m"
                                          MR_Word parse_tree__prog_util__SubGoal_141;

#line 357 "prog_util.m"
                                          {
#line 357 "prog_util.m"
                                            parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_140, &parse_tree__prog_util__SubGoal_141);
                                          }
#line 358 "prog_util.m"
                                          {
#line 358 "prog_util.m"
                                            MR_Word base;
#line 358 "prog_util.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 358 "prog_util.m"
                                            *parse_tree__prog_util__Goal_8 = base;
#line 358 "prog_util.m"
                                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 358 "prog_util.m"
                                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_139));
#line 358 "prog_util.m"
                                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Detism_26));
#line 358 "prog_util.m"
                                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_141));
#line 358 "prog_util.m"
                                          }
#line 356 "prog_util.m"
                                        }
#line 279 "prog_util.m"
                                      else
#line 279 "prog_util.m"
                                        if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 366 "prog_util.m"
                                          {
#line 366 "prog_util.m"
                                            MR_Word parse_tree__prog_util__Context_145 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 366 "prog_util.m"
                                            MR_Word parse_tree__prog_util__SubGoal0_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 366 "prog_util.m"
                                            MR_Word parse_tree__prog_util__SubGoal_147;
#line 366 "prog_util.m"
                                            MR_Word parse_tree__prog_util__Detism_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 366 "prog_util.m"
                                            MR_Word parse_tree__prog_util__Var0_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 366 "prog_util.m"
                                            MR_Word parse_tree__prog_util__Var_150;

#line 367 "prog_util.m"
                                            {
#line 367 "prog_util.m"
                                              parse_tree__prog_util__rename_in_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Var0_149, &parse_tree__prog_util__Var_150);
                                            }
#line 368 "prog_util.m"
                                            {
#line 368 "prog_util.m"
                                              parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_146, &parse_tree__prog_util__SubGoal_147);
                                            }
#line 369 "prog_util.m"
                                            {
#line 369 "prog_util.m"
                                              MR_Word base;
#line 369 "prog_util.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 369 "prog_util.m"
                                              *parse_tree__prog_util__Goal_8 = base;
#line 369 "prog_util.m"
                                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 369 "prog_util.m"
                                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_145));
#line 369 "prog_util.m"
                                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Var_150));
#line 369 "prog_util.m"
                                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__Detism_148));
#line 369 "prog_util.m"
                                              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__SubGoal_147));
#line 369 "prog_util.m"
                                            }
#line 366 "prog_util.m"
                                          }
#line 279 "prog_util.m"
                                        else
#line 279 "prog_util.m"
                                          if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 301 "prog_util.m"
                                            {
#line 301 "prog_util.m"
                                              MR_Word parse_tree__prog_util__Vars0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 301 "prog_util.m"
                                              MR_Word parse_tree__prog_util__Vars_18;
#line 301 "prog_util.m"
                                              MR_Word parse_tree__prog_util__Context_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 301 "prog_util.m"
                                              MR_Word parse_tree__prog_util__SubGoal0_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 301 "prog_util.m"
                                              MR_Word parse_tree__prog_util__SubGoal_93;

#line 302 "prog_util.m"
                                              {
#line 302 "prog_util.m"
                                                parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_17, &parse_tree__prog_util__Vars_18);
                                              }
#line 303 "prog_util.m"
                                              {
#line 303 "prog_util.m"
                                                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_92, &parse_tree__prog_util__SubGoal_93);
                                              }
#line 304 "prog_util.m"
                                              {
#line 304 "prog_util.m"
                                                MR_Word base;
#line 304 "prog_util.m"
                                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 304 "prog_util.m"
                                                *parse_tree__prog_util__Goal_8 = base;
#line 304 "prog_util.m"
                                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 304 "prog_util.m"
                                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_91));
#line 304 "prog_util.m"
                                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_18));
#line 304 "prog_util.m"
                                                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_93));
#line 304 "prog_util.m"
                                              }
#line 301 "prog_util.m"
                                            }
#line 279 "prog_util.m"
                                          else
#line 279 "prog_util.m"
                                            if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 306 "prog_util.m"
                                              {
#line 306 "prog_util.m"
                                                MR_Word parse_tree__prog_util__Context_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 306 "prog_util.m"
                                                MR_Word parse_tree__prog_util__SubGoal0_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 306 "prog_util.m"
                                                MR_Word parse_tree__prog_util__SubGoal_96;
#line 306 "prog_util.m"
                                                MR_Word parse_tree__prog_util__Vars0_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 306 "prog_util.m"
                                                MR_Word parse_tree__prog_util__Vars_98;

#line 307 "prog_util.m"
                                                {
#line 307 "prog_util.m"
                                                  parse_tree__prog_util__rename_in_vars_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Vars0_97, &parse_tree__prog_util__Vars_98);
                                                }
#line 308 "prog_util.m"
                                                {
#line 308 "prog_util.m"
                                                  parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_95, &parse_tree__prog_util__SubGoal_96);
                                                }
#line 309 "prog_util.m"
                                                {
#line 309 "prog_util.m"
                                                  MR_Word base;
#line 309 "prog_util.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 309 "prog_util.m"
                                                  *parse_tree__prog_util__Goal_8 = base;
#line 309 "prog_util.m"
                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 309 "prog_util.m"
                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_94));
#line 309 "prog_util.m"
                                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__Vars_98));
#line 309 "prog_util.m"
                                                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_96));
#line 309 "prog_util.m"
                                                }
#line 306 "prog_util.m"
                                              }
#line 279 "prog_util.m"
                                            else
#line 279 "prog_util.m"
                                              if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 373 "prog_util.m"
                                                {
#line 373 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__TypeCtorInfo_188_188;
#line 373 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__CompileTime_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 373 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__RunTime_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 373 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__MaybeIO0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 373 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__Mutables0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 373 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__MaybeIO_33;
#line 373 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__Mutables_36;
#line 373 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__V_78_78;
#line 373 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__Context_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 373 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__SubGoal0_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 373 "prog_util.m"
                                                  MR_Word parse_tree__prog_util__SubGoal_153;

#line 377 "prog_util.m"
                                                  if ((parse_tree__prog_util__MaybeIO0_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 376 "prog_util.m"
                                                    parse_tree__prog_util__MaybeIO_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 377 "prog_util.m"
                                                  else
#line 378 "prog_util.m"
                                                    {
#line 378 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__IOStateVar0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeIO0_31, (MR_Integer) 0)));
#line 378 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__IOStateVar_35;

#line 379 "prog_util.m"
                                                      {
#line 379 "prog_util.m"
                                                        parse_tree__prog_util__rename_in_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__IOStateVar0_34, &parse_tree__prog_util__IOStateVar_35);
                                                      }
#line 380 "prog_util.m"
                                                      {
#line 380 "prog_util.m"
                                                        parse_tree__prog_util__MaybeIO_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 380 "prog_util.m"
                                                        MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeIO_33, 0) = ((MR_Box) (parse_tree__prog_util__IOStateVar_35));
#line 380 "prog_util.m"
                                                      }
#line 378 "prog_util.m"
                                                    }
#line 382 "prog_util.m"
                                                  {
#line 382 "prog_util.m"
                                                    parse_tree__prog_util__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 382 "prog_util.m"
                                                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_78_78, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[2]));
#line 382 "prog_util.m"
                                                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_78_78, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_3));
#line 382 "prog_util.m"
                                                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 382 "prog_util.m"
                                                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_78_78, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
#line 382 "prog_util.m"
                                                    MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_78_78, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 382 "prog_util.m"
                                                  }
#line 6321 "parse_tree.prog_util.c"
                                                  parse_tree__prog_util__TypeCtorInfo_188_188 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0;
#line 382 "prog_util.m"
                                                  {
#line 382 "prog_util.m"
                                                    mercury__list__map_3_p_0(parse_tree__prog_util__TypeCtorInfo_188_188, parse_tree__prog_util__TypeCtorInfo_188_188, parse_tree__prog_util__V_78_78, parse_tree__prog_util__Mutables0_32, &parse_tree__prog_util__Mutables_36);
                                                  }
#line 384 "prog_util.m"
                                                  {
#line 384 "prog_util.m"
                                                    parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_152, &parse_tree__prog_util__SubGoal_153);
                                                  }
#line 385 "prog_util.m"
                                                  {
#line 385 "prog_util.m"
                                                    MR_Word base;
#line 385 "prog_util.m"
                                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 385 "prog_util.m"
                                                    *parse_tree__prog_util__Goal_8 = base;
#line 385 "prog_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 385 "prog_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_151));
#line 385 "prog_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__CompileTime_29));
#line 385 "prog_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__RunTime_30));
#line 385 "prog_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__MaybeIO_33));
#line 385 "prog_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__Mutables_36));
#line 385 "prog_util.m"
                                                    MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__SubGoal_153));
#line 385 "prog_util.m"
                                                  }
#line 373 "prog_util.m"
                                                }
#line 279 "prog_util.m"
                                              else
#line 279 "prog_util.m"
                                                if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 407 "prog_util.m"
                                                  {
#line 407 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__TypeCtorInfo_197_197;
#line 407 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__Then0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));
#line 407 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__MaybeElse0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 5)));
#line 407 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__Catches0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 6)));
#line 407 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__MaybeCatchAny0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 7)));
#line 407 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__Then_53;
#line 407 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__MaybeElse_56;
#line 407 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__Catches_57;
#line 407 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__MaybeCatchAny_62;
#line 407 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__V_73_73;
#line 407 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__Context_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 407 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__SubGoal0_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 407 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__SubGoal_157;
#line 407 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__MaybeIO0_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 407 "prog_util.m"
                                                    MR_Word parse_tree__prog_util__MaybeIO_159;

#line 408 "prog_util.m"
                                                    {
#line 408 "prog_util.m"
                                                      parse_tree__prog_util__rename_in_maybe_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__MaybeIO0_158, &parse_tree__prog_util__MaybeIO_159);
                                                    }
#line 409 "prog_util.m"
                                                    {
#line 409 "prog_util.m"
                                                      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__SubGoal0_156, &parse_tree__prog_util__SubGoal_157);
                                                    }
#line 410 "prog_util.m"
                                                    {
#line 410 "prog_util.m"
                                                      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Then0_49, &parse_tree__prog_util__Then_53);
                                                    }
#line 415 "prog_util.m"
                                                    if ((parse_tree__prog_util__MaybeElse0_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 417 "prog_util.m"
                                                      parse_tree__prog_util__MaybeElse_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 415 "prog_util.m"
                                                    else
#line 412 "prog_util.m"
                                                      {
#line 412 "prog_util.m"
                                                        MR_Word parse_tree__prog_util__Else0_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeElse0_50, (MR_Integer) 0)));
#line 412 "prog_util.m"
                                                        MR_Word parse_tree__prog_util__Else_55;

#line 413 "prog_util.m"
                                                        {
#line 413 "prog_util.m"
                                                          parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__Else0_54, &parse_tree__prog_util__Else_55);
                                                        }
#line 414 "prog_util.m"
                                                        {
#line 414 "prog_util.m"
                                                          parse_tree__prog_util__MaybeElse_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 414 "prog_util.m"
                                                          MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeElse_56, 0) = ((MR_Box) (parse_tree__prog_util__Else_55));
#line 414 "prog_util.m"
                                                        }
#line 412 "prog_util.m"
                                                      }
#line 419 "prog_util.m"
                                                    {
#line 419 "prog_util.m"
                                                      parse_tree__prog_util__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 419 "prog_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_73_73, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_4[3]));
#line 419 "prog_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_73_73, 1) = ((MR_Box) (parse_tree__prog_util__rename_in_goal_4_p_0_4));
#line 419 "prog_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_73_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 419 "prog_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_73_73, 3) = ((MR_Box) (parse_tree__prog_util__OldVar_5));
#line 419 "prog_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_73_73, 4) = ((MR_Box) (parse_tree__prog_util__NewVar_6));
#line 419 "prog_util.m"
                                                    }
#line 6455 "parse_tree.prog_util.c"
                                                    parse_tree__prog_util__TypeCtorInfo_197_197 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0;
#line 419 "prog_util.m"
                                                    {
#line 419 "prog_util.m"
                                                      mercury__list__map_3_p_0(parse_tree__prog_util__TypeCtorInfo_197_197, parse_tree__prog_util__TypeCtorInfo_197_197, parse_tree__prog_util__V_73_73, parse_tree__prog_util__Catches0_51, &parse_tree__prog_util__Catches_57);
                                                    }
#line 425 "prog_util.m"
                                                    if ((parse_tree__prog_util__MaybeCatchAny0_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 427 "prog_util.m"
                                                      parse_tree__prog_util__MaybeCatchAny_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 425 "prog_util.m"
                                                    else
#line 421 "prog_util.m"
                                                      {
#line 421 "prog_util.m"
                                                        MR_Word parse_tree__prog_util__CatchAnyVar0_58;
#line 421 "prog_util.m"
                                                        MR_Word parse_tree__prog_util__CatchAnyGoal0_59;
#line 421 "prog_util.m"
                                                        MR_Word parse_tree__prog_util__CatchAnyVar_60;
#line 421 "prog_util.m"
                                                        MR_Word parse_tree__prog_util__CatchAnyGoal_61;
#line 421 "prog_util.m"
                                                        MR_Word parse_tree__prog_util__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeCatchAny0_52, (MR_Integer) 0)));
#line 421 "prog_util.m"
                                                        MR_Word parse_tree__prog_util__V_75_75;

#line 421 "prog_util.m"
                                                        parse_tree__prog_util__CatchAnyVar0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_74_74, (MR_Integer) 0)));
#line 421 "prog_util.m"
                                                        parse_tree__prog_util__CatchAnyGoal0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_74_74, (MR_Integer) 1)));
#line 422 "prog_util.m"
                                                        {
#line 422 "prog_util.m"
                                                          parse_tree__prog_util__rename_in_var_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__CatchAnyVar0_58, &parse_tree__prog_util__CatchAnyVar_60);
                                                        }
#line 423 "prog_util.m"
                                                        {
#line 423 "prog_util.m"
                                                          parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, parse_tree__prog_util__CatchAnyGoal0_59, &parse_tree__prog_util__CatchAnyGoal_61);
                                                        }
#line 424 "prog_util.m"
                                                        {
#line 424 "prog_util.m"
                                                          parse_tree__prog_util__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 424 "prog_util.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_75_75, 0) = ((MR_Box) (parse_tree__prog_util__CatchAnyVar_60));
#line 424 "prog_util.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_75_75, 1) = ((MR_Box) (parse_tree__prog_util__CatchAnyGoal_61));
#line 424 "prog_util.m"
                                                        }
#line 424 "prog_util.m"
                                                        {
#line 424 "prog_util.m"
                                                          parse_tree__prog_util__MaybeCatchAny_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 424 "prog_util.m"
                                                          MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybeCatchAny_62, 0) = ((MR_Box) (parse_tree__prog_util__V_75_75));
#line 424 "prog_util.m"
                                                        }
#line 421 "prog_util.m"
                                                      }
#line 429 "prog_util.m"
                                                    {
#line 429 "prog_util.m"
                                                      MR_Word base;
#line 429 "prog_util.m"
                                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 429 "prog_util.m"
                                                      *parse_tree__prog_util__Goal_8 = base;
#line 429 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 429 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_155));
#line 429 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__MaybeIO_159));
#line 429 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__SubGoal_157));
#line 429 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__Then_53));
#line 429 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (parse_tree__prog_util__MaybeElse_56));
#line 429 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (parse_tree__prog_util__Catches_57));
#line 429 "prog_util.m"
                                                      MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (parse_tree__prog_util__MaybeCatchAny_62));
#line 429 "prog_util.m"
                                                    }
#line 407 "prog_util.m"
                                                  }
#line 279 "prog_util.m"
                                                else
#line 279 "prog_util.m"
                                                  if (((((MR_tag((MR_Word) parse_tree__prog_util__Goal0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 460 "prog_util.m"
                                                    {
#line 460 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__TypeCtorInfo_200_200 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 460 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__TermA0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 2)));
#line 460 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__TermB0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 3)));
#line 460 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__TermA_71;
#line 460 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__TermB_72;
#line 460 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__Context_184 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 1)));
#line 460 "prog_util.m"
                                                      MR_Word parse_tree__prog_util__Purity_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__Goal0_7, (MR_Integer) 4)));

#line 461 "prog_util.m"
                                                      {
#line 461 "prog_util.m"
                                                        mercury__term__rename_4_p_0(parse_tree__prog_util__TypeCtorInfo_200_200, parse_tree__prog_util__TermA0_69, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, &parse_tree__prog_util__TermA_71);
                                                      }
#line 462 "prog_util.m"
                                                      {
#line 462 "prog_util.m"
                                                        mercury__term__rename_4_p_0(parse_tree__prog_util__TypeCtorInfo_200_200, parse_tree__prog_util__TermB0_70, parse_tree__prog_util__OldVar_5, parse_tree__prog_util__NewVar_6, &parse_tree__prog_util__TermB_72);
                                                      }
#line 463 "prog_util.m"
                                                      {
#line 463 "prog_util.m"
                                                        MR_Word base;
#line 463 "prog_util.m"
                                                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 463 "prog_util.m"
                                                        *parse_tree__prog_util__Goal_8 = base;
#line 463 "prog_util.m"
                                                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 463 "prog_util.m"
                                                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_util__Context_184));
#line 463 "prog_util.m"
                                                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_util__TermA_71));
#line 463 "prog_util.m"
                                                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_util__TermB_72));
#line 463 "prog_util.m"
                                                        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__prog_util__Purity_185));
#line 463 "prog_util.m"
                                                      }
#line 460 "prog_util.m"
                                                    }
#line 279 "prog_util.m"
                                                  else
#line 280 "prog_util.m"
                                                    *parse_tree__prog_util__Goal_8 = parse_tree__prog_util__Goal0_7;
#line 279 "prog_util.m"
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
#line 270 "prog_util.m"
  {
#line 270 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 270 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 271 "prog_util.m"
      {
#line 271 "prog_util.m"
        MR_Word parse_tree__prog_util__M_6;

#line 271 "prog_util.m"
        *parse_tree__prog_util__T_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 271 "prog_util.m"
        parse_tree__prog_util__M_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 1)));
#line 271 "prog_util.m"
        {
#line 271 "prog_util.m"
          MR_Word base;
#line 271 "prog_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 271 "prog_util.m"
          *parse_tree__prog_util__HeadVar__3_3 = base;
#line 271 "prog_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__M_6));
#line 271 "prog_util.m"
        }
#line 271 "prog_util.m"
      }
#line 270 "prog_util.m"
    else
#line 270 "prog_util.m"
      {
#line 270 "prog_util.m"
        *parse_tree__prog_util__T_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__HeadVar__1_1, (MR_Integer) 0)));
#line 270 "prog_util.m"
        *parse_tree__prog_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 270 "prog_util.m"
      }
#line 270 "prog_util.m"
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
#line 241 "prog_util.m"
  {
#line 241 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 241 "prog_util.m"
    MR_Word parse_tree__prog_util__Modes_7;
#line 241 "prog_util.m"
    MR_Word parse_tree__prog_util__Result_8;

#line 242 "prog_util.m"
    {
#line 242 "prog_util.m"
      parse_tree__prog_util__split_types_and_modes_2_5_p_0(parse_tree__prog_util__TypesAndModes_4, (MR_Integer) 1, parse_tree__prog_util__Types_5, &parse_tree__prog_util__Modes_7, &parse_tree__prog_util__Result_8);
    }
#line 246 "prog_util.m"
    if ((parse_tree__prog_util__Result_8 == (MR_Integer) 0))
#line 248 "prog_util.m"
      *parse_tree__prog_util__MaybeModes_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 246 "prog_util.m"
    else
#line 245 "prog_util.m"
      {
#line 245 "prog_util.m"
        MR_Word base;
#line 245 "prog_util.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 245 "prog_util.m"
        *parse_tree__prog_util__MaybeModes_6 = base;
#line 245 "prog_util.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__Modes_7));
#line 245 "prog_util.m"
      }
#line 241 "prog_util.m"
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
#line 532 "prog_util.m"
  {
#line 532 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 532 "prog_util.m"
    MR_Word parse_tree__prog_util__V_15_15;
#line 532 "prog_util.m"
    MR_Word parse_tree__prog_util__V_16_16;

#line 533 "prog_util.m"
    {
#line 533 "prog_util.m"
      parse_tree__prog_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 533 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_15_15, 0) = ((MR_Box) (parse_tree__prog_util__PredOrFunc_10));
#line 533 "prog_util.m"
    }
#line 534 "prog_util.m"
    {
#line 534 "prog_util.m"
      parse_tree__prog_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_util__Line_12));
#line 534 "prog_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_16_16, 1) = ((MR_Box) (parse_tree__prog_util__Counter_13));
#line 534 "prog_util.m"
    }
#line 533 "prog_util.m"
    {
#line 533 "prog_util.m"
      parse_tree__prog_util__make_pred_name_6_p_0(parse_tree__prog_util__ModuleName_8, parse_tree__prog_util__Prefix_9, parse_tree__prog_util__V_15_15, parse_tree__prog_util__PredName_11, parse_tree__prog_util__V_16_16, parse_tree__prog_util__SymName_14);
#line 533 "prog_util.m"
      return;
    }
#line 532 "prog_util.m"
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
#line 537 "prog_util.m"
  {
#line 537 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 537 "prog_util.m"
    MR_String parse_tree__prog_util__PFS_14;
#line 537 "prog_util.m"
    MR_String parse_tree__prog_util__PredIdStr_17;
#line 537 "prog_util.m"
    MR_String parse_tree__prog_util__Name_32;
#line 537 "prog_util.m"
    MR_String parse_tree__prog_util__V_93_93;
#line 537 "prog_util.m"
    MR_Word parse_tree__prog_util__V_99_99;
#line 537 "prog_util.m"
    MR_String parse_tree__prog_util__V_101_101;
#line 537 "prog_util.m"
    MR_String parse_tree__prog_util__V_102_102;
#line 537 "prog_util.m"
    MR_String parse_tree__prog_util__V_109_109;
#line 537 "prog_util.m"
    MR_String parse_tree__prog_util__V_111_111;
#line 537 "prog_util.m"
    MR_String parse_tree__prog_util__V_112_112;
#line 537 "prog_util.m"
    MR_String parse_tree__prog_util__V_119_119;
#line 537 "prog_util.m"
    MR_String parse_tree__prog_util__V_121_121;
#line 537 "prog_util.m"
    MR_String parse_tree__prog_util__V_122_122;

#line 541 "prog_util.m"
    if ((parse_tree__prog_util__MaybePredOrFunc_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 543 "prog_util.m"
      parse_tree__prog_util__PFS_14 = (MR_String) "pred_or_func";
#line 541 "prog_util.m"
    else
#line 539 "prog_util.m"
      {
#line 539 "prog_util.m"
        MR_Word parse_tree__prog_util__PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__MaybePredOrFunc_9, (MR_Integer) 0)));

#line 540 "prog_util.m"
        {
#line 540 "prog_util.m"
          parse_tree__prog_util__PFS_14 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(parse_tree__prog_util__PredOrFunc_13);
        }
#line 539 "prog_util.m"
      }
#line 548 "prog_util.m"
    if ((parse_tree__prog_util__NewPredId_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 572 "prog_util.m"
      parse_tree__prog_util__PredIdStr_17 = (MR_String) "";
#line 548 "prog_util.m"
    else
#line 548 "prog_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_util__NewPredId_11)) == (MR_mktag((MR_Integer) 1))))
#line 546 "prog_util.m"
        {
#line 546 "prog_util.m"
          MR_Integer parse_tree__prog_util__Line_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)));
#line 546 "prog_util.m"
          MR_Integer parse_tree__prog_util__Counter_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));
#line 546 "prog_util.m"
          MR_String parse_tree__prog_util__V_77_77;
#line 546 "prog_util.m"
          MR_Word parse_tree__prog_util__V_83_83 = (MR_Word) &parse_tree__prog_util_scalar_common_3[1];
#line 546 "prog_util.m"
          MR_String parse_tree__prog_util__V_85_85;
#line 546 "prog_util.m"
          MR_String parse_tree__prog_util__V_86_86;

#line 547 "prog_util.m"
          {
#line 547 "prog_util.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_83_83, parse_tree__prog_util__Counter_16, &parse_tree__prog_util__V_77_77);
          }
#line 547 "prog_util.m"
          {
#line 547 "prog_util.m"
            parse_tree__prog_util__V_85_85 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__V_77_77);
          }
#line 547 "prog_util.m"
          {
#line 547 "prog_util.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_83_83, parse_tree__prog_util__Line_15, &parse_tree__prog_util__V_86_86);
          }
#line 547 "prog_util.m"
          {
#line 547 "prog_util.m"
            parse_tree__prog_util__PredIdStr_17 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__V_86_86, parse_tree__prog_util__V_85_85);
          }
#line 546 "prog_util.m"
        }
#line 548 "prog_util.m"
      else
#line 548 "prog_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_util__NewPredId_11)) == (MR_mktag((MR_Integer) 2))))
#line 549 "prog_util.m"
          {
#line 549 "prog_util.m"
            MR_Word parse_tree__prog_util__VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)));
#line 549 "prog_util.m"
            MR_Word parse_tree__prog_util__TypeSubst_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

#line 556 "prog_util.m"
            {
#line 556 "prog_util.m"
              parse_tree__prog_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_116_111_95_115_116_114_105_110_103_95_95_104_111_50_95_95_91_50_93_95_48_3_p_0(parse_tree__prog_util__VarSet_18, parse_tree__prog_util__TypeSubst_19, &parse_tree__prog_util__PredIdStr_17);
            }
#line 549 "prog_util.m"
          }
#line 548 "prog_util.m"
        else
#line 548 "prog_util.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_util__NewPredId_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 568 "prog_util.m"
            {
#line 568 "prog_util.m"
              MR_Integer parse_tree__prog_util__Distance_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

#line 569 "prog_util.m"
              {
#line 569 "prog_util.m"
                mercury__string__int_to_string_2_p_0(parse_tree__prog_util__Distance_31, &parse_tree__prog_util__PredIdStr_17);
              }
#line 568 "prog_util.m"
            }
#line 548 "prog_util.m"
          else
#line 548 "prog_util.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_util__NewPredId_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 560 "prog_util.m"
              {
#line 560 "prog_util.m"
                MR_Word parse_tree__prog_util__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

#line 561 "prog_util.m"
                {
#line 561 "prog_util.m"
                  parse_tree__prog_util__list_to_string__ho1_3_p_0(parse_tree__prog_util__Args_27, &parse_tree__prog_util__PredIdStr_17);
                }
#line 560 "prog_util.m"
              }
#line 548 "prog_util.m"
            else
#line 548 "prog_util.m"
              if (((((MR_tag((MR_Word) parse_tree__prog_util__NewPredId_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 563 "prog_util.m"
                {
#line 563 "prog_util.m"
                  MR_Integer parse_tree__prog_util__ModeNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));
#line 563 "prog_util.m"
                  MR_String parse_tree__prog_util__ModeStr_29;
#line 563 "prog_util.m"
                  MR_String parse_tree__prog_util__ArgsStr_30;
#line 563 "prog_util.m"
                  MR_String parse_tree__prog_util__V_34_34;
#line 563 "prog_util.m"
                  MR_Word parse_tree__prog_util__Args_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 2)));

#line 564 "prog_util.m"
                  {
#line 564 "prog_util.m"
                    mercury__string__int_to_string_2_p_0(parse_tree__prog_util__ModeNum_28, &parse_tree__prog_util__ModeStr_29);
                  }
#line 565 "prog_util.m"
                  {
#line 565 "prog_util.m"
                    parse_tree__prog_util__list_to_string__ho1_3_p_0(parse_tree__prog_util__Args_63, &parse_tree__prog_util__ArgsStr_30);
                  }
#line 566 "prog_util.m"
                  {
#line 566 "prog_util.m"
                    parse_tree__prog_util__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__ArgsStr_30);
                  }
#line 566 "prog_util.m"
                  {
#line 566 "prog_util.m"
                    parse_tree__prog_util__PredIdStr_17 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__ModeStr_29, parse_tree__prog_util__V_34_34);
                  }
#line 563 "prog_util.m"
                }
#line 548 "prog_util.m"
              else
#line 560 "prog_util.m"
                {
#line 560 "prog_util.m"
                  MR_Word parse_tree__prog_util__Args_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_util__NewPredId_11, (MR_Integer) 1)));

#line 561 "prog_util.m"
                  {
#line 561 "prog_util.m"
                    parse_tree__prog_util__list_to_string__ho1_3_p_0(parse_tree__prog_util__Args_74, &parse_tree__prog_util__PredIdStr_17);
                  }
#line 560 "prog_util.m"
                }
#line 6983 "parse_tree.prog_util.c"
    parse_tree__prog_util__V_99_99 = (MR_Word) &parse_tree__prog_util_scalar_common_3[1];
#line 576 "prog_util.m"
    {
#line 576 "prog_util.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_99_99, parse_tree__prog_util__PredIdStr_17, &parse_tree__prog_util__V_93_93);
    }
#line 575 "prog_util.m"
    {
#line 575 "prog_util.m"
      parse_tree__prog_util__V_101_101 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__V_93_93);
    }
#line 576 "prog_util.m"
    {
#line 576 "prog_util.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_99_99, parse_tree__prog_util__PredName_10, &parse_tree__prog_util__V_102_102);
    }
#line 575 "prog_util.m"
    {
#line 575 "prog_util.m"
      parse_tree__prog_util__V_109_109 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__V_102_102, parse_tree__prog_util__V_101_101);
    }
#line 575 "prog_util.m"
    {
#line 575 "prog_util.m"
      parse_tree__prog_util__V_111_111 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__V_109_109);
    }
#line 576 "prog_util.m"
    {
#line 576 "prog_util.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_99_99, parse_tree__prog_util__PFS_14, &parse_tree__prog_util__V_112_112);
    }
#line 575 "prog_util.m"
    {
#line 575 "prog_util.m"
      parse_tree__prog_util__V_119_119 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__V_112_112, parse_tree__prog_util__V_111_111);
    }
#line 575 "prog_util.m"
    {
#line 575 "prog_util.m"
      parse_tree__prog_util__V_121_121 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_util__V_119_119);
    }
#line 576 "prog_util.m"
    {
#line 576 "prog_util.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(parse_tree__prog_util__V_99_99, parse_tree__prog_util__Prefix_8, &parse_tree__prog_util__V_122_122);
    }
#line 575 "prog_util.m"
    {
#line 575 "prog_util.m"
      parse_tree__prog_util__Name_32 = mercury__string__f_43_43_2_f_0(parse_tree__prog_util__V_122_122, parse_tree__prog_util__V_121_121);
    }
#line 577 "prog_util.m"
    {
#line 577 "prog_util.m"
      MR_Word base;
#line 577 "prog_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "prog_util.m"
      *parse_tree__prog_util__SymName_12 = base;
#line 577 "prog_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_util__ModuleName_7));
#line 577 "prog_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_util__Name_32));
#line 577 "prog_util.m"
    }
#line 537 "prog_util.m"
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
#line 235 "prog_util.m"
  {
#line 235 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 235 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__1_1 == (MR_Integer) 1))
#line 236 "prog_util.m"
      {
#line 236 "prog_util.m"
        *parse_tree__prog_util__HeadVar__2_2 = (parse_tree__prog_util__Arity_3 - (MR_Integer) 1);
#line 236 "prog_util.m"
      }
#line 235 "prog_util.m"
    else
#line 235 "prog_util.m"
      *parse_tree__prog_util__HeadVar__2_2 = parse_tree__prog_util__Arity_3;
#line 235 "prog_util.m"
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
#line 235 "prog_util.m"
  {
#line 235 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 235 "prog_util.m"
    if ((parse_tree__prog_util__HeadVar__1_1 == (MR_Integer) 1))
#line 236 "prog_util.m"
      {
#line 236 "prog_util.m"
        *parse_tree__prog_util__Arity_3 = ((MR_Integer) 1 + parse_tree__prog_util__HeadVar__2_2);
#line 236 "prog_util.m"
      }
#line 235 "prog_util.m"
    else
#line 235 "prog_util.m"
      *parse_tree__prog_util__Arity_3 = parse_tree__prog_util__HeadVar__2_2;
#line 235 "prog_util.m"
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
#line 228 "prog_util.m"
  {
#line 228 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;

#line 228 "prog_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_util__SymName_5)) == (MR_mktag((MR_Integer) 1))))
#line 223 "prog_util.m"
      {
#line 223 "prog_util.m"
        MR_Word parse_tree__prog_util__Module_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__SymName_5, (MR_Integer) 0)));
#line 223 "prog_util.m"
        MR_String parse_tree__prog_util__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_util__SymName_5, (MR_Integer) 1)));
#line 223 "prog_util.m"
        MR_Word parse_tree__prog_util__ModuleTerm_11;
#line 223 "prog_util.m"
        MR_Word parse_tree__prog_util__UnqualifiedTerm_12;
#line 223 "prog_util.m"
        MR_Word parse_tree__prog_util__V_15_15;
#line 223 "prog_util.m"
        MR_Word parse_tree__prog_util__V_18_18;
#line 223 "prog_util.m"
        MR_Word parse_tree__prog_util__V_19_19;

#line 224 "prog_util.m"
        {
#line 224 "prog_util.m"
          parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__prog_util__TypeInfo_for_T_22, parse_tree__prog_util__Module_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_util__Context_7, &parse_tree__prog_util__ModuleTerm_11);
        }
#line 225 "prog_util.m"
        {
#line 225 "prog_util.m"
          parse_tree__prog_util__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 225 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_15_15, 0) = ((MR_Box) (parse_tree__prog_util__Name_10));
#line 225 "prog_util.m"
        }
#line 225 "prog_util.m"
        {
#line 225 "prog_util.m"
          parse_tree__prog_util__UnqualifiedTerm_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 225 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__UnqualifiedTerm_12, 0) = ((MR_Box) (parse_tree__prog_util__V_15_15));
#line 225 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__UnqualifiedTerm_12, 1) = ((MR_Box) (parse_tree__prog_util__Args_6));
#line 225 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__UnqualifiedTerm_12, 2) = ((MR_Box) (parse_tree__prog_util__Context_7));
#line 225 "prog_util.m"
        }
#line 227 "prog_util.m"
        {
#line 227 "prog_util.m"
          parse_tree__prog_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_19_19, 0) = ((MR_Box) (parse_tree__prog_util__UnqualifiedTerm_12));
#line 227 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 227 "prog_util.m"
        }
#line 227 "prog_util.m"
        {
#line 227 "prog_util.m"
          parse_tree__prog_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_18_18, 0) = ((MR_Box) (parse_tree__prog_util__ModuleTerm_11));
#line 227 "prog_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_util__V_18_18, 1) = ((MR_Box) (parse_tree__prog_util__V_19_19));
#line 227 "prog_util.m"
        }
#line 226 "prog_util.m"
        {
#line 226 "prog_util.m"
          MR_Word base;
#line 226 "prog_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 226 "prog_util.m"
          *parse_tree__prog_util__Term_8 = base;
#line 226 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_util_scalar_common_3[0]));
#line 226 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__V_18_18));
#line 226 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_7));
#line 226 "prog_util.m"
        }
#line 223 "prog_util.m"
      }
#line 228 "prog_util.m"
    else
#line 229 "prog_util.m"
      {
#line 229 "prog_util.m"
        MR_Word parse_tree__prog_util__V_13_13;
#line 229 "prog_util.m"
        MR_String parse_tree__prog_util__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_util__SymName_5, (MR_Integer) 0)));

#line 230 "prog_util.m"
        {
#line 230 "prog_util.m"
          parse_tree__prog_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 230 "prog_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_util__V_13_13, 0) = ((MR_Box) (parse_tree__prog_util__Name_21));
#line 230 "prog_util.m"
        }
#line 230 "prog_util.m"
        {
#line 230 "prog_util.m"
          MR_Word base;
#line 230 "prog_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 230 "prog_util.m"
          *parse_tree__prog_util__Term_8 = base;
#line 230 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_util__V_13_13));
#line 230 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_util__Args_6));
#line 230 "prog_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_util__Context_7));
#line 230 "prog_util.m"
        }
#line 229 "prog_util.m"
      }
#line 228 "prog_util.m"
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
#line 217 "prog_util.m"
  {
#line 217 "prog_util.m"
    MR_bool parse_tree__prog_util__succeeded;
#line 217 "prog_util.m"
    MR_Word parse_tree__prog_util__Context_7;

#line 218 "prog_util.m"
    {
#line 218 "prog_util.m"
      mercury__term__context_init_1_p_0(&parse_tree__prog_util__Context_7);
    }
#line 219 "prog_util.m"
    {
#line 219 "prog_util.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0(parse_tree__prog_util__TypeInfo_for_T_8, parse_tree__prog_util__SymName_4, parse_tree__prog_util__Args_5, parse_tree__prog_util__Context_7, parse_tree__prog_util__Term_6);
#line 219 "prog_util.m"
      return;
    }
#line 217 "prog_util.m"
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
