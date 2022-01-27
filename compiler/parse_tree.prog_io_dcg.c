/*
** Automatically generated from `prog_io_dcg.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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
#include "counter.mih"
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




#line 135 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 138 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 141 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 144 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 664 "prog_io_dcg.m"
static MR_bool MR_CALL 
parse_tree__prog_io_dcg__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
#line 664 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__List0_4,
#line 664 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_5,
#line 664 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__List_6);

#line 684 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__process_dcg_clause__684__1_2_p_0(
#line 684 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_32,
#line 684 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_33);

#line 539 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__539__1_2_p_0(
#line 539 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_57,
#line 539 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_58);

#line 538 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__538__1_2_p_0(
#line 538 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_51,
#line 538 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_52);

#line 445 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__445__1_2_p_0(
#line 445 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_581,
#line 445 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_582);

#line 444 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__444__1_2_p_0(
#line 444 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_575,
#line 444 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_576);

#line 404 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__404__1_2_p_0(
#line 404 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_566,
#line 404 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_567);

#line 403 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__403__1_2_p_0(
#line 403 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_560,
#line 403 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_561);

#line 130 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal__130__1_2_p_0(
#line 130 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_66,
#line 130 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_67);

#line 600 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_if_then_else_12_p_0(
#line 600 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__CondTerm_13,
#line 600 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ThenTerm_14,
#line 600 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ElseTerm_15,
#line 600 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_16,
#line 600 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_17,
#line 600 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_18,
#line 600 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_40,
#line 600 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_41,
#line 600 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_42,
#line 600 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_43,
#line 600 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Var0_21,
#line 600 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Var_22);

#line 566 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_if_then_12_p_0(
#line 566 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__CondTerm_13,
#line 566 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ThenTerm_14,
#line 566 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_15,
#line 566 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_16,
#line 566 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeVarsCond_17,
#line 566 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeThen_18,
#line 566 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
#line 566 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
#line 566 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
#line 566 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
#line 566 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Var0_21,
#line 566 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Var_22);

#line 539 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_2(
#line 539 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 539 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 539 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 538 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_1(
#line 538 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 538 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 538 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 515 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0(
#line 515 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_10,
#line 515 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_11,
#line 515 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeVarsGoal_12,
#line 515 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
#line 515 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
#line 515 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
#line 515 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
#line 515 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_34,
#line 515 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Var_35);

#line 503 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(
#line 503 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Disjunct0_5,
#line 503 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Goal_6,
#line 503 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_7,
#line 503 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Disjunct_8);

#line 473 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_with_purity_10_p_0(
#line 473 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__G_11,
#line 473 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Purity_12,
#line 473 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_13,
#line 473 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_14,
#line 473 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
#line 473 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
#line 473 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
#line 473 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
#line 473 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_34,
#line 473 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Var_35);

#line 445 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_4(
#line 445 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 445 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 445 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 444 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_3(
#line 444 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 444 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 444 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 404 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_2(
#line 404 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 404 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 404 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 403 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_1(
#line 403 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 403 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 403 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 172 "prog_io_dcg.m"
static MR_bool MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0(
#line 172 "prog_io_dcg.m"
  MR_String parse_tree__prog_io_dcg__HeadVar__1_1,
#line 172 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__2_2,
#line 172 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_3,
#line 172 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__4_4,
#line 172 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_5,
#line 172 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6,
#line 172 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7,
#line 172 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8,
#line 172 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9,
#line 172 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__10_10,
#line 172 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__11_11);

#line 130 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0_1(
#line 130 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 130 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 130 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 111 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(
#line 111 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_10,
#line 111 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_11,
#line 111 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_12,
#line 111 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_28,
#line 111 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_29,
#line 111 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_30,
#line 111 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_31,
#line 111 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_32,
#line 111 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Var_33);

#line 97 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__new_dcg_var_5_p_0(
#line 97 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_12,
#line 97 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_13,
#line 97 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_14,
#line 97 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_15,
#line 97 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__DCG_0_Var_8);

#line 684 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0_1(
#line 684 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 684 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 684 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_1[9][2];

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_2[9][3];

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_3[3][5];

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

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_expr_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_3[0])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_3[1])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_3[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_3[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_3[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_3[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_3[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_3[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_3[3][5] = {
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



#line 649 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 657 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 665 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 673 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 664 "prog_io_dcg.m"
static MR_bool MR_CALL 
parse_tree__prog_io_dcg__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
#line 664 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__List0_4,
#line 664 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_5,
#line 664 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__List_6)
#line 664 "prog_io_dcg.m"
{
#line 670 "prog_io_dcg.m"
  {
#line 670 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__List0_4)) == (MR_mktag((MR_Integer) 0)));
#line 668 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_12_12;
#line 668 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__V_13_13;
#line 668 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_14_14;
#line 668 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg___Context_7;

#line 668 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 668 "prog_io_dcg.m"
      {
#line 668 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 0)));
#line 668 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 1)));
#line 668 "prog_io_dcg.m"
        parse_tree__prog_io_dcg___Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 2)));
#line 668 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 668 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 668 "prog_io_dcg.m"
          {
#line 668 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_12_12)) == (MR_mktag((MR_Integer) 0)));
#line 668 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 668 "prog_io_dcg.m"
              {
#line 668 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_12_12, (MR_Integer) 0)));
#line 668 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_13_13, (MR_String) "[]") == 0);
#line 668 "prog_io_dcg.m"
              }
#line 668 "prog_io_dcg.m"
          }
#line 668 "prog_io_dcg.m"
      }
#line 670 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 669 "prog_io_dcg.m"
      {
#line 669 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__List_6 = parse_tree__prog_io_dcg__Term_5;
#line 669 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 669 "prog_io_dcg.m"
      }
#line 670 "prog_io_dcg.m"
    else
#line 671 "prog_io_dcg.m"
      {
#line 671 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Head_8;
#line 671 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Tail0_9;
#line 671 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Context_10;
#line 671 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Tail_11;
#line 671 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_15_15;
#line 671 "prog_io_dcg.m"
        MR_String parse_tree__prog_io_dcg__V_16_16;
#line 671 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_17_17;
#line 671 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_18_18;
#line 671 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_19_19;
#line 671 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_22_22;
#line 671 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_23_23;
#line 671 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_24_24;

#line 671 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__List0_4)) == (MR_mktag((MR_Integer) 0)));
#line 671 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 671 "prog_io_dcg.m"
          {
#line 671 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 0)));
#line 671 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 1)));
#line 671 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 2)));
#line 671 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_15_15)) == (MR_mktag((MR_Integer) 0)));
#line 671 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 671 "prog_io_dcg.m"
              {
#line 671 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_15_15, (MR_Integer) 0)));
#line 671 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_16_16, (MR_String) "[|]") == 0);
#line 671 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 671 "prog_io_dcg.m"
                  {
#line 671 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 671 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 671 "prog_io_dcg.m"
                      {
#line 671 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Head_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_17_17, (MR_Integer) 0)));
#line 671 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_17_17, (MR_Integer) 1)));
#line 671 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 671 "prog_io_dcg.m"
                        if (parse_tree__prog_io_dcg__succeeded)
#line 671 "prog_io_dcg.m"
                          {
#line 671 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__Tail0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_18_18, (MR_Integer) 0)));
#line 671 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_18_18, (MR_Integer) 1)));
#line 671 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 671 "prog_io_dcg.m"
                            if (parse_tree__prog_io_dcg__succeeded)
#line 671 "prog_io_dcg.m"
                              {
#line 672 "prog_io_dcg.m"
                                {
#line 672 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__succeeded = parse_tree__prog_io_dcg__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_dcg__Tail0_9, parse_tree__prog_io_dcg__Term_5, &parse_tree__prog_io_dcg__Tail_11);
                                }
#line 671 "prog_io_dcg.m"
                                if (parse_tree__prog_io_dcg__succeeded)
#line 671 "prog_io_dcg.m"
                                  {
#line 673 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 673 "prog_io_dcg.m"
                                    {
#line 673 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 673 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_23_23, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Tail_11));
#line 673 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_24_24));
#line 673 "prog_io_dcg.m"
                                    }
#line 673 "prog_io_dcg.m"
                                    {
#line 673 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 673 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_22_22, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Head_8));
#line 673 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_22_22, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_23_23));
#line 673 "prog_io_dcg.m"
                                    }
#line 673 "prog_io_dcg.m"
                                    {
#line 673 "prog_io_dcg.m"
                                      MR_Word base;
#line 673 "prog_io_dcg.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 673 "prog_io_dcg.m"
                                      *parse_tree__prog_io_dcg__List_6 = base;
#line 673 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_15_15));
#line 673 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_22_22));
#line 673 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Context_10));
#line 673 "prog_io_dcg.m"
                                    }
#line 673 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 671 "prog_io_dcg.m"
                                  }
#line 671 "prog_io_dcg.m"
                              }
#line 671 "prog_io_dcg.m"
                          }
#line 671 "prog_io_dcg.m"
                      }
#line 671 "prog_io_dcg.m"
                  }
#line 671 "prog_io_dcg.m"
              }
#line 671 "prog_io_dcg.m"
          }
#line 671 "prog_io_dcg.m"
      }
#line 670 "prog_io_dcg.m"
    return parse_tree__prog_io_dcg__succeeded;
#line 670 "prog_io_dcg.m"
  }
#line 664 "prog_io_dcg.m"
}

#line 684 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__process_dcg_clause__684__1_2_p_0(
#line 684 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_32,
#line 684 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_33)
#line 684 "prog_io_dcg.m"
{
#line 684 "prog_io_dcg.m"
  {
#line 684 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 684 "prog_io_dcg.m"
    {
#line 684 "prog_io_dcg.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_32, parse_tree__prog_io_dcg__HeadVar__2_33);
#line 684 "prog_io_dcg.m"
      return;
    }
#line 684 "prog_io_dcg.m"
  }
#line 684 "prog_io_dcg.m"
}

#line 539 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__539__1_2_p_0(
#line 539 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_57,
#line 539 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_58)
#line 539 "prog_io_dcg.m"
{
#line 539 "prog_io_dcg.m"
  {
#line 539 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 539 "prog_io_dcg.m"
    {
#line 539 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_57, parse_tree__prog_io_dcg__HeadVar__2_58);
#line 539 "prog_io_dcg.m"
      return;
    }
#line 539 "prog_io_dcg.m"
  }
#line 539 "prog_io_dcg.m"
}

#line 538 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__538__1_2_p_0(
#line 538 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_51,
#line 538 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_52)
#line 538 "prog_io_dcg.m"
{
#line 538 "prog_io_dcg.m"
  {
#line 538 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 538 "prog_io_dcg.m"
    {
#line 538 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_51, parse_tree__prog_io_dcg__HeadVar__2_52);
#line 538 "prog_io_dcg.m"
      return;
    }
#line 538 "prog_io_dcg.m"
  }
#line 538 "prog_io_dcg.m"
}

#line 445 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__445__1_2_p_0(
#line 445 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_581,
#line 445 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_582)
#line 445 "prog_io_dcg.m"
{
#line 445 "prog_io_dcg.m"
  {
#line 445 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 445 "prog_io_dcg.m"
    {
#line 445 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_581, parse_tree__prog_io_dcg__HeadVar__2_582);
#line 445 "prog_io_dcg.m"
      return;
    }
#line 445 "prog_io_dcg.m"
  }
#line 445 "prog_io_dcg.m"
}

#line 444 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__444__1_2_p_0(
#line 444 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_575,
#line 444 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_576)
#line 444 "prog_io_dcg.m"
{
#line 444 "prog_io_dcg.m"
  {
#line 444 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 444 "prog_io_dcg.m"
    {
#line 444 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_575, parse_tree__prog_io_dcg__HeadVar__2_576);
#line 444 "prog_io_dcg.m"
      return;
    }
#line 444 "prog_io_dcg.m"
  }
#line 444 "prog_io_dcg.m"
}

#line 404 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__404__1_2_p_0(
#line 404 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_566,
#line 404 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_567)
#line 404 "prog_io_dcg.m"
{
#line 404 "prog_io_dcg.m"
  {
#line 404 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 404 "prog_io_dcg.m"
    {
#line 404 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_566, parse_tree__prog_io_dcg__HeadVar__2_567);
#line 404 "prog_io_dcg.m"
      return;
    }
#line 404 "prog_io_dcg.m"
  }
#line 404 "prog_io_dcg.m"
}

#line 403 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__403__1_2_p_0(
#line 403 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_560,
#line 403 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_561)
#line 403 "prog_io_dcg.m"
{
#line 403 "prog_io_dcg.m"
  {
#line 403 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 403 "prog_io_dcg.m"
    {
#line 403 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_560, parse_tree__prog_io_dcg__HeadVar__2_561);
#line 403 "prog_io_dcg.m"
      return;
    }
#line 403 "prog_io_dcg.m"
  }
#line 403 "prog_io_dcg.m"
}

#line 130 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal__130__1_2_p_0(
#line 130 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_66,
#line 130 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_67)
#line 130 "prog_io_dcg.m"
{
#line 130 "prog_io_dcg.m"
  {
#line 130 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 130 "prog_io_dcg.m"
    {
#line 130 "prog_io_dcg.m"
      mercury__term__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_dcg__HeadVar__1_66, parse_tree__prog_io_dcg__HeadVar__2_67);
#line 130 "prog_io_dcg.m"
      return;
    }
#line 130 "prog_io_dcg.m"
  }
#line 130 "prog_io_dcg.m"
}

#line 600 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_if_then_else_12_p_0(
#line 600 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__CondTerm_13,
#line 600 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ThenTerm_14,
#line 600 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ElseTerm_15,
#line 600 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_16,
#line 600 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_17,
#line 600 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_18,
#line 600 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_40,
#line 600 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_41,
#line 600 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_42,
#line 600 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_43,
#line 600 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Var0_21,
#line 600 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Var_22)
#line 600 "prog_io_dcg.m"
{
#line 606 "prog_io_dcg.m"
  {
#line 606 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 606 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeVarsCond_23;
#line 606 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeThen1_24;
#line 606 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__VarThen_25;
#line 606 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeElse1_26;
#line 606 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__VarElse_27;
#line 606 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_44_44;
#line 606 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_45_45;
#line 651 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Vars_28;
#line 651 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__StateVars_29;
#line 651 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Cond_30;
#line 651 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Then1_31;
#line 651 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Else1_32;

#line 607 "prog_io_dcg.m"
    {
#line 607 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_if_then_12_p_0(parse_tree__prog_io_dcg__CondTerm_13, parse_tree__prog_io_dcg__ThenTerm_14, parse_tree__prog_io_dcg__Context_16, parse_tree__prog_io_dcg__ContextPieces_17, &parse_tree__prog_io_dcg__MaybeVarsCond_23, &parse_tree__prog_io_dcg__MaybeThen1_24, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_40, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_44_44, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_42, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_45_45, parse_tree__prog_io_dcg__Var0_21, &parse_tree__prog_io_dcg__VarThen_25);
    }
#line 609 "prog_io_dcg.m"
    {
#line 609 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ElseTerm_15, parse_tree__prog_io_dcg__ContextPieces_17, &parse_tree__prog_io_dcg__MaybeElse1_26, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_44_44, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_41, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_45_45, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_43, parse_tree__prog_io_dcg__Var0_21, &parse_tree__prog_io_dcg__VarElse_27);
    }
#line 612 "prog_io_dcg.m"
    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeVarsCond_23)) == (MR_mktag((MR_Integer) 1)));
#line 612 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 612 "prog_io_dcg.m"
      {
#line 612 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__Vars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_23, (MR_Integer) 0)));
#line 612 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__StateVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_23, (MR_Integer) 1)));
#line 612 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__Cond_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_23, (MR_Integer) 2)));
#line 613 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeThen1_24)) == (MR_mktag((MR_Integer) 1)));
#line 613 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 613 "prog_io_dcg.m"
          {
#line 613 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Then1_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeThen1_24, (MR_Integer) 0)));
#line 614 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeElse1_26)) == (MR_mktag((MR_Integer) 1)));
#line 614 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 614 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__Else1_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeElse1_26, (MR_Integer) 0)));
#line 613 "prog_io_dcg.m"
          }
#line 612 "prog_io_dcg.m"
      }
#line 651 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 647 "prog_io_dcg.m"
      {
#line 647 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Then_33;
#line 647 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Else_34;
#line 647 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Goal_36;
#line 647 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_58_58;
#line 616 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_67_67;

#line 616 "prog_io_dcg.m"
        {
#line 616 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__VarThen_25)), ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)));
        }
#line 616 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 616 "prog_io_dcg.m"
          {
#line 1230 "parse_tree.prog_io_dcg.c"
            parse_tree__prog_io_dcg__TypeInfo_67_67 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 616 "prog_io_dcg.m"
            {
#line 616 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_dcg__TypeInfo_67_67, ((MR_Box) (parse_tree__prog_io_dcg__VarElse_27)), ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)));
            }
#line 616 "prog_io_dcg.m"
          }
#line 620 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 617 "prog_io_dcg.m"
          {
#line 617 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__Var0_21;
#line 618 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Then_33 = parse_tree__prog_io_dcg__Then1_31;
#line 619 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Else_34 = parse_tree__prog_io_dcg__Else1_32;
#line 617 "prog_io_dcg.m"
          }
#line 620 "prog_io_dcg.m"
        else
#line 627 "prog_io_dcg.m"
          {
#line 620 "prog_io_dcg.m"
            {
#line 620 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__VarThen_25)), ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)));
            }
#line 627 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 621 "prog_io_dcg.m"
              {
#line 621 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__Unify_35;
#line 621 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_48_48;
#line 621 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_49_49;
#line 621 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_51_51;
#line 621 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_52_52;

#line 621 "prog_io_dcg.m"
                *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__VarElse_27;
#line 623 "prog_io_dcg.m"
                {
#line 623 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 623 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_48_48, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__Var_22));
#line 623 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_48_48, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 623 "prog_io_dcg.m"
                }
#line 623 "prog_io_dcg.m"
                {
#line 623 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 623 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_dcg__VarThen_25));
#line 623 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_49_49, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 623 "prog_io_dcg.m"
                }
#line 622 "prog_io_dcg.m"
                {
#line 622 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__Unify_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 622 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 622 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_35, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_48_48));
#line 622 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_35, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_49_49));
#line 622 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_35, 3) = ((MR_Box) ((MR_Integer) 0));
#line 622 "prog_io_dcg.m"
                }
#line 625 "prog_io_dcg.m"
                {
#line 625 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 625 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Unify_35));
#line 625 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_52_52, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 625 "prog_io_dcg.m"
                }
#line 625 "prog_io_dcg.m"
                {
#line 625 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Then1_31));
#line 625 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_51_51, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_52_52));
#line 625 "prog_io_dcg.m"
                }
#line 625 "prog_io_dcg.m"
                {
#line 625 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__Then_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 625 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Then_33, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_51_51));
#line 625 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Then_33, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 625 "prog_io_dcg.m"
                }
#line 626 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__Else_34 = parse_tree__prog_io_dcg__Else1_32;
#line 621 "prog_io_dcg.m"
              }
#line 627 "prog_io_dcg.m"
            else
#line 634 "prog_io_dcg.m"
              {
#line 627 "prog_io_dcg.m"
                {
#line 627 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__VarElse_27)), ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)));
                }
#line 634 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 628 "prog_io_dcg.m"
                  {
#line 628 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__V_53_53;
#line 628 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__V_54_54;
#line 628 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__V_56_56;
#line 628 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__V_57_57;
#line 628 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__Unify_61;

#line 628 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__VarThen_25;
#line 629 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Then_33 = parse_tree__prog_io_dcg__Then1_31;
#line 631 "prog_io_dcg.m"
                    {
#line 631 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_53_53, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__Var_22));
#line 631 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 631 "prog_io_dcg.m"
                    }
#line 631 "prog_io_dcg.m"
                    {
#line 631 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_dcg__VarElse_27));
#line 631 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 631 "prog_io_dcg.m"
                    }
#line 630 "prog_io_dcg.m"
                    {
#line 630 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__Unify_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 630 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 630 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_61, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_53_53));
#line 630 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_61, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_54_54));
#line 630 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_61, 3) = ((MR_Box) ((MR_Integer) 0));
#line 630 "prog_io_dcg.m"
                    }
#line 633 "prog_io_dcg.m"
                    {
#line 633 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 633 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Unify_61));
#line 633 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 633 "prog_io_dcg.m"
                    }
#line 633 "prog_io_dcg.m"
                    {
#line 633 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Else1_32));
#line 633 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_57_57));
#line 633 "prog_io_dcg.m"
                    }
#line 633 "prog_io_dcg.m"
                    {
#line 633 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__Else_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 633 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Else_34, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_56_56));
#line 633 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Else_34, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 633 "prog_io_dcg.m"
                    }
#line 628 "prog_io_dcg.m"
                  }
#line 634 "prog_io_dcg.m"
                else
#line 644 "prog_io_dcg.m"
                  {
#line 644 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__VarElse_27;
#line 645 "prog_io_dcg.m"
                    {
#line 645 "prog_io_dcg.m"
                      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_io_dcg__VarThen_25, parse_tree__prog_io_dcg__VarElse_27, parse_tree__prog_io_dcg__Then1_31, &parse_tree__prog_io_dcg__Then_33);
                    }
#line 646 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Else_34 = parse_tree__prog_io_dcg__Else1_32;
#line 644 "prog_io_dcg.m"
                  }
#line 634 "prog_io_dcg.m"
              }
#line 627 "prog_io_dcg.m"
          }
#line 648 "prog_io_dcg.m"
        {
#line 648 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 648 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 648 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_28));
#line 648 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_58_58, 2) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_29));
#line 648 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_58_58, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Cond_30));
#line 648 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_58_58, 4) = ((MR_Box) (parse_tree__prog_io_dcg__Then_33));
#line 648 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_58_58, 5) = ((MR_Box) (parse_tree__prog_io_dcg__Else_34));
#line 648 "prog_io_dcg.m"
        }
#line 649 "prog_io_dcg.m"
        {
#line 649 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__Goal_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 649 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_36, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_58_58));
#line 649 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_36, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 649 "prog_io_dcg.m"
        }
#line 650 "prog_io_dcg.m"
        {
#line 650 "prog_io_dcg.m"
          MR_Word base;
#line 650 "prog_io_dcg.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 650 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeGoal_18 = base;
#line 650 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_36));
#line 650 "prog_io_dcg.m"
        }
#line 647 "prog_io_dcg.m"
      }
#line 651 "prog_io_dcg.m"
    else
#line 652 "prog_io_dcg.m"
      {
#line 652 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_63_63 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3];
#line 652 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_64_64 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[0];
#line 652 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_65_65;
#line 652 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__CondSpecs_37;
#line 652 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__ThenSpecs_38;
#line 652 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__ElseSpecs_39;
#line 652 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_59_59;
#line 652 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_60_60;

#line 652 "prog_io_dcg.m"
        {
#line 652 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__CondSpecs_37 = parse_tree__prog_io_util__get_any_errors3_1_f_0(parse_tree__prog_io_dcg__TypeInfo_63_63, parse_tree__prog_io_dcg__TypeInfo_63_63, parse_tree__prog_io_dcg__TypeInfo_64_64, parse_tree__prog_io_dcg__MaybeVarsCond_23);
        }
#line 653 "prog_io_dcg.m"
        {
#line 653 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__ThenSpecs_38 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeInfo_64_64, parse_tree__prog_io_dcg__MaybeThen1_24);
        }
#line 654 "prog_io_dcg.m"
        {
#line 654 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__ElseSpecs_39 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeInfo_64_64, parse_tree__prog_io_dcg__MaybeElse1_26);
        }
#line 1536 "parse_tree.prog_io_dcg.c"
        parse_tree__prog_io_dcg__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 655 "prog_io_dcg.m"
        {
#line 655 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_60_60 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_65_65, parse_tree__prog_io_dcg__ThenSpecs_38, parse_tree__prog_io_dcg__ElseSpecs_39);
        }
#line 655 "prog_io_dcg.m"
        {
#line 655 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_59_59 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_65_65, parse_tree__prog_io_dcg__CondSpecs_37, parse_tree__prog_io_dcg__V_60_60);
        }
#line 655 "prog_io_dcg.m"
        {
#line 655 "prog_io_dcg.m"
          MR_Word base;
#line 655 "prog_io_dcg.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 655 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeGoal_18 = base;
#line 655 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_59_59));
#line 655 "prog_io_dcg.m"
        }
#line 656 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__Var0_21;
#line 652 "prog_io_dcg.m"
      }
#line 606 "prog_io_dcg.m"
  }
#line 600 "prog_io_dcg.m"
}

#line 566 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_if_then_12_p_0(
#line 566 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__CondTerm_13,
#line 566 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ThenTerm_14,
#line 566 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_15,
#line 566 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_16,
#line 566 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeVarsCond_17,
#line 566 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeThen_18,
#line 566 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
#line 566 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
#line 566 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
#line 566 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
#line 566 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Var0_21,
#line 566 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Var_22)
#line 566 "prog_io_dcg.m"
{
#line 573 "prog_io_dcg.m"
  {
#line 573 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 573 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Var1_23;
#line 573 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeThen1_24;
#line 573 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Var2_25;
#line 573 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_34_34;
#line 573 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_35_35;
#line 573 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36;
#line 573 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37;
#line 579 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeInfo_46_46;

#line 574 "prog_io_dcg.m"
    {
#line 574 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0(parse_tree__prog_io_dcg__CondTerm_13, parse_tree__prog_io_dcg__ContextPieces_16, parse_tree__prog_io_dcg__MaybeVarsCond_17, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_34_34, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_35_35, parse_tree__prog_io_dcg__Var0_21, &parse_tree__prog_io_dcg__Var1_23);
    }
#line 576 "prog_io_dcg.m"
    {
#line 576 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ThenTerm_14, parse_tree__prog_io_dcg__ContextPieces_16, &parse_tree__prog_io_dcg__MaybeThen1_24, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_34_34, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_35_35, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37, parse_tree__prog_io_dcg__Var1_23, &parse_tree__prog_io_dcg__Var2_25);
    }
#line 579 "prog_io_dcg.m"
    {
#line 579 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)), ((MR_Box) (parse_tree__prog_io_dcg__Var1_23)));
    }
#line 579 "prog_io_dcg.m"
    parse_tree__prog_io_dcg__succeeded = !(parse_tree__prog_io_dcg__succeeded);
#line 579 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 579 "prog_io_dcg.m"
      {
#line 1640 "parse_tree.prog_io_dcg.c"
        parse_tree__prog_io_dcg__TypeInfo_46_46 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 580 "prog_io_dcg.m"
        {
#line 580 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_dcg__TypeInfo_46_46, ((MR_Box) (parse_tree__prog_io_dcg__Var1_23)), ((MR_Box) (parse_tree__prog_io_dcg__Var2_25)));
        }
#line 579 "prog_io_dcg.m"
      }
#line 595 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 590 "prog_io_dcg.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeThen1_24)) == (MR_mktag((MR_Integer) 0))))
#line 591 "prog_io_dcg.m"
        {
#line 592 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeThen_18 = parse_tree__prog_io_dcg__MaybeThen1_24;
#line 593 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__Var2_25;
#line 593 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36;
#line 593 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37;
#line 591 "prog_io_dcg.m"
        }
#line 590 "prog_io_dcg.m"
      else
#line 583 "prog_io_dcg.m"
        {
#line 583 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_61;
#line 583 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__Then1_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeThen1_24, (MR_Integer) 0)));
#line 583 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__Unify_27;
#line 583 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__Then_28;
#line 583 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__V_40_40;
#line 583 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__V_41_41;
#line 583 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__V_43_43;
#line 583 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__V_44_44;
#line 583 "prog_io_dcg.m"
          MR_Integer parse_tree__prog_io_dcg__N_54;
#line 583 "prog_io_dcg.m"
          MR_String parse_tree__prog_io_dcg__StringN_55;
#line 583 "prog_io_dcg.m"
          MR_String parse_tree__prog_io_dcg__VarName_56;
#line 583 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_59;

#line 101 "prog_io_dcg.m"
          {
#line 101 "prog_io_dcg.m"
            mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_54, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33);
          }
#line 102 "prog_io_dcg.m"
          {
#line 102 "prog_io_dcg.m"
            mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_54, &parse_tree__prog_io_dcg__StringN_55);
          }
#line 103 "prog_io_dcg.m"
          {
#line 103 "prog_io_dcg.m"
            mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_55, &parse_tree__prog_io_dcg__VarName_56);
          }
#line 1709 "parse_tree.prog_io_dcg.c"
          parse_tree__prog_io_dcg__TypeCtorInfo_20_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 104 "prog_io_dcg.m"
          {
#line 104 "prog_io_dcg.m"
            mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_61, parse_tree__prog_io_dcg__Var_22, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_59);
          }
#line 105 "prog_io_dcg.m"
          {
#line 105 "prog_io_dcg.m"
            mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_61, *parse_tree__prog_io_dcg__Var_22, parse_tree__prog_io_dcg__VarName_56, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_59, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31);
          }
#line 586 "prog_io_dcg.m"
          {
#line 586 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 586 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__Var_22));
#line 586 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_15));
#line 586 "prog_io_dcg.m"
          }
#line 586 "prog_io_dcg.m"
          {
#line 586 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 586 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Var2_25));
#line 586 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_41_41, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_15));
#line 586 "prog_io_dcg.m"
          }
#line 585 "prog_io_dcg.m"
          {
#line 585 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Unify_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 585 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 585 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_27, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_40_40));
#line 585 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_27, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_41_41));
#line 585 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_27, 3) = ((MR_Box) ((MR_Integer) 0));
#line 585 "prog_io_dcg.m"
          }
#line 588 "prog_io_dcg.m"
          {
#line 588 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 588 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Unify_27));
#line 588 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_44_44, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_15));
#line 588 "prog_io_dcg.m"
          }
#line 588 "prog_io_dcg.m"
          {
#line 588 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Then1_26));
#line 588 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_43_43, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_44_44));
#line 588 "prog_io_dcg.m"
          }
#line 588 "prog_io_dcg.m"
          {
#line 588 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Then_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 588 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Then_28, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_43_43));
#line 588 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Then_28, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_15));
#line 588 "prog_io_dcg.m"
          }
#line 589 "prog_io_dcg.m"
          {
#line 589 "prog_io_dcg.m"
            MR_Word base;
#line 589 "prog_io_dcg.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 589 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__MaybeThen_18 = base;
#line 589 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Then_28));
#line 589 "prog_io_dcg.m"
          }
#line 583 "prog_io_dcg.m"
        }
#line 595 "prog_io_dcg.m"
    else
#line 596 "prog_io_dcg.m"
      {
#line 596 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__MaybeThen_18 = parse_tree__prog_io_dcg__MaybeThen1_24;
#line 597 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__Var2_25;
#line 597 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37;
#line 597 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36;
#line 596 "prog_io_dcg.m"
      }
#line 573 "prog_io_dcg.m"
  }
#line 566 "prog_io_dcg.m"
}

#line 539 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_2(
#line 539 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 539 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 539 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 539 "prog_io_dcg.m"
{
#line 539 "prog_io_dcg.m"
  {
#line 539 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 539 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv1_HeadVar__2_58;

#line 539 "prog_io_dcg.m"
    {
#line 539 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__539__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv1_HeadVar__2_58);
    }
#line 539 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv1_HeadVar__2_58));
#line 539 "prog_io_dcg.m"
  }
#line 539 "prog_io_dcg.m"
}

#line 538 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_1(
#line 538 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 538 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 538 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 538 "prog_io_dcg.m"
{
#line 538 "prog_io_dcg.m"
  {
#line 538 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 538 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv0_HeadVar__2_52;

#line 538 "prog_io_dcg.m"
    {
#line 538 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__538__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv0_HeadVar__2_52);
    }
#line 538 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv0_HeadVar__2_52));
#line 538 "prog_io_dcg.m"
  }
#line 538 "prog_io_dcg.m"
}

#line 515 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0(
#line 515 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_10,
#line 515 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_11,
#line 515 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeVarsGoal_12,
#line 515 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
#line 515 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
#line 515 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
#line 515 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
#line 515 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_34,
#line 515 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Var_35)
#line 515 "prog_io_dcg.m"
{
#line 521 "prog_io_dcg.m"
  {
#line 521 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Term_10)) == (MR_mktag((MR_Integer) 0)));
#line 521 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeVars_20;
#line 521 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__GoalTerm_21;
#line 521 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeGoal_22;
#line 528 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__VarsTerm_16;
#line 528 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__SubTerm_17;
#line 522 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_36_36;
#line 522 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__V_37_37;
#line 522 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_38_38;
#line 522 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_39_39;
#line 522 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_40_40;
#line 522 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg___Context_18;
#line 541 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Vars0_23;
#line 541 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__StateVars0_24;
#line 541 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Goal_25;

#line 522 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 522 "prog_io_dcg.m"
      {
#line 522 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 0)));
#line 522 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 1)));
#line 522 "prog_io_dcg.m"
        parse_tree__prog_io_dcg___Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 2)));
#line 522 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 522 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 522 "prog_io_dcg.m"
          {
#line 522 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_36_36, (MR_Integer) 0)));
#line 522 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_37_37, (MR_String) "some") == 0);
#line 522 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 522 "prog_io_dcg.m"
              {
#line 522 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 522 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 522 "prog_io_dcg.m"
                  {
#line 522 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__VarsTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_38_38, (MR_Integer) 0)));
#line 522 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_38_38, (MR_Integer) 1)));
#line 522 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 522 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 522 "prog_io_dcg.m"
                      {
#line 522 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__SubTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_39_39, (MR_Integer) 0)));
#line 522 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_39_39, (MR_Integer) 1)));
#line 522 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 522 "prog_io_dcg.m"
                      }
#line 522 "prog_io_dcg.m"
                  }
#line 522 "prog_io_dcg.m"
              }
#line 522 "prog_io_dcg.m"
          }
#line 522 "prog_io_dcg.m"
      }
#line 528 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 524 "prog_io_dcg.m"
      {
#line 524 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_50_50 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 524 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__GenericVarSet_19;

#line 524 "prog_io_dcg.m"
        {
#line 524 "prog_io_dcg.m"
          mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__TypeCtorInfo_50_50, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30, &parse_tree__prog_io_dcg__GenericVarSet_19);
        }
#line 525 "prog_io_dcg.m"
        {
#line 525 "prog_io_dcg.m"
          parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_50_50, parse_tree__prog_io_dcg__VarsTerm_16, parse_tree__prog_io_dcg__GenericVarSet_19, parse_tree__prog_io_dcg__ContextPieces_11, &parse_tree__prog_io_dcg__MaybeVars_20);
        }
#line 527 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__GoalTerm_21 = parse_tree__prog_io_dcg__SubTerm_17;
#line 524 "prog_io_dcg.m"
      }
#line 528 "prog_io_dcg.m"
    else
#line 529 "prog_io_dcg.m"
      {
#line 529 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__MaybeVars_20 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[8]);
#line 530 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__GoalTerm_21 = parse_tree__prog_io_dcg__Term_10;
#line 529 "prog_io_dcg.m"
      }
#line 532 "prog_io_dcg.m"
    {
#line 532 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__GoalTerm_21, parse_tree__prog_io_dcg__ContextPieces_11, &parse_tree__prog_io_dcg__MaybeGoal_22, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_34, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_35);
    }
#line 535 "prog_io_dcg.m"
    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeVars_20)) == (MR_mktag((MR_Integer) 1)));
#line 535 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 535 "prog_io_dcg.m"
      {
#line 535 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__Vars0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVars_20, (MR_Integer) 0)));
#line 535 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__StateVars0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVars_20, (MR_Integer) 1)));
#line 536 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal_22)) == (MR_mktag((MR_Integer) 1)));
#line 536 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 536 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__Goal_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal_22, (MR_Integer) 0)));
#line 535 "prog_io_dcg.m"
      }
#line 541 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 538 "prog_io_dcg.m"
      {
#line 538 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_55_55 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[4];
#line 538 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_56_56 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 538 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Vars_26;
#line 538 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__StateVars_27;

#line 538 "prog_io_dcg.m"
        {
#line 538 "prog_io_dcg.m"
          mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_55_55, parse_tree__prog_io_dcg__TypeInfo_56_56, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[7], parse_tree__prog_io_dcg__Vars0_23, &parse_tree__prog_io_dcg__Vars_26);
        }
#line 539 "prog_io_dcg.m"
        {
#line 539 "prog_io_dcg.m"
          mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_55_55, parse_tree__prog_io_dcg__TypeInfo_56_56, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[8], parse_tree__prog_io_dcg__StateVars0_24, &parse_tree__prog_io_dcg__StateVars_27);
        }
#line 540 "prog_io_dcg.m"
        {
#line 540 "prog_io_dcg.m"
          MR_Word base;
#line 540 "prog_io_dcg.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 540 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeVarsGoal_12 = base;
#line 540 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_26));
#line 540 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_27));
#line 540 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_25));
#line 540 "prog_io_dcg.m"
        }
#line 538 "prog_io_dcg.m"
      }
#line 541 "prog_io_dcg.m"
    else
#line 542 "prog_io_dcg.m"
      {
#line 542 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_61_61 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[5];
#line 542 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__VarsSpecs_28;
#line 542 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__GoalSpecs_29;
#line 542 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_48_48;

#line 542 "prog_io_dcg.m"
        {
#line 542 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__VarsSpecs_28 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_dcg__TypeInfo_61_61, parse_tree__prog_io_dcg__TypeInfo_61_61, parse_tree__prog_io_dcg__MaybeVars_20);
        }
#line 543 "prog_io_dcg.m"
        {
#line 543 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__GoalSpecs_29 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[0], parse_tree__prog_io_dcg__MaybeGoal_22);
        }
#line 544 "prog_io_dcg.m"
        {
#line 544 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_48_48 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__VarsSpecs_28, parse_tree__prog_io_dcg__GoalSpecs_29);
        }
#line 544 "prog_io_dcg.m"
        {
#line 544 "prog_io_dcg.m"
          MR_Word base;
#line 544 "prog_io_dcg.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 544 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeVarsGoal_12 = base;
#line 544 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_48_48));
#line 544 "prog_io_dcg.m"
        }
#line 542 "prog_io_dcg.m"
      }
#line 521 "prog_io_dcg.m"
  }
#line 515 "prog_io_dcg.m"
}

#line 503 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(
#line 503 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Disjunct0_5,
#line 503 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Goal_6,
#line 503 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_7,
#line 503 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Disjunct_8)
#line 503 "prog_io_dcg.m"
{
#line 511 "prog_io_dcg.m"
  {
#line 511 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 511 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__A0_9;
#line 511 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__B0_10;
#line 511 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Context2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Disjunct0_5, (MR_Integer) 1)));
#line 507 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Disjunct0_5, (MR_Integer) 0)));

#line 507 "prog_io_dcg.m"
    parse_tree__prog_io_dcg__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_14_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_14_14, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 507 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 507 "prog_io_dcg.m"
      {
#line 507 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__A0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_14_14, (MR_Integer) 1)));
#line 507 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__B0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_14_14, (MR_Integer) 2)));
#line 508 "prog_io_dcg.m"
        {
#line 508 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__A_12;
#line 508 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__B_13;
#line 508 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__V_15_15;

#line 508 "prog_io_dcg.m"
          {
#line 508 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(parse_tree__prog_io_dcg__A0_9, parse_tree__prog_io_dcg__Goal_6, parse_tree__prog_io_dcg__Context_7, &parse_tree__prog_io_dcg__A_12);
          }
#line 509 "prog_io_dcg.m"
          {
#line 509 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(parse_tree__prog_io_dcg__B0_10, parse_tree__prog_io_dcg__Goal_6, parse_tree__prog_io_dcg__Context_7, &parse_tree__prog_io_dcg__B_13);
          }
#line 510 "prog_io_dcg.m"
          {
#line 510 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 510 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 510 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_15_15, 1) = ((MR_Box) (parse_tree__prog_io_dcg__A_12));
#line 510 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_15_15, 2) = ((MR_Box) (parse_tree__prog_io_dcg__B_13));
#line 510 "prog_io_dcg.m"
          }
#line 510 "prog_io_dcg.m"
          {
#line 510 "prog_io_dcg.m"
            MR_Word base;
#line 510 "prog_io_dcg.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 510 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__Disjunct_8 = base;
#line 510 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_15_15));
#line 510 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context2_11));
#line 510 "prog_io_dcg.m"
          }
#line 508 "prog_io_dcg.m"
        }
#line 507 "prog_io_dcg.m"
      }
#line 507 "prog_io_dcg.m"
    else
#line 512 "prog_io_dcg.m"
      {
#line 512 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_16_16;
#line 512 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_17_17;

#line 512 "prog_io_dcg.m"
        {
#line 512 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 512 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_6));
#line 512 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_7));
#line 512 "prog_io_dcg.m"
        }
#line 512 "prog_io_dcg.m"
        {
#line 512 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_16_16, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Disjunct0_5));
#line 512 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_16_16, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_17_17));
#line 512 "prog_io_dcg.m"
        }
#line 512 "prog_io_dcg.m"
        {
#line 512 "prog_io_dcg.m"
          MR_Word base;
#line 512 "prog_io_dcg.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 512 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__Disjunct_8 = base;
#line 512 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_16_16));
#line 512 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_7));
#line 512 "prog_io_dcg.m"
        }
#line 512 "prog_io_dcg.m"
      }
#line 511 "prog_io_dcg.m"
  }
#line 503 "prog_io_dcg.m"
}

#line 473 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_with_purity_10_p_0(
#line 473 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__G_11,
#line 473 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Purity_12,
#line 473 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_13,
#line 473 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_14,
#line 473 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
#line 473 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
#line 473 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
#line 473 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
#line 473 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_34,
#line 473 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Var_35)
#line 473 "prog_io_dcg.m"
{
#line 479 "prog_io_dcg.m"
  {
#line 479 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 479 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeGoal1_18;

#line 480 "prog_io_dcg.m"
    {
#line 480 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__G_11, parse_tree__prog_io_dcg__ContextPieces_13, &parse_tree__prog_io_dcg__MaybeGoal1_18, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_34, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_35);
    }
#line 498 "prog_io_dcg.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal1_18)) == (MR_mktag((MR_Integer) 0))))
#line 500 "prog_io_dcg.m"
      *parse_tree__prog_io_dcg__MaybeGoal_14 = parse_tree__prog_io_dcg__MaybeGoal1_18;
#line 498 "prog_io_dcg.m"
    else
#line 482 "prog_io_dcg.m"
      {
#line 482 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Goal1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal1_18, (MR_Integer) 0)));
#line 482 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Goal_23;
#line 485 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Pred_20;
#line 485 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Args_21;
#line 485 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Context_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal1_19, (MR_Integer) 1)));
#line 483 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal1_19, (MR_Integer) 0)));
#line 483 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_40_40;

#line 483 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_39_39)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_39_39, (MR_Integer) 0)))) == (MR_Integer) 19)));
#line 483 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 483 "prog_io_dcg.m"
          {
#line 483 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Pred_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_39_39, (MR_Integer) 1)));
#line 483 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_39_39, (MR_Integer) 2)));
#line 483 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_39_39, (MR_Integer) 3)));
#line 483 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_40_40 == (MR_Integer) 0);
#line 483 "prog_io_dcg.m"
          }
#line 485 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 484 "prog_io_dcg.m"
          {
#line 484 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_41_41;

#line 484 "prog_io_dcg.m"
            {
#line 484 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 484 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 484 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_41_41, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Pred_20));
#line 484 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_41_41, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Args_21));
#line 484 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_41_41, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Purity_12));
#line 484 "prog_io_dcg.m"
            }
#line 484 "prog_io_dcg.m"
            {
#line 484 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__Goal_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 484 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_23, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_41_41));
#line 484 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_23, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_22));
#line 484 "prog_io_dcg.m"
            }
#line 484 "prog_io_dcg.m"
          }
#line 485 "prog_io_dcg.m"
        else
#line 487 "prog_io_dcg.m"
          {
#line 487 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__ProgTerm1_24;
#line 487 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__ProgTerm2_25;
#line 487 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Context_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal1_19, (MR_Integer) 1)));
#line 485 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal1_19, (MR_Integer) 0)));
#line 485 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_43_43;

#line 485 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_42_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_42_42, (MR_Integer) 0)))) == (MR_Integer) 20)));
#line 485 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 485 "prog_io_dcg.m"
              {
#line 485 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__ProgTerm1_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_42_42, (MR_Integer) 1)));
#line 485 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__ProgTerm2_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_42_42, (MR_Integer) 2)));
#line 485 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_42_42, (MR_Integer) 3)));
#line 485 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_43_43 == (MR_Integer) 0);
#line 485 "prog_io_dcg.m"
              }
#line 487 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 486 "prog_io_dcg.m"
              {
#line 486 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_44_44;

#line 486 "prog_io_dcg.m"
                {
#line 486 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 486 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 486 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_44_44, 1) = ((MR_Box) (parse_tree__prog_io_dcg__ProgTerm1_24));
#line 486 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_44_44, 2) = ((MR_Box) (parse_tree__prog_io_dcg__ProgTerm2_25));
#line 486 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_44_44, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Purity_12));
#line 486 "prog_io_dcg.m"
                }
#line 486 "prog_io_dcg.m"
                {
#line 486 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__Goal_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 486 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_23, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_44_44));
#line 486 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_23, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_51));
#line 486 "prog_io_dcg.m"
                }
#line 486 "prog_io_dcg.m"
              }
#line 487 "prog_io_dcg.m"
            else
#line 491 "prog_io_dcg.m"
              {
#line 491 "prog_io_dcg.m"
                MR_String parse_tree__prog_io_dcg__PurityString_27;
#line 491 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__G1_28;
#line 491 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_45_45;
#line 491 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_46_46;
#line 491 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_47_47;
#line 491 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__Context_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal1_19, (MR_Integer) 1)));
#line 491 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal1_19, (MR_Integer) 0)));

#line 492 "prog_io_dcg.m"
                {
#line 492 "prog_io_dcg.m"
                  parse_tree__prog_out__purity_name_2_p_0(parse_tree__prog_io_dcg__Purity_12, &parse_tree__prog_io_dcg__PurityString_27);
                }
#line 493 "prog_io_dcg.m"
                {
#line 493 "prog_io_dcg.m"
                  mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__G_11, &parse_tree__prog_io_dcg__G1_28);
                }
#line 494 "prog_io_dcg.m"
                {
#line 494 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 494 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_dcg__PurityString_27));
#line 494 "prog_io_dcg.m"
                }
#line 494 "prog_io_dcg.m"
                {
#line 494 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 494 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_dcg__G1_28));
#line 494 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 494 "prog_io_dcg.m"
                }
#line 494 "prog_io_dcg.m"
                {
#line 494 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 494 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 494 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_45_45, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_46_46));
#line 494 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_45_45, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_47_47));
#line 494 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_45_45, 3) = ((MR_Box) ((MR_Integer) 0));
#line 494 "prog_io_dcg.m"
                }
#line 495 "prog_io_dcg.m"
                {
#line 495 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__Goal_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 495 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_23, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_45_45));
#line 495 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_23, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_50));
#line 495 "prog_io_dcg.m"
                }
#line 491 "prog_io_dcg.m"
              }
#line 487 "prog_io_dcg.m"
          }
#line 497 "prog_io_dcg.m"
        {
#line 497 "prog_io_dcg.m"
          MR_Word base;
#line 497 "prog_io_dcg.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 497 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeGoal_14 = base;
#line 497 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_23));
#line 497 "prog_io_dcg.m"
        }
#line 482 "prog_io_dcg.m"
      }
#line 479 "prog_io_dcg.m"
  }
#line 473 "prog_io_dcg.m"
}

#line 445 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_4(
#line 445 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 445 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 445 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 445 "prog_io_dcg.m"
{
#line 445 "prog_io_dcg.m"
  {
#line 445 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 445 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv3_HeadVar__2_582;

#line 445 "prog_io_dcg.m"
    {
#line 445 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__445__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv3_HeadVar__2_582);
    }
#line 445 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv3_HeadVar__2_582));
#line 445 "prog_io_dcg.m"
  }
#line 445 "prog_io_dcg.m"
}

#line 444 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_3(
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
    MR_Word parse_tree__prog_io_dcg__conv2_HeadVar__2_576;

#line 444 "prog_io_dcg.m"
    {
#line 444 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__444__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv2_HeadVar__2_576);
    }
#line 444 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv2_HeadVar__2_576));
#line 444 "prog_io_dcg.m"
  }
#line 444 "prog_io_dcg.m"
}

#line 404 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_2(
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
    MR_Word parse_tree__prog_io_dcg__conv1_HeadVar__2_567;

#line 404 "prog_io_dcg.m"
    {
#line 404 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__404__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv1_HeadVar__2_567);
    }
#line 404 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv1_HeadVar__2_567));
#line 404 "prog_io_dcg.m"
  }
#line 404 "prog_io_dcg.m"
}

#line 403 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_1(
#line 403 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 403 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 403 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 403 "prog_io_dcg.m"
{
#line 403 "prog_io_dcg.m"
  {
#line 403 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 403 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv0_HeadVar__2_561;

#line 403 "prog_io_dcg.m"
    {
#line 403 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__403__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv0_HeadVar__2_561);
    }
#line 403 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv0_HeadVar__2_561));
#line 403 "prog_io_dcg.m"
  }
#line 403 "prog_io_dcg.m"
}

#line 172 "prog_io_dcg.m"
static MR_bool MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0(
#line 172 "prog_io_dcg.m"
  MR_String parse_tree__prog_io_dcg__HeadVar__1_1,
#line 172 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__2_2,
#line 172 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_3,
#line 172 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__4_4,
#line 172 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_5,
#line 172 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6,
#line 172 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7,
#line 172 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8,
#line 172 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9,
#line 172 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__10_10,
#line 172 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__11_11)
#line 172 "prog_io_dcg.m"
{
#line 179 "prog_io_dcg.m"
  {
#line 179 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 179 "prog_io_dcg.m"
    if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "&") == 0))
#line 298 "prog_io_dcg.m"
      {
#line 298 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__ATerm_290;
#line 298 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__BTerm_291;
#line 298 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__MaybeAGoal_298;
#line 298 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__MaybeBGoal_299;
#line 298 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_311_311;
#line 298 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_312_312;
#line 298 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_313_313;
#line 298 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_314_314;
#line 298 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Var_315_315;
#line 307 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__AGoal_300;
#line 307 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__BGoal_301;

#line 297 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 297 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 297 "prog_io_dcg.m"
          {
#line 297 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__ATerm_290 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 297 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 297 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_311_311)) == (MR_mktag((MR_Integer) 1)));
#line 297 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 297 "prog_io_dcg.m"
              {
#line 297 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__BTerm_291 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_311_311, (MR_Integer) 0)));
#line 297 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_311_311, (MR_Integer) 1)));
#line 297 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_312_312 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 298 "prog_io_dcg.m"
                  {
#line 299 "prog_io_dcg.m"
                    {
#line 299 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ATerm_290, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeAGoal_298, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_313_313, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_314_314, parse_tree__prog_io_dcg__HeadVar__10_10, &parse_tree__prog_io_dcg__STATE_VARIABLE_Var_315_315);
                    }
#line 300 "prog_io_dcg.m"
                    {
#line 300 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__BTerm_291, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeBGoal_299, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_313_313, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_314_314, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_315_315, parse_tree__prog_io_dcg__HeadVar__11_11);
                    }
#line 302 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeAGoal_298)) == (MR_mktag((MR_Integer) 1)));
#line 302 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 302 "prog_io_dcg.m"
                      {
#line 302 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__AGoal_300 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeAGoal_298, (MR_Integer) 0)));
#line 303 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeBGoal_299)) == (MR_mktag((MR_Integer) 1)));
#line 303 "prog_io_dcg.m"
                        if (parse_tree__prog_io_dcg__succeeded)
#line 303 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__BGoal_301 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeBGoal_299, (MR_Integer) 0)));
#line 302 "prog_io_dcg.m"
                      }
#line 307 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 305 "prog_io_dcg.m"
                      {
#line 305 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__Goal_302;
#line 305 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__V_319_319;

#line 305 "prog_io_dcg.m"
                        {
#line 305 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_319_319 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__V_319_319, 0) = ((MR_Box) (parse_tree__prog_io_dcg__AGoal_300));
#line 305 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__V_319_319, 1) = ((MR_Box) (parse_tree__prog_io_dcg__BGoal_301));
#line 305 "prog_io_dcg.m"
                        }
#line 305 "prog_io_dcg.m"
                        {
#line 305 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__Goal_302 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 305 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_302, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_319_319));
#line 305 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_302, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 305 "prog_io_dcg.m"
                        }
#line 306 "prog_io_dcg.m"
                        {
#line 306 "prog_io_dcg.m"
                          MR_Word base;
#line 306 "prog_io_dcg.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 306 "prog_io_dcg.m"
                          *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 306 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_302));
#line 306 "prog_io_dcg.m"
                        }
#line 305 "prog_io_dcg.m"
                      }
#line 307 "prog_io_dcg.m"
                    else
#line 308 "prog_io_dcg.m"
                      {
#line 308 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__TypeInfo_554_554 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[0];
#line 308 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__ASpecs_303;
#line 308 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__BSpecs_304;
#line 308 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__V_320_320;

#line 308 "prog_io_dcg.m"
                        {
#line 308 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__ASpecs_303 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeInfo_554_554, parse_tree__prog_io_dcg__MaybeAGoal_298);
                        }
#line 309 "prog_io_dcg.m"
                        {
#line 309 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__BSpecs_304 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeInfo_554_554, parse_tree__prog_io_dcg__MaybeBGoal_299);
                        }
#line 310 "prog_io_dcg.m"
                        {
#line 310 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_320_320 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__ASpecs_303, parse_tree__prog_io_dcg__BSpecs_304);
                        }
#line 310 "prog_io_dcg.m"
                        {
#line 310 "prog_io_dcg.m"
                          MR_Word base;
#line 310 "prog_io_dcg.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 310 "prog_io_dcg.m"
                          *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 310 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_320_320));
#line 310 "prog_io_dcg.m"
                        }
#line 308 "prog_io_dcg.m"
                      }
#line 307 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 298 "prog_io_dcg.m"
                  }
#line 297 "prog_io_dcg.m"
              }
#line 297 "prog_io_dcg.m"
          }
#line 298 "prog_io_dcg.m"
      }
#line 179 "prog_io_dcg.m"
    else
#line 179 "prog_io_dcg.m"
      if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) ",") == 0))
#line 282 "prog_io_dcg.m"
        {
#line 282 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__ATerm_259;
#line 282 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__BTerm_260;
#line 282 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__MaybeAGoal_267;
#line 282 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__MaybeBGoal_268;
#line 282 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__V_280_280;
#line 282 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__V_281_281;
#line 282 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_282_282;
#line 282 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_283_283;
#line 282 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Var_284_284;
#line 292 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__AGoal_269;
#line 292 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__BGoal_270;

#line 281 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 281 "prog_io_dcg.m"
          if (parse_tree__prog_io_dcg__succeeded)
#line 281 "prog_io_dcg.m"
            {
#line 281 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__ATerm_259 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 281 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 281 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_280_280)) == (MR_mktag((MR_Integer) 1)));
#line 281 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 281 "prog_io_dcg.m"
                {
#line 281 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__BTerm_260 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_280_280, (MR_Integer) 0)));
#line 281 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_280_280, (MR_Integer) 1)));
#line 281 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_281_281 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 282 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 282 "prog_io_dcg.m"
                    {
#line 284 "prog_io_dcg.m"
                      {
#line 284 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ATerm_259, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeAGoal_267, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_282_282, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_283_283, parse_tree__prog_io_dcg__HeadVar__10_10, &parse_tree__prog_io_dcg__STATE_VARIABLE_Var_284_284);
                      }
#line 285 "prog_io_dcg.m"
                      {
#line 285 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__BTerm_260, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeBGoal_268, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_282_282, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_283_283, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_284_284, parse_tree__prog_io_dcg__HeadVar__11_11);
                      }
#line 287 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeAGoal_267)) == (MR_mktag((MR_Integer) 1)));
#line 287 "prog_io_dcg.m"
                      if (parse_tree__prog_io_dcg__succeeded)
#line 287 "prog_io_dcg.m"
                        {
#line 287 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__AGoal_269 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeAGoal_267, (MR_Integer) 0)));
#line 288 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeBGoal_268)) == (MR_mktag((MR_Integer) 1)));
#line 288 "prog_io_dcg.m"
                          if (parse_tree__prog_io_dcg__succeeded)
#line 288 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__BGoal_270 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeBGoal_268, (MR_Integer) 0)));
#line 287 "prog_io_dcg.m"
                        }
#line 292 "prog_io_dcg.m"
                      if (parse_tree__prog_io_dcg__succeeded)
#line 290 "prog_io_dcg.m"
                        {
#line 290 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__Goal_271;
#line 290 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__V_288_288;

#line 290 "prog_io_dcg.m"
                          {
#line 290 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__V_288_288 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_288_288, 0) = ((MR_Box) (parse_tree__prog_io_dcg__AGoal_269));
#line 290 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_288_288, 1) = ((MR_Box) (parse_tree__prog_io_dcg__BGoal_270));
#line 290 "prog_io_dcg.m"
                          }
#line 290 "prog_io_dcg.m"
                          {
#line 290 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__Goal_271 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 290 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_271, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_288_288));
#line 290 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_271, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 290 "prog_io_dcg.m"
                          }
#line 291 "prog_io_dcg.m"
                          {
#line 291 "prog_io_dcg.m"
                            MR_Word base;
#line 291 "prog_io_dcg.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 291 "prog_io_dcg.m"
                            *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 291 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_271));
#line 291 "prog_io_dcg.m"
                          }
#line 290 "prog_io_dcg.m"
                        }
#line 292 "prog_io_dcg.m"
                      else
#line 293 "prog_io_dcg.m"
                        {
#line 293 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__TypeInfo_552_552 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[0];
#line 293 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__ASpecs_272;
#line 293 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__BSpecs_273;
#line 293 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__V_289_289;

#line 293 "prog_io_dcg.m"
                          {
#line 293 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__ASpecs_272 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeInfo_552_552, parse_tree__prog_io_dcg__MaybeAGoal_267);
                          }
#line 294 "prog_io_dcg.m"
                          {
#line 294 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__BSpecs_273 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeInfo_552_552, parse_tree__prog_io_dcg__MaybeBGoal_268);
                          }
#line 295 "prog_io_dcg.m"
                          {
#line 295 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__V_289_289 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__ASpecs_272, parse_tree__prog_io_dcg__BSpecs_273);
                          }
#line 295 "prog_io_dcg.m"
                          {
#line 295 "prog_io_dcg.m"
                            MR_Word base;
#line 295 "prog_io_dcg.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 295 "prog_io_dcg.m"
                            *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 295 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_289_289));
#line 295 "prog_io_dcg.m"
                          }
#line 293 "prog_io_dcg.m"
                        }
#line 292 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 282 "prog_io_dcg.m"
                    }
#line 281 "prog_io_dcg.m"
                }
#line 281 "prog_io_dcg.m"
            }
#line 282 "prog_io_dcg.m"
        }
#line 179 "prog_io_dcg.m"
      else
#line 179 "prog_io_dcg.m"
        if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) ";") == 0))
#line 313 "prog_io_dcg.m"
          {
#line 313 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__ATerm_321;
#line 313 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__BTerm_322;
#line 313 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_349_349;
#line 313 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_350_350;
#line 318 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__CondTerm_330;
#line 318 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__ThenTerm_331;
#line 315 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_351_351;
#line 315 "prog_io_dcg.m"
            MR_String parse_tree__prog_io_dcg__V_352_352;
#line 315 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_353_353;
#line 315 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_354_354;
#line 315 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_355_355;
#line 315 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg___Context_332;

#line 312 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 312 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 312 "prog_io_dcg.m"
              {
#line 312 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__ATerm_321 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 312 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 312 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_349_349)) == (MR_mktag((MR_Integer) 1)));
#line 312 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 312 "prog_io_dcg.m"
                  {
#line 312 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__BTerm_322 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_349_349, (MR_Integer) 0)));
#line 312 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_349_349, (MR_Integer) 1)));
#line 312 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_350_350 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 313 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 313 "prog_io_dcg.m"
                      {
#line 315 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__ATerm_321)) == (MR_mktag((MR_Integer) 0)));
#line 315 "prog_io_dcg.m"
                        if (parse_tree__prog_io_dcg__succeeded)
#line 315 "prog_io_dcg.m"
                          {
#line 315 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ATerm_321, (MR_Integer) 0)));
#line 315 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ATerm_321, (MR_Integer) 1)));
#line 315 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg___Context_332 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ATerm_321, (MR_Integer) 2)));
#line 315 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_351_351)) == (MR_mktag((MR_Integer) 0)));
#line 315 "prog_io_dcg.m"
                            if (parse_tree__prog_io_dcg__succeeded)
#line 315 "prog_io_dcg.m"
                              {
#line 315 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__V_352_352 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_351_351, (MR_Integer) 0)));
#line 315 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_352_352, (MR_String) "->") == 0);
#line 315 "prog_io_dcg.m"
                                if (parse_tree__prog_io_dcg__succeeded)
#line 315 "prog_io_dcg.m"
                                  {
#line 315 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_353_353)) == (MR_mktag((MR_Integer) 1)));
#line 315 "prog_io_dcg.m"
                                    if (parse_tree__prog_io_dcg__succeeded)
#line 315 "prog_io_dcg.m"
                                      {
#line 315 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__CondTerm_330 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_353_353, (MR_Integer) 0)));
#line 315 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_353_353, (MR_Integer) 1)));
#line 315 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_354_354)) == (MR_mktag((MR_Integer) 1)));
#line 315 "prog_io_dcg.m"
                                        if (parse_tree__prog_io_dcg__succeeded)
#line 315 "prog_io_dcg.m"
                                          {
#line 315 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__ThenTerm_331 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_354_354, (MR_Integer) 0)));
#line 315 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_354_354, (MR_Integer) 1)));
#line 315 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_355_355 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 315 "prog_io_dcg.m"
                                          }
#line 315 "prog_io_dcg.m"
                                      }
#line 315 "prog_io_dcg.m"
                                  }
#line 315 "prog_io_dcg.m"
                              }
#line 315 "prog_io_dcg.m"
                          }
#line 318 "prog_io_dcg.m"
                        if (parse_tree__prog_io_dcg__succeeded)
#line 316 "prog_io_dcg.m"
                          {
#line 316 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__parse_dcg_if_then_else_12_p_0(parse_tree__prog_io_dcg__CondTerm_330, parse_tree__prog_io_dcg__ThenTerm_331, parse_tree__prog_io_dcg__BTerm_322, parse_tree__prog_io_dcg__Context_3, parse_tree__prog_io_dcg__HeadVar__4_4, parse_tree__prog_io_dcg__MaybeGoal_5, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                          }
#line 318 "prog_io_dcg.m"
                        else
#line 320 "prog_io_dcg.m"
                          {
#line 320 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__MaybeAGoal0_333;
#line 320 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__VarA_334;
#line 320 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__MaybeBGoal0_335;
#line 320 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__VarB_336;
#line 320 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_358_358;
#line 320 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_359_359;
#line 350 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__AGoal0_337;
#line 350 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__BGoal0_338;

#line 319 "prog_io_dcg.m"
                            {
#line 319 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ATerm_321, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeAGoal0_333, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_358_358, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_359_359, parse_tree__prog_io_dcg__HeadVar__10_10, &parse_tree__prog_io_dcg__VarA_334);
                            }
#line 321 "prog_io_dcg.m"
                            {
#line 321 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__BTerm_322, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeBGoal0_335, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_358_358, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_359_359, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, &parse_tree__prog_io_dcg__VarB_336);
                            }
#line 324 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeAGoal0_333)) == (MR_mktag((MR_Integer) 1)));
#line 324 "prog_io_dcg.m"
                            if (parse_tree__prog_io_dcg__succeeded)
#line 324 "prog_io_dcg.m"
                              {
#line 324 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__AGoal0_337 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeAGoal0_333, (MR_Integer) 0)));
#line 325 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeBGoal0_335)) == (MR_mktag((MR_Integer) 1)));
#line 325 "prog_io_dcg.m"
                                if (parse_tree__prog_io_dcg__succeeded)
#line 325 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__BGoal0_338 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeBGoal0_335, (MR_Integer) 0)));
#line 324 "prog_io_dcg.m"
                              }
#line 350 "prog_io_dcg.m"
                            if (parse_tree__prog_io_dcg__succeeded)
#line 348 "prog_io_dcg.m"
                              {
#line 348 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__Goal_339;
#line 327 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__TypeInfo_593_593;

#line 327 "prog_io_dcg.m"
                                {
#line 327 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__VarA_334)), ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10)));
                                }
#line 327 "prog_io_dcg.m"
                                if (parse_tree__prog_io_dcg__succeeded)
#line 327 "prog_io_dcg.m"
                                  {
#line 3225 "parse_tree.prog_io_dcg.c"
                                    parse_tree__prog_io_dcg__TypeInfo_593_593 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 327 "prog_io_dcg.m"
                                    {
#line 327 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_dcg__TypeInfo_593_593, ((MR_Box) (parse_tree__prog_io_dcg__VarB_336)), ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10)));
                                    }
#line 327 "prog_io_dcg.m"
                                  }
#line 330 "prog_io_dcg.m"
                                if (parse_tree__prog_io_dcg__succeeded)
#line 328 "prog_io_dcg.m"
                                  {
#line 328 "prog_io_dcg.m"
                                    MR_Word parse_tree__prog_io_dcg__V_362_362;

#line 328 "prog_io_dcg.m"
                                    *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__HeadVar__10_10;
#line 329 "prog_io_dcg.m"
                                    {
#line 329 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__V_362_362 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 329 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_362_362, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 329 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_362_362, 1) = ((MR_Box) (parse_tree__prog_io_dcg__AGoal0_337));
#line 329 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_362_362, 2) = ((MR_Box) (parse_tree__prog_io_dcg__BGoal0_338));
#line 329 "prog_io_dcg.m"
                                    }
#line 329 "prog_io_dcg.m"
                                    {
#line 329 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__Goal_339 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 329 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_339, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_362_362));
#line 329 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_339, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 329 "prog_io_dcg.m"
                                    }
#line 328 "prog_io_dcg.m"
                                  }
#line 330 "prog_io_dcg.m"
                                else
#line 337 "prog_io_dcg.m"
                                  {
#line 330 "prog_io_dcg.m"
                                    {
#line 330 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__VarA_334)), ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10)));
                                    }
#line 337 "prog_io_dcg.m"
                                    if (parse_tree__prog_io_dcg__succeeded)
#line 331 "prog_io_dcg.m"
                                      {
#line 331 "prog_io_dcg.m"
                                        MR_Word parse_tree__prog_io_dcg__Unify_340;
#line 331 "prog_io_dcg.m"
                                        MR_Word parse_tree__prog_io_dcg__AGoal_341;
#line 331 "prog_io_dcg.m"
                                        MR_Word parse_tree__prog_io_dcg__V_363_363;
#line 331 "prog_io_dcg.m"
                                        MR_Word parse_tree__prog_io_dcg__V_364_364;
#line 331 "prog_io_dcg.m"
                                        MR_Word parse_tree__prog_io_dcg__V_366_366;

#line 331 "prog_io_dcg.m"
                                        *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__VarB_336;
#line 333 "prog_io_dcg.m"
                                        {
#line 333 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__V_363_363 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_363_363, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__HeadVar__11_11));
#line 333 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_363_363, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 333 "prog_io_dcg.m"
                                        }
#line 333 "prog_io_dcg.m"
                                        {
#line 333 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__V_364_364 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_364_364, 0) = ((MR_Box) (parse_tree__prog_io_dcg__VarA_334));
#line 333 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_364_364, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 333 "prog_io_dcg.m"
                                        }
#line 332 "prog_io_dcg.m"
                                        {
#line 332 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__Unify_340 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 332 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_340, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 332 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_340, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_363_363));
#line 332 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_340, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_364_364));
#line 332 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_340, 3) = ((MR_Box) ((MR_Integer) 0));
#line 332 "prog_io_dcg.m"
                                        }
#line 335 "prog_io_dcg.m"
                                        {
#line 335 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(parse_tree__prog_io_dcg__AGoal0_337, parse_tree__prog_io_dcg__Unify_340, parse_tree__prog_io_dcg__Context_3, &parse_tree__prog_io_dcg__AGoal_341);
                                        }
#line 336 "prog_io_dcg.m"
                                        {
#line 336 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__V_366_366 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 336 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_366_366, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 336 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_366_366, 1) = ((MR_Box) (parse_tree__prog_io_dcg__AGoal_341));
#line 336 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_366_366, 2) = ((MR_Box) (parse_tree__prog_io_dcg__BGoal0_338));
#line 336 "prog_io_dcg.m"
                                        }
#line 336 "prog_io_dcg.m"
                                        {
#line 336 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__Goal_339 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 336 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_339, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_366_366));
#line 336 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_339, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 336 "prog_io_dcg.m"
                                        }
#line 331 "prog_io_dcg.m"
                                      }
#line 337 "prog_io_dcg.m"
                                    else
#line 344 "prog_io_dcg.m"
                                      {
#line 337 "prog_io_dcg.m"
                                        {
#line 337 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__VarB_336)), ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10)));
                                        }
#line 344 "prog_io_dcg.m"
                                        if (parse_tree__prog_io_dcg__succeeded)
#line 338 "prog_io_dcg.m"
                                          {
#line 338 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__BGoal_342;
#line 338 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__V_367_367;
#line 338 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__V_368_368;
#line 338 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__V_370_370;
#line 338 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__Unify_373;

#line 338 "prog_io_dcg.m"
                                            *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__VarA_334;
#line 340 "prog_io_dcg.m"
                                            {
#line 340 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__V_367_367 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 340 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_367_367, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__HeadVar__11_11));
#line 340 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_367_367, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 340 "prog_io_dcg.m"
                                            }
#line 340 "prog_io_dcg.m"
                                            {
#line 340 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__V_368_368 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 340 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_368_368, 0) = ((MR_Box) (parse_tree__prog_io_dcg__VarB_336));
#line 340 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_368_368, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 340 "prog_io_dcg.m"
                                            }
#line 339 "prog_io_dcg.m"
                                            {
#line 339 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__Unify_373 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 339 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_373, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 339 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_373, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_367_367));
#line 339 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_373, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_368_368));
#line 339 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_373, 3) = ((MR_Box) ((MR_Integer) 0));
#line 339 "prog_io_dcg.m"
                                            }
#line 342 "prog_io_dcg.m"
                                            {
#line 342 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(parse_tree__prog_io_dcg__BGoal0_338, parse_tree__prog_io_dcg__Unify_373, parse_tree__prog_io_dcg__Context_3, &parse_tree__prog_io_dcg__BGoal_342);
                                            }
#line 343 "prog_io_dcg.m"
                                            {
#line 343 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__V_370_370 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 343 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_370_370, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 343 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_370_370, 1) = ((MR_Box) (parse_tree__prog_io_dcg__AGoal0_337));
#line 343 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_370_370, 2) = ((MR_Box) (parse_tree__prog_io_dcg__BGoal_342));
#line 343 "prog_io_dcg.m"
                                            }
#line 343 "prog_io_dcg.m"
                                            {
#line 343 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__Goal_339 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 343 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_339, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_370_370));
#line 343 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_339, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 343 "prog_io_dcg.m"
                                            }
#line 338 "prog_io_dcg.m"
                                          }
#line 344 "prog_io_dcg.m"
                                        else
#line 345 "prog_io_dcg.m"
                                          {
#line 345 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__V_371_371;
#line 345 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__AGoal_374;

#line 345 "prog_io_dcg.m"
                                            *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__VarB_336;
#line 346 "prog_io_dcg.m"
                                            {
#line 346 "prog_io_dcg.m"
                                              parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_io_dcg__VarA_334, parse_tree__prog_io_dcg__VarB_336, parse_tree__prog_io_dcg__AGoal0_337, &parse_tree__prog_io_dcg__AGoal_374);
                                            }
#line 347 "prog_io_dcg.m"
                                            {
#line 347 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__V_371_371 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 347 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_371_371, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 347 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_371_371, 1) = ((MR_Box) (parse_tree__prog_io_dcg__AGoal_374));
#line 347 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_371_371, 2) = ((MR_Box) (parse_tree__prog_io_dcg__BGoal0_338));
#line 347 "prog_io_dcg.m"
                                            }
#line 347 "prog_io_dcg.m"
                                            {
#line 347 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__Goal_339 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 347 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_339, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_371_371));
#line 347 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_339, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 347 "prog_io_dcg.m"
                                            }
#line 345 "prog_io_dcg.m"
                                          }
#line 344 "prog_io_dcg.m"
                                      }
#line 337 "prog_io_dcg.m"
                                  }
#line 349 "prog_io_dcg.m"
                                {
#line 349 "prog_io_dcg.m"
                                  MR_Word base;
#line 349 "prog_io_dcg.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 349 "prog_io_dcg.m"
                                  *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 349 "prog_io_dcg.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_339));
#line 349 "prog_io_dcg.m"
                                }
#line 348 "prog_io_dcg.m"
                              }
#line 350 "prog_io_dcg.m"
                            else
#line 351 "prog_io_dcg.m"
                              {
#line 351 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__TypeInfo_556_556;
#line 351 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__ASpecs_343;
#line 351 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__BSpecs_344;
#line 351 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_372_372;

#line 351 "prog_io_dcg.m"
                                *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__VarA_334;
#line 3518 "parse_tree.prog_io_dcg.c"
                                parse_tree__prog_io_dcg__TypeInfo_556_556 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[0];
#line 352 "prog_io_dcg.m"
                                {
#line 352 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__ASpecs_343 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeInfo_556_556, parse_tree__prog_io_dcg__MaybeAGoal0_333);
                                }
#line 353 "prog_io_dcg.m"
                                {
#line 353 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__BSpecs_344 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeInfo_556_556, parse_tree__prog_io_dcg__MaybeBGoal0_335);
                                }
#line 354 "prog_io_dcg.m"
                                {
#line 354 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__V_372_372 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__ASpecs_343, parse_tree__prog_io_dcg__BSpecs_344);
                                }
#line 354 "prog_io_dcg.m"
                                {
#line 354 "prog_io_dcg.m"
                                  MR_Word base;
#line 354 "prog_io_dcg.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 354 "prog_io_dcg.m"
                                  *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 354 "prog_io_dcg.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_372_372));
#line 354 "prog_io_dcg.m"
                                }
#line 351 "prog_io_dcg.m"
                              }
#line 320 "prog_io_dcg.m"
                          }
#line 318 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 313 "prog_io_dcg.m"
                      }
#line 312 "prog_io_dcg.m"
                  }
#line 312 "prog_io_dcg.m"
              }
#line 313 "prog_io_dcg.m"
          }
#line 179 "prog_io_dcg.m"
        else
#line 179 "prog_io_dcg.m"
          if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "=") == 0))
#line 245 "prog_io_dcg.m"
            {
#line 245 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_545_545;
#line 245 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_546_546;
#line 245 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__A0_181;
#line 245 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__A_188;
#line 245 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__Goal_189;
#line 245 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_194_194;
#line 245 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_195_195;
#line 245 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_196_196;
#line 245 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_197_197;

#line 244 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 244 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 244 "prog_io_dcg.m"
                {
#line 244 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__A0_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 244 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 244 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_194_194 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 245 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 245 "prog_io_dcg.m"
                    {
#line 245 "prog_io_dcg.m"
                      *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__HeadVar__10_10;
#line 3604 "parse_tree.prog_io_dcg.c"
                      parse_tree__prog_io_dcg__TypeCtorInfo_545_545 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 3606 "parse_tree.prog_io_dcg.c"
                      parse_tree__prog_io_dcg__TypeCtorInfo_546_546 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 247 "prog_io_dcg.m"
                      {
#line 247 "prog_io_dcg.m"
                        mercury__term__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_545_545, parse_tree__prog_io_dcg__TypeCtorInfo_546_546, parse_tree__prog_io_dcg__A0_181, &parse_tree__prog_io_dcg__A_188);
                      }
#line 248 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_197_197 = (MR_Integer) 0;
#line 244 "prog_io_dcg.m"
                      *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8;
#line 244 "prog_io_dcg.m"
                      *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6;
#line 248 "prog_io_dcg.m"
                      {
#line 248 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_196_196, 0) = ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10));
#line 248 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_196_196, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 248 "prog_io_dcg.m"
                      }
#line 248 "prog_io_dcg.m"
                      {
#line 248 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_195_195 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 248 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_195_195, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 248 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_195_195, 1) = ((MR_Box) (parse_tree__prog_io_dcg__A_188));
#line 248 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_195_195, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_196_196));
#line 248 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_195_195, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_197_197));
#line 248 "prog_io_dcg.m"
                      }
#line 248 "prog_io_dcg.m"
                      {
#line 248 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Goal_189 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 248 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_189, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_195_195));
#line 248 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_189, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 248 "prog_io_dcg.m"
                      }
#line 249 "prog_io_dcg.m"
                      {
#line 249 "prog_io_dcg.m"
                        MR_Word base;
#line 249 "prog_io_dcg.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 249 "prog_io_dcg.m"
                        *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 249 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_189));
#line 249 "prog_io_dcg.m"
                      }
#line 249 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 245 "prog_io_dcg.m"
                    }
#line 244 "prog_io_dcg.m"
                }
#line 245 "prog_io_dcg.m"
            }
#line 179 "prog_io_dcg.m"
          else
#line 179 "prog_io_dcg.m"
            if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) ":=") == 0))
#line 251 "prog_io_dcg.m"
              {
#line 251 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_547_547;
#line 251 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_548_548;
#line 251 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__A0_198;
#line 251 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__A_206;
#line 251 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__Goal_207;
#line 251 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_212_212;
#line 251 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_215_215;
#line 251 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_216_216;
#line 251 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_217_217;

#line 250 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 250 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 250 "prog_io_dcg.m"
                  {
#line 250 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__A0_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 250 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 250 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_212_212 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 251 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 251 "prog_io_dcg.m"
                      {
#line 253 "prog_io_dcg.m"
                        {
#line 253 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__new_dcg_var_5_p_0(parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__11_11);
                        }
#line 3719 "parse_tree.prog_io_dcg.c"
                        parse_tree__prog_io_dcg__TypeCtorInfo_547_547 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 3721 "parse_tree.prog_io_dcg.c"
                        parse_tree__prog_io_dcg__TypeCtorInfo_548_548 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 254 "prog_io_dcg.m"
                        {
#line 254 "prog_io_dcg.m"
                          mercury__term__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_547_547, parse_tree__prog_io_dcg__TypeCtorInfo_548_548, parse_tree__prog_io_dcg__A0_198, &parse_tree__prog_io_dcg__A_206);
                        }
#line 255 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_217_217 = (MR_Integer) 0;
#line 255 "prog_io_dcg.m"
                        {
#line 255 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_216_216, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__HeadVar__11_11));
#line 255 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_216_216, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 255 "prog_io_dcg.m"
                        }
#line 255 "prog_io_dcg.m"
                        {
#line 255 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_215_215 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 255 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_215_215, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 255 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_215_215, 1) = ((MR_Box) (parse_tree__prog_io_dcg__A_206));
#line 255 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_215_215, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_216_216));
#line 255 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_215_215, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_217_217));
#line 255 "prog_io_dcg.m"
                        }
#line 255 "prog_io_dcg.m"
                        {
#line 255 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__Goal_207 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 255 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_207, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_215_215));
#line 255 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_207, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 255 "prog_io_dcg.m"
                        }
#line 256 "prog_io_dcg.m"
                        {
#line 256 "prog_io_dcg.m"
                          MR_Word base;
#line 256 "prog_io_dcg.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 256 "prog_io_dcg.m"
                          *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 256 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_207));
#line 256 "prog_io_dcg.m"
                        }
#line 256 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 251 "prog_io_dcg.m"
                      }
#line 250 "prog_io_dcg.m"
                  }
#line 251 "prog_io_dcg.m"
              }
#line 179 "prog_io_dcg.m"
            else
#line 179 "prog_io_dcg.m"
              if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "[]") == 0))
#line 227 "prog_io_dcg.m"
                {
#line 227 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__Goal_140;
#line 227 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_147_147;
#line 227 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_148_148;
#line 227 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_149_149;
#line 227 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_150_150;

#line 226 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 227 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 227 "prog_io_dcg.m"
                    {
#line 229 "prog_io_dcg.m"
                      {
#line 229 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__new_dcg_var_5_p_0(parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__11_11);
                      }
#line 231 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_150_150 = (MR_Integer) 0;
#line 231 "prog_io_dcg.m"
                      {
#line 231 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_148_148, 0) = ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10));
#line 231 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_148_148, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 231 "prog_io_dcg.m"
                      }
#line 231 "prog_io_dcg.m"
                      {
#line 231 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_149_149, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__HeadVar__11_11));
#line 231 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_149_149, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 231 "prog_io_dcg.m"
                      }
#line 230 "prog_io_dcg.m"
                      {
#line 230 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_147_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 230 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_147_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 230 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_147_147, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_148_148));
#line 230 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_147_147, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_149_149));
#line 230 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_147_147, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_150_150));
#line 230 "prog_io_dcg.m"
                      }
#line 232 "prog_io_dcg.m"
                      {
#line 232 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Goal_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 232 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_140, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_147_147));
#line 232 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_140, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 232 "prog_io_dcg.m"
                      }
#line 233 "prog_io_dcg.m"
                      {
#line 233 "prog_io_dcg.m"
                        MR_Word base;
#line 233 "prog_io_dcg.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 233 "prog_io_dcg.m"
                        *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 233 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_140));
#line 233 "prog_io_dcg.m"
                      }
#line 233 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 227 "prog_io_dcg.m"
                    }
#line 227 "prog_io_dcg.m"
                }
#line 179 "prog_io_dcg.m"
              else
#line 179 "prog_io_dcg.m"
                if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "\\+") == 0))
#line 378 "prog_io_dcg.m"
                  {
#line 378 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__ATerm_430;
#line 378 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__MaybeAGoal_437;
#line 378 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__V_446_446;
#line 380 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__V_438_438;

#line 377 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 377 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 377 "prog_io_dcg.m"
                      {
#line 377 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__ATerm_430 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 377 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_446_446 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 377 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_446_446 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 378 "prog_io_dcg.m"
                        if (parse_tree__prog_io_dcg__succeeded)
#line 378 "prog_io_dcg.m"
                          {
#line 378 "prog_io_dcg.m"
                            *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__HeadVar__10_10;
#line 380 "prog_io_dcg.m"
                            {
#line 380 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ATerm_430, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeAGoal_437, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, &parse_tree__prog_io_dcg__V_438_438);
                            }
#line 386 "prog_io_dcg.m"
                            if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeAGoal_437)) == (MR_mktag((MR_Integer) 0))))
#line 388 "prog_io_dcg.m"
                              *parse_tree__prog_io_dcg__MaybeGoal_5 = parse_tree__prog_io_dcg__MaybeAGoal_437;
#line 386 "prog_io_dcg.m"
                            else
#line 383 "prog_io_dcg.m"
                              {
#line 383 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__AGoal_439 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeAGoal_437, (MR_Integer) 0)));
#line 383 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__Goal_440;
#line 383 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_449_449;

#line 384 "prog_io_dcg.m"
                                {
#line 384 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__V_449_449 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "prog_io_dcg.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_449_449, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 384 "prog_io_dcg.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_449_449, 1) = ((MR_Box) (parse_tree__prog_io_dcg__AGoal_439));
#line 384 "prog_io_dcg.m"
                                }
#line 384 "prog_io_dcg.m"
                                {
#line 384 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__Goal_440 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 384 "prog_io_dcg.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_440, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_449_449));
#line 384 "prog_io_dcg.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_440, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 384 "prog_io_dcg.m"
                                }
#line 385 "prog_io_dcg.m"
                                {
#line 385 "prog_io_dcg.m"
                                  MR_Word base;
#line 385 "prog_io_dcg.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 385 "prog_io_dcg.m"
                                  *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 385 "prog_io_dcg.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_440));
#line 385 "prog_io_dcg.m"
                                }
#line 383 "prog_io_dcg.m"
                              }
#line 386 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 378 "prog_io_dcg.m"
                          }
#line 377 "prog_io_dcg.m"
                      }
#line 378 "prog_io_dcg.m"
                  }
#line 179 "prog_io_dcg.m"
                else
#line 179 "prog_io_dcg.m"
                  if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "if") == 0))
#line 258 "prog_io_dcg.m"
                    {
#line 258 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__CondTerm_226;
#line 258 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__ThenTerm_227;
#line 258 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__MaybeVarsCond_229;
#line 258 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__MaybeThen_230;
#line 258 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_244_244;
#line 258 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_245_245;
#line 258 "prog_io_dcg.m"
                      MR_String parse_tree__prog_io_dcg__V_246_246;
#line 258 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_247_247;
#line 258 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_248_248;
#line 258 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_249_249;
#line 258 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_250_250;
#line 259 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_228_228;
#line 276 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Vars_231;
#line 276 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__StateVars_232;
#line 276 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Cond_233;
#line 276 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Then_234;

#line 259 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 259 "prog_io_dcg.m"
                      if (parse_tree__prog_io_dcg__succeeded)
#line 259 "prog_io_dcg.m"
                        {
#line 259 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 259 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 259 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_250_250 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 258 "prog_io_dcg.m"
                          if (parse_tree__prog_io_dcg__succeeded)
#line 258 "prog_io_dcg.m"
                            {
#line 259 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_244_244)) == (MR_mktag((MR_Integer) 0)));
#line 259 "prog_io_dcg.m"
                              if (parse_tree__prog_io_dcg__succeeded)
#line 259 "prog_io_dcg.m"
                                {
#line 259 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_244_244, (MR_Integer) 0)));
#line 259 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_244_244, (MR_Integer) 1)));
#line 259 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_244_244, (MR_Integer) 2)));
#line 259 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_245_245)) == (MR_mktag((MR_Integer) 0)));
#line 259 "prog_io_dcg.m"
                                  if (parse_tree__prog_io_dcg__succeeded)
#line 259 "prog_io_dcg.m"
                                    {
#line 259 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__V_246_246 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_245_245, (MR_Integer) 0)));
#line 259 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_246_246, (MR_String) "then") == 0);
#line 258 "prog_io_dcg.m"
                                      if (parse_tree__prog_io_dcg__succeeded)
#line 258 "prog_io_dcg.m"
                                        {
#line 259 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_247_247)) == (MR_mktag((MR_Integer) 1)));
#line 259 "prog_io_dcg.m"
                                          if (parse_tree__prog_io_dcg__succeeded)
#line 259 "prog_io_dcg.m"
                                            {
#line 259 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__CondTerm_226 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_247_247, (MR_Integer) 0)));
#line 259 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_247_247, (MR_Integer) 1)));
#line 259 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_248_248)) == (MR_mktag((MR_Integer) 1)));
#line 259 "prog_io_dcg.m"
                                              if (parse_tree__prog_io_dcg__succeeded)
#line 259 "prog_io_dcg.m"
                                                {
#line 259 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__ThenTerm_227 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_248_248, (MR_Integer) 0)));
#line 259 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_248_248, (MR_Integer) 1)));
#line 259 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_249_249 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 258 "prog_io_dcg.m"
                                                  if (parse_tree__prog_io_dcg__succeeded)
#line 258 "prog_io_dcg.m"
                                                    {
#line 261 "prog_io_dcg.m"
                                                      {
#line 261 "prog_io_dcg.m"
                                                        parse_tree__prog_io_dcg__parse_dcg_if_then_12_p_0(parse_tree__prog_io_dcg__CondTerm_226, parse_tree__prog_io_dcg__ThenTerm_227, parse_tree__prog_io_dcg__Context_3, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeVarsCond_229, &parse_tree__prog_io_dcg__MaybeThen_230, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                                                      }
#line 264 "prog_io_dcg.m"
                                                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeVarsCond_229)) == (MR_mktag((MR_Integer) 1)));
#line 264 "prog_io_dcg.m"
                                                      if (parse_tree__prog_io_dcg__succeeded)
#line 264 "prog_io_dcg.m"
                                                        {
#line 264 "prog_io_dcg.m"
                                                          parse_tree__prog_io_dcg__Vars_231 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_229, (MR_Integer) 0)));
#line 264 "prog_io_dcg.m"
                                                          parse_tree__prog_io_dcg__StateVars_232 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_229, (MR_Integer) 1)));
#line 264 "prog_io_dcg.m"
                                                          parse_tree__prog_io_dcg__Cond_233 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_229, (MR_Integer) 2)));
#line 265 "prog_io_dcg.m"
                                                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeThen_230)) == (MR_mktag((MR_Integer) 1)));
#line 265 "prog_io_dcg.m"
                                                          if (parse_tree__prog_io_dcg__succeeded)
#line 265 "prog_io_dcg.m"
                                                            parse_tree__prog_io_dcg__Then_234 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeThen_230, (MR_Integer) 0)));
#line 264 "prog_io_dcg.m"
                                                        }
#line 276 "prog_io_dcg.m"
                                                      if (parse_tree__prog_io_dcg__succeeded)
#line 273 "prog_io_dcg.m"
                                                        {
#line 273 "prog_io_dcg.m"
                                                          MR_Word parse_tree__prog_io_dcg__Else_235;
#line 273 "prog_io_dcg.m"
                                                          MR_Word parse_tree__prog_io_dcg__Goal_237;
#line 273 "prog_io_dcg.m"
                                                          MR_Word parse_tree__prog_io_dcg__V_257_257;

#line 267 "prog_io_dcg.m"
                                                          {
#line 267 "prog_io_dcg.m"
                                                            parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (*parse_tree__prog_io_dcg__HeadVar__11_11)), ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10)));
                                                          }
#line 269 "prog_io_dcg.m"
                                                          if (parse_tree__prog_io_dcg__succeeded)
#line 268 "prog_io_dcg.m"
                                                            {
#line 268 "prog_io_dcg.m"
                                                              {
#line 268 "prog_io_dcg.m"
                                                                parse_tree__prog_io_dcg__Else_235 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 268 "prog_io_dcg.m"
                                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Else_235, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "prog_io_dcg.m"
                                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Else_235, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 268 "prog_io_dcg.m"
                                                              }
#line 268 "prog_io_dcg.m"
                                                            }
#line 269 "prog_io_dcg.m"
                                                          else
#line 271 "prog_io_dcg.m"
                                                            {
#line 271 "prog_io_dcg.m"
                                                              MR_Word parse_tree__prog_io_dcg__Unify_236;
#line 271 "prog_io_dcg.m"
                                                              MR_Word parse_tree__prog_io_dcg__V_254_254;
#line 271 "prog_io_dcg.m"
                                                              MR_Word parse_tree__prog_io_dcg__V_255_255;

#line 270 "prog_io_dcg.m"
                                                              {
#line 270 "prog_io_dcg.m"
                                                                parse_tree__prog_io_dcg__V_254_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "prog_io_dcg.m"
                                                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_254_254, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__HeadVar__11_11));
#line 270 "prog_io_dcg.m"
                                                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_254_254, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 270 "prog_io_dcg.m"
                                                              }
#line 270 "prog_io_dcg.m"
                                                              {
#line 270 "prog_io_dcg.m"
                                                                parse_tree__prog_io_dcg__V_255_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "prog_io_dcg.m"
                                                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_255_255, 0) = ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10));
#line 270 "prog_io_dcg.m"
                                                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_255_255, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 270 "prog_io_dcg.m"
                                                              }
#line 270 "prog_io_dcg.m"
                                                              {
#line 270 "prog_io_dcg.m"
                                                                parse_tree__prog_io_dcg__Unify_236 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 270 "prog_io_dcg.m"
                                                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_236, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 270 "prog_io_dcg.m"
                                                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_236, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_254_254));
#line 270 "prog_io_dcg.m"
                                                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_236, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_255_255));
#line 270 "prog_io_dcg.m"
                                                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_236, 3) = ((MR_Box) ((MR_Integer) 0));
#line 270 "prog_io_dcg.m"
                                                              }
#line 272 "prog_io_dcg.m"
                                                              {
#line 272 "prog_io_dcg.m"
                                                                parse_tree__prog_io_dcg__Else_235 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 272 "prog_io_dcg.m"
                                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Else_235, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Unify_236));
#line 272 "prog_io_dcg.m"
                                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Else_235, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 272 "prog_io_dcg.m"
                                                              }
#line 271 "prog_io_dcg.m"
                                                            }
#line 274 "prog_io_dcg.m"
                                                          {
#line 274 "prog_io_dcg.m"
                                                            parse_tree__prog_io_dcg__V_257_257 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 274 "prog_io_dcg.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_257_257, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 274 "prog_io_dcg.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_257_257, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_231));
#line 274 "prog_io_dcg.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_257_257, 2) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_232));
#line 274 "prog_io_dcg.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_257_257, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Cond_233));
#line 274 "prog_io_dcg.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_257_257, 4) = ((MR_Box) (parse_tree__prog_io_dcg__Then_234));
#line 274 "prog_io_dcg.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_257_257, 5) = ((MR_Box) (parse_tree__prog_io_dcg__Else_235));
#line 274 "prog_io_dcg.m"
                                                          }
#line 274 "prog_io_dcg.m"
                                                          {
#line 274 "prog_io_dcg.m"
                                                            parse_tree__prog_io_dcg__Goal_237 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 274 "prog_io_dcg.m"
                                                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_237, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_257_257));
#line 274 "prog_io_dcg.m"
                                                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_237, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 274 "prog_io_dcg.m"
                                                          }
#line 275 "prog_io_dcg.m"
                                                          {
#line 275 "prog_io_dcg.m"
                                                            MR_Word base;
#line 275 "prog_io_dcg.m"
                                                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 275 "prog_io_dcg.m"
                                                            *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 275 "prog_io_dcg.m"
                                                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_237));
#line 275 "prog_io_dcg.m"
                                                          }
#line 273 "prog_io_dcg.m"
                                                        }
#line 276 "prog_io_dcg.m"
                                                      else
#line 277 "prog_io_dcg.m"
                                                        {
#line 277 "prog_io_dcg.m"
                                                          MR_Word parse_tree__prog_io_dcg__TypeInfo_549_549 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3];
#line 277 "prog_io_dcg.m"
                                                          MR_Word parse_tree__prog_io_dcg__TypeInfo_550_550 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[0];
#line 277 "prog_io_dcg.m"
                                                          MR_Word parse_tree__prog_io_dcg__CondSpecs_238;
#line 277 "prog_io_dcg.m"
                                                          MR_Word parse_tree__prog_io_dcg__ThenSpecs_239;
#line 277 "prog_io_dcg.m"
                                                          MR_Word parse_tree__prog_io_dcg__V_258_258;

#line 277 "prog_io_dcg.m"
                                                          {
#line 277 "prog_io_dcg.m"
                                                            parse_tree__prog_io_dcg__CondSpecs_238 = parse_tree__prog_io_util__get_any_errors3_1_f_0(parse_tree__prog_io_dcg__TypeInfo_549_549, parse_tree__prog_io_dcg__TypeInfo_549_549, parse_tree__prog_io_dcg__TypeInfo_550_550, parse_tree__prog_io_dcg__MaybeVarsCond_229);
                                                          }
#line 278 "prog_io_dcg.m"
                                                          {
#line 278 "prog_io_dcg.m"
                                                            parse_tree__prog_io_dcg__ThenSpecs_239 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeInfo_550_550, parse_tree__prog_io_dcg__MaybeThen_230);
                                                          }
#line 279 "prog_io_dcg.m"
                                                          {
#line 279 "prog_io_dcg.m"
                                                            parse_tree__prog_io_dcg__V_258_258 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__CondSpecs_238, parse_tree__prog_io_dcg__ThenSpecs_239);
                                                          }
#line 279 "prog_io_dcg.m"
                                                          {
#line 279 "prog_io_dcg.m"
                                                            MR_Word base;
#line 279 "prog_io_dcg.m"
                                                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 279 "prog_io_dcg.m"
                                                            *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 279 "prog_io_dcg.m"
                                                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_258_258));
#line 279 "prog_io_dcg.m"
                                                          }
#line 277 "prog_io_dcg.m"
                                                        }
#line 276 "prog_io_dcg.m"
                                                      parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 258 "prog_io_dcg.m"
                                                    }
#line 259 "prog_io_dcg.m"
                                                }
#line 259 "prog_io_dcg.m"
                                            }
#line 258 "prog_io_dcg.m"
                                        }
#line 259 "prog_io_dcg.m"
                                    }
#line 259 "prog_io_dcg.m"
                                }
#line 258 "prog_io_dcg.m"
                            }
#line 259 "prog_io_dcg.m"
                        }
#line 258 "prog_io_dcg.m"
                    }
#line 179 "prog_io_dcg.m"
                  else
#line 179 "prog_io_dcg.m"
                    if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "{}") == 0))
#line 179 "prog_io_dcg.m"
                      {
#line 179 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_542_542;
#line 179 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__G0_12;
#line 179 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__Gs_13;
#line 179 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__G_20;

#line 178 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 178 "prog_io_dcg.m"
                        if (parse_tree__prog_io_dcg__succeeded)
#line 178 "prog_io_dcg.m"
                          {
#line 178 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__G0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 178 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__Gs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 4323 "parse_tree.prog_io_dcg.c"
                            parse_tree__prog_io_dcg__TypeCtorInfo_542_542 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 183 "prog_io_dcg.m"
                            {
#line 183 "prog_io_dcg.m"
                              parse_tree__prog_io_util__list_to_conjunction_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_542_542, parse_tree__prog_io_dcg__Context_3, parse_tree__prog_io_dcg__G0_12, parse_tree__prog_io_dcg__Gs_13, &parse_tree__prog_io_dcg__G_20);
                            }
#line 184 "prog_io_dcg.m"
                            {
#line 184 "prog_io_dcg.m"
                              parse_tree__prog_io_goal__parse_goal_5_p_0(parse_tree__prog_io_dcg__G_20, parse_tree__prog_io_dcg__HeadVar__4_4, parse_tree__prog_io_dcg__MaybeGoal_5, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7);
                            }
#line 179 "prog_io_dcg.m"
                            *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__HeadVar__10_10;
#line 179 "prog_io_dcg.m"
                            *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8;
#line 179 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 178 "prog_io_dcg.m"
                          }
#line 179 "prog_io_dcg.m"
                      }
#line 179 "prog_io_dcg.m"
                    else
#line 179 "prog_io_dcg.m"
                      if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "[|]") == 0))
#line 235 "prog_io_dcg.m"
                        {
#line 235 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_543_543;
#line 235 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_544_544;
#line 235 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__ConsTerm0_160;
#line 235 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__ConsTerm_161;
#line 235 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__Term_162;
#line 235 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__Goal_163;
#line 235 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__V_168_168;
#line 235 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__V_169_169;
#line 235 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__V_172_172;
#line 235 "prog_io_dcg.m"
                          MR_String parse_tree__prog_io_dcg__V_173_173;
#line 235 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__V_177_177;
#line 235 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__V_178_178;
#line 235 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__V_179_179;
#line 235 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__V_180_180;
#line 234 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__X_151;
#line 234 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__Xs_152;

#line 234 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 234 "prog_io_dcg.m"
                          if (parse_tree__prog_io_dcg__succeeded)
#line 234 "prog_io_dcg.m"
                            {
#line 234 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__X_151 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 234 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 234 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_168_168)) == (MR_mktag((MR_Integer) 1)));
#line 234 "prog_io_dcg.m"
                              if (parse_tree__prog_io_dcg__succeeded)
#line 234 "prog_io_dcg.m"
                                {
#line 234 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__Xs_152 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_168_168, (MR_Integer) 0)));
#line 234 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_168_168, (MR_Integer) 1)));
#line 234 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_169_169 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 235 "prog_io_dcg.m"
                                  if (parse_tree__prog_io_dcg__succeeded)
#line 235 "prog_io_dcg.m"
                                    {
#line 238 "prog_io_dcg.m"
                                      {
#line 238 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__new_dcg_var_5_p_0(parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__11_11);
                                      }
#line 239 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__V_173_173 = (MR_String) "[|]";
#line 4417 "parse_tree.prog_io_dcg.c"
                                      parse_tree__prog_io_dcg__TypeCtorInfo_543_543 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 4419 "parse_tree.prog_io_dcg.c"
                                      parse_tree__prog_io_dcg__TypeCtorInfo_544_544 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 239 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__V_172_172 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_4[1];
#line 239 "prog_io_dcg.m"
                                      {
#line 239 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__ConsTerm0_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 239 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ConsTerm0_160, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_172_172));
#line 239 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ConsTerm0_160, 1) = ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__2_2));
#line 239 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ConsTerm0_160, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 239 "prog_io_dcg.m"
                                      }
#line 240 "prog_io_dcg.m"
                                      {
#line 240 "prog_io_dcg.m"
                                        mercury__term__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_543_543, parse_tree__prog_io_dcg__TypeCtorInfo_544_544, parse_tree__prog_io_dcg__ConsTerm0_160, &parse_tree__prog_io_dcg__ConsTerm_161);
                                      }
#line 241 "prog_io_dcg.m"
                                      {
#line 241 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_177_177, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__HeadVar__11_11));
#line 241 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_177_177, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 241 "prog_io_dcg.m"
                                      }
#line 241 "prog_io_dcg.m"
                                      {
#line 241 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__succeeded = parse_tree__prog_io_dcg__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_dcg__ConsTerm_161, parse_tree__prog_io_dcg__V_177_177, &parse_tree__prog_io_dcg__Term_162);
                                      }
#line 235 "prog_io_dcg.m"
                                      if (parse_tree__prog_io_dcg__succeeded)
#line 235 "prog_io_dcg.m"
                                        {
#line 242 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__V_180_180 = (MR_Integer) 0;
#line 242 "prog_io_dcg.m"
                                          {
#line 242 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_179_179, 0) = ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10));
#line 242 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_179_179, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 242 "prog_io_dcg.m"
                                          }
#line 242 "prog_io_dcg.m"
                                          {
#line 242 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__V_178_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 242 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_178_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 242 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_178_178, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_179_179));
#line 242 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_178_178, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Term_162));
#line 242 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_178_178, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_180_180));
#line 242 "prog_io_dcg.m"
                                          }
#line 242 "prog_io_dcg.m"
                                          {
#line 242 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__Goal_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 242 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_163, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_178_178));
#line 242 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_163, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 242 "prog_io_dcg.m"
                                          }
#line 243 "prog_io_dcg.m"
                                          {
#line 243 "prog_io_dcg.m"
                                            MR_Word base;
#line 243 "prog_io_dcg.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 243 "prog_io_dcg.m"
                                            *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 243 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_163));
#line 243 "prog_io_dcg.m"
                                          }
#line 243 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 235 "prog_io_dcg.m"
                                        }
#line 235 "prog_io_dcg.m"
                                    }
#line 234 "prog_io_dcg.m"
                                }
#line 234 "prog_io_dcg.m"
                            }
#line 235 "prog_io_dcg.m"
                        }
#line 179 "prog_io_dcg.m"
                      else
#line 179 "prog_io_dcg.m"
                        if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "all") == 0))
#line 391 "prog_io_dcg.m"
                          {
#line 391 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_558_558;
#line 391 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_559_559;
#line 391 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__QVarsTerm_450;
#line 391 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__SubTerm_451;
#line 391 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__GenericVarSet_458;
#line 391 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__MaybeStateVarsAndVars_459;
#line 391 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__MaybeSubGoal_460;
#line 391 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__V_486_486;
#line 391 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__V_487_487;
#line 426 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__Vars0_461;
#line 426 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__StateVars0_462;
#line 426 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__SubGoal_463;

#line 390 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 390 "prog_io_dcg.m"
                            if (parse_tree__prog_io_dcg__succeeded)
#line 390 "prog_io_dcg.m"
                              {
#line 390 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__QVarsTerm_450 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 390 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__V_486_486 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 390 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_486_486)) == (MR_mktag((MR_Integer) 1)));
#line 390 "prog_io_dcg.m"
                                if (parse_tree__prog_io_dcg__succeeded)
#line 390 "prog_io_dcg.m"
                                  {
#line 390 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__SubTerm_451 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_486_486, (MR_Integer) 0)));
#line 390 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__V_487_487 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_486_486, (MR_Integer) 1)));
#line 390 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_487_487 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 391 "prog_io_dcg.m"
                                    if (parse_tree__prog_io_dcg__succeeded)
#line 391 "prog_io_dcg.m"
                                      {
#line 4576 "parse_tree.prog_io_dcg.c"
                                        parse_tree__prog_io_dcg__TypeCtorInfo_558_558 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 4578 "parse_tree.prog_io_dcg.c"
                                        parse_tree__prog_io_dcg__TypeCtorInfo_559_559 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 394 "prog_io_dcg.m"
                                        {
#line 394 "prog_io_dcg.m"
                                          mercury__varset__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_558_558, parse_tree__prog_io_dcg__TypeCtorInfo_559_559, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, &parse_tree__prog_io_dcg__GenericVarSet_458);
                                        }
#line 395 "prog_io_dcg.m"
                                        {
#line 395 "prog_io_dcg.m"
                                          parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_559_559, parse_tree__prog_io_dcg__QVarsTerm_450, parse_tree__prog_io_dcg__GenericVarSet_458, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeStateVarsAndVars_459);
                                        }
#line 397 "prog_io_dcg.m"
                                        {
#line 397 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubTerm_451, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeSubGoal_460, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                                        }
#line 400 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeStateVarsAndVars_459)) == (MR_mktag((MR_Integer) 1)));
#line 400 "prog_io_dcg.m"
                                        if (parse_tree__prog_io_dcg__succeeded)
#line 400 "prog_io_dcg.m"
                                          {
#line 400 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__Vars0_461 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeStateVarsAndVars_459, (MR_Integer) 0)));
#line 400 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__StateVars0_462 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeStateVarsAndVars_459, (MR_Integer) 1)));
#line 401 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoal_460)) == (MR_mktag((MR_Integer) 1)));
#line 401 "prog_io_dcg.m"
                                            if (parse_tree__prog_io_dcg__succeeded)
#line 401 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__SubGoal_463 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoal_460, (MR_Integer) 0)));
#line 400 "prog_io_dcg.m"
                                          }
#line 426 "prog_io_dcg.m"
                                        if (parse_tree__prog_io_dcg__succeeded)
#line 403 "prog_io_dcg.m"
                                          {
#line 403 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__TypeInfo_564_564 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[4];
#line 403 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__TypeInfo_565_565 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 403 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__StateVars_464;
#line 403 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__Vars_465;
#line 403 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__SubGoalExpr_466;
#line 403 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__SubContext_467;
#line 403 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__GoalExpr_468;
#line 403 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__Goal_477;

#line 403 "prog_io_dcg.m"
                                            {
#line 403 "prog_io_dcg.m"
                                              mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_564_564, parse_tree__prog_io_dcg__TypeInfo_565_565, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[3], parse_tree__prog_io_dcg__StateVars0_462, &parse_tree__prog_io_dcg__StateVars_464);
                                            }
#line 404 "prog_io_dcg.m"
                                            {
#line 404 "prog_io_dcg.m"
                                              mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_564_564, parse_tree__prog_io_dcg__TypeInfo_565_565, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[4], parse_tree__prog_io_dcg__Vars0_461, &parse_tree__prog_io_dcg__Vars_465);
                                            }
#line 405 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__SubGoalExpr_466 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__SubGoal_463, (MR_Integer) 0)));
#line 405 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__SubContext_467 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__SubGoal_463, (MR_Integer) 1)));
#line 410 "prog_io_dcg.m"
                                            if ((parse_tree__prog_io_dcg__StateVars_464 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 410 "prog_io_dcg.m"
                                              if ((parse_tree__prog_io_dcg__Vars_465 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 407 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__GoalExpr_468 = parse_tree__prog_io_dcg__SubGoalExpr_466;
#line 410 "prog_io_dcg.m"
                                              else
#line 417 "prog_io_dcg.m"
                                                {
#line 417 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__GoalExpr_468 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 417 "prog_io_dcg.m"
                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_468, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 417 "prog_io_dcg.m"
                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_468, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_465));
#line 417 "prog_io_dcg.m"
                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_468, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_463));
#line 417 "prog_io_dcg.m"
                                                }
#line 410 "prog_io_dcg.m"
                                            else
#line 410 "prog_io_dcg.m"
                                              if ((parse_tree__prog_io_dcg__Vars_465 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 413 "prog_io_dcg.m"
                                                {
#line 413 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__GoalExpr_468 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 413 "prog_io_dcg.m"
                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_468, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 413 "prog_io_dcg.m"
                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_468, 1) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_464));
#line 413 "prog_io_dcg.m"
                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_468, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_463));
#line 413 "prog_io_dcg.m"
                                                }
#line 410 "prog_io_dcg.m"
                                              else
#line 419 "prog_io_dcg.m"
                                                {
#line 419 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__V_493_493;
#line 419 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__V_494_494;

#line 421 "prog_io_dcg.m"
                                                  {
#line 421 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__V_494_494 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 421 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_494_494, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 421 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_494_494, 1) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_464));
#line 421 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_494_494, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_463));
#line 421 "prog_io_dcg.m"
                                                  }
#line 422 "prog_io_dcg.m"
                                                  {
#line 422 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__V_493_493 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 422 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_493_493, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_494_494));
#line 422 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_493_493, 1) = ((MR_Box) (parse_tree__prog_io_dcg__SubContext_467));
#line 422 "prog_io_dcg.m"
                                                  }
#line 421 "prog_io_dcg.m"
                                                  {
#line 421 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__GoalExpr_468 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 421 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_468, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 421 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_468, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_465));
#line 421 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_468, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_493_493));
#line 421 "prog_io_dcg.m"
                                                  }
#line 419 "prog_io_dcg.m"
                                                }
#line 424 "prog_io_dcg.m"
                                            {
#line 424 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__Goal_477 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 424 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_477, 0) = ((MR_Box) (parse_tree__prog_io_dcg__GoalExpr_468));
#line 424 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_477, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 424 "prog_io_dcg.m"
                                            }
#line 425 "prog_io_dcg.m"
                                            {
#line 425 "prog_io_dcg.m"
                                              MR_Word base;
#line 425 "prog_io_dcg.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 425 "prog_io_dcg.m"
                                              *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 425 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_477));
#line 425 "prog_io_dcg.m"
                                            }
#line 403 "prog_io_dcg.m"
                                          }
#line 426 "prog_io_dcg.m"
                                        else
#line 427 "prog_io_dcg.m"
                                          {
#line 427 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__TypeInfo_570_570 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[5];
#line 427 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__VarsSpecs_478;
#line 427 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__SubGoalSpecs_479;
#line 427 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__V_495_495;

#line 427 "prog_io_dcg.m"
                                            {
#line 427 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__VarsSpecs_478 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_dcg__TypeInfo_570_570, parse_tree__prog_io_dcg__TypeInfo_570_570, parse_tree__prog_io_dcg__MaybeStateVarsAndVars_459);
                                            }
#line 428 "prog_io_dcg.m"
                                            {
#line 428 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__SubGoalSpecs_479 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[0], parse_tree__prog_io_dcg__MaybeSubGoal_460);
                                            }
#line 429 "prog_io_dcg.m"
                                            {
#line 429 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__V_495_495 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__VarsSpecs_478, parse_tree__prog_io_dcg__SubGoalSpecs_479);
                                            }
#line 429 "prog_io_dcg.m"
                                            {
#line 429 "prog_io_dcg.m"
                                              MR_Word base;
#line 429 "prog_io_dcg.m"
                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 429 "prog_io_dcg.m"
                                              *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 429 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_495_495));
#line 429 "prog_io_dcg.m"
                                            }
#line 427 "prog_io_dcg.m"
                                          }
#line 426 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 391 "prog_io_dcg.m"
                                      }
#line 390 "prog_io_dcg.m"
                                  }
#line 390 "prog_io_dcg.m"
                              }
#line 391 "prog_io_dcg.m"
                          }
#line 179 "prog_io_dcg.m"
                        else
#line 179 "prog_io_dcg.m"
                          if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "not") == 0))
#line 365 "prog_io_dcg.m"
                            {
#line 365 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__ATerm_410;
#line 365 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__MaybeAGoal_417;
#line 365 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__V_426_426;
#line 367 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__V_418_418;

#line 364 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 364 "prog_io_dcg.m"
                              if (parse_tree__prog_io_dcg__succeeded)
#line 364 "prog_io_dcg.m"
                                {
#line 364 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__ATerm_410 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 364 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__V_426_426 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 364 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_426_426 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 365 "prog_io_dcg.m"
                                  if (parse_tree__prog_io_dcg__succeeded)
#line 365 "prog_io_dcg.m"
                                    {
#line 365 "prog_io_dcg.m"
                                      *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__HeadVar__10_10;
#line 367 "prog_io_dcg.m"
                                      {
#line 367 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ATerm_410, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeAGoal_417, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, &parse_tree__prog_io_dcg__V_418_418);
                                      }
#line 373 "prog_io_dcg.m"
                                      if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeAGoal_417)) == (MR_mktag((MR_Integer) 0))))
#line 375 "prog_io_dcg.m"
                                        *parse_tree__prog_io_dcg__MaybeGoal_5 = parse_tree__prog_io_dcg__MaybeAGoal_417;
#line 373 "prog_io_dcg.m"
                                      else
#line 370 "prog_io_dcg.m"
                                        {
#line 370 "prog_io_dcg.m"
                                          MR_Word parse_tree__prog_io_dcg__AGoal_419 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeAGoal_417, (MR_Integer) 0)));
#line 370 "prog_io_dcg.m"
                                          MR_Word parse_tree__prog_io_dcg__Goal_420;
#line 370 "prog_io_dcg.m"
                                          MR_Word parse_tree__prog_io_dcg__V_429_429;

#line 371 "prog_io_dcg.m"
                                          {
#line 371 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__V_429_429 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_429_429, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 371 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_429_429, 1) = ((MR_Box) (parse_tree__prog_io_dcg__AGoal_419));
#line 371 "prog_io_dcg.m"
                                          }
#line 371 "prog_io_dcg.m"
                                          {
#line 371 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__Goal_420 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 371 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_420, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_429_429));
#line 371 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_420, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 371 "prog_io_dcg.m"
                                          }
#line 372 "prog_io_dcg.m"
                                          {
#line 372 "prog_io_dcg.m"
                                            MR_Word base;
#line 372 "prog_io_dcg.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 372 "prog_io_dcg.m"
                                            *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 372 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_420));
#line 372 "prog_io_dcg.m"
                                          }
#line 370 "prog_io_dcg.m"
                                        }
#line 373 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 365 "prog_io_dcg.m"
                                    }
#line 364 "prog_io_dcg.m"
                                }
#line 365 "prog_io_dcg.m"
                            }
#line 179 "prog_io_dcg.m"
                          else
#line 179 "prog_io_dcg.m"
                            if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "else") == 0))
#line 358 "prog_io_dcg.m"
                              {
#line 358 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__IfTerm_377;
#line 358 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__ElseTerm_378;
#line 358 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__CondTerm_385;
#line 358 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__ThenTerm_386;
#line 358 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__Context_388;
#line 358 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_395_395;
#line 358 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_396_396;
#line 358 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_397_397;
#line 358 "prog_io_dcg.m"
                                MR_String parse_tree__prog_io_dcg__V_398_398;
#line 358 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_399_399;
#line 358 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_400_400;
#line 358 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_401_401;
#line 358 "prog_io_dcg.m"
                                MR_String parse_tree__prog_io_dcg__V_402_402;
#line 358 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_403_403;
#line 358 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_404_404;
#line 358 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_405_405;
#line 358 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_406_406;
#line 361 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_387_387;

#line 357 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 357 "prog_io_dcg.m"
                                if (parse_tree__prog_io_dcg__succeeded)
#line 357 "prog_io_dcg.m"
                                  {
#line 357 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__IfTerm_377 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 357 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__V_395_395 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 357 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_395_395)) == (MR_mktag((MR_Integer) 1)));
#line 357 "prog_io_dcg.m"
                                    if (parse_tree__prog_io_dcg__succeeded)
#line 357 "prog_io_dcg.m"
                                      {
#line 357 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__ElseTerm_378 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_395_395, (MR_Integer) 0)));
#line 357 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__V_396_396 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_395_395, (MR_Integer) 1)));
#line 357 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_396_396 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "prog_io_dcg.m"
                                        if (parse_tree__prog_io_dcg__succeeded)
#line 358 "prog_io_dcg.m"
                                          {
#line 360 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__IfTerm_377)) == (MR_mktag((MR_Integer) 0)));
#line 360 "prog_io_dcg.m"
                                            if (parse_tree__prog_io_dcg__succeeded)
#line 360 "prog_io_dcg.m"
                                              {
#line 360 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__V_397_397 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__IfTerm_377, (MR_Integer) 0)));
#line 360 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__V_399_399 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__IfTerm_377, (MR_Integer) 1)));
#line 360 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__Context_388 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__IfTerm_377, (MR_Integer) 2)));
#line 360 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_397_397)) == (MR_mktag((MR_Integer) 0)));
#line 360 "prog_io_dcg.m"
                                                if (parse_tree__prog_io_dcg__succeeded)
#line 360 "prog_io_dcg.m"
                                                  {
#line 360 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__V_398_398 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_397_397, (MR_Integer) 0)));
#line 360 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_398_398, (MR_String) "if") == 0);
#line 358 "prog_io_dcg.m"
                                                    if (parse_tree__prog_io_dcg__succeeded)
#line 358 "prog_io_dcg.m"
                                                      {
#line 361 "prog_io_dcg.m"
                                                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_399_399)) == (MR_mktag((MR_Integer) 1)));
#line 361 "prog_io_dcg.m"
                                                        if (parse_tree__prog_io_dcg__succeeded)
#line 361 "prog_io_dcg.m"
                                                          {
#line 361 "prog_io_dcg.m"
                                                            parse_tree__prog_io_dcg__V_400_400 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_399_399, (MR_Integer) 0)));
#line 361 "prog_io_dcg.m"
                                                            parse_tree__prog_io_dcg__V_406_406 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_399_399, (MR_Integer) 1)));
#line 361 "prog_io_dcg.m"
                                                            parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_406_406 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "prog_io_dcg.m"
                                                            if (parse_tree__prog_io_dcg__succeeded)
#line 358 "prog_io_dcg.m"
                                                              {
#line 361 "prog_io_dcg.m"
                                                                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_400_400)) == (MR_mktag((MR_Integer) 0)));
#line 361 "prog_io_dcg.m"
                                                                if (parse_tree__prog_io_dcg__succeeded)
#line 361 "prog_io_dcg.m"
                                                                  {
#line 361 "prog_io_dcg.m"
                                                                    parse_tree__prog_io_dcg__V_401_401 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_400_400, (MR_Integer) 0)));
#line 361 "prog_io_dcg.m"
                                                                    parse_tree__prog_io_dcg__V_403_403 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_400_400, (MR_Integer) 1)));
#line 361 "prog_io_dcg.m"
                                                                    parse_tree__prog_io_dcg__V_387_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_400_400, (MR_Integer) 2)));
#line 361 "prog_io_dcg.m"
                                                                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_401_401)) == (MR_mktag((MR_Integer) 0)));
#line 361 "prog_io_dcg.m"
                                                                    if (parse_tree__prog_io_dcg__succeeded)
#line 361 "prog_io_dcg.m"
                                                                      {
#line 361 "prog_io_dcg.m"
                                                                        parse_tree__prog_io_dcg__V_402_402 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_401_401, (MR_Integer) 0)));
#line 361 "prog_io_dcg.m"
                                                                        parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_402_402, (MR_String) "then") == 0);
#line 358 "prog_io_dcg.m"
                                                                        if (parse_tree__prog_io_dcg__succeeded)
#line 358 "prog_io_dcg.m"
                                                                          {
#line 361 "prog_io_dcg.m"
                                                                            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_403_403)) == (MR_mktag((MR_Integer) 1)));
#line 361 "prog_io_dcg.m"
                                                                            if (parse_tree__prog_io_dcg__succeeded)
#line 361 "prog_io_dcg.m"
                                                                              {
#line 361 "prog_io_dcg.m"
                                                                                parse_tree__prog_io_dcg__CondTerm_385 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_403_403, (MR_Integer) 0)));
#line 361 "prog_io_dcg.m"
                                                                                parse_tree__prog_io_dcg__V_404_404 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_403_403, (MR_Integer) 1)));
#line 361 "prog_io_dcg.m"
                                                                                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_404_404)) == (MR_mktag((MR_Integer) 1)));
#line 361 "prog_io_dcg.m"
                                                                                if (parse_tree__prog_io_dcg__succeeded)
#line 361 "prog_io_dcg.m"
                                                                                  {
#line 361 "prog_io_dcg.m"
                                                                                    parse_tree__prog_io_dcg__ThenTerm_386 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_404_404, (MR_Integer) 0)));
#line 361 "prog_io_dcg.m"
                                                                                    parse_tree__prog_io_dcg__V_405_405 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_404_404, (MR_Integer) 1)));
#line 361 "prog_io_dcg.m"
                                                                                    parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_405_405 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "prog_io_dcg.m"
                                                                                    if (parse_tree__prog_io_dcg__succeeded)
#line 358 "prog_io_dcg.m"
                                                                                      {
#line 362 "prog_io_dcg.m"
                                                                                        {
#line 362 "prog_io_dcg.m"
                                                                                          parse_tree__prog_io_dcg__parse_dcg_if_then_else_12_p_0(parse_tree__prog_io_dcg__CondTerm_385, parse_tree__prog_io_dcg__ThenTerm_386, parse_tree__prog_io_dcg__ElseTerm_378, parse_tree__prog_io_dcg__Context_388, parse_tree__prog_io_dcg__HeadVar__4_4, parse_tree__prog_io_dcg__MaybeGoal_5, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                                                                                        }
#line 362 "prog_io_dcg.m"
                                                                                        parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 358 "prog_io_dcg.m"
                                                                                      }
#line 361 "prog_io_dcg.m"
                                                                                  }
#line 361 "prog_io_dcg.m"
                                                                              }
#line 358 "prog_io_dcg.m"
                                                                          }
#line 361 "prog_io_dcg.m"
                                                                      }
#line 361 "prog_io_dcg.m"
                                                                  }
#line 358 "prog_io_dcg.m"
                                                              }
#line 361 "prog_io_dcg.m"
                                                          }
#line 358 "prog_io_dcg.m"
                                                      }
#line 360 "prog_io_dcg.m"
                                                  }
#line 360 "prog_io_dcg.m"
                                              }
#line 358 "prog_io_dcg.m"
                                          }
#line 357 "prog_io_dcg.m"
                                      }
#line 357 "prog_io_dcg.m"
                                  }
#line 358 "prog_io_dcg.m"
                              }
#line 179 "prog_io_dcg.m"
                            else
#line 179 "prog_io_dcg.m"
                              if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "some") == 0))
#line 432 "prog_io_dcg.m"
                                {
#line 432 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_573_573;
#line 432 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_574_574;
#line 432 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__QVarsTerm_496;
#line 432 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__SubTerm_497;
#line 432 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__GenericVarSet_504;
#line 432 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__MaybeStateVarsAndVars_505;
#line 432 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__MaybeSubGoal_506;
#line 432 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__V_532_532;
#line 432 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__V_533_533;
#line 467 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__Vars0_507;
#line 467 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__StateVars0_508;
#line 467 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__SubGoal_509;

#line 431 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 431 "prog_io_dcg.m"
                                  if (parse_tree__prog_io_dcg__succeeded)
#line 431 "prog_io_dcg.m"
                                    {
#line 431 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__QVarsTerm_496 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 431 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__V_532_532 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 431 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_532_532)) == (MR_mktag((MR_Integer) 1)));
#line 431 "prog_io_dcg.m"
                                      if (parse_tree__prog_io_dcg__succeeded)
#line 431 "prog_io_dcg.m"
                                        {
#line 431 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__SubTerm_497 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_532_532, (MR_Integer) 0)));
#line 431 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__V_533_533 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_532_532, (MR_Integer) 1)));
#line 431 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_533_533 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 432 "prog_io_dcg.m"
                                          if (parse_tree__prog_io_dcg__succeeded)
#line 432 "prog_io_dcg.m"
                                            {
#line 5157 "parse_tree.prog_io_dcg.c"
                                              parse_tree__prog_io_dcg__TypeCtorInfo_573_573 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 5159 "parse_tree.prog_io_dcg.c"
                                              parse_tree__prog_io_dcg__TypeCtorInfo_574_574 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 435 "prog_io_dcg.m"
                                              {
#line 435 "prog_io_dcg.m"
                                                mercury__varset__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_573_573, parse_tree__prog_io_dcg__TypeCtorInfo_574_574, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, &parse_tree__prog_io_dcg__GenericVarSet_504);
                                              }
#line 436 "prog_io_dcg.m"
                                              {
#line 436 "prog_io_dcg.m"
                                                parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_574_574, parse_tree__prog_io_dcg__QVarsTerm_496, parse_tree__prog_io_dcg__GenericVarSet_504, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeStateVarsAndVars_505);
                                              }
#line 438 "prog_io_dcg.m"
                                              {
#line 438 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubTerm_497, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeSubGoal_506, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                                              }
#line 441 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeStateVarsAndVars_505)) == (MR_mktag((MR_Integer) 1)));
#line 441 "prog_io_dcg.m"
                                              if (parse_tree__prog_io_dcg__succeeded)
#line 441 "prog_io_dcg.m"
                                                {
#line 441 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__Vars0_507 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeStateVarsAndVars_505, (MR_Integer) 0)));
#line 441 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__StateVars0_508 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeStateVarsAndVars_505, (MR_Integer) 1)));
#line 442 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoal_506)) == (MR_mktag((MR_Integer) 1)));
#line 442 "prog_io_dcg.m"
                                                  if (parse_tree__prog_io_dcg__succeeded)
#line 442 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__SubGoal_509 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoal_506, (MR_Integer) 0)));
#line 441 "prog_io_dcg.m"
                                                }
#line 467 "prog_io_dcg.m"
                                              if (parse_tree__prog_io_dcg__succeeded)
#line 444 "prog_io_dcg.m"
                                                {
#line 444 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__TypeInfo_579_579 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[4];
#line 444 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__TypeInfo_580_580 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 444 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__StateVars_510;
#line 444 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__Vars_511;
#line 444 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__SubGoalExpr_512;
#line 444 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__SubContext_513;
#line 444 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__GoalExpr_514;
#line 444 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__Goal_523;

#line 444 "prog_io_dcg.m"
                                                  {
#line 444 "prog_io_dcg.m"
                                                    mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_579_579, parse_tree__prog_io_dcg__TypeInfo_580_580, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[5], parse_tree__prog_io_dcg__StateVars0_508, &parse_tree__prog_io_dcg__StateVars_510);
                                                  }
#line 445 "prog_io_dcg.m"
                                                  {
#line 445 "prog_io_dcg.m"
                                                    mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_579_579, parse_tree__prog_io_dcg__TypeInfo_580_580, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[6], parse_tree__prog_io_dcg__Vars0_507, &parse_tree__prog_io_dcg__Vars_511);
                                                  }
#line 446 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__SubGoalExpr_512 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__SubGoal_509, (MR_Integer) 0)));
#line 446 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__SubContext_513 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__SubGoal_509, (MR_Integer) 1)));
#line 451 "prog_io_dcg.m"
                                                  if ((parse_tree__prog_io_dcg__StateVars_510 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 451 "prog_io_dcg.m"
                                                    if ((parse_tree__prog_io_dcg__Vars_511 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 448 "prog_io_dcg.m"
                                                      parse_tree__prog_io_dcg__GoalExpr_514 = parse_tree__prog_io_dcg__SubGoalExpr_512;
#line 451 "prog_io_dcg.m"
                                                    else
#line 458 "prog_io_dcg.m"
                                                      {
#line 458 "prog_io_dcg.m"
                                                        parse_tree__prog_io_dcg__GoalExpr_514 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 458 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_514, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 458 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_514, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_511));
#line 458 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_514, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_509));
#line 458 "prog_io_dcg.m"
                                                      }
#line 451 "prog_io_dcg.m"
                                                  else
#line 451 "prog_io_dcg.m"
                                                    if ((parse_tree__prog_io_dcg__Vars_511 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 454 "prog_io_dcg.m"
                                                      {
#line 454 "prog_io_dcg.m"
                                                        parse_tree__prog_io_dcg__GoalExpr_514 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 454 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_514, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 454 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_514, 1) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_510));
#line 454 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_514, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_509));
#line 454 "prog_io_dcg.m"
                                                      }
#line 451 "prog_io_dcg.m"
                                                    else
#line 460 "prog_io_dcg.m"
                                                      {
#line 460 "prog_io_dcg.m"
                                                        MR_Word parse_tree__prog_io_dcg__V_539_539;
#line 460 "prog_io_dcg.m"
                                                        MR_Word parse_tree__prog_io_dcg__V_540_540;

#line 462 "prog_io_dcg.m"
                                                        {
#line 462 "prog_io_dcg.m"
                                                          parse_tree__prog_io_dcg__V_540_540 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 462 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_540_540, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 462 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_540_540, 1) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_510));
#line 462 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_540_540, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_509));
#line 462 "prog_io_dcg.m"
                                                        }
#line 463 "prog_io_dcg.m"
                                                        {
#line 463 "prog_io_dcg.m"
                                                          parse_tree__prog_io_dcg__V_539_539 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 463 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_539_539, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_540_540));
#line 463 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_539_539, 1) = ((MR_Box) (parse_tree__prog_io_dcg__SubContext_513));
#line 463 "prog_io_dcg.m"
                                                        }
#line 462 "prog_io_dcg.m"
                                                        {
#line 462 "prog_io_dcg.m"
                                                          parse_tree__prog_io_dcg__GoalExpr_514 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 462 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_514, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 462 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_514, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_511));
#line 462 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_514, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_539_539));
#line 462 "prog_io_dcg.m"
                                                        }
#line 460 "prog_io_dcg.m"
                                                      }
#line 465 "prog_io_dcg.m"
                                                  {
#line 465 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__Goal_523 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 465 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_523, 0) = ((MR_Box) (parse_tree__prog_io_dcg__GoalExpr_514));
#line 465 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_523, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 465 "prog_io_dcg.m"
                                                  }
#line 466 "prog_io_dcg.m"
                                                  {
#line 466 "prog_io_dcg.m"
                                                    MR_Word base;
#line 466 "prog_io_dcg.m"
                                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 466 "prog_io_dcg.m"
                                                    *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 466 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_523));
#line 466 "prog_io_dcg.m"
                                                  }
#line 444 "prog_io_dcg.m"
                                                }
#line 467 "prog_io_dcg.m"
                                              else
#line 468 "prog_io_dcg.m"
                                                {
#line 468 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__TypeInfo_585_585 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[5];
#line 468 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__VarsSpecs_524;
#line 468 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__SubGoalSpecs_525;
#line 468 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__V_541_541;

#line 468 "prog_io_dcg.m"
                                                  {
#line 468 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__VarsSpecs_524 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_dcg__TypeInfo_585_585, parse_tree__prog_io_dcg__TypeInfo_585_585, parse_tree__prog_io_dcg__MaybeStateVarsAndVars_505);
                                                  }
#line 469 "prog_io_dcg.m"
                                                  {
#line 469 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__SubGoalSpecs_525 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[0], parse_tree__prog_io_dcg__MaybeSubGoal_506);
                                                  }
#line 470 "prog_io_dcg.m"
                                                  {
#line 470 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__V_541_541 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__VarsSpecs_524, parse_tree__prog_io_dcg__SubGoalSpecs_525);
                                                  }
#line 470 "prog_io_dcg.m"
                                                  {
#line 470 "prog_io_dcg.m"
                                                    MR_Word base;
#line 470 "prog_io_dcg.m"
                                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 470 "prog_io_dcg.m"
                                                    *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 470 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_541_541));
#line 470 "prog_io_dcg.m"
                                                  }
#line 468 "prog_io_dcg.m"
                                                }
#line 467 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 432 "prog_io_dcg.m"
                                            }
#line 431 "prog_io_dcg.m"
                                        }
#line 431 "prog_io_dcg.m"
                                    }
#line 432 "prog_io_dcg.m"
                                }
#line 179 "prog_io_dcg.m"
                              else
#line 179 "prog_io_dcg.m"
                                if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "impure") == 0))
#line 186 "prog_io_dcg.m"
                                  {
#line 186 "prog_io_dcg.m"
                                    MR_Word parse_tree__prog_io_dcg__G_28;
#line 186 "prog_io_dcg.m"
                                    MR_Word parse_tree__prog_io_dcg__V_41_41;
#line 186 "prog_io_dcg.m"
                                    MR_Word parse_tree__prog_io_dcg__V_42_42;

#line 185 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 185 "prog_io_dcg.m"
                                    if (parse_tree__prog_io_dcg__succeeded)
#line 185 "prog_io_dcg.m"
                                      {
#line 185 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__G_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 185 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 185 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 186 "prog_io_dcg.m"
                                        if (parse_tree__prog_io_dcg__succeeded)
#line 186 "prog_io_dcg.m"
                                          {
#line 187 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__V_42_42 = (MR_Integer) 2;
#line 187 "prog_io_dcg.m"
                                            {
#line 187 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__parse_dcg_goal_with_purity_10_p_0(parse_tree__prog_io_dcg__G_28, parse_tree__prog_io_dcg__V_42_42, parse_tree__prog_io_dcg__HeadVar__4_4, parse_tree__prog_io_dcg__MaybeGoal_5, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                                            }
#line 187 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 186 "prog_io_dcg.m"
                                          }
#line 185 "prog_io_dcg.m"
                                      }
#line 186 "prog_io_dcg.m"
                                  }
#line 179 "prog_io_dcg.m"
                                else
#line 179 "prog_io_dcg.m"
                                  if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "semipure") == 0))
#line 190 "prog_io_dcg.m"
                                    {
#line 190 "prog_io_dcg.m"
                                      MR_Word parse_tree__prog_io_dcg__G_46;
#line 190 "prog_io_dcg.m"
                                      MR_Word parse_tree__prog_io_dcg__V_59_59;
#line 190 "prog_io_dcg.m"
                                      MR_Word parse_tree__prog_io_dcg__V_60_60;

#line 189 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 189 "prog_io_dcg.m"
                                      if (parse_tree__prog_io_dcg__succeeded)
#line 189 "prog_io_dcg.m"
                                        {
#line 189 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__G_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 189 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 189 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 190 "prog_io_dcg.m"
                                          if (parse_tree__prog_io_dcg__succeeded)
#line 190 "prog_io_dcg.m"
                                            {
#line 191 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__V_60_60 = (MR_Integer) 1;
#line 191 "prog_io_dcg.m"
                                              {
#line 191 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__parse_dcg_goal_with_purity_10_p_0(parse_tree__prog_io_dcg__G_46, parse_tree__prog_io_dcg__V_60_60, parse_tree__prog_io_dcg__HeadVar__4_4, parse_tree__prog_io_dcg__MaybeGoal_5, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                                              }
#line 191 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 190 "prog_io_dcg.m"
                                            }
#line 189 "prog_io_dcg.m"
                                        }
#line 190 "prog_io_dcg.m"
                                    }
#line 179 "prog_io_dcg.m"
                                  else
#line 179 "prog_io_dcg.m"
                                    if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "promise_pure") == 0))
#line 194 "prog_io_dcg.m"
                                      {
#line 194 "prog_io_dcg.m"
                                        MR_Word parse_tree__prog_io_dcg__G_64;
#line 194 "prog_io_dcg.m"
                                        MR_Word parse_tree__prog_io_dcg__MaybeGoal0_71;
#line 194 "prog_io_dcg.m"
                                        MR_Word parse_tree__prog_io_dcg__V_81_81;

#line 193 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 193 "prog_io_dcg.m"
                                        if (parse_tree__prog_io_dcg__succeeded)
#line 193 "prog_io_dcg.m"
                                          {
#line 193 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__G_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 193 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 193 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_81_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 194 "prog_io_dcg.m"
                                            if (parse_tree__prog_io_dcg__succeeded)
#line 194 "prog_io_dcg.m"
                                              {
#line 195 "prog_io_dcg.m"
                                                {
#line 195 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__G_64, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeGoal0_71, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                                                }
#line 200 "prog_io_dcg.m"
                                                if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal0_71)) == (MR_mktag((MR_Integer) 0))))
#line 202 "prog_io_dcg.m"
                                                  *parse_tree__prog_io_dcg__MaybeGoal_5 = parse_tree__prog_io_dcg__MaybeGoal0_71;
#line 200 "prog_io_dcg.m"
                                                else
#line 197 "prog_io_dcg.m"
                                                  {
#line 197 "prog_io_dcg.m"
                                                    MR_Word parse_tree__prog_io_dcg__Goal0_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal0_71, (MR_Integer) 0)));
#line 197 "prog_io_dcg.m"
                                                    MR_Word parse_tree__prog_io_dcg__Goal_73;
#line 197 "prog_io_dcg.m"
                                                    MR_Word parse_tree__prog_io_dcg__V_85_85;

#line 198 "prog_io_dcg.m"
                                                    {
#line 198 "prog_io_dcg.m"
                                                      parse_tree__prog_io_dcg__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 198 "prog_io_dcg.m"
                                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 198 "prog_io_dcg.m"
                                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_85_85, 1) = ((MR_Box) ((MR_Integer) 0));
#line 198 "prog_io_dcg.m"
                                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_85_85, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Goal0_72));
#line 198 "prog_io_dcg.m"
                                                    }
#line 198 "prog_io_dcg.m"
                                                    {
#line 198 "prog_io_dcg.m"
                                                      parse_tree__prog_io_dcg__Goal_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 198 "prog_io_dcg.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_73, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_85_85));
#line 198 "prog_io_dcg.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_73, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 198 "prog_io_dcg.m"
                                                    }
#line 199 "prog_io_dcg.m"
                                                    {
#line 199 "prog_io_dcg.m"
                                                      MR_Word base;
#line 199 "prog_io_dcg.m"
                                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 199 "prog_io_dcg.m"
                                                      *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 199 "prog_io_dcg.m"
                                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_73));
#line 199 "prog_io_dcg.m"
                                                    }
#line 197 "prog_io_dcg.m"
                                                  }
#line 200 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 194 "prog_io_dcg.m"
                                              }
#line 193 "prog_io_dcg.m"
                                          }
#line 194 "prog_io_dcg.m"
                                      }
#line 179 "prog_io_dcg.m"
                                    else
#line 179 "prog_io_dcg.m"
                                      if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "promise_impure") == 0))
#line 216 "prog_io_dcg.m"
                                        {
#line 216 "prog_io_dcg.m"
                                          MR_Word parse_tree__prog_io_dcg__G_110;
#line 216 "prog_io_dcg.m"
                                          MR_Word parse_tree__prog_io_dcg__MaybeGoal0_117;
#line 216 "prog_io_dcg.m"
                                          MR_Word parse_tree__prog_io_dcg__V_127_127;

#line 215 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 215 "prog_io_dcg.m"
                                          if (parse_tree__prog_io_dcg__succeeded)
#line 215 "prog_io_dcg.m"
                                            {
#line 215 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__G_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 215 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 215 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_127_127 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_io_dcg.m"
                                              if (parse_tree__prog_io_dcg__succeeded)
#line 216 "prog_io_dcg.m"
                                                {
#line 217 "prog_io_dcg.m"
                                                  {
#line 217 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__G_110, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeGoal0_117, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                                                  }
#line 222 "prog_io_dcg.m"
                                                  if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal0_117)) == (MR_mktag((MR_Integer) 0))))
#line 224 "prog_io_dcg.m"
                                                    *parse_tree__prog_io_dcg__MaybeGoal_5 = parse_tree__prog_io_dcg__MaybeGoal0_117;
#line 222 "prog_io_dcg.m"
                                                  else
#line 219 "prog_io_dcg.m"
                                                    {
#line 219 "prog_io_dcg.m"
                                                      MR_Word parse_tree__prog_io_dcg__Goal0_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal0_117, (MR_Integer) 0)));
#line 219 "prog_io_dcg.m"
                                                      MR_Word parse_tree__prog_io_dcg__Goal_119;
#line 219 "prog_io_dcg.m"
                                                      MR_Word parse_tree__prog_io_dcg__V_131_131;

#line 220 "prog_io_dcg.m"
                                                      {
#line 220 "prog_io_dcg.m"
                                                        parse_tree__prog_io_dcg__V_131_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 220 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_131_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 220 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_131_131, 1) = ((MR_Box) ((MR_Integer) 2));
#line 220 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_131_131, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Goal0_118));
#line 220 "prog_io_dcg.m"
                                                      }
#line 220 "prog_io_dcg.m"
                                                      {
#line 220 "prog_io_dcg.m"
                                                        parse_tree__prog_io_dcg__Goal_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 220 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_119, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_131_131));
#line 220 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_119, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 220 "prog_io_dcg.m"
                                                      }
#line 221 "prog_io_dcg.m"
                                                      {
#line 221 "prog_io_dcg.m"
                                                        MR_Word base;
#line 221 "prog_io_dcg.m"
                                                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 221 "prog_io_dcg.m"
                                                        *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 221 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_119));
#line 221 "prog_io_dcg.m"
                                                      }
#line 219 "prog_io_dcg.m"
                                                    }
#line 222 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 216 "prog_io_dcg.m"
                                                }
#line 215 "prog_io_dcg.m"
                                            }
#line 216 "prog_io_dcg.m"
                                        }
#line 179 "prog_io_dcg.m"
                                      else
#line 179 "prog_io_dcg.m"
                                        if ((strcmp(parse_tree__prog_io_dcg__HeadVar__1_1, (MR_String) "promise_semipure") == 0))
#line 205 "prog_io_dcg.m"
                                          {
#line 205 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__G_87;
#line 205 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__MaybeGoal0_94;
#line 205 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__V_104_104;

#line 204 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 204 "prog_io_dcg.m"
                                            if (parse_tree__prog_io_dcg__succeeded)
#line 204 "prog_io_dcg.m"
                                              {
#line 204 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__G_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 204 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_104_104 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "prog_io_dcg.m"
                                                if (parse_tree__prog_io_dcg__succeeded)
#line 205 "prog_io_dcg.m"
                                                  {
#line 206 "prog_io_dcg.m"
                                                    {
#line 206 "prog_io_dcg.m"
                                                      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__G_87, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeGoal0_94, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                                                    }
#line 211 "prog_io_dcg.m"
                                                    if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal0_94)) == (MR_mktag((MR_Integer) 0))))
#line 213 "prog_io_dcg.m"
                                                      *parse_tree__prog_io_dcg__MaybeGoal_5 = parse_tree__prog_io_dcg__MaybeGoal0_94;
#line 211 "prog_io_dcg.m"
                                                    else
#line 208 "prog_io_dcg.m"
                                                      {
#line 208 "prog_io_dcg.m"
                                                        MR_Word parse_tree__prog_io_dcg__Goal0_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal0_94, (MR_Integer) 0)));
#line 208 "prog_io_dcg.m"
                                                        MR_Word parse_tree__prog_io_dcg__Goal_96;
#line 208 "prog_io_dcg.m"
                                                        MR_Word parse_tree__prog_io_dcg__V_108_108;

#line 209 "prog_io_dcg.m"
                                                        {
#line 209 "prog_io_dcg.m"
                                                          parse_tree__prog_io_dcg__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 209 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 209 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_108_108, 1) = ((MR_Box) ((MR_Integer) 1));
#line 209 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_108_108, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Goal0_95));
#line 209 "prog_io_dcg.m"
                                                        }
#line 209 "prog_io_dcg.m"
                                                        {
#line 209 "prog_io_dcg.m"
                                                          parse_tree__prog_io_dcg__Goal_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 209 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_96, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_108_108));
#line 209 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_96, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 209 "prog_io_dcg.m"
                                                        }
#line 210 "prog_io_dcg.m"
                                                        {
#line 210 "prog_io_dcg.m"
                                                          MR_Word base;
#line 210 "prog_io_dcg.m"
                                                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 210 "prog_io_dcg.m"
                                                          *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 210 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_96));
#line 210 "prog_io_dcg.m"
                                                        }
#line 208 "prog_io_dcg.m"
                                                      }
#line 211 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 205 "prog_io_dcg.m"
                                                  }
#line 204 "prog_io_dcg.m"
                                              }
#line 205 "prog_io_dcg.m"
                                          }
#line 179 "prog_io_dcg.m"
                                        else
#line 179 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__succeeded = MR_FALSE;
#line 179 "prog_io_dcg.m"
    return parse_tree__prog_io_dcg__succeeded;
#line 179 "prog_io_dcg.m"
  }
#line 172 "prog_io_dcg.m"
}

#line 130 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0_1(
#line 130 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 130 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 130 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 130 "prog_io_dcg.m"
{
#line 130 "prog_io_dcg.m"
  {
#line 130 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 130 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv0_HeadVar__2_67;

#line 130 "prog_io_dcg.m"
    {
#line 130 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal__130__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv0_HeadVar__2_67);
    }
#line 130 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv0_HeadVar__2_67));
#line 130 "prog_io_dcg.m"
  }
#line 130 "prog_io_dcg.m"
}

#line 111 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(
#line 111 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_10,
#line 111 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_11,
#line 111 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_12,
#line 111 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_28,
#line 111 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_29,
#line 111 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_30,
#line 111 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_31,
#line 111 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_32,
#line 111 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Var_33)
#line 111 "prog_io_dcg.m"
{
#line 115 "prog_io_dcg.m"
  {
#line 115 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 115 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Context_18;
#line 146 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__SymName_21;
#line 146 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Args0_22;
#line 124 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_65_65;
#line 124 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__ProgTerm_20;

#line 119 "prog_io_dcg.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__Term_10)) == (MR_mktag((MR_Integer) 0))))
#line 118 "prog_io_dcg.m"
      {
#line 118 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 0)));
#line 118 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 1)));

#line 118 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 2)));
#line 118 "prog_io_dcg.m"
      }
#line 119 "prog_io_dcg.m"
    else
#line 120 "prog_io_dcg.m"
      {
#line 120 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 0)));

#line 120 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 1)));
#line 120 "prog_io_dcg.m"
      }
#line 5856 "parse_tree.prog_io_dcg.c"
    parse_tree__prog_io_dcg__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 124 "prog_io_dcg.m"
    {
#line 124 "prog_io_dcg.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_dcg__TypeCtorInfo_65_65, parse_tree__prog_io_dcg__Term_10, &parse_tree__prog_io_dcg__ProgTerm_20);
    }
#line 125 "prog_io_dcg.m"
    {
#line 125 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_65_65, parse_tree__prog_io_dcg__ProgTerm_20, &parse_tree__prog_io_dcg__SymName_21, &parse_tree__prog_io_dcg__Args0_22);
    }
#line 146 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 135 "prog_io_dcg.m"
      {
#line 135 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__MaybeGoalPrime_25;
#line 135 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_35_35;
#line 135 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_36_36;
#line 135 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Var_37_37;
#line 129 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_70_70;
#line 129 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_71_71;
#line 129 "prog_io_dcg.m"
        MR_String parse_tree__prog_io_dcg__Functor_23;
#line 129 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Args1_24;
#line 129 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_34_34;

#line 129 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__SymName_21)) == (MR_mktag((MR_Integer) 0)));
#line 129 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 129 "prog_io_dcg.m"
          {
#line 129 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Functor_23 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__SymName_21, (MR_Integer) 0)));
#line 130 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_34_34 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[2];
#line 5901 "parse_tree.prog_io_dcg.c"
            parse_tree__prog_io_dcg__TypeInfo_70_70 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[0];
#line 5903 "parse_tree.prog_io_dcg.c"
            parse_tree__prog_io_dcg__TypeInfo_71_71 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[1];
#line 130 "prog_io_dcg.m"
            {
#line 130 "prog_io_dcg.m"
              mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_70_70, parse_tree__prog_io_dcg__TypeInfo_71_71, parse_tree__prog_io_dcg__V_34_34, parse_tree__prog_io_dcg__Args0_22, &parse_tree__prog_io_dcg__Args1_24);
            }
#line 131 "prog_io_dcg.m"
            {
#line 131 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0(parse_tree__prog_io_dcg__Functor_23, parse_tree__prog_io_dcg__Args1_24, parse_tree__prog_io_dcg__Context_18, parse_tree__prog_io_dcg__ContextPieces_11, &parse_tree__prog_io_dcg__MaybeGoalPrime_25, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_28, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_35_35, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_30, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_36_36, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_32, &parse_tree__prog_io_dcg__STATE_VARIABLE_Var_37_37);
            }
#line 129 "prog_io_dcg.m"
          }
#line 135 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 134 "prog_io_dcg.m"
          {
#line 134 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__STATE_VARIABLE_Var_33 = parse_tree__prog_io_dcg__STATE_VARIABLE_Var_37_37;
#line 134 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_31 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_36_36;
#line 134 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_29 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_35_35;
#line 134 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__MaybeGoal_12 = parse_tree__prog_io_dcg__MaybeGoalPrime_25;
#line 134 "prog_io_dcg.m"
          }
#line 135 "prog_io_dcg.m"
        else
#line 139 "prog_io_dcg.m"
          {
#line 139 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_89;
#line 139 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Args_26;
#line 139 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Goal_27;
#line 139 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_40_40;
#line 139 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_41_41;
#line 139 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_42_42;
#line 139 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_43_43;
#line 139 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_45_45;
#line 139 "prog_io_dcg.m"
            MR_Integer parse_tree__prog_io_dcg__N_82;
#line 139 "prog_io_dcg.m"
            MR_String parse_tree__prog_io_dcg__StringN_83;
#line 139 "prog_io_dcg.m"
            MR_String parse_tree__prog_io_dcg__VarName_84;
#line 139 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_87;

#line 101 "prog_io_dcg.m"
            {
#line 101 "prog_io_dcg.m"
              mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_82, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_30, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_31);
            }
#line 102 "prog_io_dcg.m"
            {
#line 102 "prog_io_dcg.m"
              mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_82, &parse_tree__prog_io_dcg__StringN_83);
            }
#line 103 "prog_io_dcg.m"
            {
#line 103 "prog_io_dcg.m"
              mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_83, &parse_tree__prog_io_dcg__VarName_84);
            }
#line 5975 "parse_tree.prog_io_dcg.c"
            parse_tree__prog_io_dcg__TypeCtorInfo_20_89 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 104 "prog_io_dcg.m"
            {
#line 104 "prog_io_dcg.m"
              mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_89, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_33, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_28, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_87);
            }
#line 105 "prog_io_dcg.m"
            {
#line 105 "prog_io_dcg.m"
              mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_89, *parse_tree__prog_io_dcg__STATE_VARIABLE_Var_33, parse_tree__prog_io_dcg__VarName_84, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_87, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_29);
            }
#line 141 "prog_io_dcg.m"
            {
#line 141 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 141 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_32));
#line 141 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_41_41, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_18));
#line 141 "prog_io_dcg.m"
            }
#line 141 "prog_io_dcg.m"
            {
#line 141 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 141 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_43_43, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_Var_33));
#line 141 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_43_43, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_18));
#line 141 "prog_io_dcg.m"
            }
#line 141 "prog_io_dcg.m"
            {
#line 141 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 141 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_43_43));
#line 141 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 141 "prog_io_dcg.m"
            }
#line 141 "prog_io_dcg.m"
            {
#line 141 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 141 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_41_41));
#line 141 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_42_42));
#line 141 "prog_io_dcg.m"
            }
#line 140 "prog_io_dcg.m"
            {
#line 140 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__Args_26 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[0], parse_tree__prog_io_dcg__Args0_22, parse_tree__prog_io_dcg__V_40_40);
            }
#line 142 "prog_io_dcg.m"
            {
#line 142 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 142 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 142 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_45_45, 1) = ((MR_Box) (parse_tree__prog_io_dcg__SymName_21));
#line 142 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_45_45, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Args_26));
#line 142 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_45_45, 3) = ((MR_Box) ((MR_Integer) 0));
#line 142 "prog_io_dcg.m"
            }
#line 142 "prog_io_dcg.m"
            {
#line 142 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__Goal_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 142 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_27, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_45_45));
#line 142 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_27, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_18));
#line 142 "prog_io_dcg.m"
            }
#line 143 "prog_io_dcg.m"
            {
#line 143 "prog_io_dcg.m"
              MR_Word base;
#line 143 "prog_io_dcg.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 143 "prog_io_dcg.m"
              *parse_tree__prog_io_dcg__MaybeGoal_12 = base;
#line 143 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_27));
#line 143 "prog_io_dcg.m"
            }
#line 139 "prog_io_dcg.m"
          }
#line 135 "prog_io_dcg.m"
      }
#line 146 "prog_io_dcg.m"
    else
#line 150 "prog_io_dcg.m"
      {
#line 150 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_50_50;
#line 150 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_53_53;
#line 150 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_54_54;
#line 150 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_55_55;
#line 150 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_56_56;
#line 150 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_57_57;
#line 150 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__ProgTerm_62;
#line 150 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Goal_63;

#line 150 "prog_io_dcg.m"
        {
#line 150 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__new_dcg_var_5_p_0(parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_28, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_29, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_30, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_31, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_33);
        }
#line 151 "prog_io_dcg.m"
        {
#line 151 "prog_io_dcg.m"
          mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__Term_10, &parse_tree__prog_io_dcg__ProgTerm_62);
        }
#line 153 "prog_io_dcg.m"
        {
#line 153 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_32));
#line 153 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_55_55, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_18));
#line 153 "prog_io_dcg.m"
        }
#line 153 "prog_io_dcg.m"
        {
#line 153 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_57_57, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_Var_33));
#line 153 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_18));
#line 153 "prog_io_dcg.m"
        }
#line 153 "prog_io_dcg.m"
        {
#line 153 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_57_57));
#line 153 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 153 "prog_io_dcg.m"
        }
#line 153 "prog_io_dcg.m"
        {
#line 153 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_55_55));
#line 153 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_56_56));
#line 153 "prog_io_dcg.m"
        }
#line 153 "prog_io_dcg.m"
        {
#line 153 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_dcg__ProgTerm_62));
#line 153 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_54_54));
#line 153 "prog_io_dcg.m"
        }
#line 152 "prog_io_dcg.m"
        {
#line 152 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 152 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 152 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_50_50, 1) = ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_4[0]));
#line 152 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_50_50, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_53_53));
#line 152 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_50_50, 3) = ((MR_Box) ((MR_Integer) 0));
#line 152 "prog_io_dcg.m"
        }
#line 154 "prog_io_dcg.m"
        {
#line 154 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__Goal_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 154 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_63, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_50_50));
#line 154 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_63, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_18));
#line 154 "prog_io_dcg.m"
        }
#line 155 "prog_io_dcg.m"
        {
#line 155 "prog_io_dcg.m"
          MR_Word base;
#line 155 "prog_io_dcg.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 155 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeGoal_12 = base;
#line 155 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_63));
#line 155 "prog_io_dcg.m"
        }
#line 150 "prog_io_dcg.m"
      }
#line 115 "prog_io_dcg.m"
  }
#line 111 "prog_io_dcg.m"
}

#line 97 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__new_dcg_var_5_p_0(
#line 97 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_12,
#line 97 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_13,
#line 97 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_14,
#line 97 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_15,
#line 97 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__DCG_0_Var_8)
#line 97 "prog_io_dcg.m"
{
#line 100 "prog_io_dcg.m"
  {
#line 100 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 100 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_20;
#line 100 "prog_io_dcg.m"
    MR_Integer parse_tree__prog_io_dcg__N_9;
#line 100 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__StringN_10;
#line 100 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__VarName_11;
#line 100 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18;

#line 101 "prog_io_dcg.m"
    {
#line 101 "prog_io_dcg.m"
      mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_9, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_14, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_15);
    }
#line 102 "prog_io_dcg.m"
    {
#line 102 "prog_io_dcg.m"
      mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_9, &parse_tree__prog_io_dcg__StringN_10);
    }
#line 103 "prog_io_dcg.m"
    {
#line 103 "prog_io_dcg.m"
      mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_10, &parse_tree__prog_io_dcg__VarName_11);
    }
#line 6241 "parse_tree.prog_io_dcg.c"
    parse_tree__prog_io_dcg__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 104 "prog_io_dcg.m"
    {
#line 104 "prog_io_dcg.m"
      mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_20, parse_tree__prog_io_dcg__DCG_0_Var_8, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_12, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18);
    }
#line 105 "prog_io_dcg.m"
    {
#line 105 "prog_io_dcg.m"
      mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_20, *parse_tree__prog_io_dcg__DCG_0_Var_8, parse_tree__prog_io_dcg__VarName_11, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_13);
#line 105 "prog_io_dcg.m"
      return;
    }
#line 100 "prog_io_dcg.m"
  }
#line 97 "prog_io_dcg.m"
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
#line 88 "prog_io_dcg.m"
  {
#line 88 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 88 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_36;
#line 88 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Counter0_14;
#line 88 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18;
#line 88 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_19_19;
#line 88 "prog_io_dcg.m"
    MR_Integer parse_tree__prog_io_dcg__N_29;
#line 88 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__StringN_30;
#line 88 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__VarName_31;
#line 88 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_34;
#line 90 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg___Counter_15;

#line 89 "prog_io_dcg.m"
    {
#line 89 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__V_19_19 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 101 "prog_io_dcg.m"
    {
#line 101 "prog_io_dcg.m"
      mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_29, parse_tree__prog_io_dcg__V_19_19, &parse_tree__prog_io_dcg__Counter0_14);
    }
#line 102 "prog_io_dcg.m"
    {
#line 102 "prog_io_dcg.m"
      mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_29, &parse_tree__prog_io_dcg__StringN_30);
    }
#line 103 "prog_io_dcg.m"
    {
#line 103 "prog_io_dcg.m"
      mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_30, &parse_tree__prog_io_dcg__VarName_31);
    }
#line 6322 "parse_tree.prog_io_dcg.c"
    parse_tree__prog_io_dcg__TypeCtorInfo_20_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 104 "prog_io_dcg.m"
    {
#line 104 "prog_io_dcg.m"
      mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_36, parse_tree__prog_io_dcg__DCGVar0_11, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_16, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_34);
    }
#line 105 "prog_io_dcg.m"
    {
#line 105 "prog_io_dcg.m"
      mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_36, *parse_tree__prog_io_dcg__DCGVar0_11, parse_tree__prog_io_dcg__VarName_31, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_34, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18);
    }
#line 90 "prog_io_dcg.m"
    {
#line 90 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__GoalTerm_8, parse_tree__prog_io_dcg__ContextPieces_9, parse_tree__prog_io_dcg__MaybeGoal_10, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_17, parse_tree__prog_io_dcg__Counter0_14, &parse_tree__prog_io_dcg___Counter_15, *parse_tree__prog_io_dcg__DCGVar0_11, parse_tree__prog_io_dcg__DCGVar_12);
    }
#line 88 "prog_io_dcg.m"
  }
#line 47 "prog_io_dcg.m"
}

#line 684 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0_1(
#line 684 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 684 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 684 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 684 "prog_io_dcg.m"
{
#line 684 "prog_io_dcg.m"
  {
#line 684 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 684 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv0_HeadVar__2_33;

#line 684 "prog_io_dcg.m"
    {
#line 684 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__process_dcg_clause__684__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv0_HeadVar__2_33);
    }
#line 684 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv0_HeadVar__2_33));
#line 684 "prog_io_dcg.m"
  }
#line 684 "prog_io_dcg.m"
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
#line 65 "prog_io_dcg.m"
  {
#line 65 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 65 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_33_33 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 65 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_49;
#line 65 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__ProgVarSet0_15;
#line 65 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__ProgVarSet1_16;
#line 65 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Counter0_17;
#line 65 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__DCG_0_Var_18;
#line 65 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeBody_20;
#line 65 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__ProgVarSet_21;
#line 65 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__DCG_Var_23;
#line 65 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_28_28;
#line 65 "prog_io_dcg.m"
    MR_Integer parse_tree__prog_io_dcg__N_42;
#line 65 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__StringN_43;
#line 65 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__VarName_44;
#line 65 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_47;
#line 71 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg___Counter_22;

#line 66 "prog_io_dcg.m"
    {
#line 66 "prog_io_dcg.m"
      mercury__varset__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_33_33, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__VarSet0_9, &parse_tree__prog_io_dcg__ProgVarSet0_15);
    }
#line 67 "prog_io_dcg.m"
    {
#line 67 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__V_28_28 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 101 "prog_io_dcg.m"
    {
#line 101 "prog_io_dcg.m"
      mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_42, parse_tree__prog_io_dcg__V_28_28, &parse_tree__prog_io_dcg__Counter0_17);
    }
#line 102 "prog_io_dcg.m"
    {
#line 102 "prog_io_dcg.m"
      mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_42, &parse_tree__prog_io_dcg__StringN_43);
    }
#line 103 "prog_io_dcg.m"
    {
#line 103 "prog_io_dcg.m"
      mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_43, &parse_tree__prog_io_dcg__VarName_44);
    }
#line 6453 "parse_tree.prog_io_dcg.c"
    parse_tree__prog_io_dcg__TypeCtorInfo_20_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 104 "prog_io_dcg.m"
    {
#line 104 "prog_io_dcg.m"
      mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_49, &parse_tree__prog_io_dcg__DCG_0_Var_18, parse_tree__prog_io_dcg__ProgVarSet0_15, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_47);
    }
#line 105 "prog_io_dcg.m"
    {
#line 105 "prog_io_dcg.m"
      mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_49, parse_tree__prog_io_dcg__DCG_0_Var_18, parse_tree__prog_io_dcg__VarName_44, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_47, &parse_tree__prog_io_dcg__ProgVarSet1_16);
    }
#line 71 "prog_io_dcg.m"
    {
#line 71 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__DCG_Body_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_dcg__MaybeBody_20, parse_tree__prog_io_dcg__ProgVarSet1_16, &parse_tree__prog_io_dcg__ProgVarSet_21, parse_tree__prog_io_dcg__Counter0_17, &parse_tree__prog_io_dcg___Counter_22, parse_tree__prog_io_dcg__DCG_0_Var_18, &parse_tree__prog_io_dcg__DCG_Var_23);
    }
#line 80 "prog_io_dcg.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeBody_20)) == (MR_mktag((MR_Integer) 0))))
#line 82 "prog_io_dcg.m"
      *parse_tree__prog_io_dcg__MaybeItem_14 = (MR_Word) parse_tree__prog_io_dcg__MaybeBody_20;
#line 80 "prog_io_dcg.m"
    else
#line 74 "prog_io_dcg.m"
      {
#line 74 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Body_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeBody_20, (MR_Integer) 0)));
#line 74 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__HeadResult_26;

#line 76 "prog_io_dcg.m"
        {
#line 76 "prog_io_dcg.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_33_33, parse_tree__prog_io_dcg__ModuleName_8, parse_tree__prog_io_dcg__DCG_Head_10, parse_tree__prog_io_dcg__VarSet0_9, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[7]), &parse_tree__prog_io_dcg__HeadResult_26);
        }
#line 683 "prog_io_dcg.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadResult_26)) == (MR_mktag((MR_Integer) 0))))
#line 691 "prog_io_dcg.m"
          {
#line 691 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Specs_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__HeadResult_26, (MR_Integer) 0)));

#line 692 "prog_io_dcg.m"
            {
#line 692 "prog_io_dcg.m"
              MR_Word base;
#line 692 "prog_io_dcg.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 692 "prog_io_dcg.m"
              *parse_tree__prog_io_dcg__MaybeItem_14 = base;
#line 692 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Specs_64));
#line 692 "prog_io_dcg.m"
            }
#line 691 "prog_io_dcg.m"
          }
#line 683 "prog_io_dcg.m"
        else
#line 683 "prog_io_dcg.m"
          {
#line 683 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__TypeInfo_37_78 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[0];
#line 683 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Name_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadResult_26, (MR_Integer) 0)));
#line 683 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Args0_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadResult_26, (MR_Integer) 1)));
#line 683 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Args1_60;
#line 683 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Args_61;
#line 683 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__ItemClause_62;
#line 683 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Item_63;
#line 683 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_66_66;
#line 683 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_67_67;
#line 683 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_68_68;
#line 683 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_69_69;

#line 684 "prog_io_dcg.m"
            {
#line 684 "prog_io_dcg.m"
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[1], parse_tree__prog_io_dcg__TypeInfo_37_78, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[1], parse_tree__prog_io_dcg__Args0_59, &parse_tree__prog_io_dcg__Args1_60);
            }
#line 685 "prog_io_dcg.m"
            {
#line 685 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_dcg__DCG_0_Var_18));
#line 685 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_67_67, 1) = ((MR_Box) (parse_tree__prog_io_dcg__DCG_Context_12));
#line 685 "prog_io_dcg.m"
            }
#line 685 "prog_io_dcg.m"
            {
#line 685 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_dcg__DCG_Var_23));
#line 685 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_69_69, 1) = ((MR_Box) (parse_tree__prog_io_dcg__DCG_Context_12));
#line 685 "prog_io_dcg.m"
            }
#line 685 "prog_io_dcg.m"
            {
#line 685 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_69_69));
#line 685 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 685 "prog_io_dcg.m"
            }
#line 685 "prog_io_dcg.m"
            {
#line 685 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_67_67));
#line 685 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_66_66, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_68_68));
#line 685 "prog_io_dcg.m"
            }
#line 685 "prog_io_dcg.m"
            {
#line 685 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__Args_61 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_dcg__TypeInfo_37_78, parse_tree__prog_io_dcg__Args1_60, parse_tree__prog_io_dcg__V_66_66);
            }
#line 686 "prog_io_dcg.m"
            {
#line 686 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__ItemClause_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 686 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 686 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_62, 1) = ((MR_Box) (parse_tree__prog_io_dcg__ProgVarSet_21));
#line 686 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_62, 2) = ((MR_Box) ((MR_Integer) 0));
#line 686 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_62, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Name_58));
#line 686 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_62, 4) = ((MR_Box) (parse_tree__prog_io_dcg__Args_61));
#line 686 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_62, 5) = ((MR_Box) (parse_tree__prog_io_dcg__Body_24));
#line 686 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_62, 6) = ((MR_Box) (parse_tree__prog_io_dcg__DCG_Context_12));
#line 686 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_62, 7) = ((MR_Box) (parse_tree__prog_io_dcg__SeqNum_13));
#line 686 "prog_io_dcg.m"
            }
#line 688 "prog_io_dcg.m"
            {
#line 688 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__Item_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Item_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 688 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Item_63, 1) = ((MR_Box) (parse_tree__prog_io_dcg__ItemClause_62));
#line 688 "prog_io_dcg.m"
            }
#line 689 "prog_io_dcg.m"
            {
#line 689 "prog_io_dcg.m"
              MR_Word base;
#line 689 "prog_io_dcg.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 689 "prog_io_dcg.m"
              *parse_tree__prog_io_dcg__MaybeItem_14 = base;
#line 689 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Item_63));
#line 689 "prog_io_dcg.m"
            }
#line 683 "prog_io_dcg.m"
          }
#line 74 "prog_io_dcg.m"
      }
#line 65 "prog_io_dcg.m"
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
