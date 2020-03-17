/*
** Automatically generated from `parse_dcg_goal.m'
** by the Mercury compiler,
** version rotd-2020-03-17
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
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__638__1_2_p_0(
  MR_Word HeadVar__1_74,
  MR_Word * HeadVar__2_75);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__637__1_2_p_0(
  MR_Word HeadVar__1_68,
  MR_Word * HeadVar__2_69);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__282__2_2_p_0(
  MR_Word HeadVar__1_759,
  MR_Word * HeadVar__2_760);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__281__2_2_p_0(
  MR_Word HeadVar__1_753,
  MR_Word * HeadVar__2_754);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__282__1_2_p_0(
  MR_Word HeadVar__1_637,
  MR_Word * HeadVar__2_638);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__281__1_2_p_0(
  MR_Word HeadVar__1_631,
  MR_Word * HeadVar__2_632);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__599__1_2_p_0(
  MR_Word HeadVar__1_660,
  MR_Word * HeadVar__2_661);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal__121__1_2_p_0(
  MR_Word HeadVar__1_47,
  MR_Word * HeadVar__2_48);

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
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__638__1_2_p_0(
  MR_Word HeadVar__1_74,
  MR_Word * HeadVar__2_75)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_74, HeadVar__2_75);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__637__1_2_p_0(
  MR_Word HeadVar__1_68,
  MR_Word * HeadVar__2_69)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_68, HeadVar__2_69);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__282__2_2_p_0(
  MR_Word HeadVar__1_759,
  MR_Word * HeadVar__2_760)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_759, HeadVar__2_760);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__281__2_2_p_0(
  MR_Word HeadVar__1_753,
  MR_Word * HeadVar__2_754)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_753, HeadVar__2_754);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__282__1_2_p_0(
  MR_Word HeadVar__1_637,
  MR_Word * HeadVar__2_638)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_637, HeadVar__2_638);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__281__1_2_p_0(
  MR_Word HeadVar__1_631,
  MR_Word * HeadVar__2_632)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_631, HeadVar__2_632);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__599__1_2_p_0(
  MR_Word HeadVar__1_660,
  MR_Word * HeadVar__2_661)
{
  mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_660, HeadVar__2_661);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal__121__1_2_p_0(
  MR_Word HeadVar__1_47,
  MR_Word * HeadVar__2_48)
{
  mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_47, HeadVar__2_48);
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
    MR_Word conv4_HeadVar__2_760;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__282__2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__2_760);
    *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_760));
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
    MR_Word conv3_HeadVar__2_754;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__281__2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_754);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_754));
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
    MR_Word conv2_HeadVar__2_638;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__282__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_638);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_638));
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
    MR_Word conv1_HeadVar__2_632;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__281__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_632);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_632));
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
    MR_Word conv0_HeadVar__2_661;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__599__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_661);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_661));
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
              MR_Word SubGoalTermA_468;
              MR_Word SubGoalTermB_469;
              MR_Word Var_324;
              MR_Word Var_325;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTermA_468 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_324 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_324 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTermB_469 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_324, (MR_Integer) 0))));
                  Var_325 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_324, (MR_Integer) 1))));
                  succeeded = (Var_325 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_VarSet_326_326;
                MR_Word STATE_VARIABLE_Counter_327_327;
                MR_Word STATE_VARIABLE_DCGVar_328_328;
                MR_Word MaybeSubGoalA_460;
                MR_Word MaybeSubGoalB_461;
                MR_Word SubGoalA_456;
                MR_Word SubGoalB_457;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTermA_468, ContextPieces_15, &MaybeSubGoalA_460, STATE_VARIABLE_VarSet_0_93, &STATE_VARIABLE_VarSet_326_326, STATE_VARIABLE_Counter_0_95, &STATE_VARIABLE_Counter_327_327, STATE_VARIABLE_DCGVar_0_97, &STATE_VARIABLE_DCGVar_328_328);
                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTermB_469, ContextPieces_15, &MaybeSubGoalB_461, STATE_VARIABLE_VarSet_326_326, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_327_327, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_328_328, STATE_VARIABLE_DCGVar_98);
                succeeded = ((MR_tag((MR_Word) MaybeSubGoalA_460)) == (MR_Integer) 1);
                if (succeeded)
                {
                  SubGoalA_456 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_460, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoalB_461)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoalB_457 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_461, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word Goal_452;

                  {
                    Goal_452 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_452, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Goal_452, 1) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(3), Goal_452, 2) = ((MR_Box) (SubGoalA_456));
                    MR_hl_field(MR_mktag(3), Goal_452, 3) = ((MR_Box) (SubGoalB_457));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_452));
                  }
                }
                else
                {
                  MR_Word Var_332;
                  MR_Word Var_333;
                  MR_Word Specs_453;

                  Var_332 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalA_460);
                  Var_333 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalB_461);
                  Specs_453 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_332, Var_333);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_453));
                  }
                }
              }
              else
              {
                MR_Word Var_334;
                MR_Word Spec_464;

                Spec_464 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_334 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_334, 0) = ((MR_Box) (Spec_464));
                  MR_hl_field(MR_mktag(1), Var_334, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_334));
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
              MR_Word Var_336;
              MR_Word Var_337;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTermA_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_336 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_336 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTermB_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_336, (MR_Integer) 0))));
                  Var_337 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_336, (MR_Integer) 1))));
                  succeeded = (Var_337 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoalA_49;
                MR_Word MaybeSubGoalB_50;
                MR_Word STATE_VARIABLE_VarSet_338_338;
                MR_Word STATE_VARIABLE_Counter_339_339;
                MR_Word STATE_VARIABLE_DCGVar_340_340;
                MR_Word SubGoalA_51;
                MR_Word SubGoalB_52;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTermA_47, ContextPieces_15, &MaybeSubGoalA_49, STATE_VARIABLE_VarSet_0_93, &STATE_VARIABLE_VarSet_338_338, STATE_VARIABLE_Counter_0_95, &STATE_VARIABLE_Counter_339_339, STATE_VARIABLE_DCGVar_0_97, &STATE_VARIABLE_DCGVar_340_340);
                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTermB_48, ContextPieces_15, &MaybeSubGoalB_50, STATE_VARIABLE_VarSet_338_338, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_339_339, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_340_340, STATE_VARIABLE_DCGVar_98);
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
                  MR_Word Goal_439;

                  {
                    Goal_439 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Goal_439, 0) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(2), Goal_439, 1) = ((MR_Box) (SubGoalA_51));
                    MR_hl_field(MR_mktag(2), Goal_439, 2) = ((MR_Box) (SubGoalB_52));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_439));
                  }
                }
                else
                {
                  MR_Word Var_344;
                  MR_Word Var_345;
                  MR_Word Specs_440;

                  Var_344 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalA_49);
                  Var_345 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalB_50);
                  Specs_440 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_344, Var_345);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_440));
                  }
                }
              }
              else
              {
                MR_Word Var_346;
                MR_Word Spec_445;

                Spec_445 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_346 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_346, 0) = ((MR_Box) (Spec_445));
                  MR_hl_field(MR_mktag(1), Var_346, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_346));
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
              MR_Word Arg0_621;
              MR_Word Var_99;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Arg0_621 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_99 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word Goal_613;
                MR_Word OutVarTerm_615;
                MR_Word Arg_616;

                parse_tree__parse_dcg_goal__new_dcg_var_5_p_0(STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_98);
                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Arg0_621, &Arg_616);
                {
                  OutVarTerm_615 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), OutVarTerm_615, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_98));
                  MR_hl_field(MR_mktag(1), OutVarTerm_615, 1) = ((MR_Box) (Context_14));
                }
                {
                  Goal_613 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Goal_613, 0) = ((MR_Box) (Context_14));
                  MR_hl_field(MR_mktag(0), Goal_613, 1) = ((MR_Box) (Arg_616));
                  MR_hl_field(MR_mktag(0), Goal_613, 2) = ((MR_Box) (OutVarTerm_615));
                  MR_hl_field(MR_mktag(0), Goal_613, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_613));
                }
              }
              else
              {
                MR_Word ProgArgs_92;
                MR_Word Goal_617;

                mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[3]), Args_13, &ProgArgs_92);
                parse_tree__parse_dcg_goal__make_dcg_call_10_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_4[2]), ProgArgs_92, Context_14, &Goal_617, STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_0_97, STATE_VARIABLE_DCGVar_98);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_617));
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
              MR_Word SubGoalTermA_514;
              MR_Word SubGoalTermB_515;
              MR_Word Var_298;
              MR_Word Var_299;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTermA_514 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_298 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_298 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTermB_515 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_298, (MR_Integer) 0))));
                  Var_299 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_298, (MR_Integer) 1))));
                  succeeded = (Var_299 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word CondGoalTerm_53;
                MR_Word ThenGoalTerm_54;
                MR_Word Var_300;
                MR_String Var_301;
                MR_Word Var_302;
                MR_Word Var_303;
                MR_Word Var_304;

                succeeded = ((MR_tag((MR_Word) SubGoalTermA_514)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_300 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoalTermA_514, (MR_Integer) 0))));
                  Var_302 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoalTermA_514, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_300)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_301 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_300, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_301, (MR_String) "->") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_302 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        CondGoalTerm_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_302, (MR_Integer) 0))));
                        Var_303 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_302, (MR_Integer) 1))));
                        succeeded = (Var_303 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ThenGoalTerm_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_303, (MR_Integer) 0))));
                          Var_304 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_303, (MR_Integer) 1))));
                          succeeded = (Var_304 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                  parse_tree__parse_dcg_goal__parse_dcg_if_then_else_12_p_0(CondGoalTerm_53, ThenGoalTerm_54, SubGoalTermB_515, Context_14, ContextPieces_15, MaybeGoal_16, STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_0_97, STATE_VARIABLE_DCGVar_98);
                else
                {
                  MR_Word MaybeSubGoalA0_57;
                  MR_Word VarA_58;
                  MR_Word MaybeSubGoalB0_59;
                  MR_Word VarB_60;
                  MR_Word STATE_VARIABLE_VarSet_308_308;
                  MR_Word STATE_VARIABLE_Counter_309_309;
                  MR_Word SubGoalA0_61;
                  MR_Word SubGoalB0_62;

                  parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTermA_514, ContextPieces_15, &MaybeSubGoalA0_57, STATE_VARIABLE_VarSet_0_93, &STATE_VARIABLE_VarSet_308_308, STATE_VARIABLE_Counter_0_95, &STATE_VARIABLE_Counter_309_309, STATE_VARIABLE_DCGVar_0_97, &VarA_58);
                  parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTermB_515, ContextPieces_15, &MaybeSubGoalB0_59, STATE_VARIABLE_VarSet_308_308, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_309_309, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_0_97, &VarB_60);
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
                    MR_Word Goal_494;
                    MR_Word TypeInfo_964_964;

                    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (VarA_58)), ((MR_Box) (STATE_VARIABLE_DCGVar_0_97)));
                    if (succeeded)
                    {
                      TypeInfo_964_964 = (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_964_964, ((MR_Box) (VarB_60)), ((MR_Box) (STATE_VARIABLE_DCGVar_0_97)));
                    }
                    if (succeeded)
                    {
                      *STATE_VARIABLE_DCGVar_98 = STATE_VARIABLE_DCGVar_0_97;
                      {
                        Goal_494 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Goal_494, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(MR_mktag(3), Goal_494, 1) = ((MR_Box) (Context_14));
                        MR_hl_field(MR_mktag(3), Goal_494, 2) = ((MR_Box) (SubGoalA0_61));
                        MR_hl_field(MR_mktag(3), Goal_494, 3) = ((MR_Box) (SubGoalB0_62));
                      }
                    }
                    else
                    {
                      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (VarA_58)), ((MR_Box) (STATE_VARIABLE_DCGVar_0_97)));
                      if (succeeded)
                      {
                        MR_Word Unify_64;
                        MR_Word Var_312;
                        MR_Word Var_313;
                        MR_Word SubGoalA_483;

                        *STATE_VARIABLE_DCGVar_98 = VarB_60;
                        {
                          Var_312 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_312, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_98));
                          MR_hl_field(MR_mktag(1), Var_312, 1) = ((MR_Box) (Context_14));
                        }
                        {
                          Var_313 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_313, 0) = ((MR_Box) (VarA_58));
                          MR_hl_field(MR_mktag(1), Var_313, 1) = ((MR_Box) (Context_14));
                        }
                        {
                          Unify_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Unify_64, 0) = ((MR_Box) (Context_14));
                          MR_hl_field(MR_mktag(0), Unify_64, 1) = ((MR_Box) (Var_312));
                          MR_hl_field(MR_mktag(0), Unify_64, 2) = ((MR_Box) (Var_313));
                          MR_hl_field(MR_mktag(0), Unify_64, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                        }
                        parse_tree__parse_dcg_goal__append_to_disjunct_4_p_0(Unify_64, Context_14, SubGoalA0_61, &SubGoalA_483);
                        {
                          Goal_494 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Goal_494, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                          MR_hl_field(MR_mktag(3), Goal_494, 1) = ((MR_Box) (Context_14));
                          MR_hl_field(MR_mktag(3), Goal_494, 2) = ((MR_Box) (SubGoalA_483));
                          MR_hl_field(MR_mktag(3), Goal_494, 3) = ((MR_Box) (SubGoalB0_62));
                        }
                      }
                      else
                      {
                        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (VarB_60)), ((MR_Box) (STATE_VARIABLE_DCGVar_0_97)));
                        if (succeeded)
                        {
                          MR_Word Var_315;
                          MR_Word Var_316;
                          MR_Word SubGoalB_484;
                          MR_Word Unify_485;

                          *STATE_VARIABLE_DCGVar_98 = VarA_58;
                          {
                            Var_315 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_315, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_98));
                            MR_hl_field(MR_mktag(1), Var_315, 1) = ((MR_Box) (Context_14));
                          }
                          {
                            Var_316 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_316, 0) = ((MR_Box) (VarB_60));
                            MR_hl_field(MR_mktag(1), Var_316, 1) = ((MR_Box) (Context_14));
                          }
                          {
                            Unify_485 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Unify_485, 0) = ((MR_Box) (Context_14));
                            MR_hl_field(MR_mktag(0), Unify_485, 1) = ((MR_Box) (Var_315));
                            MR_hl_field(MR_mktag(0), Unify_485, 2) = ((MR_Box) (Var_316));
                            MR_hl_field(MR_mktag(0), Unify_485, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                          }
                          parse_tree__parse_dcg_goal__append_to_disjunct_4_p_0(Unify_485, Context_14, SubGoalB0_62, &SubGoalB_484);
                          {
                            Goal_494 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Goal_494, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                            MR_hl_field(MR_mktag(3), Goal_494, 1) = ((MR_Box) (Context_14));
                            MR_hl_field(MR_mktag(3), Goal_494, 2) = ((MR_Box) (SubGoalA0_61));
                            MR_hl_field(MR_mktag(3), Goal_494, 3) = ((MR_Box) (SubGoalB_484));
                          }
                        }
                        else
                        {
                          MR_Word SubGoalA_486;

                          *STATE_VARIABLE_DCGVar_98 = VarB_60;
                          parse_tree__prog_util__rename_in_goal_4_p_0(VarA_58, VarB_60, SubGoalA0_61, &SubGoalA_486);
                          {
                            Goal_494 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Goal_494, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                            MR_hl_field(MR_mktag(3), Goal_494, 1) = ((MR_Box) (Context_14));
                            MR_hl_field(MR_mktag(3), Goal_494, 2) = ((MR_Box) (SubGoalA_486));
                            MR_hl_field(MR_mktag(3), Goal_494, 3) = ((MR_Box) (SubGoalB0_62));
                          }
                        }
                      }
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_16 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_494));
                    }
                  }
                  else
                  {
                    MR_Word Var_320;
                    MR_Word Var_321;
                    MR_Word Specs_497;

                    *STATE_VARIABLE_DCGVar_98 = VarA_58;
                    Var_320 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalA0_57);
                    Var_321 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalB0_59);
                    Specs_497 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_320, Var_321);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_16 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_497));
                    }
                  }
                }
              }
              else
              {
                MR_Word Var_322;
                MR_Word Spec_510;

                Spec_510 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_322, 0) = ((MR_Box) (Spec_510));
                  MR_hl_field(MR_mktag(1), Var_322, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_322));
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
                MR_Word Goal_607;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Arg0_88, &Arg_89);
                {
                  DCGVarTerm_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), DCGVarTerm_90, 0) = ((MR_Box) (STATE_VARIABLE_DCGVar_0_97));
                  MR_hl_field(MR_mktag(1), DCGVarTerm_90, 1) = ((MR_Box) (Context_14));
                }
                {
                  Goal_607 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Goal_607, 0) = ((MR_Box) (Context_14));
                  MR_hl_field(MR_mktag(0), Goal_607, 1) = ((MR_Box) (Arg_89));
                  MR_hl_field(MR_mktag(0), Goal_607, 2) = ((MR_Box) (DCGVarTerm_90));
                  MR_hl_field(MR_mktag(0), Goal_607, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_607));
                }
              }
              else
              {
                MR_Word Var_111;
                MR_Word Spec_608;

                Spec_608 = parse_tree__parse_goal__should_have_two_terms_infix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Spec_608));
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
              MR_Word Var_200;
              MR_Word Var_201;
              MR_Word Goal_569;

              parse_tree__parse_dcg_goal__new_dcg_var_5_p_0(STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_98);
              {
                Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_200, 0) = ((MR_Box) (STATE_VARIABLE_DCGVar_0_97));
                MR_hl_field(MR_mktag(1), Var_200, 1) = ((MR_Box) (Context_14));
              }
              {
                Var_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_201, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_98));
                MR_hl_field(MR_mktag(1), Var_201, 1) = ((MR_Box) (Context_14));
              }
              {
                Goal_569 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Goal_569, 0) = ((MR_Box) (Context_14));
                MR_hl_field(MR_mktag(0), Goal_569, 1) = ((MR_Box) (Var_200));
                MR_hl_field(MR_mktag(0), Goal_569, 2) = ((MR_Box) (Var_201));
                MR_hl_field(MR_mktag(0), Goal_569, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeGoal_16 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_569));
              }
            }
            else
            {
              MR_Word Var_195;
              MR_Word Spec_572;

              {
                Spec_572 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_572, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_non_call_dcg_goal\'/11"));
                MR_hl_field(MR_mktag(1), Spec_572, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_572, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_572, 3) = ((MR_Box) (Context_14));
                MR_hl_field(MR_mktag(1), Spec_572, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[20])));
              }
              {
                Var_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_195, 0) = ((MR_Box) (Spec_572));
                MR_hl_field(MR_mktag(1), Var_195, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeGoal_16 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_195));
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
                  MR_hl_field(MR_mktag(0), ConsTerm0_84, 0) = ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_4[3]));
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
                  MR_Word Goal_584;

                  {
                    Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (STATE_VARIABLE_DCGVar_0_97));
                    MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Context_14));
                  }
                  {
                    Goal_584 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Goal_584, 0) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(0), Goal_584, 1) = ((MR_Box) (Var_123));
                    MR_hl_field(MR_mktag(0), Goal_584, 2) = ((MR_Box) (Term_87));
                    MR_hl_field(MR_mktag(0), Goal_584, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_584));
                  }
                }
                else
                {
                  MR_Word Var_139;
                  MR_Word Spec_585;

                  {
                    Spec_585 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Spec_585, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_non_call_dcg_goal\'/11"));
                    MR_hl_field(MR_mktag(1), Spec_585, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), Spec_585, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(1), Spec_585, 3) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(1), Spec_585, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[25])));
                  }
                  {
                    Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (Spec_585));
                    MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_139));
                  }
                }
              }
              else
              {
                MR_Word Var_167;
                MR_Word Spec_595;

                {
                  Spec_595 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_595, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_non_call_dcg_goal\'/11"));
                  MR_hl_field(MR_mktag(1), Spec_595, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_595, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_595, 3) = ((MR_Box) (Context_14));
                  MR_hl_field(MR_mktag(1), Spec_595, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[35])));
                }
                {
                  Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (Spec_595));
                  MR_hl_field(MR_mktag(1), Var_167, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_167));
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
              MR_Word SubGoalTerm_413;
              MR_Word Var_386;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_413 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_386 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_386 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_28;
                MR_Word Var_29;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_413, ContextPieces_15, &MaybeSubGoal_28, STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_0_97, &Var_29);
                if (((MR_tag((MR_Word) MaybeSubGoal_28)) == (MR_Integer) 0))
                  *MaybeGoal_16 = MaybeSubGoal_28;
                else
                {
                  MR_Word SubGoal_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_28, (MR_Integer) 0))));
                  MR_Word Var_389;

                  {
                    Var_389 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_389, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), Var_389, 1) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(3), Var_389, 2) = ((MR_Box) (SubGoal_30));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_389));
                  }
                }
              }
              else
              {
                MR_Word Var_390;
                MR_Word Spec_412;

                Spec_412 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_390 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_390, 0) = ((MR_Box) (Spec_412));
                  MR_hl_field(MR_mktag(1), Var_390, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_390));
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
              MR_Word SubGoalTerm_427;
              MR_Word Var_370;
              MR_Word Var_371;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                QVarsTerm_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_370 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_370 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_427 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_370, (MR_Integer) 0))));
                  Var_371 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_370, (MR_Integer) 1))));
                  succeeded = (Var_371 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word GenericVarSet_35;
                MR_Word VarsContextPieces_36;
                MR_Word MaybeVars_37;
                MR_Word Var_372;
                MR_Word MaybeSubGoal_424;
                MR_Word Vars0_38;
                MR_Word StateVars0_39;
                MR_Word SubGoal_421;
                MR_Word Var_376;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_93, &GenericVarSet_35);
                Var_372 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[42])));
                VarsContextPieces_36 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_15, Var_372);
                parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), QVarsTerm_34, GenericVarSet_35, VarsContextPieces_36, &MaybeVars_37);
                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_427, ContextPieces_15, &MaybeSubGoal_424, STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_0_97, STATE_VARIABLE_DCGVar_98);
                succeeded = ((MR_tag((MR_Word) MaybeVars_37)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_376 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_37, (MR_Integer) 0))));
                  Vars0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_376, (MR_Integer) 0))));
                  StateVars0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_376, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_424)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_421 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_424, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word StateVars_40;
                  MR_Word Vars_41;
                  MR_Word Goal1_42;
                  MR_Word Goal_417;

                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[4]), StateVars0_39, &StateVars_40);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[5]), Vars0_38, &Vars_41);
                  if ((StateVars_40 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal1_42 = SubGoal_421;
                  else
                    {
                      Goal1_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal1_42, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal1_42, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                      MR_hl_field(MR_mktag(3), Goal1_42, 2) = ((MR_Box) (Context_14));
                      MR_hl_field(MR_mktag(3), Goal1_42, 3) = ((MR_Box) (StateVars_40));
                      MR_hl_field(MR_mktag(3), Goal1_42, 4) = ((MR_Box) (SubGoal_421));
                    }
                  if ((Vars_41 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal_417 = Goal1_42;
                  else
                    {
                      Goal_417 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_417, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal_417, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
                      MR_hl_field(MR_mktag(3), Goal_417, 2) = ((MR_Box) (Context_14));
                      MR_hl_field(MR_mktag(3), Goal_417, 3) = ((MR_Box) (Vars_41));
                      MR_hl_field(MR_mktag(3), Goal_417, 4) = ((MR_Box) (Goal1_42));
                    }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_417));
                  }
                }
                else
                {
                  MR_Word Var_381;
                  MR_Word Var_382;
                  MR_Word Specs_418;

                  Var_381 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[4]), MaybeVars_37);
                  Var_382 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_424);
                  Specs_418 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_381, Var_382);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_418));
                  }
                }
              }
              else
              {
                MR_Word Var_384;
                MR_Word Spec_426;

                Spec_426 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_15, Context_14, (MR_String) "a list of variables", Functor_12);
                {
                  Var_384 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_384, 0) = ((MR_Box) (Spec_426));
                  MR_hl_field(MR_mktag(1), Var_384, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_384));
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
              MR_Word CondGoalTerm_527;
              MR_Word ThenGoalTerm_528;
              MR_Word CondThenTerm_65;
              MR_Word Var_258;
              MR_Word Var_259;
              MR_Word Var_260;
              MR_String Var_261;
              MR_Word Var_262;
              MR_Word Var_263;
              MR_Word Var_264;
              MR_String Var_265;
              MR_Word Var_266;
              MR_Word Var_267;
              MR_Word Var_268;
              MR_Word Var_269;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                CondThenTerm_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_258 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_258 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ElseGoalTerm_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_258, (MR_Integer) 0))));
                  Var_259 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_258, (MR_Integer) 1))));
                  succeeded = (Var_259 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) CondThenTerm_65)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_65, (MR_Integer) 0))));
                      Var_262 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_65, (MR_Integer) 1))));
                      CondContext_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_65, (MR_Integer) 2))));
                      succeeded = ((MR_tag((MR_Word) Var_260)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_261 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_260, (MR_Integer) 0))));
                        succeeded = (strcmp(Var_261, (MR_String) "if") == 0);
                        if (succeeded)
                        {
                          succeeded = (Var_262 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_263 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_262, (MR_Integer) 0))));
                            Var_269 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_262, (MR_Integer) 1))));
                            succeeded = (Var_269 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((MR_tag((MR_Word) Var_263)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                Var_264 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_263, (MR_Integer) 0))));
                                Var_266 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_263, (MR_Integer) 1))));
                                succeeded = ((MR_tag((MR_Word) Var_264)) == (MR_Integer) 0);
                                if (succeeded)
                                {
                                  Var_265 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_264, (MR_Integer) 0))));
                                  succeeded = (strcmp(Var_265, (MR_String) "then") == 0);
                                  if (succeeded)
                                  {
                                    succeeded = (Var_266 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      CondGoalTerm_527 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_266, (MR_Integer) 0))));
                                      Var_267 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_266, (MR_Integer) 1))));
                                      succeeded = (Var_267 != (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        ThenGoalTerm_528 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_267, (MR_Integer) 0))));
                                        Var_268 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_267, (MR_Integer) 1))));
                                        succeeded = (Var_268 == (MR_Word) ((MR_Unsigned) 0U));
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
                parse_tree__parse_dcg_goal__parse_dcg_if_then_else_12_p_0(CondGoalTerm_527, ThenGoalTerm_528, ElseGoalTerm_66, CondContext_68, ContextPieces_15, MaybeGoal_16, STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_0_97, STATE_VARIABLE_DCGVar_98);
              else
              {
                MR_Word Var_296;
                MR_Word Spec_525;

                {
                  Spec_525 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_525, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_non_call_dcg_goal\'/11"));
                  MR_hl_field(MR_mktag(1), Spec_525, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_525, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_525, 3) = ((MR_Box) (Context_14));
                  MR_hl_field(MR_mktag(1), Spec_525, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[53])));
                }
                {
                  Var_296 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_296, 0) = ((MR_Box) (Spec_525));
                  MR_hl_field(MR_mktag(1), Var_296, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_296));
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
              MR_Word CondGoalTerm_549;
              MR_Word ThenGoalTerm_550;
              MR_Word Var_218;
              MR_Word Var_219;
              MR_String Var_220;
              MR_Word Var_221;
              MR_Word Var_222;
              MR_Word Var_223;
              MR_Word Var_224;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_218 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_224 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_224 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_218)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_219 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_218, (MR_Integer) 0))));
                    Var_221 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_218, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_219)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_220 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_219, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_220, (MR_String) "then") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_221 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          CondGoalTerm_549 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_221, (MR_Integer) 0))));
                          Var_222 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_221, (MR_Integer) 1))));
                          succeeded = (Var_222 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ThenGoalTerm_550 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_222, (MR_Integer) 0))));
                            Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_222, (MR_Integer) 1))));
                            succeeded = (Var_223 == (MR_Word) ((MR_Unsigned) 0U));
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
                MR_Word StateVars_536;
                MR_Word Vars_537;

                parse_tree__parse_dcg_goal__parse_dcg_if_then_12_p_0(CondGoalTerm_549, ThenGoalTerm_550, Context_14, ContextPieces_15, &MaybeVarsCondGoal_72, &MaybeThenGoal_73, STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_0_97, STATE_VARIABLE_DCGVar_98);
                succeeded = ((MR_tag((MR_Word) MaybeVarsCondGoal_72)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Vars_537 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCondGoal_72, (MR_Integer) 0))));
                  StateVars_536 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCondGoal_72, (MR_Integer) 1))));
                  CondGoal_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCondGoal_72, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) MaybeThenGoal_73)) == (MR_Integer) 1);
                  if (succeeded)
                    ThenGoal_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThenGoal_73, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word ElseGoal_77;
                  MR_Word Goal_532;

                  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (*STATE_VARIABLE_DCGVar_98)), ((MR_Box) (STATE_VARIABLE_DCGVar_0_97)));
                  if (succeeded)
                    {
                      ElseGoal_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ElseGoal_77, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), ElseGoal_77, 1) = ((MR_Box) (Context_14));
                    }
                  else
                  {
                    MR_Word Var_228;
                    MR_Word Var_229;

                    {
                      Var_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_228, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_98));
                      MR_hl_field(MR_mktag(1), Var_228, 1) = ((MR_Box) (Context_14));
                    }
                    {
                      Var_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_229, 0) = ((MR_Box) (STATE_VARIABLE_DCGVar_0_97));
                      MR_hl_field(MR_mktag(1), Var_229, 1) = ((MR_Box) (Context_14));
                    }
                    {
                      ElseGoal_77 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ElseGoal_77, 0) = ((MR_Box) (Context_14));
                      MR_hl_field(MR_mktag(0), ElseGoal_77, 1) = ((MR_Box) (Var_228));
                      MR_hl_field(MR_mktag(0), ElseGoal_77, 2) = ((MR_Box) (Var_229));
                      MR_hl_field(MR_mktag(0), ElseGoal_77, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    }
                  }
                  {
                    Goal_532 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_532, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), Goal_532, 1) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(3), Goal_532, 2) = ((MR_Box) (Vars_537));
                    MR_hl_field(MR_mktag(3), Goal_532, 3) = ((MR_Box) (StateVars_536));
                    MR_hl_field(MR_mktag(3), Goal_532, 4) = ((MR_Box) (CondGoal_75));
                    MR_hl_field(MR_mktag(3), Goal_532, 5) = ((MR_Box) (ThenGoal_76));
                    MR_hl_field(MR_mktag(3), Goal_532, 6) = ((MR_Box) (ElseGoal_77));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_532));
                  }
                }
                else
                {
                  MR_Word Var_231;
                  MR_Word Var_232;
                  MR_Word Specs_533;

                  Var_231 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[5]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[5]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeVarsCondGoal_72);
                  Var_232 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeThenGoal_73);
                  Specs_533 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_231, Var_232);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_533));
                  }
                }
              }
              else
              {
                MR_Word Var_256;
                MR_Word Spec_542;

                {
                  Spec_542 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_542, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_non_call_dcg_goal\'/11"));
                  MR_hl_field(MR_mktag(1), Spec_542, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_542, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_542, 3) = ((MR_Box) (Context_14));
                  MR_hl_field(MR_mktag(1), Spec_542, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[53])));
                }
                {
                  Var_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_256, 0) = ((MR_Box) (Spec_542));
                  MR_hl_field(MR_mktag(1), Var_256, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_256));
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
              MR_Word Var_398;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_398 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_398 == (MR_Word) ((MR_Unsigned) 0U));
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
                MR_Word Var_402;

                Spec_23 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_402 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_402, 0) = ((MR_Box) (Spec_23));
                  MR_hl_field(MR_mktag(1), Var_402, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_402));
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
              MR_Word SubGoalTerm_406;
              MR_Word Var_392;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_406 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_392 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_392 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeGoal0_404;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_406, ContextPieces_15, &MaybeGoal0_404, STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_0_97, STATE_VARIABLE_DCGVar_98);
                if (((MR_tag((MR_Word) MaybeGoal0_404)) == (MR_Integer) 0))
                  *MaybeGoal_16 = MaybeGoal0_404;
                else
                {
                  MR_Word Goal0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal0_404, (MR_Integer) 0))));
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
                MR_Word Var_396;
                MR_Word Spec_405;

                Spec_405 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_396 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_396, 0) = ((MR_Box) (Spec_405));
                  MR_hl_field(MR_mktag(1), Var_396, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_396));
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
              MR_Word SubGoalTerm_688;
              MR_Word Var_666;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_688 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_666 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_666 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeGoal0_676;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_688, ContextPieces_15, &MaybeGoal0_676, STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_0_97, STATE_VARIABLE_DCGVar_98);
                if (((MR_tag((MR_Word) MaybeGoal0_676)) == (MR_Integer) 0))
                  *MaybeGoal_16 = MaybeGoal0_676;
                else
                {
                  MR_Word Goal0_668 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal0_676, (MR_Integer) 0))));
                  MR_Word Goal_669;

                  {
                    Goal_669 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_669, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), Goal_669, 1) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(3), Goal_669, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), Goal_669, 3) = ((MR_Box) (Goal0_668));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_669));
                  }
                }
              }
              else
              {
                MR_Word Var_677;
                MR_Word Spec_679;

                Spec_679 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_677 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_677, 0) = ((MR_Box) (Spec_679));
                  MR_hl_field(MR_mktag(1), Var_677, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_677));
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
              MR_Word SubGoalTerm_721;
              MR_Word Var_699;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_721 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_699 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_699 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeGoal0_709;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_721, ContextPieces_15, &MaybeGoal0_709, STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_0_97, STATE_VARIABLE_DCGVar_98);
                if (((MR_tag((MR_Word) MaybeGoal0_709)) == (MR_Integer) 0))
                  *MaybeGoal_16 = MaybeGoal0_709;
                else
                {
                  MR_Word Goal0_701 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal0_709, (MR_Integer) 0))));
                  MR_Word Goal_702;

                  {
                    Goal_702 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_702, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), Goal_702, 1) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(3), Goal_702, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), Goal_702, 3) = ((MR_Box) (Goal0_701));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_702));
                  }
                }
              }
              else
              {
                MR_Word Var_710;
                MR_Word Spec_712;

                Spec_712 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_710 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_710, 0) = ((MR_Box) (Spec_712));
                  MR_hl_field(MR_mktag(1), Var_710, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_710));
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
              MR_Word SubGoalTerm_737;
              MR_Word Var_732;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_737 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_732 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_732 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeGoal0_733;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_737, ContextPieces_15, &MaybeGoal0_733, STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_0_97, STATE_VARIABLE_DCGVar_98);
                parse_tree__parse_goal__apply_purity_marker_to_maybe_goal_4_p_0(SubGoalTerm_737, (MR_Integer) 1, MaybeGoal0_733, MaybeGoal_16);
              }
              else
              {
                MR_Word Spec_734;
                MR_Word Var_735;

                Spec_734 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_735 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_735, 0) = ((MR_Box) (Spec_734));
                  MR_hl_field(MR_mktag(1), Var_735, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_735));
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
              MR_Word QVarsTerm_873;
              MR_Word SubGoalTerm_904;
              MR_Word Var_750;
              MR_Word Var_751;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                QVarsTerm_873 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_750 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_750 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_904 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_750, (MR_Integer) 0))));
                  Var_751 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_750, (MR_Integer) 1))));
                  succeeded = (Var_751 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word GenericVarSet_833;
                MR_Word VarsContextPieces_834;
                MR_Word MaybeVars_835;
                MR_Word Var_845;
                MR_Word MaybeSubGoal_856;
                MR_Word Vars0_805;
                MR_Word StateVars0_806;
                MR_Word SubGoal_823;
                MR_Word Var_752;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_93, &GenericVarSet_833);
                Var_845 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[57])));
                VarsContextPieces_834 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_15, Var_845);
                parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), QVarsTerm_873, GenericVarSet_833, VarsContextPieces_834, &MaybeVars_835);
                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_904, ContextPieces_15, &MaybeSubGoal_856, STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_Counter_0_95, STATE_VARIABLE_Counter_96, STATE_VARIABLE_DCGVar_0_97, STATE_VARIABLE_DCGVar_98);
                succeeded = ((MR_tag((MR_Word) MaybeVars_835)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_752 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_835, (MR_Integer) 0))));
                  Vars0_805 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_752, (MR_Integer) 0))));
                  StateVars0_806 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_752, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_856)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_823 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_856, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word StateVars_781;
                  MR_Word Vars_782;
                  MR_Word Goal1_783;
                  MR_Word Goal_792;

                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[6]), StateVars0_806, &StateVars_781);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[7]), Vars0_805, &Vars_782);
                  if ((StateVars_781 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal1_783 = SubGoal_823;
                  else
                    {
                      Goal1_783 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal1_783, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal1_783, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                      MR_hl_field(MR_mktag(3), Goal1_783, 2) = ((MR_Box) (Context_14));
                      MR_hl_field(MR_mktag(3), Goal1_783, 3) = ((MR_Box) (StateVars_781));
                      MR_hl_field(MR_mktag(3), Goal1_783, 4) = ((MR_Box) (SubGoal_823));
                    }
                  if ((Vars_782 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal_792 = Goal1_783;
                  else
                    {
                      Goal_792 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_792, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal_792, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
                      MR_hl_field(MR_mktag(3), Goal_792, 2) = ((MR_Box) (Context_14));
                      MR_hl_field(MR_mktag(3), Goal_792, 3) = ((MR_Box) (Vars_782));
                      MR_hl_field(MR_mktag(3), Goal_792, 4) = ((MR_Box) (Goal1_783));
                    }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_792));
                  }
                }
                else
                {
                  MR_Word Var_799;
                  MR_Word Var_800;
                  MR_Word Specs_801;

                  Var_799 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[4]), MaybeVars_835);
                  Var_800 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_856);
                  Specs_801 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_799, Var_800);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_801));
                  }
                }
              }
              else
              {
                MR_Word Var_870;
                MR_Word Spec_872;

                Spec_872 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_15, Context_14, (MR_String) "a list of variables", Functor_12);
                {
                  Var_870 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_870, 0) = ((MR_Box) (Spec_872));
                  MR_hl_field(MR_mktag(1), Var_870, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_870));
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
              MR_Word Var_216;
              MR_Word Spec_560;

              {
                Spec_560 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_560, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_non_call_dcg_goal\'/11"));
                MR_hl_field(MR_mktag(1), Spec_560, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_560, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_560, 3) = ((MR_Box) (Context_14));
                MR_hl_field(MR_mktag(1), Spec_560, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[61])));
              }
              {
                Var_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_216, 0) = ((MR_Box) (Spec_560));
                MR_hl_field(MR_mktag(1), Var_216, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeGoal_16 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_216));
              }
              *STATE_VARIABLE_VarSet_94 = STATE_VARIABLE_VarSet_0_93;
            }
            else
            {
              MR_Word HeadGoal_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
              MR_Word TailGoals_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
              MR_Word Var_203;
              MR_Word SubGoal_562;

              {
                Var_203 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_203, 0) = ((MR_Box) (HeadGoal_78));
                MR_hl_field(MR_mktag(0), Var_203, 1) = ((MR_Box) (TailGoals_79));
              }
              parse_tree__parse_util__one_or_more_to_conjunction_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Context_14, Var_203, &SubGoal_562);
              parse_tree__parse_goal__parse_goal_5_p_0(SubGoal_562, ContextPieces_15, MaybeGoal_16, STATE_VARIABLE_VarSet_0_93, STATE_VARIABLE_VarSet_94);
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

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__638__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_75);
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

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__637__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_69);
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

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal__121__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_48);
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
