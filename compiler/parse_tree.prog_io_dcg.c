/*
** Automatically generated from `prog_io_dcg.m'
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




#line 136 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 139 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 142 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 145 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 665 "prog_io_dcg.m"
static MR_bool MR_CALL 
parse_tree__prog_io_dcg__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
#line 665 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__List0_4,
#line 665 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_5,
#line 665 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__List_6);

#line 685 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__process_dcg_clause__685__1_2_p_0(
#line 685 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_32,
#line 685 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_33);

#line 540 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__540__1_2_p_0(
#line 540 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_57,
#line 540 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_58);

#line 539 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__539__1_2_p_0(
#line 539 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_51,
#line 539 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_52);

#line 446 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__446__1_2_p_0(
#line 446 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_581,
#line 446 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_582);

#line 445 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__445__1_2_p_0(
#line 445 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_575,
#line 445 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_576);

#line 405 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__405__1_2_p_0(
#line 405 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_566,
#line 405 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_567);

#line 404 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__404__1_2_p_0(
#line 404 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_560,
#line 404 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_561);

#line 131 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal__131__1_2_p_0(
#line 131 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_66,
#line 131 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_67);

#line 601 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_if_then_else_12_p_0(
#line 601 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__CondTerm_13,
#line 601 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ThenTerm_14,
#line 601 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ElseTerm_15,
#line 601 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_16,
#line 601 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_17,
#line 601 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_18,
#line 601 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_40,
#line 601 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_41,
#line 601 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_42,
#line 601 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_43,
#line 601 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Var0_21,
#line 601 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Var_22);

#line 567 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_if_then_12_p_0(
#line 567 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__CondTerm_13,
#line 567 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ThenTerm_14,
#line 567 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_15,
#line 567 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_16,
#line 567 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeVarsCond_17,
#line 567 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeThen_18,
#line 567 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
#line 567 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
#line 567 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
#line 567 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
#line 567 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Var0_21,
#line 567 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Var_22);

#line 540 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_2(
#line 540 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 540 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 540 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 539 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_1(
#line 539 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 539 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 539 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 516 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0(
#line 516 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_10,
#line 516 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_11,
#line 516 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeVarsGoal_12,
#line 516 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
#line 516 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
#line 516 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
#line 516 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
#line 516 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_34,
#line 516 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Var_35);

#line 504 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(
#line 504 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Disjunct0_5,
#line 504 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Goal_6,
#line 504 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_7,
#line 504 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Disjunct_8);

#line 474 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_with_purity_10_p_0(
#line 474 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__G_11,
#line 474 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Purity_12,
#line 474 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_13,
#line 474 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_14,
#line 474 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
#line 474 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
#line 474 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
#line 474 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
#line 474 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_34,
#line 474 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Var_35);

#line 446 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_4(
#line 446 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 446 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 446 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 445 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_3(
#line 445 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 445 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 445 "prog_io_dcg.m"
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

#line 685 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0_1(
#line 685 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 685 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 685 "prog_io_dcg.m"
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



#line 650 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 658 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 666 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 674 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 665 "prog_io_dcg.m"
static MR_bool MR_CALL 
parse_tree__prog_io_dcg__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
#line 665 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__List0_4,
#line 665 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_5,
#line 665 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__List_6)
#line 665 "prog_io_dcg.m"
{
#line 671 "prog_io_dcg.m"
  {
#line 671 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__List0_4)) == (MR_mktag((MR_Integer) 0)));
#line 669 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_12_12;
#line 669 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__V_13_13;
#line 669 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_14_14;
#line 669 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg___Context_7;

#line 669 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 669 "prog_io_dcg.m"
      {
#line 669 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 0)));
#line 669 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 1)));
#line 669 "prog_io_dcg.m"
        parse_tree__prog_io_dcg___Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 2)));
#line 669 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 669 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 669 "prog_io_dcg.m"
          {
#line 669 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_12_12)) == (MR_mktag((MR_Integer) 0)));
#line 669 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 669 "prog_io_dcg.m"
              {
#line 669 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_12_12, (MR_Integer) 0)));
#line 669 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_13_13, (MR_String) "[]") == 0);
#line 669 "prog_io_dcg.m"
              }
#line 669 "prog_io_dcg.m"
          }
#line 669 "prog_io_dcg.m"
      }
#line 671 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 670 "prog_io_dcg.m"
      {
#line 670 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__List_6 = parse_tree__prog_io_dcg__Term_5;
#line 670 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 670 "prog_io_dcg.m"
      }
#line 671 "prog_io_dcg.m"
    else
#line 672 "prog_io_dcg.m"
      {
#line 672 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Head_8;
#line 672 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Tail0_9;
#line 672 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Context_10;
#line 672 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Tail_11;
#line 672 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_15_15;
#line 672 "prog_io_dcg.m"
        MR_String parse_tree__prog_io_dcg__V_16_16;
#line 672 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_17_17;
#line 672 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_18_18;
#line 672 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_19_19;
#line 672 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_22_22;
#line 672 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_23_23;
#line 672 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_24_24;

#line 672 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__List0_4)) == (MR_mktag((MR_Integer) 0)));
#line 672 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 672 "prog_io_dcg.m"
          {
#line 672 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 0)));
#line 672 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 1)));
#line 672 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 2)));
#line 672 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_15_15)) == (MR_mktag((MR_Integer) 0)));
#line 672 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 672 "prog_io_dcg.m"
              {
#line 672 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_15_15, (MR_Integer) 0)));
#line 672 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_16_16, (MR_String) "[|]") == 0);
#line 672 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 672 "prog_io_dcg.m"
                  {
#line 672 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 672 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 672 "prog_io_dcg.m"
                      {
#line 672 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Head_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_17_17, (MR_Integer) 0)));
#line 672 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_17_17, (MR_Integer) 1)));
#line 672 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 672 "prog_io_dcg.m"
                        if (parse_tree__prog_io_dcg__succeeded)
#line 672 "prog_io_dcg.m"
                          {
#line 672 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__Tail0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_18_18, (MR_Integer) 0)));
#line 672 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_18_18, (MR_Integer) 1)));
#line 672 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 672 "prog_io_dcg.m"
                            if (parse_tree__prog_io_dcg__succeeded)
#line 672 "prog_io_dcg.m"
                              {
#line 673 "prog_io_dcg.m"
                                {
#line 673 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__succeeded = parse_tree__prog_io_dcg__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_dcg__Tail0_9, parse_tree__prog_io_dcg__Term_5, &parse_tree__prog_io_dcg__Tail_11);
                                }
#line 672 "prog_io_dcg.m"
                                if (parse_tree__prog_io_dcg__succeeded)
#line 672 "prog_io_dcg.m"
                                  {
#line 674 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 674 "prog_io_dcg.m"
                                    {
#line 674 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_23_23, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Tail_11));
#line 674 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_24_24));
#line 674 "prog_io_dcg.m"
                                    }
#line 674 "prog_io_dcg.m"
                                    {
#line 674 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_22_22, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Head_8));
#line 674 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_22_22, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_23_23));
#line 674 "prog_io_dcg.m"
                                    }
#line 674 "prog_io_dcg.m"
                                    {
#line 674 "prog_io_dcg.m"
                                      MR_Word base;
#line 674 "prog_io_dcg.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 674 "prog_io_dcg.m"
                                      *parse_tree__prog_io_dcg__List_6 = base;
#line 674 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_15_15));
#line 674 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_22_22));
#line 674 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Context_10));
#line 674 "prog_io_dcg.m"
                                    }
#line 674 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 672 "prog_io_dcg.m"
                                  }
#line 672 "prog_io_dcg.m"
                              }
#line 672 "prog_io_dcg.m"
                          }
#line 672 "prog_io_dcg.m"
                      }
#line 672 "prog_io_dcg.m"
                  }
#line 672 "prog_io_dcg.m"
              }
#line 672 "prog_io_dcg.m"
          }
#line 672 "prog_io_dcg.m"
      }
#line 671 "prog_io_dcg.m"
    return parse_tree__prog_io_dcg__succeeded;
#line 671 "prog_io_dcg.m"
  }
#line 665 "prog_io_dcg.m"
}

#line 685 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__process_dcg_clause__685__1_2_p_0(
#line 685 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_32,
#line 685 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_33)
#line 685 "prog_io_dcg.m"
{
#line 685 "prog_io_dcg.m"
  {
#line 685 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 685 "prog_io_dcg.m"
    {
#line 685 "prog_io_dcg.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_32, parse_tree__prog_io_dcg__HeadVar__2_33);
#line 685 "prog_io_dcg.m"
      return;
    }
#line 685 "prog_io_dcg.m"
  }
#line 685 "prog_io_dcg.m"
}

#line 540 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__540__1_2_p_0(
#line 540 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_57,
#line 540 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_58)
#line 540 "prog_io_dcg.m"
{
#line 540 "prog_io_dcg.m"
  {
#line 540 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 540 "prog_io_dcg.m"
    {
#line 540 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_57, parse_tree__prog_io_dcg__HeadVar__2_58);
#line 540 "prog_io_dcg.m"
      return;
    }
#line 540 "prog_io_dcg.m"
  }
#line 540 "prog_io_dcg.m"
}

#line 539 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__539__1_2_p_0(
#line 539 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_51,
#line 539 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_52)
#line 539 "prog_io_dcg.m"
{
#line 539 "prog_io_dcg.m"
  {
#line 539 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 539 "prog_io_dcg.m"
    {
#line 539 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_51, parse_tree__prog_io_dcg__HeadVar__2_52);
#line 539 "prog_io_dcg.m"
      return;
    }
#line 539 "prog_io_dcg.m"
  }
#line 539 "prog_io_dcg.m"
}

#line 446 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__446__1_2_p_0(
#line 446 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_581,
#line 446 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_582)
#line 446 "prog_io_dcg.m"
{
#line 446 "prog_io_dcg.m"
  {
#line 446 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 446 "prog_io_dcg.m"
    {
#line 446 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_581, parse_tree__prog_io_dcg__HeadVar__2_582);
#line 446 "prog_io_dcg.m"
      return;
    }
#line 446 "prog_io_dcg.m"
  }
#line 446 "prog_io_dcg.m"
}

#line 445 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__445__1_2_p_0(
#line 445 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_575,
#line 445 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_576)
#line 445 "prog_io_dcg.m"
{
#line 445 "prog_io_dcg.m"
  {
#line 445 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 445 "prog_io_dcg.m"
    {
#line 445 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_575, parse_tree__prog_io_dcg__HeadVar__2_576);
#line 445 "prog_io_dcg.m"
      return;
    }
#line 445 "prog_io_dcg.m"
  }
#line 445 "prog_io_dcg.m"
}

#line 405 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__405__1_2_p_0(
#line 405 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_566,
#line 405 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_567)
#line 405 "prog_io_dcg.m"
{
#line 405 "prog_io_dcg.m"
  {
#line 405 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 405 "prog_io_dcg.m"
    {
#line 405 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_566, parse_tree__prog_io_dcg__HeadVar__2_567);
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
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_560,
#line 404 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_561)
#line 404 "prog_io_dcg.m"
{
#line 404 "prog_io_dcg.m"
  {
#line 404 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 404 "prog_io_dcg.m"
    {
#line 404 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_560, parse_tree__prog_io_dcg__HeadVar__2_561);
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
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_66,
#line 131 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_67)
#line 131 "prog_io_dcg.m"
{
#line 131 "prog_io_dcg.m"
  {
#line 131 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 131 "prog_io_dcg.m"
    {
#line 131 "prog_io_dcg.m"
      mercury__term__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_dcg__HeadVar__1_66, parse_tree__prog_io_dcg__HeadVar__2_67);
#line 131 "prog_io_dcg.m"
      return;
    }
#line 131 "prog_io_dcg.m"
  }
#line 131 "prog_io_dcg.m"
}

#line 601 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_if_then_else_12_p_0(
#line 601 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__CondTerm_13,
#line 601 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ThenTerm_14,
#line 601 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ElseTerm_15,
#line 601 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_16,
#line 601 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_17,
#line 601 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_18,
#line 601 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_40,
#line 601 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_41,
#line 601 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_42,
#line 601 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_43,
#line 601 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Var0_21,
#line 601 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Var_22)
#line 601 "prog_io_dcg.m"
{
#line 607 "prog_io_dcg.m"
  {
#line 607 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 607 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeVarsCond_23;
#line 607 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeThen1_24;
#line 607 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__VarThen_25;
#line 607 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeElse1_26;
#line 607 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__VarElse_27;
#line 607 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_44_44;
#line 607 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_45_45;
#line 652 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Vars_28;
#line 652 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__StateVars_29;
#line 652 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Cond_30;
#line 652 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Then1_31;
#line 652 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Else1_32;

#line 608 "prog_io_dcg.m"
    {
#line 608 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_if_then_12_p_0(parse_tree__prog_io_dcg__CondTerm_13, parse_tree__prog_io_dcg__ThenTerm_14, parse_tree__prog_io_dcg__Context_16, parse_tree__prog_io_dcg__ContextPieces_17, &parse_tree__prog_io_dcg__MaybeVarsCond_23, &parse_tree__prog_io_dcg__MaybeThen1_24, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_40, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_44_44, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_42, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_45_45, parse_tree__prog_io_dcg__Var0_21, &parse_tree__prog_io_dcg__VarThen_25);
    }
#line 610 "prog_io_dcg.m"
    {
#line 610 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ElseTerm_15, parse_tree__prog_io_dcg__ContextPieces_17, &parse_tree__prog_io_dcg__MaybeElse1_26, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_44_44, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_41, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_45_45, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_43, parse_tree__prog_io_dcg__Var0_21, &parse_tree__prog_io_dcg__VarElse_27);
    }
#line 613 "prog_io_dcg.m"
    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeVarsCond_23)) == (MR_mktag((MR_Integer) 1)));
#line 613 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 613 "prog_io_dcg.m"
      {
#line 613 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__Vars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_23, (MR_Integer) 0)));
#line 613 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__StateVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_23, (MR_Integer) 1)));
#line 613 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__Cond_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_23, (MR_Integer) 2)));
#line 614 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeThen1_24)) == (MR_mktag((MR_Integer) 1)));
#line 614 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 614 "prog_io_dcg.m"
          {
#line 614 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Then1_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeThen1_24, (MR_Integer) 0)));
#line 615 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeElse1_26)) == (MR_mktag((MR_Integer) 1)));
#line 615 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 615 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__Else1_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeElse1_26, (MR_Integer) 0)));
#line 614 "prog_io_dcg.m"
          }
#line 613 "prog_io_dcg.m"
      }
#line 652 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 648 "prog_io_dcg.m"
      {
#line 648 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Then_33;
#line 648 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Else_34;
#line 648 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Goal_36;
#line 648 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_58_58;
#line 617 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_67_67;

#line 617 "prog_io_dcg.m"
        {
#line 617 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__VarThen_25)), ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)));
        }
#line 617 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 617 "prog_io_dcg.m"
          {
#line 1231 "parse_tree.prog_io_dcg.c"
            parse_tree__prog_io_dcg__TypeInfo_67_67 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 617 "prog_io_dcg.m"
            {
#line 617 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_dcg__TypeInfo_67_67, ((MR_Box) (parse_tree__prog_io_dcg__VarElse_27)), ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)));
            }
#line 617 "prog_io_dcg.m"
          }
#line 621 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 618 "prog_io_dcg.m"
          {
#line 618 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__Var0_21;
#line 619 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Then_33 = parse_tree__prog_io_dcg__Then1_31;
#line 620 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Else_34 = parse_tree__prog_io_dcg__Else1_32;
#line 618 "prog_io_dcg.m"
          }
#line 621 "prog_io_dcg.m"
        else
#line 628 "prog_io_dcg.m"
          {
#line 621 "prog_io_dcg.m"
            {
#line 621 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__VarThen_25)), ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)));
            }
#line 628 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 622 "prog_io_dcg.m"
              {
#line 622 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__Unify_35;
#line 622 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_48_48;
#line 622 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_49_49;
#line 622 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_51_51;
#line 622 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_52_52;

#line 622 "prog_io_dcg.m"
                *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__VarElse_27;
#line 624 "prog_io_dcg.m"
                {
#line 624 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_48_48, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__Var_22));
#line 624 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_48_48, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 624 "prog_io_dcg.m"
                }
#line 624 "prog_io_dcg.m"
                {
#line 624 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_dcg__VarThen_25));
#line 624 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_49_49, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 624 "prog_io_dcg.m"
                }
#line 623 "prog_io_dcg.m"
                {
#line 623 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__Unify_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 623 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 623 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_35, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_48_48));
#line 623 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_35, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_49_49));
#line 623 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_35, 3) = ((MR_Box) ((MR_Integer) 0));
#line 623 "prog_io_dcg.m"
                }
#line 626 "prog_io_dcg.m"
                {
#line 626 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 626 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Unify_35));
#line 626 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_52_52, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 626 "prog_io_dcg.m"
                }
#line 626 "prog_io_dcg.m"
                {
#line 626 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Then1_31));
#line 626 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_51_51, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_52_52));
#line 626 "prog_io_dcg.m"
                }
#line 626 "prog_io_dcg.m"
                {
#line 626 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__Then_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 626 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Then_33, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_51_51));
#line 626 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Then_33, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 626 "prog_io_dcg.m"
                }
#line 627 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__Else_34 = parse_tree__prog_io_dcg__Else1_32;
#line 622 "prog_io_dcg.m"
              }
#line 628 "prog_io_dcg.m"
            else
#line 635 "prog_io_dcg.m"
              {
#line 628 "prog_io_dcg.m"
                {
#line 628 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__VarElse_27)), ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)));
                }
#line 635 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 629 "prog_io_dcg.m"
                  {
#line 629 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__V_53_53;
#line 629 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__V_54_54;
#line 629 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__V_56_56;
#line 629 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__V_57_57;
#line 629 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__Unify_61;

#line 629 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__VarThen_25;
#line 630 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Then_33 = parse_tree__prog_io_dcg__Then1_31;
#line 632 "prog_io_dcg.m"
                    {
#line 632 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 632 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_53_53, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__Var_22));
#line 632 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 632 "prog_io_dcg.m"
                    }
#line 632 "prog_io_dcg.m"
                    {
#line 632 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 632 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_dcg__VarElse_27));
#line 632 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 632 "prog_io_dcg.m"
                    }
#line 631 "prog_io_dcg.m"
                    {
#line 631 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__Unify_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 631 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 631 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_61, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_53_53));
#line 631 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_61, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_54_54));
#line 631 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_61, 3) = ((MR_Box) ((MR_Integer) 0));
#line 631 "prog_io_dcg.m"
                    }
#line 634 "prog_io_dcg.m"
                    {
#line 634 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 634 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Unify_61));
#line 634 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 634 "prog_io_dcg.m"
                    }
#line 634 "prog_io_dcg.m"
                    {
#line 634 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 634 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Else1_32));
#line 634 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_57_57));
#line 634 "prog_io_dcg.m"
                    }
#line 634 "prog_io_dcg.m"
                    {
#line 634 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__Else_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 634 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Else_34, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_56_56));
#line 634 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Else_34, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 634 "prog_io_dcg.m"
                    }
#line 629 "prog_io_dcg.m"
                  }
#line 635 "prog_io_dcg.m"
                else
#line 645 "prog_io_dcg.m"
                  {
#line 645 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__VarElse_27;
#line 646 "prog_io_dcg.m"
                    {
#line 646 "prog_io_dcg.m"
                      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_io_dcg__VarThen_25, parse_tree__prog_io_dcg__VarElse_27, parse_tree__prog_io_dcg__Then1_31, &parse_tree__prog_io_dcg__Then_33);
                    }
#line 647 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Else_34 = parse_tree__prog_io_dcg__Else1_32;
#line 645 "prog_io_dcg.m"
                  }
#line 635 "prog_io_dcg.m"
              }
#line 628 "prog_io_dcg.m"
          }
#line 649 "prog_io_dcg.m"
        {
#line 649 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 649 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 649 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_28));
#line 649 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_58_58, 2) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_29));
#line 649 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_58_58, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Cond_30));
#line 649 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_58_58, 4) = ((MR_Box) (parse_tree__prog_io_dcg__Then_33));
#line 649 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_58_58, 5) = ((MR_Box) (parse_tree__prog_io_dcg__Else_34));
#line 649 "prog_io_dcg.m"
        }
#line 650 "prog_io_dcg.m"
        {
#line 650 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__Goal_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 650 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_36, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_58_58));
#line 650 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_36, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 650 "prog_io_dcg.m"
        }
#line 651 "prog_io_dcg.m"
        {
#line 651 "prog_io_dcg.m"
          MR_Word base;
#line 651 "prog_io_dcg.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 651 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeGoal_18 = base;
#line 651 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_36));
#line 651 "prog_io_dcg.m"
        }
#line 648 "prog_io_dcg.m"
      }
#line 652 "prog_io_dcg.m"
    else
#line 653 "prog_io_dcg.m"
      {
#line 653 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_63_63 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3];
#line 653 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_64_64 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[0];
#line 653 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_65_65;
#line 653 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__CondSpecs_37;
#line 653 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__ThenSpecs_38;
#line 653 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__ElseSpecs_39;
#line 653 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_59_59;
#line 653 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_60_60;

#line 653 "prog_io_dcg.m"
        {
#line 653 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__CondSpecs_37 = parse_tree__prog_io_util__get_any_errors3_1_f_0(parse_tree__prog_io_dcg__TypeInfo_63_63, parse_tree__prog_io_dcg__TypeInfo_63_63, parse_tree__prog_io_dcg__TypeInfo_64_64, parse_tree__prog_io_dcg__MaybeVarsCond_23);
        }
#line 654 "prog_io_dcg.m"
        {
#line 654 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__ThenSpecs_38 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeInfo_64_64, parse_tree__prog_io_dcg__MaybeThen1_24);
        }
#line 655 "prog_io_dcg.m"
        {
#line 655 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__ElseSpecs_39 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeInfo_64_64, parse_tree__prog_io_dcg__MaybeElse1_26);
        }
#line 1537 "parse_tree.prog_io_dcg.c"
        parse_tree__prog_io_dcg__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 656 "prog_io_dcg.m"
        {
#line 656 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_60_60 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_65_65, parse_tree__prog_io_dcg__ThenSpecs_38, parse_tree__prog_io_dcg__ElseSpecs_39);
        }
#line 656 "prog_io_dcg.m"
        {
#line 656 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_59_59 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_65_65, parse_tree__prog_io_dcg__CondSpecs_37, parse_tree__prog_io_dcg__V_60_60);
        }
#line 656 "prog_io_dcg.m"
        {
#line 656 "prog_io_dcg.m"
          MR_Word base;
#line 656 "prog_io_dcg.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 656 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeGoal_18 = base;
#line 656 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_59_59));
#line 656 "prog_io_dcg.m"
        }
#line 657 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__Var0_21;
#line 653 "prog_io_dcg.m"
      }
#line 607 "prog_io_dcg.m"
  }
#line 601 "prog_io_dcg.m"
}

#line 567 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_if_then_12_p_0(
#line 567 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__CondTerm_13,
#line 567 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ThenTerm_14,
#line 567 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_15,
#line 567 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_16,
#line 567 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeVarsCond_17,
#line 567 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeThen_18,
#line 567 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
#line 567 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
#line 567 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
#line 567 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
#line 567 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Var0_21,
#line 567 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Var_22)
#line 567 "prog_io_dcg.m"
{
#line 574 "prog_io_dcg.m"
  {
#line 574 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 574 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Var1_23;
#line 574 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeThen1_24;
#line 574 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Var2_25;
#line 574 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_34_34;
#line 574 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_35_35;
#line 574 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36;
#line 574 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37;
#line 580 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeInfo_46_46;

#line 575 "prog_io_dcg.m"
    {
#line 575 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0(parse_tree__prog_io_dcg__CondTerm_13, parse_tree__prog_io_dcg__ContextPieces_16, parse_tree__prog_io_dcg__MaybeVarsCond_17, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_34_34, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_35_35, parse_tree__prog_io_dcg__Var0_21, &parse_tree__prog_io_dcg__Var1_23);
    }
#line 577 "prog_io_dcg.m"
    {
#line 577 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ThenTerm_14, parse_tree__prog_io_dcg__ContextPieces_16, &parse_tree__prog_io_dcg__MaybeThen1_24, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_34_34, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_35_35, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37, parse_tree__prog_io_dcg__Var1_23, &parse_tree__prog_io_dcg__Var2_25);
    }
#line 580 "prog_io_dcg.m"
    {
#line 580 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)), ((MR_Box) (parse_tree__prog_io_dcg__Var1_23)));
    }
#line 580 "prog_io_dcg.m"
    parse_tree__prog_io_dcg__succeeded = !(parse_tree__prog_io_dcg__succeeded);
#line 580 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 580 "prog_io_dcg.m"
      {
#line 1641 "parse_tree.prog_io_dcg.c"
        parse_tree__prog_io_dcg__TypeInfo_46_46 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 581 "prog_io_dcg.m"
        {
#line 581 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_dcg__TypeInfo_46_46, ((MR_Box) (parse_tree__prog_io_dcg__Var1_23)), ((MR_Box) (parse_tree__prog_io_dcg__Var2_25)));
        }
#line 580 "prog_io_dcg.m"
      }
#line 596 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 591 "prog_io_dcg.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeThen1_24)) == (MR_mktag((MR_Integer) 0))))
#line 592 "prog_io_dcg.m"
        {
#line 593 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeThen_18 = parse_tree__prog_io_dcg__MaybeThen1_24;
#line 594 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__Var2_25;
#line 594 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36;
#line 594 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37;
#line 592 "prog_io_dcg.m"
        }
#line 591 "prog_io_dcg.m"
      else
#line 584 "prog_io_dcg.m"
        {
#line 584 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_61;
#line 584 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__Then1_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeThen1_24, (MR_Integer) 0)));
#line 584 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__Unify_27;
#line 584 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__Then_28;
#line 584 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__V_40_40;
#line 584 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__V_41_41;
#line 584 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__V_43_43;
#line 584 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__V_44_44;
#line 584 "prog_io_dcg.m"
          MR_Integer parse_tree__prog_io_dcg__N_54;
#line 584 "prog_io_dcg.m"
          MR_String parse_tree__prog_io_dcg__StringN_55;
#line 584 "prog_io_dcg.m"
          MR_String parse_tree__prog_io_dcg__VarName_56;
#line 584 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_59;

#line 102 "prog_io_dcg.m"
          {
#line 102 "prog_io_dcg.m"
            mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_54, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33);
          }
#line 103 "prog_io_dcg.m"
          {
#line 103 "prog_io_dcg.m"
            mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_54, &parse_tree__prog_io_dcg__StringN_55);
          }
#line 104 "prog_io_dcg.m"
          {
#line 104 "prog_io_dcg.m"
            mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_55, &parse_tree__prog_io_dcg__VarName_56);
          }
#line 1710 "parse_tree.prog_io_dcg.c"
          parse_tree__prog_io_dcg__TypeCtorInfo_20_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 105 "prog_io_dcg.m"
          {
#line 105 "prog_io_dcg.m"
            mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_61, parse_tree__prog_io_dcg__Var_22, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_59);
          }
#line 106 "prog_io_dcg.m"
          {
#line 106 "prog_io_dcg.m"
            mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_61, *parse_tree__prog_io_dcg__Var_22, parse_tree__prog_io_dcg__VarName_56, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_59, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31);
          }
#line 587 "prog_io_dcg.m"
          {
#line 587 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__Var_22));
#line 587 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_15));
#line 587 "prog_io_dcg.m"
          }
#line 587 "prog_io_dcg.m"
          {
#line 587 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Var2_25));
#line 587 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_41_41, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_15));
#line 587 "prog_io_dcg.m"
          }
#line 586 "prog_io_dcg.m"
          {
#line 586 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Unify_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 586 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 586 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_27, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_40_40));
#line 586 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_27, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_41_41));
#line 586 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_27, 3) = ((MR_Box) ((MR_Integer) 0));
#line 586 "prog_io_dcg.m"
          }
#line 589 "prog_io_dcg.m"
          {
#line 589 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 589 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Unify_27));
#line 589 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_44_44, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_15));
#line 589 "prog_io_dcg.m"
          }
#line 589 "prog_io_dcg.m"
          {
#line 589 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Then1_26));
#line 589 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_43_43, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_44_44));
#line 589 "prog_io_dcg.m"
          }
#line 589 "prog_io_dcg.m"
          {
#line 589 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Then_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 589 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Then_28, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_43_43));
#line 589 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Then_28, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_15));
#line 589 "prog_io_dcg.m"
          }
#line 590 "prog_io_dcg.m"
          {
#line 590 "prog_io_dcg.m"
            MR_Word base;
#line 590 "prog_io_dcg.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 590 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__MaybeThen_18 = base;
#line 590 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Then_28));
#line 590 "prog_io_dcg.m"
          }
#line 584 "prog_io_dcg.m"
        }
#line 596 "prog_io_dcg.m"
    else
#line 597 "prog_io_dcg.m"
      {
#line 597 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__MaybeThen_18 = parse_tree__prog_io_dcg__MaybeThen1_24;
#line 598 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__Var2_25;
#line 598 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37;
#line 598 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36;
#line 597 "prog_io_dcg.m"
      }
#line 574 "prog_io_dcg.m"
  }
#line 567 "prog_io_dcg.m"
}

#line 540 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_2(
#line 540 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 540 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 540 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 540 "prog_io_dcg.m"
{
#line 540 "prog_io_dcg.m"
  {
#line 540 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 540 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv1_HeadVar__2_58;

#line 540 "prog_io_dcg.m"
    {
#line 540 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__540__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv1_HeadVar__2_58);
    }
#line 540 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv1_HeadVar__2_58));
#line 540 "prog_io_dcg.m"
  }
#line 540 "prog_io_dcg.m"
}

#line 539 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_1(
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
    MR_Word parse_tree__prog_io_dcg__conv0_HeadVar__2_52;

#line 539 "prog_io_dcg.m"
    {
#line 539 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__539__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv0_HeadVar__2_52);
    }
#line 539 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv0_HeadVar__2_52));
#line 539 "prog_io_dcg.m"
  }
#line 539 "prog_io_dcg.m"
}

#line 516 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0(
#line 516 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_10,
#line 516 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_11,
#line 516 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeVarsGoal_12,
#line 516 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
#line 516 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
#line 516 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
#line 516 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
#line 516 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_34,
#line 516 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Var_35)
#line 516 "prog_io_dcg.m"
{
#line 522 "prog_io_dcg.m"
  {
#line 522 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Term_10)) == (MR_mktag((MR_Integer) 0)));
#line 522 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeVars_20;
#line 522 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__GoalTerm_21;
#line 522 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeGoal_22;
#line 529 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__VarsTerm_16;
#line 529 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__SubTerm_17;
#line 523 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_36_36;
#line 523 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__V_37_37;
#line 523 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_38_38;
#line 523 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_39_39;
#line 523 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_40_40;
#line 523 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg___Context_18;
#line 542 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Vars0_23;
#line 542 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__StateVars0_24;
#line 542 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Goal_25;

#line 523 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 523 "prog_io_dcg.m"
      {
#line 523 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 0)));
#line 523 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 1)));
#line 523 "prog_io_dcg.m"
        parse_tree__prog_io_dcg___Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 2)));
#line 523 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 523 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 523 "prog_io_dcg.m"
          {
#line 523 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_36_36, (MR_Integer) 0)));
#line 523 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_37_37, (MR_String) "some") == 0);
#line 523 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 523 "prog_io_dcg.m"
              {
#line 523 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 523 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 523 "prog_io_dcg.m"
                  {
#line 523 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__VarsTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_38_38, (MR_Integer) 0)));
#line 523 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_38_38, (MR_Integer) 1)));
#line 523 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 523 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 523 "prog_io_dcg.m"
                      {
#line 523 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__SubTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_39_39, (MR_Integer) 0)));
#line 523 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_39_39, (MR_Integer) 1)));
#line 523 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 523 "prog_io_dcg.m"
                      }
#line 523 "prog_io_dcg.m"
                  }
#line 523 "prog_io_dcg.m"
              }
#line 523 "prog_io_dcg.m"
          }
#line 523 "prog_io_dcg.m"
      }
#line 529 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 525 "prog_io_dcg.m"
      {
#line 525 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_50_50 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 525 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__GenericVarSet_19;

#line 525 "prog_io_dcg.m"
        {
#line 525 "prog_io_dcg.m"
          mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__TypeCtorInfo_50_50, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30, &parse_tree__prog_io_dcg__GenericVarSet_19);
        }
#line 526 "prog_io_dcg.m"
        {
#line 526 "prog_io_dcg.m"
          parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_50_50, parse_tree__prog_io_dcg__VarsTerm_16, parse_tree__prog_io_dcg__GenericVarSet_19, parse_tree__prog_io_dcg__ContextPieces_11, &parse_tree__prog_io_dcg__MaybeVars_20);
        }
#line 528 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__GoalTerm_21 = parse_tree__prog_io_dcg__SubTerm_17;
#line 525 "prog_io_dcg.m"
      }
#line 529 "prog_io_dcg.m"
    else
#line 530 "prog_io_dcg.m"
      {
#line 530 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__MaybeVars_20 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[8]);
#line 531 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__GoalTerm_21 = parse_tree__prog_io_dcg__Term_10;
#line 530 "prog_io_dcg.m"
      }
#line 533 "prog_io_dcg.m"
    {
#line 533 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__GoalTerm_21, parse_tree__prog_io_dcg__ContextPieces_11, &parse_tree__prog_io_dcg__MaybeGoal_22, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_34, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_35);
    }
#line 536 "prog_io_dcg.m"
    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeVars_20)) == (MR_mktag((MR_Integer) 1)));
#line 536 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 536 "prog_io_dcg.m"
      {
#line 536 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__Vars0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVars_20, (MR_Integer) 0)));
#line 536 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__StateVars0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVars_20, (MR_Integer) 1)));
#line 537 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal_22)) == (MR_mktag((MR_Integer) 1)));
#line 537 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 537 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__Goal_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal_22, (MR_Integer) 0)));
#line 536 "prog_io_dcg.m"
      }
#line 542 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 539 "prog_io_dcg.m"
      {
#line 539 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_55_55 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[4];
#line 539 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_56_56 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 539 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Vars_26;
#line 539 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__StateVars_27;

#line 539 "prog_io_dcg.m"
        {
#line 539 "prog_io_dcg.m"
          mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_55_55, parse_tree__prog_io_dcg__TypeInfo_56_56, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[7], parse_tree__prog_io_dcg__Vars0_23, &parse_tree__prog_io_dcg__Vars_26);
        }
#line 540 "prog_io_dcg.m"
        {
#line 540 "prog_io_dcg.m"
          mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_55_55, parse_tree__prog_io_dcg__TypeInfo_56_56, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[8], parse_tree__prog_io_dcg__StateVars0_24, &parse_tree__prog_io_dcg__StateVars_27);
        }
#line 541 "prog_io_dcg.m"
        {
#line 541 "prog_io_dcg.m"
          MR_Word base;
#line 541 "prog_io_dcg.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 541 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeVarsGoal_12 = base;
#line 541 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_26));
#line 541 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_27));
#line 541 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_25));
#line 541 "prog_io_dcg.m"
        }
#line 539 "prog_io_dcg.m"
      }
#line 542 "prog_io_dcg.m"
    else
#line 543 "prog_io_dcg.m"
      {
#line 543 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_61_61 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[5];
#line 543 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__VarsSpecs_28;
#line 543 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__GoalSpecs_29;
#line 543 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_48_48;

#line 543 "prog_io_dcg.m"
        {
#line 543 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__VarsSpecs_28 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_dcg__TypeInfo_61_61, parse_tree__prog_io_dcg__TypeInfo_61_61, parse_tree__prog_io_dcg__MaybeVars_20);
        }
#line 544 "prog_io_dcg.m"
        {
#line 544 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__GoalSpecs_29 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[0], parse_tree__prog_io_dcg__MaybeGoal_22);
        }
#line 545 "prog_io_dcg.m"
        {
#line 545 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_48_48 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__VarsSpecs_28, parse_tree__prog_io_dcg__GoalSpecs_29);
        }
#line 545 "prog_io_dcg.m"
        {
#line 545 "prog_io_dcg.m"
          MR_Word base;
#line 545 "prog_io_dcg.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 545 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeVarsGoal_12 = base;
#line 545 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_48_48));
#line 545 "prog_io_dcg.m"
        }
#line 543 "prog_io_dcg.m"
      }
#line 522 "prog_io_dcg.m"
  }
#line 516 "prog_io_dcg.m"
}

#line 504 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(
#line 504 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Disjunct0_5,
#line 504 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Goal_6,
#line 504 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_7,
#line 504 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Disjunct_8)
#line 504 "prog_io_dcg.m"
{
#line 512 "prog_io_dcg.m"
  {
#line 512 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 512 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__A0_9;
#line 512 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__B0_10;
#line 512 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Context2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Disjunct0_5, (MR_Integer) 1)));
#line 508 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Disjunct0_5, (MR_Integer) 0)));

#line 508 "prog_io_dcg.m"
    parse_tree__prog_io_dcg__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_14_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_14_14, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 508 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 508 "prog_io_dcg.m"
      {
#line 508 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__A0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_14_14, (MR_Integer) 1)));
#line 508 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__B0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_14_14, (MR_Integer) 2)));
#line 509 "prog_io_dcg.m"
        {
#line 509 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__A_12;
#line 509 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__B_13;
#line 509 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__V_15_15;

#line 509 "prog_io_dcg.m"
          {
#line 509 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(parse_tree__prog_io_dcg__A0_9, parse_tree__prog_io_dcg__Goal_6, parse_tree__prog_io_dcg__Context_7, &parse_tree__prog_io_dcg__A_12);
          }
#line 510 "prog_io_dcg.m"
          {
#line 510 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(parse_tree__prog_io_dcg__B0_10, parse_tree__prog_io_dcg__Goal_6, parse_tree__prog_io_dcg__Context_7, &parse_tree__prog_io_dcg__B_13);
          }
#line 511 "prog_io_dcg.m"
          {
#line 511 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 511 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 511 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_15_15, 1) = ((MR_Box) (parse_tree__prog_io_dcg__A_12));
#line 511 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_15_15, 2) = ((MR_Box) (parse_tree__prog_io_dcg__B_13));
#line 511 "prog_io_dcg.m"
          }
#line 511 "prog_io_dcg.m"
          {
#line 511 "prog_io_dcg.m"
            MR_Word base;
#line 511 "prog_io_dcg.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 511 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__Disjunct_8 = base;
#line 511 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_15_15));
#line 511 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context2_11));
#line 511 "prog_io_dcg.m"
          }
#line 509 "prog_io_dcg.m"
        }
#line 508 "prog_io_dcg.m"
      }
#line 508 "prog_io_dcg.m"
    else
#line 513 "prog_io_dcg.m"
      {
#line 513 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_16_16;
#line 513 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_17_17;

#line 513 "prog_io_dcg.m"
        {
#line 513 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 513 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_6));
#line 513 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_7));
#line 513 "prog_io_dcg.m"
        }
#line 513 "prog_io_dcg.m"
        {
#line 513 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_16_16, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Disjunct0_5));
#line 513 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_16_16, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_17_17));
#line 513 "prog_io_dcg.m"
        }
#line 513 "prog_io_dcg.m"
        {
#line 513 "prog_io_dcg.m"
          MR_Word base;
#line 513 "prog_io_dcg.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 513 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__Disjunct_8 = base;
#line 513 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_16_16));
#line 513 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_7));
#line 513 "prog_io_dcg.m"
        }
#line 513 "prog_io_dcg.m"
      }
#line 512 "prog_io_dcg.m"
  }
#line 504 "prog_io_dcg.m"
}

#line 474 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_with_purity_10_p_0(
#line 474 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__G_11,
#line 474 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Purity_12,
#line 474 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_13,
#line 474 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_14,
#line 474 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
#line 474 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
#line 474 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
#line 474 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
#line 474 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_34,
#line 474 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Var_35)
#line 474 "prog_io_dcg.m"
{
#line 480 "prog_io_dcg.m"
  {
#line 480 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 480 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeGoal1_18;

#line 481 "prog_io_dcg.m"
    {
#line 481 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__G_11, parse_tree__prog_io_dcg__ContextPieces_13, &parse_tree__prog_io_dcg__MaybeGoal1_18, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_34, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_35);
    }
#line 499 "prog_io_dcg.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal1_18)) == (MR_mktag((MR_Integer) 0))))
#line 501 "prog_io_dcg.m"
      *parse_tree__prog_io_dcg__MaybeGoal_14 = parse_tree__prog_io_dcg__MaybeGoal1_18;
#line 499 "prog_io_dcg.m"
    else
#line 483 "prog_io_dcg.m"
      {
#line 483 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Goal1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal1_18, (MR_Integer) 0)));
#line 483 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Goal_23;
#line 486 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Pred_20;
#line 486 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Args_21;
#line 486 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Context_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal1_19, (MR_Integer) 1)));
#line 484 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal1_19, (MR_Integer) 0)));
#line 484 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_40_40;

#line 484 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_39_39)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_39_39, (MR_Integer) 0)))) == (MR_Integer) 19)));
#line 484 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 484 "prog_io_dcg.m"
          {
#line 484 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Pred_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_39_39, (MR_Integer) 1)));
#line 484 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_39_39, (MR_Integer) 2)));
#line 484 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_39_39, (MR_Integer) 3)));
#line 484 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_40_40 == (MR_Integer) 0);
#line 484 "prog_io_dcg.m"
          }
#line 486 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 485 "prog_io_dcg.m"
          {
#line 485 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_41_41;

#line 485 "prog_io_dcg.m"
            {
#line 485 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 485 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 485 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_41_41, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Pred_20));
#line 485 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_41_41, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Args_21));
#line 485 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_41_41, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Purity_12));
#line 485 "prog_io_dcg.m"
            }
#line 485 "prog_io_dcg.m"
            {
#line 485 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__Goal_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 485 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_23, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_41_41));
#line 485 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_23, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_22));
#line 485 "prog_io_dcg.m"
            }
#line 485 "prog_io_dcg.m"
          }
#line 486 "prog_io_dcg.m"
        else
#line 488 "prog_io_dcg.m"
          {
#line 488 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__ProgTerm1_24;
#line 488 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__ProgTerm2_25;
#line 488 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Context_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal1_19, (MR_Integer) 1)));
#line 486 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal1_19, (MR_Integer) 0)));
#line 486 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_43_43;

#line 486 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_42_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_42_42, (MR_Integer) 0)))) == (MR_Integer) 20)));
#line 486 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 486 "prog_io_dcg.m"
              {
#line 486 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__ProgTerm1_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_42_42, (MR_Integer) 1)));
#line 486 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__ProgTerm2_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_42_42, (MR_Integer) 2)));
#line 486 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_42_42, (MR_Integer) 3)));
#line 486 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_43_43 == (MR_Integer) 0);
#line 486 "prog_io_dcg.m"
              }
#line 488 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 487 "prog_io_dcg.m"
              {
#line 487 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_44_44;

#line 487 "prog_io_dcg.m"
                {
#line 487 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 487 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 487 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_44_44, 1) = ((MR_Box) (parse_tree__prog_io_dcg__ProgTerm1_24));
#line 487 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_44_44, 2) = ((MR_Box) (parse_tree__prog_io_dcg__ProgTerm2_25));
#line 487 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_44_44, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Purity_12));
#line 487 "prog_io_dcg.m"
                }
#line 487 "prog_io_dcg.m"
                {
#line 487 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__Goal_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 487 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_23, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_44_44));
#line 487 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_23, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_51));
#line 487 "prog_io_dcg.m"
                }
#line 487 "prog_io_dcg.m"
              }
#line 488 "prog_io_dcg.m"
            else
#line 492 "prog_io_dcg.m"
              {
#line 492 "prog_io_dcg.m"
                MR_String parse_tree__prog_io_dcg__PurityString_27;
#line 492 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__G1_28;
#line 492 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_45_45;
#line 492 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_46_46;
#line 492 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_47_47;
#line 492 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__Context_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal1_19, (MR_Integer) 1)));
#line 492 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal1_19, (MR_Integer) 0)));

#line 493 "prog_io_dcg.m"
                {
#line 493 "prog_io_dcg.m"
                  parse_tree__prog_out__purity_name_2_p_0(parse_tree__prog_io_dcg__Purity_12, &parse_tree__prog_io_dcg__PurityString_27);
                }
#line 494 "prog_io_dcg.m"
                {
#line 494 "prog_io_dcg.m"
                  mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__G_11, &parse_tree__prog_io_dcg__G1_28);
                }
#line 495 "prog_io_dcg.m"
                {
#line 495 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 495 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_dcg__PurityString_27));
#line 495 "prog_io_dcg.m"
                }
#line 495 "prog_io_dcg.m"
                {
#line 495 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_dcg__G1_28));
#line 495 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 495 "prog_io_dcg.m"
                }
#line 495 "prog_io_dcg.m"
                {
#line 495 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 495 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 495 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_45_45, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_46_46));
#line 495 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_45_45, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_47_47));
#line 495 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_45_45, 3) = ((MR_Box) ((MR_Integer) 0));
#line 495 "prog_io_dcg.m"
                }
#line 496 "prog_io_dcg.m"
                {
#line 496 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__Goal_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 496 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_23, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_45_45));
#line 496 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_23, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_50));
#line 496 "prog_io_dcg.m"
                }
#line 492 "prog_io_dcg.m"
              }
#line 488 "prog_io_dcg.m"
          }
#line 498 "prog_io_dcg.m"
        {
#line 498 "prog_io_dcg.m"
          MR_Word base;
#line 498 "prog_io_dcg.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 498 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeGoal_14 = base;
#line 498 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_23));
#line 498 "prog_io_dcg.m"
        }
#line 483 "prog_io_dcg.m"
      }
#line 480 "prog_io_dcg.m"
  }
#line 474 "prog_io_dcg.m"
}

#line 446 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_4(
#line 446 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 446 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 446 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 446 "prog_io_dcg.m"
{
#line 446 "prog_io_dcg.m"
  {
#line 446 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 446 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv3_HeadVar__2_582;

#line 446 "prog_io_dcg.m"
    {
#line 446 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__446__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv3_HeadVar__2_582);
    }
#line 446 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv3_HeadVar__2_582));
#line 446 "prog_io_dcg.m"
  }
#line 446 "prog_io_dcg.m"
}

#line 445 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_2_11_p_0_3(
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
    MR_Word parse_tree__prog_io_dcg__conv2_HeadVar__2_576;

#line 445 "prog_io_dcg.m"
    {
#line 445 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__445__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv2_HeadVar__2_576);
    }
#line 445 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv2_HeadVar__2_576));
#line 445 "prog_io_dcg.m"
  }
#line 445 "prog_io_dcg.m"
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
    MR_Word parse_tree__prog_io_dcg__conv1_HeadVar__2_567;

#line 405 "prog_io_dcg.m"
    {
#line 405 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__405__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv1_HeadVar__2_567);
    }
#line 405 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv1_HeadVar__2_567));
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
    MR_Word parse_tree__prog_io_dcg__conv0_HeadVar__2_561;

#line 404 "prog_io_dcg.m"
    {
#line 404 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal_2__404__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv0_HeadVar__2_561);
    }
#line 404 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv0_HeadVar__2_561));
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
        MR_Word parse_tree__prog_io_dcg__ATerm_290;
#line 299 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__BTerm_291;
#line 299 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__MaybeAGoal_298;
#line 299 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__MaybeBGoal_299;
#line 299 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_311_311;
#line 299 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_312_312;
#line 299 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_313_313;
#line 299 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_314_314;
#line 299 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Var_315_315;
#line 308 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__AGoal_300;
#line 308 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__BGoal_301;

#line 298 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 298 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 298 "prog_io_dcg.m"
          {
#line 298 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__ATerm_290 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 298 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 298 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_311_311)) == (MR_mktag((MR_Integer) 1)));
#line 298 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 298 "prog_io_dcg.m"
              {
#line 298 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__BTerm_291 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_311_311, (MR_Integer) 0)));
#line 298 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_311_311, (MR_Integer) 1)));
#line 298 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_312_312 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 299 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 299 "prog_io_dcg.m"
                  {
#line 300 "prog_io_dcg.m"
                    {
#line 300 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ATerm_290, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeAGoal_298, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_313_313, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_314_314, parse_tree__prog_io_dcg__HeadVar__10_10, &parse_tree__prog_io_dcg__STATE_VARIABLE_Var_315_315);
                    }
#line 301 "prog_io_dcg.m"
                    {
#line 301 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__BTerm_291, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeBGoal_299, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_313_313, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_314_314, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_315_315, parse_tree__prog_io_dcg__HeadVar__11_11);
                    }
#line 303 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeAGoal_298)) == (MR_mktag((MR_Integer) 1)));
#line 303 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 303 "prog_io_dcg.m"
                      {
#line 303 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__AGoal_300 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeAGoal_298, (MR_Integer) 0)));
#line 304 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeBGoal_299)) == (MR_mktag((MR_Integer) 1)));
#line 304 "prog_io_dcg.m"
                        if (parse_tree__prog_io_dcg__succeeded)
#line 304 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__BGoal_301 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeBGoal_299, (MR_Integer) 0)));
#line 303 "prog_io_dcg.m"
                      }
#line 308 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 306 "prog_io_dcg.m"
                      {
#line 306 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__Goal_302;
#line 306 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__V_319_319;

#line 306 "prog_io_dcg.m"
                        {
#line 306 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_319_319 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__V_319_319, 0) = ((MR_Box) (parse_tree__prog_io_dcg__AGoal_300));
#line 306 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__V_319_319, 1) = ((MR_Box) (parse_tree__prog_io_dcg__BGoal_301));
#line 306 "prog_io_dcg.m"
                        }
#line 306 "prog_io_dcg.m"
                        {
#line 306 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__Goal_302 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 306 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_302, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_319_319));
#line 306 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_302, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
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
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_302));
#line 307 "prog_io_dcg.m"
                        }
#line 306 "prog_io_dcg.m"
                      }
#line 308 "prog_io_dcg.m"
                    else
#line 309 "prog_io_dcg.m"
                      {
#line 309 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__TypeInfo_554_554 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[0];
#line 309 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__ASpecs_303;
#line 309 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__BSpecs_304;
#line 309 "prog_io_dcg.m"
                        MR_Word parse_tree__prog_io_dcg__V_320_320;

#line 309 "prog_io_dcg.m"
                        {
#line 309 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__ASpecs_303 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeInfo_554_554, parse_tree__prog_io_dcg__MaybeAGoal_298);
                        }
#line 310 "prog_io_dcg.m"
                        {
#line 310 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__BSpecs_304 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeInfo_554_554, parse_tree__prog_io_dcg__MaybeBGoal_299);
                        }
#line 311 "prog_io_dcg.m"
                        {
#line 311 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_320_320 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__ASpecs_303, parse_tree__prog_io_dcg__BSpecs_304);
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
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_320_320));
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
          MR_Word parse_tree__prog_io_dcg__ATerm_259;
#line 283 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__BTerm_260;
#line 283 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__MaybeAGoal_267;
#line 283 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__MaybeBGoal_268;
#line 283 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__V_280_280;
#line 283 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__V_281_281;
#line 283 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_282_282;
#line 283 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_283_283;
#line 283 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Var_284_284;
#line 293 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__AGoal_269;
#line 293 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__BGoal_270;

#line 282 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 282 "prog_io_dcg.m"
          if (parse_tree__prog_io_dcg__succeeded)
#line 282 "prog_io_dcg.m"
            {
#line 282 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__ATerm_259 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 282 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 282 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_280_280)) == (MR_mktag((MR_Integer) 1)));
#line 282 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 282 "prog_io_dcg.m"
                {
#line 282 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__BTerm_260 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_280_280, (MR_Integer) 0)));
#line 282 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_280_280, (MR_Integer) 1)));
#line 282 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_281_281 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 283 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 283 "prog_io_dcg.m"
                    {
#line 285 "prog_io_dcg.m"
                      {
#line 285 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ATerm_259, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeAGoal_267, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_282_282, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_283_283, parse_tree__prog_io_dcg__HeadVar__10_10, &parse_tree__prog_io_dcg__STATE_VARIABLE_Var_284_284);
                      }
#line 286 "prog_io_dcg.m"
                      {
#line 286 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__BTerm_260, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeBGoal_268, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_282_282, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_283_283, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_284_284, parse_tree__prog_io_dcg__HeadVar__11_11);
                      }
#line 288 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeAGoal_267)) == (MR_mktag((MR_Integer) 1)));
#line 288 "prog_io_dcg.m"
                      if (parse_tree__prog_io_dcg__succeeded)
#line 288 "prog_io_dcg.m"
                        {
#line 288 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__AGoal_269 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeAGoal_267, (MR_Integer) 0)));
#line 289 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeBGoal_268)) == (MR_mktag((MR_Integer) 1)));
#line 289 "prog_io_dcg.m"
                          if (parse_tree__prog_io_dcg__succeeded)
#line 289 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__BGoal_270 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeBGoal_268, (MR_Integer) 0)));
#line 288 "prog_io_dcg.m"
                        }
#line 293 "prog_io_dcg.m"
                      if (parse_tree__prog_io_dcg__succeeded)
#line 291 "prog_io_dcg.m"
                        {
#line 291 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__Goal_271;
#line 291 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__V_288_288;

#line 291 "prog_io_dcg.m"
                          {
#line 291 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__V_288_288 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_288_288, 0) = ((MR_Box) (parse_tree__prog_io_dcg__AGoal_269));
#line 291 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_288_288, 1) = ((MR_Box) (parse_tree__prog_io_dcg__BGoal_270));
#line 291 "prog_io_dcg.m"
                          }
#line 291 "prog_io_dcg.m"
                          {
#line 291 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__Goal_271 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 291 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_271, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_288_288));
#line 291 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_271, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
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
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_271));
#line 292 "prog_io_dcg.m"
                          }
#line 291 "prog_io_dcg.m"
                        }
#line 293 "prog_io_dcg.m"
                      else
#line 294 "prog_io_dcg.m"
                        {
#line 294 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__TypeInfo_552_552 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[0];
#line 294 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__ASpecs_272;
#line 294 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__BSpecs_273;
#line 294 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__V_289_289;

#line 294 "prog_io_dcg.m"
                          {
#line 294 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__ASpecs_272 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeInfo_552_552, parse_tree__prog_io_dcg__MaybeAGoal_267);
                          }
#line 295 "prog_io_dcg.m"
                          {
#line 295 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__BSpecs_273 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeInfo_552_552, parse_tree__prog_io_dcg__MaybeBGoal_268);
                          }
#line 296 "prog_io_dcg.m"
                          {
#line 296 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__V_289_289 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__ASpecs_272, parse_tree__prog_io_dcg__BSpecs_273);
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
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_289_289));
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
            MR_Word parse_tree__prog_io_dcg__ATerm_321;
#line 314 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__BTerm_322;
#line 314 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_349_349;
#line 314 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_350_350;
#line 319 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__CondTerm_330;
#line 319 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__ThenTerm_331;
#line 316 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_351_351;
#line 316 "prog_io_dcg.m"
            MR_String parse_tree__prog_io_dcg__V_352_352;
#line 316 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_353_353;
#line 316 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_354_354;
#line 316 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_355_355;
#line 316 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg___Context_332;

#line 313 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 313 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 313 "prog_io_dcg.m"
              {
#line 313 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__ATerm_321 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 313 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 313 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_349_349)) == (MR_mktag((MR_Integer) 1)));
#line 313 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 313 "prog_io_dcg.m"
                  {
#line 313 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__BTerm_322 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_349_349, (MR_Integer) 0)));
#line 313 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_349_349, (MR_Integer) 1)));
#line 313 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_350_350 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 314 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 314 "prog_io_dcg.m"
                      {
#line 316 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__ATerm_321)) == (MR_mktag((MR_Integer) 0)));
#line 316 "prog_io_dcg.m"
                        if (parse_tree__prog_io_dcg__succeeded)
#line 316 "prog_io_dcg.m"
                          {
#line 316 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ATerm_321, (MR_Integer) 0)));
#line 316 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ATerm_321, (MR_Integer) 1)));
#line 316 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg___Context_332 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ATerm_321, (MR_Integer) 2)));
#line 316 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_351_351)) == (MR_mktag((MR_Integer) 0)));
#line 316 "prog_io_dcg.m"
                            if (parse_tree__prog_io_dcg__succeeded)
#line 316 "prog_io_dcg.m"
                              {
#line 316 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__V_352_352 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_351_351, (MR_Integer) 0)));
#line 316 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_352_352, (MR_String) "->") == 0);
#line 316 "prog_io_dcg.m"
                                if (parse_tree__prog_io_dcg__succeeded)
#line 316 "prog_io_dcg.m"
                                  {
#line 316 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_353_353)) == (MR_mktag((MR_Integer) 1)));
#line 316 "prog_io_dcg.m"
                                    if (parse_tree__prog_io_dcg__succeeded)
#line 316 "prog_io_dcg.m"
                                      {
#line 316 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__CondTerm_330 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_353_353, (MR_Integer) 0)));
#line 316 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_353_353, (MR_Integer) 1)));
#line 316 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_354_354)) == (MR_mktag((MR_Integer) 1)));
#line 316 "prog_io_dcg.m"
                                        if (parse_tree__prog_io_dcg__succeeded)
#line 316 "prog_io_dcg.m"
                                          {
#line 316 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__ThenTerm_331 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_354_354, (MR_Integer) 0)));
#line 316 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_354_354, (MR_Integer) 1)));
#line 316 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_355_355 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                            parse_tree__prog_io_dcg__parse_dcg_if_then_else_12_p_0(parse_tree__prog_io_dcg__CondTerm_330, parse_tree__prog_io_dcg__ThenTerm_331, parse_tree__prog_io_dcg__BTerm_322, parse_tree__prog_io_dcg__Context_3, parse_tree__prog_io_dcg__HeadVar__4_4, parse_tree__prog_io_dcg__MaybeGoal_5, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                          }
#line 319 "prog_io_dcg.m"
                        else
#line 321 "prog_io_dcg.m"
                          {
#line 321 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__MaybeAGoal0_333;
#line 321 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__VarA_334;
#line 321 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__MaybeBGoal0_335;
#line 321 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__VarB_336;
#line 321 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_358_358;
#line 321 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_359_359;
#line 351 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__AGoal0_337;
#line 351 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__BGoal0_338;

#line 320 "prog_io_dcg.m"
                            {
#line 320 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ATerm_321, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeAGoal0_333, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_358_358, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_359_359, parse_tree__prog_io_dcg__HeadVar__10_10, &parse_tree__prog_io_dcg__VarA_334);
                            }
#line 322 "prog_io_dcg.m"
                            {
#line 322 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__BTerm_322, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeBGoal0_335, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_358_358, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_359_359, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, &parse_tree__prog_io_dcg__VarB_336);
                            }
#line 325 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeAGoal0_333)) == (MR_mktag((MR_Integer) 1)));
#line 325 "prog_io_dcg.m"
                            if (parse_tree__prog_io_dcg__succeeded)
#line 325 "prog_io_dcg.m"
                              {
#line 325 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__AGoal0_337 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeAGoal0_333, (MR_Integer) 0)));
#line 326 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeBGoal0_335)) == (MR_mktag((MR_Integer) 1)));
#line 326 "prog_io_dcg.m"
                                if (parse_tree__prog_io_dcg__succeeded)
#line 326 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__BGoal0_338 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeBGoal0_335, (MR_Integer) 0)));
#line 325 "prog_io_dcg.m"
                              }
#line 351 "prog_io_dcg.m"
                            if (parse_tree__prog_io_dcg__succeeded)
#line 349 "prog_io_dcg.m"
                              {
#line 349 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__Goal_339;
#line 328 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__TypeInfo_593_593;

#line 328 "prog_io_dcg.m"
                                {
#line 328 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__VarA_334)), ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10)));
                                }
#line 328 "prog_io_dcg.m"
                                if (parse_tree__prog_io_dcg__succeeded)
#line 328 "prog_io_dcg.m"
                                  {
#line 3226 "parse_tree.prog_io_dcg.c"
                                    parse_tree__prog_io_dcg__TypeInfo_593_593 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 328 "prog_io_dcg.m"
                                    {
#line 328 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_dcg__TypeInfo_593_593, ((MR_Box) (parse_tree__prog_io_dcg__VarB_336)), ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10)));
                                    }
#line 328 "prog_io_dcg.m"
                                  }
#line 331 "prog_io_dcg.m"
                                if (parse_tree__prog_io_dcg__succeeded)
#line 329 "prog_io_dcg.m"
                                  {
#line 329 "prog_io_dcg.m"
                                    MR_Word parse_tree__prog_io_dcg__V_362_362;

#line 329 "prog_io_dcg.m"
                                    *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__HeadVar__10_10;
#line 330 "prog_io_dcg.m"
                                    {
#line 330 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__V_362_362 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 330 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_362_362, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 330 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_362_362, 1) = ((MR_Box) (parse_tree__prog_io_dcg__AGoal0_337));
#line 330 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_362_362, 2) = ((MR_Box) (parse_tree__prog_io_dcg__BGoal0_338));
#line 330 "prog_io_dcg.m"
                                    }
#line 330 "prog_io_dcg.m"
                                    {
#line 330 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__Goal_339 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 330 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_339, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_362_362));
#line 330 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_339, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
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
                                      parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__VarA_334)), ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10)));
                                    }
#line 338 "prog_io_dcg.m"
                                    if (parse_tree__prog_io_dcg__succeeded)
#line 332 "prog_io_dcg.m"
                                      {
#line 332 "prog_io_dcg.m"
                                        MR_Word parse_tree__prog_io_dcg__Unify_340;
#line 332 "prog_io_dcg.m"
                                        MR_Word parse_tree__prog_io_dcg__AGoal_341;
#line 332 "prog_io_dcg.m"
                                        MR_Word parse_tree__prog_io_dcg__V_363_363;
#line 332 "prog_io_dcg.m"
                                        MR_Word parse_tree__prog_io_dcg__V_364_364;
#line 332 "prog_io_dcg.m"
                                        MR_Word parse_tree__prog_io_dcg__V_366_366;

#line 332 "prog_io_dcg.m"
                                        *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__VarB_336;
#line 334 "prog_io_dcg.m"
                                        {
#line 334 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__V_363_363 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_363_363, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__HeadVar__11_11));
#line 334 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_363_363, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 334 "prog_io_dcg.m"
                                        }
#line 334 "prog_io_dcg.m"
                                        {
#line 334 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__V_364_364 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_364_364, 0) = ((MR_Box) (parse_tree__prog_io_dcg__VarA_334));
#line 334 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_364_364, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 334 "prog_io_dcg.m"
                                        }
#line 333 "prog_io_dcg.m"
                                        {
#line 333 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__Unify_340 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 333 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_340, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 333 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_340, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_363_363));
#line 333 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_340, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_364_364));
#line 333 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_340, 3) = ((MR_Box) ((MR_Integer) 0));
#line 333 "prog_io_dcg.m"
                                        }
#line 336 "prog_io_dcg.m"
                                        {
#line 336 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(parse_tree__prog_io_dcg__AGoal0_337, parse_tree__prog_io_dcg__Unify_340, parse_tree__prog_io_dcg__Context_3, &parse_tree__prog_io_dcg__AGoal_341);
                                        }
#line 337 "prog_io_dcg.m"
                                        {
#line 337 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__V_366_366 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 337 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_366_366, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 337 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_366_366, 1) = ((MR_Box) (parse_tree__prog_io_dcg__AGoal_341));
#line 337 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_366_366, 2) = ((MR_Box) (parse_tree__prog_io_dcg__BGoal0_338));
#line 337 "prog_io_dcg.m"
                                        }
#line 337 "prog_io_dcg.m"
                                        {
#line 337 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__Goal_339 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 337 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_339, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_366_366));
#line 337 "prog_io_dcg.m"
                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_339, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
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
                                          parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__VarB_336)), ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10)));
                                        }
#line 345 "prog_io_dcg.m"
                                        if (parse_tree__prog_io_dcg__succeeded)
#line 339 "prog_io_dcg.m"
                                          {
#line 339 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__BGoal_342;
#line 339 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__V_367_367;
#line 339 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__V_368_368;
#line 339 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__V_370_370;
#line 339 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__Unify_373;

#line 339 "prog_io_dcg.m"
                                            *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__VarA_334;
#line 341 "prog_io_dcg.m"
                                            {
#line 341 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__V_367_367 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_367_367, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__HeadVar__11_11));
#line 341 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_367_367, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 341 "prog_io_dcg.m"
                                            }
#line 341 "prog_io_dcg.m"
                                            {
#line 341 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__V_368_368 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_368_368, 0) = ((MR_Box) (parse_tree__prog_io_dcg__VarB_336));
#line 341 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_368_368, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 341 "prog_io_dcg.m"
                                            }
#line 340 "prog_io_dcg.m"
                                            {
#line 340 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__Unify_373 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 340 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_373, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 340 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_373, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_367_367));
#line 340 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_373, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_368_368));
#line 340 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_373, 3) = ((MR_Box) ((MR_Integer) 0));
#line 340 "prog_io_dcg.m"
                                            }
#line 343 "prog_io_dcg.m"
                                            {
#line 343 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(parse_tree__prog_io_dcg__BGoal0_338, parse_tree__prog_io_dcg__Unify_373, parse_tree__prog_io_dcg__Context_3, &parse_tree__prog_io_dcg__BGoal_342);
                                            }
#line 344 "prog_io_dcg.m"
                                            {
#line 344 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__V_370_370 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 344 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_370_370, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 344 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_370_370, 1) = ((MR_Box) (parse_tree__prog_io_dcg__AGoal0_337));
#line 344 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_370_370, 2) = ((MR_Box) (parse_tree__prog_io_dcg__BGoal_342));
#line 344 "prog_io_dcg.m"
                                            }
#line 344 "prog_io_dcg.m"
                                            {
#line 344 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__Goal_339 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 344 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_339, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_370_370));
#line 344 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_339, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 344 "prog_io_dcg.m"
                                            }
#line 339 "prog_io_dcg.m"
                                          }
#line 345 "prog_io_dcg.m"
                                        else
#line 346 "prog_io_dcg.m"
                                          {
#line 346 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__V_371_371;
#line 346 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__AGoal_374;

#line 346 "prog_io_dcg.m"
                                            *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__VarB_336;
#line 347 "prog_io_dcg.m"
                                            {
#line 347 "prog_io_dcg.m"
                                              parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_io_dcg__VarA_334, parse_tree__prog_io_dcg__VarB_336, parse_tree__prog_io_dcg__AGoal0_337, &parse_tree__prog_io_dcg__AGoal_374);
                                            }
#line 348 "prog_io_dcg.m"
                                            {
#line 348 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__V_371_371 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 348 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_371_371, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 348 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_371_371, 1) = ((MR_Box) (parse_tree__prog_io_dcg__AGoal_374));
#line 348 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_371_371, 2) = ((MR_Box) (parse_tree__prog_io_dcg__BGoal0_338));
#line 348 "prog_io_dcg.m"
                                            }
#line 348 "prog_io_dcg.m"
                                            {
#line 348 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__Goal_339 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 348 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_339, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_371_371));
#line 348 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_339, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
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
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_339));
#line 350 "prog_io_dcg.m"
                                }
#line 349 "prog_io_dcg.m"
                              }
#line 351 "prog_io_dcg.m"
                            else
#line 352 "prog_io_dcg.m"
                              {
#line 352 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__TypeInfo_556_556;
#line 352 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__ASpecs_343;
#line 352 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__BSpecs_344;
#line 352 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_372_372;

#line 352 "prog_io_dcg.m"
                                *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__VarA_334;
#line 3519 "parse_tree.prog_io_dcg.c"
                                parse_tree__prog_io_dcg__TypeInfo_556_556 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[0];
#line 353 "prog_io_dcg.m"
                                {
#line 353 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__ASpecs_343 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeInfo_556_556, parse_tree__prog_io_dcg__MaybeAGoal0_333);
                                }
#line 354 "prog_io_dcg.m"
                                {
#line 354 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__BSpecs_344 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeInfo_556_556, parse_tree__prog_io_dcg__MaybeBGoal0_335);
                                }
#line 355 "prog_io_dcg.m"
                                {
#line 355 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__V_372_372 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__ASpecs_343, parse_tree__prog_io_dcg__BSpecs_344);
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
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_372_372));
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
              MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_545_545;
#line 246 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_546_546;
#line 246 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__A0_181;
#line 246 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__A_188;
#line 246 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__Goal_189;
#line 246 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_194_194;
#line 246 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_195_195;
#line 246 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_196_196;
#line 246 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_197_197;

#line 245 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 245 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 245 "prog_io_dcg.m"
                {
#line 245 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__A0_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 245 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 245 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_194_194 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 246 "prog_io_dcg.m"
                    {
#line 246 "prog_io_dcg.m"
                      *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__HeadVar__10_10;
#line 3605 "parse_tree.prog_io_dcg.c"
                      parse_tree__prog_io_dcg__TypeCtorInfo_545_545 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 3607 "parse_tree.prog_io_dcg.c"
                      parse_tree__prog_io_dcg__TypeCtorInfo_546_546 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 248 "prog_io_dcg.m"
                      {
#line 248 "prog_io_dcg.m"
                        mercury__term__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_545_545, parse_tree__prog_io_dcg__TypeCtorInfo_546_546, parse_tree__prog_io_dcg__A0_181, &parse_tree__prog_io_dcg__A_188);
                      }
#line 249 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_197_197 = (MR_Integer) 0;
#line 245 "prog_io_dcg.m"
                      *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8;
#line 245 "prog_io_dcg.m"
                      *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6;
#line 249 "prog_io_dcg.m"
                      {
#line 249 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_196_196, 0) = ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10));
#line 249 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_196_196, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 249 "prog_io_dcg.m"
                      }
#line 249 "prog_io_dcg.m"
                      {
#line 249 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_195_195 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 249 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_195_195, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 249 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_195_195, 1) = ((MR_Box) (parse_tree__prog_io_dcg__A_188));
#line 249 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_195_195, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_196_196));
#line 249 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_195_195, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_197_197));
#line 249 "prog_io_dcg.m"
                      }
#line 249 "prog_io_dcg.m"
                      {
#line 249 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Goal_189 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 249 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_189, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_195_195));
#line 249 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_189, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
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
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_189));
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
                MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_547_547;
#line 252 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_548_548;
#line 252 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__A0_198;
#line 252 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__A_206;
#line 252 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__Goal_207;
#line 252 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_212_212;
#line 252 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_215_215;
#line 252 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_216_216;
#line 252 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_217_217;

#line 251 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 251 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 251 "prog_io_dcg.m"
                  {
#line 251 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__A0_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 251 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 251 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_212_212 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 252 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 252 "prog_io_dcg.m"
                      {
#line 254 "prog_io_dcg.m"
                        {
#line 254 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__new_dcg_var_5_p_0(parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__11_11);
                        }
#line 3720 "parse_tree.prog_io_dcg.c"
                        parse_tree__prog_io_dcg__TypeCtorInfo_547_547 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 3722 "parse_tree.prog_io_dcg.c"
                        parse_tree__prog_io_dcg__TypeCtorInfo_548_548 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 255 "prog_io_dcg.m"
                        {
#line 255 "prog_io_dcg.m"
                          mercury__term__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_547_547, parse_tree__prog_io_dcg__TypeCtorInfo_548_548, parse_tree__prog_io_dcg__A0_198, &parse_tree__prog_io_dcg__A_206);
                        }
#line 256 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_217_217 = (MR_Integer) 0;
#line 256 "prog_io_dcg.m"
                        {
#line 256 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_216_216, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__HeadVar__11_11));
#line 256 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_216_216, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 256 "prog_io_dcg.m"
                        }
#line 256 "prog_io_dcg.m"
                        {
#line 256 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_215_215 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 256 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_215_215, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 256 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_215_215, 1) = ((MR_Box) (parse_tree__prog_io_dcg__A_206));
#line 256 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_215_215, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_216_216));
#line 256 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_215_215, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_217_217));
#line 256 "prog_io_dcg.m"
                        }
#line 256 "prog_io_dcg.m"
                        {
#line 256 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__Goal_207 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 256 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_207, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_215_215));
#line 256 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_207, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
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
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_207));
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
                  MR_Word parse_tree__prog_io_dcg__Goal_140;
#line 228 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_147_147;
#line 228 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_148_148;
#line 228 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_149_149;
#line 228 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_150_150;

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
#line 232 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_150_150 = (MR_Integer) 0;
#line 232 "prog_io_dcg.m"
                      {
#line 232 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_148_148, 0) = ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10));
#line 232 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_148_148, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 232 "prog_io_dcg.m"
                      }
#line 232 "prog_io_dcg.m"
                      {
#line 232 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_149_149, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__HeadVar__11_11));
#line 232 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_149_149, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 232 "prog_io_dcg.m"
                      }
#line 231 "prog_io_dcg.m"
                      {
#line 231 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_147_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 231 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_147_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 231 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_147_147, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_148_148));
#line 231 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_147_147, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_149_149));
#line 231 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_147_147, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_150_150));
#line 231 "prog_io_dcg.m"
                      }
#line 233 "prog_io_dcg.m"
                      {
#line 233 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Goal_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 233 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_140, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_147_147));
#line 233 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_140, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 233 "prog_io_dcg.m"
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
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_140));
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
                    MR_Word parse_tree__prog_io_dcg__ATerm_430;
#line 379 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__MaybeAGoal_437;
#line 379 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__V_446_446;
#line 381 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__V_438_438;

#line 378 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 378 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 378 "prog_io_dcg.m"
                      {
#line 378 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__ATerm_430 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 378 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_446_446 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 378 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_446_446 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "prog_io_dcg.m"
                        if (parse_tree__prog_io_dcg__succeeded)
#line 379 "prog_io_dcg.m"
                          {
#line 379 "prog_io_dcg.m"
                            *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__HeadVar__10_10;
#line 381 "prog_io_dcg.m"
                            {
#line 381 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ATerm_430, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeAGoal_437, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, &parse_tree__prog_io_dcg__V_438_438);
                            }
#line 387 "prog_io_dcg.m"
                            if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeAGoal_437)) == (MR_mktag((MR_Integer) 0))))
#line 389 "prog_io_dcg.m"
                              *parse_tree__prog_io_dcg__MaybeGoal_5 = parse_tree__prog_io_dcg__MaybeAGoal_437;
#line 387 "prog_io_dcg.m"
                            else
#line 384 "prog_io_dcg.m"
                              {
#line 384 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__AGoal_439 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeAGoal_437, (MR_Integer) 0)));
#line 384 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__Goal_440;
#line 384 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_449_449;

#line 385 "prog_io_dcg.m"
                                {
#line 385 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__V_449_449 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "prog_io_dcg.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_449_449, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 385 "prog_io_dcg.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_449_449, 1) = ((MR_Box) (parse_tree__prog_io_dcg__AGoal_439));
#line 385 "prog_io_dcg.m"
                                }
#line 385 "prog_io_dcg.m"
                                {
#line 385 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__Goal_440 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 385 "prog_io_dcg.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_440, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_449_449));
#line 385 "prog_io_dcg.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_440, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
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
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_440));
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
                      MR_Word parse_tree__prog_io_dcg__CondTerm_226;
#line 259 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__ThenTerm_227;
#line 259 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__MaybeVarsCond_229;
#line 259 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__MaybeThen_230;
#line 259 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_244_244;
#line 259 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_245_245;
#line 259 "prog_io_dcg.m"
                      MR_String parse_tree__prog_io_dcg__V_246_246;
#line 259 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_247_247;
#line 259 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_248_248;
#line 259 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_249_249;
#line 259 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_250_250;
#line 260 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_228_228;
#line 277 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Vars_231;
#line 277 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__StateVars_232;
#line 277 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Cond_233;
#line 277 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Then_234;

#line 260 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 260 "prog_io_dcg.m"
                      if (parse_tree__prog_io_dcg__succeeded)
#line 260 "prog_io_dcg.m"
                        {
#line 260 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 260 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 260 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_250_250 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 259 "prog_io_dcg.m"
                          if (parse_tree__prog_io_dcg__succeeded)
#line 259 "prog_io_dcg.m"
                            {
#line 260 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_244_244)) == (MR_mktag((MR_Integer) 0)));
#line 260 "prog_io_dcg.m"
                              if (parse_tree__prog_io_dcg__succeeded)
#line 260 "prog_io_dcg.m"
                                {
#line 260 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_244_244, (MR_Integer) 0)));
#line 260 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_244_244, (MR_Integer) 1)));
#line 260 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_244_244, (MR_Integer) 2)));
#line 260 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_245_245)) == (MR_mktag((MR_Integer) 0)));
#line 260 "prog_io_dcg.m"
                                  if (parse_tree__prog_io_dcg__succeeded)
#line 260 "prog_io_dcg.m"
                                    {
#line 260 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__V_246_246 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_245_245, (MR_Integer) 0)));
#line 260 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_246_246, (MR_String) "then") == 0);
#line 259 "prog_io_dcg.m"
                                      if (parse_tree__prog_io_dcg__succeeded)
#line 259 "prog_io_dcg.m"
                                        {
#line 260 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_247_247)) == (MR_mktag((MR_Integer) 1)));
#line 260 "prog_io_dcg.m"
                                          if (parse_tree__prog_io_dcg__succeeded)
#line 260 "prog_io_dcg.m"
                                            {
#line 260 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__CondTerm_226 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_247_247, (MR_Integer) 0)));
#line 260 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_247_247, (MR_Integer) 1)));
#line 260 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_248_248)) == (MR_mktag((MR_Integer) 1)));
#line 260 "prog_io_dcg.m"
                                              if (parse_tree__prog_io_dcg__succeeded)
#line 260 "prog_io_dcg.m"
                                                {
#line 260 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__ThenTerm_227 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_248_248, (MR_Integer) 0)));
#line 260 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_248_248, (MR_Integer) 1)));
#line 260 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_249_249 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 259 "prog_io_dcg.m"
                                                  if (parse_tree__prog_io_dcg__succeeded)
#line 259 "prog_io_dcg.m"
                                                    {
#line 262 "prog_io_dcg.m"
                                                      {
#line 262 "prog_io_dcg.m"
                                                        parse_tree__prog_io_dcg__parse_dcg_if_then_12_p_0(parse_tree__prog_io_dcg__CondTerm_226, parse_tree__prog_io_dcg__ThenTerm_227, parse_tree__prog_io_dcg__Context_3, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeVarsCond_229, &parse_tree__prog_io_dcg__MaybeThen_230, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                                                      }
#line 265 "prog_io_dcg.m"
                                                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeVarsCond_229)) == (MR_mktag((MR_Integer) 1)));
#line 265 "prog_io_dcg.m"
                                                      if (parse_tree__prog_io_dcg__succeeded)
#line 265 "prog_io_dcg.m"
                                                        {
#line 265 "prog_io_dcg.m"
                                                          parse_tree__prog_io_dcg__Vars_231 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_229, (MR_Integer) 0)));
#line 265 "prog_io_dcg.m"
                                                          parse_tree__prog_io_dcg__StateVars_232 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_229, (MR_Integer) 1)));
#line 265 "prog_io_dcg.m"
                                                          parse_tree__prog_io_dcg__Cond_233 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_229, (MR_Integer) 2)));
#line 266 "prog_io_dcg.m"
                                                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeThen_230)) == (MR_mktag((MR_Integer) 1)));
#line 266 "prog_io_dcg.m"
                                                          if (parse_tree__prog_io_dcg__succeeded)
#line 266 "prog_io_dcg.m"
                                                            parse_tree__prog_io_dcg__Then_234 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeThen_230, (MR_Integer) 0)));
#line 265 "prog_io_dcg.m"
                                                        }
#line 277 "prog_io_dcg.m"
                                                      if (parse_tree__prog_io_dcg__succeeded)
#line 274 "prog_io_dcg.m"
                                                        {
#line 274 "prog_io_dcg.m"
                                                          MR_Word parse_tree__prog_io_dcg__Else_235;
#line 274 "prog_io_dcg.m"
                                                          MR_Word parse_tree__prog_io_dcg__Goal_237;
#line 274 "prog_io_dcg.m"
                                                          MR_Word parse_tree__prog_io_dcg__V_257_257;

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
                                                              {
#line 269 "prog_io_dcg.m"
                                                                parse_tree__prog_io_dcg__Else_235 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 269 "prog_io_dcg.m"
                                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Else_235, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "prog_io_dcg.m"
                                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Else_235, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 269 "prog_io_dcg.m"
                                                              }
#line 269 "prog_io_dcg.m"
                                                            }
#line 270 "prog_io_dcg.m"
                                                          else
#line 272 "prog_io_dcg.m"
                                                            {
#line 272 "prog_io_dcg.m"
                                                              MR_Word parse_tree__prog_io_dcg__Unify_236;
#line 272 "prog_io_dcg.m"
                                                              MR_Word parse_tree__prog_io_dcg__V_254_254;
#line 272 "prog_io_dcg.m"
                                                              MR_Word parse_tree__prog_io_dcg__V_255_255;

#line 271 "prog_io_dcg.m"
                                                              {
#line 271 "prog_io_dcg.m"
                                                                parse_tree__prog_io_dcg__V_254_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "prog_io_dcg.m"
                                                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_254_254, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__HeadVar__11_11));
#line 271 "prog_io_dcg.m"
                                                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_254_254, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 271 "prog_io_dcg.m"
                                                              }
#line 271 "prog_io_dcg.m"
                                                              {
#line 271 "prog_io_dcg.m"
                                                                parse_tree__prog_io_dcg__V_255_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "prog_io_dcg.m"
                                                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_255_255, 0) = ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10));
#line 271 "prog_io_dcg.m"
                                                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_255_255, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 271 "prog_io_dcg.m"
                                                              }
#line 271 "prog_io_dcg.m"
                                                              {
#line 271 "prog_io_dcg.m"
                                                                parse_tree__prog_io_dcg__Unify_236 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 271 "prog_io_dcg.m"
                                                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_236, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 271 "prog_io_dcg.m"
                                                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_236, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_254_254));
#line 271 "prog_io_dcg.m"
                                                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_236, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_255_255));
#line 271 "prog_io_dcg.m"
                                                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Unify_236, 3) = ((MR_Box) ((MR_Integer) 0));
#line 271 "prog_io_dcg.m"
                                                              }
#line 273 "prog_io_dcg.m"
                                                              {
#line 273 "prog_io_dcg.m"
                                                                parse_tree__prog_io_dcg__Else_235 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 273 "prog_io_dcg.m"
                                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Else_235, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Unify_236));
#line 273 "prog_io_dcg.m"
                                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Else_235, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 273 "prog_io_dcg.m"
                                                              }
#line 272 "prog_io_dcg.m"
                                                            }
#line 275 "prog_io_dcg.m"
                                                          {
#line 275 "prog_io_dcg.m"
                                                            parse_tree__prog_io_dcg__V_257_257 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 275 "prog_io_dcg.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_257_257, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 275 "prog_io_dcg.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_257_257, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_231));
#line 275 "prog_io_dcg.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_257_257, 2) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_232));
#line 275 "prog_io_dcg.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_257_257, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Cond_233));
#line 275 "prog_io_dcg.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_257_257, 4) = ((MR_Box) (parse_tree__prog_io_dcg__Then_234));
#line 275 "prog_io_dcg.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_257_257, 5) = ((MR_Box) (parse_tree__prog_io_dcg__Else_235));
#line 275 "prog_io_dcg.m"
                                                          }
#line 275 "prog_io_dcg.m"
                                                          {
#line 275 "prog_io_dcg.m"
                                                            parse_tree__prog_io_dcg__Goal_237 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 275 "prog_io_dcg.m"
                                                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_237, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_257_257));
#line 275 "prog_io_dcg.m"
                                                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_237, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
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
                                                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_237));
#line 276 "prog_io_dcg.m"
                                                          }
#line 274 "prog_io_dcg.m"
                                                        }
#line 277 "prog_io_dcg.m"
                                                      else
#line 278 "prog_io_dcg.m"
                                                        {
#line 278 "prog_io_dcg.m"
                                                          MR_Word parse_tree__prog_io_dcg__TypeInfo_549_549 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3];
#line 278 "prog_io_dcg.m"
                                                          MR_Word parse_tree__prog_io_dcg__TypeInfo_550_550 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[0];
#line 278 "prog_io_dcg.m"
                                                          MR_Word parse_tree__prog_io_dcg__CondSpecs_238;
#line 278 "prog_io_dcg.m"
                                                          MR_Word parse_tree__prog_io_dcg__ThenSpecs_239;
#line 278 "prog_io_dcg.m"
                                                          MR_Word parse_tree__prog_io_dcg__V_258_258;

#line 278 "prog_io_dcg.m"
                                                          {
#line 278 "prog_io_dcg.m"
                                                            parse_tree__prog_io_dcg__CondSpecs_238 = parse_tree__prog_io_util__get_any_errors3_1_f_0(parse_tree__prog_io_dcg__TypeInfo_549_549, parse_tree__prog_io_dcg__TypeInfo_549_549, parse_tree__prog_io_dcg__TypeInfo_550_550, parse_tree__prog_io_dcg__MaybeVarsCond_229);
                                                          }
#line 279 "prog_io_dcg.m"
                                                          {
#line 279 "prog_io_dcg.m"
                                                            parse_tree__prog_io_dcg__ThenSpecs_239 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeInfo_550_550, parse_tree__prog_io_dcg__MaybeThen_230);
                                                          }
#line 280 "prog_io_dcg.m"
                                                          {
#line 280 "prog_io_dcg.m"
                                                            parse_tree__prog_io_dcg__V_258_258 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__CondSpecs_238, parse_tree__prog_io_dcg__ThenSpecs_239);
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
                                                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_258_258));
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
                        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_542_542;
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
#line 4324 "parse_tree.prog_io_dcg.c"
                            parse_tree__prog_io_dcg__TypeCtorInfo_542_542 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 184 "prog_io_dcg.m"
                            {
#line 184 "prog_io_dcg.m"
                              parse_tree__prog_io_util__list_to_conjunction_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_542_542, parse_tree__prog_io_dcg__Context_3, parse_tree__prog_io_dcg__G0_12, parse_tree__prog_io_dcg__Gs_13, &parse_tree__prog_io_dcg__G_20);
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
                          MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_543_543;
#line 236 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_544_544;
#line 236 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__ConsTerm0_160;
#line 236 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__ConsTerm_161;
#line 236 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__Term_162;
#line 236 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__Goal_163;
#line 236 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__V_168_168;
#line 236 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__V_169_169;
#line 236 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__V_172_172;
#line 236 "prog_io_dcg.m"
                          MR_String parse_tree__prog_io_dcg__V_173_173;
#line 236 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__V_177_177;
#line 236 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__V_178_178;
#line 236 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__V_179_179;
#line 236 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__V_180_180;
#line 235 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__X_151;
#line 235 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__Xs_152;

#line 235 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 235 "prog_io_dcg.m"
                          if (parse_tree__prog_io_dcg__succeeded)
#line 235 "prog_io_dcg.m"
                            {
#line 235 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__X_151 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 235 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 235 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_168_168)) == (MR_mktag((MR_Integer) 1)));
#line 235 "prog_io_dcg.m"
                              if (parse_tree__prog_io_dcg__succeeded)
#line 235 "prog_io_dcg.m"
                                {
#line 235 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__Xs_152 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_168_168, (MR_Integer) 0)));
#line 235 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_168_168, (MR_Integer) 1)));
#line 235 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_169_169 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                      parse_tree__prog_io_dcg__V_173_173 = (MR_String) "[|]";
#line 4418 "parse_tree.prog_io_dcg.c"
                                      parse_tree__prog_io_dcg__TypeCtorInfo_543_543 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 4420 "parse_tree.prog_io_dcg.c"
                                      parse_tree__prog_io_dcg__TypeCtorInfo_544_544 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 240 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__V_172_172 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_4[1];
#line 240 "prog_io_dcg.m"
                                      {
#line 240 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__ConsTerm0_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 240 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ConsTerm0_160, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_172_172));
#line 240 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ConsTerm0_160, 1) = ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__2_2));
#line 240 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ConsTerm0_160, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 240 "prog_io_dcg.m"
                                      }
#line 241 "prog_io_dcg.m"
                                      {
#line 241 "prog_io_dcg.m"
                                        mercury__term__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_543_543, parse_tree__prog_io_dcg__TypeCtorInfo_544_544, parse_tree__prog_io_dcg__ConsTerm0_160, &parse_tree__prog_io_dcg__ConsTerm_161);
                                      }
#line 242 "prog_io_dcg.m"
                                      {
#line 242 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_177_177, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__HeadVar__11_11));
#line 242 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_177_177, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 242 "prog_io_dcg.m"
                                      }
#line 242 "prog_io_dcg.m"
                                      {
#line 242 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__succeeded = parse_tree__prog_io_dcg__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_dcg__ConsTerm_161, parse_tree__prog_io_dcg__V_177_177, &parse_tree__prog_io_dcg__Term_162);
                                      }
#line 236 "prog_io_dcg.m"
                                      if (parse_tree__prog_io_dcg__succeeded)
#line 236 "prog_io_dcg.m"
                                        {
#line 243 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__V_180_180 = (MR_Integer) 0;
#line 243 "prog_io_dcg.m"
                                          {
#line 243 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_179_179, 0) = ((MR_Box) (parse_tree__prog_io_dcg__HeadVar__10_10));
#line 243 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_179_179, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 243 "prog_io_dcg.m"
                                          }
#line 243 "prog_io_dcg.m"
                                          {
#line 243 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__V_178_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 243 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_178_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 243 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_178_178, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_179_179));
#line 243 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_178_178, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Term_162));
#line 243 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_178_178, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_180_180));
#line 243 "prog_io_dcg.m"
                                          }
#line 243 "prog_io_dcg.m"
                                          {
#line 243 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__Goal_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 243 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_163, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_178_178));
#line 243 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_163, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
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
                                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_163));
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
                            MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_558_558;
#line 392 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_559_559;
#line 392 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__QVarsTerm_450;
#line 392 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__SubTerm_451;
#line 392 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__GenericVarSet_458;
#line 392 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__MaybeStateVarsAndVars_459;
#line 392 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__MaybeSubGoal_460;
#line 392 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__V_486_486;
#line 392 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__V_487_487;
#line 427 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__Vars0_461;
#line 427 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__StateVars0_462;
#line 427 "prog_io_dcg.m"
                            MR_Word parse_tree__prog_io_dcg__SubGoal_463;

#line 391 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 391 "prog_io_dcg.m"
                            if (parse_tree__prog_io_dcg__succeeded)
#line 391 "prog_io_dcg.m"
                              {
#line 391 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__QVarsTerm_450 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 391 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__V_486_486 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 391 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_486_486)) == (MR_mktag((MR_Integer) 1)));
#line 391 "prog_io_dcg.m"
                                if (parse_tree__prog_io_dcg__succeeded)
#line 391 "prog_io_dcg.m"
                                  {
#line 391 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__SubTerm_451 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_486_486, (MR_Integer) 0)));
#line 391 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__V_487_487 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_486_486, (MR_Integer) 1)));
#line 391 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_487_487 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 392 "prog_io_dcg.m"
                                    if (parse_tree__prog_io_dcg__succeeded)
#line 392 "prog_io_dcg.m"
                                      {
#line 4577 "parse_tree.prog_io_dcg.c"
                                        parse_tree__prog_io_dcg__TypeCtorInfo_558_558 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 4579 "parse_tree.prog_io_dcg.c"
                                        parse_tree__prog_io_dcg__TypeCtorInfo_559_559 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 395 "prog_io_dcg.m"
                                        {
#line 395 "prog_io_dcg.m"
                                          mercury__varset__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_558_558, parse_tree__prog_io_dcg__TypeCtorInfo_559_559, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, &parse_tree__prog_io_dcg__GenericVarSet_458);
                                        }
#line 396 "prog_io_dcg.m"
                                        {
#line 396 "prog_io_dcg.m"
                                          parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_559_559, parse_tree__prog_io_dcg__QVarsTerm_450, parse_tree__prog_io_dcg__GenericVarSet_458, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeStateVarsAndVars_459);
                                        }
#line 398 "prog_io_dcg.m"
                                        {
#line 398 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubTerm_451, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeSubGoal_460, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                                        }
#line 401 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeStateVarsAndVars_459)) == (MR_mktag((MR_Integer) 1)));
#line 401 "prog_io_dcg.m"
                                        if (parse_tree__prog_io_dcg__succeeded)
#line 401 "prog_io_dcg.m"
                                          {
#line 401 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__Vars0_461 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeStateVarsAndVars_459, (MR_Integer) 0)));
#line 401 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__StateVars0_462 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeStateVarsAndVars_459, (MR_Integer) 1)));
#line 402 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoal_460)) == (MR_mktag((MR_Integer) 1)));
#line 402 "prog_io_dcg.m"
                                            if (parse_tree__prog_io_dcg__succeeded)
#line 402 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__SubGoal_463 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoal_460, (MR_Integer) 0)));
#line 401 "prog_io_dcg.m"
                                          }
#line 427 "prog_io_dcg.m"
                                        if (parse_tree__prog_io_dcg__succeeded)
#line 404 "prog_io_dcg.m"
                                          {
#line 404 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__TypeInfo_564_564 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[4];
#line 404 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__TypeInfo_565_565 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 404 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__StateVars_464;
#line 404 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__Vars_465;
#line 404 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__SubGoalExpr_466;
#line 404 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__SubContext_467;
#line 404 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__GoalExpr_468;
#line 404 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__Goal_477;

#line 404 "prog_io_dcg.m"
                                            {
#line 404 "prog_io_dcg.m"
                                              mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_564_564, parse_tree__prog_io_dcg__TypeInfo_565_565, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[3], parse_tree__prog_io_dcg__StateVars0_462, &parse_tree__prog_io_dcg__StateVars_464);
                                            }
#line 405 "prog_io_dcg.m"
                                            {
#line 405 "prog_io_dcg.m"
                                              mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_564_564, parse_tree__prog_io_dcg__TypeInfo_565_565, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[4], parse_tree__prog_io_dcg__Vars0_461, &parse_tree__prog_io_dcg__Vars_465);
                                            }
#line 406 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__SubGoalExpr_466 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__SubGoal_463, (MR_Integer) 0)));
#line 406 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__SubContext_467 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__SubGoal_463, (MR_Integer) 1)));
#line 411 "prog_io_dcg.m"
                                            if ((parse_tree__prog_io_dcg__StateVars_464 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 411 "prog_io_dcg.m"
                                              if ((parse_tree__prog_io_dcg__Vars_465 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 408 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__GoalExpr_468 = parse_tree__prog_io_dcg__SubGoalExpr_466;
#line 411 "prog_io_dcg.m"
                                              else
#line 418 "prog_io_dcg.m"
                                                {
#line 418 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__GoalExpr_468 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 418 "prog_io_dcg.m"
                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_468, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 418 "prog_io_dcg.m"
                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_468, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_465));
#line 418 "prog_io_dcg.m"
                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_468, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_463));
#line 418 "prog_io_dcg.m"
                                                }
#line 411 "prog_io_dcg.m"
                                            else
#line 411 "prog_io_dcg.m"
                                              if ((parse_tree__prog_io_dcg__Vars_465 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 414 "prog_io_dcg.m"
                                                {
#line 414 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__GoalExpr_468 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 414 "prog_io_dcg.m"
                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_468, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 414 "prog_io_dcg.m"
                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_468, 1) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_464));
#line 414 "prog_io_dcg.m"
                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_468, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_463));
#line 414 "prog_io_dcg.m"
                                                }
#line 411 "prog_io_dcg.m"
                                              else
#line 420 "prog_io_dcg.m"
                                                {
#line 420 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__V_493_493;
#line 420 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__V_494_494;

#line 422 "prog_io_dcg.m"
                                                  {
#line 422 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__V_494_494 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 422 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_494_494, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 422 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_494_494, 1) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_464));
#line 422 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_494_494, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_463));
#line 422 "prog_io_dcg.m"
                                                  }
#line 423 "prog_io_dcg.m"
                                                  {
#line 423 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__V_493_493 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 423 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_493_493, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_494_494));
#line 423 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_493_493, 1) = ((MR_Box) (parse_tree__prog_io_dcg__SubContext_467));
#line 423 "prog_io_dcg.m"
                                                  }
#line 422 "prog_io_dcg.m"
                                                  {
#line 422 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__GoalExpr_468 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 422 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_468, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 422 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_468, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_465));
#line 422 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_468, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_493_493));
#line 422 "prog_io_dcg.m"
                                                  }
#line 420 "prog_io_dcg.m"
                                                }
#line 425 "prog_io_dcg.m"
                                            {
#line 425 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__Goal_477 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 425 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_477, 0) = ((MR_Box) (parse_tree__prog_io_dcg__GoalExpr_468));
#line 425 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_477, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 425 "prog_io_dcg.m"
                                            }
#line 426 "prog_io_dcg.m"
                                            {
#line 426 "prog_io_dcg.m"
                                              MR_Word base;
#line 426 "prog_io_dcg.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 426 "prog_io_dcg.m"
                                              *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 426 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_477));
#line 426 "prog_io_dcg.m"
                                            }
#line 404 "prog_io_dcg.m"
                                          }
#line 427 "prog_io_dcg.m"
                                        else
#line 428 "prog_io_dcg.m"
                                          {
#line 428 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__TypeInfo_570_570 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[5];
#line 428 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__VarsSpecs_478;
#line 428 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__SubGoalSpecs_479;
#line 428 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__V_495_495;

#line 428 "prog_io_dcg.m"
                                            {
#line 428 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__VarsSpecs_478 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_dcg__TypeInfo_570_570, parse_tree__prog_io_dcg__TypeInfo_570_570, parse_tree__prog_io_dcg__MaybeStateVarsAndVars_459);
                                            }
#line 429 "prog_io_dcg.m"
                                            {
#line 429 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__SubGoalSpecs_479 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[0], parse_tree__prog_io_dcg__MaybeSubGoal_460);
                                            }
#line 430 "prog_io_dcg.m"
                                            {
#line 430 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__V_495_495 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__VarsSpecs_478, parse_tree__prog_io_dcg__SubGoalSpecs_479);
                                            }
#line 430 "prog_io_dcg.m"
                                            {
#line 430 "prog_io_dcg.m"
                                              MR_Word base;
#line 430 "prog_io_dcg.m"
                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 430 "prog_io_dcg.m"
                                              *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 430 "prog_io_dcg.m"
                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_495_495));
#line 430 "prog_io_dcg.m"
                                            }
#line 428 "prog_io_dcg.m"
                                          }
#line 427 "prog_io_dcg.m"
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
                              MR_Word parse_tree__prog_io_dcg__ATerm_410;
#line 366 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__MaybeAGoal_417;
#line 366 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__V_426_426;
#line 368 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__V_418_418;

#line 365 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 365 "prog_io_dcg.m"
                              if (parse_tree__prog_io_dcg__succeeded)
#line 365 "prog_io_dcg.m"
                                {
#line 365 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__ATerm_410 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 365 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__V_426_426 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 365 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_426_426 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 366 "prog_io_dcg.m"
                                  if (parse_tree__prog_io_dcg__succeeded)
#line 366 "prog_io_dcg.m"
                                    {
#line 366 "prog_io_dcg.m"
                                      *parse_tree__prog_io_dcg__HeadVar__11_11 = parse_tree__prog_io_dcg__HeadVar__10_10;
#line 368 "prog_io_dcg.m"
                                      {
#line 368 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ATerm_410, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeAGoal_417, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, &parse_tree__prog_io_dcg__V_418_418);
                                      }
#line 374 "prog_io_dcg.m"
                                      if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeAGoal_417)) == (MR_mktag((MR_Integer) 0))))
#line 376 "prog_io_dcg.m"
                                        *parse_tree__prog_io_dcg__MaybeGoal_5 = parse_tree__prog_io_dcg__MaybeAGoal_417;
#line 374 "prog_io_dcg.m"
                                      else
#line 371 "prog_io_dcg.m"
                                        {
#line 371 "prog_io_dcg.m"
                                          MR_Word parse_tree__prog_io_dcg__AGoal_419 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeAGoal_417, (MR_Integer) 0)));
#line 371 "prog_io_dcg.m"
                                          MR_Word parse_tree__prog_io_dcg__Goal_420;
#line 371 "prog_io_dcg.m"
                                          MR_Word parse_tree__prog_io_dcg__V_429_429;

#line 372 "prog_io_dcg.m"
                                          {
#line 372 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__V_429_429 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 372 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_429_429, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 372 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_429_429, 1) = ((MR_Box) (parse_tree__prog_io_dcg__AGoal_419));
#line 372 "prog_io_dcg.m"
                                          }
#line 372 "prog_io_dcg.m"
                                          {
#line 372 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__Goal_420 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 372 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_420, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_429_429));
#line 372 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_420, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
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
                                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_420));
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
                                MR_Word parse_tree__prog_io_dcg__IfTerm_377;
#line 359 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__ElseTerm_378;
#line 359 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__CondTerm_385;
#line 359 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__ThenTerm_386;
#line 359 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__Context_388;
#line 359 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_395_395;
#line 359 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_396_396;
#line 359 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_397_397;
#line 359 "prog_io_dcg.m"
                                MR_String parse_tree__prog_io_dcg__V_398_398;
#line 359 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_399_399;
#line 359 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_400_400;
#line 359 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_401_401;
#line 359 "prog_io_dcg.m"
                                MR_String parse_tree__prog_io_dcg__V_402_402;
#line 359 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_403_403;
#line 359 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_404_404;
#line 359 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_405_405;
#line 359 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_406_406;
#line 362 "prog_io_dcg.m"
                                MR_Word parse_tree__prog_io_dcg__V_387_387;

#line 358 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 358 "prog_io_dcg.m"
                                if (parse_tree__prog_io_dcg__succeeded)
#line 358 "prog_io_dcg.m"
                                  {
#line 358 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__IfTerm_377 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 358 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__V_395_395 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 358 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_395_395)) == (MR_mktag((MR_Integer) 1)));
#line 358 "prog_io_dcg.m"
                                    if (parse_tree__prog_io_dcg__succeeded)
#line 358 "prog_io_dcg.m"
                                      {
#line 358 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__ElseTerm_378 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_395_395, (MR_Integer) 0)));
#line 358 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__V_396_396 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_395_395, (MR_Integer) 1)));
#line 358 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_396_396 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "prog_io_dcg.m"
                                        if (parse_tree__prog_io_dcg__succeeded)
#line 359 "prog_io_dcg.m"
                                          {
#line 361 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__IfTerm_377)) == (MR_mktag((MR_Integer) 0)));
#line 361 "prog_io_dcg.m"
                                            if (parse_tree__prog_io_dcg__succeeded)
#line 361 "prog_io_dcg.m"
                                              {
#line 361 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__V_397_397 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__IfTerm_377, (MR_Integer) 0)));
#line 361 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__V_399_399 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__IfTerm_377, (MR_Integer) 1)));
#line 361 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__Context_388 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__IfTerm_377, (MR_Integer) 2)));
#line 361 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_397_397)) == (MR_mktag((MR_Integer) 0)));
#line 361 "prog_io_dcg.m"
                                                if (parse_tree__prog_io_dcg__succeeded)
#line 361 "prog_io_dcg.m"
                                                  {
#line 361 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__V_398_398 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_397_397, (MR_Integer) 0)));
#line 361 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_398_398, (MR_String) "if") == 0);
#line 359 "prog_io_dcg.m"
                                                    if (parse_tree__prog_io_dcg__succeeded)
#line 359 "prog_io_dcg.m"
                                                      {
#line 362 "prog_io_dcg.m"
                                                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_399_399)) == (MR_mktag((MR_Integer) 1)));
#line 362 "prog_io_dcg.m"
                                                        if (parse_tree__prog_io_dcg__succeeded)
#line 362 "prog_io_dcg.m"
                                                          {
#line 362 "prog_io_dcg.m"
                                                            parse_tree__prog_io_dcg__V_400_400 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_399_399, (MR_Integer) 0)));
#line 362 "prog_io_dcg.m"
                                                            parse_tree__prog_io_dcg__V_406_406 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_399_399, (MR_Integer) 1)));
#line 362 "prog_io_dcg.m"
                                                            parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_406_406 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "prog_io_dcg.m"
                                                            if (parse_tree__prog_io_dcg__succeeded)
#line 359 "prog_io_dcg.m"
                                                              {
#line 362 "prog_io_dcg.m"
                                                                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_400_400)) == (MR_mktag((MR_Integer) 0)));
#line 362 "prog_io_dcg.m"
                                                                if (parse_tree__prog_io_dcg__succeeded)
#line 362 "prog_io_dcg.m"
                                                                  {
#line 362 "prog_io_dcg.m"
                                                                    parse_tree__prog_io_dcg__V_401_401 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_400_400, (MR_Integer) 0)));
#line 362 "prog_io_dcg.m"
                                                                    parse_tree__prog_io_dcg__V_403_403 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_400_400, (MR_Integer) 1)));
#line 362 "prog_io_dcg.m"
                                                                    parse_tree__prog_io_dcg__V_387_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_400_400, (MR_Integer) 2)));
#line 362 "prog_io_dcg.m"
                                                                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_401_401)) == (MR_mktag((MR_Integer) 0)));
#line 362 "prog_io_dcg.m"
                                                                    if (parse_tree__prog_io_dcg__succeeded)
#line 362 "prog_io_dcg.m"
                                                                      {
#line 362 "prog_io_dcg.m"
                                                                        parse_tree__prog_io_dcg__V_402_402 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_401_401, (MR_Integer) 0)));
#line 362 "prog_io_dcg.m"
                                                                        parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_402_402, (MR_String) "then") == 0);
#line 359 "prog_io_dcg.m"
                                                                        if (parse_tree__prog_io_dcg__succeeded)
#line 359 "prog_io_dcg.m"
                                                                          {
#line 362 "prog_io_dcg.m"
                                                                            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_403_403)) == (MR_mktag((MR_Integer) 1)));
#line 362 "prog_io_dcg.m"
                                                                            if (parse_tree__prog_io_dcg__succeeded)
#line 362 "prog_io_dcg.m"
                                                                              {
#line 362 "prog_io_dcg.m"
                                                                                parse_tree__prog_io_dcg__CondTerm_385 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_403_403, (MR_Integer) 0)));
#line 362 "prog_io_dcg.m"
                                                                                parse_tree__prog_io_dcg__V_404_404 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_403_403, (MR_Integer) 1)));
#line 362 "prog_io_dcg.m"
                                                                                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_404_404)) == (MR_mktag((MR_Integer) 1)));
#line 362 "prog_io_dcg.m"
                                                                                if (parse_tree__prog_io_dcg__succeeded)
#line 362 "prog_io_dcg.m"
                                                                                  {
#line 362 "prog_io_dcg.m"
                                                                                    parse_tree__prog_io_dcg__ThenTerm_386 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_404_404, (MR_Integer) 0)));
#line 362 "prog_io_dcg.m"
                                                                                    parse_tree__prog_io_dcg__V_405_405 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_404_404, (MR_Integer) 1)));
#line 362 "prog_io_dcg.m"
                                                                                    parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_405_405 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "prog_io_dcg.m"
                                                                                    if (parse_tree__prog_io_dcg__succeeded)
#line 359 "prog_io_dcg.m"
                                                                                      {
#line 363 "prog_io_dcg.m"
                                                                                        {
#line 363 "prog_io_dcg.m"
                                                                                          parse_tree__prog_io_dcg__parse_dcg_if_then_else_12_p_0(parse_tree__prog_io_dcg__CondTerm_385, parse_tree__prog_io_dcg__ThenTerm_386, parse_tree__prog_io_dcg__ElseTerm_378, parse_tree__prog_io_dcg__Context_388, parse_tree__prog_io_dcg__HeadVar__4_4, parse_tree__prog_io_dcg__MaybeGoal_5, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
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
#line 433 "prog_io_dcg.m"
                                {
#line 433 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_573_573;
#line 433 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_574_574;
#line 433 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__QVarsTerm_496;
#line 433 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__SubTerm_497;
#line 433 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__GenericVarSet_504;
#line 433 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__MaybeStateVarsAndVars_505;
#line 433 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__MaybeSubGoal_506;
#line 433 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__V_532_532;
#line 433 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__V_533_533;
#line 468 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__Vars0_507;
#line 468 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__StateVars0_508;
#line 468 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__SubGoal_509;

#line 432 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 432 "prog_io_dcg.m"
                                  if (parse_tree__prog_io_dcg__succeeded)
#line 432 "prog_io_dcg.m"
                                    {
#line 432 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__QVarsTerm_496 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 432 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__V_532_532 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 432 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_532_532)) == (MR_mktag((MR_Integer) 1)));
#line 432 "prog_io_dcg.m"
                                      if (parse_tree__prog_io_dcg__succeeded)
#line 432 "prog_io_dcg.m"
                                        {
#line 432 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__SubTerm_497 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_532_532, (MR_Integer) 0)));
#line 432 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__V_533_533 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_532_532, (MR_Integer) 1)));
#line 432 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_533_533 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 433 "prog_io_dcg.m"
                                          if (parse_tree__prog_io_dcg__succeeded)
#line 433 "prog_io_dcg.m"
                                            {
#line 5158 "parse_tree.prog_io_dcg.c"
                                              parse_tree__prog_io_dcg__TypeCtorInfo_573_573 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 5160 "parse_tree.prog_io_dcg.c"
                                              parse_tree__prog_io_dcg__TypeCtorInfo_574_574 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 436 "prog_io_dcg.m"
                                              {
#line 436 "prog_io_dcg.m"
                                                mercury__varset__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_573_573, parse_tree__prog_io_dcg__TypeCtorInfo_574_574, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, &parse_tree__prog_io_dcg__GenericVarSet_504);
                                              }
#line 437 "prog_io_dcg.m"
                                              {
#line 437 "prog_io_dcg.m"
                                                parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_574_574, parse_tree__prog_io_dcg__QVarsTerm_496, parse_tree__prog_io_dcg__GenericVarSet_504, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeStateVarsAndVars_505);
                                              }
#line 439 "prog_io_dcg.m"
                                              {
#line 439 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubTerm_497, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeSubGoal_506, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                                              }
#line 442 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeStateVarsAndVars_505)) == (MR_mktag((MR_Integer) 1)));
#line 442 "prog_io_dcg.m"
                                              if (parse_tree__prog_io_dcg__succeeded)
#line 442 "prog_io_dcg.m"
                                                {
#line 442 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__Vars0_507 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeStateVarsAndVars_505, (MR_Integer) 0)));
#line 442 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__StateVars0_508 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeStateVarsAndVars_505, (MR_Integer) 1)));
#line 443 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoal_506)) == (MR_mktag((MR_Integer) 1)));
#line 443 "prog_io_dcg.m"
                                                  if (parse_tree__prog_io_dcg__succeeded)
#line 443 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__SubGoal_509 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoal_506, (MR_Integer) 0)));
#line 442 "prog_io_dcg.m"
                                                }
#line 468 "prog_io_dcg.m"
                                              if (parse_tree__prog_io_dcg__succeeded)
#line 445 "prog_io_dcg.m"
                                                {
#line 445 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__TypeInfo_579_579 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[4];
#line 445 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__TypeInfo_580_580 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 445 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__StateVars_510;
#line 445 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__Vars_511;
#line 445 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__SubGoalExpr_512;
#line 445 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__SubContext_513;
#line 445 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__GoalExpr_514;
#line 445 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__Goal_523;

#line 445 "prog_io_dcg.m"
                                                  {
#line 445 "prog_io_dcg.m"
                                                    mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_579_579, parse_tree__prog_io_dcg__TypeInfo_580_580, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[5], parse_tree__prog_io_dcg__StateVars0_508, &parse_tree__prog_io_dcg__StateVars_510);
                                                  }
#line 446 "prog_io_dcg.m"
                                                  {
#line 446 "prog_io_dcg.m"
                                                    mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_579_579, parse_tree__prog_io_dcg__TypeInfo_580_580, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[6], parse_tree__prog_io_dcg__Vars0_507, &parse_tree__prog_io_dcg__Vars_511);
                                                  }
#line 447 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__SubGoalExpr_512 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__SubGoal_509, (MR_Integer) 0)));
#line 447 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__SubContext_513 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__SubGoal_509, (MR_Integer) 1)));
#line 452 "prog_io_dcg.m"
                                                  if ((parse_tree__prog_io_dcg__StateVars_510 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 452 "prog_io_dcg.m"
                                                    if ((parse_tree__prog_io_dcg__Vars_511 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 449 "prog_io_dcg.m"
                                                      parse_tree__prog_io_dcg__GoalExpr_514 = parse_tree__prog_io_dcg__SubGoalExpr_512;
#line 452 "prog_io_dcg.m"
                                                    else
#line 459 "prog_io_dcg.m"
                                                      {
#line 459 "prog_io_dcg.m"
                                                        parse_tree__prog_io_dcg__GoalExpr_514 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 459 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_514, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 459 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_514, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_511));
#line 459 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_514, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_509));
#line 459 "prog_io_dcg.m"
                                                      }
#line 452 "prog_io_dcg.m"
                                                  else
#line 452 "prog_io_dcg.m"
                                                    if ((parse_tree__prog_io_dcg__Vars_511 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 455 "prog_io_dcg.m"
                                                      {
#line 455 "prog_io_dcg.m"
                                                        parse_tree__prog_io_dcg__GoalExpr_514 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 455 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_514, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 455 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_514, 1) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_510));
#line 455 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_514, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_509));
#line 455 "prog_io_dcg.m"
                                                      }
#line 452 "prog_io_dcg.m"
                                                    else
#line 461 "prog_io_dcg.m"
                                                      {
#line 461 "prog_io_dcg.m"
                                                        MR_Word parse_tree__prog_io_dcg__V_539_539;
#line 461 "prog_io_dcg.m"
                                                        MR_Word parse_tree__prog_io_dcg__V_540_540;

#line 463 "prog_io_dcg.m"
                                                        {
#line 463 "prog_io_dcg.m"
                                                          parse_tree__prog_io_dcg__V_540_540 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 463 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_540_540, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 463 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_540_540, 1) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_510));
#line 463 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_540_540, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_509));
#line 463 "prog_io_dcg.m"
                                                        }
#line 464 "prog_io_dcg.m"
                                                        {
#line 464 "prog_io_dcg.m"
                                                          parse_tree__prog_io_dcg__V_539_539 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 464 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_539_539, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_540_540));
#line 464 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_539_539, 1) = ((MR_Box) (parse_tree__prog_io_dcg__SubContext_513));
#line 464 "prog_io_dcg.m"
                                                        }
#line 463 "prog_io_dcg.m"
                                                        {
#line 463 "prog_io_dcg.m"
                                                          parse_tree__prog_io_dcg__GoalExpr_514 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 463 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_514, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 463 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_514, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_511));
#line 463 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__GoalExpr_514, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_539_539));
#line 463 "prog_io_dcg.m"
                                                        }
#line 461 "prog_io_dcg.m"
                                                      }
#line 466 "prog_io_dcg.m"
                                                  {
#line 466 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__Goal_523 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 466 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_523, 0) = ((MR_Box) (parse_tree__prog_io_dcg__GoalExpr_514));
#line 466 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_523, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
#line 466 "prog_io_dcg.m"
                                                  }
#line 467 "prog_io_dcg.m"
                                                  {
#line 467 "prog_io_dcg.m"
                                                    MR_Word base;
#line 467 "prog_io_dcg.m"
                                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 467 "prog_io_dcg.m"
                                                    *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 467 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_523));
#line 467 "prog_io_dcg.m"
                                                  }
#line 445 "prog_io_dcg.m"
                                                }
#line 468 "prog_io_dcg.m"
                                              else
#line 469 "prog_io_dcg.m"
                                                {
#line 469 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__TypeInfo_585_585 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[5];
#line 469 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__VarsSpecs_524;
#line 469 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__SubGoalSpecs_525;
#line 469 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__V_541_541;

#line 469 "prog_io_dcg.m"
                                                  {
#line 469 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__VarsSpecs_524 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_dcg__TypeInfo_585_585, parse_tree__prog_io_dcg__TypeInfo_585_585, parse_tree__prog_io_dcg__MaybeStateVarsAndVars_505);
                                                  }
#line 470 "prog_io_dcg.m"
                                                  {
#line 470 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__SubGoalSpecs_525 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[0], parse_tree__prog_io_dcg__MaybeSubGoal_506);
                                                  }
#line 471 "prog_io_dcg.m"
                                                  {
#line 471 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__V_541_541 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__VarsSpecs_524, parse_tree__prog_io_dcg__SubGoalSpecs_525);
                                                  }
#line 471 "prog_io_dcg.m"
                                                  {
#line 471 "prog_io_dcg.m"
                                                    MR_Word base;
#line 471 "prog_io_dcg.m"
                                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 471 "prog_io_dcg.m"
                                                    *parse_tree__prog_io_dcg__MaybeGoal_5 = base;
#line 471 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_541_541));
#line 471 "prog_io_dcg.m"
                                                  }
#line 469 "prog_io_dcg.m"
                                                }
#line 468 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 433 "prog_io_dcg.m"
                                            }
#line 432 "prog_io_dcg.m"
                                        }
#line 432 "prog_io_dcg.m"
                                    }
#line 433 "prog_io_dcg.m"
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
#line 198 "prog_io_dcg.m"
                                                    MR_Word parse_tree__prog_io_dcg__V_85_85;

#line 199 "prog_io_dcg.m"
                                                    {
#line 199 "prog_io_dcg.m"
                                                      parse_tree__prog_io_dcg__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 199 "prog_io_dcg.m"
                                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 199 "prog_io_dcg.m"
                                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_85_85, 1) = ((MR_Box) ((MR_Integer) 0));
#line 199 "prog_io_dcg.m"
                                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_85_85, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Goal0_72));
#line 199 "prog_io_dcg.m"
                                                    }
#line 199 "prog_io_dcg.m"
                                                    {
#line 199 "prog_io_dcg.m"
                                                      parse_tree__prog_io_dcg__Goal_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 199 "prog_io_dcg.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_73, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_85_85));
#line 199 "prog_io_dcg.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_73, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
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
                                          MR_Word parse_tree__prog_io_dcg__G_110;
#line 217 "prog_io_dcg.m"
                                          MR_Word parse_tree__prog_io_dcg__MaybeGoal0_117;
#line 217 "prog_io_dcg.m"
                                          MR_Word parse_tree__prog_io_dcg__V_127_127;

#line 216 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 216 "prog_io_dcg.m"
                                          if (parse_tree__prog_io_dcg__succeeded)
#line 216 "prog_io_dcg.m"
                                            {
#line 216 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__G_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 216 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 216 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_127_127 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 217 "prog_io_dcg.m"
                                              if (parse_tree__prog_io_dcg__succeeded)
#line 217 "prog_io_dcg.m"
                                                {
#line 218 "prog_io_dcg.m"
                                                  {
#line 218 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__G_110, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeGoal0_117, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                                                  }
#line 223 "prog_io_dcg.m"
                                                  if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal0_117)) == (MR_mktag((MR_Integer) 0))))
#line 225 "prog_io_dcg.m"
                                                    *parse_tree__prog_io_dcg__MaybeGoal_5 = parse_tree__prog_io_dcg__MaybeGoal0_117;
#line 223 "prog_io_dcg.m"
                                                  else
#line 220 "prog_io_dcg.m"
                                                    {
#line 220 "prog_io_dcg.m"
                                                      MR_Word parse_tree__prog_io_dcg__Goal0_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal0_117, (MR_Integer) 0)));
#line 220 "prog_io_dcg.m"
                                                      MR_Word parse_tree__prog_io_dcg__Goal_119;
#line 220 "prog_io_dcg.m"
                                                      MR_Word parse_tree__prog_io_dcg__V_131_131;

#line 221 "prog_io_dcg.m"
                                                      {
#line 221 "prog_io_dcg.m"
                                                        parse_tree__prog_io_dcg__V_131_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 221 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_131_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 221 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_131_131, 1) = ((MR_Box) ((MR_Integer) 2));
#line 221 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_131_131, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Goal0_118));
#line 221 "prog_io_dcg.m"
                                                      }
#line 221 "prog_io_dcg.m"
                                                      {
#line 221 "prog_io_dcg.m"
                                                        parse_tree__prog_io_dcg__Goal_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 221 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_119, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_131_131));
#line 221 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_119, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
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
                                                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_119));
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
                                            MR_Word parse_tree__prog_io_dcg__G_87;
#line 206 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__MaybeGoal0_94;
#line 206 "prog_io_dcg.m"
                                            MR_Word parse_tree__prog_io_dcg__V_104_104;

#line 205 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 205 "prog_io_dcg.m"
                                            if (parse_tree__prog_io_dcg__succeeded)
#line 205 "prog_io_dcg.m"
                                              {
#line 205 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__G_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 0)));
#line 205 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_104_104 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 206 "prog_io_dcg.m"
                                                if (parse_tree__prog_io_dcg__succeeded)
#line 206 "prog_io_dcg.m"
                                                  {
#line 207 "prog_io_dcg.m"
                                                    {
#line 207 "prog_io_dcg.m"
                                                      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__G_87, parse_tree__prog_io_dcg__HeadVar__4_4, &parse_tree__prog_io_dcg__MaybeGoal0_94, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_6, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_7, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_8, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_9, parse_tree__prog_io_dcg__HeadVar__10_10, parse_tree__prog_io_dcg__HeadVar__11_11);
                                                    }
#line 212 "prog_io_dcg.m"
                                                    if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal0_94)) == (MR_mktag((MR_Integer) 0))))
#line 214 "prog_io_dcg.m"
                                                      *parse_tree__prog_io_dcg__MaybeGoal_5 = parse_tree__prog_io_dcg__MaybeGoal0_94;
#line 212 "prog_io_dcg.m"
                                                    else
#line 209 "prog_io_dcg.m"
                                                      {
#line 209 "prog_io_dcg.m"
                                                        MR_Word parse_tree__prog_io_dcg__Goal0_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal0_94, (MR_Integer) 0)));
#line 209 "prog_io_dcg.m"
                                                        MR_Word parse_tree__prog_io_dcg__Goal_96;
#line 209 "prog_io_dcg.m"
                                                        MR_Word parse_tree__prog_io_dcg__V_108_108;

#line 210 "prog_io_dcg.m"
                                                        {
#line 210 "prog_io_dcg.m"
                                                          parse_tree__prog_io_dcg__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 210 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 210 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_108_108, 1) = ((MR_Box) ((MR_Integer) 1));
#line 210 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_108_108, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Goal0_95));
#line 210 "prog_io_dcg.m"
                                                        }
#line 210 "prog_io_dcg.m"
                                                        {
#line 210 "prog_io_dcg.m"
                                                          parse_tree__prog_io_dcg__Goal_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 210 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_96, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_108_108));
#line 210 "prog_io_dcg.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_96, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_3));
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
                                                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_96));
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
    MR_Word parse_tree__prog_io_dcg__conv0_HeadVar__2_67;

#line 131 "prog_io_dcg.m"
    {
#line 131 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal__131__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv0_HeadVar__2_67);
    }
#line 131 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv0_HeadVar__2_67));
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
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_65_65;
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
#line 5857 "parse_tree.prog_io_dcg.c"
    parse_tree__prog_io_dcg__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 125 "prog_io_dcg.m"
    {
#line 125 "prog_io_dcg.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_dcg__TypeCtorInfo_65_65, parse_tree__prog_io_dcg__Term_10, &parse_tree__prog_io_dcg__ProgTerm_20);
    }
#line 126 "prog_io_dcg.m"
    {
#line 126 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_65_65, parse_tree__prog_io_dcg__ProgTerm_20, &parse_tree__prog_io_dcg__SymName_21, &parse_tree__prog_io_dcg__Args0_22);
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
        MR_Word parse_tree__prog_io_dcg__TypeInfo_70_70;
#line 130 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_71_71;
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
            parse_tree__prog_io_dcg__V_34_34 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[2];
#line 5902 "parse_tree.prog_io_dcg.c"
            parse_tree__prog_io_dcg__TypeInfo_70_70 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[0];
#line 5904 "parse_tree.prog_io_dcg.c"
            parse_tree__prog_io_dcg__TypeInfo_71_71 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[1];
#line 131 "prog_io_dcg.m"
            {
#line 131 "prog_io_dcg.m"
              mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_70_70, parse_tree__prog_io_dcg__TypeInfo_71_71, parse_tree__prog_io_dcg__V_34_34, parse_tree__prog_io_dcg__Args0_22, &parse_tree__prog_io_dcg__Args1_24);
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
            MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_89;
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
            MR_Word parse_tree__prog_io_dcg__V_45_45;
#line 140 "prog_io_dcg.m"
            MR_Integer parse_tree__prog_io_dcg__N_82;
#line 140 "prog_io_dcg.m"
            MR_String parse_tree__prog_io_dcg__StringN_83;
#line 140 "prog_io_dcg.m"
            MR_String parse_tree__prog_io_dcg__VarName_84;
#line 140 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_87;

#line 102 "prog_io_dcg.m"
            {
#line 102 "prog_io_dcg.m"
              mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_82, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_30, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_31);
            }
#line 103 "prog_io_dcg.m"
            {
#line 103 "prog_io_dcg.m"
              mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_82, &parse_tree__prog_io_dcg__StringN_83);
            }
#line 104 "prog_io_dcg.m"
            {
#line 104 "prog_io_dcg.m"
              mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_83, &parse_tree__prog_io_dcg__VarName_84);
            }
#line 5976 "parse_tree.prog_io_dcg.c"
            parse_tree__prog_io_dcg__TypeCtorInfo_20_89 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 105 "prog_io_dcg.m"
            {
#line 105 "prog_io_dcg.m"
              mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_89, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_33, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_28, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_87);
            }
#line 106 "prog_io_dcg.m"
            {
#line 106 "prog_io_dcg.m"
              mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_89, *parse_tree__prog_io_dcg__STATE_VARIABLE_Var_33, parse_tree__prog_io_dcg__VarName_84, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_87, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_29);
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
              parse_tree__prog_io_dcg__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 143 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 143 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_45_45, 1) = ((MR_Box) (parse_tree__prog_io_dcg__SymName_21));
#line 143 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_45_45, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Args_26));
#line 143 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_45_45, 3) = ((MR_Box) ((MR_Integer) 0));
#line 143 "prog_io_dcg.m"
            }
#line 143 "prog_io_dcg.m"
            {
#line 143 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__Goal_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 143 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_27, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_45_45));
#line 143 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_27, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_18));
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
        MR_Word parse_tree__prog_io_dcg__V_50_50;
#line 151 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_53_53;
#line 151 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_54_54;
#line 151 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_55_55;
#line 151 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_56_56;
#line 151 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_57_57;
#line 151 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__ProgTerm_62;
#line 151 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Goal_63;

#line 151 "prog_io_dcg.m"
        {
#line 151 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__new_dcg_var_5_p_0(parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_28, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_29, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_30, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_31, parse_tree__prog_io_dcg__STATE_VARIABLE_Var_33);
        }
#line 152 "prog_io_dcg.m"
        {
#line 152 "prog_io_dcg.m"
          mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__Term_10, &parse_tree__prog_io_dcg__ProgTerm_62);
        }
#line 154 "prog_io_dcg.m"
        {
#line 154 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_Var_0_32));
#line 154 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_55_55, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_18));
#line 154 "prog_io_dcg.m"
        }
#line 154 "prog_io_dcg.m"
        {
#line 154 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_57_57, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_Var_33));
#line 154 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_18));
#line 154 "prog_io_dcg.m"
        }
#line 154 "prog_io_dcg.m"
        {
#line 154 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_57_57));
#line 154 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 154 "prog_io_dcg.m"
        }
#line 154 "prog_io_dcg.m"
        {
#line 154 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_55_55));
#line 154 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_56_56));
#line 154 "prog_io_dcg.m"
        }
#line 154 "prog_io_dcg.m"
        {
#line 154 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_dcg__ProgTerm_62));
#line 154 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_54_54));
#line 154 "prog_io_dcg.m"
        }
#line 153 "prog_io_dcg.m"
        {
#line 153 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 153 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 153 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_50_50, 1) = ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_4[0]));
#line 153 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_50_50, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_53_53));
#line 153 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_50_50, 3) = ((MR_Box) ((MR_Integer) 0));
#line 153 "prog_io_dcg.m"
        }
#line 155 "prog_io_dcg.m"
        {
#line 155 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__Goal_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 155 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_63, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_50_50));
#line 155 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_63, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_18));
#line 155 "prog_io_dcg.m"
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
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_63));
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
#line 6242 "parse_tree.prog_io_dcg.c"
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
#line 6323 "parse_tree.prog_io_dcg.c"
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

#line 685 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0_1(
#line 685 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 685 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 685 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 685 "prog_io_dcg.m"
{
#line 685 "prog_io_dcg.m"
  {
#line 685 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 685 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv0_HeadVar__2_33;

#line 685 "prog_io_dcg.m"
    {
#line 685 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__process_dcg_clause__685__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv0_HeadVar__2_33);
    }
#line 685 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv0_HeadVar__2_33));
#line 685 "prog_io_dcg.m"
  }
#line 685 "prog_io_dcg.m"
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
#line 6454 "parse_tree.prog_io_dcg.c"
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
#line 684 "prog_io_dcg.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__HeadResult_26)) == (MR_mktag((MR_Integer) 0))))
#line 692 "prog_io_dcg.m"
          {
#line 692 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Specs_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__HeadResult_26, (MR_Integer) 0)));

#line 693 "prog_io_dcg.m"
            {
#line 693 "prog_io_dcg.m"
              MR_Word base;
#line 693 "prog_io_dcg.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 693 "prog_io_dcg.m"
              *parse_tree__prog_io_dcg__MaybeItem_14 = base;
#line 693 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Specs_64));
#line 693 "prog_io_dcg.m"
            }
#line 692 "prog_io_dcg.m"
          }
#line 684 "prog_io_dcg.m"
        else
#line 684 "prog_io_dcg.m"
          {
#line 684 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__TypeInfo_37_78 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[0];
#line 684 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Name_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadResult_26, (MR_Integer) 0)));
#line 684 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Args0_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__HeadResult_26, (MR_Integer) 1)));
#line 684 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Args1_60;
#line 684 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Args_61;
#line 684 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__ItemClause_62;
#line 684 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Item_63;
#line 684 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_66_66;
#line 684 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_67_67;
#line 684 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_68_68;
#line 684 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_69_69;

#line 685 "prog_io_dcg.m"
            {
#line 685 "prog_io_dcg.m"
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[1], parse_tree__prog_io_dcg__TypeInfo_37_78, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_2[1], parse_tree__prog_io_dcg__Args0_59, &parse_tree__prog_io_dcg__Args1_60);
            }
#line 686 "prog_io_dcg.m"
            {
#line 686 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_dcg__DCG_0_Var_18));
#line 686 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_67_67, 1) = ((MR_Box) (parse_tree__prog_io_dcg__DCG_Context_12));
#line 686 "prog_io_dcg.m"
            }
#line 686 "prog_io_dcg.m"
            {
#line 686 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_dcg__DCG_Var_23));
#line 686 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_69_69, 1) = ((MR_Box) (parse_tree__prog_io_dcg__DCG_Context_12));
#line 686 "prog_io_dcg.m"
            }
#line 686 "prog_io_dcg.m"
            {
#line 686 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_69_69));
#line 686 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 686 "prog_io_dcg.m"
            }
#line 686 "prog_io_dcg.m"
            {
#line 686 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_67_67));
#line 686 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_66_66, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_68_68));
#line 686 "prog_io_dcg.m"
            }
#line 686 "prog_io_dcg.m"
            {
#line 686 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__Args_61 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_dcg__TypeInfo_37_78, parse_tree__prog_io_dcg__Args1_60, parse_tree__prog_io_dcg__V_66_66);
            }
#line 687 "prog_io_dcg.m"
            {
#line 687 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__ItemClause_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 687 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_62, 1) = ((MR_Box) (parse_tree__prog_io_dcg__ProgVarSet_21));
#line 687 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_62, 2) = ((MR_Box) ((MR_Integer) 0));
#line 687 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_62, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Name_58));
#line 687 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_62, 4) = ((MR_Box) (parse_tree__prog_io_dcg__Args_61));
#line 687 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_62, 5) = ((MR_Box) (parse_tree__prog_io_dcg__Body_24));
#line 687 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_62, 6) = ((MR_Box) (parse_tree__prog_io_dcg__DCG_Context_12));
#line 687 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_62, 7) = ((MR_Box) (parse_tree__prog_io_dcg__SeqNum_13));
#line 687 "prog_io_dcg.m"
            }
#line 689 "prog_io_dcg.m"
            {
#line 689 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__Item_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Item_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 689 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Item_63, 1) = ((MR_Box) (parse_tree__prog_io_dcg__ItemClause_62));
#line 689 "prog_io_dcg.m"
            }
#line 690 "prog_io_dcg.m"
            {
#line 690 "prog_io_dcg.m"
              MR_Word base;
#line 690 "prog_io_dcg.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 690 "prog_io_dcg.m"
              *parse_tree__prog_io_dcg__MaybeItem_14 = base;
#line 690 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Item_63));
#line 690 "prog_io_dcg.m"
            }
#line 684 "prog_io_dcg.m"
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
