/*
** Automatically generated from `prog_io_dcg.m'
** by the Mercury compiler,
** version rotd-2015-03-10
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


/* :- module parse_tree.prog_io_dcg. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_dcg__init
ENDINIT
*/

#include "parse_tree.prog_io_dcg.mih"


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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_goal.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 138 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 141 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 144 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 147 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 659 "prog_io_dcg.m"
static MR_bool MR_CALL 
parse_tree__prog_io_dcg__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
#line 659 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__List0_4,
#line 659 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_5,
#line 659 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__List_6);

#line 679 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__process_dcg_clause__679__1_2_p_0(
#line 679 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_32,
#line 679 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_33);

#line 535 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__535__1_2_p_0(
#line 535 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_57,
#line 535 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_58);

#line 534 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__534__1_2_p_0(
#line 534 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_51,
#line 534 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_52);

#line 444 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__444__1_2_p_0(
#line 444 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_555,
#line 444 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_556);

#line 443 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__443__1_2_p_0(
#line 443 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_549,
#line 443 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_550);

#line 405 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__405__1_2_p_0(
#line 405 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_540,
#line 405 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_541);

#line 404 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__404__1_2_p_0(
#line 404 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_534,
#line 404 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_535);

#line 131 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal__131__1_2_p_0(
#line 131 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_64,
#line 131 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_65);

#line 596 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_if_then_else_12_p_0(
#line 596 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__CondTerm_13,
#line 596 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ThenTerm_14,
#line 596 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ElseTerm_15,
#line 596 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_16,
#line 596 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_17,
#line 596 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_18,
#line 596 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_40,
#line 596 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_41,
#line 596 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_42,
#line 596 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_43,
#line 596 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Var0_21,
#line 596 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Var_22);

#line 562 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_if_then_12_p_0(
#line 562 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__CondTerm_13,
#line 562 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ThenTerm_14,
#line 562 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_15,
#line 562 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_16,
#line 562 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeVarsCond_17,
#line 562 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeThen_18,
#line 562 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
#line 562 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
#line 562 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
#line 562 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
#line 562 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Var0_21,
#line 562 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Var_22);

#line 535 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_2(
#line 535 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 535 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 535 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 534 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_1(
#line 534 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 534 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 534 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 511 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0(
#line 511 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_10,
#line 511 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_11,
#line 511 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeVarsGoal_12,
#line 511 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
#line 511 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
#line 511 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
#line 511 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
#line 511 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_34,
#line 511 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Var_35);

#line 499 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(
#line 499 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Disjunct0_5,
#line 499 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__AddedGoal_6,
#line 499 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_7,
#line 499 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Disjunct_8);

#line 470 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_with_purity_10_p_0(
#line 470 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__G_11,
#line 470 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Purity_12,
#line 470 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_13,
#line 470 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_14,
#line 470 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_29,
#line 470 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_30,
#line 470 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_31,
#line 470 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_32,
#line 470 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_33,
#line 470 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Var_34);

#line 444 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_4(
#line 444 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 444 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 444 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 443 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_3(
#line 443 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 443 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 443 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 405 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_2(
#line 405 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 405 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 405 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 404 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_1(
#line 404 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 404 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 404 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 173 "prog_io_dcg.m"
static MR_bool MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0(
#line 173 "prog_io_dcg.m"
  MR_String parse_tree__prog_io_dcg__HeadVar__1_1,
#line 173 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__2_2,
#line 173 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_3,
#line 173 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__4_4,
#line 173 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_5,
#line 173 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6,
#line 173 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7,
#line 173 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8,
#line 173 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9,
#line 173 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__10_10,
#line 173 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__11_11);

#line 131 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0_1(
#line 131 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 131 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 131 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 112 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(
#line 112 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_10,
#line 112 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_11,
#line 112 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_12,
#line 112 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_28,
#line 112 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_29,
#line 112 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_30,
#line 112 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_31,
#line 112 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_32,
#line 112 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Var_33);

#line 98 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__new_dcg_var_5_p_0(
#line 98 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_12,
#line 98 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_13,
#line 98 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_14,
#line 98 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_15,
#line 98 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__DCG_0_Var_8);

#line 679 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0_1(
#line 679 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 679 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 679 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_1[9][2];

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_2[3][5];

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_3[8][3];

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_4[2][1];




static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_1[4]))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In DCG clause head:"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_2[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_dcg__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_dcg__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_dcg__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_io_dcg__term__pti_term_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_dcg__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_dcg__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_3[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[0])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[1])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_4[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "call"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "[|]"))
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



#line 646 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 654 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 662 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 670 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 659 "prog_io_dcg.m"
static MR_bool MR_CALL 
parse_tree__prog_io_dcg__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
#line 659 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__List0_4,
#line 659 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_5,
#line 659 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__List_6)
#line 659 "prog_io_dcg.m"
{
#line 665 "prog_io_dcg.m"
  {
#line 665 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__List0_4)) == (MR_mktag((MR_Integer) 0)));
#line 663 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_12_12;
#line 663 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__V_13_13;
#line 663 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_14_14;
#line 663 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg___Context_7;

#line 663 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 663 "prog_io_dcg.m"
      {
#line 663 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 0)));
#line 663 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 1)));
#line 663 "prog_io_dcg.m"
        parse_tree__prog_io_dcg___Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 2)));
#line 663 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 663 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 663 "prog_io_dcg.m"
          {
#line 663 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_12_12)) == (MR_mktag((MR_Integer) 0)));
#line 663 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 663 "prog_io_dcg.m"
              {
#line 663 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_12_12, (MR_Integer) 0)));
#line 663 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_13_13, (MR_String) "[]") == 0);
#line 663 "prog_io_dcg.m"
              }
#line 663 "prog_io_dcg.m"
          }
#line 663 "prog_io_dcg.m"
      }
#line 665 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 664 "prog_io_dcg.m"
      {
#line 664 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__List_6 = parse_tree__prog_io_dcg__Term_5;
#line 664 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 664 "prog_io_dcg.m"
      }
#line 665 "prog_io_dcg.m"
    else
#line 666 "prog_io_dcg.m"
      {
#line 666 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Head_8;
#line 666 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Tail0_9;
#line 666 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Context_10;
#line 666 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Tail_11;
#line 666 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_15_15;
#line 666 "prog_io_dcg.m"
        MR_String parse_tree__prog_io_dcg__V_16_16;
#line 666 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_17_17;
#line 666 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_18_18;
#line 666 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_19_19;
#line 666 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_22_22;
#line 666 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_23_23;
#line 666 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_24_24;

#line 666 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__List0_4)) == (MR_mktag((MR_Integer) 0)));
#line 666 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 666 "prog_io_dcg.m"
          {
#line 666 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 0)));
#line 666 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 1)));
#line 666 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 2)));
#line 666 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_15_15)) == (MR_mktag((MR_Integer) 0)));
#line 666 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 666 "prog_io_dcg.m"
              {
#line 666 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_15_15, (MR_Integer) 0)));
#line 666 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_16_16, (MR_String) "[|]") == 0);
#line 666 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 666 "prog_io_dcg.m"
                  {
#line 666 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 666 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 666 "prog_io_dcg.m"
                      {
#line 666 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Head_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_17_17, (MR_Integer) 0)));
#line 666 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_17_17, (MR_Integer) 1)));
#line 666 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 666 "prog_io_dcg.m"
                        if (parse_tree__prog_io_dcg__succeeded)
#line 666 "prog_io_dcg.m"
                          {
#line 666 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__Tail0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_18_18, (MR_Integer) 0)));
#line 666 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_18_18, (MR_Integer) 1)));
#line 666 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 666 "prog_io_dcg.m"
                            if (parse_tree__prog_io_dcg__succeeded)
#line 666 "prog_io_dcg.m"
                              {
#line 667 "prog_io_dcg.m"
                                {
#line 667 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__succeeded = parse_tree__prog_io_dcg__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_dcg__Tail0_9, parse_tree__prog_io_dcg__Term_5, &parse_tree__prog_io_dcg__Tail_11);
                                }
#line 666 "prog_io_dcg.m"
                                if (parse_tree__prog_io_dcg__succeeded)
#line 666 "prog_io_dcg.m"
                                  {
#line 668 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 668 "prog_io_dcg.m"
                                    {
#line 668 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_23_23, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Tail_11));
#line 668 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_24_24));
#line 668 "prog_io_dcg.m"
                                    }
#line 668 "prog_io_dcg.m"
                                    {
#line 668 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_22_22, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Head_8));
#line 668 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_22_22, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_23_23));
#line 668 "prog_io_dcg.m"
                                    }
#line 668 "prog_io_dcg.m"
                                    {
#line 668 "prog_io_dcg.m"
                                      MR_Word base;
#line 668 "prog_io_dcg.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 668 "prog_io_dcg.m"
                                      *parse_tree__prog_io_dcg__List_6 = base;
#line 668 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_15_15));
#line 668 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_22_22));
#line 668 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Context_10));
#line 668 "prog_io_dcg.m"
                                    }
#line 668 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 666 "prog_io_dcg.m"
                                  }
#line 666 "prog_io_dcg.m"
                              }
#line 666 "prog_io_dcg.m"
                          }
#line 666 "prog_io_dcg.m"
                      }
#line 666 "prog_io_dcg.m"
                  }
#line 666 "prog_io_dcg.m"
              }
#line 666 "prog_io_dcg.m"
          }
#line 666 "prog_io_dcg.m"
      }
#line 665 "prog_io_dcg.m"
    return parse_tree__prog_io_dcg__succeeded;
#line 665 "prog_io_dcg.m"
  }
#line 659 "prog_io_dcg.m"
}

#line 679 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__process_dcg_clause__679__1_2_p_0(
#line 679 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_32,
#line 679 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_33)
#line 679 "prog_io_dcg.m"
{
#line 679 "prog_io_dcg.m"
  {
#line 679 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 679 "prog_io_dcg.m"
    {
#line 679 "prog_io_dcg.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_32, parse_tree__prog_io_dcg__HeadVar__2_33);
#line 679 "prog_io_dcg.m"
      return;
    }
#line 679 "prog_io_dcg.m"
  }
#line 679 "prog_io_dcg.m"
}

#line 535 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__535__1_2_p_0(
#line 535 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_57,
#line 535 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_58)
#line 535 "prog_io_dcg.m"
{
#line 535 "prog_io_dcg.m"
  {
#line 535 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 535 "prog_io_dcg.m"
    {
#line 535 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_57, parse_tree__prog_io_dcg__HeadVar__2_58);
#line 535 "prog_io_dcg.m"
      return;
    }
#line 535 "prog_io_dcg.m"
  }
#line 535 "prog_io_dcg.m"
}

#line 534 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__534__1_2_p_0(
#line 534 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_51,
#line 534 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_52)
#line 534 "prog_io_dcg.m"
{
#line 534 "prog_io_dcg.m"
  {
#line 534 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 534 "prog_io_dcg.m"
    {
#line 534 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_51, parse_tree__prog_io_dcg__HeadVar__2_52);
#line 534 "prog_io_dcg.m"
      return;
    }
#line 534 "prog_io_dcg.m"
  }
#line 534 "prog_io_dcg.m"
}

#line 444 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__444__1_2_p_0(
#line 444 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_555,
#line 444 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_556)
#line 444 "prog_io_dcg.m"
{
#line 444 "prog_io_dcg.m"
  {
#line 444 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 444 "prog_io_dcg.m"
    {
#line 444 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_555, parse_tree__prog_io_dcg__HeadVar__2_556);
#line 444 "prog_io_dcg.m"
      return;
    }
#line 444 "prog_io_dcg.m"
  }
#line 444 "prog_io_dcg.m"
}

#line 443 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__443__1_2_p_0(
#line 443 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_549,
#line 443 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_550)
#line 443 "prog_io_dcg.m"
{
#line 443 "prog_io_dcg.m"
  {
#line 443 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 443 "prog_io_dcg.m"
    {
#line 443 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_549, parse_tree__prog_io_dcg__HeadVar__2_550);
#line 443 "prog_io_dcg.m"
      return;
    }
#line 443 "prog_io_dcg.m"
  }
#line 443 "prog_io_dcg.m"
}

#line 405 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__405__1_2_p_0(
#line 405 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_540,
#line 405 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_541)
#line 405 "prog_io_dcg.m"
{
#line 405 "prog_io_dcg.m"
  {
#line 405 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 405 "prog_io_dcg.m"
    {
#line 405 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_540, parse_tree__prog_io_dcg__HeadVar__2_541);
#line 405 "prog_io_dcg.m"
      return;
    }
#line 405 "prog_io_dcg.m"
  }
#line 405 "prog_io_dcg.m"
}

#line 404 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__404__1_2_p_0(
#line 404 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_534,
#line 404 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_535)
#line 404 "prog_io_dcg.m"
{
#line 404 "prog_io_dcg.m"
  {
#line 404 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 404 "prog_io_dcg.m"
    {
#line 404 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_534, parse_tree__prog_io_dcg__HeadVar__2_535);
#line 404 "prog_io_dcg.m"
      return;
    }
#line 404 "prog_io_dcg.m"
  }
#line 404 "prog_io_dcg.m"
}

#line 131 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal__131__1_2_p_0(
#line 131 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_64,
#line 131 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_65)
#line 131 "prog_io_dcg.m"
{
#line 131 "prog_io_dcg.m"
  {
#line 131 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 131 "prog_io_dcg.m"
    {
#line 131 "prog_io_dcg.m"
      mercury__term__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_dcg__HeadVar__1_64, parse_tree__prog_io_dcg__HeadVar__2_65);
#line 131 "prog_io_dcg.m"
      return;
    }
#line 131 "prog_io_dcg.m"
  }
#line 131 "prog_io_dcg.m"
}

#line 596 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_if_then_else_12_p_0(
#line 596 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__CondTerm_13,
#line 596 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ThenTerm_14,
#line 596 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ElseTerm_15,
#line 596 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_16,
#line 596 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_17,
#line 596 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_18,
#line 596 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_40,
#line 596 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_41,
#line 596 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_42,
#line 596 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_43,
#line 596 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Var0_21,
#line 596 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Var_22)
#line 596 "prog_io_dcg.m"
{
#line 602 "prog_io_dcg.m"
  {
#line 602 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 602 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeVarsCond_23;
#line 602 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeThen1_24;
#line 602 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__VarThen_25;
#line 602 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeElse1_26;
#line 602 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__VarElse_27;
#line 602 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_44_44;
#line 602 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_45_45;
#line 646 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Vars_28;
#line 646 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__StateVars_29;
#line 646 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Cond_30;
#line 646 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Then1_31;
#line 646 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Else1_32;

#line 603 "prog_io_dcg.m"
    {
#line 603 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_if_then_12_p_0(parse_tree__prog_io_dcg__CondTerm_13, parse_tree__prog_io_dcg__ThenTerm_14, parse_tree__prog_io_dcg__Context_16, parse_tree__prog_io_dcg__ContextPieces_17, &parse_tree__prog_io_dcg__MaybeVarsCond_23, &parse_tree__prog_io_dcg__MaybeThen1_24, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_40, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_44_44, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_42, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_45_45, parse_tree__prog_io_dcg__Var0_21, &parse_tree__prog_io_dcg__VarThen_25);
    }
#line 605 "prog_io_dcg.m"
    {
#line 605 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ElseTerm_15, parse_tree__prog_io_dcg__ContextPieces_17, &parse_tree__prog_io_dcg__MaybeElse1_26, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_44_44, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_41, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_45_45, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_43, parse_tree__prog_io_dcg__Var0_21, &parse_tree__prog_io_dcg__VarElse_27);
    }
#line 608 "prog_io_dcg.m"
    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeVarsCond_23)) == (MR_mktag((MR_Integer) 1)));
#line 608 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 608 "prog_io_dcg.m"
      {
#line 608 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__Vars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_23, (MR_Integer) 0)));
#line 608 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__StateVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_23, (MR_Integer) 1)));
#line 608 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__Cond_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_23, (MR_Integer) 2)));
#line 609 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeThen1_24)) == (MR_mktag((MR_Integer) 1)));
#line 609 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 609 "prog_io_dcg.m"
          {
#line 609 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Then1_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeThen1_24, (MR_Integer) 0)));
#line 610 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeElse1_26)) == (MR_mktag((MR_Integer) 1)));
#line 610 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 610 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__Else1_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeElse1_26, (MR_Integer) 0)));
#line 609 "prog_io_dcg.m"
          }
#line 608 "prog_io_dcg.m"
      }
#line 646 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 643 "prog_io_dcg.m"
      {
#line 643 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Then_33;
#line 643 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Else_34;
#line 643 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Goal_36;
#line 612 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_62_62;

#line 612 "prog_io_dcg.m"
        {
#line 612 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__VarThen_25)), ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)));
        }
#line 612 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 612 "prog_io_dcg.m"
          {
#line 1225 "parse_tree.prog_io_dcg.c"
            parse_tree__prog_io_dcg__TypeInfo_62_62 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 612 "prog_io_dcg.m"
            {
#line 612 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_dcg__TypeInfo_62_62, ((MR_Box) (parse_tree__prog_io_dcg__VarElse_27)), ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)));
            }
#line 612 "prog_io_dcg.m"
          }
#line 616 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 613 "prog_io_dcg.m"
          {
#line 613 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__Var0_21;
#line 614 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Then_33 = parse_tree__prog_io_dcg__Then1_31;
#line 615 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Else_34 = parse_tree__prog_io_dcg__Else1_32;
#line 613 "prog_io_dcg.m"
          }
#line 616 "prog_io_dcg.m"
        else
#line 623 "prog_io_dcg.m"
          {
#line 616 "prog_io_dcg.m"
            {
#line 616 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__VarThen_25)), ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)));
            }
#line 623 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 617 "prog_io_dcg.m"
              {
#line 617 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__Unify_35;
#line 617 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_48_48;
#line 617 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_49_49;

#line 617 "prog_io_dcg.m"
                *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__VarElse_27;
#line 619 "prog_io_dcg.m"
                {
#line 619 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_48_48, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__Var_22));
#line 619 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_48_48, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 619 "prog_io_dcg.m"
                }
#line 619 "prog_io_dcg.m"
                {
#line 619 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_dcg__VarThen_25));
#line 619 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_49_49, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 619 "prog_io_dcg.m"
                }
#line 618 "prog_io_dcg.m"
                {
#line 618 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__Unify_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 618 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 618 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_35, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 618 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_35, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_48_48));
#line 618 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_35, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_49_49));
#line 618 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_35, 4) = ((MR_Box) ((MR_Integer) 0));
#line 618 "prog_io_dcg.m"
                }
#line 621 "prog_io_dcg.m"
                {
#line 621 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__Then_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 621 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Then_33, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 621 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Then_33, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Then1_31));
#line 621 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Then_33, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Unify_35));
#line 621 "prog_io_dcg.m"
                }
#line 622 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__Else_34 = parse_tree__prog_io_dcg__Else1_32;
#line 617 "prog_io_dcg.m"
              }
#line 623 "prog_io_dcg.m"
            else
#line 630 "prog_io_dcg.m"
              {
#line 623 "prog_io_dcg.m"
                {
#line 623 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__VarElse_27)), ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)));
                }
#line 630 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 624 "prog_io_dcg.m"
                  {
#line 624 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__V_51_51;
#line 624 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__V_52_52;
#line 624 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__Unify_56;

#line 624 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__VarThen_25;
#line 625 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Then_33 = parse_tree__prog_io_dcg__Then1_31;
#line 627 "prog_io_dcg.m"
                    {
#line 627 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 627 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_51_51, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__Var_22));
#line 627 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_51_51, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 627 "prog_io_dcg.m"
                    }
#line 627 "prog_io_dcg.m"
                    {
#line 627 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 627 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_dcg__VarElse_27));
#line 627 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_52_52, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 627 "prog_io_dcg.m"
                    }
#line 626 "prog_io_dcg.m"
                    {
#line 626 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__Unify_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 626 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 626 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_56, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 626 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_56, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_51_51));
#line 626 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_56, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_52_52));
#line 626 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_56, 4) = ((MR_Box) ((MR_Integer) 0));
#line 626 "prog_io_dcg.m"
                    }
#line 629 "prog_io_dcg.m"
                    {
#line 629 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__Else_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 629 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Else_34, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 629 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Else_34, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Else1_32));
#line 629 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Else_34, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Unify_56));
#line 629 "prog_io_dcg.m"
                    }
#line 624 "prog_io_dcg.m"
                  }
#line 630 "prog_io_dcg.m"
                else
#line 640 "prog_io_dcg.m"
                  {
#line 640 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__VarElse_27;
#line 641 "prog_io_dcg.m"
                    {
#line 641 "prog_io_dcg.m"
                      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_io_dcg__VarThen_25, parse_tree__prog_io_dcg__VarElse_27, parse_tree__prog_io_dcg__Then1_31, &parse_tree__prog_io_dcg__Then_33);
                    }
#line 642 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Else_34 = parse_tree__prog_io_dcg__Else1_32;
#line 640 "prog_io_dcg.m"
                  }
#line 630 "prog_io_dcg.m"
              }
#line 623 "prog_io_dcg.m"
          }
#line 644 "prog_io_dcg.m"
        {
#line 644 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__Goal_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 644 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 644 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 644 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_28));
#line 644 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 3) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_29));
#line 644 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 4) = ((MR_Box) (parse_tree__prog_io_dcg__Cond_30));
#line 644 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 5) = ((MR_Box) (parse_tree__prog_io_dcg__Then_33));
#line 644 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 6) = ((MR_Box) (parse_tree__prog_io_dcg__Else_34));
#line 644 "prog_io_dcg.m"
        }
#line 645 "prog_io_dcg.m"
        {
#line 645 "prog_io_dcg.m"
          MR_Word base;
#line 645 "prog_io_dcg.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 645 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeGoal_18 = base;
#line 645 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_36));
#line 645 "prog_io_dcg.m"
        }
#line 643 "prog_io_dcg.m"
      }
#line 646 "prog_io_dcg.m"
    else
#line 647 "prog_io_dcg.m"
      {
#line 647 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_58_58 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3];
#line 647 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_59_59 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
#line 647 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_60_60;
#line 647 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__CondSpecs_37;
#line 647 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__ThenSpecs_38;
#line 647 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__ElseSpecs_39;
#line 647 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_54_54;
#line 647 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_55_55;

#line 647 "prog_io_dcg.m"
        {
#line 647 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__CondSpecs_37 = parse_tree__prog_io_util__get_any_errors3_1_f_0(parse_tree__prog_io_dcg__TypeInfo_58_58, parse_tree__prog_io_dcg__TypeInfo_58_58, parse_tree__prog_io_dcg__TypeCtorInfo_59_59, parse_tree__prog_io_dcg__MaybeVarsCond_23);
        }
#line 648 "prog_io_dcg.m"
        {
#line 648 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__ThenSpecs_38 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_59_59, parse_tree__prog_io_dcg__MaybeThen1_24);
        }
#line 649 "prog_io_dcg.m"
        {
#line 649 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__ElseSpecs_39 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_59_59, parse_tree__prog_io_dcg__MaybeElse1_26);
        }
#line 1483 "parse_tree.prog_io_dcg.c"
        parse_tree__prog_io_dcg__TypeCtorInfo_60_60 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 650 "prog_io_dcg.m"
        {
#line 650 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_55_55 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_60_60, parse_tree__prog_io_dcg__ThenSpecs_38, parse_tree__prog_io_dcg__ElseSpecs_39);
        }
#line 650 "prog_io_dcg.m"
        {
#line 650 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_54_54 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_60_60, parse_tree__prog_io_dcg__CondSpecs_37, parse_tree__prog_io_dcg__V_55_55);
        }
#line 650 "prog_io_dcg.m"
        {
#line 650 "prog_io_dcg.m"
          MR_Word base;
#line 650 "prog_io_dcg.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 650 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeGoal_18 = base;
#line 650 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_54_54));
#line 650 "prog_io_dcg.m"
        }
#line 651 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__Var0_21;
#line 647 "prog_io_dcg.m"
      }
#line 602 "prog_io_dcg.m"
  }
#line 596 "prog_io_dcg.m"
}

#line 562 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_if_then_12_p_0(
#line 562 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__CondTerm_13,
#line 562 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ThenTerm_14,
#line 562 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_15,
#line 562 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_16,
#line 562 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeVarsCond_17,
#line 562 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeThen_18,
#line 562 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
#line 562 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
#line 562 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
#line 562 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
#line 562 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Var0_21,
#line 562 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Var_22)
#line 562 "prog_io_dcg.m"
{
#line 569 "prog_io_dcg.m"
  {
#line 569 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 569 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Var1_23;
#line 569 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeThen1_24;
#line 569 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Var2_25;
#line 569 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_34_34;
#line 569 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_35_35;
#line 569 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36;
#line 569 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37;
#line 575 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeInfo_44_44;

#line 570 "prog_io_dcg.m"
    {
#line 570 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0(parse_tree__prog_io_dcg__CondTerm_13, parse_tree__prog_io_dcg__ContextPieces_16, parse_tree__prog_io_dcg__MaybeVarsCond_17, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_34_34, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_35_35, parse_tree__prog_io_dcg__Var0_21, &parse_tree__prog_io_dcg__Var1_23);
    }
#line 572 "prog_io_dcg.m"
    {
#line 572 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ThenTerm_14, parse_tree__prog_io_dcg__ContextPieces_16, &parse_tree__prog_io_dcg__MaybeThen1_24, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_34_34, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_35_35, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37, parse_tree__prog_io_dcg__Var1_23, &parse_tree__prog_io_dcg__Var2_25);
    }
#line 575 "prog_io_dcg.m"
    {
#line 575 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)), ((MR_Box) (parse_tree__prog_io_dcg__Var1_23)));
    }
#line 575 "prog_io_dcg.m"
    parse_tree__prog_io_dcg__succeeded = !(parse_tree__prog_io_dcg__succeeded);
#line 575 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 575 "prog_io_dcg.m"
      {
#line 1587 "parse_tree.prog_io_dcg.c"
        parse_tree__prog_io_dcg__TypeInfo_44_44 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 576 "prog_io_dcg.m"
        {
#line 576 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_dcg__TypeInfo_44_44, ((MR_Box) (parse_tree__prog_io_dcg__Var1_23)), ((MR_Box) (parse_tree__prog_io_dcg__Var2_25)));
        }
#line 575 "prog_io_dcg.m"
      }
#line 591 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 586 "prog_io_dcg.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeThen1_24)) == (MR_mktag((MR_Integer) 0))))
#line 587 "prog_io_dcg.m"
        {
#line 588 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeThen_18 = parse_tree__prog_io_dcg__MaybeThen1_24;
#line 589 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__Var2_25;
#line 587 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36;
#line 587 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37;
#line 587 "prog_io_dcg.m"
        }
#line 586 "prog_io_dcg.m"
      else
#line 579 "prog_io_dcg.m"
        {
#line 579 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_59;
#line 579 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__Then1_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeThen1_24, (MR_Integer) 0)));
#line 579 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__Unify_27;
#line 579 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__Then_28;
#line 579 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__V_40_40;
#line 579 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__V_41_41;
#line 579 "prog_io_dcg.m"
          MR_Integer parse_tree__prog_io_dcg__N_52;
#line 579 "prog_io_dcg.m"
          MR_String parse_tree__prog_io_dcg__StringN_53;
#line 579 "prog_io_dcg.m"
          MR_String parse_tree__prog_io_dcg__VarName_54;
#line 579 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_57;

#line 102 "prog_io_dcg.m"
          {
#line 102 "prog_io_dcg.m"
            mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_52, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33);
          }
#line 103 "prog_io_dcg.m"
          {
#line 103 "prog_io_dcg.m"
            mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_52, &parse_tree__prog_io_dcg__StringN_53);
          }
#line 104 "prog_io_dcg.m"
          {
#line 104 "prog_io_dcg.m"
            mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_53, &parse_tree__prog_io_dcg__VarName_54);
          }
#line 1652 "parse_tree.prog_io_dcg.c"
          parse_tree__prog_io_dcg__TypeCtorInfo_20_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 105 "prog_io_dcg.m"
          {
#line 105 "prog_io_dcg.m"
            mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_59, parse_tree__prog_io_dcg__Var_22, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_57);
          }
#line 106 "prog_io_dcg.m"
          {
#line 106 "prog_io_dcg.m"
            mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_59, *parse_tree__prog_io_dcg__Var_22, parse_tree__prog_io_dcg__VarName_54, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_57, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31);
          }
#line 582 "prog_io_dcg.m"
          {
#line 582 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__Var_22));
#line 582 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_15));
#line 582 "prog_io_dcg.m"
          }
#line 582 "prog_io_dcg.m"
          {
#line 582 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Var2_25));
#line 582 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_41_41, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_15));
#line 582 "prog_io_dcg.m"
          }
#line 581 "prog_io_dcg.m"
          {
#line 581 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Unify_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 581 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 581 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_27, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_15));
#line 581 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_27, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_40_40));
#line 581 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_27, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_41_41));
#line 581 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_27, 4) = ((MR_Box) ((MR_Integer) 0));
#line 581 "prog_io_dcg.m"
          }
#line 584 "prog_io_dcg.m"
          {
#line 584 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Then_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 584 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Then_28, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_15));
#line 584 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Then_28, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Then1_26));
#line 584 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Then_28, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Unify_27));
#line 584 "prog_io_dcg.m"
          }
#line 585 "prog_io_dcg.m"
          {
#line 585 "prog_io_dcg.m"
            MR_Word base;
#line 585 "prog_io_dcg.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 585 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__MaybeThen_18 = base;
#line 585 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Then_28));
#line 585 "prog_io_dcg.m"
          }
#line 579 "prog_io_dcg.m"
        }
#line 591 "prog_io_dcg.m"
    else
#line 592 "prog_io_dcg.m"
      {
#line 592 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__MaybeThen_18 = parse_tree__prog_io_dcg__MaybeThen1_24;
#line 593 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__Var2_25;
#line 592 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37;
#line 592 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36;
#line 592 "prog_io_dcg.m"
      }
#line 569 "prog_io_dcg.m"
  }
#line 562 "prog_io_dcg.m"
}

#line 535 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_2(
#line 535 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 535 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 535 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 535 "prog_io_dcg.m"
{
#line 535 "prog_io_dcg.m"
  {
#line 535 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 535 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv1_HeadVar__2_58;

#line 535 "prog_io_dcg.m"
    {
#line 535 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__535__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv1_HeadVar__2_58);
    }
#line 535 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv1_HeadVar__2_58));
#line 535 "prog_io_dcg.m"
  }
#line 535 "prog_io_dcg.m"
}

#line 534 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_1(
#line 534 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 534 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 534 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 534 "prog_io_dcg.m"
{
#line 534 "prog_io_dcg.m"
  {
#line 534 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 534 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv0_HeadVar__2_52;

#line 534 "prog_io_dcg.m"
    {
#line 534 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__534__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv0_HeadVar__2_52);
    }
#line 534 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv0_HeadVar__2_52));
#line 534 "prog_io_dcg.m"
  }
#line 534 "prog_io_dcg.m"
}

#line 511 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0(
#line 511 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_10,
#line 511 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_11,
#line 511 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeVarsGoal_12,
#line 511 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
#line 511 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
#line 511 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
#line 511 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
#line 511 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_34,
#line 511 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Var_35)
#line 511 "prog_io_dcg.m"
{
#line 517 "prog_io_dcg.m"
  {
#line 517 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Term_10)) == (MR_mktag((MR_Integer) 0)));
#line 517 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeVars_20;
#line 517 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__GoalTerm_21;
#line 517 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeGoal_22;
#line 524 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__VarsTerm_16;
#line 524 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__SubTerm_17;
#line 518 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_36_36;
#line 518 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__V_37_37;
#line 518 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_38_38;
#line 518 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_39_39;
#line 518 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_40_40;
#line 518 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg___Context_18;
#line 537 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Vars0_23;
#line 537 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__StateVars0_24;
#line 537 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Goal_25;

#line 518 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 518 "prog_io_dcg.m"
      {
#line 518 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 0)));
#line 518 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 1)));
#line 518 "prog_io_dcg.m"
        parse_tree__prog_io_dcg___Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 2)));
#line 518 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 518 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 518 "prog_io_dcg.m"
          {
#line 518 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_36_36, (MR_Integer) 0)));
#line 518 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_37_37, (MR_String) "some") == 0);
#line 518 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 518 "prog_io_dcg.m"
              {
#line 518 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 518 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 518 "prog_io_dcg.m"
                  {
#line 518 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__VarsTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_38_38, (MR_Integer) 0)));
#line 518 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_38_38, (MR_Integer) 1)));
#line 518 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 518 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 518 "prog_io_dcg.m"
                      {
#line 518 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__SubTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_39_39, (MR_Integer) 0)));
#line 518 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_39_39, (MR_Integer) 1)));
#line 518 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 518 "prog_io_dcg.m"
                      }
#line 518 "prog_io_dcg.m"
                  }
#line 518 "prog_io_dcg.m"
              }
#line 518 "prog_io_dcg.m"
          }
#line 518 "prog_io_dcg.m"
      }
#line 524 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 520 "prog_io_dcg.m"
      {
#line 520 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_50_50 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 520 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__GenericVarSet_19;

#line 520 "prog_io_dcg.m"
        {
#line 520 "prog_io_dcg.m"
          mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__TypeCtorInfo_50_50, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30, &parse_tree__prog_io_dcg__GenericVarSet_19);
        }
#line 521 "prog_io_dcg.m"
        {
#line 521 "prog_io_dcg.m"
          parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_50_50, parse_tree__prog_io_dcg__VarsTerm_16, parse_tree__prog_io_dcg__GenericVarSet_19, parse_tree__prog_io_dcg__ContextPieces_11, &parse_tree__prog_io_dcg__MaybeVars_20);
        }
#line 523 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__GoalTerm_21 = parse_tree__prog_io_dcg__SubTerm_17;
#line 520 "prog_io_dcg.m"
      }
#line 524 "prog_io_dcg.m"
    else
#line 525 "prog_io_dcg.m"
      {
#line 525 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__MaybeVars_20 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[8]);
#line 526 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__GoalTerm_21 = parse_tree__prog_io_dcg__Term_10;
#line 525 "prog_io_dcg.m"
      }
#line 528 "prog_io_dcg.m"
    {
#line 528 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__GoalTerm_21, parse_tree__prog_io_dcg__ContextPieces_11, &parse_tree__prog_io_dcg__MaybeGoal_22, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_34, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_35);
    }
#line 531 "prog_io_dcg.m"
    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeVars_20)) == (MR_mktag((MR_Integer) 1)));
#line 531 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 531 "prog_io_dcg.m"
      {
#line 531 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__Vars0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVars_20, (MR_Integer) 0)));
#line 531 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__StateVars0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVars_20, (MR_Integer) 1)));
#line 532 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal_22)) == (MR_mktag((MR_Integer) 1)));
#line 532 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 532 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__Goal_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal_22, (MR_Integer) 0)));
#line 531 "prog_io_dcg.m"
      }
#line 537 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 534 "prog_io_dcg.m"
      {
#line 534 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_55_55 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[4];
#line 534 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_56_56 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 534 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Vars_26;
#line 534 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__StateVars_27;

#line 534 "prog_io_dcg.m"
        {
#line 534 "prog_io_dcg.m"
          mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_55_55, parse_tree__prog_io_dcg__TypeInfo_56_56, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[6], parse_tree__prog_io_dcg__Vars0_23, &parse_tree__prog_io_dcg__Vars_26);
        }
#line 535 "prog_io_dcg.m"
        {
#line 535 "prog_io_dcg.m"
          mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_55_55, parse_tree__prog_io_dcg__TypeInfo_56_56, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[7], parse_tree__prog_io_dcg__StateVars0_24, &parse_tree__prog_io_dcg__StateVars_27);
        }
#line 536 "prog_io_dcg.m"
        {
#line 536 "prog_io_dcg.m"
          MR_Word base;
#line 536 "prog_io_dcg.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 536 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeVarsGoal_12 = base;
#line 536 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_26));
#line 536 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_27));
#line 536 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_25));
#line 536 "prog_io_dcg.m"
        }
#line 534 "prog_io_dcg.m"
      }
#line 537 "prog_io_dcg.m"
    else
#line 538 "prog_io_dcg.m"
      {
#line 538 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_61_61 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[5];
#line 538 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__VarsSpecs_28;
#line 538 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__GoalSpecs_29;
#line 538 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_48_48;

#line 538 "prog_io_dcg.m"
        {
#line 538 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__VarsSpecs_28 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_dcg__TypeInfo_61_61, parse_tree__prog_io_dcg__TypeInfo_61_61, parse_tree__prog_io_dcg__MaybeVars_20);
        }
#line 539 "prog_io_dcg.m"
        {
#line 539 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__GoalSpecs_29 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, parse_tree__prog_io_dcg__MaybeGoal_22);
        }
#line 540 "prog_io_dcg.m"
        {
#line 540 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_48_48 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__VarsSpecs_28, parse_tree__prog_io_dcg__GoalSpecs_29);
        }
#line 540 "prog_io_dcg.m"
        {
#line 540 "prog_io_dcg.m"
          MR_Word base;
#line 540 "prog_io_dcg.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 540 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeVarsGoal_12 = base;
#line 540 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_48_48));
#line 540 "prog_io_dcg.m"
        }
#line 538 "prog_io_dcg.m"
      }
#line 517 "prog_io_dcg.m"
  }
#line 511 "prog_io_dcg.m"
}

#line 499 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(
#line 499 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Disjunct0_5,
#line 499 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__AddedGoal_6,
#line 499 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_7,
#line 499 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Disjunct_8)
#line 499 "prog_io_dcg.m"
{
#line 507 "prog_io_dcg.m"
  {
#line 507 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_dcg__Disjunct0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Disjunct0_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 507 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Disjunct0Context_9;
#line 507 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__SubDisjunctA0_10;
#line 507 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__SubDisjunctB0_11;

#line 503 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 503 "prog_io_dcg.m"
      {
#line 503 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__Disjunct0Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Disjunct0_5, (MR_Integer) 1)));
#line 503 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__SubDisjunctA0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Disjunct0_5, (MR_Integer) 2)));
#line 503 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__SubDisjunctB0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Disjunct0_5, (MR_Integer) 3)));
#line 504 "prog_io_dcg.m"
        {
#line 504 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__SubDisjunctA_12;
#line 504 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__SubDisjunctB_13;

#line 504 "prog_io_dcg.m"
          {
#line 504 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(parse_tree__prog_io_dcg__SubDisjunctA0_10, parse_tree__prog_io_dcg__AddedGoal_6, parse_tree__prog_io_dcg__Context_7, &parse_tree__prog_io_dcg__SubDisjunctA_12);
          }
#line 505 "prog_io_dcg.m"
          {
#line 505 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(parse_tree__prog_io_dcg__SubDisjunctB0_11, parse_tree__prog_io_dcg__AddedGoal_6, parse_tree__prog_io_dcg__Context_7, &parse_tree__prog_io_dcg__SubDisjunctB_13);
          }
#line 506 "prog_io_dcg.m"
          {
#line 506 "prog_io_dcg.m"
            MR_Word base;
#line 506 "prog_io_dcg.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 506 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__Disjunct_8 = base;
#line 506 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 506 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Disjunct0Context_9));
#line 506 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubDisjunctA_12));
#line 506 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubDisjunctB_13));
#line 506 "prog_io_dcg.m"
          }
#line 504 "prog_io_dcg.m"
        }
#line 503 "prog_io_dcg.m"
      }
#line 503 "prog_io_dcg.m"
    else
#line 508 "prog_io_dcg.m"
      {
#line 508 "prog_io_dcg.m"
        MR_Word base;
#line 508 "prog_io_dcg.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 508 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__Disjunct_8 = base;
#line 508 "prog_io_dcg.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_7));
#line 508 "prog_io_dcg.m"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Disjunct0_5));
#line 508 "prog_io_dcg.m"
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_dcg__AddedGoal_6));
#line 508 "prog_io_dcg.m"
      }
#line 507 "prog_io_dcg.m"
  }
#line 499 "prog_io_dcg.m"
}

#line 470 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_with_purity_10_p_0(
#line 470 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__G_11,
#line 470 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Purity_12,
#line 470 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_13,
#line 470 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_14,
#line 470 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_29,
#line 470 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_30,
#line 470 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_31,
#line 470 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_32,
#line 470 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_33,
#line 470 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Var_34)
#line 470 "prog_io_dcg.m"
{
#line 476 "prog_io_dcg.m"
  {
#line 476 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 476 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeGoal1_18;

#line 477 "prog_io_dcg.m"
    {
#line 477 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__G_11, parse_tree__prog_io_dcg__ContextPieces_13, &parse_tree__prog_io_dcg__MaybeGoal1_18, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_29, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_30, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_31, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_32, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_33, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_34);
    }
#line 494 "prog_io_dcg.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal1_18)) == (MR_mktag((MR_Integer) 0))))
#line 496 "prog_io_dcg.m"
      *parse_tree__prog_io_dcg__MaybeGoal_14 = parse_tree__prog_io_dcg__MaybeGoal1_18;
#line 494 "prog_io_dcg.m"
    else
#line 479 "prog_io_dcg.m"
      {
#line 479 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Goal1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal1_18, (MR_Integer) 0)));
#line 479 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Goal_23;
#line 482 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Context_20;
#line 482 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Pred_21;
#line 482 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Args_22;
#line 480 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_38_38;

#line 480 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_dcg__Goal1_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_19, (MR_Integer) 0)))) == (MR_Integer) 21)));
#line 480 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 480 "prog_io_dcg.m"
          {
#line 480 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_19, (MR_Integer) 1)));
#line 480 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Pred_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_19, (MR_Integer) 2)));
#line 480 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_19, (MR_Integer) 3)));
#line 480 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_19, (MR_Integer) 4)));
#line 480 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_38_38 == (MR_Integer) 0);
#line 480 "prog_io_dcg.m"
          }
#line 482 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 481 "prog_io_dcg.m"
          {
#line 481 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Goal_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 481 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 481 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_23, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_20));
#line 481 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_23, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Pred_21));
#line 481 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_23, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Args_22));
#line 481 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_23, 4) = ((MR_Box) (parse_tree__prog_io_dcg__Purity_12));
#line 481 "prog_io_dcg.m"
          }
#line 482 "prog_io_dcg.m"
        else
#line 484 "prog_io_dcg.m"
          {
#line 484 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__ProgTerm1_24;
#line 484 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__ProgTerm2_25;
#line 484 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Context_45;
#line 482 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_39_39;

#line 482 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_dcg__Goal1_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_19, (MR_Integer) 0)))) == (MR_Integer) 22)));
#line 482 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 482 "prog_io_dcg.m"
              {
#line 482 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__Context_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_19, (MR_Integer) 1)));
#line 482 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__ProgTerm1_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_19, (MR_Integer) 2)));
#line 482 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__ProgTerm2_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_19, (MR_Integer) 3)));
#line 482 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_19, (MR_Integer) 4)));
#line 482 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_39_39 == (MR_Integer) 0);
#line 482 "prog_io_dcg.m"
              }
#line 484 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 483 "prog_io_dcg.m"
              {
#line 483 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__Goal_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 483 "prog_io_dcg.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 483 "prog_io_dcg.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_23, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_45));
#line 483 "prog_io_dcg.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_23, 2) = ((MR_Box) (parse_tree__prog_io_dcg__ProgTerm1_24));
#line 483 "prog_io_dcg.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_23, 3) = ((MR_Box) (parse_tree__prog_io_dcg__ProgTerm2_25));
#line 483 "prog_io_dcg.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_23, 4) = ((MR_Box) (parse_tree__prog_io_dcg__Purity_12));
#line 483 "prog_io_dcg.m"
              }
#line 484 "prog_io_dcg.m"
            else
#line 488 "prog_io_dcg.m"
              {
#line 488 "prog_io_dcg.m"
                MR_String parse_tree__prog_io_dcg__PurityString_26;
#line 488 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__G1_27;
#line 488 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_40_40;
#line 488 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_41_41;
#line 488 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_42_42;

#line 488 "prog_io_dcg.m"
                {
#line 488 "prog_io_dcg.m"
                  parse_tree__prog_out__purity_name_2_p_0(parse_tree__prog_io_dcg__Purity_12, &parse_tree__prog_io_dcg__PurityString_26);
                }
#line 489 "prog_io_dcg.m"
                {
#line 489 "prog_io_dcg.m"
                  mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__G_11, &parse_tree__prog_io_dcg__G1_27);
                }
#line 490 "prog_io_dcg.m"
                {
#line 490 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_40_40 = parse_tree__prog_item__goal_get_context_1_f_0(parse_tree__prog_io_dcg__Goal1_19);
                }
#line 491 "prog_io_dcg.m"
                {
#line 491 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 491 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_dcg__PurityString_26));
#line 491 "prog_io_dcg.m"
                }
#line 491 "prog_io_dcg.m"
                {
#line 491 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 491 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_dcg__G1_27));
#line 491 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 491 "prog_io_dcg.m"
                }
#line 490 "prog_io_dcg.m"
                {
#line 490 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__Goal_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 490 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 490 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_23, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_40_40));
#line 490 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_23, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_41_41));
#line 490 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_23, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_42_42));
#line 490 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_23, 4) = ((MR_Box) ((MR_Integer) 0));
#line 490 "prog_io_dcg.m"
                }
#line 488 "prog_io_dcg.m"
              }
#line 484 "prog_io_dcg.m"
          }
#line 493 "prog_io_dcg.m"
        {
#line 493 "prog_io_dcg.m"
          MR_Word base;
#line 493 "prog_io_dcg.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 493 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeGoal_14 = base;
#line 493 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_23));
#line 493 "prog_io_dcg.m"
        }
#line 479 "prog_io_dcg.m"
      }
#line 476 "prog_io_dcg.m"
  }
#line 470 "prog_io_dcg.m"
}

#line 444 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_4(
#line 444 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 444 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 444 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 444 "prog_io_dcg.m"
{
#line 444 "prog_io_dcg.m"
  {
#line 444 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 444 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv3_HeadVar__2_556;

#line 444 "prog_io_dcg.m"
    {
#line 444 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__444__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv3_HeadVar__2_556);
    }
#line 444 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv3_HeadVar__2_556));
#line 444 "prog_io_dcg.m"
  }
#line 444 "prog_io_dcg.m"
}

#line 443 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_3(
#line 443 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 443 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 443 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 443 "prog_io_dcg.m"
{
#line 443 "prog_io_dcg.m"
  {
#line 443 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 443 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv2_HeadVar__2_550;

#line 443 "prog_io_dcg.m"
    {
#line 443 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__443__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv2_HeadVar__2_550);
    }
#line 443 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv2_HeadVar__2_550));
#line 443 "prog_io_dcg.m"
  }
#line 443 "prog_io_dcg.m"
}

#line 405 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_2(
#line 405 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 405 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 405 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 405 "prog_io_dcg.m"
{
#line 405 "prog_io_dcg.m"
  {
#line 405 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 405 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv1_HeadVar__2_541;

#line 405 "prog_io_dcg.m"
    {
#line 405 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__405__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv1_HeadVar__2_541);
    }
#line 405 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv1_HeadVar__2_541));
#line 405 "prog_io_dcg.m"
  }
#line 405 "prog_io_dcg.m"
}

#line 404 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_1(
#line 404 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 404 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 404 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 404 "prog_io_dcg.m"
{
#line 404 "prog_io_dcg.m"
  {
#line 404 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 404 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv0_HeadVar__2_535;

#line 404 "prog_io_dcg.m"
    {
#line 404 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__404__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv0_HeadVar__2_535);
    }
#line 404 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv0_HeadVar__2_535));
#line 404 "prog_io_dcg.m"
  }
#line 404 "prog_io_dcg.m"
}

#line 173 "prog_io_dcg.m"
static MR_bool MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0(
#line 173 "prog_io_dcg.m"
  MR_String parse_tree__prog_io_dcg__HeadVar__1_1,
#line 173 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__2_2,
#line 173 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_3,
#line 173 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__4_4,
#line 173 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_5,
#line 173 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6,
#line 173 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7,
#line 173 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8,
#line 173 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9,
#line 173 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__10_10,
#line 173 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__11_11)
#line 173 "prog_io_dcg.m"
{
#line 180 "prog_io_dcg.m"
  {
#line 180 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 180 "prog_io_dcg.m"
    if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "&") == 0))
#line 299 "prog_io_dcg.m"
      {
#line 299 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__ATerm_279;
#line 299 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__BTerm_280;
#line 299 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__MaybeAGoal_287;
#line 299 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__MaybeBGoal_288;
#line 299 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_300_300;
#line 299 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_301_301;
#line 299 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_302_302;
#line 299 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_303_303;
#line 299 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Var_304_304;
#line 308 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__AGoal_289;
#line 308 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__BGoal_290;

#line 298 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 298 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 298 "prog_io_dcg.m"
          {
#line 298 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__ATerm_279 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 298 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 298 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_300_300)) == (MR_mktag((MR_Integer) 1)));
#line 298 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 298 "prog_io_dcg.m"
              {
#line 298 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__BTerm_280 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_300_300, (MR_Integer) 0)));
#line 298 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_300_300, (MR_Integer) 1)));
#line 298 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_301_301 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 299 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 299 "prog_io_dcg.m"
                  {
#line 300 "prog_io_dcg.m"
                    {
#line 300 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ATerm_279, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeAGoal_287, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_302_302, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_303_303, parse_tree__prog_io_dcg__HeadVar__10_10, &parse_tree__prog_io_dcg__STATE_VARIABLE_Var_304_304);
                    }
#line 301 "prog_io_dcg.m"
                    {
#line 301 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__BTerm_280, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeBGoal_288, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_302_302, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_303_303, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_304_304, parse_tree__prog_io_dcg__HeadVar__11_11);
                    }
#line 303 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeAGoal_287)) == (MR_mktag((MR_Integer) 1)));
#line 303 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 303 "prog_io_dcg.m"
                      {
#line 303 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__AGoal_289 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeAGoal_287, (MR_Integer) 0)));
#line 304 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeBGoal_288)) == (MR_mktag((MR_Integer) 1)));
#line 304 "prog_io_dcg.m"
                        if (parse_tree__prog_io_dcg__succeeded)
#line 304 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__BGoal_290 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeBGoal_288, (MR_Integer) 0)));
#line 303 "prog_io_dcg.m"
                      }
#line 308 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 306 "prog_io_dcg.m"
                      {
#line 306 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__Goal_291;

#line 306 "prog_io_dcg.m"
                        {
#line 306 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__Goal_291 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 306 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Goal_291, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 306 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Goal_291, 1) = ((MR_Box) (parse_tree__prog_io_dcg__AGoal_289));
#line 306 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Goal_291, 2) = ((MR_Box) (parse_tree__prog_io_dcg__BGoal_290));
#line 306 "prog_io_dcg.m"
                        }
#line 307 "prog_io_dcg.m"
                        {
#line 307 "prog_io_dcg.m"
                          MR_Word base;
#line 307 "prog_io_dcg.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 307 "prog_io_dcg.m"
                          *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 307 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_291));
#line 307 "prog_io_dcg.m"
                        }
#line 306 "prog_io_dcg.m"
                      }
#line 308 "prog_io_dcg.m"
                    else
#line 309 "prog_io_dcg.m"
                      {
#line 309 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_528_528 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
#line 309 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__ASpecs_292;
#line 309 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__BSpecs_293;
#line 309 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__V_308_308;

#line 309 "prog_io_dcg.m"
                        {
#line 309 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__ASpecs_292 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_528_528, parse_tree__prog_io_dcg__MaybeAGoal_287);
                        }
#line 310 "prog_io_dcg.m"
                        {
#line 310 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__BSpecs_293 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_528_528, parse_tree__prog_io_dcg__MaybeBGoal_288);
                        }
#line 311 "prog_io_dcg.m"
                        {
#line 311 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_308_308 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__ASpecs_292, parse_tree__prog_io_dcg__BSpecs_293);
                        }
#line 311 "prog_io_dcg.m"
                        {
#line 311 "prog_io_dcg.m"
                          MR_Word base;
#line 311 "prog_io_dcg.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 311 "prog_io_dcg.m"
                          *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 311 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_308_308));
#line 311 "prog_io_dcg.m"
                        }
#line 309 "prog_io_dcg.m"
                      }
#line 308 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 299 "prog_io_dcg.m"
                  }
#line 298 "prog_io_dcg.m"
              }
#line 298 "prog_io_dcg.m"
          }
#line 299 "prog_io_dcg.m"
      }
#line 180 "prog_io_dcg.m"
    else
#line 180 "prog_io_dcg.m"
    if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) ",") == 0))
#line 283 "prog_io_dcg.m"
      {
#line 283 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__ATerm_249;
#line 283 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__BTerm_250;
#line 283 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__MaybeAGoal_257;
#line 283 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__MaybeBGoal_258;
#line 283 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_270_270;
#line 283 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_271_271;
#line 283 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_272_272;
#line 283 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_273_273;
#line 283 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Var_274_274;
#line 293 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__AGoal_259;
#line 293 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__BGoal_260;

#line 282 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 282 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 282 "prog_io_dcg.m"
          {
#line 282 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__ATerm_249 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 282 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 282 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_270_270)) == (MR_mktag((MR_Integer) 1)));
#line 282 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 282 "prog_io_dcg.m"
              {
#line 282 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__BTerm_250 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_270_270, (MR_Integer) 0)));
#line 282 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_270_270, (MR_Integer) 1)));
#line 282 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_271_271 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 283 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 283 "prog_io_dcg.m"
                  {
#line 285 "prog_io_dcg.m"
                    {
#line 285 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ATerm_249, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeAGoal_257, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_272_272, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_273_273, parse_tree__prog_io_dcg__HeadVar__10_10, &parse_tree__prog_io_dcg__STATE_VARIABLE_Var_274_274);
                    }
#line 286 "prog_io_dcg.m"
                    {
#line 286 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__BTerm_250, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeBGoal_258, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_272_272, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_273_273, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_274_274, parse_tree__prog_io_dcg__HeadVar__11_11);
                    }
#line 288 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeAGoal_257)) == (MR_mktag((MR_Integer) 1)));
#line 288 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 288 "prog_io_dcg.m"
                      {
#line 288 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__AGoal_259 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeAGoal_257, (MR_Integer) 0)));
#line 289 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeBGoal_258)) == (MR_mktag((MR_Integer) 1)));
#line 289 "prog_io_dcg.m"
                        if (parse_tree__prog_io_dcg__succeeded)
#line 289 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__BGoal_260 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeBGoal_258, (MR_Integer) 0)));
#line 288 "prog_io_dcg.m"
                      }
#line 293 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 291 "prog_io_dcg.m"
                      {
#line 291 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__Goal_261;

#line 291 "prog_io_dcg.m"
                        {
#line 291 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__Goal_261 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 291 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_261, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 291 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_261, 1) = ((MR_Box) (parse_tree__prog_io_dcg__AGoal_259));
#line 291 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_261, 2) = ((MR_Box) (parse_tree__prog_io_dcg__BGoal_260));
#line 291 "prog_io_dcg.m"
                        }
#line 292 "prog_io_dcg.m"
                        {
#line 292 "prog_io_dcg.m"
                          MR_Word base;
#line 292 "prog_io_dcg.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 292 "prog_io_dcg.m"
                          *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 292 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_261));
#line 292 "prog_io_dcg.m"
                        }
#line 291 "prog_io_dcg.m"
                      }
#line 293 "prog_io_dcg.m"
                    else
#line 294 "prog_io_dcg.m"
                      {
#line 294 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_526_526 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
#line 294 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__ASpecs_262;
#line 294 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__BSpecs_263;
#line 294 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__V_278_278;

#line 294 "prog_io_dcg.m"
                        {
#line 294 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__ASpecs_262 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_526_526, parse_tree__prog_io_dcg__MaybeAGoal_257);
                        }
#line 295 "prog_io_dcg.m"
                        {
#line 295 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__BSpecs_263 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_526_526, parse_tree__prog_io_dcg__MaybeBGoal_258);
                        }
#line 296 "prog_io_dcg.m"
                        {
#line 296 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_278_278 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__ASpecs_262, parse_tree__prog_io_dcg__BSpecs_263);
                        }
#line 296 "prog_io_dcg.m"
                        {
#line 296 "prog_io_dcg.m"
                          MR_Word base;
#line 296 "prog_io_dcg.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 296 "prog_io_dcg.m"
                          *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 296 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_278_278));
#line 296 "prog_io_dcg.m"
                        }
#line 294 "prog_io_dcg.m"
                      }
#line 293 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 283 "prog_io_dcg.m"
                  }
#line 282 "prog_io_dcg.m"
              }
#line 282 "prog_io_dcg.m"
          }
#line 283 "prog_io_dcg.m"
      }
#line 180 "prog_io_dcg.m"
    else
#line 180 "prog_io_dcg.m"
    if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) ";") == 0))
#line 314 "prog_io_dcg.m"
      {
#line 314 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__ATerm_309;
#line 314 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__BTerm_310;
#line 314 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_337_337;
#line 314 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_338_338;
#line 319 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__CondTerm_318;
#line 319 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__ThenTerm_319;
#line 316 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_339_339;
#line 316 "prog_io_dcg.m"
        MR_String parse_tree__prog_io_dcg__V_340_340;
#line 316 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_341_341;
#line 316 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_342_342;
#line 316 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_343_343;
#line 316 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg___Context_320;

#line 313 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 313 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 313 "prog_io_dcg.m"
          {
#line 313 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__ATerm_309 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 313 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_337_337 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 313 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_337_337)) == (MR_mktag((MR_Integer) 1)));
#line 313 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 313 "prog_io_dcg.m"
              {
#line 313 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__BTerm_310 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_337_337, (MR_Integer) 0)));
#line 313 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_337_337, (MR_Integer) 1)));
#line 313 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_338_338 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 314 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 314 "prog_io_dcg.m"
                  {
#line 316 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__ATerm_309)) == (MR_mktag((MR_Integer) 0)));
#line 316 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 316 "prog_io_dcg.m"
                      {
#line 316 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_339_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ATerm_309, (MR_Integer) 0)));
#line 316 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ATerm_309, (MR_Integer) 1)));
#line 316 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg___Context_320 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ATerm_309, (MR_Integer) 2)));
#line 316 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_339_339)) == (MR_mktag((MR_Integer) 0)));
#line 316 "prog_io_dcg.m"
                        if (parse_tree__prog_io_dcg__succeeded)
#line 316 "prog_io_dcg.m"
                          {
#line 316 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__V_340_340 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_339_339, (MR_Integer) 0)));
#line 316 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_340_340, (MR_String) "->") == 0);
#line 316 "prog_io_dcg.m"
                            if (parse_tree__prog_io_dcg__succeeded)
#line 316 "prog_io_dcg.m"
                              {
#line 316 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_341_341)) == (MR_mktag((MR_Integer) 1)));
#line 316 "prog_io_dcg.m"
                                if (parse_tree__prog_io_dcg__succeeded)
#line 316 "prog_io_dcg.m"
                                  {
#line 316 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__CondTerm_318 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_341_341, (MR_Integer) 0)));
#line 316 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_341_341, (MR_Integer) 1)));
#line 316 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_342_342)) == (MR_mktag((MR_Integer) 1)));
#line 316 "prog_io_dcg.m"
                                    if (parse_tree__prog_io_dcg__succeeded)
#line 316 "prog_io_dcg.m"
                                      {
#line 316 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__ThenTerm_319 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_342_342, (MR_Integer) 0)));
#line 316 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_342_342, (MR_Integer) 1)));
#line 316 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_343_343 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 316 "prog_io_dcg.m"
                                      }
#line 316 "prog_io_dcg.m"
                                  }
#line 316 "prog_io_dcg.m"
                              }
#line 316 "prog_io_dcg.m"
                          }
#line 316 "prog_io_dcg.m"
                      }
#line 319 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 317 "prog_io_dcg.m"
                      {
#line 317 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__parse_dcg_if_then_else_12_p_0(parse_tree__prog_io_dcg__CondTerm_318, parse_tree__prog_io_dcg__ThenTerm_319, parse_tree__prog_io_dcg__BTerm_310, parse_tree__prog_io_dcg__Context_3, parse_tree__prog_io_dcg__HeadVar__4_4, parse_tree__prog_io_dcg__MaybeGoal_5, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                      }
#line 319 "prog_io_dcg.m"
                    else
#line 321 "prog_io_dcg.m"
                      {
#line 321 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__MaybeAGoal0_321;
#line 321 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__VarA_322;
#line 321 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__MaybeBGoal0_323;
#line 321 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__VarB_324;
#line 321 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_346_346;
#line 321 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_347_347;
#line 351 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__AGoal0_325;
#line 351 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__BGoal0_326;

#line 320 "prog_io_dcg.m"
                        {
#line 320 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ATerm_309, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeAGoal0_321, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_346_346, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_347_347, parse_tree__prog_io_dcg__HeadVar__10_10, &parse_tree__prog_io_dcg__VarA_322);
                        }
#line 322 "prog_io_dcg.m"
                        {
#line 322 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__BTerm_310, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeBGoal0_323, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_346_346, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_347_347, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, &parse_tree__prog_io_dcg__VarB_324);
                        }
#line 325 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeAGoal0_321)) == (MR_mktag((MR_Integer) 1)));
#line 325 "prog_io_dcg.m"
                        if (parse_tree__prog_io_dcg__succeeded)
#line 325 "prog_io_dcg.m"
                          {
#line 325 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__AGoal0_325 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeAGoal0_321, (MR_Integer) 0)));
#line 326 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeBGoal0_323)) == (MR_mktag((MR_Integer) 1)));
#line 326 "prog_io_dcg.m"
                            if (parse_tree__prog_io_dcg__succeeded)
#line 326 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__BGoal0_326 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeBGoal0_323, (MR_Integer) 0)));
#line 325 "prog_io_dcg.m"
                          }
#line 351 "prog_io_dcg.m"
                        if (parse_tree__prog_io_dcg__succeeded)
#line 349 "prog_io_dcg.m"
                          {
#line 349 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__Goal_327;
#line 328 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__TypeInfo_567_567;

#line 328 "prog_io_dcg.m"
                            {
#line 328 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__VarA_322)), ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10)));
                            }
#line 328 "prog_io_dcg.m"
                            if (parse_tree__prog_io_dcg__succeeded)
#line 328 "prog_io_dcg.m"
                              {
#line 3056 "parse_tree.prog_io_dcg.c"
                                parse_tree__prog_io_dcg__TypeInfo_567_567 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 328 "prog_io_dcg.m"
                                {
#line 328 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_dcg__TypeInfo_567_567, ((MR_Box) (parse_tree__prog_io_dcg__VarB_324)), ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10)));
                                }
#line 328 "prog_io_dcg.m"
                              }
#line 331 "prog_io_dcg.m"
                            if (parse_tree__prog_io_dcg__succeeded)
#line 329 "prog_io_dcg.m"
                              {
#line 329 "prog_io_dcg.m"
                                *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__HeadVar__10_10;
#line 330 "prog_io_dcg.m"
                                {
#line 330 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__Goal_327 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 330 "prog_io_dcg.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_327, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 330 "prog_io_dcg.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_327, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 330 "prog_io_dcg.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_327, 2) = ((MR_Box) (parse_tree__prog_io_dcg__AGoal0_325));
#line 330 "prog_io_dcg.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_327, 3) = ((MR_Box) (parse_tree__prog_io_dcg__BGoal0_326));
#line 330 "prog_io_dcg.m"
                                }
#line 329 "prog_io_dcg.m"
                              }
#line 331 "prog_io_dcg.m"
                            else
#line 338 "prog_io_dcg.m"
                              {
#line 331 "prog_io_dcg.m"
                                {
#line 331 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__VarA_322)), ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10)));
                                }
#line 338 "prog_io_dcg.m"
                                if (parse_tree__prog_io_dcg__succeeded)
#line 332 "prog_io_dcg.m"
                                  {
#line 332 "prog_io_dcg.m"
                                    MR_Word parse_tree__prog_io_dcg__Unify_328;
#line 332 "prog_io_dcg.m"
                                    MR_Word parse_tree__prog_io_dcg__AGoal_329;
#line 332 "prog_io_dcg.m"
                                    MR_Word parse_tree__prog_io_dcg__V_350_350;
#line 332 "prog_io_dcg.m"
                                    MR_Word parse_tree__prog_io_dcg__V_351_351;

#line 332 "prog_io_dcg.m"
                                    *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__VarB_324;
#line 334 "prog_io_dcg.m"
                                    {
#line 334 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__V_350_350 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_350_350, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__HeadVar__11_11));
#line 334 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_350_350, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 334 "prog_io_dcg.m"
                                    }
#line 334 "prog_io_dcg.m"
                                    {
#line 334 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__V_351_351 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_351_351, 0) = ((MR_Box) (parse_tree__prog_io_dcg__VarA_322));
#line 334 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_351_351, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 334 "prog_io_dcg.m"
                                    }
#line 333 "prog_io_dcg.m"
                                    {
#line 333 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__Unify_328 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 333 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_328, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 333 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_328, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 333 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_328, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_350_350));
#line 333 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_328, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_351_351));
#line 333 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_328, 4) = ((MR_Box) ((MR_Integer) 0));
#line 333 "prog_io_dcg.m"
                                    }
#line 336 "prog_io_dcg.m"
                                    {
#line 336 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(parse_tree__prog_io_dcg__AGoal0_325, parse_tree__prog_io_dcg__Unify_328, parse_tree__prog_io_dcg__Context_3, &parse_tree__prog_io_dcg__AGoal_329);
                                    }
#line 337 "prog_io_dcg.m"
                                    {
#line 337 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__Goal_327 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 337 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_327, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 337 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_327, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 337 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_327, 2) = ((MR_Box) (parse_tree__prog_io_dcg__AGoal_329));
#line 337 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_327, 3) = ((MR_Box) (parse_tree__prog_io_dcg__BGoal0_326));
#line 337 "prog_io_dcg.m"
                                    }
#line 332 "prog_io_dcg.m"
                                  }
#line 338 "prog_io_dcg.m"
                                else
#line 345 "prog_io_dcg.m"
                                  {
#line 338 "prog_io_dcg.m"
                                    {
#line 338 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__VarB_324)), ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10)));
                                    }
#line 345 "prog_io_dcg.m"
                                    if (parse_tree__prog_io_dcg__succeeded)
#line 339 "prog_io_dcg.m"
                                      {
#line 339 "prog_io_dcg.m"
                                        MR_Word parse_tree__prog_io_dcg__BGoal_330;
#line 339 "prog_io_dcg.m"
                                        MR_Word parse_tree__prog_io_dcg__V_353_353;
#line 339 "prog_io_dcg.m"
                                        MR_Word parse_tree__prog_io_dcg__V_354_354;
#line 339 "prog_io_dcg.m"
                                        MR_Word parse_tree__prog_io_dcg__Unify_357;

#line 339 "prog_io_dcg.m"
                                        *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__VarA_322;
#line 341 "prog_io_dcg.m"
                                        {
#line 341 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__V_353_353 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_353_353, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__HeadVar__11_11));
#line 341 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_353_353, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 341 "prog_io_dcg.m"
                                        }
#line 341 "prog_io_dcg.m"
                                        {
#line 341 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__V_354_354 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_354_354, 0) = ((MR_Box) (parse_tree__prog_io_dcg__VarB_324));
#line 341 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_354_354, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 341 "prog_io_dcg.m"
                                        }
#line 340 "prog_io_dcg.m"
                                        {
#line 340 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__Unify_357 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 340 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_357, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 340 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_357, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 340 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_357, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_353_353));
#line 340 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_357, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_354_354));
#line 340 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_357, 4) = ((MR_Box) ((MR_Integer) 0));
#line 340 "prog_io_dcg.m"
                                        }
#line 343 "prog_io_dcg.m"
                                        {
#line 343 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(parse_tree__prog_io_dcg__BGoal0_326, parse_tree__prog_io_dcg__Unify_357, parse_tree__prog_io_dcg__Context_3, &parse_tree__prog_io_dcg__BGoal_330);
                                        }
#line 344 "prog_io_dcg.m"
                                        {
#line 344 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__Goal_327 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 344 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_327, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 344 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_327, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 344 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_327, 2) = ((MR_Box) (parse_tree__prog_io_dcg__AGoal0_325));
#line 344 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_327, 3) = ((MR_Box) (parse_tree__prog_io_dcg__BGoal_330));
#line 344 "prog_io_dcg.m"
                                        }
#line 339 "prog_io_dcg.m"
                                      }
#line 345 "prog_io_dcg.m"
                                    else
#line 346 "prog_io_dcg.m"
                                      {
#line 346 "prog_io_dcg.m"
                                        MR_Word parse_tree__prog_io_dcg__AGoal_358;

#line 346 "prog_io_dcg.m"
                                        *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__VarB_324;
#line 347 "prog_io_dcg.m"
                                        {
#line 347 "prog_io_dcg.m"
                                          parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_io_dcg__VarA_322, parse_tree__prog_io_dcg__VarB_324, parse_tree__prog_io_dcg__AGoal0_325, &parse_tree__prog_io_dcg__AGoal_358);
                                        }
#line 348 "prog_io_dcg.m"
                                        {
#line 348 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__Goal_327 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 348 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_327, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 348 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_327, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 348 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_327, 2) = ((MR_Box) (parse_tree__prog_io_dcg__AGoal_358));
#line 348 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_327, 3) = ((MR_Box) (parse_tree__prog_io_dcg__BGoal0_326));
#line 348 "prog_io_dcg.m"
                                        }
#line 346 "prog_io_dcg.m"
                                      }
#line 345 "prog_io_dcg.m"
                                  }
#line 338 "prog_io_dcg.m"
                              }
#line 350 "prog_io_dcg.m"
                            {
#line 350 "prog_io_dcg.m"
                              MR_Word base;
#line 350 "prog_io_dcg.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 350 "prog_io_dcg.m"
                              *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 350 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_327));
#line 350 "prog_io_dcg.m"
                            }
#line 349 "prog_io_dcg.m"
                          }
#line 351 "prog_io_dcg.m"
                        else
#line 352 "prog_io_dcg.m"
                          {
#line 352 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_530_530;
#line 352 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__ASpecs_331;
#line 352 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__BSpecs_332;
#line 352 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__V_356_356;

#line 352 "prog_io_dcg.m"
                            *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__VarA_322;
#line 3312 "parse_tree.prog_io_dcg.c"
                            parse_tree__prog_io_dcg__TypeCtorInfo_530_530 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
#line 353 "prog_io_dcg.m"
                            {
#line 353 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__ASpecs_331 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_530_530, parse_tree__prog_io_dcg__MaybeAGoal0_321);
                            }
#line 354 "prog_io_dcg.m"
                            {
#line 354 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__BSpecs_332 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_530_530, parse_tree__prog_io_dcg__MaybeBGoal0_323);
                            }
#line 355 "prog_io_dcg.m"
                            {
#line 355 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__V_356_356 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__ASpecs_331, parse_tree__prog_io_dcg__BSpecs_332);
                            }
#line 355 "prog_io_dcg.m"
                            {
#line 355 "prog_io_dcg.m"
                              MR_Word base;
#line 355 "prog_io_dcg.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 355 "prog_io_dcg.m"
                              *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 355 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_356_356));
#line 355 "prog_io_dcg.m"
                            }
#line 352 "prog_io_dcg.m"
                          }
#line 321 "prog_io_dcg.m"
                      }
#line 319 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 314 "prog_io_dcg.m"
                  }
#line 313 "prog_io_dcg.m"
              }
#line 313 "prog_io_dcg.m"
          }
#line 314 "prog_io_dcg.m"
      }
#line 180 "prog_io_dcg.m"
    else
#line 180 "prog_io_dcg.m"
    if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "=") == 0))
#line 246 "prog_io_dcg.m"
      {
#line 246 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_519_519;
#line 246 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_520_520;
#line 246 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__A0_176;
#line 246 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__A_183;
#line 246 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Goal_184;
#line 246 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_189_189;
#line 246 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_190_190;
#line 246 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_191_191;

#line 245 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 245 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 245 "prog_io_dcg.m"
          {
#line 245 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__A0_176 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 245 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 245 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_189_189 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 246 "prog_io_dcg.m"
              {
#line 246 "prog_io_dcg.m"
                *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__HeadVar__10_10;
#line 3396 "parse_tree.prog_io_dcg.c"
                parse_tree__prog_io_dcg__TypeCtorInfo_519_519 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 3398 "parse_tree.prog_io_dcg.c"
                parse_tree__prog_io_dcg__TypeCtorInfo_520_520 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 248 "prog_io_dcg.m"
                {
#line 248 "prog_io_dcg.m"
                  mercury__term__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_519_519, parse_tree__prog_io_dcg__TypeCtorInfo_520_520, parse_tree__prog_io_dcg__A0_176, &parse_tree__prog_io_dcg__A_183);
                }
#line 249 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_191_191 = (MR_Integer) 0;
#line 245 "prog_io_dcg.m"
                *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8;
#line 245 "prog_io_dcg.m"
                *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6;
#line 249 "prog_io_dcg.m"
                {
#line 249 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_190_190, 0) = ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10));
#line 249 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_190_190, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 249 "prog_io_dcg.m"
                }
#line 249 "prog_io_dcg.m"
                {
#line 249 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__Goal_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 249 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_184, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 249 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_184, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 249 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_184, 2) = ((MR_Box) (parse_tree__prog_io_dcg__A_183));
#line 249 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_184, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_190_190));
#line 249 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_184, 4) = ((MR_Box) (parse_tree__prog_io_dcg__V_191_191));
#line 249 "prog_io_dcg.m"
                }
#line 250 "prog_io_dcg.m"
                {
#line 250 "prog_io_dcg.m"
                  MR_Word base;
#line 250 "prog_io_dcg.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 250 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 250 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_184));
#line 250 "prog_io_dcg.m"
                }
#line 250 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 246 "prog_io_dcg.m"
              }
#line 245 "prog_io_dcg.m"
          }
#line 246 "prog_io_dcg.m"
      }
#line 180 "prog_io_dcg.m"
    else
#line 180 "prog_io_dcg.m"
    if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) ":=") == 0))
#line 252 "prog_io_dcg.m"
      {
#line 252 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_521_521;
#line 252 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_522_522;
#line 252 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__A0_192;
#line 252 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__A_200;
#line 252 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Goal_201;
#line 252 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_206_206;
#line 252 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_209_209;
#line 252 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_210_210;

#line 251 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 251 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 251 "prog_io_dcg.m"
          {
#line 251 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__A0_192 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 251 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 251 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_206_206 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 252 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 252 "prog_io_dcg.m"
              {
#line 254 "prog_io_dcg.m"
                {
#line 254 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__new_dcg_var_5_p_0(parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__11_11);
                }
#line 3501 "parse_tree.prog_io_dcg.c"
                parse_tree__prog_io_dcg__TypeCtorInfo_521_521 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 3503 "parse_tree.prog_io_dcg.c"
                parse_tree__prog_io_dcg__TypeCtorInfo_522_522 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 255 "prog_io_dcg.m"
                {
#line 255 "prog_io_dcg.m"
                  mercury__term__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_521_521, parse_tree__prog_io_dcg__TypeCtorInfo_522_522, parse_tree__prog_io_dcg__A0_192, &parse_tree__prog_io_dcg__A_200);
                }
#line 256 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_210_210 = (MR_Integer) 0;
#line 256 "prog_io_dcg.m"
                {
#line 256 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_209_209, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__HeadVar__11_11));
#line 256 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_209_209, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 256 "prog_io_dcg.m"
                }
#line 256 "prog_io_dcg.m"
                {
#line 256 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__Goal_201 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 256 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_201, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 256 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_201, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 256 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_201, 2) = ((MR_Box) (parse_tree__prog_io_dcg__A_200));
#line 256 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_201, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_209_209));
#line 256 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_201, 4) = ((MR_Box) (parse_tree__prog_io_dcg__V_210_210));
#line 256 "prog_io_dcg.m"
                }
#line 257 "prog_io_dcg.m"
                {
#line 257 "prog_io_dcg.m"
                  MR_Word base;
#line 257 "prog_io_dcg.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 257 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 257 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_201));
#line 257 "prog_io_dcg.m"
                }
#line 257 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 252 "prog_io_dcg.m"
              }
#line 251 "prog_io_dcg.m"
          }
#line 252 "prog_io_dcg.m"
      }
#line 180 "prog_io_dcg.m"
    else
#line 180 "prog_io_dcg.m"
    if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "[]") == 0))
#line 228 "prog_io_dcg.m"
      {
#line 228 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Goal_137;
#line 228 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_144_144;
#line 228 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_145_145;
#line 228 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_146_146;

#line 227 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 228 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 228 "prog_io_dcg.m"
          {
#line 230 "prog_io_dcg.m"
            {
#line 230 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__new_dcg_var_5_p_0(parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__11_11);
            }
#line 233 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_146_146 = (MR_Integer) 0;
#line 232 "prog_io_dcg.m"
            {
#line 232 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_144_144, 0) = ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10));
#line 232 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_144_144, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 232 "prog_io_dcg.m"
            }
#line 232 "prog_io_dcg.m"
            {
#line 232 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_145_145, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__HeadVar__11_11));
#line 232 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_145_145, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 232 "prog_io_dcg.m"
            }
#line 231 "prog_io_dcg.m"
            {
#line 231 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__Goal_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 231 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 231 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_137, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 231 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_137, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_144_144));
#line 231 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_137, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_145_145));
#line 231 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_137, 4) = ((MR_Box) (parse_tree__prog_io_dcg__V_146_146));
#line 231 "prog_io_dcg.m"
            }
#line 234 "prog_io_dcg.m"
            {
#line 234 "prog_io_dcg.m"
              MR_Word base;
#line 234 "prog_io_dcg.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 234 "prog_io_dcg.m"
              *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 234 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_137));
#line 234 "prog_io_dcg.m"
            }
#line 234 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 228 "prog_io_dcg.m"
          }
#line 228 "prog_io_dcg.m"
      }
#line 180 "prog_io_dcg.m"
    else
#line 180 "prog_io_dcg.m"
    if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "\\+") == 0))
#line 379 "prog_io_dcg.m"
      {
#line 379 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__ATerm_413;
#line 379 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__MaybeAGoal_420;
#line 379 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_429_429;
#line 381 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_421_421;

#line 378 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 378 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 378 "prog_io_dcg.m"
          {
#line 378 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__ATerm_413 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 378 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_429_429 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 378 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_429_429 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 379 "prog_io_dcg.m"
              {
#line 379 "prog_io_dcg.m"
                *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__HeadVar__10_10;
#line 381 "prog_io_dcg.m"
                {
#line 381 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ATerm_413, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeAGoal_420, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, &parse_tree__prog_io_dcg__V_421_421);
                }
#line 387 "prog_io_dcg.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeAGoal_420)) == (MR_mktag((MR_Integer) 0))))
#line 389 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__MaybeGoal_5 = parse_tree__prog_io_dcg__MaybeAGoal_420;
#line 387 "prog_io_dcg.m"
                else
#line 384 "prog_io_dcg.m"
                  {
#line 384 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__AGoal_422 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeAGoal_420, (MR_Integer) 0)));
#line 384 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__Goal_423;

#line 385 "prog_io_dcg.m"
                    {
#line 385 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__Goal_423 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 385 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_423, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 385 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_423, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 385 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_423, 2) = ((MR_Box) (parse_tree__prog_io_dcg__AGoal_422));
#line 385 "prog_io_dcg.m"
                    }
#line 386 "prog_io_dcg.m"
                    {
#line 386 "prog_io_dcg.m"
                      MR_Word base;
#line 386 "prog_io_dcg.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 386 "prog_io_dcg.m"
                      *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 386 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_423));
#line 386 "prog_io_dcg.m"
                    }
#line 384 "prog_io_dcg.m"
                  }
#line 387 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 379 "prog_io_dcg.m"
              }
#line 378 "prog_io_dcg.m"
          }
#line 379 "prog_io_dcg.m"
      }
#line 180 "prog_io_dcg.m"
    else
#line 180 "prog_io_dcg.m"
    if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "if") == 0))
#line 259 "prog_io_dcg.m"
      {
#line 259 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__CondTerm_219;
#line 259 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__ThenTerm_220;
#line 259 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__MaybeVarsCond_222;
#line 259 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__MaybeThen_223;
#line 259 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_236_236;
#line 259 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_237_237;
#line 259 "prog_io_dcg.m"
        MR_String parse_tree__prog_io_dcg__V_238_238;
#line 259 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_239_239;
#line 259 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_240_240;
#line 259 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_241_241;
#line 259 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_242_242;
#line 260 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_221_221;
#line 277 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Vars_224;
#line 277 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__StateVars_225;
#line 277 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Cond_226;
#line 277 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Then_227;

#line 260 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 260 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 260 "prog_io_dcg.m"
          {
#line 260 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 260 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 260 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_242_242 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 259 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 259 "prog_io_dcg.m"
              {
#line 260 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_236_236)) == (MR_mktag((MR_Integer) 0)));
#line 260 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 260 "prog_io_dcg.m"
                  {
#line 260 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_236_236, (MR_Integer) 0)));
#line 260 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_236_236, (MR_Integer) 1)));
#line 260 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_236_236, (MR_Integer) 2)));
#line 260 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_237_237)) == (MR_mktag((MR_Integer) 0)));
#line 260 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 260 "prog_io_dcg.m"
                      {
#line 260 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_238_238 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_237_237, (MR_Integer) 0)));
#line 260 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_238_238, (MR_String) "then") == 0);
#line 259 "prog_io_dcg.m"
                        if (parse_tree__prog_io_dcg__succeeded)
#line 259 "prog_io_dcg.m"
                          {
#line 260 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_239_239)) == (MR_mktag((MR_Integer) 1)));
#line 260 "prog_io_dcg.m"
                            if (parse_tree__prog_io_dcg__succeeded)
#line 260 "prog_io_dcg.m"
                              {
#line 260 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__CondTerm_219 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_239_239, (MR_Integer) 0)));
#line 260 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_239_239, (MR_Integer) 1)));
#line 260 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_240_240)) == (MR_mktag((MR_Integer) 1)));
#line 260 "prog_io_dcg.m"
                                if (parse_tree__prog_io_dcg__succeeded)
#line 260 "prog_io_dcg.m"
                                  {
#line 260 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__ThenTerm_220 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_240_240, (MR_Integer) 0)));
#line 260 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_240_240, (MR_Integer) 1)));
#line 260 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_241_241 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 259 "prog_io_dcg.m"
                                    if (parse_tree__prog_io_dcg__succeeded)
#line 259 "prog_io_dcg.m"
                                      {
#line 262 "prog_io_dcg.m"
                                        {
#line 262 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__parse_dcg_if_then_12_p_0(parse_tree__prog_io_dcg__CondTerm_219, parse_tree__prog_io_dcg__ThenTerm_220, parse_tree__prog_io_dcg__Context_3, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeVarsCond_222, &parse_tree__prog_io_dcg__MaybeThen_223, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                                        }
#line 265 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeVarsCond_222)) == (MR_mktag((MR_Integer) 1)));
#line 265 "prog_io_dcg.m"
                                        if (parse_tree__prog_io_dcg__succeeded)
#line 265 "prog_io_dcg.m"
                                          {
#line 265 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__Vars_224 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_222, (MR_Integer) 0)));
#line 265 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__StateVars_225 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_222, (MR_Integer) 1)));
#line 265 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__Cond_226 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_222, (MR_Integer) 2)));
#line 266 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeThen_223)) == (MR_mktag((MR_Integer) 1)));
#line 266 "prog_io_dcg.m"
                                            if (parse_tree__prog_io_dcg__succeeded)
#line 266 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__Then_227 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeThen_223, (MR_Integer) 0)));
#line 265 "prog_io_dcg.m"
                                          }
#line 277 "prog_io_dcg.m"
                                        if (parse_tree__prog_io_dcg__succeeded)
#line 274 "prog_io_dcg.m"
                                          {
#line 274 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__Else_228;
#line 274 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__Goal_229;

#line 268 "prog_io_dcg.m"
                                            {
#line 268 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (*parse_tree__prog_io_dcg__HeadVar__11_11)), ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10)));
                                            }
#line 270 "prog_io_dcg.m"
                                            if (parse_tree__prog_io_dcg__succeeded)
#line 269 "prog_io_dcg.m"
                                              {
#line 269 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__Else_228 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 269 "prog_io_dcg.m"
                                                MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Else_228, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 269 "prog_io_dcg.m"
                                              }
#line 270 "prog_io_dcg.m"
                                            else
#line 271 "prog_io_dcg.m"
                                              {
#line 271 "prog_io_dcg.m"
                                                MR_Word parse_tree__prog_io_dcg__V_245_245;
#line 271 "prog_io_dcg.m"
                                                MR_Word parse_tree__prog_io_dcg__V_246_246;

#line 272 "prog_io_dcg.m"
                                                {
#line 272 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__V_245_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "prog_io_dcg.m"
                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_245_245, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__HeadVar__11_11));
#line 272 "prog_io_dcg.m"
                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_245_245, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 272 "prog_io_dcg.m"
                                                }
#line 272 "prog_io_dcg.m"
                                                {
#line 272 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__V_246_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "prog_io_dcg.m"
                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_246_246, 0) = ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10));
#line 272 "prog_io_dcg.m"
                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_246_246, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 272 "prog_io_dcg.m"
                                                }
#line 271 "prog_io_dcg.m"
                                                {
#line 271 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__Else_228 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 271 "prog_io_dcg.m"
                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Else_228, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 271 "prog_io_dcg.m"
                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Else_228, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 271 "prog_io_dcg.m"
                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Else_228, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_245_245));
#line 271 "prog_io_dcg.m"
                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Else_228, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_246_246));
#line 271 "prog_io_dcg.m"
                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Else_228, 4) = ((MR_Box) ((MR_Integer) 0));
#line 271 "prog_io_dcg.m"
                                                }
#line 271 "prog_io_dcg.m"
                                              }
#line 275 "prog_io_dcg.m"
                                            {
#line 275 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__Goal_229 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 275 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_229, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 275 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_229, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 275 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_229, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_224));
#line 275 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_229, 3) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_225));
#line 275 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_229, 4) = ((MR_Box) (parse_tree__prog_io_dcg__Cond_226));
#line 275 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_229, 5) = ((MR_Box) (parse_tree__prog_io_dcg__Then_227));
#line 275 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_229, 6) = ((MR_Box) (parse_tree__prog_io_dcg__Else_228));
#line 275 "prog_io_dcg.m"
                                            }
#line 276 "prog_io_dcg.m"
                                            {
#line 276 "prog_io_dcg.m"
                                              MR_Word base;
#line 276 "prog_io_dcg.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 276 "prog_io_dcg.m"
                                              *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 276 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_229));
#line 276 "prog_io_dcg.m"
                                            }
#line 274 "prog_io_dcg.m"
                                          }
#line 277 "prog_io_dcg.m"
                                        else
#line 278 "prog_io_dcg.m"
                                          {
#line 278 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__TypeInfo_523_523 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3];
#line 278 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_524_524 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
#line 278 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__CondSpecs_230;
#line 278 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__ThenSpecs_231;
#line 278 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__V_248_248;

#line 278 "prog_io_dcg.m"
                                            {
#line 278 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__CondSpecs_230 = parse_tree__prog_io_util__get_any_errors3_1_f_0(parse_tree__prog_io_dcg__TypeInfo_523_523, parse_tree__prog_io_dcg__TypeInfo_523_523, parse_tree__prog_io_dcg__TypeCtorInfo_524_524, parse_tree__prog_io_dcg__MaybeVarsCond_222);
                                            }
#line 279 "prog_io_dcg.m"
                                            {
#line 279 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__ThenSpecs_231 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_524_524, parse_tree__prog_io_dcg__MaybeThen_223);
                                            }
#line 280 "prog_io_dcg.m"
                                            {
#line 280 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__V_248_248 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__CondSpecs_230, parse_tree__prog_io_dcg__ThenSpecs_231);
                                            }
#line 280 "prog_io_dcg.m"
                                            {
#line 280 "prog_io_dcg.m"
                                              MR_Word base;
#line 280 "prog_io_dcg.m"
                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 280 "prog_io_dcg.m"
                                              *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 280 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_248_248));
#line 280 "prog_io_dcg.m"
                                            }
#line 278 "prog_io_dcg.m"
                                          }
#line 277 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 259 "prog_io_dcg.m"
                                      }
#line 260 "prog_io_dcg.m"
                                  }
#line 260 "prog_io_dcg.m"
                              }
#line 259 "prog_io_dcg.m"
                          }
#line 260 "prog_io_dcg.m"
                      }
#line 260 "prog_io_dcg.m"
                  }
#line 259 "prog_io_dcg.m"
              }
#line 260 "prog_io_dcg.m"
          }
#line 259 "prog_io_dcg.m"
      }
#line 180 "prog_io_dcg.m"
    else
#line 180 "prog_io_dcg.m"
    if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "{}") == 0))
#line 180 "prog_io_dcg.m"
      {
#line 180 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_516_516;
#line 180 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__G0_12;
#line 180 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Gs_13;
#line 180 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__G_20;

#line 179 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 179 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 179 "prog_io_dcg.m"
          {
#line 179 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__G0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 179 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Gs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 4051 "parse_tree.prog_io_dcg.c"
            parse_tree__prog_io_dcg__TypeCtorInfo_516_516 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 184 "prog_io_dcg.m"
            {
#line 184 "prog_io_dcg.m"
              parse_tree__prog_io_util__list_to_conjunction_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_516_516, parse_tree__prog_io_dcg__Context_3, parse_tree__prog_io_dcg__G0_12, parse_tree__prog_io_dcg__Gs_13, &parse_tree__prog_io_dcg__G_20);
            }
#line 185 "prog_io_dcg.m"
            {
#line 185 "prog_io_dcg.m"
              parse_tree__prog_io_goal__parse_goal_5_p_0(parse_tree__prog_io_dcg__G_20, parse_tree__prog_io_dcg__HeadVar__4_4, parse_tree__prog_io_dcg__MaybeGoal_5, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7);
            }
#line 180 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__HeadVar__10_10;
#line 180 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8;
#line 180 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 179 "prog_io_dcg.m"
          }
#line 180 "prog_io_dcg.m"
      }
#line 180 "prog_io_dcg.m"
    else
#line 180 "prog_io_dcg.m"
    if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "[|]") == 0))
#line 236 "prog_io_dcg.m"
      {
#line 236 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_517_517;
#line 236 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_518_518;
#line 236 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__ConsTerm0_156;
#line 236 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__ConsTerm_157;
#line 236 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Term_158;
#line 236 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Goal_159;
#line 236 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_164_164;
#line 236 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_165_165;
#line 236 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_168_168;
#line 236 "prog_io_dcg.m"
        MR_String parse_tree__prog_io_dcg__V_169_169;
#line 236 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_173_173;
#line 236 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_174_174;
#line 236 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_175_175;
#line 235 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__X_147;
#line 235 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Xs_148;

#line 235 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 235 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 235 "prog_io_dcg.m"
          {
#line 235 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__X_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 235 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 235 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_164_164)) == (MR_mktag((MR_Integer) 1)));
#line 235 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 235 "prog_io_dcg.m"
              {
#line 235 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__Xs_148 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_164_164, (MR_Integer) 0)));
#line 235 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_164_164, (MR_Integer) 1)));
#line 235 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_165_165 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 236 "prog_io_dcg.m"
                  {
#line 239 "prog_io_dcg.m"
                    {
#line 239 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__new_dcg_var_5_p_0(parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__11_11);
                    }
#line 240 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_169_169 = (MR_String) "[|]";
#line 4143 "parse_tree.prog_io_dcg.c"
                    parse_tree__prog_io_dcg__TypeCtorInfo_517_517 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 4145 "parse_tree.prog_io_dcg.c"
                    parse_tree__prog_io_dcg__TypeCtorInfo_518_518 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 240 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_168_168 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_4[1];
#line 240 "prog_io_dcg.m"
                    {
#line 240 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__ConsTerm0_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 240 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ConsTerm0_156, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_168_168));
#line 240 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ConsTerm0_156, 1) = ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__2_2));
#line 240 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ConsTerm0_156, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 240 "prog_io_dcg.m"
                    }
#line 241 "prog_io_dcg.m"
                    {
#line 241 "prog_io_dcg.m"
                      mercury__term__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_517_517, parse_tree__prog_io_dcg__TypeCtorInfo_518_518, parse_tree__prog_io_dcg__ConsTerm0_156, &parse_tree__prog_io_dcg__ConsTerm_157);
                    }
#line 242 "prog_io_dcg.m"
                    {
#line 242 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_173_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_173_173, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__HeadVar__11_11));
#line 242 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_173_173, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 242 "prog_io_dcg.m"
                    }
#line 242 "prog_io_dcg.m"
                    {
#line 242 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = parse_tree__prog_io_dcg__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_dcg__ConsTerm_157, parse_tree__prog_io_dcg__V_173_173, &parse_tree__prog_io_dcg__Term_158);
                    }
#line 236 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 236 "prog_io_dcg.m"
                      {
#line 243 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_175_175 = (MR_Integer) 0;
#line 243 "prog_io_dcg.m"
                        {
#line 243 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_174_174, 0) = ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10));
#line 243 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_174_174, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 243 "prog_io_dcg.m"
                        }
#line 243 "prog_io_dcg.m"
                        {
#line 243 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__Goal_159 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 243 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_159, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 243 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_159, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 243 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_159, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_174_174));
#line 243 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_159, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Term_158));
#line 243 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_159, 4) = ((MR_Box) (parse_tree__prog_io_dcg__V_175_175));
#line 243 "prog_io_dcg.m"
                        }
#line 244 "prog_io_dcg.m"
                        {
#line 244 "prog_io_dcg.m"
                          MR_Word base;
#line 244 "prog_io_dcg.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 244 "prog_io_dcg.m"
                          *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 244 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_159));
#line 244 "prog_io_dcg.m"
                        }
#line 244 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 236 "prog_io_dcg.m"
                      }
#line 236 "prog_io_dcg.m"
                  }
#line 235 "prog_io_dcg.m"
              }
#line 235 "prog_io_dcg.m"
          }
#line 236 "prog_io_dcg.m"
      }
#line 180 "prog_io_dcg.m"
    else
#line 180 "prog_io_dcg.m"
    if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "all") == 0))
#line 392 "prog_io_dcg.m"
      {
#line 392 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_532_532;
#line 392 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_533_533;
#line 392 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__QVarsTerm_432;
#line 392 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__SubTerm_433;
#line 392 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__GenericVarSet_440;
#line 392 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__MaybeStateVarsAndVars_441;
#line 392 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__MaybeSubGoal_442;
#line 392 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_465_465;
#line 392 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_466_466;
#line 425 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Vars0_443;
#line 425 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__StateVars0_444;
#line 425 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__SubGoal_445;

#line 391 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 391 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 391 "prog_io_dcg.m"
          {
#line 391 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__QVarsTerm_432 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 391 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_465_465 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 391 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_465_465)) == (MR_mktag((MR_Integer) 1)));
#line 391 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 391 "prog_io_dcg.m"
              {
#line 391 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__SubTerm_433 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_465_465, (MR_Integer) 0)));
#line 391 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_466_466 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_465_465, (MR_Integer) 1)));
#line 391 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_466_466 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 392 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 392 "prog_io_dcg.m"
                  {
#line 4294 "parse_tree.prog_io_dcg.c"
                    parse_tree__prog_io_dcg__TypeCtorInfo_532_532 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 4296 "parse_tree.prog_io_dcg.c"
                    parse_tree__prog_io_dcg__TypeCtorInfo_533_533 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 395 "prog_io_dcg.m"
                    {
#line 395 "prog_io_dcg.m"
                      mercury__varset__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_532_532, parse_tree__prog_io_dcg__TypeCtorInfo_533_533, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, &parse_tree__prog_io_dcg__GenericVarSet_440);
                    }
#line 396 "prog_io_dcg.m"
                    {
#line 396 "prog_io_dcg.m"
                      parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_533_533, parse_tree__prog_io_dcg__QVarsTerm_432, parse_tree__prog_io_dcg__GenericVarSet_440, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeStateVarsAndVars_441);
                    }
#line 398 "prog_io_dcg.m"
                    {
#line 398 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubTerm_433, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeSubGoal_442, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                    }
#line 401 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeStateVarsAndVars_441)) == (MR_mktag((MR_Integer) 1)));
#line 401 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 401 "prog_io_dcg.m"
                      {
#line 401 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Vars0_443 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeStateVarsAndVars_441, (MR_Integer) 0)));
#line 401 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__StateVars0_444 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeStateVarsAndVars_441, (MR_Integer) 1)));
#line 402 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoal_442)) == (MR_mktag((MR_Integer) 1)));
#line 402 "prog_io_dcg.m"
                        if (parse_tree__prog_io_dcg__succeeded)
#line 402 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__SubGoal_445 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoal_442, (MR_Integer) 0)));
#line 401 "prog_io_dcg.m"
                      }
#line 425 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 404 "prog_io_dcg.m"
                      {
#line 404 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__TypeInfo_538_538 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[4];
#line 404 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__TypeInfo_539_539 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 404 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__StateVars_446;
#line 404 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__Vars_447;
#line 404 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__Goal_448;

#line 404 "prog_io_dcg.m"
                        {
#line 404 "prog_io_dcg.m"
                          mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_538_538, parse_tree__prog_io_dcg__TypeInfo_539_539, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[2], parse_tree__prog_io_dcg__StateVars0_444, &parse_tree__prog_io_dcg__StateVars_446);
                        }
#line 405 "prog_io_dcg.m"
                        {
#line 405 "prog_io_dcg.m"
                          mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_538_538, parse_tree__prog_io_dcg__TypeInfo_539_539, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[3], parse_tree__prog_io_dcg__Vars0_443, &parse_tree__prog_io_dcg__Vars_447);
                        }
#line 410 "prog_io_dcg.m"
                        if ((parse_tree__prog_io_dcg__StateVars_446 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 410 "prog_io_dcg.m"
                          if ((parse_tree__prog_io_dcg__Vars_447 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 407 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__Goal_448 = parse_tree__prog_io_dcg__SubGoal_445;
#line 410 "prog_io_dcg.m"
                          else
#line 417 "prog_io_dcg.m"
                            {
#line 417 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__Goal_448 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 417 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_448, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 417 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_448, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 417 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_448, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_447));
#line 417 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_448, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_445));
#line 417 "prog_io_dcg.m"
                            }
#line 410 "prog_io_dcg.m"
                        else
#line 410 "prog_io_dcg.m"
                        if ((parse_tree__prog_io_dcg__Vars_447 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 413 "prog_io_dcg.m"
                          {
#line 413 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__Goal_448 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 413 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_448, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 413 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_448, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 413 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_448, 2) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_446));
#line 413 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_448, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_445));
#line 413 "prog_io_dcg.m"
                          }
#line 410 "prog_io_dcg.m"
                        else
#line 419 "prog_io_dcg.m"
                          {
#line 419 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__V_472_472;

#line 422 "prog_io_dcg.m"
                            {
#line 422 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__V_472_472 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 422 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_472_472, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 422 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_472_472, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 422 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_472_472, 2) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_446));
#line 422 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_472_472, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_445));
#line 422 "prog_io_dcg.m"
                            }
#line 421 "prog_io_dcg.m"
                            {
#line 421 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__Goal_448 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 421 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_448, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 421 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_448, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 421 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_448, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_447));
#line 421 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_448, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_472_472));
#line 421 "prog_io_dcg.m"
                            }
#line 419 "prog_io_dcg.m"
                          }
#line 424 "prog_io_dcg.m"
                        {
#line 424 "prog_io_dcg.m"
                          MR_Word base;
#line 424 "prog_io_dcg.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 424 "prog_io_dcg.m"
                          *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 424 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_448));
#line 424 "prog_io_dcg.m"
                        }
#line 404 "prog_io_dcg.m"
                      }
#line 425 "prog_io_dcg.m"
                    else
#line 426 "prog_io_dcg.m"
                      {
#line 426 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__TypeInfo_544_544 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[5];
#line 426 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__VarsSpecs_457;
#line 426 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__SubGoalSpecs_458;
#line 426 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__V_473_473;

#line 426 "prog_io_dcg.m"
                        {
#line 426 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__VarsSpecs_457 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_dcg__TypeInfo_544_544, parse_tree__prog_io_dcg__TypeInfo_544_544, parse_tree__prog_io_dcg__MaybeStateVarsAndVars_441);
                        }
#line 427 "prog_io_dcg.m"
                        {
#line 427 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__SubGoalSpecs_458 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, parse_tree__prog_io_dcg__MaybeSubGoal_442);
                        }
#line 428 "prog_io_dcg.m"
                        {
#line 428 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_473_473 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__VarsSpecs_457, parse_tree__prog_io_dcg__SubGoalSpecs_458);
                        }
#line 428 "prog_io_dcg.m"
                        {
#line 428 "prog_io_dcg.m"
                          MR_Word base;
#line 428 "prog_io_dcg.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 428 "prog_io_dcg.m"
                          *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 428 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_473_473));
#line 428 "prog_io_dcg.m"
                        }
#line 426 "prog_io_dcg.m"
                      }
#line 425 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 392 "prog_io_dcg.m"
                  }
#line 391 "prog_io_dcg.m"
              }
#line 391 "prog_io_dcg.m"
          }
#line 392 "prog_io_dcg.m"
      }
#line 180 "prog_io_dcg.m"
    else
#line 180 "prog_io_dcg.m"
    if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "not") == 0))
#line 366 "prog_io_dcg.m"
      {
#line 366 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__ATerm_394;
#line 366 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__MaybeAGoal_401;
#line 366 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_410_410;
#line 368 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_402_402;

#line 365 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 365 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 365 "prog_io_dcg.m"
          {
#line 365 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__ATerm_394 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 365 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_410_410 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 365 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_410_410 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 366 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 366 "prog_io_dcg.m"
              {
#line 366 "prog_io_dcg.m"
                *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__HeadVar__10_10;
#line 368 "prog_io_dcg.m"
                {
#line 368 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ATerm_394, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeAGoal_401, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, &parse_tree__prog_io_dcg__V_402_402);
                }
#line 374 "prog_io_dcg.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeAGoal_401)) == (MR_mktag((MR_Integer) 0))))
#line 376 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__MaybeGoal_5 = parse_tree__prog_io_dcg__MaybeAGoal_401;
#line 374 "prog_io_dcg.m"
                else
#line 371 "prog_io_dcg.m"
                  {
#line 371 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__AGoal_403 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeAGoal_401, (MR_Integer) 0)));
#line 371 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__Goal_404;

#line 372 "prog_io_dcg.m"
                    {
#line 372 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__Goal_404 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 372 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_404, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 372 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_404, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 372 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_404, 2) = ((MR_Box) (parse_tree__prog_io_dcg__AGoal_403));
#line 372 "prog_io_dcg.m"
                    }
#line 373 "prog_io_dcg.m"
                    {
#line 373 "prog_io_dcg.m"
                      MR_Word base;
#line 373 "prog_io_dcg.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 373 "prog_io_dcg.m"
                      *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 373 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_404));
#line 373 "prog_io_dcg.m"
                    }
#line 371 "prog_io_dcg.m"
                  }
#line 374 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 366 "prog_io_dcg.m"
              }
#line 365 "prog_io_dcg.m"
          }
#line 366 "prog_io_dcg.m"
      }
#line 180 "prog_io_dcg.m"
    else
#line 180 "prog_io_dcg.m"
    if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "else") == 0))
#line 359 "prog_io_dcg.m"
      {
#line 359 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__IfTerm_361;
#line 359 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__ElseTerm_362;
#line 359 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__CondTerm_369;
#line 359 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__ThenTerm_370;
#line 359 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Context_372;
#line 359 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_379_379;
#line 359 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_380_380;
#line 359 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_381_381;
#line 359 "prog_io_dcg.m"
        MR_String parse_tree__prog_io_dcg__V_382_382;
#line 359 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_383_383;
#line 359 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_384_384;
#line 359 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_385_385;
#line 359 "prog_io_dcg.m"
        MR_String parse_tree__prog_io_dcg__V_386_386;
#line 359 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_387_387;
#line 359 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_388_388;
#line 359 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_389_389;
#line 359 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_390_390;
#line 362 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_371_371;

#line 358 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 358 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 358 "prog_io_dcg.m"
          {
#line 358 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__IfTerm_361 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 358 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_379_379 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 358 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_379_379)) == (MR_mktag((MR_Integer) 1)));
#line 358 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 358 "prog_io_dcg.m"
              {
#line 358 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__ElseTerm_362 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_379_379, (MR_Integer) 0)));
#line 358 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_380_380 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_379_379, (MR_Integer) 1)));
#line 358 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_380_380 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 359 "prog_io_dcg.m"
                  {
#line 361 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__IfTerm_361)) == (MR_mktag((MR_Integer) 0)));
#line 361 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 361 "prog_io_dcg.m"
                      {
#line 361 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_381_381 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__IfTerm_361, (MR_Integer) 0)));
#line 361 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_383_383 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__IfTerm_361, (MR_Integer) 1)));
#line 361 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Context_372 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__IfTerm_361, (MR_Integer) 2)));
#line 361 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_381_381)) == (MR_mktag((MR_Integer) 0)));
#line 361 "prog_io_dcg.m"
                        if (parse_tree__prog_io_dcg__succeeded)
#line 361 "prog_io_dcg.m"
                          {
#line 361 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__V_382_382 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_381_381, (MR_Integer) 0)));
#line 361 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_382_382, (MR_String) "if") == 0);
#line 359 "prog_io_dcg.m"
                            if (parse_tree__prog_io_dcg__succeeded)
#line 359 "prog_io_dcg.m"
                              {
#line 362 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_383_383)) == (MR_mktag((MR_Integer) 1)));
#line 362 "prog_io_dcg.m"
                                if (parse_tree__prog_io_dcg__succeeded)
#line 362 "prog_io_dcg.m"
                                  {
#line 362 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__V_384_384 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_383_383, (MR_Integer) 0)));
#line 362 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__V_390_390 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_383_383, (MR_Integer) 1)));
#line 362 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_390_390 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "prog_io_dcg.m"
                                    if (parse_tree__prog_io_dcg__succeeded)
#line 359 "prog_io_dcg.m"
                                      {
#line 362 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_384_384)) == (MR_mktag((MR_Integer) 0)));
#line 362 "prog_io_dcg.m"
                                        if (parse_tree__prog_io_dcg__succeeded)
#line 362 "prog_io_dcg.m"
                                          {
#line 362 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__V_385_385 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_384_384, (MR_Integer) 0)));
#line 362 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__V_387_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_384_384, (MR_Integer) 1)));
#line 362 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__V_371_371 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_384_384, (MR_Integer) 2)));
#line 362 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_385_385)) == (MR_mktag((MR_Integer) 0)));
#line 362 "prog_io_dcg.m"
                                            if (parse_tree__prog_io_dcg__succeeded)
#line 362 "prog_io_dcg.m"
                                              {
#line 362 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__V_386_386 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_385_385, (MR_Integer) 0)));
#line 362 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_386_386, (MR_String) "then") == 0);
#line 359 "prog_io_dcg.m"
                                                if (parse_tree__prog_io_dcg__succeeded)
#line 359 "prog_io_dcg.m"
                                                  {
#line 362 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_387_387)) == (MR_mktag((MR_Integer) 1)));
#line 362 "prog_io_dcg.m"
                                                    if (parse_tree__prog_io_dcg__succeeded)
#line 362 "prog_io_dcg.m"
                                                      {
#line 362 "prog_io_dcg.m"
                                                        parse_tree__prog_io_dcg__CondTerm_369 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_387_387, (MR_Integer) 0)));
#line 362 "prog_io_dcg.m"
                                                        parse_tree__prog_io_dcg__V_388_388 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_387_387, (MR_Integer) 1)));
#line 362 "prog_io_dcg.m"
                                                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_388_388)) == (MR_mktag((MR_Integer) 1)));
#line 362 "prog_io_dcg.m"
                                                        if (parse_tree__prog_io_dcg__succeeded)
#line 362 "prog_io_dcg.m"
                                                          {
#line 362 "prog_io_dcg.m"
                                                            parse_tree__prog_io_dcg__ThenTerm_370 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_388_388, (MR_Integer) 0)));
#line 362 "prog_io_dcg.m"
                                                            parse_tree__prog_io_dcg__V_389_389 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_388_388, (MR_Integer) 1)));
#line 362 "prog_io_dcg.m"
                                                            parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_389_389 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "prog_io_dcg.m"
                                                            if (parse_tree__prog_io_dcg__succeeded)
#line 359 "prog_io_dcg.m"
                                                              {
#line 363 "prog_io_dcg.m"
                                                                {
#line 363 "prog_io_dcg.m"
                                                                  parse_tree__prog_io_dcg__parse_dcg_if_then_else_12_p_0(parse_tree__prog_io_dcg__CondTerm_369, parse_tree__prog_io_dcg__ThenTerm_370, parse_tree__prog_io_dcg__ElseTerm_362, parse_tree__prog_io_dcg__Context_372, parse_tree__prog_io_dcg__HeadVar__4_4, parse_tree__prog_io_dcg__MaybeGoal_5, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                                                                }
#line 363 "prog_io_dcg.m"
                                                                parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 359 "prog_io_dcg.m"
                                                              }
#line 362 "prog_io_dcg.m"
                                                          }
#line 362 "prog_io_dcg.m"
                                                      }
#line 359 "prog_io_dcg.m"
                                                  }
#line 362 "prog_io_dcg.m"
                                              }
#line 362 "prog_io_dcg.m"
                                          }
#line 359 "prog_io_dcg.m"
                                      }
#line 362 "prog_io_dcg.m"
                                  }
#line 359 "prog_io_dcg.m"
                              }
#line 361 "prog_io_dcg.m"
                          }
#line 361 "prog_io_dcg.m"
                      }
#line 359 "prog_io_dcg.m"
                  }
#line 358 "prog_io_dcg.m"
              }
#line 358 "prog_io_dcg.m"
          }
#line 359 "prog_io_dcg.m"
      }
#line 180 "prog_io_dcg.m"
    else
#line 180 "prog_io_dcg.m"
    if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "some") == 0))
#line 431 "prog_io_dcg.m"
      {
#line 431 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_547_547;
#line 431 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_548_548;
#line 431 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__QVarsTerm_474;
#line 431 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__SubTerm_475;
#line 431 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__GenericVarSet_482;
#line 431 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__MaybeStateVarsAndVars_483;
#line 431 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__MaybeSubGoal_484;
#line 431 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_507_507;
#line 431 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_508_508;
#line 464 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Vars0_485;
#line 464 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__StateVars0_486;
#line 464 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__SubGoal_487;

#line 430 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 430 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 430 "prog_io_dcg.m"
          {
#line 430 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__QVarsTerm_474 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 430 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_507_507 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 430 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_507_507)) == (MR_mktag((MR_Integer) 1)));
#line 430 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 430 "prog_io_dcg.m"
              {
#line 430 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__SubTerm_475 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_507_507, (MR_Integer) 0)));
#line 430 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_508_508 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_507_507, (MR_Integer) 1)));
#line 430 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 431 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 431 "prog_io_dcg.m"
                  {
#line 4841 "parse_tree.prog_io_dcg.c"
                    parse_tree__prog_io_dcg__TypeCtorInfo_547_547 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 4843 "parse_tree.prog_io_dcg.c"
                    parse_tree__prog_io_dcg__TypeCtorInfo_548_548 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 434 "prog_io_dcg.m"
                    {
#line 434 "prog_io_dcg.m"
                      mercury__varset__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_547_547, parse_tree__prog_io_dcg__TypeCtorInfo_548_548, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, &parse_tree__prog_io_dcg__GenericVarSet_482);
                    }
#line 435 "prog_io_dcg.m"
                    {
#line 435 "prog_io_dcg.m"
                      parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_548_548, parse_tree__prog_io_dcg__QVarsTerm_474, parse_tree__prog_io_dcg__GenericVarSet_482, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeStateVarsAndVars_483);
                    }
#line 437 "prog_io_dcg.m"
                    {
#line 437 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubTerm_475, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeSubGoal_484, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                    }
#line 440 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeStateVarsAndVars_483)) == (MR_mktag((MR_Integer) 1)));
#line 440 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 440 "prog_io_dcg.m"
                      {
#line 440 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Vars0_485 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeStateVarsAndVars_483, (MR_Integer) 0)));
#line 440 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__StateVars0_486 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeStateVarsAndVars_483, (MR_Integer) 1)));
#line 441 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoal_484)) == (MR_mktag((MR_Integer) 1)));
#line 441 "prog_io_dcg.m"
                        if (parse_tree__prog_io_dcg__succeeded)
#line 441 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__SubGoal_487 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoal_484, (MR_Integer) 0)));
#line 440 "prog_io_dcg.m"
                      }
#line 464 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 443 "prog_io_dcg.m"
                      {
#line 443 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__TypeInfo_553_553 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[4];
#line 443 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__TypeInfo_554_554 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 443 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__StateVars_488;
#line 443 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__Vars_489;
#line 443 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__Goal_490;

#line 443 "prog_io_dcg.m"
                        {
#line 443 "prog_io_dcg.m"
                          mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_553_553, parse_tree__prog_io_dcg__TypeInfo_554_554, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[4], parse_tree__prog_io_dcg__StateVars0_486, &parse_tree__prog_io_dcg__StateVars_488);
                        }
#line 444 "prog_io_dcg.m"
                        {
#line 444 "prog_io_dcg.m"
                          mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_553_553, parse_tree__prog_io_dcg__TypeInfo_554_554, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[5], parse_tree__prog_io_dcg__Vars0_485, &parse_tree__prog_io_dcg__Vars_489);
                        }
#line 449 "prog_io_dcg.m"
                        if ((parse_tree__prog_io_dcg__StateVars_488 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 449 "prog_io_dcg.m"
                          if ((parse_tree__prog_io_dcg__Vars_489 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 446 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__Goal_490 = parse_tree__prog_io_dcg__SubGoal_487;
#line 449 "prog_io_dcg.m"
                          else
#line 456 "prog_io_dcg.m"
                            {
#line 456 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__Goal_490 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 456 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_490, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 456 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_490, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 456 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_490, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_489));
#line 456 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_490, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_487));
#line 456 "prog_io_dcg.m"
                            }
#line 449 "prog_io_dcg.m"
                        else
#line 449 "prog_io_dcg.m"
                        if ((parse_tree__prog_io_dcg__Vars_489 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 452 "prog_io_dcg.m"
                          {
#line 452 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__Goal_490 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 452 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_490, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 452 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_490, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 452 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_490, 2) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_488));
#line 452 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_490, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_487));
#line 452 "prog_io_dcg.m"
                          }
#line 449 "prog_io_dcg.m"
                        else
#line 458 "prog_io_dcg.m"
                          {
#line 458 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__V_514_514;

#line 461 "prog_io_dcg.m"
                            {
#line 461 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__V_514_514 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 461 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_514_514, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 461 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_514_514, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 461 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_514_514, 2) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_488));
#line 461 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_514_514, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_487));
#line 461 "prog_io_dcg.m"
                            }
#line 460 "prog_io_dcg.m"
                            {
#line 460 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__Goal_490 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 460 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_490, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 460 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_490, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 460 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_490, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_489));
#line 460 "prog_io_dcg.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_490, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_514_514));
#line 460 "prog_io_dcg.m"
                            }
#line 458 "prog_io_dcg.m"
                          }
#line 463 "prog_io_dcg.m"
                        {
#line 463 "prog_io_dcg.m"
                          MR_Word base;
#line 463 "prog_io_dcg.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 463 "prog_io_dcg.m"
                          *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 463 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_490));
#line 463 "prog_io_dcg.m"
                        }
#line 443 "prog_io_dcg.m"
                      }
#line 464 "prog_io_dcg.m"
                    else
#line 465 "prog_io_dcg.m"
                      {
#line 465 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__TypeInfo_559_559 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[5];
#line 465 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__VarsSpecs_499;
#line 465 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__SubGoalSpecs_500;
#line 465 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__V_515_515;

#line 465 "prog_io_dcg.m"
                        {
#line 465 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__VarsSpecs_499 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_dcg__TypeInfo_559_559, parse_tree__prog_io_dcg__TypeInfo_559_559, parse_tree__prog_io_dcg__MaybeStateVarsAndVars_483);
                        }
#line 466 "prog_io_dcg.m"
                        {
#line 466 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__SubGoalSpecs_500 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, parse_tree__prog_io_dcg__MaybeSubGoal_484);
                        }
#line 467 "prog_io_dcg.m"
                        {
#line 467 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_515_515 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__VarsSpecs_499, parse_tree__prog_io_dcg__SubGoalSpecs_500);
                        }
#line 467 "prog_io_dcg.m"
                        {
#line 467 "prog_io_dcg.m"
                          MR_Word base;
#line 467 "prog_io_dcg.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 467 "prog_io_dcg.m"
                          *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 467 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_515_515));
#line 467 "prog_io_dcg.m"
                        }
#line 465 "prog_io_dcg.m"
                      }
#line 464 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 431 "prog_io_dcg.m"
                  }
#line 430 "prog_io_dcg.m"
              }
#line 430 "prog_io_dcg.m"
          }
#line 431 "prog_io_dcg.m"
      }
#line 180 "prog_io_dcg.m"
    else
#line 180 "prog_io_dcg.m"
    if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "impure") == 0))
#line 187 "prog_io_dcg.m"
      {
#line 187 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__G_28;
#line 187 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_41_41;
#line 187 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_42_42;

#line 186 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 186 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 186 "prog_io_dcg.m"
          {
#line 186 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__G_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 186 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 186 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 187 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 187 "prog_io_dcg.m"
              {
#line 188 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_42_42 = (MR_Integer) 2;
#line 188 "prog_io_dcg.m"
                {
#line 188 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__parse_dcg_goal_with_purity_10_p_0(parse_tree__prog_io_dcg__G_28, parse_tree__prog_io_dcg__V_42_42, parse_tree__prog_io_dcg__HeadVar__4_4, parse_tree__prog_io_dcg__MaybeGoal_5, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                }
#line 188 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 187 "prog_io_dcg.m"
              }
#line 186 "prog_io_dcg.m"
          }
#line 187 "prog_io_dcg.m"
      }
#line 180 "prog_io_dcg.m"
    else
#line 180 "prog_io_dcg.m"
    if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "semipure") == 0))
#line 191 "prog_io_dcg.m"
      {
#line 191 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__G_46;
#line 191 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_59_59;
#line 191 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_60_60;

#line 190 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 190 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 190 "prog_io_dcg.m"
          {
#line 190 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__G_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 190 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 190 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 191 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 191 "prog_io_dcg.m"
              {
#line 192 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_60_60 = (MR_Integer) 1;
#line 192 "prog_io_dcg.m"
                {
#line 192 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__parse_dcg_goal_with_purity_10_p_0(parse_tree__prog_io_dcg__G_46, parse_tree__prog_io_dcg__V_60_60, parse_tree__prog_io_dcg__HeadVar__4_4, parse_tree__prog_io_dcg__MaybeGoal_5, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                }
#line 192 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 191 "prog_io_dcg.m"
              }
#line 190 "prog_io_dcg.m"
          }
#line 191 "prog_io_dcg.m"
      }
#line 180 "prog_io_dcg.m"
    else
#line 180 "prog_io_dcg.m"
    if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "promise_pure") == 0))
#line 195 "prog_io_dcg.m"
      {
#line 195 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__G_64;
#line 195 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__MaybeGoal0_71;
#line 195 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_81_81;

#line 194 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 194 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 194 "prog_io_dcg.m"
          {
#line 194 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__G_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 194 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 194 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_81_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 195 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 195 "prog_io_dcg.m"
              {
#line 196 "prog_io_dcg.m"
                {
#line 196 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__G_64, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeGoal0_71, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                }
#line 201 "prog_io_dcg.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal0_71)) == (MR_mktag((MR_Integer) 0))))
#line 203 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__MaybeGoal_5 = parse_tree__prog_io_dcg__MaybeGoal0_71;
#line 201 "prog_io_dcg.m"
                else
#line 198 "prog_io_dcg.m"
                  {
#line 198 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__Goal0_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal0_71, (MR_Integer) 0)));
#line 198 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__Goal_73;

#line 199 "prog_io_dcg.m"
                    {
#line 199 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__Goal_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 199 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 199 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_73, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 199 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_73, 2) = ((MR_Box) ((MR_Integer) 0));
#line 199 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_73, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Goal0_72));
#line 199 "prog_io_dcg.m"
                    }
#line 200 "prog_io_dcg.m"
                    {
#line 200 "prog_io_dcg.m"
                      MR_Word base;
#line 200 "prog_io_dcg.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 200 "prog_io_dcg.m"
                      *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 200 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_73));
#line 200 "prog_io_dcg.m"
                    }
#line 198 "prog_io_dcg.m"
                  }
#line 201 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 195 "prog_io_dcg.m"
              }
#line 194 "prog_io_dcg.m"
          }
#line 195 "prog_io_dcg.m"
      }
#line 180 "prog_io_dcg.m"
    else
#line 180 "prog_io_dcg.m"
    if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "promise_impure") == 0))
#line 217 "prog_io_dcg.m"
      {
#line 217 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__G_108;
#line 217 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__MaybeGoal0_115;
#line 217 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_125_125;

#line 216 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 216 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 216 "prog_io_dcg.m"
          {
#line 216 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__G_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 216 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 216 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_125_125 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 217 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 217 "prog_io_dcg.m"
              {
#line 218 "prog_io_dcg.m"
                {
#line 218 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__G_108, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeGoal0_115, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                }
#line 223 "prog_io_dcg.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal0_115)) == (MR_mktag((MR_Integer) 0))))
#line 225 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__MaybeGoal_5 = parse_tree__prog_io_dcg__MaybeGoal0_115;
#line 223 "prog_io_dcg.m"
                else
#line 220 "prog_io_dcg.m"
                  {
#line 220 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__Goal0_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal0_115, (MR_Integer) 0)));
#line 220 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__Goal_117;

#line 221 "prog_io_dcg.m"
                    {
#line 221 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__Goal_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 221 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 221 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_117, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 221 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_117, 2) = ((MR_Box) ((MR_Integer) 2));
#line 221 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_117, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Goal0_116));
#line 221 "prog_io_dcg.m"
                    }
#line 222 "prog_io_dcg.m"
                    {
#line 222 "prog_io_dcg.m"
                      MR_Word base;
#line 222 "prog_io_dcg.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 222 "prog_io_dcg.m"
                      *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 222 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_117));
#line 222 "prog_io_dcg.m"
                    }
#line 220 "prog_io_dcg.m"
                  }
#line 223 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 217 "prog_io_dcg.m"
              }
#line 216 "prog_io_dcg.m"
          }
#line 217 "prog_io_dcg.m"
      }
#line 180 "prog_io_dcg.m"
    else
#line 180 "prog_io_dcg.m"
    if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "promise_semipure") == 0))
#line 206 "prog_io_dcg.m"
      {
#line 206 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__G_86;
#line 206 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__MaybeGoal0_93;
#line 206 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_103_103;

#line 205 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 205 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 205 "prog_io_dcg.m"
          {
#line 205 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__G_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 205 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_103_103 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 206 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 206 "prog_io_dcg.m"
              {
#line 207 "prog_io_dcg.m"
                {
#line 207 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__G_86, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeGoal0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                }
#line 212 "prog_io_dcg.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal0_93)) == (MR_mktag((MR_Integer) 0))))
#line 214 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__MaybeGoal_5 = parse_tree__prog_io_dcg__MaybeGoal0_93;
#line 212 "prog_io_dcg.m"
                else
#line 209 "prog_io_dcg.m"
                  {
#line 209 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__Goal0_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal0_93, (MR_Integer) 0)));
#line 209 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__Goal_95;

#line 210 "prog_io_dcg.m"
                    {
#line 210 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__Goal_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 210 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 210 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_95, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 210 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_95, 2) = ((MR_Box) ((MR_Integer) 1));
#line 210 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_95, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Goal0_94));
#line 210 "prog_io_dcg.m"
                    }
#line 211 "prog_io_dcg.m"
                    {
#line 211 "prog_io_dcg.m"
                      MR_Word base;
#line 211 "prog_io_dcg.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_io_dcg.m"
                      *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 211 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_95));
#line 211 "prog_io_dcg.m"
                    }
#line 209 "prog_io_dcg.m"
                  }
#line 212 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 206 "prog_io_dcg.m"
              }
#line 205 "prog_io_dcg.m"
          }
#line 206 "prog_io_dcg.m"
      }
#line 180 "prog_io_dcg.m"
    else
#line 180 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__succeeded = MR_FALSE;
#line 180 "prog_io_dcg.m"
    return parse_tree__prog_io_dcg__succeeded;
#line 180 "prog_io_dcg.m"
  }
#line 173 "prog_io_dcg.m"
}

#line 131 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0_1(
#line 131 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 131 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 131 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 131 "prog_io_dcg.m"
{
#line 131 "prog_io_dcg.m"
  {
#line 131 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 131 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv0_HeadVar__2_65;

#line 131 "prog_io_dcg.m"
    {
#line 131 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal__131__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv0_HeadVar__2_65);
    }
#line 131 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv0_HeadVar__2_65));
#line 131 "prog_io_dcg.m"
  }
#line 131 "prog_io_dcg.m"
}

#line 112 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(
#line 112 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_10,
#line 112 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_11,
#line 112 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_12,
#line 112 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_28,
#line 112 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_29,
#line 112 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_30,
#line 112 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_31,
#line 112 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_32,
#line 112 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Var_33)
#line 112 "prog_io_dcg.m"
{
#line 116 "prog_io_dcg.m"
  {
#line 116 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 116 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Context_18;
#line 147 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__SymName_21;
#line 147 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Args0_22;
#line 125 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_63_63;
#line 125 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__ProgTerm_20;

#line 120 "prog_io_dcg.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__Term_10)) == (MR_mktag((MR_Integer) 0))))
#line 119 "prog_io_dcg.m"
      {
#line 119 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 0)));
#line 119 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 1)));

#line 119 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 2)));
#line 119 "prog_io_dcg.m"
      }
#line 120 "prog_io_dcg.m"
    else
#line 121 "prog_io_dcg.m"
      {
#line 121 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 0)));

#line 121 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 1)));
#line 121 "prog_io_dcg.m"
      }
#line 5486 "parse_tree.prog_io_dcg.c"
    parse_tree__prog_io_dcg__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 125 "prog_io_dcg.m"
    {
#line 125 "prog_io_dcg.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_dcg__TypeCtorInfo_63_63, parse_tree__prog_io_dcg__Term_10, &parse_tree__prog_io_dcg__ProgTerm_20);
    }
#line 126 "prog_io_dcg.m"
    {
#line 126 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_63_63, parse_tree__prog_io_dcg__ProgTerm_20, &parse_tree__prog_io_dcg__SymName_21, &parse_tree__prog_io_dcg__Args0_22);
    }
#line 147 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 136 "prog_io_dcg.m"
      {
#line 136 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__MaybeGoalPrime_25;
#line 136 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_35_35;
#line 136 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_36_36;
#line 136 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Var_37_37;
#line 130 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_68_68;
#line 130 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_69_69;
#line 130 "prog_io_dcg.m"
        MR_String parse_tree__prog_io_dcg__Functor_23;
#line 130 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Args1_24;
#line 130 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_34_34;

#line 130 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__SymName_21)) == (MR_mktag((MR_Integer) 0)));
#line 130 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 130 "prog_io_dcg.m"
          {
#line 130 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Functor_23 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__SymName_21, (MR_Integer) 0)));
#line 131 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_34_34 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[1];
#line 5531 "parse_tree.prog_io_dcg.c"
            parse_tree__prog_io_dcg__TypeInfo_68_68 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[0];
#line 5533 "parse_tree.prog_io_dcg.c"
            parse_tree__prog_io_dcg__TypeInfo_69_69 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[1];
#line 131 "prog_io_dcg.m"
            {
#line 131 "prog_io_dcg.m"
              mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_68_68, parse_tree__prog_io_dcg__TypeInfo_69_69, parse_tree__prog_io_dcg__V_34_34, parse_tree__prog_io_dcg__Args0_22, &parse_tree__prog_io_dcg__Args1_24);
            }
#line 132 "prog_io_dcg.m"
            {
#line 132 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0(parse_tree__prog_io_dcg__Functor_23, parse_tree__prog_io_dcg__Args1_24, parse_tree__prog_io_dcg__Context_18, parse_tree__prog_io_dcg__ContextPieces_11, &parse_tree__prog_io_dcg__MaybeGoalPrime_25, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_28, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_35_35, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_30, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_36_36, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_32, &parse_tree__prog_io_dcg__STATE_VARIABLE_Var_37_37);
            }
#line 130 "prog_io_dcg.m"
          }
#line 136 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 135 "prog_io_dcg.m"
          {
#line 135 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__STATE_VARIABLE_Var_33 = parse_tree__prog_io_dcg__STATE_VARIABLE_Var_37_37;
#line 135 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_31 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_36_36;
#line 135 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_29 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_35_35;
#line 135 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__MaybeGoal_12 = parse_tree__prog_io_dcg__MaybeGoalPrime_25;
#line 135 "prog_io_dcg.m"
          }
#line 136 "prog_io_dcg.m"
        else
#line 140 "prog_io_dcg.m"
          {
#line 140 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_87;
#line 140 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Args_26;
#line 140 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Goal_27;
#line 140 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_40_40;
#line 140 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_41_41;
#line 140 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_42_42;
#line 140 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_43_43;
#line 140 "prog_io_dcg.m"
            MR_Integer parse_tree__prog_io_dcg__N_80;
#line 140 "prog_io_dcg.m"
            MR_String parse_tree__prog_io_dcg__StringN_81;
#line 140 "prog_io_dcg.m"
            MR_String parse_tree__prog_io_dcg__VarName_82;
#line 140 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_85;

#line 102 "prog_io_dcg.m"
            {
#line 102 "prog_io_dcg.m"
              mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_80, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_30, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_31);
            }
#line 103 "prog_io_dcg.m"
            {
#line 103 "prog_io_dcg.m"
              mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_80, &parse_tree__prog_io_dcg__StringN_81);
            }
#line 104 "prog_io_dcg.m"
            {
#line 104 "prog_io_dcg.m"
              mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_81, &parse_tree__prog_io_dcg__VarName_82);
            }
#line 5603 "parse_tree.prog_io_dcg.c"
            parse_tree__prog_io_dcg__TypeCtorInfo_20_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 105 "prog_io_dcg.m"
            {
#line 105 "prog_io_dcg.m"
              mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_87, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_33, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_28, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_85);
            }
#line 106 "prog_io_dcg.m"
            {
#line 106 "prog_io_dcg.m"
              mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_87, *parse_tree__prog_io_dcg__STATE_VARIABLE_Var_33, parse_tree__prog_io_dcg__VarName_82, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_85, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_29);
            }
#line 142 "prog_io_dcg.m"
            {
#line 142 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 142 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_32));
#line 142 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_41_41, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_18));
#line 142 "prog_io_dcg.m"
            }
#line 142 "prog_io_dcg.m"
            {
#line 142 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 142 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_43_43, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_Var_33));
#line 142 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_43_43, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_18));
#line 142 "prog_io_dcg.m"
            }
#line 142 "prog_io_dcg.m"
            {
#line 142 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 142 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_43_43));
#line 142 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 142 "prog_io_dcg.m"
            }
#line 142 "prog_io_dcg.m"
            {
#line 142 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 142 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_41_41));
#line 142 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_42_42));
#line 142 "prog_io_dcg.m"
            }
#line 141 "prog_io_dcg.m"
            {
#line 141 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__Args_26 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[0], parse_tree__prog_io_dcg__Args0_22, parse_tree__prog_io_dcg__V_40_40);
            }
#line 143 "prog_io_dcg.m"
            {
#line 143 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__Goal_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 143 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 143 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_27, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_18));
#line 143 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_27, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SymName_21));
#line 143 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_27, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Args_26));
#line 143 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_27, 4) = ((MR_Box) ((MR_Integer) 0));
#line 143 "prog_io_dcg.m"
            }
#line 144 "prog_io_dcg.m"
            {
#line 144 "prog_io_dcg.m"
              MR_Word base;
#line 144 "prog_io_dcg.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 144 "prog_io_dcg.m"
              *parse_tree__prog_io_dcg__MaybeGoal_12 = base;
#line 144 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_27));
#line 144 "prog_io_dcg.m"
            }
#line 140 "prog_io_dcg.m"
          }
#line 136 "prog_io_dcg.m"
      }
#line 147 "prog_io_dcg.m"
    else
#line 151 "prog_io_dcg.m"
      {
#line 151 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_51_51;
#line 151 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_52_52;
#line 151 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_53_53;
#line 151 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_54_54;
#line 151 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_55_55;
#line 151 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__ProgTerm_60;
#line 151 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Goal_61;

#line 151 "prog_io_dcg.m"
        {
#line 151 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__new_dcg_var_5_p_0(parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_28, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_29, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_30, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_31, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_33);
        }
#line 152 "prog_io_dcg.m"
        {
#line 152 "prog_io_dcg.m"
          mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__Term_10, &parse_tree__prog_io_dcg__ProgTerm_60);
        }
#line 154 "prog_io_dcg.m"
        {
#line 154 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_32));
#line 154 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_18));
#line 154 "prog_io_dcg.m"
        }
#line 154 "prog_io_dcg.m"
        {
#line 154 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_55_55, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_Var_33));
#line 154 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_55_55, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_18));
#line 154 "prog_io_dcg.m"
        }
#line 154 "prog_io_dcg.m"
        {
#line 154 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_55_55));
#line 154 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 154 "prog_io_dcg.m"
        }
#line 154 "prog_io_dcg.m"
        {
#line 154 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_53_53));
#line 154 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_52_52, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_54_54));
#line 154 "prog_io_dcg.m"
        }
#line 154 "prog_io_dcg.m"
        {
#line 154 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_dcg__ProgTerm_60));
#line 154 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_51_51, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_52_52));
#line 154 "prog_io_dcg.m"
        }
#line 153 "prog_io_dcg.m"
        {
#line 153 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__Goal_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 153 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 153 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_61, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_18));
#line 153 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_61, 2) = ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_4[0]));
#line 153 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_61, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_51_51));
#line 153 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_61, 4) = ((MR_Box) ((MR_Integer) 0));
#line 153 "prog_io_dcg.m"
        }
#line 156 "prog_io_dcg.m"
        {
#line 156 "prog_io_dcg.m"
          MR_Word base;
#line 156 "prog_io_dcg.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 156 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeGoal_12 = base;
#line 156 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_61));
#line 156 "prog_io_dcg.m"
        }
#line 151 "prog_io_dcg.m"
      }
#line 116 "prog_io_dcg.m"
  }
#line 112 "prog_io_dcg.m"
}

#line 98 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__new_dcg_var_5_p_0(
#line 98 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_12,
#line 98 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_13,
#line 98 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_14,
#line 98 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_15,
#line 98 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__DCG_0_Var_8)
#line 98 "prog_io_dcg.m"
{
#line 101 "prog_io_dcg.m"
  {
#line 101 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 101 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_20;
#line 101 "prog_io_dcg.m"
    MR_Integer parse_tree__prog_io_dcg__N_9;
#line 101 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__StringN_10;
#line 101 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__VarName_11;
#line 101 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18;

#line 102 "prog_io_dcg.m"
    {
#line 102 "prog_io_dcg.m"
      mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_9, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_14, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_15);
    }
#line 103 "prog_io_dcg.m"
    {
#line 103 "prog_io_dcg.m"
      mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_9, &parse_tree__prog_io_dcg__StringN_10);
    }
#line 104 "prog_io_dcg.m"
    {
#line 104 "prog_io_dcg.m"
      mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_10, &parse_tree__prog_io_dcg__VarName_11);
    }
#line 5851 "parse_tree.prog_io_dcg.c"
    parse_tree__prog_io_dcg__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 105 "prog_io_dcg.m"
    {
#line 105 "prog_io_dcg.m"
      mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_20, parse_tree__prog_io_dcg__DCG_0_Var_8, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_12, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18);
    }
#line 106 "prog_io_dcg.m"
    {
#line 106 "prog_io_dcg.m"
      mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_20, *parse_tree__prog_io_dcg__DCG_0_Var_8, parse_tree__prog_io_dcg__VarName_11, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_13);
#line 106 "prog_io_dcg.m"
      return;
    }
#line 101 "prog_io_dcg.m"
  }
#line 98 "prog_io_dcg.m"
}

#line 47 "prog_io_dcg.m"
void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_pred_goal_7_p_0(
#line 47 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__GoalTerm_8,
#line 47 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_9,
#line 47 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_10,
#line 47 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__DCGVar0_11,
#line 47 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__DCGVar_12,
#line 47 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_16,
#line 47 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_17)
#line 47 "prog_io_dcg.m"
{
#line 89 "prog_io_dcg.m"
  {
#line 89 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 89 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_36;
#line 89 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Counter0_14;
#line 89 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18;
#line 89 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_19_19;
#line 89 "prog_io_dcg.m"
    MR_Integer parse_tree__prog_io_dcg__N_29;
#line 89 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__StringN_30;
#line 89 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__VarName_31;
#line 89 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_34;
#line 91 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg___Counter_15;

#line 90 "prog_io_dcg.m"
    {
#line 90 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__V_19_19 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 102 "prog_io_dcg.m"
    {
#line 102 "prog_io_dcg.m"
      mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_29, parse_tree__prog_io_dcg__V_19_19, &parse_tree__prog_io_dcg__Counter0_14);
    }
#line 103 "prog_io_dcg.m"
    {
#line 103 "prog_io_dcg.m"
      mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_29, &parse_tree__prog_io_dcg__StringN_30);
    }
#line 104 "prog_io_dcg.m"
    {
#line 104 "prog_io_dcg.m"
      mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_30, &parse_tree__prog_io_dcg__VarName_31);
    }
#line 5932 "parse_tree.prog_io_dcg.c"
    parse_tree__prog_io_dcg__TypeCtorInfo_20_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 105 "prog_io_dcg.m"
    {
#line 105 "prog_io_dcg.m"
      mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_36, parse_tree__prog_io_dcg__DCGVar0_11, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_16, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_34);
    }
#line 106 "prog_io_dcg.m"
    {
#line 106 "prog_io_dcg.m"
      mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_36, *parse_tree__prog_io_dcg__DCGVar0_11, parse_tree__prog_io_dcg__VarName_31, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_34, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18);
    }
#line 91 "prog_io_dcg.m"
    {
#line 91 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__GoalTerm_8, parse_tree__prog_io_dcg__ContextPieces_9, parse_tree__prog_io_dcg__MaybeGoal_10, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_17, parse_tree__prog_io_dcg__Counter0_14, &parse_tree__prog_io_dcg___Counter_15, *parse_tree__prog_io_dcg__DCGVar0_11, parse_tree__prog_io_dcg__DCGVar_12);
    }
#line 89 "prog_io_dcg.m"
  }
#line 47 "prog_io_dcg.m"
}

#line 679 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0_1(
#line 679 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 679 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 679 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 679 "prog_io_dcg.m"
{
#line 679 "prog_io_dcg.m"
  {
#line 679 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 679 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv0_HeadVar__2_33;

#line 679 "prog_io_dcg.m"
    {
#line 679 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__process_dcg_clause__679__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv0_HeadVar__2_33);
    }
#line 679 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv0_HeadVar__2_33));
#line 679 "prog_io_dcg.m"
  }
#line 679 "prog_io_dcg.m"
}

#line 37 "prog_io_dcg.m"
void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0(
#line 37 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ModuleName_8,
#line 37 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__VarSet0_9,
#line 37 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__DCG_Head_10,
#line 37 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__DCG_Body_11,
#line 37 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__DCG_Context_12,
#line 37 "prog_io_dcg.m"
  MR_Integer parse_tree__prog_io_dcg__SeqNum_13,
#line 37 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeItem_14)
#line 37 "prog_io_dcg.m"
{
#line 66 "prog_io_dcg.m"
  {
#line 66 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_33_33 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_49;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__ProgVarSet0_15;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__ProgVarSet1_16;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Counter0_17;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__DCG_0_Var_18;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeBody_20;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__ProgVarSet_21;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__DCG_Var_23;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_28_28;
#line 66 "prog_io_dcg.m"
    MR_Integer parse_tree__prog_io_dcg__N_42;
#line 66 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__StringN_43;
#line 66 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__VarName_44;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_47;
#line 72 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg___Counter_22;

#line 67 "prog_io_dcg.m"
    {
#line 67 "prog_io_dcg.m"
      mercury__varset__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_33_33, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__VarSet0_9, &parse_tree__prog_io_dcg__ProgVarSet0_15);
    }
#line 68 "prog_io_dcg.m"
    {
#line 68 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__V_28_28 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 102 "prog_io_dcg.m"
    {
#line 102 "prog_io_dcg.m"
      mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_42, parse_tree__prog_io_dcg__V_28_28, &parse_tree__prog_io_dcg__Counter0_17);
    }
#line 103 "prog_io_dcg.m"
    {
#line 103 "prog_io_dcg.m"
      mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_42, &parse_tree__prog_io_dcg__StringN_43);
    }
#line 104 "prog_io_dcg.m"
    {
#line 104 "prog_io_dcg.m"
      mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_43, &parse_tree__prog_io_dcg__VarName_44);
    }
#line 6063 "parse_tree.prog_io_dcg.c"
    parse_tree__prog_io_dcg__TypeCtorInfo_20_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 105 "prog_io_dcg.m"
    {
#line 105 "prog_io_dcg.m"
      mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_49, &parse_tree__prog_io_dcg__DCG_0_Var_18, parse_tree__prog_io_dcg__ProgVarSet0_15, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_47);
    }
#line 106 "prog_io_dcg.m"
    {
#line 106 "prog_io_dcg.m"
      mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_49, parse_tree__prog_io_dcg__DCG_0_Var_18, parse_tree__prog_io_dcg__VarName_44, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_47, &parse_tree__prog_io_dcg__ProgVarSet1_16);
    }
#line 72 "prog_io_dcg.m"
    {
#line 72 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__DCG_Body_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_dcg__MaybeBody_20, parse_tree__prog_io_dcg__ProgVarSet1_16, &parse_tree__prog_io_dcg__ProgVarSet_21, parse_tree__prog_io_dcg__Counter0_17, &parse_tree__prog_io_dcg___Counter_22, parse_tree__prog_io_dcg__DCG_0_Var_18, &parse_tree__prog_io_dcg__DCG_Var_23);
    }
#line 81 "prog_io_dcg.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeBody_20)) == (MR_mktag((MR_Integer) 0))))
#line 83 "prog_io_dcg.m"
      *parse_tree__prog_io_dcg__MaybeItem_14 = (MR_Word) parse_tree__prog_io_dcg__MaybeBody_20;
#line 81 "prog_io_dcg.m"
    else
#line 75 "prog_io_dcg.m"
      {
#line 75 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Body_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeBody_20, (MR_Integer) 0)));
#line 75 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__HeadResult_26;

#line 77 "prog_io_dcg.m"
        {
#line 77 "prog_io_dcg.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_33_33, parse_tree__prog_io_dcg__ModuleName_8, parse_tree__prog_io_dcg__DCG_Head_10, parse_tree__prog_io_dcg__VarSet0_9, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[7]), &parse_tree__prog_io_dcg__HeadResult_26);
        }
#line 678 "prog_io_dcg.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadResult_26)) == (MR_mktag((MR_Integer) 0))))
#line 686 "prog_io_dcg.m"
          {
#line 686 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Specs_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__HeadResult_26, (MR_Integer) 0)));

#line 687 "prog_io_dcg.m"
            {
#line 687 "prog_io_dcg.m"
              MR_Word base;
#line 687 "prog_io_dcg.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 687 "prog_io_dcg.m"
              *parse_tree__prog_io_dcg__MaybeItem_14 = base;
#line 687 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Specs_64));
#line 687 "prog_io_dcg.m"
            }
#line 686 "prog_io_dcg.m"
          }
#line 678 "prog_io_dcg.m"
        else
#line 678 "prog_io_dcg.m"
          {
#line 678 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__TypeInfo_37_78 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[0];
#line 678 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Name_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadResult_26, (MR_Integer) 0)));
#line 678 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Args0_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadResult_26, (MR_Integer) 1)));
#line 678 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Args1_60;
#line 678 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Args_61;
#line 678 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__ItemClause_62;
#line 678 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Item_63;
#line 678 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_66_66;
#line 678 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_67_67;
#line 678 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_68_68;
#line 678 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_69_69;

#line 679 "prog_io_dcg.m"
            {
#line 679 "prog_io_dcg.m"
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[1], parse_tree__prog_io_dcg__TypeInfo_37_78, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[0], parse_tree__prog_io_dcg__Args0_59, &parse_tree__prog_io_dcg__Args1_60);
            }
#line 680 "prog_io_dcg.m"
            {
#line 680 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_dcg__DCG_0_Var_18));
#line 680 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_67_67, 1) = ((MR_Box) (parse_tree__prog_io_dcg__DCG_Context_12));
#line 680 "prog_io_dcg.m"
            }
#line 680 "prog_io_dcg.m"
            {
#line 680 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_dcg__DCG_Var_23));
#line 680 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_69_69, 1) = ((MR_Box) (parse_tree__prog_io_dcg__DCG_Context_12));
#line 680 "prog_io_dcg.m"
            }
#line 680 "prog_io_dcg.m"
            {
#line 680 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_69_69));
#line 680 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 680 "prog_io_dcg.m"
            }
#line 680 "prog_io_dcg.m"
            {
#line 680 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_67_67));
#line 680 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_66_66, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_68_68));
#line 680 "prog_io_dcg.m"
            }
#line 680 "prog_io_dcg.m"
            {
#line 680 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__Args_61 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_dcg__TypeInfo_37_78, parse_tree__prog_io_dcg__Args1_60, parse_tree__prog_io_dcg__V_66_66);
            }
#line 681 "prog_io_dcg.m"
            {
#line 681 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__ItemClause_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 681 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_62, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Name_58));
#line 681 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_62, 1) = ((MR_Box) ((MR_Integer) 0));
#line 681 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_62, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Args_61));
#line 681 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_62, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 681 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_62, 4) = ((MR_Box) (parse_tree__prog_io_dcg__ProgVarSet_21));
#line 681 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_62, 5) = ((MR_Box) (parse_tree__prog_io_dcg__Body_24));
#line 681 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_62, 6) = ((MR_Box) (parse_tree__prog_io_dcg__DCG_Context_12));
#line 681 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_62, 7) = ((MR_Box) (parse_tree__prog_io_dcg__SeqNum_13));
#line 681 "prog_io_dcg.m"
            }
#line 683 "prog_io_dcg.m"
            {
#line 683 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__Item_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Item_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 683 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Item_63, 1) = ((MR_Box) (parse_tree__prog_io_dcg__ItemClause_62));
#line 683 "prog_io_dcg.m"
            }
#line 684 "prog_io_dcg.m"
            {
#line 684 "prog_io_dcg.m"
              MR_Word base;
#line 684 "prog_io_dcg.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 684 "prog_io_dcg.m"
              *parse_tree__prog_io_dcg__MaybeItem_14 = base;
#line 684 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Item_63));
#line 684 "prog_io_dcg.m"
            }
#line 678 "prog_io_dcg.m"
          }
#line 75 "prog_io_dcg.m"
      }
#line 66 "prog_io_dcg.m"
  }
#line 37 "prog_io_dcg.m"
}

void mercury__parse_tree__prog_io_dcg__init(void)
{
}

void mercury__parse_tree__prog_io_dcg__init_type_tables(void)
{
}

void mercury__parse_tree__prog_io_dcg__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io_dcg. */
