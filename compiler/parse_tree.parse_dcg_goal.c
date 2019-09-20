/*
** Automatically generated from `parse_dcg_goal.m'
** by the Mercury compiler,
** version rotd-2019-09-20
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


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__637__1_2_p_0(
  MR_Word HeadVar__1_74,
  MR_Word * HeadVar__2_75);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__636__1_2_p_0(
  MR_Word HeadVar__1_68,
  MR_Word * HeadVar__2_69);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__281__2_2_p_0(
  MR_Word HeadVar__1_789,
  MR_Word * HeadVar__2_790);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__280__2_2_p_0(
  MR_Word HeadVar__1_783,
  MR_Word * HeadVar__2_784);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__281__1_2_p_0(
  MR_Word HeadVar__1_667,
  MR_Word * HeadVar__2_668);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__280__1_2_p_0(
  MR_Word HeadVar__1_661,
  MR_Word * HeadVar__2_662);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__598__1_2_p_0(
  MR_Word HeadVar__1_690,
  MR_Word * HeadVar__2_691);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal__120__1_2_p_0(
  MR_Word HeadVar__1_47,
  MR_Word * HeadVar__2_48);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_clause__81__1_2_p_0(
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
  MR_Word STATE_VARIABLE_VarSet_0_93,
  MR_Word * STATE_VARIABLE_VarSet_94,
  MR_Word STATE_VARIABLE_Counter_0_95,
  MR_Word * STATE_VARIABLE_Counter_96,
  MR_Word STATE_VARIABLE_DCGVar_0_97,
  MR_Word * STATE_VARIABLE_DCGVar_98);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_if_then_else_12_p_0(
  MR_Word CondGoalTerm_13,
  MR_Word ThenGoalTerm_14,
  MR_Word ElseGoalTerm_15,
  MR_Word Context_16,
  MR_Word ContextPieces_17,
  MR_Word * MaybeGoal_18,
  MR_Word STATE_VARIABLE_VarSet_0_38,
  MR_Word * STATE_VARIABLE_VarSet_39,
  MR_Word STATE_VARIABLE_Counter_0_40,
  MR_Word * STATE_VARIABLE_Counter_41,
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
  MR_Word STATE_VARIABLE_VarSet_0_30,
  MR_Word * STATE_VARIABLE_VarSet_31,
  MR_Word STATE_VARIABLE_Counter_0_32,
  MR_Word * STATE_VARIABLE_Counter_33,
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
  MR_Word STATE_VARIABLE_VarSet_0_31,
  MR_Word * STATE_VARIABLE_VarSet_32,
  MR_Word STATE_VARIABLE_Counter_0_33,
  MR_Word * STATE_VARIABLE_Counter_34,
  MR_Word STATE_VARIABLE_DCGVar_0_35,
  MR_Word * STATE_VARIABLE_DCGVar_36);

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


static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_1[69][2];

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_2[3][5];

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_3[9][3];

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_4[9][1];




static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_1[69][2] = {
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
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_4[3])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 64 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_4[5])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 65 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_4[6])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 66 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_4[7])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 67 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_4[8])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 68 */
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

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_4[9][1] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[20])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "[|]"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[25])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[35])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[53])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[61])))
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
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__637__1_2_p_0(
  MR_Word HeadVar__1_74,
  MR_Word * HeadVar__2_75)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_74, HeadVar__2_75);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__636__1_2_p_0(
  MR_Word HeadVar__1_68,
  MR_Word * HeadVar__2_69)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_68, HeadVar__2_69);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__281__2_2_p_0(
  MR_Word HeadVar__1_789,
  MR_Word * HeadVar__2_790)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_789, HeadVar__2_790);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__280__2_2_p_0(
  MR_Word HeadVar__1_783,
  MR_Word * HeadVar__2_784)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_783, HeadVar__2_784);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__281__1_2_p_0(
  MR_Word HeadVar__1_667,
  MR_Word * HeadVar__2_668)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_667, HeadVar__2_668);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__280__1_2_p_0(
  MR_Word HeadVar__1_661,
  MR_Word * HeadVar__2_662)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_661, HeadVar__2_662);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__598__1_2_p_0(
  MR_Word HeadVar__1_690,
  MR_Word * HeadVar__2_691)
{
  mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_690, HeadVar__2_691);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal__120__1_2_p_0(
  MR_Word HeadVar__1_47,
  MR_Word * HeadVar__2_48)
{
  mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_47, HeadVar__2_48);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_clause__81__1_2_p_0(
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

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_clause__81__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_52);
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
    HeadContextPieces_24 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[68]))));
    parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_8, DCG_Head_10, VarSet0_9, HeadContextPieces_24, &MaybeFunctor_25);
    if (((MR_tag((MR_Word) MaybeFunctor_25)) == (MR_Integer) 0))
    {
      MR_Word FunctorSpecs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFunctor_25, (MR_Integer) 0))));
      MR_Word Specs_33;
      MR_Word Var_38;

      Var_38 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeBodyGoal_20);
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
    MR_Word conv4_HeadVar__2_790;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__281__2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__2_790);
    *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_790));
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
    MR_Word conv3_HeadVar__2_784;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__280__2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_784);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_784));
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
    MR_Word conv2_HeadVar__2_668;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__281__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_668);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_668));
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
    MR_Word conv1_HeadVar__2_662;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__280__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_662);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_662));
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
    MR_Word conv0_HeadVar__2_691;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__598__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_691);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_691));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0(
  MR_String Functor_12,
  MR_Word Args_13,
  MR_Word Context_14,
  MR_Word ContextPieces_15,
  MR_Word * MaybeGoal_16,
  MR_Word STATE_VARIABLE_VarSet_0_93,
  MR_Word * STATE_VARIABLE_VarSet_94,
  MR_Word STATE_VARIABLE_Counter_0_95,
  MR_Word * STATE_VARIABLE_Counter_96,
  MR_Word STATE_VARIABLE_DCGVar_0_97,
  MR_Word * STATE_VARIABLE_DCGVar_98)
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
              MR_Word SubGoalTermA_498;
              MR_Word SubGoalTermB_499;
              MR_Word Var_354;
              MR_Word Var_355;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTermA_498 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_354 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_354 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTermB_499 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_354, (MR_Integer) 0))));
                  Var_355 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_354, (MR_Integer) 1))));
                  succeeded = (Var_355 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_VarSet_356_356;
                MR_Word STATE_VARIABLE_Counter_357_357;
                MR_Word STATE_VARIABLE_DCGVar_358_358;
                MR_Word MaybeSubGoalA_490;
                MR_Word MaybeSubGoalB_491;
                MR_Word SubGoalA_486;
                MR_Word SubGoalB_487;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTermA_498, ContextPieces_15, &MaybeSubGoalA_490, STATE_VARIABLE_VarSet_0_93, &STATE_VARIABLE_VarSet_356_356, STATE_VARIABLE_Counter_0_95, &STATE_VARIABLE_Counter_357_357, STATE_VARIABLE_DCGVar_0_97, &STATE_VARIABLE_DCGVar_358_358);
                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTermB_499, ContextPieces_15, &MaybeSubGoalB_491, STATE_VARIABLE_VarSet_356_356, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_357_357, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_358_358, STATE_VARIABLE_DCGVar_98);
                succeeded = ((MR_tag((MR_Word) MaybeSubGoalA_490)) == (MR_Integer) 1);
                if (succeeded)
                {
                  SubGoalA_486 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_490, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoalB_491)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoalB_487 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_491, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word Goal_482;

                  {
                    Goal_482 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_482, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Goal_482, 1) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(3), Goal_482, 2) = ((MR_Box) (SubGoalA_486));
                    MR_hl_field(MR_mktag(3), Goal_482, 3) = ((MR_Box) (SubGoalB_487));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_482));
                  }
                }
                else
                {
                  MR_Word Var_362;
                  MR_Word Var_363;
                  MR_Word Specs_483;

                  Var_362 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalA_490);
                  Var_363 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalB_491);
                  Specs_483 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_362, Var_363);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_483));
                  }
                }
              }
              else
              {
                MR_Word Var_364;
                MR_Word Spec_494;

                Spec_494 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_364 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_364, 0) = ((MR_Box) (Spec_494));
                  MR_hl_field(MR_mktag(1), Var_364, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_364));
                }
                *STATE_VARIABLE_DCGVar_98 = STATE_VARIABLE_DCGVar_0_97;
                *STATE_VARIABLE_Counter_96 = STATE_VARIABLE_Counter_0_95;
                *STATE_VARIABLE_VarSet_94 = STATE_VARIABLE_VarSet_0_93;
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
              MR_Word SubGoalTermA_47;
              MR_Word SubGoalTermB_48;
              MR_Word Var_366;
              MR_Word Var_367;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTermA_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_366 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_366 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTermB_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_366, (MR_Integer) 0))));
                  Var_367 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_366, (MR_Integer) 1))));
                  succeeded = (Var_367 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoalA_49;
                MR_Word MaybeSubGoalB_50;
                MR_Word STATE_VARIABLE_VarSet_368_368;
                MR_Word STATE_VARIABLE_Counter_369_369;
                MR_Word STATE_VARIABLE_DCGVar_370_370;
                MR_Word SubGoalA_51;
                MR_Word SubGoalB_52;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTermA_47, ContextPieces_15, &MaybeSubGoalA_49, STATE_VARIABLE_VarSet_0_93, &STATE_VARIABLE_VarSet_368_368, STATE_VARIABLE_Counter_0_95, &STATE_VARIABLE_Counter_369_369, STATE_VARIABLE_DCGVar_0_97, &STATE_VARIABLE_DCGVar_370_370);
                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTermB_48, ContextPieces_15, &MaybeSubGoalB_50, STATE_VARIABLE_VarSet_368_368, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_369_369, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_370_370, STATE_VARIABLE_DCGVar_98);
                succeeded = ((MR_tag((MR_Word) MaybeSubGoalA_49)) == (MR_Integer) 1);
                if (succeeded)
                {
                  SubGoalA_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_49, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoalB_50)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoalB_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_50, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word Goal_469;

                  {
                    Goal_469 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Goal_469, 0) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(2), Goal_469, 1) = ((MR_Box) (SubGoalA_51));
                    MR_hl_field(MR_mktag(2), Goal_469, 2) = ((MR_Box) (SubGoalB_52));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_469));
                  }
                }
                else
                {
                  MR_Word Var_374;
                  MR_Word Var_375;
                  MR_Word Specs_470;

                  Var_374 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalA_49);
                  Var_375 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalB_50);
                  Specs_470 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_374, Var_375);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_470));
                  }
                }
              }
              else
              {
                MR_Word Var_376;
                MR_Word Spec_475;

                Spec_475 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_376 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_376, 0) = ((MR_Box) (Spec_475));
                  MR_hl_field(MR_mktag(1), Var_376, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_376));
                }
                *STATE_VARIABLE_DCGVar_98 = STATE_VARIABLE_DCGVar_0_97;
                *STATE_VARIABLE_Counter_96 = STATE_VARIABLE_Counter_0_95;
                *STATE_VARIABLE_VarSet_94 = STATE_VARIABLE_VarSet_0_93;
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
              MR_Word Arg0_651;
              MR_Word Var_99;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Arg0_651 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_99 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word Goal_643;
                MR_Word OutVarTerm_645;
                MR_Word Arg_646;

                parse_tree__parse_dcg_goal__new_dcg_var_5_p_0(STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_98);
                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Arg0_651, &Arg_646);
                {
                  OutVarTerm_645 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), OutVarTerm_645, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_98));
                  MR_hl_field(MR_mktag(1), OutVarTerm_645, 1) = ((MR_Box) (Context_14));
                }
                {
                  Goal_643 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Goal_643, 0) = ((MR_Box) (Context_14));
                  MR_hl_field(MR_mktag(0), Goal_643, 1) = ((MR_Box) (Arg_646));
                  MR_hl_field(MR_mktag(0), Goal_643, 2) = ((MR_Box) (OutVarTerm_645));
                  MR_hl_field(MR_mktag(0), Goal_643, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_643));
                }
              }
              else
              {
                MR_Word ProgArgs_92;
                MR_Word Goal_647;

                mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[3]), Args_13, &ProgArgs_92);
                parse_tree__parse_dcg_goal__make_dcg_call_10_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_4[2]), ProgArgs_92, Context_14, &Goal_647, STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_0_97, STATE_VARIABLE_DCGVar_98);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_647));
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
              MR_Word SubGoalTermA_544;
              MR_Word SubGoalTermB_545;
              MR_Word Var_328;
              MR_Word Var_329;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTermA_544 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_328 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_328 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTermB_545 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_328, (MR_Integer) 0))));
                  Var_329 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_328, (MR_Integer) 1))));
                  succeeded = (Var_329 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word CondGoalTerm_53;
                MR_Word ThenGoalTerm_54;
                MR_Word Var_330;
                MR_String Var_331;
                MR_Word Var_332;
                MR_Word Var_333;
                MR_Word Var_334;

                succeeded = ((MR_tag((MR_Word) SubGoalTermA_544)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_330 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoalTermA_544, (MR_Integer) 0))));
                  Var_332 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoalTermA_544, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_330)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_331 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_330, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_331, (MR_String) "->") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_332 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        CondGoalTerm_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_332, (MR_Integer) 0))));
                        Var_333 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_332, (MR_Integer) 1))));
                        succeeded = (Var_333 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ThenGoalTerm_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_333, (MR_Integer) 0))));
                          Var_334 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_333, (MR_Integer) 1))));
                          succeeded = (Var_334 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                  parse_tree__parse_dcg_goal__parse_dcg_if_then_else_12_p_0(CondGoalTerm_53, ThenGoalTerm_54, SubGoalTermB_545, Context_14, ContextPieces_15, MaybeGoal_16, STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_0_97, STATE_VARIABLE_DCGVar_98);
                else
                {
                  MR_Word MaybeSubGoalA0_57;
                  MR_Word VarA_58;
                  MR_Word MaybeSubGoalB0_59;
                  MR_Word VarB_60;
                  MR_Word STATE_VARIABLE_VarSet_338_338;
                  MR_Word STATE_VARIABLE_Counter_339_339;
                  MR_Word SubGoalA0_61;
                  MR_Word SubGoalB0_62;

                  parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTermA_544, ContextPieces_15, &MaybeSubGoalA0_57, STATE_VARIABLE_VarSet_0_93, &STATE_VARIABLE_VarSet_338_338, STATE_VARIABLE_Counter_0_95, &STATE_VARIABLE_Counter_339_339, STATE_VARIABLE_DCGVar_0_97, &VarA_58);
                  parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTermB_545, ContextPieces_15, &MaybeSubGoalB0_59, STATE_VARIABLE_VarSet_338_338, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_339_339, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_0_97, &VarB_60);
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoalA0_57)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoalA0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA0_57, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) MaybeSubGoalB0_59)) == (MR_Integer) 1);
                    if (succeeded)
                      SubGoalB0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB0_59, (MR_Integer) 0))));
                  }
                  if (succeeded)
                  {
                    MR_Word Goal_524;
                    MR_Word TypeInfo_994_994;

                    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (VarA_58)), ((MR_Box) (STATE_VARIABLE_DCGVar_0_97)));
                    if (succeeded)
                    {
                      TypeInfo_994_994 = (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_994_994, ((MR_Box) (VarB_60)), ((MR_Box) (STATE_VARIABLE_DCGVar_0_97)));
                    }
                    if (succeeded)
                    {
                      *STATE_VARIABLE_DCGVar_98 = STATE_VARIABLE_DCGVar_0_97;
                      {
                        Goal_524 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Goal_524, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(MR_mktag(3), Goal_524, 1) = ((MR_Box) (Context_14));
                        MR_hl_field(MR_mktag(3), Goal_524, 2) = ((MR_Box) (SubGoalA0_61));
                        MR_hl_field(MR_mktag(3), Goal_524, 3) = ((MR_Box) (SubGoalB0_62));
                      }
                    }
                    else
                    {
                      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (VarA_58)), ((MR_Box) (STATE_VARIABLE_DCGVar_0_97)));
                      if (succeeded)
                      {
                        MR_Word Unify_64;
                        MR_Word Var_342;
                        MR_Word Var_343;
                        MR_Word SubGoalA_513;

                        *STATE_VARIABLE_DCGVar_98 = VarB_60;
                        {
                          Var_342 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_342, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_98));
                          MR_hl_field(MR_mktag(1), Var_342, 1) = ((MR_Box) (Context_14));
                        }
                        {
                          Var_343 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_343, 0) = ((MR_Box) (VarA_58));
                          MR_hl_field(MR_mktag(1), Var_343, 1) = ((MR_Box) (Context_14));
                        }
                        {
                          Unify_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Unify_64, 0) = ((MR_Box) (Context_14));
                          MR_hl_field(MR_mktag(0), Unify_64, 1) = ((MR_Box) (Var_342));
                          MR_hl_field(MR_mktag(0), Unify_64, 2) = ((MR_Box) (Var_343));
                          MR_hl_field(MR_mktag(0), Unify_64, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                        }
                        parse_tree__parse_dcg_goal__append_to_disjunct_4_p_0(Unify_64, Context_14, SubGoalA0_61, &SubGoalA_513);
                        {
                          Goal_524 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Goal_524, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                          MR_hl_field(MR_mktag(3), Goal_524, 1) = ((MR_Box) (Context_14));
                          MR_hl_field(MR_mktag(3), Goal_524, 2) = ((MR_Box) (SubGoalA_513));
                          MR_hl_field(MR_mktag(3), Goal_524, 3) = ((MR_Box) (SubGoalB0_62));
                        }
                      }
                      else
                      {
                        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (VarB_60)), ((MR_Box) (STATE_VARIABLE_DCGVar_0_97)));
                        if (succeeded)
                        {
                          MR_Word Var_345;
                          MR_Word Var_346;
                          MR_Word SubGoalB_514;
                          MR_Word Unify_515;

                          *STATE_VARIABLE_DCGVar_98 = VarA_58;
                          {
                            Var_345 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_345, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_98));
                            MR_hl_field(MR_mktag(1), Var_345, 1) = ((MR_Box) (Context_14));
                          }
                          {
                            Var_346 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_346, 0) = ((MR_Box) (VarB_60));
                            MR_hl_field(MR_mktag(1), Var_346, 1) = ((MR_Box) (Context_14));
                          }
                          {
                            Unify_515 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Unify_515, 0) = ((MR_Box) (Context_14));
                            MR_hl_field(MR_mktag(0), Unify_515, 1) = ((MR_Box) (Var_345));
                            MR_hl_field(MR_mktag(0), Unify_515, 2) = ((MR_Box) (Var_346));
                            MR_hl_field(MR_mktag(0), Unify_515, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                          }
                          parse_tree__parse_dcg_goal__append_to_disjunct_4_p_0(Unify_515, Context_14, SubGoalB0_62, &SubGoalB_514);
                          {
                            Goal_524 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Goal_524, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                            MR_hl_field(MR_mktag(3), Goal_524, 1) = ((MR_Box) (Context_14));
                            MR_hl_field(MR_mktag(3), Goal_524, 2) = ((MR_Box) (SubGoalA0_61));
                            MR_hl_field(MR_mktag(3), Goal_524, 3) = ((MR_Box) (SubGoalB_514));
                          }
                        }
                        else
                        {
                          MR_Word SubGoalA_516;

                          *STATE_VARIABLE_DCGVar_98 = VarB_60;
                          parse_tree__prog_util__rename_in_goal_4_p_0(VarA_58, VarB_60, SubGoalA0_61, &SubGoalA_516);
                          {
                            Goal_524 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Goal_524, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                            MR_hl_field(MR_mktag(3), Goal_524, 1) = ((MR_Box) (Context_14));
                            MR_hl_field(MR_mktag(3), Goal_524, 2) = ((MR_Box) (SubGoalA_516));
                            MR_hl_field(MR_mktag(3), Goal_524, 3) = ((MR_Box) (SubGoalB0_62));
                          }
                        }
                      }
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_16 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_524));
                    }
                  }
                  else
                  {
                    MR_Word Var_350;
                    MR_Word Var_351;
                    MR_Word Specs_527;

                    *STATE_VARIABLE_DCGVar_98 = VarA_58;
                    Var_350 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalA0_57);
                    Var_351 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalB0_59);
                    Specs_527 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_350, Var_351);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_16 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_527));
                    }
                  }
                }
              }
              else
              {
                MR_Word Var_352;
                MR_Word Spec_540;

                Spec_540 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_352 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_352, 0) = ((MR_Box) (Spec_540));
                  MR_hl_field(MR_mktag(1), Var_352, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_352));
                }
                *STATE_VARIABLE_DCGVar_98 = STATE_VARIABLE_DCGVar_0_97;
                *STATE_VARIABLE_Counter_96 = STATE_VARIABLE_Counter_0_95;
                *STATE_VARIABLE_VarSet_94 = STATE_VARIABLE_VarSet_0_93;
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
              MR_Word Arg0_88;
              MR_Word Var_109;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Arg0_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_109 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word Arg_89;
                MR_Word DCGVarTerm_90;
                MR_Word Goal_637;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Arg0_88, &Arg_89);
                {
                  DCGVarTerm_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), DCGVarTerm_90, 0) = ((MR_Box) (STATE_VARIABLE_DCGVar_0_97));
                  MR_hl_field(MR_mktag(1), DCGVarTerm_90, 1) = ((MR_Box) (Context_14));
                }
                {
                  Goal_637 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Goal_637, 0) = ((MR_Box) (Context_14));
                  MR_hl_field(MR_mktag(0), Goal_637, 1) = ((MR_Box) (Arg_89));
                  MR_hl_field(MR_mktag(0), Goal_637, 2) = ((MR_Box) (DCGVarTerm_90));
                  MR_hl_field(MR_mktag(0), Goal_637, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_637));
                }
              }
              else
              {
                MR_Word Var_111;
                MR_Word Spec_638;

                Spec_638 = parse_tree__parse_goal__should_have_two_terms_infix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Spec_638));
                  MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_111));
                }
              }
              *STATE_VARIABLE_VarSet_94 = STATE_VARIABLE_VarSet_0_93;
              *STATE_VARIABLE_Counter_96 = STATE_VARIABLE_Counter_0_95;
              *STATE_VARIABLE_DCGVar_98 = STATE_VARIABLE_DCGVar_0_97;
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
              MR_Word Var_215;
              MR_Word Var_216;
              MR_Word Goal_599;

              parse_tree__parse_dcg_goal__new_dcg_var_5_p_0(STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_98);
              {
                Var_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_215, 0) = ((MR_Box) (STATE_VARIABLE_DCGVar_0_97));
                MR_hl_field(MR_mktag(1), Var_215, 1) = ((MR_Box) (Context_14));
              }
              {
                Var_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_216, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_98));
                MR_hl_field(MR_mktag(1), Var_216, 1) = ((MR_Box) (Context_14));
              }
              {
                Goal_599 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Goal_599, 0) = ((MR_Box) (Context_14));
                MR_hl_field(MR_mktag(0), Goal_599, 1) = ((MR_Box) (Var_215));
                MR_hl_field(MR_mktag(0), Goal_599, 2) = ((MR_Box) (Var_216));
                MR_hl_field(MR_mktag(0), Goal_599, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeGoal_16 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_599));
              }
            }
            else
            {
              MR_Word Var_204;
              MR_Word Var_205;
              MR_Word Var_210;
              MR_Word Spec_602;

              {
                Var_205 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_205, 0) = ((MR_Box) (Context_14));
                MR_hl_field(MR_mktag(0), Var_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[63])));
              }
              {
                Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_204, 0) = ((MR_Box) (Var_205));
                MR_hl_field(MR_mktag(1), Var_204, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_602 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_602, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_602, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), Spec_602, 2) = ((MR_Box) (Var_204));
              }
              {
                Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_210, 0) = ((MR_Box) (Spec_602));
                MR_hl_field(MR_mktag(1), Var_210, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeGoal_16 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_210));
              }
              *STATE_VARIABLE_VarSet_94 = STATE_VARIABLE_VarSet_0_93;
              *STATE_VARIABLE_Counter_96 = STATE_VARIABLE_Counter_0_95;
              *STATE_VARIABLE_DCGVar_98 = STATE_VARIABLE_DCGVar_0_97;
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            // case "[|]"
            ;
            {
              MR_Word Var_113;
              MR_Word Var_114;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_113 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_113, (MR_Integer) 1))));
                  succeeded = (Var_114 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word ConsTerm0_84;
                MR_Word ConsTerm_85;
                MR_Word OutVarTerm_86;
                MR_Word Term_87;

                parse_tree__parse_dcg_goal__new_dcg_var_5_p_0(STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_98);
                {
                  ConsTerm0_84 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ConsTerm0_84, 0) = ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_4[4]));
                  MR_hl_field(MR_mktag(0), ConsTerm0_84, 1) = ((MR_Box) (Args_13));
                  MR_hl_field(MR_mktag(0), ConsTerm0_84, 2) = ((MR_Box) (Context_14));
                }
                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsTerm0_84, &ConsTerm_85);
                {
                  OutVarTerm_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), OutVarTerm_86, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_98));
                  MR_hl_field(MR_mktag(1), OutVarTerm_86, 1) = ((MR_Box) (Context_14));
                }
                succeeded = parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(ConsTerm_85, OutVarTerm_86, &Term_87);
                if (succeeded)
                {
                  MR_Word Var_123;
                  MR_Word Goal_614;

                  {
                    Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (STATE_VARIABLE_DCGVar_0_97));
                    MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Context_14));
                  }
                  {
                    Goal_614 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Goal_614, 0) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(0), Goal_614, 1) = ((MR_Box) (Var_123));
                    MR_hl_field(MR_mktag(0), Goal_614, 2) = ((MR_Box) (Term_87));
                    MR_hl_field(MR_mktag(0), Goal_614, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_614));
                  }
                }
                else
                {
                  MR_Word Var_138;
                  MR_Word Var_139;
                  MR_Word Var_144;
                  MR_Word Spec_615;

                  {
                    Var_139 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_139, 0) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(0), Var_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[64])));
                  }
                  {
                    Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Var_139));
                    MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_615 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_615, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), Spec_615, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(0), Spec_615, 2) = ((MR_Box) (Var_138));
                  }
                  {
                    Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (Spec_615));
                    MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_144));
                  }
                }
              }
              else
              {
                MR_Word Var_171;
                MR_Word Var_172;
                MR_Word Var_177;
                MR_Word Spec_625;

                {
                  Var_172 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_172, 0) = ((MR_Box) (Context_14));
                  MR_hl_field(MR_mktag(0), Var_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[65])));
                }
                {
                  Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_171, 0) = ((MR_Box) (Var_172));
                  MR_hl_field(MR_mktag(1), Var_171, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_625 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_625, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_625, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(0), Spec_625, 2) = ((MR_Box) (Var_171));
                }
                {
                  Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_177, 0) = ((MR_Box) (Spec_625));
                  MR_hl_field(MR_mktag(1), Var_177, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_177));
                }
                *STATE_VARIABLE_DCGVar_98 = STATE_VARIABLE_DCGVar_0_97;
                *STATE_VARIABLE_Counter_96 = STATE_VARIABLE_Counter_0_95;
                *STATE_VARIABLE_VarSet_94 = STATE_VARIABLE_VarSet_0_93;
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
              MR_Word SubGoalTerm_443;
              MR_Word Var_416;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_443 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_416 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_416 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_28;
                MR_Word Var_29;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_443, ContextPieces_15, &MaybeSubGoal_28, STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_0_97, &Var_29);
                if (((MR_tag((MR_Word) MaybeSubGoal_28)) == (MR_Integer) 0))
                  *MaybeGoal_16 = MaybeSubGoal_28;
                else
                {
                  MR_Word SubGoal_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_28, (MR_Integer) 0))));
                  MR_Word Var_419;

                  {
                    Var_419 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_419, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), Var_419, 1) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(3), Var_419, 2) = ((MR_Box) (SubGoal_30));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_419));
                  }
                }
              }
              else
              {
                MR_Word Var_420;
                MR_Word Spec_442;

                Spec_442 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_420 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_420, 0) = ((MR_Box) (Spec_442));
                  MR_hl_field(MR_mktag(1), Var_420, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_420));
                }
                *STATE_VARIABLE_Counter_96 = STATE_VARIABLE_Counter_0_95;
                *STATE_VARIABLE_VarSet_94 = STATE_VARIABLE_VarSet_0_93;
              }
              *STATE_VARIABLE_DCGVar_98 = STATE_VARIABLE_DCGVar_0_97;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 8:
          {
            // case "all"
            ;
            {
              MR_Word QVarsTerm_34;
              MR_Word SubGoalTerm_457;
              MR_Word Var_400;
              MR_Word Var_401;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                QVarsTerm_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_400 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_400 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_457 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_400, (MR_Integer) 0))));
                  Var_401 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_400, (MR_Integer) 1))));
                  succeeded = (Var_401 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word GenericVarSet_35;
                MR_Word VarsContextPieces_36;
                MR_Word MaybeVars_37;
                MR_Word Var_402;
                MR_Word MaybeSubGoal_454;
                MR_Word Vars0_38;
                MR_Word StateVars0_39;
                MR_Word SubGoal_451;
                MR_Word Var_406;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_93, &GenericVarSet_35);
                Var_402 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[42])));
                VarsContextPieces_36 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_15, Var_402);
                parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), QVarsTerm_34, GenericVarSet_35, VarsContextPieces_36, &MaybeVars_37);
                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_457, ContextPieces_15, &MaybeSubGoal_454, STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_0_97, STATE_VARIABLE_DCGVar_98);
                succeeded = ((MR_tag((MR_Word) MaybeVars_37)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_406 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_37, (MR_Integer) 0))));
                  Vars0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_406, (MR_Integer) 0))));
                  StateVars0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_406, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_454)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_451 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_454, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word StateVars_40;
                  MR_Word Vars_41;
                  MR_Word Goal1_42;
                  MR_Word Goal_447;

                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[4]), StateVars0_39, &StateVars_40);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[5]), Vars0_38, &Vars_41);
                  if ((StateVars_40 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal1_42 = SubGoal_451;
                  else
                    {
                      Goal1_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal1_42, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal1_42, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                      MR_hl_field(MR_mktag(3), Goal1_42, 2) = ((MR_Box) (Context_14));
                      MR_hl_field(MR_mktag(3), Goal1_42, 3) = ((MR_Box) (StateVars_40));
                      MR_hl_field(MR_mktag(3), Goal1_42, 4) = ((MR_Box) (SubGoal_451));
                    }
                  if ((Vars_41 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal_447 = Goal1_42;
                  else
                    {
                      Goal_447 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_447, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal_447, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
                      MR_hl_field(MR_mktag(3), Goal_447, 2) = ((MR_Box) (Context_14));
                      MR_hl_field(MR_mktag(3), Goal_447, 3) = ((MR_Box) (Vars_41));
                      MR_hl_field(MR_mktag(3), Goal_447, 4) = ((MR_Box) (Goal1_42));
                    }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_447));
                  }
                }
                else
                {
                  MR_Word Var_411;
                  MR_Word Var_412;
                  MR_Word Specs_448;

                  Var_411 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[4]), MaybeVars_37);
                  Var_412 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_454);
                  Specs_448 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_411, Var_412);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_448));
                  }
                }
              }
              else
              {
                MR_Word Var_414;
                MR_Word Spec_456;

                Spec_456 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_15, Context_14, (MR_String) "a list of variables", Functor_12);
                {
                  Var_414 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_414, 0) = ((MR_Box) (Spec_456));
                  MR_hl_field(MR_mktag(1), Var_414, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_414));
                }
                *STATE_VARIABLE_DCGVar_98 = STATE_VARIABLE_DCGVar_0_97;
                *STATE_VARIABLE_Counter_96 = STATE_VARIABLE_Counter_0_95;
                *STATE_VARIABLE_VarSet_94 = STATE_VARIABLE_VarSet_0_93;
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
              MR_Word ElseGoalTerm_66;
              MR_Word CondContext_68;
              MR_Word CondGoalTerm_557;
              MR_Word ThenGoalTerm_558;
              MR_Word CondThenTerm_65;
              MR_Word Var_283;
              MR_Word Var_284;
              MR_Word Var_285;
              MR_String Var_286;
              MR_Word Var_287;
              MR_Word Var_288;
              MR_Word Var_289;
              MR_String Var_290;
              MR_Word Var_291;
              MR_Word Var_292;
              MR_Word Var_293;
              MR_Word Var_294;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                CondThenTerm_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_283 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_283 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ElseGoalTerm_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_283, (MR_Integer) 0))));
                  Var_284 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_283, (MR_Integer) 1))));
                  succeeded = (Var_284 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) CondThenTerm_65)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_285 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_65, (MR_Integer) 0))));
                      Var_287 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_65, (MR_Integer) 1))));
                      CondContext_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_65, (MR_Integer) 2))));
                      succeeded = ((MR_tag((MR_Word) Var_285)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_286 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_285, (MR_Integer) 0))));
                        succeeded = (strcmp(Var_286, (MR_String) "if") == 0);
                        if (succeeded)
                        {
                          succeeded = (Var_287 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_288 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_287, (MR_Integer) 0))));
                            Var_294 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_287, (MR_Integer) 1))));
                            succeeded = (Var_294 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((MR_tag((MR_Word) Var_288)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                Var_289 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_288, (MR_Integer) 0))));
                                Var_291 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_288, (MR_Integer) 1))));
                                succeeded = ((MR_tag((MR_Word) Var_289)) == (MR_Integer) 0);
                                if (succeeded)
                                {
                                  Var_290 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_289, (MR_Integer) 0))));
                                  succeeded = (strcmp(Var_290, (MR_String) "then") == 0);
                                  if (succeeded)
                                  {
                                    succeeded = (Var_291 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      CondGoalTerm_557 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_291, (MR_Integer) 0))));
                                      Var_292 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_291, (MR_Integer) 1))));
                                      succeeded = (Var_292 != (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        ThenGoalTerm_558 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_292, (MR_Integer) 0))));
                                        Var_293 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_292, (MR_Integer) 1))));
                                        succeeded = (Var_293 == (MR_Word) ((MR_Unsigned) 0U));
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
                parse_tree__parse_dcg_goal__parse_dcg_if_then_else_12_p_0(CondGoalTerm_557, ThenGoalTerm_558, ElseGoalTerm_66, CondContext_68, ContextPieces_15, MaybeGoal_16, STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_0_97, STATE_VARIABLE_DCGVar_98);
              else
              {
                MR_Word Var_320;
                MR_Word Var_321;
                MR_Word Var_326;
                MR_Word Spec_555;

                {
                  Var_321 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_321, 0) = ((MR_Box) (Context_14));
                  MR_hl_field(MR_mktag(0), Var_321, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[66])));
                }
                {
                  Var_320 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_320, 0) = ((MR_Box) (Var_321));
                  MR_hl_field(MR_mktag(1), Var_320, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_555 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_555, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_555, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(0), Spec_555, 2) = ((MR_Box) (Var_320));
                }
                {
                  Var_326 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_326, 0) = ((MR_Box) (Spec_555));
                  MR_hl_field(MR_mktag(1), Var_326, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_326));
                }
                *STATE_VARIABLE_DCGVar_98 = STATE_VARIABLE_DCGVar_0_97;
                *STATE_VARIABLE_Counter_96 = STATE_VARIABLE_Counter_0_95;
                *STATE_VARIABLE_VarSet_94 = STATE_VARIABLE_VarSet_0_93;
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
              MR_Word CondGoalTerm_579;
              MR_Word ThenGoalTerm_580;
              MR_Word Var_238;
              MR_Word Var_239;
              MR_String Var_240;
              MR_Word Var_241;
              MR_Word Var_242;
              MR_Word Var_243;
              MR_Word Var_244;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_238 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_244 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_244 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_238)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_239 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_238, (MR_Integer) 0))));
                    Var_241 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_238, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_239)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_240 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_239, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_240, (MR_String) "then") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_241 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          CondGoalTerm_579 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_241, (MR_Integer) 0))));
                          Var_242 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_241, (MR_Integer) 1))));
                          succeeded = (Var_242 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ThenGoalTerm_580 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_242, (MR_Integer) 0))));
                            Var_243 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_242, (MR_Integer) 1))));
                            succeeded = (Var_243 == (MR_Word) ((MR_Unsigned) 0U));
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word MaybeVarsCondGoal_72;
                MR_Word MaybeThenGoal_73;
                MR_Word CondGoal_75;
                MR_Word ThenGoal_76;
                MR_Word StateVars_566;
                MR_Word Vars_567;

                parse_tree__parse_dcg_goal__parse_dcg_if_then_12_p_0(CondGoalTerm_579, ThenGoalTerm_580, Context_14, ContextPieces_15, &MaybeVarsCondGoal_72, &MaybeThenGoal_73, STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_0_97, STATE_VARIABLE_DCGVar_98);
                succeeded = ((MR_tag((MR_Word) MaybeVarsCondGoal_72)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Vars_567 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCondGoal_72, (MR_Integer) 0))));
                  StateVars_566 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCondGoal_72, (MR_Integer) 1))));
                  CondGoal_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCondGoal_72, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) MaybeThenGoal_73)) == (MR_Integer) 1);
                  if (succeeded)
                    ThenGoal_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThenGoal_73, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word ElseGoal_77;
                  MR_Word Goal_562;

                  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (*STATE_VARIABLE_DCGVar_98)), ((MR_Box) (STATE_VARIABLE_DCGVar_0_97)));
                  if (succeeded)
                    {
                      ElseGoal_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ElseGoal_77, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), ElseGoal_77, 1) = ((MR_Box) (Context_14));
                    }
                  else
                  {
                    MR_Word Var_248;
                    MR_Word Var_249;

                    {
                      Var_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_248, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_98));
                      MR_hl_field(MR_mktag(1), Var_248, 1) = ((MR_Box) (Context_14));
                    }
                    {
                      Var_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_249, 0) = ((MR_Box) (STATE_VARIABLE_DCGVar_0_97));
                      MR_hl_field(MR_mktag(1), Var_249, 1) = ((MR_Box) (Context_14));
                    }
                    {
                      ElseGoal_77 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ElseGoal_77, 0) = ((MR_Box) (Context_14));
                      MR_hl_field(MR_mktag(0), ElseGoal_77, 1) = ((MR_Box) (Var_248));
                      MR_hl_field(MR_mktag(0), ElseGoal_77, 2) = ((MR_Box) (Var_249));
                      MR_hl_field(MR_mktag(0), ElseGoal_77, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    }
                  }
                  {
                    Goal_562 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_562, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), Goal_562, 1) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(3), Goal_562, 2) = ((MR_Box) (Vars_567));
                    MR_hl_field(MR_mktag(3), Goal_562, 3) = ((MR_Box) (StateVars_566));
                    MR_hl_field(MR_mktag(3), Goal_562, 4) = ((MR_Box) (CondGoal_75));
                    MR_hl_field(MR_mktag(3), Goal_562, 5) = ((MR_Box) (ThenGoal_76));
                    MR_hl_field(MR_mktag(3), Goal_562, 6) = ((MR_Box) (ElseGoal_77));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_562));
                  }
                }
                else
                {
                  MR_Word Var_251;
                  MR_Word Var_252;
                  MR_Word Specs_563;

                  Var_251 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[5]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[5]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeVarsCondGoal_72);
                  Var_252 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeThenGoal_73);
                  Specs_563 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_251, Var_252);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_563));
                  }
                }
              }
              else
              {
                MR_Word Var_275;
                MR_Word Var_276;
                MR_Word Var_281;
                MR_Word Spec_572;

                {
                  Var_276 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_276, 0) = ((MR_Box) (Context_14));
                  MR_hl_field(MR_mktag(0), Var_276, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[66])));
                }
                {
                  Var_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_275, 0) = ((MR_Box) (Var_276));
                  MR_hl_field(MR_mktag(1), Var_275, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_572 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_572, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_572, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(0), Spec_572, 2) = ((MR_Box) (Var_275));
                }
                {
                  Var_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_281, 0) = ((MR_Box) (Spec_572));
                  MR_hl_field(MR_mktag(1), Var_281, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_281));
                }
                *STATE_VARIABLE_DCGVar_98 = STATE_VARIABLE_DCGVar_0_97;
                *STATE_VARIABLE_Counter_96 = STATE_VARIABLE_Counter_0_95;
                *STATE_VARIABLE_VarSet_94 = STATE_VARIABLE_VarSet_0_93;
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
              MR_Word Var_428;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_428 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_428 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeGoal0_22;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_21, ContextPieces_15, &MaybeGoal0_22, STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_0_97, STATE_VARIABLE_DCGVar_98);
                parse_tree__parse_goal__apply_purity_marker_to_maybe_goal_4_p_0(SubGoalTerm_21, (MR_Integer) 2, MaybeGoal0_22, MaybeGoal_16);
              }
              else
              {
                MR_Word Spec_23;
                MR_Word Var_432;

                Spec_23 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_432 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_432, 0) = ((MR_Box) (Spec_23));
                  MR_hl_field(MR_mktag(1), Var_432, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_432));
                }
                *STATE_VARIABLE_DCGVar_98 = STATE_VARIABLE_DCGVar_0_97;
                *STATE_VARIABLE_Counter_96 = STATE_VARIABLE_Counter_0_95;
                *STATE_VARIABLE_VarSet_94 = STATE_VARIABLE_VarSet_0_93;
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
              MR_Word SubGoalTerm_436;
              MR_Word Var_422;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_436 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_422 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_422 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeGoal0_434;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_436, ContextPieces_15, &MaybeGoal0_434, STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_0_97, STATE_VARIABLE_DCGVar_98);
                if (((MR_tag((MR_Word) MaybeGoal0_434)) == (MR_Integer) 0))
                  *MaybeGoal_16 = MaybeGoal0_434;
                else
                {
                  MR_Word Goal0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal0_434, (MR_Integer) 0))));
                  MR_Word Goal_26;

                  {
                    Goal_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_26, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), Goal_26, 1) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(3), Goal_26, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), Goal_26, 3) = ((MR_Box) (Goal0_25));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_26));
                  }
                }
              }
              else
              {
                MR_Word Var_426;
                MR_Word Spec_435;

                Spec_435 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_426 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_426, 0) = ((MR_Box) (Spec_435));
                  MR_hl_field(MR_mktag(1), Var_426, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_426));
                }
                *STATE_VARIABLE_DCGVar_98 = STATE_VARIABLE_DCGVar_0_97;
                *STATE_VARIABLE_Counter_96 = STATE_VARIABLE_Counter_0_95;
                *STATE_VARIABLE_VarSet_94 = STATE_VARIABLE_VarSet_0_93;
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
              MR_Word SubGoalTerm_718;
              MR_Word Var_696;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_718 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_696 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_696 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeGoal0_706;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_718, ContextPieces_15, &MaybeGoal0_706, STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_0_97, STATE_VARIABLE_DCGVar_98);
                if (((MR_tag((MR_Word) MaybeGoal0_706)) == (MR_Integer) 0))
                  *MaybeGoal_16 = MaybeGoal0_706;
                else
                {
                  MR_Word Goal0_698 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal0_706, (MR_Integer) 0))));
                  MR_Word Goal_699;

                  {
                    Goal_699 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_699, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), Goal_699, 1) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(3), Goal_699, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), Goal_699, 3) = ((MR_Box) (Goal0_698));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_699));
                  }
                }
              }
              else
              {
                MR_Word Var_707;
                MR_Word Spec_709;

                Spec_709 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_707 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_707, 0) = ((MR_Box) (Spec_709));
                  MR_hl_field(MR_mktag(1), Var_707, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_707));
                }
                *STATE_VARIABLE_DCGVar_98 = STATE_VARIABLE_DCGVar_0_97;
                *STATE_VARIABLE_Counter_96 = STATE_VARIABLE_Counter_0_95;
                *STATE_VARIABLE_VarSet_94 = STATE_VARIABLE_VarSet_0_93;
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
              MR_Word SubGoalTerm_751;
              MR_Word Var_729;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_751 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_729 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_729 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeGoal0_739;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_751, ContextPieces_15, &MaybeGoal0_739, STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_0_97, STATE_VARIABLE_DCGVar_98);
                if (((MR_tag((MR_Word) MaybeGoal0_739)) == (MR_Integer) 0))
                  *MaybeGoal_16 = MaybeGoal0_739;
                else
                {
                  MR_Word Goal0_731 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal0_739, (MR_Integer) 0))));
                  MR_Word Goal_732;

                  {
                    Goal_732 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_732, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), Goal_732, 1) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(3), Goal_732, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), Goal_732, 3) = ((MR_Box) (Goal0_731));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_732));
                  }
                }
              }
              else
              {
                MR_Word Var_740;
                MR_Word Spec_742;

                Spec_742 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_740 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_740, 0) = ((MR_Box) (Spec_742));
                  MR_hl_field(MR_mktag(1), Var_740, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_740));
                }
                *STATE_VARIABLE_DCGVar_98 = STATE_VARIABLE_DCGVar_0_97;
                *STATE_VARIABLE_Counter_96 = STATE_VARIABLE_Counter_0_95;
                *STATE_VARIABLE_VarSet_94 = STATE_VARIABLE_VarSet_0_93;
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
              MR_Word SubGoalTerm_767;
              MR_Word Var_762;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_767 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_762 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_762 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeGoal0_763;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_767, ContextPieces_15, &MaybeGoal0_763, STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_0_97, STATE_VARIABLE_DCGVar_98);
                parse_tree__parse_goal__apply_purity_marker_to_maybe_goal_4_p_0(SubGoalTerm_767, (MR_Integer) 1, MaybeGoal0_763, MaybeGoal_16);
              }
              else
              {
                MR_Word Spec_764;
                MR_Word Var_765;

                Spec_764 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_765 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_765, 0) = ((MR_Box) (Spec_764));
                  MR_hl_field(MR_mktag(1), Var_765, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_765));
                }
                *STATE_VARIABLE_DCGVar_98 = STATE_VARIABLE_DCGVar_0_97;
                *STATE_VARIABLE_Counter_96 = STATE_VARIABLE_Counter_0_95;
                *STATE_VARIABLE_VarSet_94 = STATE_VARIABLE_VarSet_0_93;
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
              MR_Word QVarsTerm_903;
              MR_Word SubGoalTerm_934;
              MR_Word Var_780;
              MR_Word Var_781;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                QVarsTerm_903 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_780 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_780 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_934 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_780, (MR_Integer) 0))));
                  Var_781 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_780, (MR_Integer) 1))));
                  succeeded = (Var_781 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word GenericVarSet_863;
                MR_Word VarsContextPieces_864;
                MR_Word MaybeVars_865;
                MR_Word Var_875;
                MR_Word MaybeSubGoal_886;
                MR_Word Vars0_835;
                MR_Word StateVars0_836;
                MR_Word SubGoal_853;
                MR_Word Var_782;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_93, &GenericVarSet_863);
                Var_875 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[57])));
                VarsContextPieces_864 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_15, Var_875);
                parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), QVarsTerm_903, GenericVarSet_863, VarsContextPieces_864, &MaybeVars_865);
                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_934, ContextPieces_15, &MaybeSubGoal_886, STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_0_97, STATE_VARIABLE_DCGVar_98);
                succeeded = ((MR_tag((MR_Word) MaybeVars_865)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_782 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_865, (MR_Integer) 0))));
                  Vars0_835 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_782, (MR_Integer) 0))));
                  StateVars0_836 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_782, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_886)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_853 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_886, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word StateVars_811;
                  MR_Word Vars_812;
                  MR_Word Goal1_813;
                  MR_Word Goal_822;

                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[6]), StateVars0_836, &StateVars_811);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[7]), Vars0_835, &Vars_812);
                  if ((StateVars_811 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal1_813 = SubGoal_853;
                  else
                    {
                      Goal1_813 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal1_813, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal1_813, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                      MR_hl_field(MR_mktag(3), Goal1_813, 2) = ((MR_Box) (Context_14));
                      MR_hl_field(MR_mktag(3), Goal1_813, 3) = ((MR_Box) (StateVars_811));
                      MR_hl_field(MR_mktag(3), Goal1_813, 4) = ((MR_Box) (SubGoal_853));
                    }
                  if ((Vars_812 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal_822 = Goal1_813;
                  else
                    {
                      Goal_822 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_822, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal_822, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
                      MR_hl_field(MR_mktag(3), Goal_822, 2) = ((MR_Box) (Context_14));
                      MR_hl_field(MR_mktag(3), Goal_822, 3) = ((MR_Box) (Vars_812));
                      MR_hl_field(MR_mktag(3), Goal_822, 4) = ((MR_Box) (Goal1_813));
                    }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_822));
                  }
                }
                else
                {
                  MR_Word Var_829;
                  MR_Word Var_830;
                  MR_Word Specs_831;

                  Var_829 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[4]), MaybeVars_865);
                  Var_830 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_886);
                  Specs_831 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_829, Var_830);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_831));
                  }
                }
              }
              else
              {
                MR_Word Var_900;
                MR_Word Spec_902;

                Spec_902 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_15, Context_14, (MR_String) "a list of variables", Functor_12);
                {
                  Var_900 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_900, 0) = ((MR_Box) (Spec_902));
                  MR_hl_field(MR_mktag(1), Var_900, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_900));
                }
                *STATE_VARIABLE_DCGVar_98 = STATE_VARIABLE_DCGVar_0_97;
                *STATE_VARIABLE_Counter_96 = STATE_VARIABLE_Counter_0_95;
                *STATE_VARIABLE_VarSet_94 = STATE_VARIABLE_VarSet_0_93;
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
              MR_Word Var_230;
              MR_Word Var_231;
              MR_Word Var_236;
              MR_Word Spec_590;

              {
                Var_231 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_231, 0) = ((MR_Box) (Context_14));
                MR_hl_field(MR_mktag(0), Var_231, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[67])));
              }
              {
                Var_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_230, 0) = ((MR_Box) (Var_231));
                MR_hl_field(MR_mktag(1), Var_230, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_590 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_590, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_590, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), Spec_590, 2) = ((MR_Box) (Var_230));
              }
              {
                Var_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_236, 0) = ((MR_Box) (Spec_590));
                MR_hl_field(MR_mktag(1), Var_236, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeGoal_16 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_236));
              }
              *STATE_VARIABLE_VarSet_94 = STATE_VARIABLE_VarSet_0_93;
            }
            else
            {
              MR_Word HeadGoal_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
              MR_Word TailGoals_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
              MR_Word Var_218;
              MR_Word SubGoal_592;

              {
                Var_218 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_218, 0) = ((MR_Box) (HeadGoal_78));
                MR_hl_field(MR_mktag(0), Var_218, 1) = ((MR_Box) (TailGoals_79));
              }
              parse_tree__parse_util__one_or_more_to_conjunction_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Context_14, Var_218, &SubGoal_592);
              parse_tree__parse_goal__parse_goal_5_p_0(SubGoal_592, ContextPieces_15, MaybeGoal_16, STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94);
            }
            *STATE_VARIABLE_Counter_96 = STATE_VARIABLE_Counter_0_95;
            *STATE_VARIABLE_DCGVar_98 = STATE_VARIABLE_DCGVar_0_97;
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
  MR_Word STATE_VARIABLE_VarSet_0_38,
  MR_Word * STATE_VARIABLE_VarSet_39,
  MR_Word STATE_VARIABLE_Counter_0_40,
  MR_Word * STATE_VARIABLE_Counter_41,
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
    MR_Word STATE_VARIABLE_VarSet_42_42;
    MR_Word STATE_VARIABLE_Counter_43_43;
    MR_Word Vars_28;
    MR_Word StateVars_29;
    MR_Word Cond_30;
    MR_Word Then1_31;
    MR_Word Else1_32;

    parse_tree__parse_dcg_goal__parse_dcg_if_then_12_p_0(CondGoalTerm_13, ThenGoalTerm_14, Context_16, ContextPieces_17, &MaybeVarsCond_23, &MaybeThen1_24, STATE_VARIABLE_VarSet_0_38, &STATE_VARIABLE_VarSet_42_42, STATE_VARIABLE_Counter_0_40, &STATE_VARIABLE_Counter_43_43, Var0_21, &VarThen_25);
    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(ElseGoalTerm_15, ContextPieces_17, &MaybeElse1_26, STATE_VARIABLE_VarSet_42_42, STATE_VARIABLE_VarSet_39, STATE_VARIABLE_Counter_43_43, STATE_VARIABLE_Counter_41, Var0_21, &VarElse_27);
    succeeded = ((MR_tag((MR_Word) MaybeVarsCond_23)) == (MR_Integer) 1);
    if (succeeded)
    {
      Vars_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCond_23, (MR_Integer) 0))));
      StateVars_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCond_23, (MR_Integer) 1))));
      Cond_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCond_23, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) MaybeThen1_24)) == (MR_Integer) 1);
      if (succeeded)
      {
        Then1_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThen1_24, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeElse1_26)) == (MR_Integer) 1);
        if (succeeded)
          Else1_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElse1_26, (MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Word Then_33;
      MR_Word Else_34;
      MR_Word Goal_36;
      MR_Word TypeInfo_62_62;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (VarThen_25)), ((MR_Box) (Var0_21)));
      if (succeeded)
      {
        TypeInfo_62_62 = (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_62_62, ((MR_Box) (VarElse_27)), ((MR_Box) (Var0_21)));
      }
      if (succeeded)
      {
        *Var_22 = Var0_21;
        Then_33 = Then1_31;
        Else_34 = Else1_32;
      }
      else
      {
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (VarThen_25)), ((MR_Box) (Var0_21)));
        if (succeeded)
        {
          MR_Word Unify_35;
          MR_Word Var_46;
          MR_Word Var_47;

          *Var_22 = VarElse_27;
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (*Var_22));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Context_16));
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (VarThen_25));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Context_16));
          }
          {
            Unify_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Unify_35, 0) = ((MR_Box) (Context_16));
            MR_hl_field(MR_mktag(0), Unify_35, 1) = ((MR_Box) (Var_46));
            MR_hl_field(MR_mktag(0), Unify_35, 2) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(0), Unify_35, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          {
            Then_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Then_33, 0) = ((MR_Box) (Context_16));
            MR_hl_field(MR_mktag(2), Then_33, 1) = ((MR_Box) (Then1_31));
            MR_hl_field(MR_mktag(2), Then_33, 2) = ((MR_Box) (Unify_35));
          }
          Else_34 = Else1_32;
        }
        else
        {
          succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (VarElse_27)), ((MR_Box) (Var0_21)));
          if (succeeded)
          {
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Word Unify_56;

            *Var_22 = VarThen_25;
            Then_33 = Then1_31;
            {
              Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (*Var_22));
              MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Context_16));
            }
            {
              Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (VarElse_27));
              MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Context_16));
            }
            {
              Unify_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Unify_56, 0) = ((MR_Box) (Context_16));
              MR_hl_field(MR_mktag(0), Unify_56, 1) = ((MR_Box) (Var_49));
              MR_hl_field(MR_mktag(0), Unify_56, 2) = ((MR_Box) (Var_50));
              MR_hl_field(MR_mktag(0), Unify_56, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
            {
              Else_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Else_34, 0) = ((MR_Box) (Context_16));
              MR_hl_field(MR_mktag(2), Else_34, 1) = ((MR_Box) (Else1_32));
              MR_hl_field(MR_mktag(2), Else_34, 2) = ((MR_Box) (Unify_56));
            }
          }
          else
          {
            *Var_22 = VarElse_27;
            parse_tree__prog_util__rename_in_goal_4_p_0(VarThen_25, VarElse_27, Then1_31, &Then_33);
            Else_34 = Else1_32;
          }
        }
      }
      {
        Goal_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Goal_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Goal_36, 1) = ((MR_Box) (Context_16));
        MR_hl_field(MR_mktag(3), Goal_36, 2) = ((MR_Box) (Vars_28));
        MR_hl_field(MR_mktag(3), Goal_36, 3) = ((MR_Box) (StateVars_29));
        MR_hl_field(MR_mktag(3), Goal_36, 4) = ((MR_Box) (Cond_30));
        MR_hl_field(MR_mktag(3), Goal_36, 5) = ((MR_Box) (Then_33));
        MR_hl_field(MR_mktag(3), Goal_36, 6) = ((MR_Box) (Else_34));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_18 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_36));
      }
    }
    else
    {
      MR_Word Specs_37;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;

      Var_52 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[5]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[5]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeVarsCond_23);
      Var_54 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeThen1_24);
      Var_55 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeElse1_26);
      Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_54, Var_55);
      Specs_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_52, Var_53);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_18 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_37));
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
  MR_Word STATE_VARIABLE_VarSet_0_30,
  MR_Word * STATE_VARIABLE_VarSet_31,
  MR_Word STATE_VARIABLE_Counter_0_32,
  MR_Word * STATE_VARIABLE_Counter_33,
  MR_Word Var0_21,
  MR_Word * Var_22)
{
  {
    MR_bool succeeded;
    MR_Word Var1_23;
    MR_Word MaybeThen1_24;
    MR_Word Var2_25;
    MR_Word STATE_VARIABLE_VarSet_34_34;
    MR_Word STATE_VARIABLE_Counter_35_35;
    MR_Word STATE_VARIABLE_VarSet_36_36;
    MR_Word STATE_VARIABLE_Counter_37_37;
    MR_Word TypeInfo_44_44;

    parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0(CondGoalTerm_13, ContextPieces_16, MaybeVarsCond_17, STATE_VARIABLE_VarSet_0_30, &STATE_VARIABLE_VarSet_34_34, STATE_VARIABLE_Counter_0_32, &STATE_VARIABLE_Counter_35_35, Var0_21, &Var1_23);
    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(ThenGoalTerm_14, ContextPieces_16, &MaybeThen1_24, STATE_VARIABLE_VarSet_34_34, &STATE_VARIABLE_VarSet_36_36, STATE_VARIABLE_Counter_35_35, &STATE_VARIABLE_Counter_37_37, Var1_23, &Var2_25);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (Var0_21)), ((MR_Box) (Var1_23)));
    succeeded = !(succeeded);
    if (succeeded)
    {
      TypeInfo_44_44 = (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (Var1_23)), ((MR_Box) (Var2_25)));
    }
    if (succeeded)
      if (((MR_tag((MR_Word) MaybeThen1_24)) == (MR_Integer) 0))
      {
        *MaybeThen_18 = MaybeThen1_24;
        *Var_22 = Var2_25;
        *STATE_VARIABLE_VarSet_31 = STATE_VARIABLE_VarSet_36_36;
        *STATE_VARIABLE_Counter_33 = STATE_VARIABLE_Counter_37_37;
      }
      else
      {
        MR_Word Then1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThen1_24, (MR_Integer) 0))));
        MR_Word Unify_27;
        MR_Word Then_28;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Integer N_52;
        MR_String StringN_53;
        MR_String VarName_54;
        MR_Word STATE_VARIABLE_VarSet_18_57;

        mercury__counter__allocate_3_p_0(&N_52, STATE_VARIABLE_Counter_37_37, STATE_VARIABLE_Counter_33);
        mercury__string__int_to_string_2_p_0(N_52, &StringN_53);
        mercury__string__append_3_p_2((MR_String) "DCG_", StringN_53, &VarName_54);
        mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_22, STATE_VARIABLE_VarSet_36_36, &STATE_VARIABLE_VarSet_18_57);
        mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_22, VarName_54, STATE_VARIABLE_VarSet_18_57, STATE_VARIABLE_VarSet_31);
        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (*Var_22));
          MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Context_15));
        }
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var2_25));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Context_15));
        }
        {
          Unify_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Unify_27, 0) = ((MR_Box) (Context_15));
          MR_hl_field(MR_mktag(0), Unify_27, 1) = ((MR_Box) (Var_40));
          MR_hl_field(MR_mktag(0), Unify_27, 2) = ((MR_Box) (Var_41));
          MR_hl_field(MR_mktag(0), Unify_27, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Then_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Then_28, 0) = ((MR_Box) (Context_15));
          MR_hl_field(MR_mktag(2), Then_28, 1) = ((MR_Box) (Then1_26));
          MR_hl_field(MR_mktag(2), Then_28, 2) = ((MR_Box) (Unify_27));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeThen_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Then_28));
        }
      }
    else
    {
      *MaybeThen_18 = MaybeThen1_24;
      *Var_22 = Var2_25;
      *STATE_VARIABLE_Counter_33 = STATE_VARIABLE_Counter_37_37;
      *STATE_VARIABLE_VarSet_31 = STATE_VARIABLE_VarSet_36_36;
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
    MR_Word conv1_HeadVar__2_75;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__637__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_75);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_75));
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
    MR_Word conv0_HeadVar__2_69;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__636__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_69);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_69));
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0(
  MR_Word Term_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeVarsGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_31,
  MR_Word * STATE_VARIABLE_VarSet_32,
  MR_Word STATE_VARIABLE_Counter_0_33,
  MR_Word * STATE_VARIABLE_Counter_34,
  MR_Word STATE_VARIABLE_DCGVar_0_35,
  MR_Word * STATE_VARIABLE_DCGVar_36)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_10)) == (MR_Integer) 0);
    MR_Word MaybeVars_22;
    MR_Word GoalTerm_23;
    MR_Word MaybeGoal_24;
    MR_Word VarsTerm_16;
    MR_Word SubGoalTerm_17;
    MR_Word Var_37;
    MR_String Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Vars0_25;
    MR_Word StateVars0_26;
    MR_Word Goal_27;
    MR_Word Var_60;

    if (succeeded)
    {
      Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_10, (MR_Integer) 0))));
      Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_10, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_38 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 0))));
        succeeded = (strcmp(Var_38, (MR_String) "some") == 0);
        if (succeeded)
        {
          succeeded = (Var_39 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            VarsTerm_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 0))));
            Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 1))));
            succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SubGoalTerm_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0))));
              Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 1))));
              succeeded = (Var_41 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word GenericVarSet_19;
      MR_Word VarsContextPieces_21;
      MR_Word Var_53;

      mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_31, &GenericVarSet_19);
      Var_53 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[57])));
      VarsContextPieces_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_11, Var_53);
      parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_16, GenericVarSet_19, VarsContextPieces_21, &MaybeVars_22);
      GoalTerm_23 = SubGoalTerm_17;
    }
    else
    {
      MaybeVars_22 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_4[1]));
      GoalTerm_23 = Term_10;
    }
    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(GoalTerm_23, ContextPieces_11, &MaybeGoal_24, STATE_VARIABLE_VarSet_0_31, STATE_VARIABLE_VarSet_32, STATE_VARIABLE_Counter_0_33, STATE_VARIABLE_Counter_34, STATE_VARIABLE_DCGVar_0_35, STATE_VARIABLE_DCGVar_36);
    succeeded = ((MR_tag((MR_Word) MaybeVars_22)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_22, (MR_Integer) 0))));
      Vars0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_60, (MR_Integer) 0))));
      StateVars0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_60, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) MaybeGoal_24)) == (MR_Integer) 1);
      if (succeeded)
        Goal_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal_24, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word Vars_28;
      MR_Word StateVars_29;

      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[1]), Vars0_25, &Vars_28);
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[2]), StateVars0_26, &StateVars_29);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *MaybeVarsGoal_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Vars_28));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (StateVars_29));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Goal_27));
      }
    }
    else
    {
      MR_Word Specs_30;
      MR_Word Var_63;
      MR_Word Var_64;

      Var_63 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[4]), MaybeVars_22);
      Var_64 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeGoal_24);
      Specs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_63, Var_64);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeVarsGoal_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_30));
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
    MR_Word conv0_HeadVar__2_48;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal__120__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_48);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_48));
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
      MR_Word TypeInfo_51_51;
      MR_Word TypeInfo_52_52;
      MR_String Functor_20;
      MR_Word Args1_21;
      MR_Word Var_31;

      succeeded = ((MR_tag((MR_Word) SymName_18)) == (MR_Integer) 0);
      if (succeeded)
      {
        Functor_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_18, (MR_Integer) 0))));
        Var_31 = (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[0]);
        TypeInfo_51_51 = (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[1]);
        TypeInfo_52_52 = (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[0]);
        mercury__list__map_3_p_0(TypeInfo_51_51, TypeInfo_52_52, Var_31, Args0_19, &Args1_21);
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
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_23));
        }
      }
    }
    else
    {
      MR_Word Args_24;
      MR_Word Goal_44;

      {
        Args_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Args_24, 0) = ((MR_Box) (ProgTerm_17));
        MR_hl_field(MR_mktag(1), Args_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      parse_tree__parse_dcg_goal__make_dcg_call_10_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_4[0]), Args_24, Context_16, &Goal_44, STATE_VARIABLE_VarSet_0_25, STATE_VARIABLE_VarSet_26, STATE_VARIABLE_Counter_0_27, STATE_VARIABLE_Counter_28, STATE_VARIABLE_DCGVar_0_29, STATE_VARIABLE_DCGVar_30);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_44));
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
