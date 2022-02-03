/*
** Automatically generated from `parse_dcg_goal.m'
** by the Mercury compiler,
** version 22.01-beta-2022-01-31
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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
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
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__825__1_2_p_0(
  MR_Word HeadVar__1_75,
  MR_Word * HeadVar__2_76);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__824__1_2_p_0(
  MR_Word HeadVar__1_69,
  MR_Word * HeadVar__2_70);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal_colon_equal__785__1_2_p_0(
  MR_Word HeadVar__1_46,
  MR_Word * HeadVar__2_47);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal_some_all__392__1_2_p_0(
  MR_Word HeadVar__1_95,
  MR_Word * HeadVar__2_96);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal_some_all__391__1_2_p_0(
  MR_Word HeadVar__1_89,
  MR_Word * HeadVar__2_90);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal__122__1_2_p_0(
  MR_Word HeadVar__1_49,
  MR_Word * HeadVar__2_50);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_clause__82__1_2_p_0(
  MR_Word HeadVar__1_50,
  MR_Word * HeadVar__2_51);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_clause_7_p_0_1(
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
  MR_Word STATE_VARIABLE_VarSet_0_20,
  MR_Word * STATE_VARIABLE_VarSet_21,
  MR_Word STATE_VARIABLE_Counter_0_22,
  MR_Word * STATE_VARIABLE_Counter_23,
  MR_Word STATE_VARIABLE_DCGVar_0_24,
  MR_Word * STATE_VARIABLE_DCGVar_25);

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
  MR_Word STATE_VARIABLE_VarSet_0_24,
  MR_Word * STATE_VARIABLE_VarSet_25,
  MR_Word STATE_VARIABLE_Counter_0_26,
  MR_Word * STATE_VARIABLE_Counter_27,
  MR_Word STATE_VARIABLE_DCGVar_0_28,
  MR_Word * STATE_VARIABLE_DCGVar_29);

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
  MR_Word ArgTerms0_12,
  MR_Word Context_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22,
  MR_Word STATE_VARIABLE_Counter_0_23,
  MR_Word * STATE_VARIABLE_Counter_24,
  MR_Word STATE_VARIABLE_DCGVar_0_25,
  MR_Word * STATE_VARIABLE_DCGVar_26);


static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_1[64][2];

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_2[4][1];

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_3[3][5];

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_4[7][3];




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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In DCG clause head:"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "all"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In first argument of"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "some"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[8])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "( if goal then goal else goal )"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should occur in expressions of the form"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "operator"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "else"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the "))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "between the curly braces."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[18])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: there should be at least one goal"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and must therefore be used with arity 0."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[18])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "against a list of zero items,"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may only be used to match the input"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "[]"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[41])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: in DCG clauses,"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "at the end of the list."))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[18])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[49])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: there is no"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and must therefore be used with arity 2."))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[18])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "against a list of one or more items,"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[54])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[56])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "[|]"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[58])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[61])))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_2[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "call"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "[|]"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) ":="))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_1[63]))
  },
};

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_3[3][5] = {
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

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_4[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_3[0])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_3[1])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_3[1])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_3[2])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_3[1])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_3[1])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_3[2])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_dcg_clause_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
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
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__825__1_2_p_0(
  MR_Word HeadVar__1_75,
  MR_Word * HeadVar__2_76)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_75, HeadVar__2_76);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__824__1_2_p_0(
  MR_Word HeadVar__1_69,
  MR_Word * HeadVar__2_70)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_69, HeadVar__2_70);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal_colon_equal__785__1_2_p_0(
  MR_Word HeadVar__1_46,
  MR_Word * HeadVar__2_47)
{
  mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_46, HeadVar__2_47);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal_some_all__392__1_2_p_0(
  MR_Word HeadVar__1_95,
  MR_Word * HeadVar__2_96)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_95, HeadVar__2_96);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal_some_all__391__1_2_p_0(
  MR_Word HeadVar__1_89,
  MR_Word * HeadVar__2_90)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_89, HeadVar__2_90);
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
  MR_Word HeadVar__1_50,
  MR_Word * HeadVar__2_51)
{
  mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_50, HeadVar__2_51);
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
    MR_Word conv0_HeadVar__2_51;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_clause__82__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_51);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_51));
  }
}

void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_clause_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet0_9,
  MR_Word DCG_Head_10,
  MR_Word DCG_Body_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
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
    MR_Integer N_65;
    MR_String StringN_66;
    MR_String VarName_67;
    MR_Word STATE_VARIABLE_VarSet_18_70;
    MR_Word _Counter_22;

    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet0_9, &ProgVarSet0_15);
    Var_34 = mercury__counter__init_1_f_0((MR_Integer) 0);
    mercury__counter__allocate_3_p_0(&N_65, Var_34, &Counter0_17);
    mercury__string__int_to_string_2_p_0(N_65, &StringN_66);
    mercury__string__append_3_p_2((MR_String) "DCG_", StringN_66, &VarName_67);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &DCGVar0_18, ProgVarSet0_15, &STATE_VARIABLE_VarSet_18_70);
    mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DCGVar0_18, VarName_67, STATE_VARIABLE_VarSet_18_70, &ProgVarSet1_16);
    BodyContextPieces_19 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0));
    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(DCG_Body_11, BodyContextPieces_19, &MaybeBodyGoal_20, ProgVarSet1_16, &ProgVarSet_21, Counter0_17, &_Counter_22, DCGVar0_18, &DCGVar_23);
    HeadContextPieces_24 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[6]))));
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
      MR_Word SymName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFunctor_25, (MR_Integer) 0))));
      MR_Word ArgTerms0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFunctor_25, (MR_Integer) 1))));
      MR_Word ArgTerms1_28;
      MR_Word ArgTerms_29;
      MR_Word ItemClause_30;
      MR_Word Item_31;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_46;

      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_4[6]), ArgTerms0_27, &ArgTerms1_28);
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
      ArgTerms_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[1]), ArgTerms1_28, Var_40);
      {
        ItemClause_30 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemClause_30, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), ItemClause_30, 1) = ((MR_Box) (SymName_26));
        MR_hl_field(MR_mktag(0), ItemClause_30, 2) = ((MR_Box) (ArgTerms_29));
        MR_hl_field(MR_mktag(0), ItemClause_30, 3) = ((MR_Box) (ProgVarSet_21));
        MR_hl_field(MR_mktag(0), ItemClause_30, 4) = ((MR_Box) (MaybeBodyGoal_20));
        MR_hl_field(MR_mktag(0), ItemClause_30, 5) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(0), ItemClause_30, 6) = ((MR_Box) (SeqNum_13));
      }
      Item_31 = (MR_Word) ((MR_Word) (ItemClause_30));
      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Item_31));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_46));
      }
    }
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
    MR_Word conv2_HeadVar__2_96;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal_some_all__392__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_96);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_96));
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
    MR_Word conv1_HeadVar__2_90;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal_some_all__391__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_90);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_90));
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
    MR_Word conv0_HeadVar__2_47;

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal_colon_equal__785__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_47);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_47));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0(
  MR_String Functor_12,
  MR_Word Args_13,
  MR_Word Context_14,
  MR_Word ContextPieces_15,
  MR_Word * MaybeGoal_16,
  MR_Word STATE_VARIABLE_VarSet_0_20,
  MR_Word * STATE_VARIABLE_VarSet_21,
  MR_Word STATE_VARIABLE_Counter_0_22,
  MR_Word * STATE_VARIABLE_Counter_23,
  MR_Word STATE_VARIABLE_DCGVar_0_24,
  MR_Word * STATE_VARIABLE_DCGVar_25)
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
                  case_num_0 = (MR_Integer) 12;
                break;
              case (MR_Integer) 115:
                if (MR_offset_streq(9, Functor_12, (MR_String) "promise_semipure"))
                  case_num_0 = (MR_Integer) 12;
                break;
            }
          break;
        case (MR_Integer) 115:
          switch (MR_nth_code_unit(Functor_12, 1)) {
            case (MR_Integer) 101:
              if (MR_offset_streq(2, Functor_12, (MR_String) "semipure"))
                case_num_0 = (MR_Integer) 11;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, Functor_12, (MR_String) "some"))
                case_num_0 = (MR_Integer) 8;
              break;
          }
          break;
        case (MR_Integer) 123:
          if (MR_offset_streq(1, Functor_12, (MR_String) "{}"))
            case_num_0 = (MR_Integer) 13;
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
              MR_Word SubGoalTermA_82;
              MR_Word SubGoalTermB_83;
              MR_Word Var_94;
              MR_Word Var_95;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTermA_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_94 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTermB_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_94, (MR_Integer) 0))));
                  Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_94, (MR_Integer) 1))));
                  succeeded = (Var_95 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoalA_84;
                MR_Word MaybeSubGoalB_85;
                MR_Word STATE_VARIABLE_VarSet_40_96;
                MR_Word STATE_VARIABLE_Counter_41_97;
                MR_Word STATE_VARIABLE_DCGVar_42_98;
                MR_Word SubGoalA_86;
                MR_Word GoalWarningSpecsA_87;
                MR_Word SubGoalB_88;
                MR_Word GoalWarningSpecsB_89;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTermA_82, ContextPieces_15, &MaybeSubGoalA_84, STATE_VARIABLE_VarSet_0_20, &STATE_VARIABLE_VarSet_40_96, STATE_VARIABLE_Counter_0_22, &STATE_VARIABLE_Counter_41_97, STATE_VARIABLE_DCGVar_0_24, &STATE_VARIABLE_DCGVar_42_98);
                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTermB_83, ContextPieces_15, &MaybeSubGoalB_85, STATE_VARIABLE_VarSet_40_96, STATE_VARIABLE_VarSet_21, STATE_VARIABLE_Counter_41_97, STATE_VARIABLE_Counter_23, STATE_VARIABLE_DCGVar_42_98, STATE_VARIABLE_DCGVar_25);
                succeeded = ((MR_tag((MR_Word) MaybeSubGoalA_84)) == (MR_Integer) 1);
                if (succeeded)
                {
                  SubGoalA_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_84, (MR_Integer) 0))));
                  GoalWarningSpecsA_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_84, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoalB_85)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoalB_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_85, (MR_Integer) 0))));
                    GoalWarningSpecsB_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_85, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word GoalWarningSpecs_90;
                  MR_Word Goal_91;

                  GoalWarningSpecs_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), GoalWarningSpecsA_87, GoalWarningSpecsB_89);
                  {
                    Goal_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_91, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Goal_91, 1) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(3), Goal_91, 2) = ((MR_Box) (SubGoalA_86));
                    MR_hl_field(MR_mktag(3), Goal_91, 3) = ((MR_Box) (SubGoalB_88));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_91));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (GoalWarningSpecs_90));
                  }
                }
                else
                {
                  MR_Word Specs_92;
                  MR_Word Var_102;
                  MR_Word Var_103;

                  Var_102 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalA_84);
                  Var_103 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalB_85);
                  Specs_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_102, Var_103);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_92));
                  }
                }
              }
              else
              {
                MR_Word Spec_93;
                MR_Word Var_104;

                Spec_93 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Spec_93));
                  MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_104));
                }
                *STATE_VARIABLE_DCGVar_25 = STATE_VARIABLE_DCGVar_0_24;
                *STATE_VARIABLE_Counter_23 = STATE_VARIABLE_Counter_0_22;
                *STATE_VARIABLE_VarSet_21 = STATE_VARIABLE_VarSet_0_20;
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
              MR_Word SubGoalTermA_123;
              MR_Word SubGoalTermB_124;
              MR_Word Var_135;
              MR_Word Var_136;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTermA_123 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_135 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTermB_124 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_135, (MR_Integer) 0))));
                  Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_135, (MR_Integer) 1))));
                  succeeded = (Var_136 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoalA_125;
                MR_Word MaybeSubGoalB_126;
                MR_Word STATE_VARIABLE_VarSet_40_137;
                MR_Word STATE_VARIABLE_Counter_41_138;
                MR_Word STATE_VARIABLE_DCGVar_42_139;
                MR_Word SubGoalA_127;
                MR_Word GoalWarningSpecsA_128;
                MR_Word SubGoalB_129;
                MR_Word GoalWarningSpecsB_130;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTermA_123, ContextPieces_15, &MaybeSubGoalA_125, STATE_VARIABLE_VarSet_0_20, &STATE_VARIABLE_VarSet_40_137, STATE_VARIABLE_Counter_0_22, &STATE_VARIABLE_Counter_41_138, STATE_VARIABLE_DCGVar_0_24, &STATE_VARIABLE_DCGVar_42_139);
                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTermB_124, ContextPieces_15, &MaybeSubGoalB_126, STATE_VARIABLE_VarSet_40_137, STATE_VARIABLE_VarSet_21, STATE_VARIABLE_Counter_41_138, STATE_VARIABLE_Counter_23, STATE_VARIABLE_DCGVar_42_139, STATE_VARIABLE_DCGVar_25);
                succeeded = ((MR_tag((MR_Word) MaybeSubGoalA_125)) == (MR_Integer) 1);
                if (succeeded)
                {
                  SubGoalA_127 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_125, (MR_Integer) 0))));
                  GoalWarningSpecsA_128 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_125, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoalB_126)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoalB_129 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_126, (MR_Integer) 0))));
                    GoalWarningSpecsB_130 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_126, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word GoalWarningSpecs_131;
                  MR_Word Goal_132;

                  GoalWarningSpecs_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), GoalWarningSpecsA_128, GoalWarningSpecsB_130);
                  {
                    Goal_132 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Goal_132, 0) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(2), Goal_132, 1) = ((MR_Box) (SubGoalA_127));
                    MR_hl_field(MR_mktag(2), Goal_132, 2) = ((MR_Box) (SubGoalB_129));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_132));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (GoalWarningSpecs_131));
                  }
                }
                else
                {
                  MR_Word Specs_133;
                  MR_Word Var_143;
                  MR_Word Var_144;

                  Var_143 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalA_125);
                  Var_144 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalB_126);
                  Specs_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_143, Var_144);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_133));
                  }
                }
              }
              else
              {
                MR_Word Spec_134;
                MR_Word Var_145;

                Spec_134 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (Spec_134));
                  MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_145));
                }
                *STATE_VARIABLE_DCGVar_25 = STATE_VARIABLE_DCGVar_0_24;
                *STATE_VARIABLE_Counter_23 = STATE_VARIABLE_Counter_0_22;
                *STATE_VARIABLE_VarSet_21 = STATE_VARIABLE_VarSet_0_20;
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
              MR_Word ArgTerm0_163;
              MR_Word Var_170;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ArgTerm0_163 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_170 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_170 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word ArgTerm_165;
                MR_Word OutVarTerm_166;
                MR_Word Goal_167;
                MR_Integer N_198;
                MR_String StringN_199;
                MR_String VarName_200;
                MR_Word STATE_VARIABLE_VarSet_18_203;

                mercury__counter__allocate_3_p_0(&N_198, STATE_VARIABLE_Counter_0_22, STATE_VARIABLE_Counter_23);
                mercury__string__int_to_string_2_p_0(N_198, &StringN_199);
                mercury__string__append_3_p_2((MR_String) "DCG_", StringN_199, &VarName_200);
                mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_DCGVar_25, STATE_VARIABLE_VarSet_0_20, &STATE_VARIABLE_VarSet_18_203);
                mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *STATE_VARIABLE_DCGVar_25, VarName_200, STATE_VARIABLE_VarSet_18_203, STATE_VARIABLE_VarSet_21);
                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgTerm0_163, &ArgTerm_165);
                {
                  OutVarTerm_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), OutVarTerm_166, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_25));
                  MR_hl_field(MR_mktag(1), OutVarTerm_166, 1) = ((MR_Box) (Context_14));
                }
                {
                  Goal_167 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Goal_167, 0) = ((MR_Box) (Context_14));
                  MR_hl_field(MR_mktag(0), Goal_167, 1) = ((MR_Box) (ArgTerm_165));
                  MR_hl_field(MR_mktag(0), Goal_167, 2) = ((MR_Box) (OutVarTerm_166));
                  MR_hl_field(MR_mktag(0), Goal_167, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_167));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              else
              {
                MR_Word ProgArgTerms_169;
                MR_Word Goal_182;

                mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_4[3]), Args_13, &ProgArgTerms_169);
                parse_tree__parse_dcg_goal__make_dcg_call_10_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_2[2]), ProgArgTerms_169, Context_14, &Goal_182, STATE_VARIABLE_VarSet_0_20, STATE_VARIABLE_VarSet_21, STATE_VARIABLE_Counter_0_22, STATE_VARIABLE_Counter_23, STATE_VARIABLE_DCGVar_0_24, STATE_VARIABLE_DCGVar_25);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_182));
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
              MR_Word SubGoalTermA_219;
              MR_Word SubGoalTermB_220;
              MR_Word Var_241;
              MR_Word Var_242;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTermA_219 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_241 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_241 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTermB_220 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_241, (MR_Integer) 0))));
                  Var_242 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_241, (MR_Integer) 1))));
                  succeeded = (Var_242 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word CondGoalTerm_221;
                MR_Word ThenGoalTerm_222;
                MR_Word Var_243;
                MR_String Var_244;
                MR_Word Var_245;
                MR_Word Var_246;
                MR_Word Var_247;

                succeeded = ((MR_tag((MR_Word) SubGoalTermA_219)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_243 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoalTermA_219, (MR_Integer) 0))));
                  Var_245 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoalTermA_219, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_243)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_244 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_243, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_244, (MR_String) "->") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_245 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        CondGoalTerm_221 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_245, (MR_Integer) 0))));
                        Var_246 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_245, (MR_Integer) 1))));
                        succeeded = (Var_246 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ThenGoalTerm_222 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_246, (MR_Integer) 0))));
                          Var_247 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_246, (MR_Integer) 1))));
                          succeeded = (Var_247 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                  parse_tree__parse_dcg_goal__parse_dcg_if_then_else_12_p_0(CondGoalTerm_221, ThenGoalTerm_222, SubGoalTermB_220, Context_14, ContextPieces_15, MaybeGoal_16, STATE_VARIABLE_VarSet_0_20, STATE_VARIABLE_VarSet_21, STATE_VARIABLE_Counter_0_22, STATE_VARIABLE_Counter_23, STATE_VARIABLE_DCGVar_0_24, STATE_VARIABLE_DCGVar_25);
                else
                {
                  MR_Word MaybeSubGoalA0_225;
                  MR_Word VarA_226;
                  MR_Word MaybeSubGoalB0_227;
                  MR_Word VarB_228;
                  MR_Word STATE_VARIABLE_VarSet_56_251;
                  MR_Word STATE_VARIABLE_Counter_57_252;
                  MR_Word SubGoalA0_229;
                  MR_Word GoalWarningSpecsA_230;
                  MR_Word SubGoalB0_231;
                  MR_Word GoalWarningSpecsB_232;

                  parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTermA_219, ContextPieces_15, &MaybeSubGoalA0_225, STATE_VARIABLE_VarSet_0_20, &STATE_VARIABLE_VarSet_56_251, STATE_VARIABLE_Counter_0_22, &STATE_VARIABLE_Counter_57_252, STATE_VARIABLE_DCGVar_0_24, &VarA_226);
                  parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTermB_220, ContextPieces_15, &MaybeSubGoalB0_227, STATE_VARIABLE_VarSet_56_251, STATE_VARIABLE_VarSet_21, STATE_VARIABLE_Counter_57_252, STATE_VARIABLE_Counter_23, STATE_VARIABLE_DCGVar_0_24, &VarB_228);
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoalA0_225)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoalA0_229 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA0_225, (MR_Integer) 0))));
                    GoalWarningSpecsA_230 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA0_225, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) MaybeSubGoalB0_227)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      SubGoalB0_231 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB0_227, (MR_Integer) 0))));
                      GoalWarningSpecsB_232 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB0_227, (MR_Integer) 1))));
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word GoalWarningSpecs_233;
                    MR_Word Goal_235;
                    MR_Word TypeInfo_81_276;

                    GoalWarningSpecs_233 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), GoalWarningSpecsA_230, GoalWarningSpecsB_232);
                    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (VarA_226)), ((MR_Box) (STATE_VARIABLE_DCGVar_0_24)));
                    if (succeeded)
                    {
                      TypeInfo_81_276 = (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_81_276, ((MR_Box) (VarB_228)), ((MR_Box) (STATE_VARIABLE_DCGVar_0_24)));
                    }
                    if (succeeded)
                    {
                      *STATE_VARIABLE_DCGVar_25 = STATE_VARIABLE_DCGVar_0_24;
                      {
                        Goal_235 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Goal_235, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(MR_mktag(3), Goal_235, 1) = ((MR_Box) (Context_14));
                        MR_hl_field(MR_mktag(3), Goal_235, 2) = ((MR_Box) (SubGoalA0_229));
                        MR_hl_field(MR_mktag(3), Goal_235, 3) = ((MR_Box) (SubGoalB0_231));
                      }
                    }
                    else
                    {
                      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (VarA_226)), ((MR_Box) (STATE_VARIABLE_DCGVar_0_24)));
                      if (succeeded)
                      {
                        MR_Word Unify_236;
                        MR_Word SubGoalA_237;
                        MR_Word Var_255;
                        MR_Word Var_256;

                        *STATE_VARIABLE_DCGVar_25 = VarB_228;
                        {
                          Var_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_255, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_25));
                          MR_hl_field(MR_mktag(1), Var_255, 1) = ((MR_Box) (Context_14));
                        }
                        {
                          Var_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_256, 0) = ((MR_Box) (VarA_226));
                          MR_hl_field(MR_mktag(1), Var_256, 1) = ((MR_Box) (Context_14));
                        }
                        {
                          Unify_236 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Unify_236, 0) = ((MR_Box) (Context_14));
                          MR_hl_field(MR_mktag(0), Unify_236, 1) = ((MR_Box) (Var_255));
                          MR_hl_field(MR_mktag(0), Unify_236, 2) = ((MR_Box) (Var_256));
                          MR_hl_field(MR_mktag(0), Unify_236, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                        }
                        parse_tree__parse_dcg_goal__append_to_disjunct_4_p_0(Unify_236, Context_14, SubGoalA0_229, &SubGoalA_237);
                        {
                          Goal_235 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Goal_235, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                          MR_hl_field(MR_mktag(3), Goal_235, 1) = ((MR_Box) (Context_14));
                          MR_hl_field(MR_mktag(3), Goal_235, 2) = ((MR_Box) (SubGoalA_237));
                          MR_hl_field(MR_mktag(3), Goal_235, 3) = ((MR_Box) (SubGoalB0_231));
                        }
                      }
                      else
                      {
                        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (VarB_228)), ((MR_Box) (STATE_VARIABLE_DCGVar_0_24)));
                        if (succeeded)
                        {
                          MR_Word SubGoalB_238;
                          MR_Word Var_258;
                          MR_Word Var_259;
                          MR_Word Unify_268;

                          *STATE_VARIABLE_DCGVar_25 = VarA_226;
                          {
                            Var_258 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_258, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_25));
                            MR_hl_field(MR_mktag(1), Var_258, 1) = ((MR_Box) (Context_14));
                          }
                          {
                            Var_259 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_259, 0) = ((MR_Box) (VarB_228));
                            MR_hl_field(MR_mktag(1), Var_259, 1) = ((MR_Box) (Context_14));
                          }
                          {
                            Unify_268 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Unify_268, 0) = ((MR_Box) (Context_14));
                            MR_hl_field(MR_mktag(0), Unify_268, 1) = ((MR_Box) (Var_258));
                            MR_hl_field(MR_mktag(0), Unify_268, 2) = ((MR_Box) (Var_259));
                            MR_hl_field(MR_mktag(0), Unify_268, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                          }
                          parse_tree__parse_dcg_goal__append_to_disjunct_4_p_0(Unify_268, Context_14, SubGoalB0_231, &SubGoalB_238);
                          {
                            Goal_235 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Goal_235, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                            MR_hl_field(MR_mktag(3), Goal_235, 1) = ((MR_Box) (Context_14));
                            MR_hl_field(MR_mktag(3), Goal_235, 2) = ((MR_Box) (SubGoalA0_229));
                            MR_hl_field(MR_mktag(3), Goal_235, 3) = ((MR_Box) (SubGoalB_238));
                          }
                        }
                        else
                        {
                          MR_Word SubGoalA_269;

                          *STATE_VARIABLE_DCGVar_25 = VarB_228;
                          parse_tree__prog_util__rename_in_goal_4_p_0(VarA_226, VarB_228, SubGoalA0_229, &SubGoalA_269);
                          {
                            Goal_235 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Goal_235, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                            MR_hl_field(MR_mktag(3), Goal_235, 1) = ((MR_Box) (Context_14));
                            MR_hl_field(MR_mktag(3), Goal_235, 2) = ((MR_Box) (SubGoalA_269));
                            MR_hl_field(MR_mktag(3), Goal_235, 3) = ((MR_Box) (SubGoalB0_231));
                          }
                        }
                      }
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_16 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_235));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (GoalWarningSpecs_233));
                    }
                  }
                  else
                  {
                    MR_Word Specs_239;
                    MR_Word Var_263;
                    MR_Word Var_264;

                    *STATE_VARIABLE_DCGVar_25 = VarA_226;
                    Var_263 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalA0_225);
                    Var_264 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalB0_227);
                    Specs_239 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_263, Var_264);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_16 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_239));
                    }
                  }
                }
              }
              else
              {
                MR_Word Spec_240;
                MR_Word Var_266;

                Spec_240 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_15, Context_14, (MR_String) ";");
                {
                  Var_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_266, 0) = ((MR_Box) (Spec_240));
                  MR_hl_field(MR_mktag(1), Var_266, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_266));
                }
                *STATE_VARIABLE_DCGVar_25 = STATE_VARIABLE_DCGVar_0_24;
                *STATE_VARIABLE_Counter_23 = STATE_VARIABLE_Counter_0_22;
                *STATE_VARIABLE_VarSet_21 = STATE_VARIABLE_VarSet_0_20;
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
              MR_Word ArgTerm0_292;
              MR_Word Var_297;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ArgTerm0_292 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_297 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_297 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word ArgTerm_293;
                MR_Word DCGVarTerm_294;
                MR_Word Goal_295;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgTerm0_292, &ArgTerm_293);
                {
                  DCGVarTerm_294 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), DCGVarTerm_294, 0) = ((MR_Box) (STATE_VARIABLE_DCGVar_0_24));
                  MR_hl_field(MR_mktag(1), DCGVarTerm_294, 1) = ((MR_Box) (Context_14));
                }
                {
                  Goal_295 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Goal_295, 0) = ((MR_Box) (Context_14));
                  MR_hl_field(MR_mktag(0), Goal_295, 1) = ((MR_Box) (ArgTerm_293));
                  MR_hl_field(MR_mktag(0), Goal_295, 2) = ((MR_Box) (DCGVarTerm_294));
                  MR_hl_field(MR_mktag(0), Goal_295, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_295));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              else
              {
                MR_Word Spec_296;
                MR_Word Var_301;

                Spec_296 = parse_tree__parse_goal__should_have_two_terms_infix_3_f_0(ContextPieces_15, Context_14, (MR_String) "=");
                {
                  Var_301 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_301, 0) = ((MR_Box) (Spec_296));
                  MR_hl_field(MR_mktag(1), Var_301, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_301));
                }
              }
              *STATE_VARIABLE_DCGVar_25 = STATE_VARIABLE_DCGVar_0_24;
              *STATE_VARIABLE_Counter_23 = STATE_VARIABLE_Counter_0_22;
              *STATE_VARIABLE_VarSet_21 = STATE_VARIABLE_VarSet_0_20;
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
              MR_Word Goal_320;
              MR_Word Var_356;
              MR_Word Var_357;
              MR_Integer N_367;
              MR_String StringN_368;
              MR_String VarName_369;
              MR_Word STATE_VARIABLE_VarSet_18_372;

              mercury__counter__allocate_3_p_0(&N_367, STATE_VARIABLE_Counter_0_22, STATE_VARIABLE_Counter_23);
              mercury__string__int_to_string_2_p_0(N_367, &StringN_368);
              mercury__string__append_3_p_2((MR_String) "DCG_", StringN_368, &VarName_369);
              mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_DCGVar_25, STATE_VARIABLE_VarSet_0_20, &STATE_VARIABLE_VarSet_18_372);
              mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *STATE_VARIABLE_DCGVar_25, VarName_369, STATE_VARIABLE_VarSet_18_372, STATE_VARIABLE_VarSet_21);
              {
                Var_356 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_356, 0) = ((MR_Box) (STATE_VARIABLE_DCGVar_0_24));
                MR_hl_field(MR_mktag(1), Var_356, 1) = ((MR_Box) (Context_14));
              }
              {
                Var_357 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_357, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_25));
                MR_hl_field(MR_mktag(1), Var_357, 1) = ((MR_Box) (Context_14));
              }
              {
                Goal_320 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Goal_320, 0) = ((MR_Box) (Context_14));
                MR_hl_field(MR_mktag(0), Goal_320, 1) = ((MR_Box) (Var_356));
                MR_hl_field(MR_mktag(0), Goal_320, 2) = ((MR_Box) (Var_357));
                MR_hl_field(MR_mktag(0), Goal_320, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *MaybeGoal_16 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_320));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            else
            {
              MR_Word Spec_324;
              MR_Word Var_351;

              {
                Spec_324 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_324, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_dcg_goal_nil\'/10"));
                MR_hl_field(MR_mktag(1), Spec_324, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_324, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(MR_mktag(1), Spec_324, 3) = ((MR_Box) (Context_14));
                MR_hl_field(MR_mktag(1), Spec_324, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[47])));
              }
              {
                Var_351 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_351, 0) = ((MR_Box) (Spec_324));
                MR_hl_field(MR_mktag(1), Var_351, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeGoal_16 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_351));
              }
              *STATE_VARIABLE_VarSet_21 = STATE_VARIABLE_VarSet_0_20;
              *STATE_VARIABLE_Counter_23 = STATE_VARIABLE_Counter_0_22;
              *STATE_VARIABLE_DCGVar_25 = STATE_VARIABLE_DCGVar_0_24;
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            // case "[|]"
            ;
            {
              MR_Word Var_399;
              MR_Word Var_400;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_399 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_399 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_400 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_399, (MR_Integer) 1))));
                  succeeded = (Var_400 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word ConsTerm0_392;
                MR_Word ConsTerm_393;
                MR_Word OutVarTerm_394;
                MR_Word Term_395;

                parse_tree__parse_dcg_goal__new_dcg_var_5_p_0(STATE_VARIABLE_VarSet_0_20, STATE_VARIABLE_VarSet_21, STATE_VARIABLE_Counter_0_22, STATE_VARIABLE_Counter_23, STATE_VARIABLE_DCGVar_25);
                {
                  ConsTerm0_392 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ConsTerm0_392, 0) = ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_2[1]));
                  MR_hl_field(MR_mktag(0), ConsTerm0_392, 1) = ((MR_Box) (Args_13));
                  MR_hl_field(MR_mktag(0), ConsTerm0_392, 2) = ((MR_Box) (Context_14));
                }
                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsTerm0_392, &ConsTerm_393);
                {
                  OutVarTerm_394 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), OutVarTerm_394, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_25));
                  MR_hl_field(MR_mktag(1), OutVarTerm_394, 1) = ((MR_Box) (Context_14));
                }
                succeeded = parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(ConsTerm_393, OutVarTerm_394, &Term_395);
                if (succeeded)
                {
                  MR_Word Goal_396;
                  MR_Word Var_409;

                  {
                    Var_409 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_409, 0) = ((MR_Box) (STATE_VARIABLE_DCGVar_0_24));
                    MR_hl_field(MR_mktag(1), Var_409, 1) = ((MR_Box) (Context_14));
                  }
                  {
                    Goal_396 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Goal_396, 0) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(0), Goal_396, 1) = ((MR_Box) (Var_409));
                    MR_hl_field(MR_mktag(0), Goal_396, 2) = ((MR_Box) (Term_395));
                    MR_hl_field(MR_mktag(0), Goal_396, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_396));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                else
                {
                  MR_Word Spec_398;
                  MR_Word Var_426;

                  {
                    Spec_398 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Spec_398, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_dcg_goal_cons\'/10"));
                    MR_hl_field(MR_mktag(1), Spec_398, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), Spec_398, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                    MR_hl_field(MR_mktag(1), Spec_398, 3) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(1), Spec_398, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[52])));
                  }
                  {
                    Var_426 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_426, 0) = ((MR_Box) (Spec_398));
                    MR_hl_field(MR_mktag(1), Var_426, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_426));
                  }
                }
              }
              else
              {
                MR_Word Var_454;
                MR_Word Spec_457;

                {
                  Spec_457 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_457, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_dcg_goal_cons\'/10"));
                  MR_hl_field(MR_mktag(1), Spec_457, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_457, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(MR_mktag(1), Spec_457, 3) = ((MR_Box) (Context_14));
                  MR_hl_field(MR_mktag(1), Spec_457, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[62])));
                }
                {
                  Var_454 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_454, 0) = ((MR_Box) (Spec_457));
                  MR_hl_field(MR_mktag(1), Var_454, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_454));
                }
                *STATE_VARIABLE_DCGVar_25 = STATE_VARIABLE_DCGVar_0_24;
                *STATE_VARIABLE_Counter_23 = STATE_VARIABLE_Counter_0_22;
                *STATE_VARIABLE_VarSet_21 = STATE_VARIABLE_VarSet_0_20;
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
              MR_Word SubGoalTerm_474;
              MR_Word Var_482;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_474 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_482 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_482 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_475;
                MR_Word Var_476;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_474, ContextPieces_15, &MaybeSubGoal_475, STATE_VARIABLE_VarSet_0_20, STATE_VARIABLE_VarSet_21, STATE_VARIABLE_Counter_0_22, STATE_VARIABLE_Counter_23, STATE_VARIABLE_DCGVar_0_24, &Var_476);
                if (((MR_tag((MR_Word) MaybeSubGoal_475)) == (MR_Integer) 0))
                  *MaybeGoal_16 = MaybeSubGoal_475;
                else
                {
                  MR_Word SubGoal_477 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_475, (MR_Integer) 0))));
                  MR_Word GoalWarningSpecs_478 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_475, (MR_Integer) 1))));
                  MR_Word Goal_479;

                  {
                    Goal_479 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_479, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), Goal_479, 1) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(3), Goal_479, 2) = ((MR_Box) (SubGoal_477));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_479));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (GoalWarningSpecs_478));
                  }
                }
              }
              else
              {
                MR_Word Spec_481;
                MR_Word Var_485;

                Spec_481 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_485 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_485, 0) = ((MR_Box) (Spec_481));
                  MR_hl_field(MR_mktag(1), Var_485, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_485));
                }
                *STATE_VARIABLE_Counter_23 = STATE_VARIABLE_Counter_0_22;
                *STATE_VARIABLE_VarSet_21 = STATE_VARIABLE_VarSet_0_20;
              }
              *STATE_VARIABLE_DCGVar_25 = STATE_VARIABLE_DCGVar_0_24;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 8:
          {
            // case "all", "some"
            ;
            {
              MR_Word QuantType_501;
              MR_Word VarsTailPieces_502;
              MR_Word QVarsTerm_503;
              MR_Word SubGoalTerm_504;
              MR_Word Var_545;
              MR_Word Var_546;

              if ((strcmp(Functor_12, (MR_String) "all") == 0))
              {
                QuantType_501 = (MR_Integer) 1;
                VarsTailPieces_502 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[13]));
              }
              else
              {
                QuantType_501 = (MR_Integer) 0;
                VarsTailPieces_502 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[17]));
              }
              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                QVarsTerm_503 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_545 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_545 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_504 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_545, (MR_Integer) 0))));
                  Var_546 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_545, (MR_Integer) 1))));
                  succeeded = (Var_546 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word GenericVarSet_505;
                MR_Word VarsContextPieces_506;
                MR_Word MaybeVars_507;
                MR_Word MaybeSubGoal_508;
                MR_Word Var_547;
                MR_Word Vars0_509;
                MR_Word StateVars0_510;
                MR_Word SubGoal_511;
                MR_Word SubGoalWarningSpecs_512;
                MR_Word Var_551;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_20, &GenericVarSet_505);
                Var_547 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), VarsTailPieces_502);
                VarsContextPieces_506 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_15, Var_547);
                parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), QVarsTerm_503, GenericVarSet_505, VarsContextPieces_506, &MaybeVars_507);
                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_504, ContextPieces_15, &MaybeSubGoal_508, STATE_VARIABLE_VarSet_0_20, STATE_VARIABLE_VarSet_21, STATE_VARIABLE_Counter_0_22, STATE_VARIABLE_Counter_23, STATE_VARIABLE_DCGVar_0_24, STATE_VARIABLE_DCGVar_25);
                succeeded = ((MR_tag((MR_Word) MaybeVars_507)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_551 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_507, (MR_Integer) 0))));
                  Vars0_509 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_551, (MR_Integer) 0))));
                  StateVars0_510 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_551, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_508)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoal_511 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_508, (MR_Integer) 0))));
                    SubGoalWarningSpecs_512 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_508, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word StateVars_513;
                  MR_Word Vars_514;
                  MR_Word Goal1_515;
                  MR_Word Goal_518;

                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_4[4]), StateVars0_510, &StateVars_513);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_4[5]), Vars0_509, &Vars_514);
                  if ((StateVars_513 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal1_515 = SubGoal_511;
                  else
                    {
                      Goal1_515 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal1_515, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal1_515, 1) = (MR_Box) (((((MR_Unsigned) (QuantType_501) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                      MR_hl_field(MR_mktag(3), Goal1_515, 2) = ((MR_Box) (Context_14));
                      MR_hl_field(MR_mktag(3), Goal1_515, 3) = ((MR_Box) (StateVars_513));
                      MR_hl_field(MR_mktag(3), Goal1_515, 4) = ((MR_Box) (SubGoal_511));
                    }
                  if ((Vars_514 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal_518 = Goal1_515;
                  else
                    {
                      Goal_518 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_518, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal_518, 1) = (MR_Box) (((((MR_Unsigned) (QuantType_501) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
                      MR_hl_field(MR_mktag(3), Goal_518, 2) = ((MR_Box) (Context_14));
                      MR_hl_field(MR_mktag(3), Goal_518, 3) = ((MR_Box) (Vars_514));
                      MR_hl_field(MR_mktag(3), Goal_518, 4) = ((MR_Box) (Goal1_515));
                    }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_518));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_512));
                  }
                }
                else
                {
                  MR_Word Specs_521;
                  MR_Word Var_556;
                  MR_Word Var_557;

                  Var_556 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[4]), MaybeVars_507);
                  Var_557 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_508);
                  Specs_521 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_556, Var_557);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_521));
                  }
                }
              }
              else
              {
                MR_Word Spec_522;
                MR_Word Var_559;

                Spec_522 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_15, Context_14, (MR_String) "a list of variables", Functor_12);
                {
                  Var_559 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_559, 0) = ((MR_Box) (Spec_522));
                  MR_hl_field(MR_mktag(1), Var_559, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_559));
                }
                *STATE_VARIABLE_DCGVar_25 = STATE_VARIABLE_DCGVar_0_24;
                *STATE_VARIABLE_Counter_23 = STATE_VARIABLE_Counter_0_22;
                *STATE_VARIABLE_VarSet_21 = STATE_VARIABLE_VarSet_0_20;
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
              MR_Word ElseGoalTerm_591;
              MR_Word CondGoalTerm_592;
              MR_Word ThenGoalTerm_593;
              MR_Word CondContext_595;
              MR_Word CondThenTerm_590;
              MR_Word Var_598;
              MR_Word Var_599;
              MR_Word Var_600;
              MR_String Var_601;
              MR_Word Var_602;
              MR_Word Var_603;
              MR_Word Var_604;
              MR_String Var_605;
              MR_Word Var_606;
              MR_Word Var_607;
              MR_Word Var_608;
              MR_Word Var_609;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                CondThenTerm_590 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_598 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_598 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ElseGoalTerm_591 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_598, (MR_Integer) 0))));
                  Var_599 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_598, (MR_Integer) 1))));
                  succeeded = (Var_599 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) CondThenTerm_590)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_600 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_590, (MR_Integer) 0))));
                      Var_602 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_590, (MR_Integer) 1))));
                      CondContext_595 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_590, (MR_Integer) 2))));
                      succeeded = ((MR_tag((MR_Word) Var_600)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_601 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_600, (MR_Integer) 0))));
                        succeeded = (strcmp(Var_601, (MR_String) "if") == 0);
                        if (succeeded)
                        {
                          succeeded = (Var_602 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_603 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_602, (MR_Integer) 0))));
                            Var_609 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_602, (MR_Integer) 1))));
                            succeeded = (Var_609 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((MR_tag((MR_Word) Var_603)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                Var_604 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_603, (MR_Integer) 0))));
                                Var_606 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_603, (MR_Integer) 1))));
                                succeeded = ((MR_tag((MR_Word) Var_604)) == (MR_Integer) 0);
                                if (succeeded)
                                {
                                  Var_605 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_604, (MR_Integer) 0))));
                                  succeeded = (strcmp(Var_605, (MR_String) "then") == 0);
                                  if (succeeded)
                                  {
                                    succeeded = (Var_606 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      CondGoalTerm_592 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_606, (MR_Integer) 0))));
                                      Var_607 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_606, (MR_Integer) 1))));
                                      succeeded = (Var_607 != (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        ThenGoalTerm_593 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_607, (MR_Integer) 0))));
                                        Var_608 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_607, (MR_Integer) 1))));
                                        succeeded = (Var_608 == (MR_Word) ((MR_Unsigned) 0U));
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
                parse_tree__parse_dcg_goal__parse_dcg_if_then_else_12_p_0(CondGoalTerm_592, ThenGoalTerm_593, ElseGoalTerm_591, CondContext_595, ContextPieces_15, MaybeGoal_16, STATE_VARIABLE_VarSet_0_20, STATE_VARIABLE_VarSet_21, STATE_VARIABLE_Counter_0_22, STATE_VARIABLE_Counter_23, STATE_VARIABLE_DCGVar_0_24, STATE_VARIABLE_DCGVar_25);
              else
              {
                MR_Word Spec_597;
                MR_Word Var_636;

                {
                  Spec_597 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_597, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_dcg_goal_else\'/10"));
                  MR_hl_field(MR_mktag(1), Spec_597, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_597, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(MR_mktag(1), Spec_597, 3) = ((MR_Box) (Context_14));
                  MR_hl_field(MR_mktag(1), Spec_597, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[30])));
                }
                {
                  Var_636 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_636, 0) = ((MR_Box) (Spec_597));
                  MR_hl_field(MR_mktag(1), Var_636, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_636));
                }
                *STATE_VARIABLE_DCGVar_25 = STATE_VARIABLE_DCGVar_0_24;
                *STATE_VARIABLE_Counter_23 = STATE_VARIABLE_Counter_0_22;
                *STATE_VARIABLE_VarSet_21 = STATE_VARIABLE_VarSet_0_20;
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
              MR_Word CondGoalTerm_651;
              MR_Word ThenGoalTerm_652;
              MR_Word Var_670;
              MR_Word Var_671;
              MR_String Var_672;
              MR_Word Var_673;
              MR_Word Var_674;
              MR_Word Var_675;
              MR_Word Var_676;

              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_670 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_676 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_676 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_670)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_671 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_670, (MR_Integer) 0))));
                    Var_673 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_670, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_671)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_672 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_671, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_672, (MR_String) "then") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_673 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          CondGoalTerm_651 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_673, (MR_Integer) 0))));
                          Var_674 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_673, (MR_Integer) 1))));
                          succeeded = (Var_674 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ThenGoalTerm_652 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_674, (MR_Integer) 0))));
                            Var_675 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_674, (MR_Integer) 1))));
                            succeeded = (Var_675 == (MR_Word) ((MR_Unsigned) 0U));
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word MaybeVarsCondGoal_655;
                MR_Word MaybeThenGoal_656;
                MR_Word Vars_658;
                MR_Word StateVars_659;
                MR_Word CondGoal_660;
                MR_Word CondWarningSpecs_661;
                MR_Word ThenGoal_662;
                MR_Word ThenWarningSpecs_663;

                parse_tree__parse_dcg_goal__parse_dcg_if_then_12_p_0(CondGoalTerm_651, ThenGoalTerm_652, Context_14, ContextPieces_15, &MaybeVarsCondGoal_655, &MaybeThenGoal_656, STATE_VARIABLE_VarSet_0_20, STATE_VARIABLE_VarSet_21, STATE_VARIABLE_Counter_0_22, STATE_VARIABLE_Counter_23, STATE_VARIABLE_DCGVar_0_24, STATE_VARIABLE_DCGVar_25);
                succeeded = ((MR_tag((MR_Word) MaybeVarsCondGoal_655)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Vars_658 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCondGoal_655, (MR_Integer) 0))));
                  StateVars_659 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCondGoal_655, (MR_Integer) 1))));
                  CondGoal_660 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCondGoal_655, (MR_Integer) 2))));
                  CondWarningSpecs_661 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarsCondGoal_655, (MR_Integer) 3))));
                  succeeded = ((MR_tag((MR_Word) MaybeThenGoal_656)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    ThenGoal_662 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThenGoal_656, (MR_Integer) 0))));
                    ThenWarningSpecs_663 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThenGoal_656, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word WarningSpecs_664;
                  MR_Word ElseGoal_665;
                  MR_Word Goal_666;

                  WarningSpecs_664 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), CondWarningSpecs_661, ThenWarningSpecs_663);
                  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (*STATE_VARIABLE_DCGVar_25)), ((MR_Box) (STATE_VARIABLE_DCGVar_0_24)));
                  if (succeeded)
                    {
                      ElseGoal_665 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ElseGoal_665, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), ElseGoal_665, 1) = ((MR_Box) (Context_14));
                    }
                  else
                  {
                    MR_Word Var_680;
                    MR_Word Var_681;

                    {
                      Var_680 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_680, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_25));
                      MR_hl_field(MR_mktag(1), Var_680, 1) = ((MR_Box) (Context_14));
                    }
                    {
                      Var_681 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_681, 0) = ((MR_Box) (STATE_VARIABLE_DCGVar_0_24));
                      MR_hl_field(MR_mktag(1), Var_681, 1) = ((MR_Box) (Context_14));
                    }
                    {
                      ElseGoal_665 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ElseGoal_665, 0) = ((MR_Box) (Context_14));
                      MR_hl_field(MR_mktag(0), ElseGoal_665, 1) = ((MR_Box) (Var_680));
                      MR_hl_field(MR_mktag(0), ElseGoal_665, 2) = ((MR_Box) (Var_681));
                      MR_hl_field(MR_mktag(0), ElseGoal_665, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    }
                  }
                  {
                    Goal_666 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_666, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), Goal_666, 1) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(3), Goal_666, 2) = ((MR_Box) (Vars_658));
                    MR_hl_field(MR_mktag(3), Goal_666, 3) = ((MR_Box) (StateVars_659));
                    MR_hl_field(MR_mktag(3), Goal_666, 4) = ((MR_Box) (CondGoal_660));
                    MR_hl_field(MR_mktag(3), Goal_666, 5) = ((MR_Box) (ThenGoal_662));
                    MR_hl_field(MR_mktag(3), Goal_666, 6) = ((MR_Box) (ElseGoal_665));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_666));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WarningSpecs_664));
                  }
                }
                else
                {
                  MR_Word Specs_667;
                  MR_Word Var_683;
                  MR_Word Var_684;

                  Var_683 = parse_tree__maybe_error__get_any_errors_warnings4_1_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[5]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[5]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeVarsCondGoal_655);
                  Var_684 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeThenGoal_656);
                  Specs_667 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_683, Var_684);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_667));
                  }
                }
              }
              else
              {
                MR_Word Spec_669;
                MR_Word Var_708;

                {
                  Spec_669 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_669, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_dcg_goal_if\'/10"));
                  MR_hl_field(MR_mktag(1), Spec_669, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_669, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(MR_mktag(1), Spec_669, 3) = ((MR_Box) (Context_14));
                  MR_hl_field(MR_mktag(1), Spec_669, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[30])));
                }
                {
                  Var_708 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_708, 0) = ((MR_Box) (Spec_669));
                  MR_hl_field(MR_mktag(1), Var_708, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_708));
                }
                *STATE_VARIABLE_DCGVar_25 = STATE_VARIABLE_DCGVar_0_24;
                *STATE_VARIABLE_Counter_23 = STATE_VARIABLE_Counter_0_22;
                *STATE_VARIABLE_VarSet_21 = STATE_VARIABLE_VarSet_0_20;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 11:
          {
            // case "impure", "semipure"
            ;
            {
              MR_Word Purity_729;
              MR_Word SubGoalTerm_730;
              MR_Word Var_733;

              if ((strcmp(Functor_12, (MR_String) "impure") == 0))
                Purity_729 = (MR_Integer) 2;
              else
                Purity_729 = (MR_Integer) 1;
              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_730 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_733 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_733 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeGoal0_731;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_730, ContextPieces_15, &MaybeGoal0_731, STATE_VARIABLE_VarSet_0_20, STATE_VARIABLE_VarSet_21, STATE_VARIABLE_Counter_0_22, STATE_VARIABLE_Counter_23, STATE_VARIABLE_DCGVar_0_24, STATE_VARIABLE_DCGVar_25);
                parse_tree__parse_goal__apply_purity_marker_to_maybe_goal_4_p_0(SubGoalTerm_730, Purity_729, MaybeGoal0_731, MaybeGoal_16);
              }
              else
              {
                MR_Word Spec_732;
                MR_Word Var_737;

                Spec_732 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_737 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_737, 0) = ((MR_Box) (Spec_732));
                  MR_hl_field(MR_mktag(1), Var_737, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_737));
                }
                *STATE_VARIABLE_DCGVar_25 = STATE_VARIABLE_DCGVar_0_24;
                *STATE_VARIABLE_Counter_23 = STATE_VARIABLE_Counter_0_22;
                *STATE_VARIABLE_VarSet_21 = STATE_VARIABLE_VarSet_0_20;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 12:
          {
            // case "promise_impure", "promise_pure", "promise_semipure"
            ;
            {
              MR_Word PromisedPurity_753;
              MR_Word SubGoalTerm_754;
              MR_Word Var_761;

              if ((strcmp(Functor_12, (MR_String) "promise_pure") == 0))
                PromisedPurity_753 = (MR_Integer) 0;
              else
              if ((strcmp(Functor_12, (MR_String) "promise_impure") == 0))
                PromisedPurity_753 = (MR_Integer) 2;
              else
                PromisedPurity_753 = (MR_Integer) 1;
              succeeded = (Args_13 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_754 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
                Var_761 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
                succeeded = (Var_761 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeGoal0_755;

                parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_754, ContextPieces_15, &MaybeGoal0_755, STATE_VARIABLE_VarSet_0_20, STATE_VARIABLE_VarSet_21, STATE_VARIABLE_Counter_0_22, STATE_VARIABLE_Counter_23, STATE_VARIABLE_DCGVar_0_24, STATE_VARIABLE_DCGVar_25);
                if (((MR_tag((MR_Word) MaybeGoal0_755)) == (MR_Integer) 0))
                  *MaybeGoal_16 = MaybeGoal0_755;
                else
                {
                  MR_Word Goal0_756 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal0_755, (MR_Integer) 0))));
                  MR_Word GoalWarningSpecs_757 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal0_755, (MR_Integer) 1))));
                  MR_Word Goal_758;

                  {
                    Goal_758 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_758, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), Goal_758, 1) = ((MR_Box) (Context_14));
                    MR_hl_field(MR_mktag(3), Goal_758, 2) = (MR_Box) ((MR_Unsigned) (PromisedPurity_753));
                    MR_hl_field(MR_mktag(3), Goal_758, 3) = ((MR_Box) (Goal0_756));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_758));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (GoalWarningSpecs_757));
                  }
                }
              }
              else
              {
                MR_Word Spec_760;
                MR_Word Var_765;

                Spec_760 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_15, Context_14, Functor_12);
                {
                  Var_765 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_765, 0) = ((MR_Box) (Spec_760));
                  MR_hl_field(MR_mktag(1), Var_765, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_765));
                }
                *STATE_VARIABLE_DCGVar_25 = STATE_VARIABLE_DCGVar_0_24;
                *STATE_VARIABLE_Counter_23 = STATE_VARIABLE_Counter_0_22;
                *STATE_VARIABLE_VarSet_21 = STATE_VARIABLE_VarSet_0_20;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 13:
          {
            // case "{}"
            ;
            if ((Args_13 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Spec_781;
              MR_Word Var_798;

              {
                Spec_781 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_781, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_dcg_goal_braces\'/10"));
                MR_hl_field(MR_mktag(1), Spec_781, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_781, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(MR_mktag(1), Spec_781, 3) = ((MR_Box) (Context_14));
                MR_hl_field(MR_mktag(1), Spec_781, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[34])));
              }
              {
                Var_798 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_798, 0) = ((MR_Box) (Spec_781));
                MR_hl_field(MR_mktag(1), Var_798, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeGoal_16 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_798));
              }
              *STATE_VARIABLE_VarSet_21 = STATE_VARIABLE_VarSet_0_20;
            }
            else
            {
              MR_Word HeadTerm_782 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));
              MR_Word TailTerm_783 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
              MR_Word SubGoal_784;
              MR_Word Var_785;

              {
                Var_785 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_785, 0) = ((MR_Box) (HeadTerm_782));
                MR_hl_field(MR_mktag(0), Var_785, 1) = ((MR_Box) (TailTerm_783));
              }
              parse_tree__parse_util__one_or_more_to_conjunction_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Context_14, Var_785, &SubGoal_784);
              parse_tree__parse_goal__parse_goal_5_p_0(SubGoal_784, ContextPieces_15, MaybeGoal_16, STATE_VARIABLE_VarSet_0_20, STATE_VARIABLE_VarSet_21);
            }
            *STATE_VARIABLE_DCGVar_25 = STATE_VARIABLE_DCGVar_0_24;
            *STATE_VARIABLE_Counter_23 = STATE_VARIABLE_Counter_0_22;
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

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__825__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_76);
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

    parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__824__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_70);
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
      Var_54 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[17])));
      VarsContextPieces_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_11, Var_54);
      parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_16, GenericVarSet_19, VarsContextPieces_21, &MaybeVars_22);
      GoalTerm_23 = SubGoalTerm_17;
    }
    else
    {
      MaybeVars_22 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_2[3]));
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

      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_4[1]), Vars0_25, &Vars_29);
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_4[2]), StateVars0_26, &StateVars_30);
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
  MR_Word STATE_VARIABLE_VarSet_0_24,
  MR_Word * STATE_VARIABLE_VarSet_25,
  MR_Word STATE_VARIABLE_Counter_0_26,
  MR_Word * STATE_VARIABLE_Counter_27,
  MR_Word STATE_VARIABLE_DCGVar_0_28,
  MR_Word * STATE_VARIABLE_DCGVar_29)
{
  {
    MR_bool succeeded;
    MR_Word Context_16;
    MR_Word ProgTerm_17;
    MR_Word SymName_18;
    MR_Word ArgTerms0_19;

    Context_16 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_10);
    mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Term_10, &ProgTerm_17);
    succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgTerm_17, &SymName_18, &ArgTerms0_19);
    if (succeeded)
    {
      MR_Word MaybeGoalPrime_22;
      MR_Word STATE_VARIABLE_VarSet_31_31;
      MR_Word STATE_VARIABLE_Counter_32_32;
      MR_Word STATE_VARIABLE_DCGVar_33_33;
      MR_Word TypeInfo_53_53;
      MR_Word TypeInfo_54_54;
      MR_String Functor_20;
      MR_Word ArgTerms1_21;
      MR_Word Var_30;

      succeeded = ((MR_tag((MR_Word) SymName_18)) == (MR_Integer) 0);
      if (succeeded)
      {
        Functor_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_18, (MR_Integer) 0))));
        Var_30 = (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_4[0]);
        TypeInfo_53_53 = (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[1]);
        TypeInfo_54_54 = (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[0]);
        mercury__list__map_3_p_0(TypeInfo_53_53, TypeInfo_54_54, Var_30, ArgTerms0_19, &ArgTerms1_21);
        succeeded = parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0(Functor_20, ArgTerms1_21, Context_16, ContextPieces_11, &MaybeGoalPrime_22, STATE_VARIABLE_VarSet_0_24, &STATE_VARIABLE_VarSet_31_31, STATE_VARIABLE_Counter_0_26, &STATE_VARIABLE_Counter_32_32, STATE_VARIABLE_DCGVar_0_28, &STATE_VARIABLE_DCGVar_33_33);
      }
      if (succeeded)
      {
        *STATE_VARIABLE_DCGVar_29 = STATE_VARIABLE_DCGVar_33_33;
        *STATE_VARIABLE_Counter_27 = STATE_VARIABLE_Counter_32_32;
        *STATE_VARIABLE_VarSet_25 = STATE_VARIABLE_VarSet_31_31;
        *MaybeGoal_12 = MaybeGoalPrime_22;
      }
      else
      {
        MR_Word Goal_23;

        parse_tree__parse_dcg_goal__make_dcg_call_10_p_0(SymName_18, ArgTerms0_19, Context_16, &Goal_23, STATE_VARIABLE_VarSet_0_24, STATE_VARIABLE_VarSet_25, STATE_VARIABLE_Counter_0_26, STATE_VARIABLE_Counter_27, STATE_VARIABLE_DCGVar_0_28, STATE_VARIABLE_DCGVar_29);
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
      MR_Word Var_39;
      MR_Word Goal_46;

      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (ProgTerm_17));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      parse_tree__parse_dcg_goal__make_dcg_call_10_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_2[0]), Var_39, Context_16, &Goal_46, STATE_VARIABLE_VarSet_0_24, STATE_VARIABLE_VarSet_25, STATE_VARIABLE_Counter_0_26, STATE_VARIABLE_Counter_27, STATE_VARIABLE_DCGVar_0_28, STATE_VARIABLE_DCGVar_29);
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
      MR_Word Var_20;
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
                    Var_20 = (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_2[1]);
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
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
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
  MR_Word ArgTerms0_12,
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
    MR_Word ArgTerms_20;
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
    ArgTerms_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[1]), ArgTerms0_12, Var_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *Goal_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Context_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SymName_11));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ArgTerms_20));
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
