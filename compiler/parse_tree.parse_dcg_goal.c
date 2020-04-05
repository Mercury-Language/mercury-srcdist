/*
** Automatically generated from `parse_dcg_goal.m'
** by the Mercury compiler,
** version rotd-2020-04-05
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module parse_tree.parse_dcg_goal.
// :- implementation.

/*
INIT mercury__parse_tree__parse_dcg_goal__init
ENDINIT
*/

#include "parse_tree.parse_dcg_goal.mih"


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
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_goal.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_types.mih"
#include "parse_tree.parse_util.mih"
#include "parse_tree.parse_vars.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__645__1_2_p_0(
  MR_Word HeadVar__1_75,
  MR_Word * HeadVar__2_76);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__644__1_2_p_0(
  MR_Word HeadVar__1_69,
  MR_Word * HeadVar__2_70);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__284__2_2_p_0(
  MR_Word HeadVar__1_828,
  MR_Word * HeadVar__2_829);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__283__2_2_p_0(
  MR_Word HeadVar__1_822,
  MR_Word * HeadVar__2_823);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__284__1_2_p_0(
  MR_Word HeadVar__1_692,
  MR_Word * HeadVar__2_693);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__283__1_2_p_0(
  MR_Word HeadVar__1_686,
  MR_Word * HeadVar__2_687);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__606__1_2_p_0(
  MR_Word HeadVar__1_719,
  MR_Word * HeadVar__2_720);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal__122__1_2_p_0(
  MR_Word HeadVar__1_49,
  MR_Word * HeadVar__2_50);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_clause__82__1_2_p_0(
  MR_Word HeadVar__1_51,
  MR_Word * HeadVar__2_52);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_clause_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0(
  MR_String Functor_12,
  MR_Word Args_13,
  MR_Word Context_14,
  MR_Word ContextPieces_15,
  MR_Word * MaybeGoal_16,
  MR_Word STATE_VARIABLE_VarSet_0_100,
  MR_Word * STATE_VARIABLE_VarSet_101,
  MR_Word STATE_VARIABLE_Counter_0_102,
  MR_Word * STATE_VARIABLE_Counter_103,
  MR_Word STATE_VARIABLE_DCGVar_0_104,
  MR_Word * STATE_VARIABLE_DCGVar_105);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_if_then_else_12_p_0(
  MR_Word CondGoalTerm_13,
  MR_Word ThenGoalTerm_14,
  MR_Word ElseGoalTerm_15,
  MR_Word Context_16,
  MR_Word ContextPieces_17,
  MR_Word * MaybeGoal_18,
  MR_Word STATE_VARIABLE_VarSet_0_42,
  MR_Word * STATE_VARIABLE_VarSet_43,
  MR_Word STATE_VARIABLE_Counter_0_44,
  MR_Word * STATE_VARIABLE_Counter_45,
  MR_Word Var0_21,
  MR_Word * Var_22);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_if_then_12_p_0(
  MR_Word CondGoalTerm_13,
  MR_Word ThenGoalTerm_14,
  MR_Word Context_15,
  MR_Word ContextPieces_16,
  MR_Word * MaybeVarsCond_17,
  MR_Word * MaybeThen_18,
  MR_Word STATE_VARIABLE_VarSet_0_31,
  MR_Word * STATE_VARIABLE_VarSet_32,
  MR_Word STATE_VARIABLE_Counter_0_33,
  MR_Word * STATE_VARIABLE_Counter_34,
  MR_Word Var0_21,
  MR_Word * Var_22);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0(
  MR_Word Term_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeVarsGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_32,
  MR_Word * STATE_VARIABLE_VarSet_33,
  MR_Word STATE_VARIABLE_Counter_0_34,
  MR_Word * STATE_VARIABLE_Counter_35,
  MR_Word STATE_VARIABLE_DCGVar_0_36,
  MR_Word * STATE_VARIABLE_DCGVar_37);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(
  MR_Word Term_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26,
  MR_Word STATE_VARIABLE_Counter_0_27,
  MR_Word * STATE_VARIABLE_Counter_28,
  MR_Word STATE_VARIABLE_DCGVar_0_29,
  MR_Word * STATE_VARIABLE_DCGVar_30);

static MR_bool MR_CALL 
parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
  MR_Word List0_4,
  MR_Word Term_5,
  MR_Word * List_6);

static void MR_CALL 
parse_tree__parse_dcg_goal__append_to_disjunct_4_p_0(
  MR_Word AddedGoal_5,
  MR_Word Context_6,
  MR_Word Disjunct0_7,
  MR_Word * Disjunct_8);

static void MR_CALL 
parse_tree__parse_dcg_goal__new_dcg_var_5_p_0(
  MR_Word STATE_VARIABLE_VarSet_0_12,
  MR_Word * STATE_VARIABLE_VarSet_13,
  MR_Word STATE_VARIABLE_Counter_0_14,
  MR_Word * STATE_VARIABLE_Counter_15,
  MR_Word * DCGVar_8);

static void MR_CALL 
parse_tree__parse_dcg_goal__make_dcg_call_10_p_0(
  MR_Word SymName_11,
  MR_Word Args0_12,
  MR_Word Context_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22,
  MR_Word STATE_VARIABLE_Counter_0_23,
  MR_Word * STATE_VARIABLE_Counter_24,
  MR_Word STATE_VARIABLE_DCGVar_0_25,
  MR_Word * STATE_VARIABLE_DCGVar_26);


static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_1[64][2];

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_2[3][5];

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_3[9][3];

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_4[4][1];




static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_1[64][2] = {
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
    ((MR_Box) (&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_plain_state_vars_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_1[3]))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and must therefore be used with arity 0."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "against a list of zero items,"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may only be used to match the input"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "operator"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "[]"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: in DCG clauses,"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "at the end of the list."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[6])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: there is no"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and must therefore be used with arity 2."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[6])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "against a list of one or more items,"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "[|]"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[33])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "all"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In first argument of"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[41])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[6])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "( if goal then goal else goal )"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should occur in expressions of the form"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[46])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "else"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[49])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the "))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "some"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[37])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[55])))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[56])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "between the curly braces."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[6])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: there should be at least one goal"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[59])))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In DCG clause head:"))
  },
};

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_2[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_dcg_goal__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__parse_dcg_goal__term__pti_term_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_dcg_goal__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_dcg_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_dcg_goal__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_dcg_goal__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_3[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_2[0])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_2[1])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_2[1])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_2[2])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_2[1])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_2[1])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_2[1])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_2[1])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_2[2])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_dcg_clause_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_4[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "call"))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_1[62]))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) ":="))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "[|]"))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__645__1_2_p_0(
  MR_Word HeadVar__1_75,
  MR_Word * HeadVar__2_76)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_75, HeadVar__2_76);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__644__1_2_p_0(
  MR_Word HeadVar__1_69,
  MR_Word * HeadVar__2_70)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_69, HeadVar__2_70);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__284__2_2_p_0(
  MR_Word HeadVar__1_828,
  MR_Word * HeadVar__2_829)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_828, HeadVar__2_829);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__283__2_2_p_0(
  MR_Word HeadVar__1_822,
  MR_Word * HeadVar__2_823)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_822, HeadVar__2_823);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__284__1_2_p_0(
  MR_Word HeadVar__1_692,
  MR_Word * HeadVar__2_693)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_692, HeadVar__2_693);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__283__1_2_p_0(
  MR_Word HeadVar__1_686,
  MR_Word * HeadVar__2_687)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_686, HeadVar__2_687);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__606__1_2_p_0(
  MR_Word HeadVar__1_719,
  MR_Word * HeadVar__2_720)
{
  mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_719, HeadVar__2_720);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal__122__1_2_p_0(
  MR_Word HeadVar__1_49,
  MR_Word * HeadVar__2_50)
{
  mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_49, HeadVar__2_50);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_clause__82__1_2_p_0(
  MR_Word HeadVar__1_51,
  MR_Word * HeadVar__2_52)
{
  mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_51, HeadVar__2_52);
}

void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_pred_goal_7_p_0(
  MR_Word GoalTerm_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word * DCGVar0_11,
  MR_Word * DCGVar_12,
  MR_Word STATE_VARIABLE_VarSet_0_16,
  MR_Word * STATE_VARIABLE_VarSet_17)
{
  {
    MR_Word Counter0_14;
    MR_Word STATE_VARIABLE_VarSet_18_18;
    MR_Word Var_19;
    MR_Integer N_29;
    MR_String StringN_30;
    MR_String VarName_31;
    MR_Word STATE_VARIABLE_VarSet_18_34;
    MR_Word _Counter_15;

    Var_19 = mercury__counter__init_1_f_0((MR_Integer) 0);
    mercury__counter__allocate_3_p_0(&N_29, Var_19, &Counter0_14);
    mercury__string__int_to_string_2_p_0(N_29, &StringN_30);
    mercury__string__append_3_p_2((MR_String) "DCG_", StringN_30, &VarName_31);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DCGVar0_11, STATE_VARIABLE_VarSet_0_16, &STATE_VARIABLE_VarSet_18_34);
    mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *DCGVar0_11, VarName_31, STATE_VARIABLE_VarSet_18_34, &STATE_VARIABLE_VarSet_18_18);
    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(GoalTerm_8, ContextPieces_9, MaybeGoal_10, STATE_VARIABLE_VarSet_18_18, STATE_VARIABLE_VarSet_17, Counter0_14, &_Counter_15, *DCGVar0_11, DCGVar_12);
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_clause_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_52;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_clause__82__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_52);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_52));
  }
}

void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_clause_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet0_9,
  MR_Word DCG_Head_10,
  MR_Word DCG_Body_11,
  MR_Word Context_12,
  MR_Integer SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  {
    MR_Word ProgVarSet0_15;
    MR_Word ProgVarSet1_16;
    MR_Word Counter0_17;
    MR_Word DCGVar0_18;
    MR_Word BodyContextPieces_19;
    MR_Word MaybeBodyGoal_20;
    MR_Word ProgVarSet_21;
    MR_Word DCGVar_23;
    MR_Word HeadContextPieces_24;
    MR_Word MaybeFunctor_25;
    MR_Word Var_34;
    MR_Integer N_66;
    MR_String StringN_67;
    MR_String VarName_68;
    MR_Word STATE_VARIABLE_VarSet_18_71;
    MR_Word _Counter_22;

    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet0_9, &ProgVarSet0_15);
    Var_34 = mercury__counter__init_1_f_0((MR_Integer) 0);
    mercury__counter__allocate_3_p_0(&N_66, Var_34, &Counter0_17);
    mercury__string__int_to_string_2_p_0(N_66, &StringN_67);
    mercury__string__append_3_p_2((MR_String) "DCG_", StringN_67, &VarName_68);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &DCGVar0_18, ProgVarSet0_15, &STATE_VARIABLE_VarSet_18_71);
    mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DCGVar0_18, VarName_68, STATE_VARIABLE_VarSet_18_71, &ProgVarSet1_16);
    BodyContextPieces_19 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0));
    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(DCG_Body_11, BodyContextPieces_19, &MaybeBodyGoal_20, ProgVarSet1_16, &ProgVarSet_21, Counter0_17, &_Counter_22, DCGVar0_18, &DCGVar_23);
    HeadContextPieces_24 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[63]))));
    parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_8, DCG_Head_10, VarSet0_9, HeadContextPieces_24, &MaybeFunctor_25);
    if (((MR_tag((MR_Word) MaybeFunctor_25)) == (MR_Integer) 0))
    {
      MR_Word FunctorSpecs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFunctor_25, (MR_Integer) 0))));
      MR_Word Specs_33;
      MR_Word Var_38;

      Var_38 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeBodyGoal_20);
      Specs_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), FunctorSpecs_32, Var_38);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_33));
      }
    }
    else
    {
      MR_Word Name_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFunctor_25, (MR_Integer) 0))));
      MR_Word Args0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFunctor_25, (MR_Integer) 1))));
      MR_Word Args1_28;
      MR_Word Args_29;
      MR_Word ItemClause_30;
      MR_Word Item_31;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_47;

      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[8]), Args0_27, &Args1_28);
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (DCGVar0_18));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Context_12));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (DCGVar_23));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Context_12));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_42));
      }
      Args_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[1]), Args1_28, Var_40);
      {
        ItemClause_30 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemClause_30, 0) = ((MR_Box) (Name_26));
        MR_hl_field(MR_mktag(0), ItemClause_30, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), ItemClause_30, 2) = ((MR_Box) (Args_29));
        MR_hl_field(MR_mktag(0), ItemClause_30, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), ItemClause_30, 4) = ((MR_Box) (ProgVarSet_21));
        MR_hl_field(MR_mktag(0), ItemClause_30, 5) = ((MR_Box) (MaybeBodyGoal_20));
        MR_hl_field(MR_mktag(0), ItemClause_30, 6) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(0), ItemClause_30, 7) = ((MR_Box) (SeqNum_13));
      }
      Item_31 = (MR_Word) ((MR_Word) (ItemClause_30));
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Item_31));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_47));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_829;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__284__2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__2_829);
    *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_829));
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_823;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__283__2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_823);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_823));
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_693;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__284__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_693);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_693));
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_687;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__283__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_687);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_687));
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_720;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__606__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_720);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_720));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0(
  MR_String Functor_12,
  MR_Word Args_13,
  MR_Word Context_14,
  MR_Word ContextPieces_15,
  MR_Word * MaybeGoal_16,
  MR_Word STATE_VARIABLE_VarSet_0_100,
  MR_Word * STATE_VARIABLE_VarSet_101,
  MR_Word STATE_VARIABLE_Counter_0_102,
  MR_Word * STATE_VARIABLE_Counter_103,
  MR_Word STATE_VARIABLE_DCGVar_0_104,
  MR_Word * STATE_VARIABLE_DCGVar_105)
{
  {
    MR_bool succeeded;

    {
      MR_Integer case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(Functor_12, 0)) {
        case (MR_Integer) 38:
          if (MR_offset_streq(1, Functor_12, (MR_String) "&"))
            case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 44:
          if (MR_offset_streq(1, Functor_12, (MR_String) ","))
            case_num_0 = (MR_Integer) 1;
          break;
        case (MR_Integer) 58:
          if (MR_offset_streq(1, Functor_12, (MR_String) ":="))
            case_num_0 = (MR_Integer) 2;
          break;
        case (MR_Integer) 59:
          if (MR_offset_streq(1, Functor_12, (MR_String) ";"))
            case_num_0 = (MR_Integer) 3;
          break;
        case (MR_Integer) 61:
          if (MR_offset_streq(1, Functor_12, (MR_String) "="))
            case_num_0 = (MR_Integer) 4;
          break;
        case (MR_Integer) 91:
          switch (MR_nth_code_unit(Functor_12, 1)) {
            case (MR_Integer) 93:
              if (MR_offset_streq(2, Functor_12, (MR_String) "[]"))
                case_num_0 = (MR_Integer) 5;
              break;
            case (MR_Integer) 124:
              if (MR_offset_streq(2, Functor_12, (MR_String) "[|]"))
                case_num_0 = (MR_Integer) 6;
              break;
          }
          break;
        case (MR_Integer) 92:
          if (MR_offset_streq(1, Functor_12, (MR_String) "\\+"))
            case_num_0 = (MR_Integer) 7;
          break;
        case (MR_Integer) 97:
          if (MR_offset_streq(1, Functor_12, (MR_String) "all"))
            case_num_0 = (MR_Integer) 8;
          break;
        case (MR_Integer) 101:
          if (MR_offset_streq(1, Functor_12, (MR_String) "else"))
            case_num_0 = (MR_Integer) 9;
          break;
        case (MR_Integer) 105:
          switch (MR_nth_code_unit(Functor_12, 1)) {
            case (MR_Integer) 102:
              if (MR_offset_streq(2, Functor_12, (MR_String) "if"))
                case_num_0 = (MR_Integer) 10;
              break;
            case (MR_Integer) 109:
              if (MR_offset_streq(2, Functor_12, (MR_String) "impure"))
                case_num_0 = (MR_Integer) 11;
              break;
          }
          break;
        case (MR_Integer) 110:
          if (MR_offset_streq(1, Functor_12, (MR_String) "not"))
            case_num_0 = (MR_Integer) 7;
          break;
        case (MR_Integer) 112:
          if (((((((((((((((MR_nth_code_unit(Functor_12, 1)) == (MR_Integer) 114)) && (((MR_nth_code_unit(Functor_12, 2)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(Functor_12, 3)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(Functor_12, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Functor_12, 5)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(Functor_12, 6)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Functor_12, 7)) == (MR_Integer) 95))))
            switch (MR_nth_code_unit(Functor_12, 8)) {
              case (MR_Integer) 105:
                if (MR_offset_streq(9, Functor_12, (MR_String) "promise_impure"))
                  case_num_0 = (MR_Integer) 12;
                break;
              case (MR_Integer) 112:
                if (MR_offset_streq(9, Functor_12, (MR_String) "promise_pure"))
                  case_num_0 = (MR_Integer) 13;
                break;
              case (MR_Integer) 115:
                if (MR_offset_streq(9, Functor_12, (MR_String) "promise_semipure"))
                  case_num_0 = (MR_Integer) 14;
                break;
            }
          break;
        case (MR_Integer) 115:
          switch (MR_nth_code_unit(Functor_12, 1)) {
            case (MR_Integer) 101:
              if (MR_offset_streq(2, Functor_12, (MR_String) "semipure"))
                case_num_0 = (MR_Integer) 15;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, Functor_12, (MR_String) "some"))
                case_num_0 = (MR_Integer) 16;
              break;
          }
          break;
        case (MR_Integer) 123:
          if (MR_offset_streq(1, Functor_12, (MR_String) "{}"))
            case_num_0 = (MR_Integer) 17;
          break;
      }
      switch (case_num_0) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            // case "&"
            ;
            {
              MR_Word SubGoalTermA_502;
              MR_Word SubGoalTermB_503;
              MR_Word Var_336;
              MR_Word Var_337;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTermA_502 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_336 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_336 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTermB_503 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_336, (MR_Integer) 0))));
                  Var_337 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_336, (MR_Integer) 1))));
                  succeeded = (Var_337 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_VarSet_338_338;
                MR_Word STATE_VARIABLE_Counter_339_339;
                MR_Word STATE_VARIABLE_DCGVar_340_340;
                MR_Word MaybeSubGoalA_491;
                MR_Word MaybeSubGoalB_492;
                MR_Word SubGoalA_484;
                MR_Word GoalWarningSpecsA_485;
                MR_Word SubGoalB_486;
                MR_Word GoalWarningSpecsB_487;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTermA_502, ContextPieces_15, &MaybeSubGoalA_491, STATE_VARIABLE_VarSet_0_100, &STATE_VARIABLE_VarSet_338_338, STATE_VARIABLE_Counter_0_102, &STATE_VARIABLE_Counter_339_339, STATE_VARIABLE_DCGVar_0_104, &STATE_VARIABLE_DCGVar_340_340);
                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTermB_503, ContextPieces_15, &MaybeSubGoalB_492, STATE_VARIABLE_VarSet_338_338, STATE_VARIABLE_VarSet_101, STATE_VARIABLE_Counter_339_339, STATE_VARIABLE_Counter_103, STATE_VARIABLE_DCGVar_340_340, STATE_VARIABLE_DCGVar_105);
                succeeded = ((MR_tag((MR_Word) MaybeSubGoalA_491)) == (MR_Integer) 1);
                if (succeeded)
                {
                  SubGoalA_484 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_491, (MR_Integer) 0))));
                  GoalWarningSpecsA_485 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_491, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoalB_492)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoalB_486 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_492, (MR_Integer) 0))));
                    GoalWarningSpecsB_487 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_492, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word GoalWarningSpecs_478;
                  MR_Word Goal_479;

                  GoalWarningSpecs_478 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), GoalWarningSpecsA_485, GoalWarningSpecsB_487);
                  {
                    Goal_479 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_479, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Goal_479, 1) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(3), Goal_479, 2) = ((MR_Box) (SubGoalA_484));
                    MR_hl_field(MR_mktag(3), Goal_479, 3) = ((MR_Box) (SubGoalB_486));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_479));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (GoalWarningSpecs_478));
                  }
                }
                else
                {
                  MR_Word Var_344;
                  MR_Word Var_345;
                  MR_Word Specs_480;

                  Var_344 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalA_491);
                  Var_345 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalB_492);
                  Specs_480 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_344, Var_345);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_480));
                  }
                }
              }
              else
              {
                MR_Word Var_346;
                MR_Word Spec_497;

                Spec_497 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_346 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_346, 0) = ((MR_Box) (Spec_497));
                  MR_hl_field(MR_mktag(1), Var_346, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_346));
                }
                *STATE_VARIABLE_DCGVar_105 = STATE_VARIABLE_DCGVar_0_104;
                *STATE_VARIABLE_Counter_103 = STATE_VARIABLE_Counter_0_102;
                *STATE_VARIABLE_VarSet_101 = STATE_VARIABLE_VarSet_0_100;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            // case ","
            ;
            {
              MR_Word SubGoalTermA_49;
              MR_Word SubGoalTermB_50;
              MR_Word Var_348;
              MR_Word Var_349;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTermA_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_348 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_348 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTermB_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_348, (MR_Integer) 0))));
                  Var_349 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_348, (MR_Integer) 1))));
                  succeeded = (Var_349 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoalA_51;
                MR_Word MaybeSubGoalB_52;
                MR_Word STATE_VARIABLE_VarSet_350_350;
                MR_Word STATE_VARIABLE_Counter_351_351;
                MR_Word STATE_VARIABLE_DCGVar_352_352;
                MR_Word SubGoalA_53;
                MR_Word GoalWarningSpecsA_54;
                MR_Word SubGoalB_55;
                MR_Word GoalWarningSpecsB_56;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTermA_49, ContextPieces_15, &MaybeSubGoalA_51, STATE_VARIABLE_VarSet_0_100, &STATE_VARIABLE_VarSet_350_350, STATE_VARIABLE_Counter_0_102, &STATE_VARIABLE_Counter_351_351, STATE_VARIABLE_DCGVar_0_104, &STATE_VARIABLE_DCGVar_352_352);
                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTermB_50, ContextPieces_15, &MaybeSubGoalB_52, STATE_VARIABLE_VarSet_350_350, STATE_VARIABLE_VarSet_101, STATE_VARIABLE_Counter_351_351, STATE_VARIABLE_Counter_103, STATE_VARIABLE_DCGVar_352_352, STATE_VARIABLE_DCGVar_105);
                succeeded = ((MR_tag((MR_Word) MaybeSubGoalA_51)) == (MR_Integer) 1);
                if (succeeded)
                {
                  SubGoalA_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_51, (MR_Integer) 0))));
                  GoalWarningSpecsA_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_51, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoalB_52)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoalB_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_52, (MR_Integer) 0))));
                    GoalWarningSpecsB_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_52, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word GoalWarningSpecs_460;
                  MR_Word Goal_461;

                  GoalWarningSpecs_460 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), GoalWarningSpecsA_54, GoalWarningSpecsB_56);
                  {
                    Goal_461 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Goal_461, 0) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(2), Goal_461, 1) = ((MR_Box) (SubGoalA_53));
                    MR_hl_field(MR_mktag(2), Goal_461, 2) = ((MR_Box) (SubGoalB_55));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_461));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (GoalWarningSpecs_460));
                  }
                }
                else
                {
                  MR_Word Var_356;
                  MR_Word Var_357;
                  MR_Word Specs_462;

                  Var_356 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalA_51);
                  Var_357 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalB_52);
                  Specs_462 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_356, Var_357);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_462));
                  }
                }
              }
              else
              {
                MR_Word Var_358;
                MR_Word Spec_469;

                Spec_469 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_358 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_358, 0) = ((MR_Box) (Spec_469));
                  MR_hl_field(MR_mktag(1), Var_358, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_358));
                }
                *STATE_VARIABLE_DCGVar_105 = STATE_VARIABLE_DCGVar_0_104;
                *STATE_VARIABLE_Counter_103 = STATE_VARIABLE_Counter_0_102;
                *STATE_VARIABLE_VarSet_101 = STATE_VARIABLE_VarSet_0_100;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            // case ":="
            ;
            {
              MR_Word Arg0_676;
              MR_Word Var_106;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Arg0_676 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_106 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word Goal_668;
                MR_Word OutVarTerm_670;
                MR_Word Arg_671;

                parse_tree__parse_dcg_goal__new_dcg_var_5_p_0(STATE_VARIABLE_VarSet_0_100, STATE_VARIABLE_VarSet_101, STATE_VARIABLE_Counter_0_102, STATE_VARIABLE_Counter_103, STATE_VARIABLE_DCGVar_105);
                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Arg0_676, &Arg_671);
                {
                  OutVarTerm_670 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), OutVarTerm_670, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_105));
                  MR_hl_field(MR_mktag(1), OutVarTerm_670, 1) = ((MR_Box) (Context_14));
                }
                {
                  Goal_668 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Goal_668, 0) = ((MR_Box) (Context_14));
                  MR_hl_field(MR_mktag(0), Goal_668, 1) = ((MR_Box) (Arg_671));
                  MR_hl_field(MR_mktag(0), Goal_668, 2) = ((MR_Box) (OutVarTerm_670));
                  MR_hl_field(MR_mktag(0), Goal_668, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_668));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              else
              {
                MR_Word ProgArgs_99;
                MR_Word Goal_672;

                mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[3]), Args_13, &ProgArgs_99);
                parse_tree__parse_dcg_goal__make_dcg_call_10_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_4[2]), ProgArgs_99, Context_14, &Goal_672, STATE_VARIABLE_VarSet_0_100, STATE_VARIABLE_VarSet_101, STATE_VARIABLE_Counter_0_102, STATE_VARIABLE_Counter_103, STATE_VARIABLE_DCGVar_0_104, STATE_VARIABLE_DCGVar_105);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_672));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            // case ";"
            ;
            {
              MR_Word SubGoalTermA_564;
              MR_Word SubGoalTermB_565;
              MR_Word Var_310;
              MR_Word Var_311;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTermA_564 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_310 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_310 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTermB_565 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_310, (MR_Integer) 0))));
                  Var_311 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_310, (MR_Integer) 1))));
                  succeeded = (Var_311 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word CondGoalTerm_57;
                MR_Word ThenGoalTerm_58;
                MR_Word Var_312;
                MR_String Var_313;
                MR_Word Var_314;
                MR_Word Var_315;
                MR_Word Var_316;

                succeeded = ((MR_tag((MR_Word) SubGoalTermA_564)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_312 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoalTermA_564, (MR_Integer) 0))));
                  Var_314 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoalTermA_564, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_312)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_313 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_312, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_313, (MR_String) "->") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_314 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        CondGoalTerm_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_314, (MR_Integer) 0))));
                        Var_315 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_314, (MR_Integer) 1))));
                        succeeded = (Var_315 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ThenGoalTerm_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_315, (MR_Integer) 0))));
                          Var_316 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_315, (MR_Integer) 1))));
                          succeeded = (Var_316 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                  parse_tree__parse_dcg_goal__parse_dcg_if_then_else_12_p_0(CondGoalTerm_57, ThenGoalTerm_58, SubGoalTermB_565, Context_14, ContextPieces_15, MaybeGoal_16, STATE_VARIABLE_VarSet_0_100, STATE_VARIABLE_VarSet_101, STATE_VARIABLE_Counter_0_102, STATE_VARIABLE_Counter_103, STATE_VARIABLE_DCGVar_0_104, STATE_VARIABLE_DCGVar_105);
                else
                {
                  MR_Word MaybeSubGoalA0_61;
                  MR_Word VarA_62;
                  MR_Word MaybeSubGoalB0_63;
                  MR_Word VarB_64;
                  MR_Word STATE_VARIABLE_VarSet_320_320;
                  MR_Word STATE_VARIABLE_Counter_321_321;
                  MR_Word SubGoalA0_65;
                  MR_Word SubGoalB0_66;
                  MR_Word GoalWarningSpecsA_542;
                  MR_Word GoalWarningSpecsB_544;

                  parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTermA_564, ContextPieces_15, &MaybeSubGoalA0_61, STATE_VARIABLE_VarSet_0_100, &STATE_VARIABLE_VarSet_320_320, STATE_VARIABLE_Counter_0_102, &STATE_VARIABLE_Counter_321_321, STATE_VARIABLE_DCGVar_0_104, &VarA_62);
                  parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTermB_565, ContextPieces_15, &MaybeSubGoalB0_63, STATE_VARIABLE_VarSet_320_320, STATE_VARIABLE_VarSet_101, STATE_VARIABLE_Counter_321_321, STATE_VARIABLE_Counter_103, STATE_VARIABLE_DCGVar_0_104, &VarB_64);
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoalA0_61)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoalA0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA0_61, (MR_Integer) 0))));
                    GoalWarningSpecsA_542 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA0_61, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) MaybeSubGoalB0_63)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      SubGoalB0_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB0_63, (MR_Integer) 0))));
                      GoalWarningSpecsB_544 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB0_63, (MR_Integer) 1))));
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word GoalWarningSpecs_533;
                    MR_Word Goal_534;
                    MR_Word TypeInfo_1037_1037;

                    GoalWarningSpecs_533 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), GoalWarningSpecsA_542, GoalWarningSpecsB_544);
                    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (VarA_62)), ((MR_Box) (STATE_VARIABLE_DCGVar_0_104)));
                    if (succeeded)
                    {
                      TypeInfo_1037_1037 = (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_1037_1037, ((MR_Box) (VarB_64)), ((MR_Box) (STATE_VARIABLE_DCGVar_0_104)));
                    }
                    if (succeeded)
                    {
                      *STATE_VARIABLE_DCGVar_105 = STATE_VARIABLE_DCGVar_0_104;
                      {
                        Goal_534 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Goal_534, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(MR_mktag(3), Goal_534, 1) = ((MR_Box) (Context_14));
                        MR_hl_field(MR_mktag(3), Goal_534, 2) = ((MR_Box) (SubGoalA0_65));
                        MR_hl_field(MR_mktag(3), Goal_534, 3) = ((MR_Box) (SubGoalB0_66));
                      }
                    }
                    else
                    {
                      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (VarA_62)), ((MR_Box) (STATE_VARIABLE_DCGVar_0_104)));
                      if (succeeded)
                      {
                        MR_Word Unify_68;
                        MR_Word Var_324;
                        MR_Word Var_325;
                        MR_Word SubGoalA_522;

                        *STATE_VARIABLE_DCGVar_105 = VarB_64;
                        {
                          Var_324 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_324, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_105));
                          MR_hl_field(MR_mktag(1), Var_324, 1) = ((MR_Box) (Context_14));
                        }
                        {
                          Var_325 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_325, 0) = ((MR_Box) (VarA_62));
                          MR_hl_field(MR_mktag(1), Var_325, 1) = ((MR_Box) (Context_14));
                        }
                        {
                          Unify_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Unify_68, 0) = ((MR_Box) (Context_14));
                          MR_hl_field(MR_mktag(0), Unify_68, 1) = ((MR_Box) (Var_324));
                          MR_hl_field(MR_mktag(0), Unify_68, 2) = ((MR_Box) (Var_325));
                          MR_hl_field(MR_mktag(0), Unify_68, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                        }
                        parse_tree__parse_dcg_goal__append_to_disjunct_4_p_0(Unify_68, Context_14, SubGoalA0_65, &SubGoalA_522);
                        {
                          Goal_534 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Goal_534, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                          MR_hl_field(MR_mktag(3), Goal_534, 1) = ((MR_Box) (Context_14));
                          MR_hl_field(MR_mktag(3), Goal_534, 2) = ((MR_Box) (SubGoalA_522));
                          MR_hl_field(MR_mktag(3), Goal_534, 3) = ((MR_Box) (SubGoalB0_66));
                        }
                      }
                      else
                      {
                        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (VarB_64)), ((MR_Box) (STATE_VARIABLE_DCGVar_0_104)));
                        if (succeeded)
                        {
                          MR_Word Var_327;
                          MR_Word Var_328;
                          MR_Word SubGoalB_523;
                          MR_Word Unify_524;

                          *STATE_VARIABLE_DCGVar_105 = VarA_62;
                          {
                            Var_327 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_327, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_105));
                            MR_hl_field(MR_mktag(1), Var_327, 1) = ((MR_Box) (Context_14));
                          }
                          {
                            Var_328 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_328, 0) = ((MR_Box) (VarB_64));
                            MR_hl_field(MR_mktag(1), Var_328, 1) = ((MR_Box) (Context_14));
                          }
                          {
                            Unify_524 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Unify_524, 0) = ((MR_Box) (Context_14));
                            MR_hl_field(MR_mktag(0), Unify_524, 1) = ((MR_Box) (Var_327));
                            MR_hl_field(MR_mktag(0), Unify_524, 2) = ((MR_Box) (Var_328));
                            MR_hl_field(MR_mktag(0), Unify_524, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                          }
                          parse_tree__parse_dcg_goal__append_to_disjunct_4_p_0(Unify_524, Context_14, SubGoalB0_66, &SubGoalB_523);
                          {
                            Goal_534 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Goal_534, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                            MR_hl_field(MR_mktag(3), Goal_534, 1) = ((MR_Box) (Context_14));
                            MR_hl_field(MR_mktag(3), Goal_534, 2) = ((MR_Box) (SubGoalA0_65));
                            MR_hl_field(MR_mktag(3), Goal_534, 3) = ((MR_Box) (SubGoalB_523));
                          }
                        }
                        else
                        {
                          MR_Word SubGoalA_525;

                          *STATE_VARIABLE_DCGVar_105 = VarB_64;
                          parse_tree__prog_util__rename_in_goal_4_p_0(VarA_62, VarB_64, SubGoalA0_65, &SubGoalA_525);
                          {
                            Goal_534 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Goal_534, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                            MR_hl_field(MR_mktag(3), Goal_534, 1) = ((MR_Box) (Context_14));
                            MR_hl_field(MR_mktag(3), Goal_534, 2) = ((MR_Box) (SubGoalA_525));
                            MR_hl_field(MR_mktag(3), Goal_534, 3) = ((MR_Box) (SubGoalB0_66));
                          }
                        }
                      }
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_16 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_534));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (GoalWarningSpecs_533));
                    }
                  }
                  else
                  {
                    MR_Word Var_332;
                    MR_Word Var_333;
                    MR_Word Specs_537;

                    *STATE_VARIABLE_DCGVar_105 = VarA_62;
                    Var_332 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalA0_61);
                    Var_333 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalB0_63);
                    Specs_537 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_332, Var_333);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_16 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_537));
                    }
                  }
                }
              }
              else
              {
                MR_Word Var_334;
                MR_Word Spec_559;

                Spec_559 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_334 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_334, 0) = ((MR_Box) (Spec_559));
                  MR_hl_field(MR_mktag(1), Var_334, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_334));
                }
                *STATE_VARIABLE_DCGVar_105 = STATE_VARIABLE_DCGVar_0_104;
                *STATE_VARIABLE_Counter_103 = STATE_VARIABLE_Counter_0_102;
                *STATE_VARIABLE_VarSet_101 = STATE_VARIABLE_VarSet_0_100;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            // case "="
            ;
            {
              MR_Word Arg0_95;
              MR_Word Var_118;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Arg0_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_118 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word Arg_96;
                MR_Word DCGVarTerm_97;
                MR_Word Goal_662;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Arg0_95, &Arg_96);
                {
                  DCGVarTerm_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), DCGVarTerm_97, 0) = ((MR_Box) (STATE_VARIABLE_DCGVar_0_104));
                  MR_hl_field(MR_mktag(1), DCGVarTerm_97, 1) = ((MR_Box) (Context_14));
                }
                {
                  Goal_662 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Goal_662, 0) = ((MR_Box) (Context_14));
                  MR_hl_field(MR_mktag(0), Goal_662, 1) = ((MR_Box) (Arg_96));
                  MR_hl_field(MR_mktag(0), Goal_662, 2) = ((MR_Box) (DCGVarTerm_97));
                  MR_hl_field(MR_mktag(0), Goal_662, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_662));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              else
              {
                MR_Word Var_121;
                MR_Word Spec_663;

                Spec_663 = parse_tree__parse_goal__should_have_two_terms_infix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Spec_663));
                  MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_121));
                }
              }
              *STATE_VARIABLE_VarSet_101 = STATE_VARIABLE_VarSet_0_100;
              *STATE_VARIABLE_Counter_103 = STATE_VARIABLE_Counter_0_102;
              *STATE_VARIABLE_DCGVar_105 = STATE_VARIABLE_DCGVar_0_104;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            // case "[]"
            ;
            if ((Args_13 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_211;
              MR_Word Var_212;
              MR_Word Goal_624;

              parse_tree__parse_dcg_goal__new_dcg_var_5_p_0(STATE_VARIABLE_VarSet_0_100, STATE_VARIABLE_VarSet_101, STATE_VARIABLE_Counter_0_102, STATE_VARIABLE_Counter_103, STATE_VARIABLE_DCGVar_105);
              {
                Var_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_211, 0) = ((MR_Box) (STATE_VARIABLE_DCGVar_0_104));
                MR_hl_field(MR_mktag(1), Var_211, 1) = ((MR_Box) (Context_14));
              }
              {
                Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_105));
                MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) (Context_14));
              }
              {
                Goal_624 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Goal_624, 0) = ((MR_Box) (Context_14));
                MR_hl_field(MR_mktag(0), Goal_624, 1) = ((MR_Box) (Var_211));
                MR_hl_field(MR_mktag(0), Goal_624, 2) = ((MR_Box) (Var_212));
                MR_hl_field(MR_mktag(0), Goal_624, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *MaybeGoal_16 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_624));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            else
            {
              MR_Word Var_206;
              MR_Word Spec_627;

              {
                Spec_627 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_627, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_non_call_dcg_goal\'/11"));
                MR_hl_field(MR_mktag(1), Spec_627, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_627, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_627, 3) = ((MR_Box) (Context_14));
                MR_hl_field(MR_mktag(1), Spec_627, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[20])));
              }
              {
                Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_206, 0) = ((MR_Box) (Spec_627));
                MR_hl_field(MR_mktag(1), Var_206, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeGoal_16 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_206));
              }
              *STATE_VARIABLE_VarSet_101 = STATE_VARIABLE_VarSet_0_100;
              *STATE_VARIABLE_Counter_103 = STATE_VARIABLE_Counter_0_102;
              *STATE_VARIABLE_DCGVar_105 = STATE_VARIABLE_DCGVar_0_104;
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            // case "[|]"
            ;
            {
              MR_Word Var_123;
              MR_Word Var_124;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_123 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_123, (MR_Integer) 1))));
                  succeeded = (Var_124 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word ConsTerm0_91;
                MR_Word ConsTerm_92;
                MR_Word OutVarTerm_93;
                MR_Word Term_94;

                parse_tree__parse_dcg_goal__new_dcg_var_5_p_0(STATE_VARIABLE_VarSet_0_100, STATE_VARIABLE_VarSet_101, STATE_VARIABLE_Counter_0_102, STATE_VARIABLE_Counter_103, STATE_VARIABLE_DCGVar_105);
                {
                  ConsTerm0_91 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ConsTerm0_91, 0) = ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_4[3]));
                  MR_hl_field(MR_mktag(0), ConsTerm0_91, 1) = ((MR_Box) (Args_13));
                  MR_hl_field(MR_mktag(0), ConsTerm0_91, 2) = ((MR_Box) (Context_14));
                }
                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsTerm0_91, &ConsTerm_92);
                {
                  OutVarTerm_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), OutVarTerm_93, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_105));
                  MR_hl_field(MR_mktag(1), OutVarTerm_93, 1) = ((MR_Box) (Context_14));
                }
                succeeded = parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(ConsTerm_92, OutVarTerm_93, &Term_94);
                if (succeeded)
                {
                  MR_Word Var_133;
                  MR_Word Goal_639;

                  {
                    Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (STATE_VARIABLE_DCGVar_0_104));
                    MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (Context_14));
                  }
                  {
                    Goal_639 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Goal_639, 0) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(0), Goal_639, 1) = ((MR_Box) (Var_133));
                    MR_hl_field(MR_mktag(0), Goal_639, 2) = ((MR_Box) (Term_94));
                    MR_hl_field(MR_mktag(0), Goal_639, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_639));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                else
                {
                  MR_Word Var_150;
                  MR_Word Spec_640;

                  {
                    Spec_640 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Spec_640, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_non_call_dcg_goal\'/11"));
                    MR_hl_field(MR_mktag(1), Spec_640, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), Spec_640, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(1), Spec_640, 3) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(1), Spec_640, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[25])));
                  }
                  {
                    Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (Spec_640));
                    MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_150));
                  }
                }
              }
              else
              {
                MR_Word Var_178;
                MR_Word Spec_650;

                {
                  Spec_650 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_650, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_non_call_dcg_goal\'/11"));
                  MR_hl_field(MR_mktag(1), Spec_650, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_650, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_650, 3) = ((MR_Box) (Context_14));
                  MR_hl_field(MR_mktag(1), Spec_650, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[35])));
                }
                {
                  Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_178, 0) = ((MR_Box) (Spec_650));
                  MR_hl_field(MR_mktag(1), Var_178, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_178));
                }
                *STATE_VARIABLE_DCGVar_105 = STATE_VARIABLE_DCGVar_0_104;
                *STATE_VARIABLE_Counter_103 = STATE_VARIABLE_Counter_0_102;
                *STATE_VARIABLE_VarSet_101 = STATE_VARIABLE_VarSet_0_100;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 7:
          {
            // case "\+", "not"
            ;
            {
              MR_Word SubGoalTerm_430;
              MR_Word Var_398;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_430 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_398 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_398 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_29;
                MR_Word Var_30;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_430, ContextPieces_15, &MaybeSubGoal_29, STATE_VARIABLE_VarSet_0_100, STATE_VARIABLE_VarSet_101, STATE_VARIABLE_Counter_0_102, STATE_VARIABLE_Counter_103, STATE_VARIABLE_DCGVar_0_104, &Var_30);
                if (((MR_tag((MR_Word) MaybeSubGoal_29)) == (MR_Integer) 0))
                  *MaybeGoal_16 = MaybeSubGoal_29;
                else
                {
                  MR_Word SubGoal_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_29, (MR_Integer) 0))));
                  MR_Word GoalWarningSpecs_423 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_29, (MR_Integer) 1))));
                  MR_Word Goal_424;

                  {
                    Goal_424 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_424, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), Goal_424, 1) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(3), Goal_424, 2) = ((MR_Box) (SubGoal_31));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_424));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (GoalWarningSpecs_423));
                  }
                }
              }
              else
              {
                MR_Word Var_401;
                MR_Word Spec_429;

                Spec_429 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_401 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_401, 0) = ((MR_Box) (Spec_429));
                  MR_hl_field(MR_mktag(1), Var_401, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_401));
                }
                *STATE_VARIABLE_Counter_103 = STATE_VARIABLE_Counter_0_102;
                *STATE_VARIABLE_VarSet_101 = STATE_VARIABLE_VarSet_0_100;
              }
              *STATE_VARIABLE_DCGVar_105 = STATE_VARIABLE_DCGVar_0_104;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 8:
          {
            // case "all"
            ;
            {
              MR_Word QVarsTerm_35;
              MR_Word SubGoalTerm_448;
              MR_Word Var_382;
              MR_Word Var_383;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                QVarsTerm_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_382 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_382 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_448 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_382, (MR_Integer) 0))));
                  Var_383 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_382, (MR_Integer) 1))));
                  succeeded = (Var_383 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word GenericVarSet_36;
                MR_Word VarsContextPieces_37;
                MR_Word MaybeVars_38;
                MR_Word Var_384;
                MR_Word MaybeSubGoal_445;
                MR_Word Vars0_39;
                MR_Word StateVars0_40;
                MR_Word SubGoalWarningSpecs_41;
                MR_Word SubGoal_442;
                MR_Word Var_388;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_100, &GenericVarSet_36);
                Var_384 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[42])));
                VarsContextPieces_37 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_15, Var_384);
                parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), QVarsTerm_35, GenericVarSet_36, VarsContextPieces_37, &MaybeVars_38);
                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_448, ContextPieces_15, &MaybeSubGoal_445, STATE_VARIABLE_VarSet_0_100, STATE_VARIABLE_VarSet_101, STATE_VARIABLE_Counter_0_102, STATE_VARIABLE_Counter_103, STATE_VARIABLE_DCGVar_0_104, STATE_VARIABLE_DCGVar_105);
                succeeded = ((MR_tag((MR_Word) MaybeVars_38)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_388 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_38, (MR_Integer) 0))));
                  Vars0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_388, (MR_Integer) 0))));
                  StateVars0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_388, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_445)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoal_442 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_445, (MR_Integer) 0))));
                    SubGoalWarningSpecs_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_445, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word StateVars_42;
                  MR_Word Vars_43;
                  MR_Word Goal1_44;
                  MR_Word Goal_438;

                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[4]), StateVars0_40, &StateVars_42);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[5]), Vars0_39, &Vars_43);
                  if ((StateVars_42 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal1_44 = SubGoal_442;
                  else
                    {
                      Goal1_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal1_44, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal1_44, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                      MR_hl_field(MR_mktag(3), Goal1_44, 2) = ((MR_Box) (Context_14));
                      MR_hl_field(MR_mktag(3), Goal1_44, 3) = ((MR_Box) (StateVars_42));
                      MR_hl_field(MR_mktag(3), Goal1_44, 4) = ((MR_Box) (SubGoal_442));
                    }
                  if ((Vars_43 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal_438 = Goal1_44;
                  else
                    {
                      Goal_438 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_438, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal_438, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
                      MR_hl_field(MR_mktag(3), Goal_438, 2) = ((MR_Box) (Context_14));
                      MR_hl_field(MR_mktag(3), Goal_438, 3) = ((MR_Box) (Vars_43));
                      MR_hl_field(MR_mktag(3), Goal_438, 4) = ((MR_Box) (Goal1_44));
                    }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_438));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_41));
                  }
                }
                else
                {
                  MR_Word Var_393;
                  MR_Word Var_394;
                  MR_Word Specs_439;

                  Var_393 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[4]), MaybeVars_38);
                  Var_394 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_445);
                  Specs_439 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_393, Var_394);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_439));
                  }
                }
              }
              else
              {
                MR_Word Var_396;
                MR_Word Spec_447;

                Spec_447 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_15, Context_14, (MR_String) "a list of variables", Functor_12);
                {
                  Var_396 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_396, 0) = ((MR_Box) (Spec_447));
                  MR_hl_field(MR_mktag(1), Var_396, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_396));
                }
                *STATE_VARIABLE_DCGVar_105 = STATE_VARIABLE_DCGVar_0_104;
                *STATE_VARIABLE_Counter_103 = STATE_VARIABLE_Counter_0_102;
                *STATE_VARIABLE_VarSet_101 = STATE_VARIABLE_VarSet_0_100;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 9:
          {
            // case "else"
            ;
            {
              MR_Word ElseGoalTerm_70;
              MR_Word CondContext_72;
              MR_Word CondGoalTerm_582;
              MR_Word ThenGoalTerm_583;
              MR_Word CondThenTerm_69;
              MR_Word Var_270;
              MR_Word Var_271;
              MR_Word Var_272;
              MR_String Var_273;
              MR_Word Var_274;
              MR_Word Var_275;
              MR_Word Var_276;
              MR_String Var_277;
              MR_Word Var_278;
              MR_Word Var_279;
              MR_Word Var_280;
              MR_Word Var_281;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                CondThenTerm_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_270 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_270 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ElseGoalTerm_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_270, (MR_Integer) 0))));
                  Var_271 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_270, (MR_Integer) 1))));
                  succeeded = (Var_271 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) CondThenTerm_69)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_272 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_69, (MR_Integer) 0))));
                      Var_274 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_69, (MR_Integer) 1))));
                      CondContext_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_69, (MR_Integer) 2))));
                      succeeded = ((MR_tag((MR_Word) Var_272)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_273 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_272, (MR_Integer) 0))));
                        succeeded = (strcmp(Var_273, (MR_String) "if") == 0);
                        if (succeeded)
                        {
                          succeeded = (Var_274 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_275 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_274, (MR_Integer) 0))));
                            Var_281 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_274, (MR_Integer) 1))));
                            succeeded = (Var_281 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((MR_tag((MR_Word) Var_275)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                Var_276 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_275, (MR_Integer) 0))));
                                Var_278 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_275, (MR_Integer) 1))));
                                succeeded = ((MR_tag((MR_Word) Var_276)) == (MR_Integer) 0);
                                if (succeeded)
                                {
                                  Var_277 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_276, (MR_Integer) 0))));
                                  succeeded = (strcmp(Var_277, (MR_String) "then") == 0);
                                  if (succeeded)
                                  {
                                    succeeded = (Var_278 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      CondGoalTerm_582 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_278, (MR_Integer) 0))));
                                      Var_279 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_278, (MR_Integer) 1))));
                                      succeeded = (Var_279 != (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        ThenGoalTerm_583 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_279, (MR_Integer) 0))));
                                        Var_280 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_279, (MR_Integer) 1))));
                                        succeeded = (Var_280 == (MR_Word) ((MR_Unsigned) 0U));
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (succeeded)
                parse_tree__parse_dcg_goal__parse_dcg_if_then_else_12_p_0(CondGoalTerm_582, ThenGoalTerm_583, ElseGoalTerm_70, CondContext_72, ContextPieces_15, MaybeGoal_16, STATE_VARIABLE_VarSet_0_100, STATE_VARIABLE_VarSet_101, STATE_VARIABLE_Counter_0_102, STATE_VARIABLE_Counter_103, STATE_VARIABLE_DCGVar_0_104, STATE_VARIABLE_DCGVar_105);
              else
              {
                MR_Word Var_308;
                MR_Word Spec_580;

                {
                  Spec_580 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_580, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_non_call_dcg_goal\'/11"));
                  MR_hl_field(MR_mktag(1), Spec_580, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_580, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_580, 3) = ((MR_Box) (Context_14));
                  MR_hl_field(MR_mktag(1), Spec_580, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[53])));
                }
                {
                  Var_308 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_308, 0) = ((MR_Box) (Spec_580));
                  MR_hl_field(MR_mktag(1), Var_308, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_308));
                }
                *STATE_VARIABLE_DCGVar_105 = STATE_VARIABLE_DCGVar_0_104;
                *STATE_VARIABLE_Counter_103 = STATE_VARIABLE_Counter_0_102;
                *STATE_VARIABLE_VarSet_101 = STATE_VARIABLE_VarSet_0_100;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 10:
          {
            // case "if"
            ;
            {
              MR_Word CondGoalTerm_604;
              MR_Word ThenGoalTerm_605;
              MR_Word Var_230;
              MR_Word Var_231;
              MR_String Var_232;
              MR_Word Var_233;
              MR_Word Var_234;
              MR_Word Var_235;
              MR_Word Var_236;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_230 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_236 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_236 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_230)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_231 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_230, (MR_Integer) 0))));
                    Var_233 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_230, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_231)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_232 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_231, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_232, (MR_String) "then") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_233 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          CondGoalTerm_604 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_233, (MR_Integer) 0))));
                          Var_234 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_233, (MR_Integer) 1))));
                          succeeded = (Var_234 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ThenGoalTerm_605 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_234, (MR_Integer) 0))));
                            Var_235 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_234, (MR_Integer) 1))));
                            succeeded = (Var_235 == (MR_Word) ((MR_Unsigned) 0U));
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word MaybeVarsCondGoal_76;
                MR_Word MaybeThenGoal_77;
                MR_Word CondGoal_79;
                MR_Word CondWarningSpecs_80;
                MR_Word ThenGoal_81;
                MR_Word ThenWarningSpecs_82;
                MR_Word StateVars_591;
                MR_Word Vars_592;

                parse_tree__parse_dcg_goal__parse_dcg_if_then_12_p_0(CondGoalTerm_604, ThenGoalTerm_605, Context_14, ContextPieces_15, &MaybeVarsCondGoal_76, &MaybeThenGoal_77, STATE_VARIABLE_VarSet_0_100, STATE_VARIABLE_VarSet_101, STATE_VARIABLE_Counter_0_102, STATE_VARIABLE_Counter_103, STATE_VARIABLE_DCGVar_0_104, STATE_VARIABLE_DCGVar_105);
                succeeded = ((MR_tag((MR_Word) MaybeVarsCondGoal_76)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Vars_592 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCondGoal_76, (MR_Integer) 0))));
                  StateVars_591 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCondGoal_76, (MR_Integer) 1))));
                  CondGoal_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCondGoal_76, (MR_Integer) 2))));
                  CondWarningSpecs_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCondGoal_76, (MR_Integer) 3))));
                  succeeded = ((MR_tag((MR_Word) MaybeThenGoal_77)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    ThenGoal_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThenGoal_77, (MR_Integer) 0))));
                    ThenWarningSpecs_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThenGoal_77, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word WarningSpecs_83;
                  MR_Word ElseGoal_84;
                  MR_Word Goal_587;

                  WarningSpecs_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), CondWarningSpecs_80, ThenWarningSpecs_82);
                  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (*STATE_VARIABLE_DCGVar_105)), ((MR_Box) (STATE_VARIABLE_DCGVar_0_104)));
                  if (succeeded)
                    {
                      ElseGoal_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ElseGoal_84, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), ElseGoal_84, 1) = ((MR_Box) (Context_14));
                    }
                  else
                  {
                    MR_Word Var_240;
                    MR_Word Var_241;

                    {
                      Var_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_240, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_105));
                      MR_hl_field(MR_mktag(1), Var_240, 1) = ((MR_Box) (Context_14));
                    }
                    {
                      Var_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_241, 0) = ((MR_Box) (STATE_VARIABLE_DCGVar_0_104));
                      MR_hl_field(MR_mktag(1), Var_241, 1) = ((MR_Box) (Context_14));
                    }
                    {
                      ElseGoal_84 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ElseGoal_84, 0) = ((MR_Box) (Context_14));
                      MR_hl_field(MR_mktag(0), ElseGoal_84, 1) = ((MR_Box) (Var_240));
                      MR_hl_field(MR_mktag(0), ElseGoal_84, 2) = ((MR_Box) (Var_241));
                      MR_hl_field(MR_mktag(0), ElseGoal_84, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    }
                  }
                  {
                    Goal_587 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_587, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), Goal_587, 1) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(3), Goal_587, 2) = ((MR_Box) (Vars_592));
                    MR_hl_field(MR_mktag(3), Goal_587, 3) = ((MR_Box) (StateVars_591));
                    MR_hl_field(MR_mktag(3), Goal_587, 4) = ((MR_Box) (CondGoal_79));
                    MR_hl_field(MR_mktag(3), Goal_587, 5) = ((MR_Box) (ThenGoal_81));
                    MR_hl_field(MR_mktag(3), Goal_587, 6) = ((MR_Box) (ElseGoal_84));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_587));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WarningSpecs_83));
                  }
                }
                else
                {
                  MR_Word Var_243;
                  MR_Word Var_244;
                  MR_Word Specs_588;

                  Var_243 = parse_tree__maybe_error__get_any_errors_warnings4_1_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[5]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[5]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeVarsCondGoal_76);
                  Var_244 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeThenGoal_77);
                  Specs_588 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_243, Var_244);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_588));
                  }
                }
              }
              else
              {
                MR_Word Var_268;
                MR_Word Spec_597;

                {
                  Spec_597 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_597, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_non_call_dcg_goal\'/11"));
                  MR_hl_field(MR_mktag(1), Spec_597, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_597, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_597, 3) = ((MR_Box) (Context_14));
                  MR_hl_field(MR_mktag(1), Spec_597, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[53])));
                }
                {
                  Var_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_268, 0) = ((MR_Box) (Spec_597));
                  MR_hl_field(MR_mktag(1), Var_268, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_268));
                }
                *STATE_VARIABLE_DCGVar_105 = STATE_VARIABLE_DCGVar_0_104;
                *STATE_VARIABLE_Counter_103 = STATE_VARIABLE_Counter_0_102;
                *STATE_VARIABLE_VarSet_101 = STATE_VARIABLE_VarSet_0_100;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 11:
          {
            // case "impure"
            ;
            {
              MR_Word SubGoalTerm_21;
              MR_Word Var_409;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_409 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_409 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeGoal0_22;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_21, ContextPieces_15, &MaybeGoal0_22, STATE_VARIABLE_VarSet_0_100, STATE_VARIABLE_VarSet_101, STATE_VARIABLE_Counter_0_102, STATE_VARIABLE_Counter_103, STATE_VARIABLE_DCGVar_0_104, STATE_VARIABLE_DCGVar_105);
                parse_tree__parse_goal__apply_purity_marker_to_maybe_goal_4_p_0(SubGoalTerm_21, (MR_Integer) 2, MaybeGoal0_22, MaybeGoal_16);
              }
              else
              {
                MR_Word Spec_23;
                MR_Word Var_413;

                Spec_23 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_413 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_413, 0) = ((MR_Box) (Spec_23));
                  MR_hl_field(MR_mktag(1), Var_413, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_413));
                }
                *STATE_VARIABLE_DCGVar_105 = STATE_VARIABLE_DCGVar_0_104;
                *STATE_VARIABLE_Counter_103 = STATE_VARIABLE_Counter_0_102;
                *STATE_VARIABLE_VarSet_101 = STATE_VARIABLE_VarSet_0_100;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 12:
          {
            // case "promise_impure"
            ;
            {
              MR_Word SubGoalTerm_417;
              MR_Word Var_403;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_417 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_403 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_403 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeGoal0_415;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_417, ContextPieces_15, &MaybeGoal0_415, STATE_VARIABLE_VarSet_0_100, STATE_VARIABLE_VarSet_101, STATE_VARIABLE_Counter_0_102, STATE_VARIABLE_Counter_103, STATE_VARIABLE_DCGVar_0_104, STATE_VARIABLE_DCGVar_105);
                if (((MR_tag((MR_Word) MaybeGoal0_415)) == (MR_Integer) 0))
                  *MaybeGoal_16 = MaybeGoal0_415;
                else
                {
                  MR_Word Goal0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal0_415, (MR_Integer) 0))));
                  MR_Word GoalWarningSpecs_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal0_415, (MR_Integer) 1))));
                  MR_Word Goal_27;

                  {
                    Goal_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_27, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), Goal_27, 1) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(3), Goal_27, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), Goal_27, 3) = ((MR_Box) (Goal0_25));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_27));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (GoalWarningSpecs_26));
                  }
                }
              }
              else
              {
                MR_Word Var_407;
                MR_Word Spec_416;

                Spec_416 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_407 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_407, 0) = ((MR_Box) (Spec_416));
                  MR_hl_field(MR_mktag(1), Var_407, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_407));
                }
                *STATE_VARIABLE_DCGVar_105 = STATE_VARIABLE_DCGVar_0_104;
                *STATE_VARIABLE_Counter_103 = STATE_VARIABLE_Counter_0_102;
                *STATE_VARIABLE_VarSet_101 = STATE_VARIABLE_VarSet_0_100;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 13:
          {
            // case "promise_pure"
            ;
            {
              MR_Word SubGoalTerm_751;
              MR_Word Var_725;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_751 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_725 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_725 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeGoal0_738;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_751, ContextPieces_15, &MaybeGoal0_738, STATE_VARIABLE_VarSet_0_100, STATE_VARIABLE_VarSet_101, STATE_VARIABLE_Counter_0_102, STATE_VARIABLE_Counter_103, STATE_VARIABLE_DCGVar_0_104, STATE_VARIABLE_DCGVar_105);
                if (((MR_tag((MR_Word) MaybeGoal0_738)) == (MR_Integer) 0))
                  *MaybeGoal_16 = MaybeGoal0_738;
                else
                {
                  MR_Word Goal0_727 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal0_738, (MR_Integer) 0))));
                  MR_Word GoalWarningSpecs_728 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal0_738, (MR_Integer) 1))));
                  MR_Word Goal_729;

                  {
                    Goal_729 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_729, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), Goal_729, 1) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(3), Goal_729, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), Goal_729, 3) = ((MR_Box) (Goal0_727));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_729));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (GoalWarningSpecs_728));
                  }
                }
              }
              else
              {
                MR_Word Var_739;
                MR_Word Spec_741;

                Spec_741 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_739 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_739, 0) = ((MR_Box) (Spec_741));
                  MR_hl_field(MR_mktag(1), Var_739, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_739));
                }
                *STATE_VARIABLE_DCGVar_105 = STATE_VARIABLE_DCGVar_0_104;
                *STATE_VARIABLE_Counter_103 = STATE_VARIABLE_Counter_0_102;
                *STATE_VARIABLE_VarSet_101 = STATE_VARIABLE_VarSet_0_100;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 14:
          {
            // case "promise_semipure"
            ;
            {
              MR_Word SubGoalTerm_789;
              MR_Word Var_763;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_789 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_763 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_763 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeGoal0_776;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_789, ContextPieces_15, &MaybeGoal0_776, STATE_VARIABLE_VarSet_0_100, STATE_VARIABLE_VarSet_101, STATE_VARIABLE_Counter_0_102, STATE_VARIABLE_Counter_103, STATE_VARIABLE_DCGVar_0_104, STATE_VARIABLE_DCGVar_105);
                if (((MR_tag((MR_Word) MaybeGoal0_776)) == (MR_Integer) 0))
                  *MaybeGoal_16 = MaybeGoal0_776;
                else
                {
                  MR_Word Goal0_765 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal0_776, (MR_Integer) 0))));
                  MR_Word GoalWarningSpecs_766 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal0_776, (MR_Integer) 1))));
                  MR_Word Goal_767;

                  {
                    Goal_767 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_767, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), Goal_767, 1) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(3), Goal_767, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), Goal_767, 3) = ((MR_Box) (Goal0_765));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_767));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (GoalWarningSpecs_766));
                  }
                }
              }
              else
              {
                MR_Word Var_777;
                MR_Word Spec_779;

                Spec_779 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_777 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_777, 0) = ((MR_Box) (Spec_779));
                  MR_hl_field(MR_mktag(1), Var_777, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_777));
                }
                *STATE_VARIABLE_DCGVar_105 = STATE_VARIABLE_DCGVar_0_104;
                *STATE_VARIABLE_Counter_103 = STATE_VARIABLE_Counter_0_102;
                *STATE_VARIABLE_VarSet_101 = STATE_VARIABLE_VarSet_0_100;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 15:
          {
            // case "semipure"
            ;
            {
              MR_Word SubGoalTerm_806;
              MR_Word Var_801;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_806 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_801 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_801 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeGoal0_802;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_806, ContextPieces_15, &MaybeGoal0_802, STATE_VARIABLE_VarSet_0_100, STATE_VARIABLE_VarSet_101, STATE_VARIABLE_Counter_0_102, STATE_VARIABLE_Counter_103, STATE_VARIABLE_DCGVar_0_104, STATE_VARIABLE_DCGVar_105);
                parse_tree__parse_goal__apply_purity_marker_to_maybe_goal_4_p_0(SubGoalTerm_806, (MR_Integer) 1, MaybeGoal0_802, MaybeGoal_16);
              }
              else
              {
                MR_Word Spec_803;
                MR_Word Var_804;

                Spec_803 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_804 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_804, 0) = ((MR_Box) (Spec_803));
                  MR_hl_field(MR_mktag(1), Var_804, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_804));
                }
                *STATE_VARIABLE_DCGVar_105 = STATE_VARIABLE_DCGVar_0_104;
                *STATE_VARIABLE_Counter_103 = STATE_VARIABLE_Counter_0_102;
                *STATE_VARIABLE_VarSet_101 = STATE_VARIABLE_VarSet_0_100;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 16:
          {
            // case "some"
            ;
            {
              MR_Word QVarsTerm_944;
              MR_Word SubGoalTerm_976;
              MR_Word Var_819;
              MR_Word Var_820;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                QVarsTerm_944 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_819 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_819 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_976 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_819, (MR_Integer) 0))));
                  Var_820 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_819, (MR_Integer) 1))));
                  succeeded = (Var_820 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word GenericVarSet_903;
                MR_Word VarsContextPieces_904;
                MR_Word MaybeVars_905;
                MR_Word Var_916;
                MR_Word MaybeSubGoal_927;
                MR_Word Vars0_874;
                MR_Word StateVars0_875;
                MR_Word SubGoalWarningSpecs_876;
                MR_Word SubGoal_893;
                MR_Word Var_821;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_100, &GenericVarSet_903);
                Var_916 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[57])));
                VarsContextPieces_904 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_15, Var_916);
                parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), QVarsTerm_944, GenericVarSet_903, VarsContextPieces_904, &MaybeVars_905);
                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_976, ContextPieces_15, &MaybeSubGoal_927, STATE_VARIABLE_VarSet_0_100, STATE_VARIABLE_VarSet_101, STATE_VARIABLE_Counter_0_102, STATE_VARIABLE_Counter_103, STATE_VARIABLE_DCGVar_0_104, STATE_VARIABLE_DCGVar_105);
                succeeded = ((MR_tag((MR_Word) MaybeVars_905)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_821 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_905, (MR_Integer) 0))));
                  Vars0_874 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_821, (MR_Integer) 0))));
                  StateVars0_875 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_821, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_927)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoal_893 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_927, (MR_Integer) 0))));
                    SubGoalWarningSpecs_876 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_927, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word StateVars_850;
                  MR_Word Vars_851;
                  MR_Word Goal1_852;
                  MR_Word Goal_861;

                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[6]), StateVars0_875, &StateVars_850);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[7]), Vars0_874, &Vars_851);
                  if ((StateVars_850 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal1_852 = SubGoal_893;
                  else
                    {
                      Goal1_852 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal1_852, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal1_852, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                      MR_hl_field(MR_mktag(3), Goal1_852, 2) = ((MR_Box) (Context_14));
                      MR_hl_field(MR_mktag(3), Goal1_852, 3) = ((MR_Box) (StateVars_850));
                      MR_hl_field(MR_mktag(3), Goal1_852, 4) = ((MR_Box) (SubGoal_893));
                    }
                  if ((Vars_851 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal_861 = Goal1_852;
                  else
                    {
                      Goal_861 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_861, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal_861, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
                      MR_hl_field(MR_mktag(3), Goal_861, 2) = ((MR_Box) (Context_14));
                      MR_hl_field(MR_mktag(3), Goal_861, 3) = ((MR_Box) (Vars_851));
                      MR_hl_field(MR_mktag(3), Goal_861, 4) = ((MR_Box) (Goal1_852));
                    }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_861));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_876));
                  }
                }
                else
                {
                  MR_Word Var_868;
                  MR_Word Var_869;
                  MR_Word Specs_870;

                  Var_868 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[4]), MaybeVars_905);
                  Var_869 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_927);
                  Specs_870 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_868, Var_869);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_870));
                  }
                }
              }
              else
              {
                MR_Word Var_941;
                MR_Word Spec_943;

                Spec_943 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_15, Context_14, (MR_String) "a list of variables", Functor_12);
                {
                  Var_941 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_941, 0) = ((MR_Box) (Spec_943));
                  MR_hl_field(MR_mktag(1), Var_941, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_941));
                }
                *STATE_VARIABLE_DCGVar_105 = STATE_VARIABLE_DCGVar_0_104;
                *STATE_VARIABLE_Counter_103 = STATE_VARIABLE_Counter_0_102;
                *STATE_VARIABLE_VarSet_101 = STATE_VARIABLE_VarSet_0_100;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 17:
          {
            // case "{}"
            ;
            if ((Args_13 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_228;
              MR_Word Spec_615;

              {
                Spec_615 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_615, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_non_call_dcg_goal\'/11"));
                MR_hl_field(MR_mktag(1), Spec_615, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_615, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_615, 3) = ((MR_Box) (Context_14));
                MR_hl_field(MR_mktag(1), Spec_615, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[61])));
              }
              {
                Var_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_228, 0) = ((MR_Box) (Spec_615));
                MR_hl_field(MR_mktag(1), Var_228, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeGoal_16 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_228));
              }
              *STATE_VARIABLE_VarSet_101 = STATE_VARIABLE_VarSet_0_100;
            }
            else
            {
              MR_Word HeadGoal_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
              MR_Word TailGoals_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
              MR_Word Var_215;
              MR_Word SubGoal_617;

              {
                Var_215 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_215, 0) = ((MR_Box) (HeadGoal_85));
                MR_hl_field(MR_mktag(0), Var_215, 1) = ((MR_Box) (TailGoals_86));
              }
              parse_tree__parse_util__one_or_more_to_conjunction_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Context_14, Var_215, &SubGoal_617);
              parse_tree__parse_goal__parse_goal_5_p_0(SubGoal_617, ContextPieces_15, MaybeGoal_16, STATE_VARIABLE_VarSet_0_100, STATE_VARIABLE_VarSet_101);
            }
            *STATE_VARIABLE_Counter_103 = STATE_VARIABLE_Counter_0_102;
            *STATE_VARIABLE_DCGVar_105 = STATE_VARIABLE_DCGVar_0_104;
            succeeded = MR_TRUE;
          }
          break;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_if_then_else_12_p_0(
  MR_Word CondGoalTerm_13,
  MR_Word ThenGoalTerm_14,
  MR_Word ElseGoalTerm_15,
  MR_Word Context_16,
  MR_Word ContextPieces_17,
  MR_Word * MaybeGoal_18,
  MR_Word STATE_VARIABLE_VarSet_0_42,
  MR_Word * STATE_VARIABLE_VarSet_43,
  MR_Word STATE_VARIABLE_Counter_0_44,
  MR_Word * STATE_VARIABLE_Counter_45,
  MR_Word Var0_21,
  MR_Word * Var_22)
{
  {
    MR_bool succeeded;
    MR_Word MaybeVarsCond_23;
    MR_Word MaybeThen1_24;
    MR_Word VarThen_25;
    MR_Word MaybeElse1_26;
    MR_Word VarElse_27;
    MR_Word STATE_VARIABLE_VarSet_46_46;
    MR_Word STATE_VARIABLE_Counter_47_47;
    MR_Word Vars_28;
    MR_Word StateVars_29;
    MR_Word Cond_30;
    MR_Word CondWarningSpecs_31;
    MR_Word Then1_32;
    MR_Word ThenWarningSpecs_33;
    MR_Word Else1_34;
    MR_Word ElseWarningSpecs_35;

    parse_tree__parse_dcg_goal__parse_dcg_if_then_12_p_0(CondGoalTerm_13, ThenGoalTerm_14, Context_16, ContextPieces_17, &MaybeVarsCond_23, &MaybeThen1_24, STATE_VARIABLE_VarSet_0_42, &STATE_VARIABLE_VarSet_46_46, STATE_VARIABLE_Counter_0_44, &STATE_VARIABLE_Counter_47_47, Var0_21, &VarThen_25);
    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(ElseGoalTerm_15, ContextPieces_17, &MaybeElse1_26, STATE_VARIABLE_VarSet_46_46, STATE_VARIABLE_VarSet_43, STATE_VARIABLE_Counter_47_47, STATE_VARIABLE_Counter_45, Var0_21, &VarElse_27);
    succeeded = ((MR_tag((MR_Word) MaybeVarsCond_23)) == (MR_Integer) 1);
    if (succeeded)
    {
      Vars_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCond_23, (MR_Integer) 0))));
      StateVars_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCond_23, (MR_Integer) 1))));
      Cond_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCond_23, (MR_Integer) 2))));
      CondWarningSpecs_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCond_23, (MR_Integer) 3))));
      succeeded = ((MR_tag((MR_Word) MaybeThen1_24)) == (MR_Integer) 1);
      if (succeeded)
      {
        Then1_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThen1_24, (MR_Integer) 0))));
        ThenWarningSpecs_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThen1_24, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) MaybeElse1_26)) == (MR_Integer) 1);
        if (succeeded)
        {
          Else1_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElse1_26, (MR_Integer) 0))));
          ElseWarningSpecs_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElse1_26, (MR_Integer) 1))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word WarningSpecs_36;
      MR_Word Then_37;
      MR_Word Else_38;
      MR_Word Goal_40;
      MR_Word Var_50;
      MR_Word TypeInfo_68_68;

      Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ThenWarningSpecs_33, ElseWarningSpecs_35);
      WarningSpecs_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), CondWarningSpecs_31, Var_50);
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (VarThen_25)), ((MR_Box) (Var0_21)));
      if (succeeded)
      {
        TypeInfo_68_68 = (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_68_68, ((MR_Box) (VarElse_27)), ((MR_Box) (Var0_21)));
      }
      if (succeeded)
      {
        *Var_22 = Var0_21;
        Then_37 = Then1_32;
        Else_38 = Else1_34;
      }
      else
      {
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (VarThen_25)), ((MR_Box) (Var0_21)));
        if (succeeded)
        {
          MR_Word Unify_39;
          MR_Word Var_51;
          MR_Word Var_52;

          *Var_22 = VarElse_27;
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (*Var_22));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Context_16));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (VarThen_25));
            MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Context_16));
          }
          {
            Unify_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Unify_39, 0) = ((MR_Box) (Context_16));
            MR_hl_field(MR_mktag(0), Unify_39, 1) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(0), Unify_39, 2) = ((MR_Box) (Var_52));
            MR_hl_field(MR_mktag(0), Unify_39, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          {
            Then_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Then_37, 0) = ((MR_Box) (Context_16));
            MR_hl_field(MR_mktag(2), Then_37, 1) = ((MR_Box) (Then1_32));
            MR_hl_field(MR_mktag(2), Then_37, 2) = ((MR_Box) (Unify_39));
          }
          Else_38 = Else1_34;
        }
        else
        {
          succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (VarElse_27)), ((MR_Box) (Var0_21)));
          if (succeeded)
          {
            MR_Word Var_54;
            MR_Word Var_55;
            MR_Word Unify_61;

            *Var_22 = VarThen_25;
            Then_37 = Then1_32;
            {
              Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (*Var_22));
              MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Context_16));
            }
            {
              Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (VarElse_27));
              MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Context_16));
            }
            {
              Unify_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Unify_61, 0) = ((MR_Box) (Context_16));
              MR_hl_field(MR_mktag(0), Unify_61, 1) = ((MR_Box) (Var_54));
              MR_hl_field(MR_mktag(0), Unify_61, 2) = ((MR_Box) (Var_55));
              MR_hl_field(MR_mktag(0), Unify_61, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
            {
              Else_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Else_38, 0) = ((MR_Box) (Context_16));
              MR_hl_field(MR_mktag(2), Else_38, 1) = ((MR_Box) (Else1_34));
              MR_hl_field(MR_mktag(2), Else_38, 2) = ((MR_Box) (Unify_61));
            }
          }
          else
          {
            *Var_22 = VarElse_27;
            parse_tree__prog_util__rename_in_goal_4_p_0(VarThen_25, VarElse_27, Then1_32, &Then_37);
            Else_38 = Else1_34;
          }
        }
      }
      {
        Goal_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Goal_40, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Goal_40, 1) = ((MR_Box) (Context_16));
        MR_hl_field(MR_mktag(3), Goal_40, 2) = ((MR_Box) (Vars_28));
        MR_hl_field(MR_mktag(3), Goal_40, 3) = ((MR_Box) (StateVars_29));
        MR_hl_field(MR_mktag(3), Goal_40, 4) = ((MR_Box) (Cond_30));
        MR_hl_field(MR_mktag(3), Goal_40, 5) = ((MR_Box) (Then_37));
        MR_hl_field(MR_mktag(3), Goal_40, 6) = ((MR_Box) (Else_38));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_18 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_40));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WarningSpecs_36));
      }
    }
    else
    {
      MR_Word Specs_41;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;

      Var_57 = parse_tree__maybe_error__get_any_errors_warnings4_1_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[5]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[5]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeVarsCond_23);
      Var_59 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeThen1_24);
      Var_60 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeElse1_26);
      Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_59, Var_60);
      Specs_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_57, Var_58);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_18 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_41));
      }
      *Var_22 = Var0_21;
    }
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_if_then_12_p_0(
  MR_Word CondGoalTerm_13,
  MR_Word ThenGoalTerm_14,
  MR_Word Context_15,
  MR_Word ContextPieces_16,
  MR_Word * MaybeVarsCond_17,
  MR_Word * MaybeThen_18,
  MR_Word STATE_VARIABLE_VarSet_0_31,
  MR_Word * STATE_VARIABLE_VarSet_32,
  MR_Word STATE_VARIABLE_Counter_0_33,
  MR_Word * STATE_VARIABLE_Counter_34,
  MR_Word Var0_21,
  MR_Word * Var_22)
{
  {
    MR_bool succeeded;
    MR_Word Var1_23;
    MR_Word MaybeThen1_24;
    MR_Word Var2_25;
    MR_Word STATE_VARIABLE_VarSet_35_35;
    MR_Word STATE_VARIABLE_Counter_36_36;
    MR_Word STATE_VARIABLE_VarSet_37_37;
    MR_Word STATE_VARIABLE_Counter_38_38;
    MR_Word TypeInfo_45_45;

    parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0(CondGoalTerm_13, ContextPieces_16, MaybeVarsCond_17, STATE_VARIABLE_VarSet_0_31, &STATE_VARIABLE_VarSet_35_35, STATE_VARIABLE_Counter_0_33, &STATE_VARIABLE_Counter_36_36, Var0_21, &Var1_23);
    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(ThenGoalTerm_14, ContextPieces_16, &MaybeThen1_24, STATE_VARIABLE_VarSet_35_35, &STATE_VARIABLE_VarSet_37_37, STATE_VARIABLE_Counter_36_36, &STATE_VARIABLE_Counter_38_38, Var1_23, &Var2_25);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (Var0_21)), ((MR_Box) (Var1_23)));
    succeeded = !(succeeded);
    if (succeeded)
    {
      TypeInfo_45_45 = (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (Var1_23)), ((MR_Box) (Var2_25)));
    }
    if (succeeded)
      if (((MR_tag((MR_Word) MaybeThen1_24)) == (MR_Integer) 0))
      {
        *MaybeThen_18 = MaybeThen1_24;
        *Var_22 = Var2_25;
        *STATE_VARIABLE_VarSet_32 = STATE_VARIABLE_VarSet_37_37;
        *STATE_VARIABLE_Counter_34 = STATE_VARIABLE_Counter_38_38;
      }
      else
      {
        MR_Word Then1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThen1_24, (MR_Integer) 0))));
        MR_Word ThenWarningSpecs_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThen1_24, (MR_Integer) 1))));
        MR_Word Unify_28;
        MR_Word Then_29;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Integer N_53;
        MR_String StringN_54;
        MR_String VarName_55;
        MR_Word STATE_VARIABLE_VarSet_18_58;

        mercury__counter__allocate_3_p_0(&N_53, STATE_VARIABLE_Counter_38_38, STATE_VARIABLE_Counter_34);
        mercury__string__int_to_string_2_p_0(N_53, &StringN_54);
        mercury__string__append_3_p_2((MR_String) "DCG_", StringN_54, &VarName_55);
        mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_22, STATE_VARIABLE_VarSet_37_37, &STATE_VARIABLE_VarSet_18_58);
        mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_22, VarName_55, STATE_VARIABLE_VarSet_18_58, STATE_VARIABLE_VarSet_32);
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (*Var_22));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Context_15));
        }
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var2_25));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Context_15));
        }
        {
          Unify_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Unify_28, 0) = ((MR_Box) (Context_15));
          MR_hl_field(MR_mktag(0), Unify_28, 1) = ((MR_Box) (Var_41));
          MR_hl_field(MR_mktag(0), Unify_28, 2) = ((MR_Box) (Var_42));
          MR_hl_field(MR_mktag(0), Unify_28, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Then_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Then_29, 0) = ((MR_Box) (Context_15));
          MR_hl_field(MR_mktag(2), Then_29, 1) = ((MR_Box) (Then1_26));
          MR_hl_field(MR_mktag(2), Then_29, 2) = ((MR_Box) (Unify_28));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeThen_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Then_29));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ThenWarningSpecs_27));
        }
      }
    else
    {
      *MaybeThen_18 = MaybeThen1_24;
      *Var_22 = Var2_25;
      *STATE_VARIABLE_Counter_34 = STATE_VARIABLE_Counter_38_38;
      *STATE_VARIABLE_VarSet_32 = STATE_VARIABLE_VarSet_37_37;
    }
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_76;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__645__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_76);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_76));
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_70;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__644__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_70);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_70));
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0(
  MR_Word Term_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeVarsGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_32,
  MR_Word * STATE_VARIABLE_VarSet_33,
  MR_Word STATE_VARIABLE_Counter_0_34,
  MR_Word * STATE_VARIABLE_Counter_35,
  MR_Word STATE_VARIABLE_DCGVar_0_36,
  MR_Word * STATE_VARIABLE_DCGVar_37)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_10)) == (MR_Integer) 0);
    MR_Word MaybeVars_22;
    MR_Word GoalTerm_23;
    MR_Word MaybeGoal_24;
    MR_Word VarsTerm_16;
    MR_Word SubGoalTerm_17;
    MR_Word Var_38;
    MR_String Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Vars0_25;
    MR_Word StateVars0_26;
    MR_Word Goal_27;
    MR_Word GoalWarningSpecs_28;
    MR_Word Var_61;

    if (succeeded)
    {
      Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_10, (MR_Integer) 0))));
      Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_10, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_39 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 0))));
        succeeded = (strcmp(Var_39, (MR_String) "some") == 0);
        if (succeeded)
        {
          succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            VarsTerm_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0))));
            Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 1))));
            succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SubGoalTerm_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0))));
              Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 1))));
              succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word GenericVarSet_19;
      MR_Word VarsContextPieces_21;
      MR_Word Var_54;

      mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_32, &GenericVarSet_19);
      Var_54 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[57])));
      VarsContextPieces_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_11, Var_54);
      parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_16, GenericVarSet_19, VarsContextPieces_21, &MaybeVars_22);
      GoalTerm_23 = SubGoalTerm_17;
    }
    else
    {
      MaybeVars_22 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_4[1]));
      GoalTerm_23 = Term_10;
    }
    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(GoalTerm_23, ContextPieces_11, &MaybeGoal_24, STATE_VARIABLE_VarSet_0_32, STATE_VARIABLE_VarSet_33, STATE_VARIABLE_Counter_0_34, STATE_VARIABLE_Counter_35, STATE_VARIABLE_DCGVar_0_36, STATE_VARIABLE_DCGVar_37);
    succeeded = ((MR_tag((MR_Word) MaybeVars_22)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_22, (MR_Integer) 0))));
      Vars0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 0))));
      StateVars0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) MaybeGoal_24)) == (MR_Integer) 1);
      if (succeeded)
      {
        Goal_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal_24, (MR_Integer) 0))));
        GoalWarningSpecs_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal_24, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Word Vars_29;
      MR_Word StateVars_30;

      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[1]), Vars0_25, &Vars_29);
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[2]), StateVars0_26, &StateVars_30);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        *MaybeVarsGoal_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Vars_29));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (StateVars_30));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Goal_27));
        MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (GoalWarningSpecs_28));
      }
    }
    else
    {
      MR_Word Specs_31;
      MR_Word Var_64;
      MR_Word Var_65;

      Var_64 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[4]), MaybeVars_22);
      Var_65 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeGoal_24);
      Specs_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_64, Var_65);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeVarsGoal_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_31));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_50;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal__122__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_50);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_50));
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(
  MR_Word Term_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26,
  MR_Word STATE_VARIABLE_Counter_0_27,
  MR_Word * STATE_VARIABLE_Counter_28,
  MR_Word STATE_VARIABLE_DCGVar_0_29,
  MR_Word * STATE_VARIABLE_DCGVar_30)
{
  {
    MR_bool succeeded;
    MR_Word Context_16;
    MR_Word ProgTerm_17;
    MR_Word SymName_18;
    MR_Word Args0_19;

    Context_16 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_10);
    mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Term_10, &ProgTerm_17);
    succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgTerm_17, &SymName_18, &Args0_19);
    if (succeeded)
    {
      MR_Word MaybeGoalPrime_22;
      MR_Word STATE_VARIABLE_VarSet_32_32;
      MR_Word STATE_VARIABLE_Counter_33_33;
      MR_Word STATE_VARIABLE_DCGVar_34_34;
      MR_Word TypeInfo_53_53;
      MR_Word TypeInfo_54_54;
      MR_String Functor_20;
      MR_Word Args1_21;
      MR_Word Var_31;

      succeeded = ((MR_tag((MR_Word) SymName_18)) == (MR_Integer) 0);
      if (succeeded)
      {
        Functor_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_18, (MR_Integer) 0))));
        Var_31 = (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[0]);
        TypeInfo_53_53 = (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[1]);
        TypeInfo_54_54 = (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[0]);
        mercury__list__map_3_p_0(TypeInfo_53_53, TypeInfo_54_54, Var_31, Args0_19, &Args1_21);
        succeeded = parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0(Functor_20, Args1_21, Context_16, ContextPieces_11, &MaybeGoalPrime_22, STATE_VARIABLE_VarSet_0_25, &STATE_VARIABLE_VarSet_32_32, STATE_VARIABLE_Counter_0_27, &STATE_VARIABLE_Counter_33_33, STATE_VARIABLE_DCGVar_0_29, &STATE_VARIABLE_DCGVar_34_34);
      }
      if (succeeded)
      {
        *STATE_VARIABLE_DCGVar_30 = STATE_VARIABLE_DCGVar_34_34;
        *STATE_VARIABLE_Counter_28 = STATE_VARIABLE_Counter_33_33;
        *STATE_VARIABLE_VarSet_26 = STATE_VARIABLE_VarSet_32_32;
        *MaybeGoal_12 = MaybeGoalPrime_22;
      }
      else
      {
        MR_Word Goal_23;

        parse_tree__parse_dcg_goal__make_dcg_call_10_p_0(SymName_18, Args0_19, Context_16, &Goal_23, STATE_VARIABLE_VarSet_0_25, STATE_VARIABLE_VarSet_26, STATE_VARIABLE_Counter_0_27, STATE_VARIABLE_Counter_28, STATE_VARIABLE_DCGVar_0_29, STATE_VARIABLE_DCGVar_30);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_23));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
    }
    else
    {
      MR_Word Args_24;
      MR_Word Goal_46;

      {
        Args_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Args_24, 0) = ((MR_Box) (ProgTerm_17));
        MR_hl_field(MR_mktag(1), Args_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      parse_tree__parse_dcg_goal__make_dcg_call_10_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_4[0]), Args_24, Context_16, &Goal_46, STATE_VARIABLE_VarSet_0_25, STATE_VARIABLE_VarSet_26, STATE_VARIABLE_Counter_0_27, STATE_VARIABLE_Counter_28, STATE_VARIABLE_DCGVar_0_29, STATE_VARIABLE_DCGVar_30);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_46));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
  MR_Word List0_4,
  MR_Word Term_5,
  MR_Word * List_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) List0_4)) == (MR_Integer) 0);
    MR_Word Var_12;
    MR_String Var_13;
    MR_Word Var_14;

    if (succeeded)
    {
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), List0_4, (MR_Integer) 0))));
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), List0_4, (MR_Integer) 1))));
      succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0))));
          succeeded = (strcmp(Var_13, (MR_String) "[]") == 0);
        }
      }
    }
    if (succeeded)
    {
      *List_6 = Term_5;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Head_8;
      MR_Word Tail0_9;
      MR_Word Context_10;
      MR_Word Tail_11;
      MR_Word Var_15;
      MR_String Var_16;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_24;

      succeeded = ((MR_tag((MR_Word) List0_4)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), List0_4, (MR_Integer) 0))));
        Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), List0_4, (MR_Integer) 1))));
        Context_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), List0_4, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));
          succeeded = (strcmp(Var_16, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            succeeded = (Var_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Head_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 0))));
              Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 1))));
              succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Tail0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));
                Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1))));
                succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(Tail0_9, Term_5, &Tail_11);
                  if (succeeded)
                  {
                    Var_24 = (MR_Word) ((MR_Unsigned) 0U);
                    {
                      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Tail_11));
                      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_24));
                    }
                    {
                      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Head_8));
                      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_23));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      *List_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_15));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_22));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_10));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__append_to_disjunct_4_p_0(
  MR_Word AddedGoal_5,
  MR_Word Context_6,
  MR_Word Disjunct0_7,
  MR_Word * Disjunct_8)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Disjunct0_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Disjunct0_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word Disjunct0Context_9;
    MR_Word SubDisjunctA0_10;
    MR_Word SubDisjunctB0_11;

    if (succeeded)
    {
      Disjunct0Context_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Disjunct0_7, (MR_Integer) 1))));
      SubDisjunctA0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Disjunct0_7, (MR_Integer) 2))));
      SubDisjunctB0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Disjunct0_7, (MR_Integer) 3))));
      {
        MR_Word SubDisjunctA_12;
        MR_Word SubDisjunctB_13;

        parse_tree__parse_dcg_goal__append_to_disjunct_4_p_0(AddedGoal_5, Context_6, SubDisjunctA0_10, &SubDisjunctA_12);
        parse_tree__parse_dcg_goal__append_to_disjunct_4_p_0(AddedGoal_5, Context_6, SubDisjunctB0_11, &SubDisjunctB_13);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *Disjunct_8 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Disjunct0Context_9));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubDisjunctA_12));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (SubDisjunctB_13));
        }
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Disjunct_8 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Context_6));
        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Disjunct0_7));
        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (AddedGoal_5));
      }
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__new_dcg_var_5_p_0(
  MR_Word STATE_VARIABLE_VarSet_0_12,
  MR_Word * STATE_VARIABLE_VarSet_13,
  MR_Word STATE_VARIABLE_Counter_0_14,
  MR_Word * STATE_VARIABLE_Counter_15,
  MR_Word * DCGVar_8)
{
  {
    MR_Integer N_9;
    MR_String StringN_10;
    MR_String VarName_11;
    MR_Word STATE_VARIABLE_VarSet_18_18;

    mercury__counter__allocate_3_p_0(&N_9, STATE_VARIABLE_Counter_0_14, STATE_VARIABLE_Counter_15);
    mercury__string__int_to_string_2_p_0(N_9, &StringN_10);
    mercury__string__append_3_p_2((MR_String) "DCG_", StringN_10, &VarName_11);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DCGVar_8, STATE_VARIABLE_VarSet_0_12, &STATE_VARIABLE_VarSet_18_18);
    mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *DCGVar_8, VarName_11, STATE_VARIABLE_VarSet_18_18, STATE_VARIABLE_VarSet_13);
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__make_dcg_call_10_p_0(
  MR_Word SymName_11,
  MR_Word Args0_12,
  MR_Word Context_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22,
  MR_Word STATE_VARIABLE_Counter_0_23,
  MR_Word * STATE_VARIABLE_Counter_24,
  MR_Word STATE_VARIABLE_DCGVar_0_25,
  MR_Word * STATE_VARIABLE_DCGVar_26)
{
  {
    MR_Word Args_20;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Integer N_44;
    MR_String StringN_45;
    MR_String VarName_46;
    MR_Word STATE_VARIABLE_VarSet_18_49;

    mercury__counter__allocate_3_p_0(&N_44, STATE_VARIABLE_Counter_0_23, STATE_VARIABLE_Counter_24);
    mercury__string__int_to_string_2_p_0(N_44, &StringN_45);
    mercury__string__append_3_p_2((MR_String) "DCG_", StringN_45, &VarName_46);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_DCGVar_26, STATE_VARIABLE_VarSet_0_21, &STATE_VARIABLE_VarSet_18_49);
    mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *STATE_VARIABLE_DCGVar_26, VarName_46, STATE_VARIABLE_VarSet_18_49, STATE_VARIABLE_VarSet_22);
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (STATE_VARIABLE_DCGVar_0_25));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Context_13));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_26));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Context_13));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
    }
    Args_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[1]), Args0_12, Var_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *Goal_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Context_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SymName_11));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Args_20));
      MR_hl_field(MR_mktag(1), base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
  }
}

void mercury__parse_tree__parse_dcg_goal__init(void)
{
}

void mercury__parse_tree__parse_dcg_goal__init_type_tables(void)
{
}

void mercury__parse_tree__parse_dcg_goal__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_dcg_goal__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_dcg_goal.
