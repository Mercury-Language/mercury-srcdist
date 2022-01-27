/*
** Automatically generated from `prog_io_dcg.m'
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


/* :- module parse_tree.prog_io_dcg. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_dcg__init
ENDINIT
*/

#include "parse_tree.prog_io_dcg.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
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
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_goal.mih"
#include "parse_tree.prog_io_iom.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 101 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 104 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 107 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 110 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 795 "prog_io_dcg.m"
static MR_bool MR_CALL 
parse_tree__prog_io_dcg__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
#line 795 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__List0_4,
#line 795 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_5,
#line 795 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__List_6);

#line 635 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__635__1_2_p_0(
#line 635 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_72,
#line 635 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_73);

#line 634 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__634__1_2_p_0(
#line 634 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_66,
#line 634 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_67);

#line 279 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__279__2_2_p_0(
#line 279 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_787,
#line 279 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_788);

#line 278 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__278__2_2_p_0(
#line 278 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_781,
#line 278 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_782);

#line 279 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__279__1_2_p_0(
#line 279 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_666,
#line 279 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_667);

#line 278 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__278__1_2_p_0(
#line 278 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_660,
#line 278 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_661);

#line 596 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__596__1_2_p_0(
#line 596 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_689,
#line 596 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_690);

#line 118 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal__118__1_2_p_0(
#line 118 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_47,
#line 118 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_48);

#line 79 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_clause__79__1_2_p_0(
#line 79 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_51,
#line 79 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_52);

#line 776 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(
#line 776 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__AddedGoal_5,
#line 776 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_6,
#line 776 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Disjunct0_7,
#line 776 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Disjunct_8);

#line 766 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__new_dcg_var_5_p_0(
#line 766 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_12,
#line 766 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_13,
#line 766 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_14,
#line 766 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_15,
#line 766 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__DCGVar_8);

#line 700 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_if_then_else_12_p_0(
#line 700 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__CondGoalTerm_13,
#line 700 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ThenGoalTerm_14,
#line 700 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ElseGoalTerm_15,
#line 700 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_16,
#line 700 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_17,
#line 700 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_18,
#line 700 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_38,
#line 700 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_39,
#line 700 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_40,
#line 700 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_41,
#line 700 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Var0_21,
#line 700 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Var_22);

#line 666 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_if_then_12_p_0(
#line 666 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__CondGoalTerm_13,
#line 666 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ThenGoalTerm_14,
#line 666 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_15,
#line 666 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_16,
#line 666 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeVarsCond_17,
#line 666 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeThen_18,
#line 666 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
#line 666 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
#line 666 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
#line 666 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
#line 666 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Var0_21,
#line 666 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Var_22);

#line 635 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_2(
#line 635 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 635 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 635 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 634 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_1(
#line 634 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 634 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 634 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 603 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0(
#line 603 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_10,
#line 603 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_11,
#line 603 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeVarsGoal_12,
#line 603 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_31,
#line 603 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_32,
#line 603 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_33,
#line 603 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_34,
#line 603 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_35,
#line 603 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_36);

#line 279 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_5(
#line 279 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 279 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 279 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 278 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_4(
#line 278 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 278 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 278 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 279 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_3(
#line 279 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 279 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 279 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 278 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_2(
#line 278 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 278 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 278 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 596 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_1(
#line 596 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 596 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 596 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 164 "prog_io_dcg.m"
static MR_bool MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0(
#line 164 "prog_io_dcg.m"
  MR_String parse_tree__prog_io_dcg__Functor_12,
#line 164 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Args_13,
#line 164 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_14,
#line 164 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_15,
#line 164 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_16,
#line 164 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93,
#line 164 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94,
#line 164 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95,
#line 164 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96,
#line 164 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97,
#line 164 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);

#line 142 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__make_dcg_call_10_p_0(
#line 142 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__SymName_11,
#line 142 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Args0_12,
#line 142 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_13,
#line 142 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Goal_14,
#line 142 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_21,
#line 142 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_22,
#line 142 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_23,
#line 142 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_24,
#line 142 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_25,
#line 142 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_26);

#line 118 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0_1(
#line 118 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 118 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 118 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 105 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(
#line 105 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_10,
#line 105 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_11,
#line 105 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_12,
#line 105 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_25,
#line 105 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_26,
#line 105 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_27,
#line 105 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_28,
#line 105 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_29,
#line 105 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_30);

#line 79 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0_1(
#line 79 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 79 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 79 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_1[69][2];

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_2[3][5];

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_3[9][3];

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_4[8][1];




static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_1[69][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_1[2]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_1[3]))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and must therefore be used with arity 0."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "against a list of zero items,"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may only be used to match the input"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "operator"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "[]"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: in DCG clauses,"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "at the end of the list."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[6])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: there is no"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and must therefore be used with arity 2."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[6])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "against a list of one or more items,"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "[|]"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[33])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "all"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In first argument of"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[41])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[6])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "( if goal then goal else goal )"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should occur in expressions of the form"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[46])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "else"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[49])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the "))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "some"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[37])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[55])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[56])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "between the curly braces."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[6])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: there should be at least one goal"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In DCG clause head:"))
  },
  /* row 63 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_4[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 64 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_4[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 65 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_4[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 66 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_4[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 67 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_4[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 68 */
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

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_3[9][3] = {
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
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[0])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_4[8][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "call"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ":="))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[20])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "[|]"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[25])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[35])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[53])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[61])))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 949 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 957 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 965 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 973 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 795 "prog_io_dcg.m"
static MR_bool MR_CALL 
parse_tree__prog_io_dcg__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
#line 795 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__List0_4,
#line 795 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_5,
#line 795 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__List_6)
#line 795 "prog_io_dcg.m"
{
#line 799 "prog_io_dcg.m"
  {
#line 799 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__List0_4)) == (MR_mktag((MR_Integer) 0)));
#line 799 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_12_12;
#line 799 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__V_13_13;
#line 799 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_14_14;
#line 799 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg___Context_7;

#line 799 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 799 "prog_io_dcg.m"
      {
#line 799 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 0)));
#line 799 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 1)));
#line 799 "prog_io_dcg.m"
        parse_tree__prog_io_dcg___Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 2)));
#line 799 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 799 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 799 "prog_io_dcg.m"
          {
#line 799 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_12_12)) == (MR_mktag((MR_Integer) 0)));
#line 799 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 799 "prog_io_dcg.m"
              {
#line 799 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_12_12, (MR_Integer) 0)));
#line 799 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_13_13, (MR_String) "[]") == 0);
#line 799 "prog_io_dcg.m"
              }
#line 799 "prog_io_dcg.m"
          }
#line 799 "prog_io_dcg.m"
      }
#line 799 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 800 "prog_io_dcg.m"
      {
#line 800 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__List_6 = parse_tree__prog_io_dcg__Term_5;
#line 800 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 800 "prog_io_dcg.m"
      }
#line 799 "prog_io_dcg.m"
    else
#line 802 "prog_io_dcg.m"
      {
#line 802 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Head_8;
#line 802 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Tail0_9;
#line 802 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Context_10;
#line 802 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Tail_11;
#line 802 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_15_15;
#line 802 "prog_io_dcg.m"
        MR_String parse_tree__prog_io_dcg__V_16_16;
#line 802 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_17_17;
#line 802 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_18_18;
#line 802 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_19_19;
#line 802 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_22_22;
#line 802 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_23_23;
#line 802 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_24_24;

#line 802 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__List0_4)) == (MR_mktag((MR_Integer) 0)));
#line 802 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 802 "prog_io_dcg.m"
          {
#line 802 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 0)));
#line 802 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 1)));
#line 802 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 2)));
#line 802 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_15_15)) == (MR_mktag((MR_Integer) 0)));
#line 802 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 802 "prog_io_dcg.m"
              {
#line 802 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_15_15, (MR_Integer) 0)));
#line 802 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_16_16, (MR_String) "[|]") == 0);
#line 802 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 802 "prog_io_dcg.m"
                  {
#line 802 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 802 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 802 "prog_io_dcg.m"
                      {
#line 802 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Head_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_17_17, (MR_Integer) 0)));
#line 802 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_17_17, (MR_Integer) 1)));
#line 802 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 802 "prog_io_dcg.m"
                        if (parse_tree__prog_io_dcg__succeeded)
#line 802 "prog_io_dcg.m"
                          {
#line 802 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__Tail0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_18_18, (MR_Integer) 0)));
#line 802 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_18_18, (MR_Integer) 1)));
#line 802 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 802 "prog_io_dcg.m"
                            if (parse_tree__prog_io_dcg__succeeded)
#line 802 "prog_io_dcg.m"
                              {
#line 803 "prog_io_dcg.m"
                                {
#line 803 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__succeeded = parse_tree__prog_io_dcg__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_dcg__Tail0_9, parse_tree__prog_io_dcg__Term_5, &parse_tree__prog_io_dcg__Tail_11);
                                }
#line 802 "prog_io_dcg.m"
                                if (parse_tree__prog_io_dcg__succeeded)
#line 802 "prog_io_dcg.m"
                                  {
#line 804 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 804 "prog_io_dcg.m"
                                    {
#line 804 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 804 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_23_23, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Tail_11));
#line 804 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_24_24));
#line 804 "prog_io_dcg.m"
                                    }
#line 804 "prog_io_dcg.m"
                                    {
#line 804 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 804 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_22_22, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Head_8));
#line 804 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_22_22, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_23_23));
#line 804 "prog_io_dcg.m"
                                    }
#line 804 "prog_io_dcg.m"
                                    {
#line 804 "prog_io_dcg.m"
                                      MR_Word base;
#line 804 "prog_io_dcg.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 804 "prog_io_dcg.m"
                                      *parse_tree__prog_io_dcg__List_6 = base;
#line 804 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_15_15));
#line 804 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_22_22));
#line 804 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Context_10));
#line 804 "prog_io_dcg.m"
                                    }
#line 804 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 802 "prog_io_dcg.m"
                                  }
#line 802 "prog_io_dcg.m"
                              }
#line 802 "prog_io_dcg.m"
                          }
#line 802 "prog_io_dcg.m"
                      }
#line 802 "prog_io_dcg.m"
                  }
#line 802 "prog_io_dcg.m"
              }
#line 802 "prog_io_dcg.m"
          }
#line 802 "prog_io_dcg.m"
      }
#line 799 "prog_io_dcg.m"
    return parse_tree__prog_io_dcg__succeeded;
#line 799 "prog_io_dcg.m"
  }
#line 795 "prog_io_dcg.m"
}

#line 635 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__635__1_2_p_0(
#line 635 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_72,
#line 635 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_73)
#line 635 "prog_io_dcg.m"
{
#line 635 "prog_io_dcg.m"
  {
#line 635 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 635 "prog_io_dcg.m"
    {
#line 635 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_72, parse_tree__prog_io_dcg__HeadVar__2_73);
    }
#line 635 "prog_io_dcg.m"
  }
#line 635 "prog_io_dcg.m"
}

#line 634 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__634__1_2_p_0(
#line 634 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_66,
#line 634 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_67)
#line 634 "prog_io_dcg.m"
{
#line 634 "prog_io_dcg.m"
  {
#line 634 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 634 "prog_io_dcg.m"
    {
#line 634 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_66, parse_tree__prog_io_dcg__HeadVar__2_67);
    }
#line 634 "prog_io_dcg.m"
  }
#line 634 "prog_io_dcg.m"
}

#line 279 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__279__2_2_p_0(
#line 279 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_787,
#line 279 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_788)
#line 279 "prog_io_dcg.m"
{
#line 279 "prog_io_dcg.m"
  {
#line 279 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 279 "prog_io_dcg.m"
    {
#line 279 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_787, parse_tree__prog_io_dcg__HeadVar__2_788);
    }
#line 279 "prog_io_dcg.m"
  }
#line 279 "prog_io_dcg.m"
}

#line 278 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__278__2_2_p_0(
#line 278 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_781,
#line 278 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_782)
#line 278 "prog_io_dcg.m"
{
#line 278 "prog_io_dcg.m"
  {
#line 278 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 278 "prog_io_dcg.m"
    {
#line 278 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_781, parse_tree__prog_io_dcg__HeadVar__2_782);
    }
#line 278 "prog_io_dcg.m"
  }
#line 278 "prog_io_dcg.m"
}

#line 279 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__279__1_2_p_0(
#line 279 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_666,
#line 279 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_667)
#line 279 "prog_io_dcg.m"
{
#line 279 "prog_io_dcg.m"
  {
#line 279 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 279 "prog_io_dcg.m"
    {
#line 279 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_666, parse_tree__prog_io_dcg__HeadVar__2_667);
    }
#line 279 "prog_io_dcg.m"
  }
#line 279 "prog_io_dcg.m"
}

#line 278 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__278__1_2_p_0(
#line 278 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_660,
#line 278 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_661)
#line 278 "prog_io_dcg.m"
{
#line 278 "prog_io_dcg.m"
  {
#line 278 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 278 "prog_io_dcg.m"
    {
#line 278 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_660, parse_tree__prog_io_dcg__HeadVar__2_661);
    }
#line 278 "prog_io_dcg.m"
  }
#line 278 "prog_io_dcg.m"
}

#line 596 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__596__1_2_p_0(
#line 596 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_689,
#line 596 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_690)
#line 596 "prog_io_dcg.m"
{
#line 596 "prog_io_dcg.m"
  {
#line 596 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 596 "prog_io_dcg.m"
    {
#line 596 "prog_io_dcg.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_689, parse_tree__prog_io_dcg__HeadVar__2_690);
    }
#line 596 "prog_io_dcg.m"
  }
#line 596 "prog_io_dcg.m"
}

#line 118 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal__118__1_2_p_0(
#line 118 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_47,
#line 118 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_48)
#line 118 "prog_io_dcg.m"
{
#line 118 "prog_io_dcg.m"
  {
#line 118 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 118 "prog_io_dcg.m"
    {
#line 118 "prog_io_dcg.m"
      mercury__term__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_dcg__HeadVar__1_47, parse_tree__prog_io_dcg__HeadVar__2_48);
    }
#line 118 "prog_io_dcg.m"
  }
#line 118 "prog_io_dcg.m"
}

#line 79 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_clause__79__1_2_p_0(
#line 79 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_51,
#line 79 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_52)
#line 79 "prog_io_dcg.m"
{
#line 79 "prog_io_dcg.m"
  {
#line 79 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 79 "prog_io_dcg.m"
    {
#line 79 "prog_io_dcg.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_51, parse_tree__prog_io_dcg__HeadVar__2_52);
    }
#line 79 "prog_io_dcg.m"
  }
#line 79 "prog_io_dcg.m"
}

#line 776 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(
#line 776 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__AddedGoal_5,
#line 776 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_6,
#line 776 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Disjunct0_7,
#line 776 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Disjunct_8)
#line 776 "prog_io_dcg.m"
{
#line 780 "prog_io_dcg.m"
  {
#line 780 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_dcg__Disjunct0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Disjunct0_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 780 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Disjunct0Context_9;
#line 780 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__SubDisjunctA0_10;
#line 780 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__SubDisjunctB0_11;

#line 781 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 781 "prog_io_dcg.m"
      {
#line 781 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__Disjunct0Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Disjunct0_7, (MR_Integer) 1)));
#line 781 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__SubDisjunctA0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Disjunct0_7, (MR_Integer) 2)));
#line 781 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__SubDisjunctB0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Disjunct0_7, (MR_Integer) 3)));
#line 783 "prog_io_dcg.m"
        {
#line 783 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__SubDisjunctA_12;
#line 783 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__SubDisjunctB_13;

#line 783 "prog_io_dcg.m"
          {
#line 783 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(parse_tree__prog_io_dcg__AddedGoal_5, parse_tree__prog_io_dcg__Context_6, parse_tree__prog_io_dcg__SubDisjunctA0_10, &parse_tree__prog_io_dcg__SubDisjunctA_12);
          }
#line 784 "prog_io_dcg.m"
          {
#line 784 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(parse_tree__prog_io_dcg__AddedGoal_5, parse_tree__prog_io_dcg__Context_6, parse_tree__prog_io_dcg__SubDisjunctB0_11, &parse_tree__prog_io_dcg__SubDisjunctB_13);
          }
#line 785 "prog_io_dcg.m"
          {
#line 785 "prog_io_dcg.m"
            MR_Word base;
#line 785 "prog_io_dcg.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 785 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__Disjunct_8 = base;
#line 785 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 785 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Disjunct0Context_9));
#line 785 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubDisjunctA_12));
#line 785 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubDisjunctB_13));
#line 785 "prog_io_dcg.m"
          }
#line 783 "prog_io_dcg.m"
        }
#line 781 "prog_io_dcg.m"
      }
#line 781 "prog_io_dcg.m"
    else
#line 787 "prog_io_dcg.m"
      {
#line 787 "prog_io_dcg.m"
        MR_Word base;
#line 787 "prog_io_dcg.m"
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 787 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__Disjunct_8 = base;
#line 787 "prog_io_dcg.m"
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_6));
#line 787 "prog_io_dcg.m"
        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Disjunct0_7));
#line 787 "prog_io_dcg.m"
        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (parse_tree__prog_io_dcg__AddedGoal_5));
#line 787 "prog_io_dcg.m"
      }
#line 780 "prog_io_dcg.m"
  }
#line 776 "prog_io_dcg.m"
}

#line 766 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__new_dcg_var_5_p_0(
#line 766 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_12,
#line 766 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_13,
#line 766 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_14,
#line 766 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_15,
#line 766 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__DCGVar_8)
#line 766 "prog_io_dcg.m"
{
#line 769 "prog_io_dcg.m"
  {
#line 769 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 769 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_20;
#line 769 "prog_io_dcg.m"
    MR_Integer parse_tree__prog_io_dcg__N_9;
#line 769 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__StringN_10;
#line 769 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__VarName_11;
#line 769 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18;

#line 770 "prog_io_dcg.m"
    {
#line 770 "prog_io_dcg.m"
      mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_9, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_14, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_15);
    }
#line 771 "prog_io_dcg.m"
    {
#line 771 "prog_io_dcg.m"
      mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_9, &parse_tree__prog_io_dcg__StringN_10);
    }
#line 772 "prog_io_dcg.m"
    {
#line 772 "prog_io_dcg.m"
      mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_10, &parse_tree__prog_io_dcg__VarName_11);
    }
#line 1557 "parse_tree.prog_io_dcg.c"
    parse_tree__prog_io_dcg__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 773 "prog_io_dcg.m"
    {
#line 773 "prog_io_dcg.m"
      mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_20, parse_tree__prog_io_dcg__DCGVar_8, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_12, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18);
    }
#line 774 "prog_io_dcg.m"
    {
#line 774 "prog_io_dcg.m"
      mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_20, *parse_tree__prog_io_dcg__DCGVar_8, parse_tree__prog_io_dcg__VarName_11, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_13);
    }
#line 769 "prog_io_dcg.m"
  }
#line 766 "prog_io_dcg.m"
}

#line 700 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_if_then_else_12_p_0(
#line 700 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__CondGoalTerm_13,
#line 700 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ThenGoalTerm_14,
#line 700 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ElseGoalTerm_15,
#line 700 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_16,
#line 700 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_17,
#line 700 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_18,
#line 700 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_38,
#line 700 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_39,
#line 700 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_40,
#line 700 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_41,
#line 700 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Var0_21,
#line 700 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Var_22)
#line 700 "prog_io_dcg.m"
{
#line 706 "prog_io_dcg.m"
  {
#line 706 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 706 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeVarsCond_23;
#line 706 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeThen1_24;
#line 706 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__VarThen_25;
#line 706 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeElse1_26;
#line 706 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__VarElse_27;
#line 706 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_42_42;
#line 706 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_43_43;
#line 711 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Vars_28;
#line 711 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__StateVars_29;
#line 711 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Cond_30;
#line 711 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Then1_31;
#line 711 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Else1_32;

#line 707 "prog_io_dcg.m"
    {
#line 707 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_if_then_12_p_0(parse_tree__prog_io_dcg__CondGoalTerm_13, parse_tree__prog_io_dcg__ThenGoalTerm_14, parse_tree__prog_io_dcg__Context_16, parse_tree__prog_io_dcg__ContextPieces_17, &parse_tree__prog_io_dcg__MaybeVarsCond_23, &parse_tree__prog_io_dcg__MaybeThen1_24, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_38, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_42_42, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_40, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_43_43, parse_tree__prog_io_dcg__Var0_21, &parse_tree__prog_io_dcg__VarThen_25);
    }
#line 709 "prog_io_dcg.m"
    {
#line 709 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ElseGoalTerm_15, parse_tree__prog_io_dcg__ContextPieces_17, &parse_tree__prog_io_dcg__MaybeElse1_26, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_42_42, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_39, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_43_43, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_41, parse_tree__prog_io_dcg__Var0_21, &parse_tree__prog_io_dcg__VarElse_27);
    }
#line 712 "prog_io_dcg.m"
    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeVarsCond_23)) == (MR_mktag((MR_Integer) 1)));
#line 712 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 712 "prog_io_dcg.m"
      {
#line 712 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__Vars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_23, (MR_Integer) 0)));
#line 712 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__StateVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_23, (MR_Integer) 1)));
#line 712 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__Cond_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_23, (MR_Integer) 2)));
#line 713 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeThen1_24)) == (MR_mktag((MR_Integer) 1)));
#line 713 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 713 "prog_io_dcg.m"
          {
#line 713 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Then1_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeThen1_24, (MR_Integer) 0)));
#line 714 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeElse1_26)) == (MR_mktag((MR_Integer) 1)));
#line 714 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 714 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__Else1_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeElse1_26, (MR_Integer) 0)));
#line 713 "prog_io_dcg.m"
          }
#line 712 "prog_io_dcg.m"
      }
#line 711 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 747 "prog_io_dcg.m"
      {
#line 747 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Then_33;
#line 747 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Else_34;
#line 747 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Goal_36;
#line 716 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_62_62;

#line 716 "prog_io_dcg.m"
        {
#line 716 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3], ((MR_Box) (parse_tree__prog_io_dcg__VarThen_25)), ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)));
        }
#line 716 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 716 "prog_io_dcg.m"
          {
#line 1694 "parse_tree.prog_io_dcg.c"
            parse_tree__prog_io_dcg__TypeInfo_62_62 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3];
#line 716 "prog_io_dcg.m"
            {
#line 716 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_dcg__TypeInfo_62_62, ((MR_Box) (parse_tree__prog_io_dcg__VarElse_27)), ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)));
            }
#line 716 "prog_io_dcg.m"
          }
#line 716 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 717 "prog_io_dcg.m"
          {
#line 717 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__Var0_21;
#line 718 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Then_33 = parse_tree__prog_io_dcg__Then1_31;
#line 719 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Else_34 = parse_tree__prog_io_dcg__Else1_32;
#line 717 "prog_io_dcg.m"
          }
#line 716 "prog_io_dcg.m"
        else
#line 720 "prog_io_dcg.m"
          {
#line 720 "prog_io_dcg.m"
            {
#line 720 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3], ((MR_Box) (parse_tree__prog_io_dcg__VarThen_25)), ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)));
            }
#line 720 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 721 "prog_io_dcg.m"
              {
#line 721 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__Unify_35;
#line 721 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_46_46;
#line 721 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_47_47;

#line 721 "prog_io_dcg.m"
                *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__VarElse_27;
#line 723 "prog_io_dcg.m"
                {
#line 723 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_46_46, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__Var_22));
#line 723 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_46_46, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 723 "prog_io_dcg.m"
                }
#line 723 "prog_io_dcg.m"
                {
#line 723 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_dcg__VarThen_25));
#line 723 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 723 "prog_io_dcg.m"
                }
#line 722 "prog_io_dcg.m"
                {
#line 722 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__Unify_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 722 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_35, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 722 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_35, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_46_46));
#line 722 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_35, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_47_47));
#line 722 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_35, 3) = ((MR_Box) ((MR_Integer) 0));
#line 722 "prog_io_dcg.m"
                }
#line 725 "prog_io_dcg.m"
                {
#line 725 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__Then_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 725 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Then_33, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 725 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Then_33, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Then1_31));
#line 725 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Then_33, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Unify_35));
#line 725 "prog_io_dcg.m"
                }
#line 726 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__Else_34 = parse_tree__prog_io_dcg__Else1_32;
#line 721 "prog_io_dcg.m"
              }
#line 720 "prog_io_dcg.m"
            else
#line 727 "prog_io_dcg.m"
              {
#line 727 "prog_io_dcg.m"
                {
#line 727 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3], ((MR_Box) (parse_tree__prog_io_dcg__VarElse_27)), ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)));
                }
#line 727 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 728 "prog_io_dcg.m"
                  {
#line 728 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__V_49_49;
#line 728 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__V_50_50;
#line 728 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__Unify_56;

#line 728 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__VarThen_25;
#line 729 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Then_33 = parse_tree__prog_io_dcg__Then1_31;
#line 731 "prog_io_dcg.m"
                    {
#line 731 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_49_49, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__Var_22));
#line 731 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_49_49, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 731 "prog_io_dcg.m"
                    }
#line 731 "prog_io_dcg.m"
                    {
#line 731 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_dcg__VarElse_27));
#line 731 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_50_50, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 731 "prog_io_dcg.m"
                    }
#line 730 "prog_io_dcg.m"
                    {
#line 730 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__Unify_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 730 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_56, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 730 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_56, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_49_49));
#line 730 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_56, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_50_50));
#line 730 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_56, 3) = ((MR_Box) ((MR_Integer) 0));
#line 730 "prog_io_dcg.m"
                    }
#line 733 "prog_io_dcg.m"
                    {
#line 733 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__Else_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 733 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Else_34, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 733 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Else_34, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Else1_32));
#line 733 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Else_34, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Unify_56));
#line 733 "prog_io_dcg.m"
                    }
#line 728 "prog_io_dcg.m"
                  }
#line 727 "prog_io_dcg.m"
                else
#line 744 "prog_io_dcg.m"
                  {
#line 744 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__VarElse_27;
#line 745 "prog_io_dcg.m"
                    {
#line 745 "prog_io_dcg.m"
                      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_io_dcg__VarThen_25, parse_tree__prog_io_dcg__VarElse_27, parse_tree__prog_io_dcg__Then1_31, &parse_tree__prog_io_dcg__Then_33);
                    }
#line 746 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Else_34 = parse_tree__prog_io_dcg__Else1_32;
#line 744 "prog_io_dcg.m"
                  }
#line 727 "prog_io_dcg.m"
              }
#line 720 "prog_io_dcg.m"
          }
#line 748 "prog_io_dcg.m"
        {
#line 748 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__Goal_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 748 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 748 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 748 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_28));
#line 748 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 3) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_29));
#line 748 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 4) = ((MR_Box) (parse_tree__prog_io_dcg__Cond_30));
#line 748 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 5) = ((MR_Box) (parse_tree__prog_io_dcg__Then_33));
#line 748 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 6) = ((MR_Box) (parse_tree__prog_io_dcg__Else_34));
#line 748 "prog_io_dcg.m"
        }
#line 749 "prog_io_dcg.m"
        {
#line 749 "prog_io_dcg.m"
          MR_Word base;
#line 749 "prog_io_dcg.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 749 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeGoal_18 = base;
#line 749 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_36));
#line 749 "prog_io_dcg.m"
        }
#line 747 "prog_io_dcg.m"
      }
#line 711 "prog_io_dcg.m"
    else
#line 753 "prog_io_dcg.m"
      {
#line 753 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_58_58 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 753 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_59_59 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[5];
#line 753 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_60_60 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
#line 753 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Specs_37;
#line 753 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_52_52;
#line 753 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_53_53;
#line 753 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_54_54;
#line 753 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_55_55;

#line 751 "prog_io_dcg.m"
        {
#line 751 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_52_52 = parse_tree__maybe_error__get_any_errors3_1_f_0(parse_tree__prog_io_dcg__TypeInfo_59_59, parse_tree__prog_io_dcg__TypeInfo_59_59, parse_tree__prog_io_dcg__TypeCtorInfo_60_60, parse_tree__prog_io_dcg__MaybeVarsCond_23);
        }
#line 752 "prog_io_dcg.m"
        {
#line 752 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_54_54 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_60_60, parse_tree__prog_io_dcg__MaybeThen1_24);
        }
#line 753 "prog_io_dcg.m"
        {
#line 753 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_55_55 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_60_60, parse_tree__prog_io_dcg__MaybeElse1_26);
        }
#line 752 "prog_io_dcg.m"
        {
#line 752 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_53_53 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_58_58, parse_tree__prog_io_dcg__V_54_54, parse_tree__prog_io_dcg__V_55_55);
        }
#line 751 "prog_io_dcg.m"
        {
#line 751 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__Specs_37 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_58_58, parse_tree__prog_io_dcg__V_52_52, parse_tree__prog_io_dcg__V_53_53);
        }
#line 754 "prog_io_dcg.m"
        {
#line 754 "prog_io_dcg.m"
          MR_Word base;
#line 754 "prog_io_dcg.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 754 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeGoal_18 = base;
#line 754 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Specs_37));
#line 754 "prog_io_dcg.m"
        }
#line 755 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__Var0_21;
#line 753 "prog_io_dcg.m"
      }
#line 706 "prog_io_dcg.m"
  }
#line 700 "prog_io_dcg.m"
}

#line 666 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_if_then_12_p_0(
#line 666 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__CondGoalTerm_13,
#line 666 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ThenGoalTerm_14,
#line 666 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_15,
#line 666 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_16,
#line 666 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeVarsCond_17,
#line 666 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeThen_18,
#line 666 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
#line 666 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
#line 666 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
#line 666 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
#line 666 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Var0_21,
#line 666 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Var_22)
#line 666 "prog_io_dcg.m"
{
#line 673 "prog_io_dcg.m"
  {
#line 673 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 673 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Var1_23;
#line 673 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeThen1_24;
#line 673 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Var2_25;
#line 673 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_34_34;
#line 673 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_35_35;
#line 673 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36;
#line 673 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37;
#line 679 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeInfo_44_44;

#line 674 "prog_io_dcg.m"
    {
#line 674 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0(parse_tree__prog_io_dcg__CondGoalTerm_13, parse_tree__prog_io_dcg__ContextPieces_16, parse_tree__prog_io_dcg__MaybeVarsCond_17, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_34_34, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_35_35, parse_tree__prog_io_dcg__Var0_21, &parse_tree__prog_io_dcg__Var1_23);
    }
#line 676 "prog_io_dcg.m"
    {
#line 676 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ThenGoalTerm_14, parse_tree__prog_io_dcg__ContextPieces_16, &parse_tree__prog_io_dcg__MaybeThen1_24, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_34_34, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_35_35, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37, parse_tree__prog_io_dcg__Var1_23, &parse_tree__prog_io_dcg__Var2_25);
    }
#line 679 "prog_io_dcg.m"
    {
#line 679 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3], ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)), ((MR_Box) (parse_tree__prog_io_dcg__Var1_23)));
    }
#line 679 "prog_io_dcg.m"
    parse_tree__prog_io_dcg__succeeded = !(parse_tree__prog_io_dcg__succeeded);
#line 679 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 679 "prog_io_dcg.m"
      {
#line 2050 "parse_tree.prog_io_dcg.c"
        parse_tree__prog_io_dcg__TypeInfo_44_44 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3];
#line 680 "prog_io_dcg.m"
        {
#line 680 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_dcg__TypeInfo_44_44, ((MR_Box) (parse_tree__prog_io_dcg__Var1_23)), ((MR_Box) (parse_tree__prog_io_dcg__Var2_25)));
        }
#line 679 "prog_io_dcg.m"
      }
#line 678 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 690 "prog_io_dcg.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeThen1_24)) == (MR_mktag((MR_Integer) 0))))
#line 691 "prog_io_dcg.m"
        {
#line 692 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeThen_18 = parse_tree__prog_io_dcg__MaybeThen1_24;
#line 693 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__Var2_25;
#line 691 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36;
#line 691 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37;
#line 691 "prog_io_dcg.m"
        }
#line 690 "prog_io_dcg.m"
      else
#line 683 "prog_io_dcg.m"
        {
#line 683 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_59;
#line 683 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__Then1_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeThen1_24, (MR_Integer) 0)));
#line 683 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__Unify_27;
#line 683 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__Then_28;
#line 683 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__V_40_40;
#line 683 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__V_41_41;
#line 683 "prog_io_dcg.m"
          MR_Integer parse_tree__prog_io_dcg__N_52;
#line 683 "prog_io_dcg.m"
          MR_String parse_tree__prog_io_dcg__StringN_53;
#line 683 "prog_io_dcg.m"
          MR_String parse_tree__prog_io_dcg__VarName_54;
#line 683 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_57;

#line 770 "prog_io_dcg.m"
          {
#line 770 "prog_io_dcg.m"
            mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_52, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33);
          }
#line 771 "prog_io_dcg.m"
          {
#line 771 "prog_io_dcg.m"
            mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_52, &parse_tree__prog_io_dcg__StringN_53);
          }
#line 772 "prog_io_dcg.m"
          {
#line 772 "prog_io_dcg.m"
            mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_53, &parse_tree__prog_io_dcg__VarName_54);
          }
#line 2115 "parse_tree.prog_io_dcg.c"
          parse_tree__prog_io_dcg__TypeCtorInfo_20_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 773 "prog_io_dcg.m"
          {
#line 773 "prog_io_dcg.m"
            mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_59, parse_tree__prog_io_dcg__Var_22, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_57);
          }
#line 774 "prog_io_dcg.m"
          {
#line 774 "prog_io_dcg.m"
            mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_59, *parse_tree__prog_io_dcg__Var_22, parse_tree__prog_io_dcg__VarName_54, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_57, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31);
          }
#line 686 "prog_io_dcg.m"
          {
#line 686 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__Var_22));
#line 686 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_15));
#line 686 "prog_io_dcg.m"
          }
#line 686 "prog_io_dcg.m"
          {
#line 686 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Var2_25));
#line 686 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_41_41, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_15));
#line 686 "prog_io_dcg.m"
          }
#line 685 "prog_io_dcg.m"
          {
#line 685 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Unify_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 685 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_27, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_15));
#line 685 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_27, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_40_40));
#line 685 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_27, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_41_41));
#line 685 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_27, 3) = ((MR_Box) ((MR_Integer) 0));
#line 685 "prog_io_dcg.m"
          }
#line 688 "prog_io_dcg.m"
          {
#line 688 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Then_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 688 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Then_28, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_15));
#line 688 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Then_28, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Then1_26));
#line 688 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Then_28, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Unify_27));
#line 688 "prog_io_dcg.m"
          }
#line 689 "prog_io_dcg.m"
          {
#line 689 "prog_io_dcg.m"
            MR_Word base;
#line 689 "prog_io_dcg.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 689 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__MaybeThen_18 = base;
#line 689 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Then_28));
#line 689 "prog_io_dcg.m"
          }
#line 683 "prog_io_dcg.m"
        }
#line 678 "prog_io_dcg.m"
    else
#line 696 "prog_io_dcg.m"
      {
#line 696 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__MaybeThen_18 = parse_tree__prog_io_dcg__MaybeThen1_24;
#line 697 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__Var2_25;
#line 696 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37;
#line 696 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36;
#line 696 "prog_io_dcg.m"
      }
#line 673 "prog_io_dcg.m"
  }
#line 666 "prog_io_dcg.m"
}

#line 635 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_2(
#line 635 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 635 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 635 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 635 "prog_io_dcg.m"
{
#line 635 "prog_io_dcg.m"
  {
#line 635 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 635 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv1_HeadVar__2_73;

#line 635 "prog_io_dcg.m"
    {
#line 635 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__635__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv1_HeadVar__2_73);
    }
#line 635 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv1_HeadVar__2_73));
#line 635 "prog_io_dcg.m"
  }
#line 635 "prog_io_dcg.m"
}

#line 634 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_1(
#line 634 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 634 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 634 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 634 "prog_io_dcg.m"
{
#line 634 "prog_io_dcg.m"
  {
#line 634 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 634 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv0_HeadVar__2_67;

#line 634 "prog_io_dcg.m"
    {
#line 634 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__634__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv0_HeadVar__2_67);
    }
#line 634 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv0_HeadVar__2_67));
#line 634 "prog_io_dcg.m"
  }
#line 634 "prog_io_dcg.m"
}

#line 603 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0(
#line 603 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_10,
#line 603 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_11,
#line 603 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeVarsGoal_12,
#line 603 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_31,
#line 603 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_32,
#line 603 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_33,
#line 603 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_34,
#line 603 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_35,
#line 603 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_36)
#line 603 "prog_io_dcg.m"
{
#line 609 "prog_io_dcg.m"
  {
#line 609 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Term_10)) == (MR_mktag((MR_Integer) 0)));
#line 609 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeVars_22;
#line 609 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__GoalTerm_23;
#line 609 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeGoal_24;
#line 613 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__VarsTerm_16;
#line 613 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__SubGoalTerm_17;
#line 614 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_37_37;
#line 614 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__V_38_38;
#line 614 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_39_39;
#line 614 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_40_40;
#line 614 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_41_41;
#line 614 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg___Context_18;
#line 630 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Vars0_25;
#line 630 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__StateVars0_26;
#line 630 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Goal_27;

#line 614 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 614 "prog_io_dcg.m"
      {
#line 614 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 0)));
#line 614 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 1)));
#line 614 "prog_io_dcg.m"
        parse_tree__prog_io_dcg___Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 2)));
#line 614 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_37_37)) == (MR_mktag((MR_Integer) 0)));
#line 614 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 614 "prog_io_dcg.m"
          {
#line 614 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_37_37, (MR_Integer) 0)));
#line 614 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_38_38, (MR_String) "some") == 0);
#line 614 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 614 "prog_io_dcg.m"
              {
#line 614 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 614 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 614 "prog_io_dcg.m"
                  {
#line 614 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__VarsTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_39_39, (MR_Integer) 0)));
#line 614 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_39_39, (MR_Integer) 1)));
#line 614 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 614 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 614 "prog_io_dcg.m"
                      {
#line 614 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__SubGoalTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, (MR_Integer) 0)));
#line 614 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, (MR_Integer) 1)));
#line 614 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "prog_io_dcg.m"
                      }
#line 614 "prog_io_dcg.m"
                  }
#line 614 "prog_io_dcg.m"
              }
#line 614 "prog_io_dcg.m"
          }
#line 614 "prog_io_dcg.m"
      }
#line 613 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 617 "prog_io_dcg.m"
      {
#line 617 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_64_64 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 617 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_65_65;
#line 617 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__GenericVarSet_19;
#line 617 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__VarsContextPieces_21;
#line 617 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_53_53;

#line 617 "prog_io_dcg.m"
        {
#line 617 "prog_io_dcg.m"
          mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__TypeCtorInfo_64_64, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_31, &parse_tree__prog_io_dcg__GenericVarSet_19);
        }
#line 2398 "parse_tree.prog_io_dcg.c"
        parse_tree__prog_io_dcg__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 620 "prog_io_dcg.m"
        {
#line 620 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_53_53 = mercury__cord__from_list_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_65_65, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[57]));
        }
#line 620 "prog_io_dcg.m"
        {
#line 620 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__VarsContextPieces_21 = mercury__cord__f_43_43_2_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_65_65, parse_tree__prog_io_dcg__ContextPieces_11, parse_tree__prog_io_dcg__V_53_53);
        }
#line 621 "prog_io_dcg.m"
        {
#line 621 "prog_io_dcg.m"
          parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_64_64, parse_tree__prog_io_dcg__VarsTerm_16, parse_tree__prog_io_dcg__GenericVarSet_19, parse_tree__prog_io_dcg__VarsContextPieces_21, &parse_tree__prog_io_dcg__MaybeVars_22);
        }
#line 623 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__GoalTerm_23 = parse_tree__prog_io_dcg__SubGoalTerm_17;
#line 617 "prog_io_dcg.m"
      }
#line 613 "prog_io_dcg.m"
    else
#line 625 "prog_io_dcg.m"
      {
#line 625 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__MaybeVars_22 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[68]);
#line 626 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__GoalTerm_23 = parse_tree__prog_io_dcg__Term_10;
#line 625 "prog_io_dcg.m"
      }
#line 628 "prog_io_dcg.m"
    {
#line 628 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__GoalTerm_23, parse_tree__prog_io_dcg__ContextPieces_11, &parse_tree__prog_io_dcg__MaybeGoal_24, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_31, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_32, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_33, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_34, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_35, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_36);
    }
#line 631 "prog_io_dcg.m"
    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeVars_22)) == (MR_mktag((MR_Integer) 1)));
#line 631 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 631 "prog_io_dcg.m"
      {
#line 631 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__Vars0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVars_22, (MR_Integer) 0)));
#line 631 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__StateVars0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVars_22, (MR_Integer) 1)));
#line 632 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal_24)) == (MR_mktag((MR_Integer) 1)));
#line 632 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 632 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__Goal_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal_24, (MR_Integer) 0)));
#line 631 "prog_io_dcg.m"
      }
#line 630 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 634 "prog_io_dcg.m"
      {
#line 634 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_70_70 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 634 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_71_71 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3];
#line 634 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Vars_28;
#line 634 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__StateVars_29;

#line 634 "prog_io_dcg.m"
        {
#line 634 "prog_io_dcg.m"
          mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_70_70, parse_tree__prog_io_dcg__TypeInfo_71_71, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[7], parse_tree__prog_io_dcg__Vars0_25, &parse_tree__prog_io_dcg__Vars_28);
        }
#line 635 "prog_io_dcg.m"
        {
#line 635 "prog_io_dcg.m"
          mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_70_70, parse_tree__prog_io_dcg__TypeInfo_71_71, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[8], parse_tree__prog_io_dcg__StateVars0_26, &parse_tree__prog_io_dcg__StateVars_29);
        }
#line 636 "prog_io_dcg.m"
        {
#line 636 "prog_io_dcg.m"
          MR_Word base;
#line 636 "prog_io_dcg.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 636 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeVarsGoal_12 = base;
#line 636 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_28));
#line 636 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_29));
#line 636 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_27));
#line 636 "prog_io_dcg.m"
        }
#line 634 "prog_io_dcg.m"
      }
#line 630 "prog_io_dcg.m"
    else
#line 639 "prog_io_dcg.m"
      {
#line 639 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_77_77 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[4];
#line 639 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Specs_30;
#line 639 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_61_61;
#line 639 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_62_62;

#line 638 "prog_io_dcg.m"
        {
#line 638 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_61_61 = parse_tree__maybe_error__get_any_errors2_1_f_0(parse_tree__prog_io_dcg__TypeInfo_77_77, parse_tree__prog_io_dcg__TypeInfo_77_77, parse_tree__prog_io_dcg__MaybeVars_22);
        }
#line 639 "prog_io_dcg.m"
        {
#line 639 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_62_62 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, parse_tree__prog_io_dcg__MaybeGoal_24);
        }
#line 638 "prog_io_dcg.m"
        {
#line 638 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__Specs_30 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__V_61_61, parse_tree__prog_io_dcg__V_62_62);
        }
#line 640 "prog_io_dcg.m"
        {
#line 640 "prog_io_dcg.m"
          MR_Word base;
#line 640 "prog_io_dcg.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 640 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeVarsGoal_12 = base;
#line 640 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Specs_30));
#line 640 "prog_io_dcg.m"
        }
#line 639 "prog_io_dcg.m"
      }
#line 609 "prog_io_dcg.m"
  }
#line 603 "prog_io_dcg.m"
}

#line 279 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_5(
#line 279 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 279 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 279 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 279 "prog_io_dcg.m"
{
#line 279 "prog_io_dcg.m"
  {
#line 279 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 279 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv4_HeadVar__2_788;

#line 279 "prog_io_dcg.m"
    {
#line 279 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__279__2_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv4_HeadVar__2_788);
    }
#line 279 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv4_HeadVar__2_788));
#line 279 "prog_io_dcg.m"
  }
#line 279 "prog_io_dcg.m"
}

#line 278 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_4(
#line 278 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 278 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 278 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 278 "prog_io_dcg.m"
{
#line 278 "prog_io_dcg.m"
  {
#line 278 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 278 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv3_HeadVar__2_782;

#line 278 "prog_io_dcg.m"
    {
#line 278 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__278__2_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv3_HeadVar__2_782);
    }
#line 278 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv3_HeadVar__2_782));
#line 278 "prog_io_dcg.m"
  }
#line 278 "prog_io_dcg.m"
}

#line 279 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_3(
#line 279 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 279 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 279 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 279 "prog_io_dcg.m"
{
#line 279 "prog_io_dcg.m"
  {
#line 279 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 279 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv2_HeadVar__2_667;

#line 279 "prog_io_dcg.m"
    {
#line 279 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__279__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv2_HeadVar__2_667);
    }
#line 279 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv2_HeadVar__2_667));
#line 279 "prog_io_dcg.m"
  }
#line 279 "prog_io_dcg.m"
}

#line 278 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_2(
#line 278 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 278 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 278 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 278 "prog_io_dcg.m"
{
#line 278 "prog_io_dcg.m"
  {
#line 278 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 278 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv1_HeadVar__2_661;

#line 278 "prog_io_dcg.m"
    {
#line 278 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__278__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv1_HeadVar__2_661);
    }
#line 278 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv1_HeadVar__2_661));
#line 278 "prog_io_dcg.m"
  }
#line 278 "prog_io_dcg.m"
}

#line 596 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_1(
#line 596 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 596 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 596 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 596 "prog_io_dcg.m"
{
#line 596 "prog_io_dcg.m"
  {
#line 596 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 596 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv0_HeadVar__2_690;

#line 596 "prog_io_dcg.m"
    {
#line 596 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__596__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv0_HeadVar__2_690);
    }
#line 596 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv0_HeadVar__2_690));
#line 596 "prog_io_dcg.m"
  }
#line 596 "prog_io_dcg.m"
}

#line 164 "prog_io_dcg.m"
static MR_bool MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0(
#line 164 "prog_io_dcg.m"
  MR_String parse_tree__prog_io_dcg__Functor_12,
#line 164 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Args_13,
#line 164 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_14,
#line 164 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_15,
#line 164 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_16,
#line 164 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93,
#line 164 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94,
#line 164 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95,
#line 164 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96,
#line 164 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97,
#line 164 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98)
#line 164 "prog_io_dcg.m"
{
#line 207 "prog_io_dcg.m"
  {
#line 207 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 207 "prog_io_dcg.m"
    {
#line 207 "prog_io_dcg.m"
      MR_Integer parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) -1;

#line 207 "prog_io_dcg.m"
#line 207 "prog_io_dcg.m"
      switch (MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 0)) {
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 38:
#line 207 "prog_io_dcg.m"
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) "&"))
#line 207 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 0;
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 44:
#line 207 "prog_io_dcg.m"
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) ","))
#line 207 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 1;
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 58:
#line 207 "prog_io_dcg.m"
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) ":="))
#line 207 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 2;
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 59:
#line 207 "prog_io_dcg.m"
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) ";"))
#line 207 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 3;
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 61:
#line 207 "prog_io_dcg.m"
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) "="))
#line 207 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 4;
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 91:
#line 207 "prog_io_dcg.m"
#line 207 "prog_io_dcg.m"
          switch (MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 1)) {
#line 207 "prog_io_dcg.m"
            case (MR_Integer) 93:
#line 207 "prog_io_dcg.m"
              if (MR_offset_streq(2, parse_tree__prog_io_dcg__Functor_12, (MR_String) "[]"))
#line 207 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 5;
#line 207 "prog_io_dcg.m"
              break;
#line 207 "prog_io_dcg.m"
            case (MR_Integer) 124:
#line 207 "prog_io_dcg.m"
              if (MR_offset_streq(2, parse_tree__prog_io_dcg__Functor_12, (MR_String) "[|]"))
#line 207 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 6;
#line 207 "prog_io_dcg.m"
              break;
#line 207 "prog_io_dcg.m"
          }
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 92:
#line 207 "prog_io_dcg.m"
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) "\\+"))
#line 207 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 7;
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 97:
#line 207 "prog_io_dcg.m"
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) "all"))
#line 207 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 8;
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 101:
#line 207 "prog_io_dcg.m"
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) "else"))
#line 207 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 9;
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 105:
#line 207 "prog_io_dcg.m"
#line 207 "prog_io_dcg.m"
          switch (MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 1)) {
#line 207 "prog_io_dcg.m"
            case (MR_Integer) 102:
#line 207 "prog_io_dcg.m"
              if (MR_offset_streq(2, parse_tree__prog_io_dcg__Functor_12, (MR_String) "if"))
#line 207 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 10;
#line 207 "prog_io_dcg.m"
              break;
#line 207 "prog_io_dcg.m"
            case (MR_Integer) 109:
#line 207 "prog_io_dcg.m"
              if (MR_offset_streq(2, parse_tree__prog_io_dcg__Functor_12, (MR_String) "impure"))
#line 207 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 11;
#line 207 "prog_io_dcg.m"
              break;
#line 207 "prog_io_dcg.m"
          }
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 110:
#line 207 "prog_io_dcg.m"
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) "not"))
#line 207 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 7;
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 112:
#line 207 "prog_io_dcg.m"
          if (((((((((((((((MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 1)) == (MR_Integer) 114)) && (((MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 2)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 3)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 5)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 6)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 7)) == (MR_Integer) 95))))
#line 207 "prog_io_dcg.m"
#line 207 "prog_io_dcg.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 8)) {
#line 207 "prog_io_dcg.m"
              case (MR_Integer) 105:
#line 207 "prog_io_dcg.m"
                if (MR_offset_streq(9, parse_tree__prog_io_dcg__Functor_12, (MR_String) "promise_impure"))
#line 207 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 12;
#line 207 "prog_io_dcg.m"
                break;
#line 207 "prog_io_dcg.m"
              case (MR_Integer) 112:
#line 207 "prog_io_dcg.m"
                if (MR_offset_streq(9, parse_tree__prog_io_dcg__Functor_12, (MR_String) "promise_pure"))
#line 207 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 13;
#line 207 "prog_io_dcg.m"
                break;
#line 207 "prog_io_dcg.m"
              case (MR_Integer) 115:
#line 207 "prog_io_dcg.m"
                if (MR_offset_streq(9, parse_tree__prog_io_dcg__Functor_12, (MR_String) "promise_semipure"))
#line 207 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 14;
#line 207 "prog_io_dcg.m"
                break;
#line 207 "prog_io_dcg.m"
            }
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 115:
#line 207 "prog_io_dcg.m"
#line 207 "prog_io_dcg.m"
          switch (MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 1)) {
#line 207 "prog_io_dcg.m"
            case (MR_Integer) 101:
#line 207 "prog_io_dcg.m"
              if (MR_offset_streq(2, parse_tree__prog_io_dcg__Functor_12, (MR_String) "semipure"))
#line 207 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 15;
#line 207 "prog_io_dcg.m"
              break;
#line 207 "prog_io_dcg.m"
            case (MR_Integer) 111:
#line 207 "prog_io_dcg.m"
              if (MR_offset_streq(2, parse_tree__prog_io_dcg__Functor_12, (MR_String) "some"))
#line 207 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 16;
#line 207 "prog_io_dcg.m"
              break;
#line 207 "prog_io_dcg.m"
          }
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 123:
#line 207 "prog_io_dcg.m"
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) "{}"))
#line 207 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 17;
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
      }
#line 207 "prog_io_dcg.m"
#line 207 "prog_io_dcg.m"
      switch (parse_tree__prog_io_dcg__case_num_0) {
#line 207 "prog_io_dcg.m"
        default:
#line 207 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__succeeded = MR_FALSE;
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 0:
#line 336 "prog_io_dcg.m"
          {
#line 336 "prog_io_dcg.m"
            /* case "&" */
#line 336 "prog_io_dcg.m"
            {
#line 336 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTermA_497;
#line 336 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTermB_498;
#line 336 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_354_354;
#line 336 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_355_355;

#line 336 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 336 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 336 "prog_io_dcg.m"
                {
#line 336 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__SubGoalTermA_497 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 336 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 336 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_354_354)) == (MR_mktag((MR_Integer) 1)));
#line 336 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 336 "prog_io_dcg.m"
                    {
#line 336 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__SubGoalTermB_498 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_354_354, (MR_Integer) 0)));
#line 336 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_354_354, (MR_Integer) 1)));
#line 336 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_355_355 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 336 "prog_io_dcg.m"
                    }
#line 336 "prog_io_dcg.m"
                }
#line 336 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 338 "prog_io_dcg.m"
                {
#line 338 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_356_356;
#line 338 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_357_357;
#line 338 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_358_358;
#line 338 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__MaybeSubGoalA_489;
#line 338 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__MaybeSubGoalB_490;
#line 341 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__SubGoalA_485;
#line 341 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__SubGoalB_486;

#line 337 "prog_io_dcg.m"
                  {
#line 337 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTermA_497, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoalA_489, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_356_356, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_357_357, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, &parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_358_358);
                  }
#line 339 "prog_io_dcg.m"
                  {
#line 339 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTermB_498, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoalB_490, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_356_356, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_357_357, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_358_358, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
#line 342 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoalA_489)) == (MR_mktag((MR_Integer) 1)));
#line 342 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 342 "prog_io_dcg.m"
                    {
#line 342 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__SubGoalA_485 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoalA_489, (MR_Integer) 0)));
#line 343 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoalB_490)) == (MR_mktag((MR_Integer) 1)));
#line 343 "prog_io_dcg.m"
                      if (parse_tree__prog_io_dcg__succeeded)
#line 343 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__SubGoalB_486 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoalB_490, (MR_Integer) 0)));
#line 342 "prog_io_dcg.m"
                    }
#line 341 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 345 "prog_io_dcg.m"
                    {
#line 345 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Goal_481;

#line 345 "prog_io_dcg.m"
                      {
#line 345 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Goal_481 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 345 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_481, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 345 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_481, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 345 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_481, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalA_485));
#line 345 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_481, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalB_486));
#line 345 "prog_io_dcg.m"
                      }
#line 346 "prog_io_dcg.m"
                      {
#line 346 "prog_io_dcg.m"
                        MR_Word base;
#line 346 "prog_io_dcg.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 346 "prog_io_dcg.m"
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 346 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_481));
#line 346 "prog_io_dcg.m"
                      }
#line 345 "prog_io_dcg.m"
                    }
#line 341 "prog_io_dcg.m"
                  else
#line 349 "prog_io_dcg.m"
                    {
#line 349 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_676_676 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
#line 349 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_362_362;
#line 349 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_363_363;
#line 349 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Specs_482;

#line 348 "prog_io_dcg.m"
                      {
#line 348 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_362_362 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_676_676, parse_tree__prog_io_dcg__MaybeSubGoalA_489);
                      }
#line 349 "prog_io_dcg.m"
                      {
#line 349 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_363_363 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_676_676, parse_tree__prog_io_dcg__MaybeSubGoalB_490);
                      }
#line 348 "prog_io_dcg.m"
                      {
#line 348 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Specs_482 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__V_362_362, parse_tree__prog_io_dcg__V_363_363);
                      }
#line 350 "prog_io_dcg.m"
                      {
#line 350 "prog_io_dcg.m"
                        MR_Word base;
#line 350 "prog_io_dcg.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 350 "prog_io_dcg.m"
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 350 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Specs_482));
#line 350 "prog_io_dcg.m"
                      }
#line 349 "prog_io_dcg.m"
                    }
#line 338 "prog_io_dcg.m"
                }
#line 336 "prog_io_dcg.m"
              else
#line 354 "prog_io_dcg.m"
                {
#line 354 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_364_364;
#line 354 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__Spec_493;

#line 353 "prog_io_dcg.m"
                  {
#line 353 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Spec_493 = parse_tree__prog_io_goal__should_have_two_goals_infix_3_f_0(parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__Functor_12);
                  }
#line 355 "prog_io_dcg.m"
                  {
#line 355 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_364_364 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 355 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_364_364, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_493));
#line 355 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_364_364, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 355 "prog_io_dcg.m"
                  }
#line 355 "prog_io_dcg.m"
                  {
#line 355 "prog_io_dcg.m"
                    MR_Word base;
#line 355 "prog_io_dcg.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 355 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 355 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_364_364));
#line 355 "prog_io_dcg.m"
                  }
#line 354 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
#line 354 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
#line 354 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
#line 354 "prog_io_dcg.m"
                }
#line 336 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 336 "prog_io_dcg.m"
            }
#line 336 "prog_io_dcg.m"
          }
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 1:
#line 313 "prog_io_dcg.m"
          {
#line 313 "prog_io_dcg.m"
            /* case "," */
#line 313 "prog_io_dcg.m"
            {
#line 313 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTermA_47;
#line 313 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTermB_48;
#line 313 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_366_366;
#line 313 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_367_367;

#line 313 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 313 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 313 "prog_io_dcg.m"
                {
#line 313 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__SubGoalTermA_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 313 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_366_366 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 313 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_366_366)) == (MR_mktag((MR_Integer) 1)));
#line 313 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 313 "prog_io_dcg.m"
                    {
#line 313 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__SubGoalTermB_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_366_366, (MR_Integer) 0)));
#line 313 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_367_367 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_366_366, (MR_Integer) 1)));
#line 313 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_367_367 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 313 "prog_io_dcg.m"
                    }
#line 313 "prog_io_dcg.m"
                }
#line 313 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 315 "prog_io_dcg.m"
                {
#line 315 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__MaybeSubGoalA_49;
#line 315 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__MaybeSubGoalB_50;
#line 315 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_368_368;
#line 315 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_369_369;
#line 315 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_370_370;
#line 318 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__SubGoalA_51;
#line 318 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__SubGoalB_52;

#line 314 "prog_io_dcg.m"
                  {
#line 314 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTermA_47, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoalA_49, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_368_368, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_369_369, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, &parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_370_370);
                  }
#line 316 "prog_io_dcg.m"
                  {
#line 316 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTermB_48, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoalB_50, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_368_368, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_369_369, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_370_370, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
#line 319 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoalA_49)) == (MR_mktag((MR_Integer) 1)));
#line 319 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 319 "prog_io_dcg.m"
                    {
#line 319 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__SubGoalA_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoalA_49, (MR_Integer) 0)));
#line 320 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoalB_50)) == (MR_mktag((MR_Integer) 1)));
#line 320 "prog_io_dcg.m"
                      if (parse_tree__prog_io_dcg__succeeded)
#line 320 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__SubGoalB_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoalB_50, (MR_Integer) 0)));
#line 319 "prog_io_dcg.m"
                    }
#line 318 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 322 "prog_io_dcg.m"
                    {
#line 322 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Goal_468;

#line 322 "prog_io_dcg.m"
                      {
#line 322 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Goal_468 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 322 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Goal_468, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 322 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Goal_468, 1) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalA_51));
#line 322 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Goal_468, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalB_52));
#line 322 "prog_io_dcg.m"
                      }
#line 323 "prog_io_dcg.m"
                      {
#line 323 "prog_io_dcg.m"
                        MR_Word base;
#line 323 "prog_io_dcg.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 323 "prog_io_dcg.m"
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 323 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_468));
#line 323 "prog_io_dcg.m"
                      }
#line 322 "prog_io_dcg.m"
                    }
#line 318 "prog_io_dcg.m"
                  else
#line 326 "prog_io_dcg.m"
                    {
#line 326 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_674_674 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
#line 326 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_374_374;
#line 326 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_375_375;
#line 326 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Specs_469;

#line 325 "prog_io_dcg.m"
                      {
#line 325 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_374_374 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_674_674, parse_tree__prog_io_dcg__MaybeSubGoalA_49);
                      }
#line 326 "prog_io_dcg.m"
                      {
#line 326 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_375_375 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_674_674, parse_tree__prog_io_dcg__MaybeSubGoalB_50);
                      }
#line 325 "prog_io_dcg.m"
                      {
#line 325 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Specs_469 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__V_374_374, parse_tree__prog_io_dcg__V_375_375);
                      }
#line 327 "prog_io_dcg.m"
                      {
#line 327 "prog_io_dcg.m"
                        MR_Word base;
#line 327 "prog_io_dcg.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 327 "prog_io_dcg.m"
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 327 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Specs_469));
#line 327 "prog_io_dcg.m"
                      }
#line 326 "prog_io_dcg.m"
                    }
#line 315 "prog_io_dcg.m"
                }
#line 313 "prog_io_dcg.m"
              else
#line 331 "prog_io_dcg.m"
                {
#line 331 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_376_376;
#line 331 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__Spec_474;

#line 330 "prog_io_dcg.m"
                  {
#line 330 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Spec_474 = parse_tree__prog_io_goal__should_have_two_goals_infix_3_f_0(parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__Functor_12);
                  }
#line 332 "prog_io_dcg.m"
                  {
#line 332 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_376_376 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_376_376, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_474));
#line 332 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_376_376, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 332 "prog_io_dcg.m"
                  }
#line 332 "prog_io_dcg.m"
                  {
#line 332 "prog_io_dcg.m"
                    MR_Word base;
#line 332 "prog_io_dcg.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 332 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 332 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_376_376));
#line 332 "prog_io_dcg.m"
                  }
#line 331 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
#line 331 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
#line 331 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
#line 331 "prog_io_dcg.m"
                }
#line 313 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 313 "prog_io_dcg.m"
            }
#line 313 "prog_io_dcg.m"
          }
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 2:
#line 577 "prog_io_dcg.m"
          {
#line 577 "prog_io_dcg.m"
            /* case ":=" */
#line 577 "prog_io_dcg.m"
            {
#line 577 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__Arg0_650;
#line 577 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_99_99;

#line 577 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 577 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 577 "prog_io_dcg.m"
                {
#line 577 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__Arg0_650 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 577 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 577 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_99_99 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 577 "prog_io_dcg.m"
                }
#line 577 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 581 "prog_io_dcg.m"
                {
#line 581 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__Goal_642;
#line 581 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__OutVarTerm_644;
#line 581 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__Arg_645;

#line 581 "prog_io_dcg.m"
                  {
#line 581 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__new_dcg_var_5_p_0(parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
#line 583 "prog_io_dcg.m"
                  {
#line 583 "prog_io_dcg.m"
                    mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__Arg0_650, &parse_tree__prog_io_dcg__Arg_645);
                  }
#line 584 "prog_io_dcg.m"
                  {
#line 584 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__OutVarTerm_644 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__OutVarTerm_644, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98));
#line 584 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__OutVarTerm_644, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 584 "prog_io_dcg.m"
                  }
#line 585 "prog_io_dcg.m"
                  {
#line 585 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Goal_642 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 585 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_642, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 585 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_642, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Arg_645));
#line 585 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_642, 2) = ((MR_Box) (parse_tree__prog_io_dcg__OutVarTerm_644));
#line 585 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_642, 3) = ((MR_Box) ((MR_Integer) 0));
#line 585 "prog_io_dcg.m"
                  }
#line 586 "prog_io_dcg.m"
                  {
#line 586 "prog_io_dcg.m"
                    MR_Word base;
#line 586 "prog_io_dcg.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 586 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 586 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_642));
#line 586 "prog_io_dcg.m"
                  }
#line 581 "prog_io_dcg.m"
                }
#line 577 "prog_io_dcg.m"
              else
#line 595 "prog_io_dcg.m"
                {
#line 595 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__ProgArgs_92;
#line 595 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__Goal_646;

#line 596 "prog_io_dcg.m"
                  {
#line 596 "prog_io_dcg.m"
                    mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[2], parse_tree__prog_io_dcg__Args_13, &parse_tree__prog_io_dcg__ProgArgs_92);
                  }
#line 597 "prog_io_dcg.m"
                  {
#line 597 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__make_dcg_call_10_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_4[1], parse_tree__prog_io_dcg__ProgArgs_92, parse_tree__prog_io_dcg__Context_14, &parse_tree__prog_io_dcg__Goal_646, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
#line 599 "prog_io_dcg.m"
                  {
#line 599 "prog_io_dcg.m"
                    MR_Word base;
#line 599 "prog_io_dcg.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 599 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 599 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_646));
#line 599 "prog_io_dcg.m"
                  }
#line 595 "prog_io_dcg.m"
                }
#line 577 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 577 "prog_io_dcg.m"
            }
#line 577 "prog_io_dcg.m"
          }
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 3:
#line 359 "prog_io_dcg.m"
          {
#line 359 "prog_io_dcg.m"
            /* case ";" */
#line 359 "prog_io_dcg.m"
            {
#line 359 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTermA_543;
#line 359 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTermB_544;
#line 359 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_328_328;
#line 359 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_329_329;

#line 359 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 359 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 359 "prog_io_dcg.m"
                {
#line 359 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__SubGoalTermA_543 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 359 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 359 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_328_328)) == (MR_mktag((MR_Integer) 1)));
#line 359 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 359 "prog_io_dcg.m"
                    {
#line 359 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__SubGoalTermB_544 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_328_328, (MR_Integer) 0)));
#line 359 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_328_328, (MR_Integer) 1)));
#line 359 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_329_329 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "prog_io_dcg.m"
                    }
#line 359 "prog_io_dcg.m"
                }
#line 359 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 361 "prog_io_dcg.m"
                {
#line 361 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__CondGoalTerm_53;
#line 361 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__ThenGoalTerm_54;
#line 362 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_330_330;
#line 362 "prog_io_dcg.m"
                  MR_String parse_tree__prog_io_dcg__V_331_331;
#line 362 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_332_332;
#line 362 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_333_333;
#line 362 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_334_334;
#line 362 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg___Context_55;

#line 362 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__SubGoalTermA_543)) == (MR_mktag((MR_Integer) 0)));
#line 362 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 362 "prog_io_dcg.m"
                    {
#line 362 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_330_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__SubGoalTermA_543, (MR_Integer) 0)));
#line 362 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_332_332 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__SubGoalTermA_543, (MR_Integer) 1)));
#line 362 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg___Context_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__SubGoalTermA_543, (MR_Integer) 2)));
#line 362 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_330_330)) == (MR_mktag((MR_Integer) 0)));
#line 362 "prog_io_dcg.m"
                      if (parse_tree__prog_io_dcg__succeeded)
#line 362 "prog_io_dcg.m"
                        {
#line 362 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_331_331 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_330_330, (MR_Integer) 0)));
#line 362 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_331_331, (MR_String) "->") == 0);
#line 362 "prog_io_dcg.m"
                          if (parse_tree__prog_io_dcg__succeeded)
#line 362 "prog_io_dcg.m"
                            {
#line 363 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_332_332)) == (MR_mktag((MR_Integer) 1)));
#line 363 "prog_io_dcg.m"
                              if (parse_tree__prog_io_dcg__succeeded)
#line 363 "prog_io_dcg.m"
                                {
#line 363 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__CondGoalTerm_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_332_332, (MR_Integer) 0)));
#line 363 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__V_333_333 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_332_332, (MR_Integer) 1)));
#line 363 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_333_333)) == (MR_mktag((MR_Integer) 1)));
#line 363 "prog_io_dcg.m"
                                  if (parse_tree__prog_io_dcg__succeeded)
#line 363 "prog_io_dcg.m"
                                    {
#line 363 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__ThenGoalTerm_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_333_333, (MR_Integer) 0)));
#line 363 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__V_334_334 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_333_333, (MR_Integer) 1)));
#line 363 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_334_334 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 363 "prog_io_dcg.m"
                                    }
#line 363 "prog_io_dcg.m"
                                }
#line 362 "prog_io_dcg.m"
                            }
#line 362 "prog_io_dcg.m"
                        }
#line 362 "prog_io_dcg.m"
                    }
#line 361 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 365 "prog_io_dcg.m"
                    {
#line 365 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__parse_dcg_if_then_else_12_p_0(parse_tree__prog_io_dcg__CondGoalTerm_53, parse_tree__prog_io_dcg__ThenGoalTerm_54, parse_tree__prog_io_dcg__SubGoalTermB_544, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__MaybeGoal_16, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                    }
#line 361 "prog_io_dcg.m"
                  else
#line 369 "prog_io_dcg.m"
                    {
#line 369 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__MaybeSubGoalA0_57;
#line 369 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__VarA_58;
#line 369 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__MaybeSubGoalB0_59;
#line 369 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__VarB_60;
#line 369 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_338_338;
#line 369 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_339_339;
#line 374 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__SubGoalA0_61;
#line 374 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__SubGoalB0_62;

#line 370 "prog_io_dcg.m"
                      {
#line 370 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTermA_543, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoalA0_57, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_338_338, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_339_339, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, &parse_tree__prog_io_dcg__VarA_58);
                      }
#line 372 "prog_io_dcg.m"
                      {
#line 372 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTermB_544, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoalB0_59, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_338_338, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_339_339, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, &parse_tree__prog_io_dcg__VarB_60);
                      }
#line 375 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoalA0_57)) == (MR_mktag((MR_Integer) 1)));
#line 375 "prog_io_dcg.m"
                      if (parse_tree__prog_io_dcg__succeeded)
#line 375 "prog_io_dcg.m"
                        {
#line 375 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__SubGoalA0_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoalA0_57, (MR_Integer) 0)));
#line 376 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoalB0_59)) == (MR_mktag((MR_Integer) 1)));
#line 376 "prog_io_dcg.m"
                          if (parse_tree__prog_io_dcg__succeeded)
#line 376 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__SubGoalB0_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoalB0_59, (MR_Integer) 0)));
#line 375 "prog_io_dcg.m"
                        }
#line 374 "prog_io_dcg.m"
                      if (parse_tree__prog_io_dcg__succeeded)
#line 404 "prog_io_dcg.m"
                        {
#line 404 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__Goal_523;
#line 378 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__TypeInfo_988_988;

#line 378 "prog_io_dcg.m"
                          {
#line 378 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3], ((MR_Box) (parse_tree__prog_io_dcg__VarA_58)), ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97)));
                          }
#line 378 "prog_io_dcg.m"
                          if (parse_tree__prog_io_dcg__succeeded)
#line 378 "prog_io_dcg.m"
                            {
#line 3688 "parse_tree.prog_io_dcg.c"
                              parse_tree__prog_io_dcg__TypeInfo_988_988 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3];
#line 378 "prog_io_dcg.m"
                              {
#line 378 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_dcg__TypeInfo_988_988, ((MR_Box) (parse_tree__prog_io_dcg__VarB_60)), ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97)));
                              }
#line 378 "prog_io_dcg.m"
                            }
#line 378 "prog_io_dcg.m"
                          if (parse_tree__prog_io_dcg__succeeded)
#line 379 "prog_io_dcg.m"
                            {
#line 379 "prog_io_dcg.m"
                              *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
#line 380 "prog_io_dcg.m"
                              {
#line 380 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__Goal_523 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 380 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 380 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 380 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalA0_61));
#line 380 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalB0_62));
#line 380 "prog_io_dcg.m"
                              }
#line 379 "prog_io_dcg.m"
                            }
#line 378 "prog_io_dcg.m"
                          else
#line 381 "prog_io_dcg.m"
                            {
#line 381 "prog_io_dcg.m"
                              {
#line 381 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3], ((MR_Box) (parse_tree__prog_io_dcg__VarA_58)), ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97)));
                              }
#line 381 "prog_io_dcg.m"
                              if (parse_tree__prog_io_dcg__succeeded)
#line 382 "prog_io_dcg.m"
                                {
#line 382 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__Unify_64;
#line 382 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__V_342_342;
#line 382 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__V_343_343;
#line 382 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__SubGoalA_512;

#line 382 "prog_io_dcg.m"
                                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__VarB_60;
#line 384 "prog_io_dcg.m"
                                  {
#line 384 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__V_342_342 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_342_342, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98));
#line 384 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_342_342, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 384 "prog_io_dcg.m"
                                  }
#line 385 "prog_io_dcg.m"
                                  {
#line 385 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__V_343_343 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_343_343, 0) = ((MR_Box) (parse_tree__prog_io_dcg__VarA_58));
#line 385 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_343_343, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 385 "prog_io_dcg.m"
                                  }
#line 383 "prog_io_dcg.m"
                                  {
#line 383 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__Unify_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 383 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_64, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 383 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_64, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_342_342));
#line 383 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_64, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_343_343));
#line 383 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_64, 3) = ((MR_Box) ((MR_Integer) 0));
#line 383 "prog_io_dcg.m"
                                  }
#line 387 "prog_io_dcg.m"
                                  {
#line 387 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(parse_tree__prog_io_dcg__Unify_64, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__SubGoalA0_61, &parse_tree__prog_io_dcg__SubGoalA_512);
                                  }
#line 389 "prog_io_dcg.m"
                                  {
#line 389 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__Goal_523 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 389 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 389 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 389 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalA_512));
#line 389 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalB0_62));
#line 389 "prog_io_dcg.m"
                                  }
#line 382 "prog_io_dcg.m"
                                }
#line 381 "prog_io_dcg.m"
                              else
#line 390 "prog_io_dcg.m"
                                {
#line 390 "prog_io_dcg.m"
                                  {
#line 390 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3], ((MR_Box) (parse_tree__prog_io_dcg__VarB_60)), ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97)));
                                  }
#line 390 "prog_io_dcg.m"
                                  if (parse_tree__prog_io_dcg__succeeded)
#line 391 "prog_io_dcg.m"
                                    {
#line 391 "prog_io_dcg.m"
                                      MR_Word parse_tree__prog_io_dcg__V_345_345;
#line 391 "prog_io_dcg.m"
                                      MR_Word parse_tree__prog_io_dcg__V_346_346;
#line 391 "prog_io_dcg.m"
                                      MR_Word parse_tree__prog_io_dcg__SubGoalB_513;
#line 391 "prog_io_dcg.m"
                                      MR_Word parse_tree__prog_io_dcg__Unify_514;

#line 391 "prog_io_dcg.m"
                                      *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__VarA_58;
#line 393 "prog_io_dcg.m"
                                      {
#line 393 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__V_345_345 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_345_345, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98));
#line 393 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_345_345, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 393 "prog_io_dcg.m"
                                      }
#line 394 "prog_io_dcg.m"
                                      {
#line 394 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__V_346_346 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_346_346, 0) = ((MR_Box) (parse_tree__prog_io_dcg__VarB_60));
#line 394 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_346_346, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 394 "prog_io_dcg.m"
                                      }
#line 392 "prog_io_dcg.m"
                                      {
#line 392 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__Unify_514 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 392 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_514, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 392 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_514, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_345_345));
#line 392 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_514, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_346_346));
#line 392 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_514, 3) = ((MR_Box) ((MR_Integer) 0));
#line 392 "prog_io_dcg.m"
                                      }
#line 396 "prog_io_dcg.m"
                                      {
#line 396 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(parse_tree__prog_io_dcg__Unify_514, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__SubGoalB0_62, &parse_tree__prog_io_dcg__SubGoalB_513);
                                      }
#line 398 "prog_io_dcg.m"
                                      {
#line 398 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__Goal_523 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 398 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 398 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 398 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalA0_61));
#line 398 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalB_513));
#line 398 "prog_io_dcg.m"
                                      }
#line 391 "prog_io_dcg.m"
                                    }
#line 390 "prog_io_dcg.m"
                                  else
#line 400 "prog_io_dcg.m"
                                    {
#line 400 "prog_io_dcg.m"
                                      MR_Word parse_tree__prog_io_dcg__SubGoalA_515;

#line 400 "prog_io_dcg.m"
                                      *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__VarB_60;
#line 401 "prog_io_dcg.m"
                                      {
#line 401 "prog_io_dcg.m"
                                        parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_io_dcg__VarA_58, parse_tree__prog_io_dcg__VarB_60, parse_tree__prog_io_dcg__SubGoalA0_61, &parse_tree__prog_io_dcg__SubGoalA_515);
                                      }
#line 403 "prog_io_dcg.m"
                                      {
#line 403 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__Goal_523 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 403 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 403 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 403 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalA_515));
#line 403 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalB0_62));
#line 403 "prog_io_dcg.m"
                                      }
#line 400 "prog_io_dcg.m"
                                    }
#line 390 "prog_io_dcg.m"
                                }
#line 381 "prog_io_dcg.m"
                            }
#line 406 "prog_io_dcg.m"
                          {
#line 406 "prog_io_dcg.m"
                            MR_Word base;
#line 406 "prog_io_dcg.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 406 "prog_io_dcg.m"
                            *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 406 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_523));
#line 406 "prog_io_dcg.m"
                          }
#line 404 "prog_io_dcg.m"
                        }
#line 374 "prog_io_dcg.m"
                      else
#line 408 "prog_io_dcg.m"
                        {
#line 408 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_678_678;
#line 408 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__V_350_350;
#line 408 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__V_351_351;
#line 408 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__Specs_526;

#line 408 "prog_io_dcg.m"
                          *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__VarA_58;
#line 3940 "parse_tree.prog_io_dcg.c"
                          parse_tree__prog_io_dcg__TypeCtorInfo_678_678 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
#line 409 "prog_io_dcg.m"
                          {
#line 409 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__V_350_350 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_678_678, parse_tree__prog_io_dcg__MaybeSubGoalA0_57);
                          }
#line 410 "prog_io_dcg.m"
                          {
#line 410 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__V_351_351 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_678_678, parse_tree__prog_io_dcg__MaybeSubGoalB0_59);
                          }
#line 409 "prog_io_dcg.m"
                          {
#line 409 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__Specs_526 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__V_350_350, parse_tree__prog_io_dcg__V_351_351);
                          }
#line 411 "prog_io_dcg.m"
                          {
#line 411 "prog_io_dcg.m"
                            MR_Word base;
#line 411 "prog_io_dcg.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 411 "prog_io_dcg.m"
                            *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 411 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Specs_526));
#line 411 "prog_io_dcg.m"
                          }
#line 408 "prog_io_dcg.m"
                        }
#line 369 "prog_io_dcg.m"
                    }
#line 361 "prog_io_dcg.m"
                }
#line 359 "prog_io_dcg.m"
              else
#line 423 "prog_io_dcg.m"
                {
#line 423 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_352_352;
#line 423 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__Spec_539;

#line 422 "prog_io_dcg.m"
                  {
#line 422 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Spec_539 = parse_tree__prog_io_goal__should_have_two_goals_infix_3_f_0(parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__Functor_12);
                  }
#line 424 "prog_io_dcg.m"
                  {
#line 424 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_352_352 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_352_352, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_539));
#line 424 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_352_352, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 424 "prog_io_dcg.m"
                  }
#line 424 "prog_io_dcg.m"
                  {
#line 424 "prog_io_dcg.m"
                    MR_Word base;
#line 424 "prog_io_dcg.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 424 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 424 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_352_352));
#line 424 "prog_io_dcg.m"
                  }
#line 423 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
#line 423 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
#line 423 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
#line 423 "prog_io_dcg.m"
                }
#line 359 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 359 "prog_io_dcg.m"
            }
#line 359 "prog_io_dcg.m"
          }
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 4:
#line 563 "prog_io_dcg.m"
          {
#line 563 "prog_io_dcg.m"
            /* case "=" */
#line 563 "prog_io_dcg.m"
            {
#line 564 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__Arg0_88;
#line 564 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_109_109;

#line 564 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 564 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 564 "prog_io_dcg.m"
                {
#line 564 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__Arg0_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 564 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 564 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_109_109 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 564 "prog_io_dcg.m"
                }
#line 564 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 566 "prog_io_dcg.m"
                {
#line 566 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__Arg_89;
#line 566 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__DCGVarTerm_90;
#line 566 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__Goal_636;

#line 566 "prog_io_dcg.m"
                  {
#line 566 "prog_io_dcg.m"
                    mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__Arg0_88, &parse_tree__prog_io_dcg__Arg_89);
                  }
#line 567 "prog_io_dcg.m"
                  {
#line 567 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__DCGVarTerm_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__DCGVarTerm_90, 0) = ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97));
#line 567 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__DCGVarTerm_90, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 567 "prog_io_dcg.m"
                  }
#line 568 "prog_io_dcg.m"
                  {
#line 568 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Goal_636 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 568 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_636, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 568 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_636, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Arg_89));
#line 568 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_636, 2) = ((MR_Box) (parse_tree__prog_io_dcg__DCGVarTerm_90));
#line 568 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_636, 3) = ((MR_Box) ((MR_Integer) 0));
#line 568 "prog_io_dcg.m"
                  }
#line 569 "prog_io_dcg.m"
                  {
#line 569 "prog_io_dcg.m"
                    MR_Word base;
#line 569 "prog_io_dcg.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 569 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 569 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_636));
#line 569 "prog_io_dcg.m"
                  }
#line 566 "prog_io_dcg.m"
                }
#line 564 "prog_io_dcg.m"
              else
#line 572 "prog_io_dcg.m"
                {
#line 572 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_111_111;
#line 572 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__Spec_637;

#line 571 "prog_io_dcg.m"
                  {
#line 571 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Spec_637 = parse_tree__prog_io_goal__should_have_two_terms_infix_3_f_0(parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__Functor_12);
                  }
#line 573 "prog_io_dcg.m"
                  {
#line 573 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_111_111, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_637));
#line 573 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 573 "prog_io_dcg.m"
                  }
#line 573 "prog_io_dcg.m"
                  {
#line 573 "prog_io_dcg.m"
                    MR_Word base;
#line 573 "prog_io_dcg.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 573 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 573 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_111_111));
#line 573 "prog_io_dcg.m"
                  }
#line 572 "prog_io_dcg.m"
                }
#line 563 "prog_io_dcg.m"
              *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
#line 563 "prog_io_dcg.m"
              *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
#line 563 "prog_io_dcg.m"
              *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
#line 563 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 563 "prog_io_dcg.m"
            }
#line 563 "prog_io_dcg.m"
          }
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 5:
#line 517 "prog_io_dcg.m"
          {
#line 517 "prog_io_dcg.m"
            /* case "[]" */
#line 517 "prog_io_dcg.m"
            if ((parse_tree__prog_io_dcg__Args_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 508 "prog_io_dcg.m"
              {
#line 508 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_215_215;
#line 508 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_216_216;
#line 508 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__Goal_598;

#line 511 "prog_io_dcg.m"
                {
#line 511 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__new_dcg_var_5_p_0(parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                }
#line 514 "prog_io_dcg.m"
                {
#line 514 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_215_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 514 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_215_215, 0) = ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97));
#line 514 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_215_215, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 514 "prog_io_dcg.m"
                }
#line 514 "prog_io_dcg.m"
                {
#line 514 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 514 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_216_216, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98));
#line 514 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_216_216, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 514 "prog_io_dcg.m"
                }
#line 513 "prog_io_dcg.m"
                {
#line 513 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__Goal_598 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 513 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_598, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 513 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_598, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_215_215));
#line 513 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_598, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_216_216));
#line 513 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_598, 3) = ((MR_Box) ((MR_Integer) 0));
#line 513 "prog_io_dcg.m"
                }
#line 516 "prog_io_dcg.m"
                {
#line 516 "prog_io_dcg.m"
                  MR_Word base;
#line 516 "prog_io_dcg.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 516 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 516 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_598));
#line 516 "prog_io_dcg.m"
                }
#line 508 "prog_io_dcg.m"
              }
#line 517 "prog_io_dcg.m"
            else
#line 518 "prog_io_dcg.m"
              {
#line 518 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_204_204;
#line 518 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_205_205;
#line 518 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_210_210;
#line 518 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__Spec_601;

#line 525 "prog_io_dcg.m"
                {
#line 525 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 525 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_205_205, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 525 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_205_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[63])));
#line 525 "prog_io_dcg.m"
                }
#line 525 "prog_io_dcg.m"
                {
#line 525 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_204_204, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_205_205));
#line 525 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 525 "prog_io_dcg.m"
                }
#line 524 "prog_io_dcg.m"
                {
#line 524 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__Spec_601 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 524 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_601, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 524 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_601, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 524 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_601, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_204_204));
#line 524 "prog_io_dcg.m"
                }
#line 526 "prog_io_dcg.m"
                {
#line 526 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_210_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 526 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_210_210, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_601));
#line 526 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_210_210, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 526 "prog_io_dcg.m"
                }
#line 526 "prog_io_dcg.m"
                {
#line 526 "prog_io_dcg.m"
                  MR_Word base;
#line 526 "prog_io_dcg.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 526 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 526 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_210_210));
#line 526 "prog_io_dcg.m"
                }
#line 518 "prog_io_dcg.m"
                *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
#line 518 "prog_io_dcg.m"
                *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
#line 518 "prog_io_dcg.m"
                *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
#line 518 "prog_io_dcg.m"
              }
#line 517 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 517 "prog_io_dcg.m"
          }
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 6:
#line 530 "prog_io_dcg.m"
          {
#line 530 "prog_io_dcg.m"
            /* case "[|]" */
#line 530 "prog_io_dcg.m"
            {
#line 530 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_113_113;
#line 530 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_114_114;
#line 530 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__X_82;
#line 530 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__Xs_83;

#line 530 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 530 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 530 "prog_io_dcg.m"
                {
#line 530 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__X_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 530 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 530 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_113_113)) == (MR_mktag((MR_Integer) 1)));
#line 530 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 530 "prog_io_dcg.m"
                    {
#line 530 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__Xs_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_113_113, (MR_Integer) 0)));
#line 530 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_113_113, (MR_Integer) 1)));
#line 530 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_114_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 530 "prog_io_dcg.m"
                    }
#line 530 "prog_io_dcg.m"
                }
#line 530 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 535 "prog_io_dcg.m"
                {
#line 535 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__ConsTerm0_84;
#line 535 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__ConsTerm_85;
#line 535 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__OutVarTerm_86;
#line 541 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__Term_87;

#line 536 "prog_io_dcg.m"
                  {
#line 536 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__new_dcg_var_5_p_0(parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
#line 538 "prog_io_dcg.m"
                  {
#line 538 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__ConsTerm0_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 538 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ConsTerm0_84, 0) = ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_4[3]));
#line 538 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ConsTerm0_84, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Args_13));
#line 538 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ConsTerm0_84, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 538 "prog_io_dcg.m"
                  }
#line 539 "prog_io_dcg.m"
                  {
#line 539 "prog_io_dcg.m"
                    mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__ConsTerm0_84, &parse_tree__prog_io_dcg__ConsTerm_85);
                  }
#line 540 "prog_io_dcg.m"
                  {
#line 540 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__OutVarTerm_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 540 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__OutVarTerm_86, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98));
#line 540 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__OutVarTerm_86, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 540 "prog_io_dcg.m"
                  }
#line 541 "prog_io_dcg.m"
                  {
#line 541 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = parse_tree__prog_io_dcg__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_dcg__ConsTerm_85, parse_tree__prog_io_dcg__OutVarTerm_86, &parse_tree__prog_io_dcg__Term_87);
                  }
#line 541 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 543 "prog_io_dcg.m"
                    {
#line 543 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_123_123;
#line 543 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Goal_613;

#line 542 "prog_io_dcg.m"
                      {
#line 542 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_123_123, 0) = ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97));
#line 542 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_123_123, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 542 "prog_io_dcg.m"
                      }
#line 542 "prog_io_dcg.m"
                      {
#line 542 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Goal_613 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 542 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_613, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 542 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_613, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_123_123));
#line 542 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_613, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Term_87));
#line 542 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_613, 3) = ((MR_Box) ((MR_Integer) 0));
#line 542 "prog_io_dcg.m"
                      }
#line 544 "prog_io_dcg.m"
                      {
#line 544 "prog_io_dcg.m"
                        MR_Word base;
#line 544 "prog_io_dcg.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 544 "prog_io_dcg.m"
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 544 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_613));
#line 544 "prog_io_dcg.m"
                      }
#line 543 "prog_io_dcg.m"
                    }
#line 541 "prog_io_dcg.m"
                  else
#line 547 "prog_io_dcg.m"
                    {
#line 547 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_138_138;
#line 547 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_139_139;
#line 547 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_144_144;
#line 547 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Spec_614;

#line 549 "prog_io_dcg.m"
                      {
#line 549 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_139_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 549 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_139_139, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 549 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_139_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[64])));
#line 549 "prog_io_dcg.m"
                      }
#line 549 "prog_io_dcg.m"
                      {
#line 549 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_138_138, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_139_139));
#line 549 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 549 "prog_io_dcg.m"
                      }
#line 548 "prog_io_dcg.m"
                      {
#line 548 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Spec_614 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 548 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_614, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 548 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_614, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 548 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_614, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_138_138));
#line 548 "prog_io_dcg.m"
                      }
#line 550 "prog_io_dcg.m"
                      {
#line 550 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_144_144, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_614));
#line 550 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_144_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 550 "prog_io_dcg.m"
                      }
#line 550 "prog_io_dcg.m"
                      {
#line 550 "prog_io_dcg.m"
                        MR_Word base;
#line 550 "prog_io_dcg.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 550 "prog_io_dcg.m"
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 550 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_144_144));
#line 550 "prog_io_dcg.m"
                      }
#line 547 "prog_io_dcg.m"
                    }
#line 535 "prog_io_dcg.m"
                }
#line 530 "prog_io_dcg.m"
              else
#line 557 "prog_io_dcg.m"
                {
#line 557 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_171_171;
#line 557 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_172_172;
#line 557 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_177_177;
#line 557 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__Spec_624;

#line 559 "prog_io_dcg.m"
                  {
#line 559 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 559 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_172_172, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 559 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_172_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[65])));
#line 559 "prog_io_dcg.m"
                  }
#line 559 "prog_io_dcg.m"
                  {
#line 559 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_171_171, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_172_172));
#line 559 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_171_171, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 559 "prog_io_dcg.m"
                  }
#line 558 "prog_io_dcg.m"
                  {
#line 558 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Spec_624 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 558 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_624, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 558 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_624, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 558 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_624, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_171_171));
#line 558 "prog_io_dcg.m"
                  }
#line 560 "prog_io_dcg.m"
                  {
#line 560 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 560 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_177_177, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_624));
#line 560 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_177_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 560 "prog_io_dcg.m"
                  }
#line 560 "prog_io_dcg.m"
                  {
#line 560 "prog_io_dcg.m"
                    MR_Word base;
#line 560 "prog_io_dcg.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 560 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 560 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_177_177));
#line 560 "prog_io_dcg.m"
                  }
#line 557 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
#line 557 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
#line 557 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
#line 557 "prog_io_dcg.m"
                }
#line 530 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 530 "prog_io_dcg.m"
            }
#line 530 "prog_io_dcg.m"
          }
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 7:
#line 237 "prog_io_dcg.m"
          {
#line 237 "prog_io_dcg.m"
            /* case "\+", "not" */
#line 237 "prog_io_dcg.m"
            {
#line 238 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTerm_442;
#line 238 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_415_415;

#line 238 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 238 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 238 "prog_io_dcg.m"
                {
#line 238 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__SubGoalTerm_442 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 238 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_415_415 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 238 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_415_415 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "prog_io_dcg.m"
                }
#line 238 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 240 "prog_io_dcg.m"
                {
#line 240 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__MaybeSubGoal_28;
#line 239 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_29_29;

#line 239 "prog_io_dcg.m"
                  {
#line 239 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTerm_442, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoal_28, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, &parse_tree__prog_io_dcg__V_29_29);
                  }
#line 244 "prog_io_dcg.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoal_28)) == (MR_mktag((MR_Integer) 0))))
#line 246 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = parse_tree__prog_io_dcg__MaybeSubGoal_28;
#line 244 "prog_io_dcg.m"
                  else
#line 242 "prog_io_dcg.m"
                    {
#line 242 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__SubGoal_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoal_28, (MR_Integer) 0)));
#line 242 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_418_418;

#line 243 "prog_io_dcg.m"
                      {
#line 243 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_418_418 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 243 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_418_418, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 243 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_418_418, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 243 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_418_418, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_30));
#line 243 "prog_io_dcg.m"
                      }
#line 243 "prog_io_dcg.m"
                      {
#line 243 "prog_io_dcg.m"
                        MR_Word base;
#line 243 "prog_io_dcg.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 243 "prog_io_dcg.m"
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 243 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_418_418));
#line 243 "prog_io_dcg.m"
                      }
#line 242 "prog_io_dcg.m"
                    }
#line 240 "prog_io_dcg.m"
                }
#line 238 "prog_io_dcg.m"
              else
#line 250 "prog_io_dcg.m"
                {
#line 250 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_419_419;
#line 250 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__Spec_441;

#line 249 "prog_io_dcg.m"
                  {
#line 249 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Spec_441 = parse_tree__prog_io_goal__should_have_one_goal_prefix_3_f_0(parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__Functor_12);
                  }
#line 251 "prog_io_dcg.m"
                  {
#line 251 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_419_419 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_419_419, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_441));
#line 251 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_419_419, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 251 "prog_io_dcg.m"
                  }
#line 251 "prog_io_dcg.m"
                  {
#line 251 "prog_io_dcg.m"
                    MR_Word base;
#line 251 "prog_io_dcg.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 251 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 251 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_419_419));
#line 251 "prog_io_dcg.m"
                  }
#line 250 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
#line 250 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
#line 250 "prog_io_dcg.m"
                }
#line 237 "prog_io_dcg.m"
              *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
#line 237 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 237 "prog_io_dcg.m"
            }
#line 237 "prog_io_dcg.m"
          }
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 8:
#line 265 "prog_io_dcg.m"
          {
#line 265 "prog_io_dcg.m"
            /* case "all" */
#line 265 "prog_io_dcg.m"
            {
#line 266 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__QVarsTerm_34;
#line 266 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTerm_456;
#line 266 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_400_400;
#line 266 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_401_401;

#line 266 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 266 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 266 "prog_io_dcg.m"
                {
#line 266 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__QVarsTerm_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 266 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_400_400 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 266 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_400_400)) == (MR_mktag((MR_Integer) 1)));
#line 266 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 266 "prog_io_dcg.m"
                    {
#line 266 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__SubGoalTerm_456 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_400_400, (MR_Integer) 0)));
#line 266 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_401_401 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_400_400, (MR_Integer) 1)));
#line 266 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_401_401 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 266 "prog_io_dcg.m"
                    }
#line 266 "prog_io_dcg.m"
                }
#line 266 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 267 "prog_io_dcg.m"
                {
#line 267 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_658_658 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 267 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_659_659;
#line 267 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__GenericVarSet_35;
#line 267 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__VarsContextPieces_36;
#line 267 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__MaybeStateVarsAndVars_37;
#line 267 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_402_402;
#line 267 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__MaybeSubGoal_453;
#line 274 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__Vars0_38;
#line 274 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__StateVars0_39;
#line 274 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__SubGoal_450;

#line 267 "prog_io_dcg.m"
                  {
#line 267 "prog_io_dcg.m"
                    mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__TypeCtorInfo_658_658, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, &parse_tree__prog_io_dcg__GenericVarSet_35);
                  }
#line 4812 "parse_tree.prog_io_dcg.c"
                  parse_tree__prog_io_dcg__TypeCtorInfo_659_659 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 269 "prog_io_dcg.m"
                  {
#line 269 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_402_402 = mercury__cord__from_list_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_659_659, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[42]));
                  }
#line 268 "prog_io_dcg.m"
                  {
#line 268 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__VarsContextPieces_36 = mercury__cord__f_43_43_2_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_659_659, parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__V_402_402);
                  }
#line 270 "prog_io_dcg.m"
                  {
#line 270 "prog_io_dcg.m"
                    parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_658_658, parse_tree__prog_io_dcg__QVarsTerm_34, parse_tree__prog_io_dcg__GenericVarSet_35, parse_tree__prog_io_dcg__VarsContextPieces_36, &parse_tree__prog_io_dcg__MaybeStateVarsAndVars_37);
                  }
#line 272 "prog_io_dcg.m"
                  {
#line 272 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTerm_456, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoal_453, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
#line 275 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeStateVarsAndVars_37)) == (MR_mktag((MR_Integer) 1)));
#line 275 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 275 "prog_io_dcg.m"
                    {
#line 275 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__Vars0_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeStateVarsAndVars_37, (MR_Integer) 0)));
#line 275 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__StateVars0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeStateVarsAndVars_37, (MR_Integer) 1)));
#line 276 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoal_453)) == (MR_mktag((MR_Integer) 1)));
#line 276 "prog_io_dcg.m"
                      if (parse_tree__prog_io_dcg__succeeded)
#line 276 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__SubGoal_450 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoal_453, (MR_Integer) 0)));
#line 275 "prog_io_dcg.m"
                    }
#line 274 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 278 "prog_io_dcg.m"
                    {
#line 278 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__TypeInfo_664_664 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 278 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__TypeInfo_665_665 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3];
#line 278 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__StateVars_40;
#line 278 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Vars_41;
#line 278 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Goal1_42;
#line 278 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Goal_446;

#line 278 "prog_io_dcg.m"
                      {
#line 278 "prog_io_dcg.m"
                        mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_664_664, parse_tree__prog_io_dcg__TypeInfo_665_665, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[3], parse_tree__prog_io_dcg__StateVars0_39, &parse_tree__prog_io_dcg__StateVars_40);
                      }
#line 279 "prog_io_dcg.m"
                      {
#line 279 "prog_io_dcg.m"
                        mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_664_664, parse_tree__prog_io_dcg__TypeInfo_665_665, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[4], parse_tree__prog_io_dcg__Vars0_38, &parse_tree__prog_io_dcg__Vars_41);
                      }
#line 283 "prog_io_dcg.m"
                      if ((parse_tree__prog_io_dcg__StateVars_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 282 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Goal1_42 = parse_tree__prog_io_dcg__SubGoal_450;
#line 283 "prog_io_dcg.m"
                      else
#line 284 "prog_io_dcg.m"
                        {
#line 285 "prog_io_dcg.m"
                          {
#line 285 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__Goal1_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 285 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 285 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_42, 1) = ((MR_Box) (((MR_Integer) 1 | (((MR_Integer) 1 << (MR_Integer) 1)))));
#line 285 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_42, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 285 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_42, 3) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_40));
#line 285 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_42, 4) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_450));
#line 285 "prog_io_dcg.m"
                          }
#line 284 "prog_io_dcg.m"
                        }
#line 291 "prog_io_dcg.m"
                      if ((parse_tree__prog_io_dcg__Vars_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 290 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Goal_446 = parse_tree__prog_io_dcg__Goal1_42;
#line 291 "prog_io_dcg.m"
                      else
#line 292 "prog_io_dcg.m"
                        {
#line 293 "prog_io_dcg.m"
                          {
#line 293 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__Goal_446 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 293 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_446, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 293 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_446, 1) = ((MR_Box) (((MR_Integer) 1 | (((MR_Integer) 0 << (MR_Integer) 1)))));
#line 293 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_446, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 293 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_446, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_41));
#line 293 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_446, 4) = ((MR_Box) (parse_tree__prog_io_dcg__Goal1_42));
#line 293 "prog_io_dcg.m"
                          }
#line 292 "prog_io_dcg.m"
                        }
#line 296 "prog_io_dcg.m"
                      {
#line 296 "prog_io_dcg.m"
                        MR_Word base;
#line 296 "prog_io_dcg.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 296 "prog_io_dcg.m"
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 296 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_446));
#line 296 "prog_io_dcg.m"
                      }
#line 278 "prog_io_dcg.m"
                    }
#line 274 "prog_io_dcg.m"
                  else
#line 299 "prog_io_dcg.m"
                    {
#line 299 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__TypeInfo_671_671 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[4];
#line 299 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_410_410;
#line 299 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_411_411;
#line 299 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Specs_447;

#line 298 "prog_io_dcg.m"
                      {
#line 298 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_410_410 = parse_tree__maybe_error__get_any_errors2_1_f_0(parse_tree__prog_io_dcg__TypeInfo_671_671, parse_tree__prog_io_dcg__TypeInfo_671_671, parse_tree__prog_io_dcg__MaybeStateVarsAndVars_37);
                      }
#line 299 "prog_io_dcg.m"
                      {
#line 299 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_411_411 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, parse_tree__prog_io_dcg__MaybeSubGoal_453);
                      }
#line 298 "prog_io_dcg.m"
                      {
#line 298 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Specs_447 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__V_410_410, parse_tree__prog_io_dcg__V_411_411);
                      }
#line 300 "prog_io_dcg.m"
                      {
#line 300 "prog_io_dcg.m"
                        MR_Word base;
#line 300 "prog_io_dcg.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 300 "prog_io_dcg.m"
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 300 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Specs_447));
#line 300 "prog_io_dcg.m"
                      }
#line 299 "prog_io_dcg.m"
                    }
#line 267 "prog_io_dcg.m"
                }
#line 266 "prog_io_dcg.m"
              else
#line 304 "prog_io_dcg.m"
                {
#line 304 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_413_413;
#line 304 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__Spec_455;

#line 303 "prog_io_dcg.m"
                  {
#line 303 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Spec_455 = parse_tree__prog_io_goal__should_have_one_x_one_goal_prefix_4_f_0(parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__Context_14, (MR_String) "a list of variables", parse_tree__prog_io_dcg__Functor_12);
                  }
#line 305 "prog_io_dcg.m"
                  {
#line 305 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_413_413 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_413_413, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_455));
#line 305 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_413_413, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 305 "prog_io_dcg.m"
                  }
#line 305 "prog_io_dcg.m"
                  {
#line 305 "prog_io_dcg.m"
                    MR_Word base;
#line 305 "prog_io_dcg.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 305 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 305 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_413_413));
#line 305 "prog_io_dcg.m"
                  }
#line 304 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
#line 304 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
#line 304 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
#line 304 "prog_io_dcg.m"
                }
#line 265 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 265 "prog_io_dcg.m"
            }
#line 265 "prog_io_dcg.m"
          }
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 9:
#line 429 "prog_io_dcg.m"
          {
#line 429 "prog_io_dcg.m"
            /* case "else" */
#line 429 "prog_io_dcg.m"
            {
#line 429 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__ElseGoalTerm_66;
#line 429 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__CondContext_68;
#line 429 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__CondGoalTerm_556;
#line 429 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__ThenGoalTerm_557;
#line 430 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__CondThenTerm_65;
#line 430 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_283_283;
#line 430 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_284_284;
#line 430 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_285_285;
#line 430 "prog_io_dcg.m"
              MR_String parse_tree__prog_io_dcg__V_286_286;
#line 430 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_287_287;
#line 430 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_288_288;
#line 430 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_289_289;
#line 430 "prog_io_dcg.m"
              MR_String parse_tree__prog_io_dcg__V_290_290;
#line 430 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_291_291;
#line 430 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_292_292;
#line 430 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_293_293;
#line 430 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_294_294;
#line 432 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_67_67;

#line 430 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 430 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 430 "prog_io_dcg.m"
                {
#line 430 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__CondThenTerm_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 430 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 430 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_283_283)) == (MR_mktag((MR_Integer) 1)));
#line 430 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 430 "prog_io_dcg.m"
                    {
#line 430 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__ElseGoalTerm_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_283_283, (MR_Integer) 0)));
#line 430 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_283_283, (MR_Integer) 1)));
#line 430 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_284_284 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 430 "prog_io_dcg.m"
                      if (parse_tree__prog_io_dcg__succeeded)
#line 430 "prog_io_dcg.m"
                        {
#line 431 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__CondThenTerm_65)) == (MR_mktag((MR_Integer) 0)));
#line 431 "prog_io_dcg.m"
                          if (parse_tree__prog_io_dcg__succeeded)
#line 431 "prog_io_dcg.m"
                            {
#line 431 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__CondThenTerm_65, (MR_Integer) 0)));
#line 431 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__CondThenTerm_65, (MR_Integer) 1)));
#line 431 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__CondContext_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__CondThenTerm_65, (MR_Integer) 2)));
#line 431 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_285_285)) == (MR_mktag((MR_Integer) 0)));
#line 431 "prog_io_dcg.m"
                              if (parse_tree__prog_io_dcg__succeeded)
#line 431 "prog_io_dcg.m"
                                {
#line 431 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__V_286_286 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_285_285, (MR_Integer) 0)));
#line 431 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_286_286, (MR_String) "if") == 0);
#line 430 "prog_io_dcg.m"
                                  if (parse_tree__prog_io_dcg__succeeded)
#line 430 "prog_io_dcg.m"
                                    {
#line 433 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_287_287)) == (MR_mktag((MR_Integer) 1)));
#line 433 "prog_io_dcg.m"
                                      if (parse_tree__prog_io_dcg__succeeded)
#line 433 "prog_io_dcg.m"
                                        {
#line 433 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_287_287, (MR_Integer) 0)));
#line 433 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_287_287, (MR_Integer) 1)));
#line 433 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_294_294 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 430 "prog_io_dcg.m"
                                          if (parse_tree__prog_io_dcg__succeeded)
#line 430 "prog_io_dcg.m"
                                            {
#line 432 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_288_288)) == (MR_mktag((MR_Integer) 0)));
#line 432 "prog_io_dcg.m"
                                              if (parse_tree__prog_io_dcg__succeeded)
#line 432 "prog_io_dcg.m"
                                                {
#line 432 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_288_288, (MR_Integer) 0)));
#line 432 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_288_288, (MR_Integer) 1)));
#line 432 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_288_288, (MR_Integer) 2)));
#line 432 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_289_289)) == (MR_mktag((MR_Integer) 0)));
#line 432 "prog_io_dcg.m"
                                                  if (parse_tree__prog_io_dcg__succeeded)
#line 432 "prog_io_dcg.m"
                                                    {
#line 432 "prog_io_dcg.m"
                                                      parse_tree__prog_io_dcg__V_290_290 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_289_289, (MR_Integer) 0)));
#line 432 "prog_io_dcg.m"
                                                      parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_290_290, (MR_String) "then") == 0);
#line 430 "prog_io_dcg.m"
                                                      if (parse_tree__prog_io_dcg__succeeded)
#line 430 "prog_io_dcg.m"
                                                        {
#line 433 "prog_io_dcg.m"
                                                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_291_291)) == (MR_mktag((MR_Integer) 1)));
#line 433 "prog_io_dcg.m"
                                                          if (parse_tree__prog_io_dcg__succeeded)
#line 433 "prog_io_dcg.m"
                                                            {
#line 433 "prog_io_dcg.m"
                                                              parse_tree__prog_io_dcg__CondGoalTerm_556 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_291_291, (MR_Integer) 0)));
#line 433 "prog_io_dcg.m"
                                                              parse_tree__prog_io_dcg__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_291_291, (MR_Integer) 1)));
#line 433 "prog_io_dcg.m"
                                                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_292_292)) == (MR_mktag((MR_Integer) 1)));
#line 433 "prog_io_dcg.m"
                                                              if (parse_tree__prog_io_dcg__succeeded)
#line 433 "prog_io_dcg.m"
                                                                {
#line 433 "prog_io_dcg.m"
                                                                  parse_tree__prog_io_dcg__ThenGoalTerm_557 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_292_292, (MR_Integer) 0)));
#line 433 "prog_io_dcg.m"
                                                                  parse_tree__prog_io_dcg__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_292_292, (MR_Integer) 1)));
#line 433 "prog_io_dcg.m"
                                                                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_293_293 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 433 "prog_io_dcg.m"
                                                                }
#line 433 "prog_io_dcg.m"
                                                            }
#line 430 "prog_io_dcg.m"
                                                        }
#line 432 "prog_io_dcg.m"
                                                    }
#line 432 "prog_io_dcg.m"
                                                }
#line 430 "prog_io_dcg.m"
                                            }
#line 433 "prog_io_dcg.m"
                                        }
#line 430 "prog_io_dcg.m"
                                    }
#line 431 "prog_io_dcg.m"
                                }
#line 431 "prog_io_dcg.m"
                            }
#line 430 "prog_io_dcg.m"
                        }
#line 430 "prog_io_dcg.m"
                    }
#line 430 "prog_io_dcg.m"
                }
#line 429 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 436 "prog_io_dcg.m"
                {
#line 436 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__parse_dcg_if_then_else_12_p_0(parse_tree__prog_io_dcg__CondGoalTerm_556, parse_tree__prog_io_dcg__ThenGoalTerm_557, parse_tree__prog_io_dcg__ElseGoalTerm_66, parse_tree__prog_io_dcg__CondContext_68, parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__MaybeGoal_16, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                }
#line 429 "prog_io_dcg.m"
              else
#line 442 "prog_io_dcg.m"
                {
#line 442 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_320_320;
#line 442 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_321_321;
#line 442 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_326_326;
#line 442 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__Spec_554;

#line 444 "prog_io_dcg.m"
                  {
#line 444 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_321_321 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_321_321, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 444 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_321_321, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[66])));
#line 444 "prog_io_dcg.m"
                  }
#line 444 "prog_io_dcg.m"
                  {
#line 444 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_320_320 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_320_320, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_321_321));
#line 444 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_320_320, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 444 "prog_io_dcg.m"
                  }
#line 443 "prog_io_dcg.m"
                  {
#line 443 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Spec_554 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 443 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_554, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 443 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_554, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 443 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_554, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_320_320));
#line 443 "prog_io_dcg.m"
                  }
#line 445 "prog_io_dcg.m"
                  {
#line 445 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_326_326 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 445 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_326_326, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_554));
#line 445 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_326_326, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 445 "prog_io_dcg.m"
                  }
#line 445 "prog_io_dcg.m"
                  {
#line 445 "prog_io_dcg.m"
                    MR_Word base;
#line 445 "prog_io_dcg.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 445 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 445 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_326_326));
#line 445 "prog_io_dcg.m"
                  }
#line 442 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
#line 442 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
#line 442 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
#line 442 "prog_io_dcg.m"
                }
#line 429 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 429 "prog_io_dcg.m"
            }
#line 429 "prog_io_dcg.m"
          }
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 10:
#line 450 "prog_io_dcg.m"
          {
#line 450 "prog_io_dcg.m"
            /* case "if" */
#line 450 "prog_io_dcg.m"
            {
#line 450 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__CondGoalTerm_578;
#line 450 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__ThenGoalTerm_579;
#line 451 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_238_238;
#line 451 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_239_239;
#line 451 "prog_io_dcg.m"
              MR_String parse_tree__prog_io_dcg__V_240_240;
#line 451 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_241_241;
#line 451 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_242_242;
#line 451 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_243_243;
#line 451 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_244_244;
#line 451 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_70_70;

#line 452 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 452 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 452 "prog_io_dcg.m"
                {
#line 452 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 452 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 452 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_244_244 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 451 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 451 "prog_io_dcg.m"
                    {
#line 451 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_238_238)) == (MR_mktag((MR_Integer) 0)));
#line 451 "prog_io_dcg.m"
                      if (parse_tree__prog_io_dcg__succeeded)
#line 451 "prog_io_dcg.m"
                        {
#line 451 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_238_238, (MR_Integer) 0)));
#line 451 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_238_238, (MR_Integer) 1)));
#line 451 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_238_238, (MR_Integer) 2)));
#line 451 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_239_239)) == (MR_mktag((MR_Integer) 0)));
#line 451 "prog_io_dcg.m"
                          if (parse_tree__prog_io_dcg__succeeded)
#line 451 "prog_io_dcg.m"
                            {
#line 451 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__V_240_240 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_239_239, (MR_Integer) 0)));
#line 451 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_240_240, (MR_String) "then") == 0);
#line 451 "prog_io_dcg.m"
                              if (parse_tree__prog_io_dcg__succeeded)
#line 451 "prog_io_dcg.m"
                                {
#line 452 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_241_241)) == (MR_mktag((MR_Integer) 1)));
#line 452 "prog_io_dcg.m"
                                  if (parse_tree__prog_io_dcg__succeeded)
#line 452 "prog_io_dcg.m"
                                    {
#line 452 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__CondGoalTerm_578 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_241_241, (MR_Integer) 0)));
#line 452 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_241_241, (MR_Integer) 1)));
#line 452 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_242_242)) == (MR_mktag((MR_Integer) 1)));
#line 452 "prog_io_dcg.m"
                                      if (parse_tree__prog_io_dcg__succeeded)
#line 452 "prog_io_dcg.m"
                                        {
#line 452 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__ThenGoalTerm_579 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_242_242, (MR_Integer) 0)));
#line 452 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_242_242, (MR_Integer) 1)));
#line 452 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_243_243 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 452 "prog_io_dcg.m"
                                        }
#line 452 "prog_io_dcg.m"
                                    }
#line 451 "prog_io_dcg.m"
                                }
#line 451 "prog_io_dcg.m"
                            }
#line 451 "prog_io_dcg.m"
                        }
#line 451 "prog_io_dcg.m"
                    }
#line 452 "prog_io_dcg.m"
                }
#line 450 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 454 "prog_io_dcg.m"
                {
#line 454 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__MaybeVarsCondGoal_72;
#line 454 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__MaybeThenGoal_73;
#line 459 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__CondGoal_75;
#line 459 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__ThenGoal_76;
#line 459 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__StateVars_565;
#line 459 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__Vars_566;

#line 455 "prog_io_dcg.m"
                  {
#line 455 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__parse_dcg_if_then_12_p_0(parse_tree__prog_io_dcg__CondGoalTerm_578, parse_tree__prog_io_dcg__ThenGoalTerm_579, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeVarsCondGoal_72, &parse_tree__prog_io_dcg__MaybeThenGoal_73, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
#line 460 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeVarsCondGoal_72)) == (MR_mktag((MR_Integer) 1)));
#line 460 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 460 "prog_io_dcg.m"
                    {
#line 460 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__Vars_566 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCondGoal_72, (MR_Integer) 0)));
#line 460 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__StateVars_565 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCondGoal_72, (MR_Integer) 1)));
#line 460 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__CondGoal_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCondGoal_72, (MR_Integer) 2)));
#line 461 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeThenGoal_73)) == (MR_mktag((MR_Integer) 1)));
#line 461 "prog_io_dcg.m"
                      if (parse_tree__prog_io_dcg__succeeded)
#line 461 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__ThenGoal_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeThenGoal_73, (MR_Integer) 0)));
#line 460 "prog_io_dcg.m"
                    }
#line 459 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 470 "prog_io_dcg.m"
                    {
#line 470 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__ElseGoal_77;
#line 470 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Goal_561;

#line 463 "prog_io_dcg.m"
                      {
#line 463 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3], ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98)), ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97)));
                      }
#line 463 "prog_io_dcg.m"
                      if (parse_tree__prog_io_dcg__succeeded)
#line 464 "prog_io_dcg.m"
                        {
#line 464 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__ElseGoal_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__ElseGoal_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 464 "prog_io_dcg.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__ElseGoal_77, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 464 "prog_io_dcg.m"
                        }
#line 463 "prog_io_dcg.m"
                      else
#line 466 "prog_io_dcg.m"
                        {
#line 466 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__V_248_248;
#line 466 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__V_249_249;

#line 467 "prog_io_dcg.m"
                          {
#line 467 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__V_248_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_248_248, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98));
#line 467 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_248_248, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 467 "prog_io_dcg.m"
                          }
#line 468 "prog_io_dcg.m"
                          {
#line 468 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__V_249_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_249_249, 0) = ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97));
#line 468 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_249_249, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 468 "prog_io_dcg.m"
                          }
#line 466 "prog_io_dcg.m"
                          {
#line 466 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__ElseGoal_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 466 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ElseGoal_77, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 466 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ElseGoal_77, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_248_248));
#line 466 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ElseGoal_77, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_249_249));
#line 466 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ElseGoal_77, 3) = ((MR_Box) ((MR_Integer) 0));
#line 466 "prog_io_dcg.m"
                          }
#line 466 "prog_io_dcg.m"
                        }
#line 471 "prog_io_dcg.m"
                      {
#line 471 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Goal_561 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 471 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_561, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 471 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_561, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 471 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_561, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_566));
#line 471 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_561, 3) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_565));
#line 471 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_561, 4) = ((MR_Box) (parse_tree__prog_io_dcg__CondGoal_75));
#line 471 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_561, 5) = ((MR_Box) (parse_tree__prog_io_dcg__ThenGoal_76));
#line 471 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_561, 6) = ((MR_Box) (parse_tree__prog_io_dcg__ElseGoal_77));
#line 471 "prog_io_dcg.m"
                      }
#line 473 "prog_io_dcg.m"
                      {
#line 473 "prog_io_dcg.m"
                        MR_Word base;
#line 473 "prog_io_dcg.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 473 "prog_io_dcg.m"
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 473 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_561));
#line 473 "prog_io_dcg.m"
                      }
#line 470 "prog_io_dcg.m"
                    }
#line 459 "prog_io_dcg.m"
                  else
#line 476 "prog_io_dcg.m"
                    {
#line 476 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__TypeInfo_680_680 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[5];
#line 476 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_681_681 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
#line 476 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_251_251;
#line 476 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_252_252;
#line 476 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Specs_562;

#line 475 "prog_io_dcg.m"
                      {
#line 475 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_251_251 = parse_tree__maybe_error__get_any_errors3_1_f_0(parse_tree__prog_io_dcg__TypeInfo_680_680, parse_tree__prog_io_dcg__TypeInfo_680_680, parse_tree__prog_io_dcg__TypeCtorInfo_681_681, parse_tree__prog_io_dcg__MaybeVarsCondGoal_72);
                      }
#line 476 "prog_io_dcg.m"
                      {
#line 476 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_252_252 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_681_681, parse_tree__prog_io_dcg__MaybeThenGoal_73);
                      }
#line 475 "prog_io_dcg.m"
                      {
#line 475 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Specs_562 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__V_251_251, parse_tree__prog_io_dcg__V_252_252);
                      }
#line 477 "prog_io_dcg.m"
                      {
#line 477 "prog_io_dcg.m"
                        MR_Word base;
#line 477 "prog_io_dcg.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 477 "prog_io_dcg.m"
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 477 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Specs_562));
#line 477 "prog_io_dcg.m"
                      }
#line 476 "prog_io_dcg.m"
                    }
#line 454 "prog_io_dcg.m"
                }
#line 450 "prog_io_dcg.m"
              else
#line 482 "prog_io_dcg.m"
                {
#line 482 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_275_275;
#line 482 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_276_276;
#line 482 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_281_281;
#line 482 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__Spec_571;

#line 484 "prog_io_dcg.m"
                  {
#line 484 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_276_276 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 484 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_276_276, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 484 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_276_276, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[66])));
#line 484 "prog_io_dcg.m"
                  }
#line 484 "prog_io_dcg.m"
                  {
#line 484 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_275_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_275_275, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_276_276));
#line 484 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_275_275, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 484 "prog_io_dcg.m"
                  }
#line 483 "prog_io_dcg.m"
                  {
#line 483 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Spec_571 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 483 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_571, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 483 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_571, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 483 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_571, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_275_275));
#line 483 "prog_io_dcg.m"
                  }
#line 485 "prog_io_dcg.m"
                  {
#line 485 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_281_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_281_281, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_571));
#line 485 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_281_281, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 485 "prog_io_dcg.m"
                  }
#line 485 "prog_io_dcg.m"
                  {
#line 485 "prog_io_dcg.m"
                    MR_Word base;
#line 485 "prog_io_dcg.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 485 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 485 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_281_281));
#line 485 "prog_io_dcg.m"
                  }
#line 482 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
#line 482 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
#line 482 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
#line 482 "prog_io_dcg.m"
                }
#line 450 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 450 "prog_io_dcg.m"
            }
#line 450 "prog_io_dcg.m"
          }
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 11:
#line 196 "prog_io_dcg.m"
          {
#line 196 "prog_io_dcg.m"
            /* case "impure" */
#line 196 "prog_io_dcg.m"
            {
#line 197 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTerm_21;
#line 197 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_427_427;

#line 197 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 197 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 197 "prog_io_dcg.m"
                {
#line 197 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__SubGoalTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 197 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_427_427 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 197 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_427_427 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 197 "prog_io_dcg.m"
                }
#line 197 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 199 "prog_io_dcg.m"
                {
#line 199 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__MaybeGoal0_22;

#line 198 "prog_io_dcg.m"
                  {
#line 198 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTerm_21, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeGoal0_22, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
#line 200 "prog_io_dcg.m"
                  {
#line 200 "prog_io_dcg.m"
                    parse_tree__prog_io_goal__apply_purity_marker_to_maybe_goal_4_p_0(parse_tree__prog_io_dcg__SubGoalTerm_21, (MR_Integer) 2, parse_tree__prog_io_dcg__MaybeGoal0_22, parse_tree__prog_io_dcg__MaybeGoal_16);
                  }
#line 199 "prog_io_dcg.m"
                }
#line 197 "prog_io_dcg.m"
              else
#line 204 "prog_io_dcg.m"
                {
#line 204 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__Spec_23;
#line 204 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_431_431;

#line 203 "prog_io_dcg.m"
                  {
#line 203 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Spec_23 = parse_tree__prog_io_goal__should_have_one_goal_prefix_3_f_0(parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__Functor_12);
                  }
#line 205 "prog_io_dcg.m"
                  {
#line 205 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_431_431 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_431_431, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_23));
#line 205 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_431_431, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "prog_io_dcg.m"
                  }
#line 205 "prog_io_dcg.m"
                  {
#line 205 "prog_io_dcg.m"
                    MR_Word base;
#line 205 "prog_io_dcg.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 205 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 205 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_431_431));
#line 205 "prog_io_dcg.m"
                  }
#line 204 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
#line 204 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
#line 204 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
#line 204 "prog_io_dcg.m"
                }
#line 196 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 196 "prog_io_dcg.m"
            }
#line 196 "prog_io_dcg.m"
          }
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 12:
#line 217 "prog_io_dcg.m"
          {
#line 217 "prog_io_dcg.m"
            /* case "promise_impure" */
#line 217 "prog_io_dcg.m"
            {
#line 218 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTerm_435;
#line 218 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_421_421;

#line 218 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 218 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 218 "prog_io_dcg.m"
                {
#line 218 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__SubGoalTerm_435 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 218 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_421_421 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 218 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_421_421 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "prog_io_dcg.m"
                }
#line 218 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 220 "prog_io_dcg.m"
                {
#line 220 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__MaybeGoal0_433;

#line 219 "prog_io_dcg.m"
                  {
#line 219 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTerm_435, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeGoal0_433, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
#line 225 "prog_io_dcg.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal0_433)) == (MR_mktag((MR_Integer) 0))))
#line 227 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = parse_tree__prog_io_dcg__MaybeGoal0_433;
#line 225 "prog_io_dcg.m"
                  else
#line 222 "prog_io_dcg.m"
                    {
#line 222 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Goal0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal0_433, (MR_Integer) 0)));
#line 222 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Goal_26;

#line 223 "prog_io_dcg.m"
                      {
#line 223 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Goal_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 223 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 223 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_26, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 223 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_26, 2) = ((MR_Box) ((MR_Integer) 2));
#line 223 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_26, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Goal0_25));
#line 223 "prog_io_dcg.m"
                      }
#line 224 "prog_io_dcg.m"
                      {
#line 224 "prog_io_dcg.m"
                        MR_Word base;
#line 224 "prog_io_dcg.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 224 "prog_io_dcg.m"
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 224 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_26));
#line 224 "prog_io_dcg.m"
                      }
#line 222 "prog_io_dcg.m"
                    }
#line 220 "prog_io_dcg.m"
                }
#line 218 "prog_io_dcg.m"
              else
#line 231 "prog_io_dcg.m"
                {
#line 231 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_425_425;
#line 231 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__Spec_434;

#line 230 "prog_io_dcg.m"
                  {
#line 230 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Spec_434 = parse_tree__prog_io_goal__should_have_one_goal_prefix_3_f_0(parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__Functor_12);
                  }
#line 232 "prog_io_dcg.m"
                  {
#line 232 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_425_425 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_425_425, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_434));
#line 232 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_425_425, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 232 "prog_io_dcg.m"
                  }
#line 232 "prog_io_dcg.m"
                  {
#line 232 "prog_io_dcg.m"
                    MR_Word base;
#line 232 "prog_io_dcg.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 232 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 232 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_425_425));
#line 232 "prog_io_dcg.m"
                  }
#line 231 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
#line 231 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
#line 231 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
#line 231 "prog_io_dcg.m"
                }
#line 217 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 217 "prog_io_dcg.m"
            }
#line 217 "prog_io_dcg.m"
          }
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 13:
#line 217 "prog_io_dcg.m"
          {
#line 217 "prog_io_dcg.m"
            /* case "promise_pure" */
#line 217 "prog_io_dcg.m"
            {
#line 218 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTerm_717;
#line 218 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_695_695;

#line 218 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 218 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 218 "prog_io_dcg.m"
                {
#line 218 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__SubGoalTerm_717 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 218 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_695_695 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 218 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_695_695 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "prog_io_dcg.m"
                }
#line 218 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 220 "prog_io_dcg.m"
                {
#line 220 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__MaybeGoal0_705;

#line 219 "prog_io_dcg.m"
                  {
#line 219 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTerm_717, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeGoal0_705, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
#line 225 "prog_io_dcg.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal0_705)) == (MR_mktag((MR_Integer) 0))))
#line 227 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = parse_tree__prog_io_dcg__MaybeGoal0_705;
#line 225 "prog_io_dcg.m"
                  else
#line 222 "prog_io_dcg.m"
                    {
#line 222 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Goal0_697 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal0_705, (MR_Integer) 0)));
#line 222 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Goal_698;

#line 223 "prog_io_dcg.m"
                      {
#line 223 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Goal_698 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 223 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_698, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 223 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_698, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 223 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_698, 2) = ((MR_Box) ((MR_Integer) 0));
#line 223 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_698, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Goal0_697));
#line 223 "prog_io_dcg.m"
                      }
#line 224 "prog_io_dcg.m"
                      {
#line 224 "prog_io_dcg.m"
                        MR_Word base;
#line 224 "prog_io_dcg.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 224 "prog_io_dcg.m"
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 224 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_698));
#line 224 "prog_io_dcg.m"
                      }
#line 222 "prog_io_dcg.m"
                    }
#line 220 "prog_io_dcg.m"
                }
#line 218 "prog_io_dcg.m"
              else
#line 231 "prog_io_dcg.m"
                {
#line 231 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_706_706;
#line 231 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__Spec_708;

#line 230 "prog_io_dcg.m"
                  {
#line 230 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Spec_708 = parse_tree__prog_io_goal__should_have_one_goal_prefix_3_f_0(parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__Functor_12);
                  }
#line 232 "prog_io_dcg.m"
                  {
#line 232 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_706_706 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_706_706, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_708));
#line 232 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_706_706, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 232 "prog_io_dcg.m"
                  }
#line 232 "prog_io_dcg.m"
                  {
#line 232 "prog_io_dcg.m"
                    MR_Word base;
#line 232 "prog_io_dcg.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 232 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 232 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_706_706));
#line 232 "prog_io_dcg.m"
                  }
#line 231 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
#line 231 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
#line 231 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
#line 231 "prog_io_dcg.m"
                }
#line 217 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 217 "prog_io_dcg.m"
            }
#line 217 "prog_io_dcg.m"
          }
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 14:
#line 217 "prog_io_dcg.m"
          {
#line 217 "prog_io_dcg.m"
            /* case "promise_semipure" */
#line 217 "prog_io_dcg.m"
            {
#line 218 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTerm_750;
#line 218 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_728_728;

#line 218 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 218 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 218 "prog_io_dcg.m"
                {
#line 218 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__SubGoalTerm_750 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 218 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_728_728 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 218 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_728_728 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "prog_io_dcg.m"
                }
#line 218 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 220 "prog_io_dcg.m"
                {
#line 220 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__MaybeGoal0_738;

#line 219 "prog_io_dcg.m"
                  {
#line 219 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTerm_750, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeGoal0_738, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
#line 225 "prog_io_dcg.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal0_738)) == (MR_mktag((MR_Integer) 0))))
#line 227 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = parse_tree__prog_io_dcg__MaybeGoal0_738;
#line 225 "prog_io_dcg.m"
                  else
#line 222 "prog_io_dcg.m"
                    {
#line 222 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Goal0_730 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal0_738, (MR_Integer) 0)));
#line 222 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Goal_731;

#line 223 "prog_io_dcg.m"
                      {
#line 223 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Goal_731 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 223 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_731, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 223 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_731, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 223 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_731, 2) = ((MR_Box) ((MR_Integer) 1));
#line 223 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_731, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Goal0_730));
#line 223 "prog_io_dcg.m"
                      }
#line 224 "prog_io_dcg.m"
                      {
#line 224 "prog_io_dcg.m"
                        MR_Word base;
#line 224 "prog_io_dcg.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 224 "prog_io_dcg.m"
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 224 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_731));
#line 224 "prog_io_dcg.m"
                      }
#line 222 "prog_io_dcg.m"
                    }
#line 220 "prog_io_dcg.m"
                }
#line 218 "prog_io_dcg.m"
              else
#line 231 "prog_io_dcg.m"
                {
#line 231 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_739_739;
#line 231 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__Spec_741;

#line 230 "prog_io_dcg.m"
                  {
#line 230 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Spec_741 = parse_tree__prog_io_goal__should_have_one_goal_prefix_3_f_0(parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__Functor_12);
                  }
#line 232 "prog_io_dcg.m"
                  {
#line 232 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_739_739 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_739_739, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_741));
#line 232 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_739_739, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 232 "prog_io_dcg.m"
                  }
#line 232 "prog_io_dcg.m"
                  {
#line 232 "prog_io_dcg.m"
                    MR_Word base;
#line 232 "prog_io_dcg.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 232 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 232 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_739_739));
#line 232 "prog_io_dcg.m"
                  }
#line 231 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
#line 231 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
#line 231 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
#line 231 "prog_io_dcg.m"
                }
#line 217 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 217 "prog_io_dcg.m"
            }
#line 217 "prog_io_dcg.m"
          }
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 15:
#line 196 "prog_io_dcg.m"
          {
#line 196 "prog_io_dcg.m"
            /* case "semipure" */
#line 196 "prog_io_dcg.m"
            {
#line 197 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTerm_766;
#line 197 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_761_761;

#line 197 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 197 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 197 "prog_io_dcg.m"
                {
#line 197 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__SubGoalTerm_766 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 197 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_761_761 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 197 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_761_761 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 197 "prog_io_dcg.m"
                }
#line 197 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 199 "prog_io_dcg.m"
                {
#line 199 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__MaybeGoal0_762;

#line 198 "prog_io_dcg.m"
                  {
#line 198 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTerm_766, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeGoal0_762, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
#line 200 "prog_io_dcg.m"
                  {
#line 200 "prog_io_dcg.m"
                    parse_tree__prog_io_goal__apply_purity_marker_to_maybe_goal_4_p_0(parse_tree__prog_io_dcg__SubGoalTerm_766, (MR_Integer) 1, parse_tree__prog_io_dcg__MaybeGoal0_762, parse_tree__prog_io_dcg__MaybeGoal_16);
                  }
#line 199 "prog_io_dcg.m"
                }
#line 197 "prog_io_dcg.m"
              else
#line 204 "prog_io_dcg.m"
                {
#line 204 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__Spec_763;
#line 204 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_764_764;

#line 203 "prog_io_dcg.m"
                  {
#line 203 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Spec_763 = parse_tree__prog_io_goal__should_have_one_goal_prefix_3_f_0(parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__Functor_12);
                  }
#line 205 "prog_io_dcg.m"
                  {
#line 205 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_764_764 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_764_764, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_763));
#line 205 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_764_764, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "prog_io_dcg.m"
                  }
#line 205 "prog_io_dcg.m"
                  {
#line 205 "prog_io_dcg.m"
                    MR_Word base;
#line 205 "prog_io_dcg.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 205 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 205 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_764_764));
#line 205 "prog_io_dcg.m"
                  }
#line 204 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
#line 204 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
#line 204 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
#line 204 "prog_io_dcg.m"
                }
#line 196 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 196 "prog_io_dcg.m"
            }
#line 196 "prog_io_dcg.m"
          }
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 16:
#line 265 "prog_io_dcg.m"
          {
#line 265 "prog_io_dcg.m"
            /* case "some" */
#line 265 "prog_io_dcg.m"
            {
#line 266 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__QVarsTerm_899;
#line 266 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTerm_929;
#line 266 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_779_779;
#line 266 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_780_780;

#line 266 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 266 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 266 "prog_io_dcg.m"
                {
#line 266 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__QVarsTerm_899 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 266 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_779_779 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 266 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_779_779)) == (MR_mktag((MR_Integer) 1)));
#line 266 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 266 "prog_io_dcg.m"
                    {
#line 266 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__SubGoalTerm_929 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_779_779, (MR_Integer) 0)));
#line 266 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_780_780 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_779_779, (MR_Integer) 1)));
#line 266 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_780_780 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 266 "prog_io_dcg.m"
                    }
#line 266 "prog_io_dcg.m"
                }
#line 266 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 267 "prog_io_dcg.m"
                {
#line 267 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_658_884 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 267 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_659_885;
#line 267 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__GenericVarSet_860;
#line 267 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__VarsContextPieces_861;
#line 267 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__MaybeStateVarsAndVars_862;
#line 267 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_872_872;
#line 267 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__MaybeSubGoal_882;
#line 274 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__Vars0_833;
#line 274 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__StateVars0_834;
#line 274 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__SubGoal_850;

#line 267 "prog_io_dcg.m"
                  {
#line 267 "prog_io_dcg.m"
                    mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__TypeCtorInfo_658_884, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, &parse_tree__prog_io_dcg__GenericVarSet_860);
                  }
#line 6372 "parse_tree.prog_io_dcg.c"
                  parse_tree__prog_io_dcg__TypeCtorInfo_659_885 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 269 "prog_io_dcg.m"
                  {
#line 269 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_872_872 = mercury__cord__from_list_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_659_885, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[57]));
                  }
#line 268 "prog_io_dcg.m"
                  {
#line 268 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__VarsContextPieces_861 = mercury__cord__f_43_43_2_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_659_885, parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__V_872_872);
                  }
#line 270 "prog_io_dcg.m"
                  {
#line 270 "prog_io_dcg.m"
                    parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_658_884, parse_tree__prog_io_dcg__QVarsTerm_899, parse_tree__prog_io_dcg__GenericVarSet_860, parse_tree__prog_io_dcg__VarsContextPieces_861, &parse_tree__prog_io_dcg__MaybeStateVarsAndVars_862);
                  }
#line 272 "prog_io_dcg.m"
                  {
#line 272 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTerm_929, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoal_882, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
#line 275 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeStateVarsAndVars_862)) == (MR_mktag((MR_Integer) 1)));
#line 275 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 275 "prog_io_dcg.m"
                    {
#line 275 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__Vars0_833 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeStateVarsAndVars_862, (MR_Integer) 0)));
#line 275 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__StateVars0_834 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeStateVarsAndVars_862, (MR_Integer) 1)));
#line 276 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoal_882)) == (MR_mktag((MR_Integer) 1)));
#line 276 "prog_io_dcg.m"
                      if (parse_tree__prog_io_dcg__succeeded)
#line 276 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__SubGoal_850 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoal_882, (MR_Integer) 0)));
#line 275 "prog_io_dcg.m"
                    }
#line 274 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 278 "prog_io_dcg.m"
                    {
#line 278 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__TypeInfo_664_823 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 278 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__TypeInfo_665_824 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3];
#line 278 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__StateVars_809;
#line 278 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Vars_810;
#line 278 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Goal1_811;
#line 278 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Goal_820;

#line 278 "prog_io_dcg.m"
                      {
#line 278 "prog_io_dcg.m"
                        mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_664_823, parse_tree__prog_io_dcg__TypeInfo_665_824, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[5], parse_tree__prog_io_dcg__StateVars0_834, &parse_tree__prog_io_dcg__StateVars_809);
                      }
#line 279 "prog_io_dcg.m"
                      {
#line 279 "prog_io_dcg.m"
                        mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_664_823, parse_tree__prog_io_dcg__TypeInfo_665_824, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[6], parse_tree__prog_io_dcg__Vars0_833, &parse_tree__prog_io_dcg__Vars_810);
                      }
#line 283 "prog_io_dcg.m"
                      if ((parse_tree__prog_io_dcg__StateVars_809 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 282 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Goal1_811 = parse_tree__prog_io_dcg__SubGoal_850;
#line 283 "prog_io_dcg.m"
                      else
#line 284 "prog_io_dcg.m"
                        {
#line 285 "prog_io_dcg.m"
                          {
#line 285 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__Goal1_811 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 285 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_811, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 285 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_811, 1) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 1 << (MR_Integer) 1)))));
#line 285 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_811, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 285 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_811, 3) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_809));
#line 285 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_811, 4) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_850));
#line 285 "prog_io_dcg.m"
                          }
#line 284 "prog_io_dcg.m"
                        }
#line 291 "prog_io_dcg.m"
                      if ((parse_tree__prog_io_dcg__Vars_810 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 290 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Goal_820 = parse_tree__prog_io_dcg__Goal1_811;
#line 291 "prog_io_dcg.m"
                      else
#line 292 "prog_io_dcg.m"
                        {
#line 293 "prog_io_dcg.m"
                          {
#line 293 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__Goal_820 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 293 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_820, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 293 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_820, 1) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
#line 293 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_820, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 293 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_820, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_810));
#line 293 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_820, 4) = ((MR_Box) (parse_tree__prog_io_dcg__Goal1_811));
#line 293 "prog_io_dcg.m"
                          }
#line 292 "prog_io_dcg.m"
                        }
#line 296 "prog_io_dcg.m"
                      {
#line 296 "prog_io_dcg.m"
                        MR_Word base;
#line 296 "prog_io_dcg.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 296 "prog_io_dcg.m"
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 296 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_820));
#line 296 "prog_io_dcg.m"
                      }
#line 278 "prog_io_dcg.m"
                    }
#line 274 "prog_io_dcg.m"
                  else
#line 299 "prog_io_dcg.m"
                    {
#line 299 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__TypeInfo_671_831 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[4];
#line 299 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_827_827;
#line 299 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__V_828_828;
#line 299 "prog_io_dcg.m"
                      MR_Word parse_tree__prog_io_dcg__Specs_829;

#line 298 "prog_io_dcg.m"
                      {
#line 298 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_827_827 = parse_tree__maybe_error__get_any_errors2_1_f_0(parse_tree__prog_io_dcg__TypeInfo_671_831, parse_tree__prog_io_dcg__TypeInfo_671_831, parse_tree__prog_io_dcg__MaybeStateVarsAndVars_862);
                      }
#line 299 "prog_io_dcg.m"
                      {
#line 299 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_828_828 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, parse_tree__prog_io_dcg__MaybeSubGoal_882);
                      }
#line 298 "prog_io_dcg.m"
                      {
#line 298 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Specs_829 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__V_827_827, parse_tree__prog_io_dcg__V_828_828);
                      }
#line 300 "prog_io_dcg.m"
                      {
#line 300 "prog_io_dcg.m"
                        MR_Word base;
#line 300 "prog_io_dcg.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 300 "prog_io_dcg.m"
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 300 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Specs_829));
#line 300 "prog_io_dcg.m"
                      }
#line 299 "prog_io_dcg.m"
                    }
#line 267 "prog_io_dcg.m"
                }
#line 266 "prog_io_dcg.m"
              else
#line 304 "prog_io_dcg.m"
                {
#line 304 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__V_896_896;
#line 304 "prog_io_dcg.m"
                  MR_Word parse_tree__prog_io_dcg__Spec_898;

#line 303 "prog_io_dcg.m"
                  {
#line 303 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Spec_898 = parse_tree__prog_io_goal__should_have_one_x_one_goal_prefix_4_f_0(parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__Context_14, (MR_String) "a list of variables", parse_tree__prog_io_dcg__Functor_12);
                  }
#line 305 "prog_io_dcg.m"
                  {
#line 305 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_896_896 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_896_896, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_898));
#line 305 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_896_896, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 305 "prog_io_dcg.m"
                  }
#line 305 "prog_io_dcg.m"
                  {
#line 305 "prog_io_dcg.m"
                    MR_Word base;
#line 305 "prog_io_dcg.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 305 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 305 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_896_896));
#line 305 "prog_io_dcg.m"
                  }
#line 304 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
#line 304 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
#line 304 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
#line 304 "prog_io_dcg.m"
                }
#line 265 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 265 "prog_io_dcg.m"
            }
#line 265 "prog_io_dcg.m"
          }
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
        case (MR_Integer) 17:
#line 488 "prog_io_dcg.m"
          {
#line 488 "prog_io_dcg.m"
            /* case "{}" */
#line 496 "prog_io_dcg.m"
            if ((parse_tree__prog_io_dcg__Args_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "prog_io_dcg.m"
              {
#line 490 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_230_230;
#line 490 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_231_231;
#line 490 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_236_236;
#line 490 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__Spec_589;

#line 494 "prog_io_dcg.m"
                {
#line 494 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_231_231 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 494 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_231_231, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 494 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_231_231, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[67])));
#line 494 "prog_io_dcg.m"
                }
#line 494 "prog_io_dcg.m"
                {
#line 494 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_230_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 494 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_230_230, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_231_231));
#line 494 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_230_230, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 494 "prog_io_dcg.m"
                }
#line 493 "prog_io_dcg.m"
                {
#line 493 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__Spec_589 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 493 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_589, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 493 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_589, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 493 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_589, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_230_230));
#line 493 "prog_io_dcg.m"
                }
#line 495 "prog_io_dcg.m"
                {
#line 495 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_236_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_236_236, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_589));
#line 495 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_236_236, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 495 "prog_io_dcg.m"
                }
#line 495 "prog_io_dcg.m"
                {
#line 495 "prog_io_dcg.m"
                  MR_Word base;
#line 495 "prog_io_dcg.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 495 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 495 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_236_236));
#line 495 "prog_io_dcg.m"
                }
#line 490 "prog_io_dcg.m"
                *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
#line 490 "prog_io_dcg.m"
              }
#line 496 "prog_io_dcg.m"
            else
#line 497 "prog_io_dcg.m"
              {
#line 497 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__HeadGoal_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 497 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__TailGoals_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 497 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_218_218;
#line 497 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__SubGoal_591;

#line 502 "prog_io_dcg.m"
                {
#line 502 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_218_218 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 502 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_218_218, 0) = ((MR_Box) (parse_tree__prog_io_dcg__HeadGoal_78));
#line 502 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_218_218, 1) = ((MR_Box) (parse_tree__prog_io_dcg__TailGoals_79));
#line 502 "prog_io_dcg.m"
                }
#line 501 "prog_io_dcg.m"
                {
#line 501 "prog_io_dcg.m"
                  parse_tree__prog_io_util__one_or_more_to_conjunction_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__V_218_218, &parse_tree__prog_io_dcg__SubGoal_591);
                }
#line 503 "prog_io_dcg.m"
                {
#line 503 "prog_io_dcg.m"
                  parse_tree__prog_io_goal__parse_goal_5_p_0(parse_tree__prog_io_dcg__SubGoal_591, parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__MaybeGoal_16, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94);
                }
#line 497 "prog_io_dcg.m"
              }
#line 488 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
#line 488 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
#line 488 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 488 "prog_io_dcg.m"
          }
#line 207 "prog_io_dcg.m"
          break;
#line 207 "prog_io_dcg.m"
      }
#line 207 "prog_io_dcg.m"
    }
#line 207 "prog_io_dcg.m"
    return parse_tree__prog_io_dcg__succeeded;
#line 207 "prog_io_dcg.m"
  }
#line 164 "prog_io_dcg.m"
}

#line 142 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__make_dcg_call_10_p_0(
#line 142 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__SymName_11,
#line 142 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Args0_12,
#line 142 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_13,
#line 142 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Goal_14,
#line 142 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_21,
#line 142 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_22,
#line 142 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_23,
#line 142 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_24,
#line 142 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_25,
#line 142 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_26)
#line 142 "prog_io_dcg.m"
{
#line 146 "prog_io_dcg.m"
  {
#line 146 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 146 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_51;
#line 146 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Args_20;
#line 146 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_30_30;
#line 146 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_31_31;
#line 146 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_32_32;
#line 146 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_33_33;
#line 146 "prog_io_dcg.m"
    MR_Integer parse_tree__prog_io_dcg__N_44;
#line 146 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__StringN_45;
#line 146 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__VarName_46;
#line 146 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_49;

#line 770 "prog_io_dcg.m"
    {
#line 770 "prog_io_dcg.m"
      mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_44, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_23, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_24);
    }
#line 771 "prog_io_dcg.m"
    {
#line 771 "prog_io_dcg.m"
      mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_44, &parse_tree__prog_io_dcg__StringN_45);
    }
#line 772 "prog_io_dcg.m"
    {
#line 772 "prog_io_dcg.m"
      mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_45, &parse_tree__prog_io_dcg__VarName_46);
    }
#line 6799 "parse_tree.prog_io_dcg.c"
    parse_tree__prog_io_dcg__TypeCtorInfo_20_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 773 "prog_io_dcg.m"
    {
#line 773 "prog_io_dcg.m"
      mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_51, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_26, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_21, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_49);
    }
#line 774 "prog_io_dcg.m"
    {
#line 774 "prog_io_dcg.m"
      mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_51, *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_26, parse_tree__prog_io_dcg__VarName_46, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_49, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_22);
    }
#line 151 "prog_io_dcg.m"
    {
#line 151 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 151 "prog_io_dcg.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_25));
#line 151 "prog_io_dcg.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_31_31, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_13));
#line 151 "prog_io_dcg.m"
    }
#line 152 "prog_io_dcg.m"
    {
#line 152 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 152 "prog_io_dcg.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_33_33, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_26));
#line 152 "prog_io_dcg.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_13));
#line 152 "prog_io_dcg.m"
    }
#line 152 "prog_io_dcg.m"
    {
#line 152 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 152 "prog_io_dcg.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_33_33));
#line 152 "prog_io_dcg.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 152 "prog_io_dcg.m"
    }
#line 151 "prog_io_dcg.m"
    {
#line 151 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 151 "prog_io_dcg.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_31_31));
#line 151 "prog_io_dcg.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_32_32));
#line 151 "prog_io_dcg.m"
    }
#line 150 "prog_io_dcg.m"
    {
#line 150 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__Args_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[1], parse_tree__prog_io_dcg__Args0_12, parse_tree__prog_io_dcg__V_30_30);
    }
#line 153 "prog_io_dcg.m"
    {
#line 153 "prog_io_dcg.m"
      MR_Word base;
#line 153 "prog_io_dcg.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 153 "prog_io_dcg.m"
      *parse_tree__prog_io_dcg__Goal_14 = base;
#line 153 "prog_io_dcg.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_13));
#line 153 "prog_io_dcg.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__SymName_11));
#line 153 "prog_io_dcg.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Args_20));
#line 153 "prog_io_dcg.m"
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 0));
#line 153 "prog_io_dcg.m"
    }
#line 146 "prog_io_dcg.m"
  }
#line 142 "prog_io_dcg.m"
}

#line 118 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0_1(
#line 118 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 118 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 118 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 118 "prog_io_dcg.m"
{
#line 118 "prog_io_dcg.m"
  {
#line 118 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 118 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv0_HeadVar__2_48;

#line 118 "prog_io_dcg.m"
    {
#line 118 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal__118__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv0_HeadVar__2_48);
    }
#line 118 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv0_HeadVar__2_48));
#line 118 "prog_io_dcg.m"
  }
#line 118 "prog_io_dcg.m"
}

#line 105 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(
#line 105 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_10,
#line 105 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_11,
#line 105 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_12,
#line 105 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_25,
#line 105 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_26,
#line 105 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_27,
#line 105 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_28,
#line 105 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_29,
#line 105 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_30)
#line 105 "prog_io_dcg.m"
{
#line 109 "prog_io_dcg.m"
  {
#line 109 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 109 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_45_45 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 109 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_46_46;
#line 109 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Context_16;
#line 109 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__ProgTerm_17;
#line 112 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__SymName_18;
#line 112 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Args0_19;

#line 110 "prog_io_dcg.m"
    {
#line 110 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__Context_16 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_45_45, parse_tree__prog_io_dcg__Term_10);
    }
#line 6954 "parse_tree.prog_io_dcg.c"
    parse_tree__prog_io_dcg__TypeCtorInfo_46_46 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 111 "prog_io_dcg.m"
    {
#line 111 "prog_io_dcg.m"
      mercury__term__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_45_45, parse_tree__prog_io_dcg__TypeCtorInfo_46_46, parse_tree__prog_io_dcg__Term_10, &parse_tree__prog_io_dcg__ProgTerm_17);
    }
#line 113 "prog_io_dcg.m"
    {
#line 113 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_46_46, parse_tree__prog_io_dcg__ProgTerm_17, &parse_tree__prog_io_dcg__SymName_18, &parse_tree__prog_io_dcg__Args0_19);
    }
#line 112 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 116 "prog_io_dcg.m"
      {
#line 116 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__MaybeGoalPrime_22;
#line 116 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_32_32;
#line 116 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33_33;
#line 116 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_34_34;
#line 117 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_51_51;
#line 117 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_52_52;
#line 117 "prog_io_dcg.m"
        MR_String parse_tree__prog_io_dcg__Functor_20;
#line 117 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Args1_21;
#line 117 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_31_31;

#line 117 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__SymName_18)) == (MR_mktag((MR_Integer) 0)));
#line 117 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 117 "prog_io_dcg.m"
          {
#line 117 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Functor_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__SymName_18, (MR_Integer) 0)));
#line 118 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_31_31 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[1];
#line 6999 "parse_tree.prog_io_dcg.c"
            parse_tree__prog_io_dcg__TypeInfo_51_51 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[1];
#line 7001 "parse_tree.prog_io_dcg.c"
            parse_tree__prog_io_dcg__TypeInfo_52_52 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[0];
#line 118 "prog_io_dcg.m"
            {
#line 118 "prog_io_dcg.m"
              mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_51_51, parse_tree__prog_io_dcg__TypeInfo_52_52, parse_tree__prog_io_dcg__V_31_31, parse_tree__prog_io_dcg__Args0_19, &parse_tree__prog_io_dcg__Args1_21);
            }
#line 119 "prog_io_dcg.m"
            {
#line 119 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0(parse_tree__prog_io_dcg__Functor_20, parse_tree__prog_io_dcg__Args1_21, parse_tree__prog_io_dcg__Context_16, parse_tree__prog_io_dcg__ContextPieces_11, &parse_tree__prog_io_dcg__MaybeGoalPrime_22, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_25, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_32_32, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_27, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33_33, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_29, &parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_34_34);
            }
#line 117 "prog_io_dcg.m"
          }
#line 116 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 122 "prog_io_dcg.m"
          {
#line 122 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_30 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_34_34;
#line 122 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_28 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33_33;
#line 122 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_26 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_32_32;
#line 122 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__MaybeGoal_12 = parse_tree__prog_io_dcg__MaybeGoalPrime_22;
#line 122 "prog_io_dcg.m"
          }
#line 116 "prog_io_dcg.m"
        else
#line 128 "prog_io_dcg.m"
          {
#line 128 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Goal_23;

#line 127 "prog_io_dcg.m"
            {
#line 127 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__make_dcg_call_10_p_0(parse_tree__prog_io_dcg__SymName_18, parse_tree__prog_io_dcg__Args0_19, parse_tree__prog_io_dcg__Context_16, &parse_tree__prog_io_dcg__Goal_23, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_25, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_26, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_27, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_28, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_29, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_30);
            }
#line 129 "prog_io_dcg.m"
            {
#line 129 "prog_io_dcg.m"
              MR_Word base;
#line 129 "prog_io_dcg.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 129 "prog_io_dcg.m"
              *parse_tree__prog_io_dcg__MaybeGoal_12 = base;
#line 129 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_23));
#line 129 "prog_io_dcg.m"
            }
#line 128 "prog_io_dcg.m"
          }
#line 116 "prog_io_dcg.m"
      }
#line 112 "prog_io_dcg.m"
    else
#line 135 "prog_io_dcg.m"
      {
#line 135 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Args_24;
#line 135 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Goal_44;

#line 136 "prog_io_dcg.m"
        {
#line 136 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__Args_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 136 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_24, 0) = ((MR_Box) (parse_tree__prog_io_dcg__ProgTerm_17));
#line 136 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 136 "prog_io_dcg.m"
        }
#line 137 "prog_io_dcg.m"
        {
#line 137 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__make_dcg_call_10_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_4[0], parse_tree__prog_io_dcg__Args_24, parse_tree__prog_io_dcg__Context_16, &parse_tree__prog_io_dcg__Goal_44, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_25, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_26, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_27, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_28, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_29, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_30);
        }
#line 139 "prog_io_dcg.m"
        {
#line 139 "prog_io_dcg.m"
          MR_Word base;
#line 139 "prog_io_dcg.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 139 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeGoal_12 = base;
#line 139 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_44));
#line 139 "prog_io_dcg.m"
        }
#line 135 "prog_io_dcg.m"
      }
#line 109 "prog_io_dcg.m"
  }
#line 105 "prog_io_dcg.m"
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
#line 96 "prog_io_dcg.m"
  {
#line 96 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 96 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_36;
#line 96 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Counter0_14;
#line 96 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18;
#line 96 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_19_19;
#line 96 "prog_io_dcg.m"
    MR_Integer parse_tree__prog_io_dcg__N_29;
#line 96 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__StringN_30;
#line 96 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__VarName_31;
#line 96 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_34;
#line 98 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg___Counter_15;

#line 97 "prog_io_dcg.m"
    {
#line 97 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__V_19_19 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 770 "prog_io_dcg.m"
    {
#line 770 "prog_io_dcg.m"
      mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_29, parse_tree__prog_io_dcg__V_19_19, &parse_tree__prog_io_dcg__Counter0_14);
    }
#line 771 "prog_io_dcg.m"
    {
#line 771 "prog_io_dcg.m"
      mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_29, &parse_tree__prog_io_dcg__StringN_30);
    }
#line 772 "prog_io_dcg.m"
    {
#line 772 "prog_io_dcg.m"
      mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_30, &parse_tree__prog_io_dcg__VarName_31);
    }
#line 7162 "parse_tree.prog_io_dcg.c"
    parse_tree__prog_io_dcg__TypeCtorInfo_20_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 773 "prog_io_dcg.m"
    {
#line 773 "prog_io_dcg.m"
      mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_36, parse_tree__prog_io_dcg__DCGVar0_11, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_16, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_34);
    }
#line 774 "prog_io_dcg.m"
    {
#line 774 "prog_io_dcg.m"
      mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_36, *parse_tree__prog_io_dcg__DCGVar0_11, parse_tree__prog_io_dcg__VarName_31, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_34, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18);
    }
#line 98 "prog_io_dcg.m"
    {
#line 98 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__GoalTerm_8, parse_tree__prog_io_dcg__ContextPieces_9, parse_tree__prog_io_dcg__MaybeGoal_10, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_17, parse_tree__prog_io_dcg__Counter0_14, &parse_tree__prog_io_dcg___Counter_15, *parse_tree__prog_io_dcg__DCGVar0_11, parse_tree__prog_io_dcg__DCGVar_12);
    }
#line 96 "prog_io_dcg.m"
  }
#line 47 "prog_io_dcg.m"
}

#line 79 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0_1(
#line 79 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 79 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 79 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 79 "prog_io_dcg.m"
{
#line 79 "prog_io_dcg.m"
  {
#line 79 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 79 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv0_HeadVar__2_52;

#line 79 "prog_io_dcg.m"
    {
#line 79 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_clause__79__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv0_HeadVar__2_52);
    }
#line 79 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv0_HeadVar__2_52));
#line 79 "prog_io_dcg.m"
  }
#line 79 "prog_io_dcg.m"
}

#line 39 "prog_io_dcg.m"
void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0(
#line 39 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ModuleName_8,
#line 39 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__VarSet0_9,
#line 39 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__DCG_Head_10,
#line 39 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__DCG_Body_11,
#line 39 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_12,
#line 39 "prog_io_dcg.m"
  MR_Integer parse_tree__prog_io_dcg__SeqNum_13,
#line 39 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeIOM_14)
#line 39 "prog_io_dcg.m"
{
#line 66 "prog_io_dcg.m"
  {
#line 66 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_48_48 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_50_50;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_73;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__ProgVarSet0_15;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__ProgVarSet1_16;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Counter0_17;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__DCGVar0_18;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__BodyContextPieces_19;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeBodyGoal_20;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__ProgVarSet_21;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__DCGVar_23;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__HeadContextPieces_24;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeFunctor_25;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_34_34;
#line 66 "prog_io_dcg.m"
    MR_Integer parse_tree__prog_io_dcg__N_66;
#line 66 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__StringN_67;
#line 66 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__VarName_68;
#line 66 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_71;
#line 71 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg___Counter_22;

#line 67 "prog_io_dcg.m"
    {
#line 67 "prog_io_dcg.m"
      mercury__varset__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_48_48, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__VarSet0_9, &parse_tree__prog_io_dcg__ProgVarSet0_15);
    }
#line 68 "prog_io_dcg.m"
    {
#line 68 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__V_34_34 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 770 "prog_io_dcg.m"
    {
#line 770 "prog_io_dcg.m"
      mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_66, parse_tree__prog_io_dcg__V_34_34, &parse_tree__prog_io_dcg__Counter0_17);
    }
#line 771 "prog_io_dcg.m"
    {
#line 771 "prog_io_dcg.m"
      mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_66, &parse_tree__prog_io_dcg__StringN_67);
    }
#line 772 "prog_io_dcg.m"
    {
#line 772 "prog_io_dcg.m"
      mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_67, &parse_tree__prog_io_dcg__VarName_68);
    }
#line 7301 "parse_tree.prog_io_dcg.c"
    parse_tree__prog_io_dcg__TypeCtorInfo_20_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 773 "prog_io_dcg.m"
    {
#line 773 "prog_io_dcg.m"
      mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_73, &parse_tree__prog_io_dcg__DCGVar0_18, parse_tree__prog_io_dcg__ProgVarSet0_15, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_71);
    }
#line 774 "prog_io_dcg.m"
    {
#line 774 "prog_io_dcg.m"
      mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_73, parse_tree__prog_io_dcg__DCGVar0_18, parse_tree__prog_io_dcg__VarName_68, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_71, &parse_tree__prog_io_dcg__ProgVarSet1_16);
    }
#line 7313 "parse_tree.prog_io_dcg.c"
    parse_tree__prog_io_dcg__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 70 "prog_io_dcg.m"
    {
#line 70 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__BodyContextPieces_19 = mercury__cord__init_0_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_50_50);
    }
#line 71 "prog_io_dcg.m"
    {
#line 71 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__DCG_Body_11, parse_tree__prog_io_dcg__BodyContextPieces_19, &parse_tree__prog_io_dcg__MaybeBodyGoal_20, parse_tree__prog_io_dcg__ProgVarSet1_16, &parse_tree__prog_io_dcg__ProgVarSet_21, parse_tree__prog_io_dcg__Counter0_17, &parse_tree__prog_io_dcg___Counter_22, parse_tree__prog_io_dcg__DCGVar0_18, &parse_tree__prog_io_dcg__DCGVar_23);
    }
#line 74 "prog_io_dcg.m"
    {
#line 74 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__HeadContextPieces_24 = mercury__cord__singleton_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_50_50, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[62]))));
    }
#line 75 "prog_io_dcg.m"
    {
#line 75 "prog_io_dcg.m"
      parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_48_48, parse_tree__prog_io_dcg__ModuleName_8, parse_tree__prog_io_dcg__DCG_Head_10, parse_tree__prog_io_dcg__VarSet0_9, parse_tree__prog_io_dcg__HeadContextPieces_24, &parse_tree__prog_io_dcg__MaybeFunctor_25);
    }
#line 87 "prog_io_dcg.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeFunctor_25)) == (MR_mktag((MR_Integer) 0))))
#line 88 "prog_io_dcg.m"
      {
#line 88 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__FunctorSpecs_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__MaybeFunctor_25, (MR_Integer) 0)));
#line 88 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Specs_33;
#line 88 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_38_38;

#line 89 "prog_io_dcg.m"
        {
#line 89 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_38_38 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, parse_tree__prog_io_dcg__MaybeBodyGoal_20);
        }
#line 89 "prog_io_dcg.m"
        {
#line 89 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__Specs_33 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__FunctorSpecs_32, parse_tree__prog_io_dcg__V_38_38);
        }
#line 90 "prog_io_dcg.m"
        {
#line 90 "prog_io_dcg.m"
          MR_Word base;
#line 90 "prog_io_dcg.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 90 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeIOM_14 = base;
#line 90 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Specs_33));
#line 90 "prog_io_dcg.m"
        }
#line 88 "prog_io_dcg.m"
      }
#line 87 "prog_io_dcg.m"
    else
#line 78 "prog_io_dcg.m"
      {
#line 78 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_56_56 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[1];
#line 78 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeFunctor_25, (MR_Integer) 0)));
#line 78 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Args0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeFunctor_25, (MR_Integer) 1)));
#line 78 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Args1_28;
#line 78 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Args_29;
#line 78 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__ItemClause_30;
#line 78 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Item_31;
#line 78 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_40_40;
#line 78 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_41_41;
#line 78 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_42_42;
#line 78 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_43_43;
#line 78 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_47_47;

#line 79 "prog_io_dcg.m"
        {
#line 79 "prog_io_dcg.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[0], parse_tree__prog_io_dcg__TypeInfo_56_56, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[0], parse_tree__prog_io_dcg__Args0_27, &parse_tree__prog_io_dcg__Args1_28);
        }
#line 81 "prog_io_dcg.m"
        {
#line 81 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 81 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_dcg__DCGVar0_18));
#line 81 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_41_41, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_12));
#line 81 "prog_io_dcg.m"
        }
#line 82 "prog_io_dcg.m"
        {
#line 82 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_dcg__DCGVar_23));
#line 82 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_43_43, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_12));
#line 82 "prog_io_dcg.m"
        }
#line 82 "prog_io_dcg.m"
        {
#line 82 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_43_43));
#line 82 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 82 "prog_io_dcg.m"
        }
#line 81 "prog_io_dcg.m"
        {
#line 81 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 81 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_41_41));
#line 81 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_42_42));
#line 81 "prog_io_dcg.m"
        }
#line 80 "prog_io_dcg.m"
        {
#line 80 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__Args_29 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_dcg__TypeInfo_56_56, parse_tree__prog_io_dcg__Args1_28, parse_tree__prog_io_dcg__V_40_40);
        }
#line 83 "prog_io_dcg.m"
        {
#line 83 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__ItemClause_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 83 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_30, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Name_26));
#line 83 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_30, 1) = ((MR_Box) ((MR_Integer) 0));
#line 83 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_30, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Args_29));
#line 83 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_30, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 83 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_30, 4) = ((MR_Box) (parse_tree__prog_io_dcg__ProgVarSet_21));
#line 83 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_30, 5) = ((MR_Box) (parse_tree__prog_io_dcg__MaybeBodyGoal_20));
#line 83 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_30, 6) = ((MR_Box) (parse_tree__prog_io_dcg__Context_12));
#line 83 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_30, 7) = ((MR_Box) (parse_tree__prog_io_dcg__SeqNum_13));
#line 83 "prog_io_dcg.m"
        }
#line 85 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__Item_31 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_dcg__ItemClause_30);
#line 86 "prog_io_dcg.m"
        {
#line 86 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 86 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Item_31));
#line 86 "prog_io_dcg.m"
        }
#line 86 "prog_io_dcg.m"
        {
#line 86 "prog_io_dcg.m"
          MR_Word base;
#line 86 "prog_io_dcg.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 86 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeIOM_14 = base;
#line 86 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_47_47));
#line 86 "prog_io_dcg.m"
        }
#line 78 "prog_io_dcg.m"
      }
#line 66 "prog_io_dcg.m"
  }
#line 39 "prog_io_dcg.m"
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
