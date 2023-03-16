/*
** Automatically generated from `parse_dcg_goal.m'
** by the Mercury compiler,
** version rotd-2023-03-16
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
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
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_goal.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_util.mih"
#include "parse_tree.parse_vars.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_dcg_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_dcg_goal__pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__cord__pti_cord_1__plain_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_1;

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_2;

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_3;

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_4;

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_5;

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_6;

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_7;

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_8;

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_9;

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_10;

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_11;

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_12;

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_13;

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_14;

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_15;

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_16;

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_17;

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_18;

static const MR_EnumFunctorDescPtr parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_ordinal_ordered_dcg_goal_kind_0[19];

static const MR_EnumFunctorDescPtr parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_name_ordered_dcg_goal_kind_0[19];

static const MR_Integer parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__functor_number_map_dcg_goal_kind_0[19];

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__1059__1_2_p_0(
  MR_Word HeadVar__1_75,
  MR_Word * HeadVar__2_76);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__1058__1_2_p_0(
  MR_Word HeadVar__1_69,
  MR_Word * HeadVar__2_70);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal_colon_equal__1019__1_2_p_0(
  MR_Word HeadVar__1_46,
  MR_Word * HeadVar__2_47);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal_some_all__467__1_2_p_0(
  MR_Word HeadVar__1_96,
  MR_Word * HeadVar__2_97);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal_some_all__466__1_2_p_0(
  MR_Word HeadVar__1_90,
  MR_Word * HeadVar__2_91);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_clause__93__1_2_p_0(
  MR_Word HeadVar__1_49,
  MR_Word * HeadVar__2_50);

static void MR_CALL 
parse_tree__parse_dcg_goal____Compare____dcg_goal_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_dcg_goal____Unify____dcg_goal_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_clause_7_p_0_1(
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

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_else_10_p_0(
  MR_Word ArgTerms_11,
  MR_Word Context_12,
  MR_Word ContextPieces_13,
  MR_Word * MaybeGoal_14,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27,
  MR_Word STATE_VARIABLE_Counter_0_28,
  MR_Word * STATE_VARIABLE_Counter_29,
  MR_Word STATE_VARIABLE_DCGVar_0_30,
  MR_Word * STATE_VARIABLE_DCGVar_31);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_semicolon_10_p_0(
  MR_Word ArgTerms_11,
  MR_Word Context_12,
  MR_Word ContextPieces_13,
  MR_Word * MaybeGoal_14,
  MR_Word STATE_VARIABLE_VarSet_0_40,
  MR_Word * STATE_VARIABLE_VarSet_41,
  MR_Word STATE_VARIABLE_Counter_0_42,
  MR_Word * STATE_VARIABLE_Counter_43,
  MR_Word STATE_VARIABLE_DCGVar_0_44,
  MR_Word * STATE_VARIABLE_DCGVar_45);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_disjunction_16_p_0(
  MR_Word DCGVar0_17,
  MR_Word ContextPieces_18,
  MR_Word TermA_19,
  MR_Word TermB_20,
  MR_Word STATE_VARIABLE_MaybeFirstDiffDCGVar_0_44,
  MR_Word * STATE_VARIABLE_MaybeFirstDiffDCGVar_45,
  MR_Word STATE_VARIABLE_DisjunctsDCGVarsCord_0_46,
  MR_Word * STATE_VARIABLE_DisjunctsDCGVarsCord_47,
  MR_Word STATE_VARIABLE_Warnings_0_48,
  MR_Word * STATE_VARIABLE_Warnings_49,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51,
  MR_Word STATE_VARIABLE_VarSet_0_52,
  MR_Word * STATE_VARIABLE_VarSet_53,
  MR_Word STATE_VARIABLE_Counter_0_54,
  MR_Word * STATE_VARIABLE_Counter_55);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_conjunction_17_p_0(
  MR_String Functor_18,
  MR_Word TermA_19,
  MR_Word TermB_20,
  MR_Word Context_21,
  MR_Word ContextPieces_22,
  MR_Word STATE_VARIABLE_ConjunctsCord_0_40,
  MR_Word * STATE_VARIABLE_ConjunctsCord_41,
  MR_Word STATE_VARIABLE_Warnings_0_42,
  MR_Word * STATE_VARIABLE_Warnings_43,
  MR_Word STATE_VARIABLE_Errors_0_44,
  MR_Word * STATE_VARIABLE_Errors_45,
  MR_Word STATE_VARIABLE_VarSet_0_46,
  MR_Word * STATE_VARIABLE_VarSet_47,
  MR_Word STATE_VARIABLE_Counter_0_48,
  MR_Word * STATE_VARIABLE_Counter_49,
  MR_Word STATE_VARIABLE_DCGVar_0_50,
  MR_Word * STATE_VARIABLE_DCGVar_51);

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
parse_tree__parse_dcg_goal__parse_dcg_if_then_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_if_then_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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
parse_tree__parse_dcg_goal__parse_dcg_goal_if_10_p_0(
  MR_Word ArgTerms_11,
  MR_Word Context_12,
  MR_Word ContextPieces_13,
  MR_Word * MaybeGoal_14,
  MR_Word STATE_VARIABLE_VarSet_0_37,
  MR_Word * STATE_VARIABLE_VarSet_38,
  MR_Word STATE_VARIABLE_Counter_0_39,
  MR_Word * STATE_VARIABLE_Counter_40,
  MR_Word STATE_VARIABLE_DCGVar_0_41,
  MR_Word * STATE_VARIABLE_DCGVar_42);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_conj_11_p_1(
  MR_Word GoalKind_12,
  MR_Word ArgTerms_13,
  MR_Word Context_14,
  MR_Word ContextPieces_15,
  MR_Word * MaybeGoal_16,
  MR_Word STATE_VARIABLE_VarSet_0_33,
  MR_Word * STATE_VARIABLE_VarSet_34,
  MR_Word STATE_VARIABLE_Counter_0_35,
  MR_Word * STATE_VARIABLE_Counter_36,
  MR_Word STATE_VARIABLE_DCGVar_0_37,
  MR_Word * STATE_VARIABLE_DCGVar_38);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_conj_11_p_0(
  MR_Word GoalKind_12,
  MR_Word ArgTerms_13,
  MR_Word Context_14,
  MR_Word ContextPieces_15,
  MR_Word * MaybeGoal_16,
  MR_Word STATE_VARIABLE_VarSet_0_33,
  MR_Word * STATE_VARIABLE_VarSet_34,
  MR_Word STATE_VARIABLE_Counter_0_35,
  MR_Word * STATE_VARIABLE_Counter_36,
  MR_Word STATE_VARIABLE_DCGVar_0_37,
  MR_Word * STATE_VARIABLE_DCGVar_38);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_some_all_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_some_all_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_some_all_11_p_0(
  MR_Word GoalKind_12,
  MR_Word ArgTerms_13,
  MR_Word Context_14,
  MR_Word ContextPieces_15,
  MR_Word * MaybeGoal_16,
  MR_Word STATE_VARIABLE_VarSet_0_43,
  MR_Word * STATE_VARIABLE_VarSet_44,
  MR_Word STATE_VARIABLE_Counter_0_45,
  MR_Word * STATE_VARIABLE_Counter_46,
  MR_Word STATE_VARIABLE_DCGVar_0_47,
  MR_Word * STATE_VARIABLE_DCGVar_48);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_not_11_p_0(
  MR_Word GoalKind_12,
  MR_Word ArgTerms_13,
  MR_Word Context_14,
  MR_Word ContextPieces_15,
  MR_Word * MaybeGoal_16,
  MR_Word STATE_VARIABLE_VarSet_0_29,
  MR_Word * STATE_VARIABLE_VarSet_30,
  MR_Word STATE_VARIABLE_Counter_0_31,
  MR_Word * STATE_VARIABLE_Counter_32,
  MR_Word STATE_VARIABLE_DCGVar_0_33,
  MR_Word * STATE_VARIABLE_DCGVar_34);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_promise_purity_11_p_0(
  MR_Word GoalKind_12,
  MR_Word ArgTerms_13,
  MR_Word Context_14,
  MR_Word ContextPieces_15,
  MR_Word * MaybeGoal_16,
  MR_Word STATE_VARIABLE_VarSet_0_29,
  MR_Word * STATE_VARIABLE_VarSet_30,
  MR_Word STATE_VARIABLE_Counter_0_31,
  MR_Word * STATE_VARIABLE_Counter_32,
  MR_Word STATE_VARIABLE_DCGVar_0_33,
  MR_Word * STATE_VARIABLE_DCGVar_34);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_impure_semipure_11_p_0(
  MR_Word GoalKind_12,
  MR_Word ArgTerms_13,
  MR_Word Context_14,
  MR_Word ContextPieces_15,
  MR_Word * MaybeGoal_16,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26,
  MR_Word STATE_VARIABLE_Counter_0_27,
  MR_Word * STATE_VARIABLE_Counter_28,
  MR_Word STATE_VARIABLE_DCGVar_0_29,
  MR_Word * STATE_VARIABLE_DCGVar_30);

static void MR_CALL 
parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_100_99_103_95_103_111_97_108_95_99_111_108_111_110_95_101_113_117_97_108_95_95_91_51_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_100_99_103_95_103_111_97_108_95_99_111_108_111_110_95_101_113_117_97_108_95_95_91_51_93_95_48_10_p_0(
  MR_Word ArgTerms_11,
  MR_Word Context_12,
  MR_Word * MaybeGoal_14,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26,
  MR_Word STATE_VARIABLE_Counter_0_27,
  MR_Word * STATE_VARIABLE_Counter_28,
  MR_Word STATE_VARIABLE_DCGVar_0_29,
  MR_Word * STATE_VARIABLE_DCGVar_30);

static void MR_CALL 
parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_100_99_103_95_103_111_97_108_95_99_111_110_115_95_95_91_51_93_95_48_10_p_0(
  MR_Word ArgTerms_11,
  MR_Word Context_12,
  MR_Word * MaybeGoal_14,
  MR_Word STATE_VARIABLE_VarSet_0_29,
  MR_Word * STATE_VARIABLE_VarSet_30,
  MR_Word STATE_VARIABLE_Counter_0_31,
  MR_Word * STATE_VARIABLE_Counter_32,
  MR_Word STATE_VARIABLE_DCGVar_0_33,
  MR_Word * STATE_VARIABLE_DCGVar_34);

static MR_bool MR_CALL 
parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
  MR_Word List0_4,
  MR_Word Term_5,
  MR_Word * List_6);

static void MR_CALL 
parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_100_99_103_95_103_111_97_108_95_110_105_108_95_95_91_51_93_95_48_10_p_0(
  MR_Word ArgTerms_11,
  MR_Word Context_12,
  MR_Word * MaybeGoal_14,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26,
  MR_Word STATE_VARIABLE_Counter_0_27,
  MR_Word * STATE_VARIABLE_Counter_28,
  MR_Word STATE_VARIABLE_DCGVar_0_29,
  MR_Word * STATE_VARIABLE_DCGVar_30);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_equal_10_p_0(
  MR_Word ArgTerms_11,
  MR_Word Context_12,
  MR_Word ContextPieces_13,
  MR_Word * MaybeGoal_14,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Word STATE_VARIABLE_Counter_0_25,
  MR_Word * STATE_VARIABLE_Counter_26,
  MR_Word STATE_VARIABLE_DCGVar_0_27,
  MR_Word * STATE_VARIABLE_DCGVar_28);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_braces_10_p_0(
  MR_Word ArgTerms_11,
  MR_Word Context_12,
  MR_Word ContextPieces_13,
  MR_Word * MaybeGoal_14,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Word STATE_VARIABLE_Counter_0_25,
  MR_Word * STATE_VARIABLE_Counter_26,
  MR_Word STATE_VARIABLE_DCGVar_0_27,
  MR_Word * STATE_VARIABLE_DCGVar_28);

static void MR_CALL 
parse_tree__parse_dcg_goal__new_dcg_var_5_p_0(
  MR_Word STATE_VARIABLE_VarSet_0_11,
  MR_Word * STATE_VARIABLE_VarSet_12,
  MR_Word STATE_VARIABLE_Counter_0_13,
  MR_Word * STATE_VARIABLE_Counter_14,
  MR_Word * DCGVar_8);

static void MR_CALL 
parse_tree__parse_dcg_goal__bring_disjuncts_up_to_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Disjuncts_0_5,
  MR_Word * STATE_VARIABLE_Disjuncts_6);

static void MR_CALL 
parse_tree__parse_dcg_goal__append_disjunct_dcg_var_to_cord_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_dcg_goal__append_disjunct_dcg_var_to_cord_4_p_0(
  MR_Word DCGVar_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_DisjunctsDCGVarsCord_0_12,
  MR_Word * STATE_VARIABLE_DisjunctsDCGVarsCord_13);

static void MR_CALL 
parse_tree__parse_dcg_goal__string_dcg_goal_kind_2_p_1(
  MR_String * Functor_3,
  MR_Word GoalKind_4);

static MR_bool MR_CALL 
parse_tree__parse_dcg_goal____Unify____dcg_goal_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_dcg_goal____Compare____dcg_goal_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_1[65][2];

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_2[9][3];

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_3[5][1];

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_5[1][7];

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_6[2][5];


struct parse_tree__parse_dcg_goal__vector_common_type_4_0_s {
  const MR_String parse_tree__parse_dcg_goal__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct parse_tree__parse_dcg_goal__vector_common_type_4_0_s parse_tree__parse_dcg_goal_vector_common_4[19];

struct parse_tree__parse_dcg_goal__vector_common_type_7_0_s {
  const MR_Word parse_tree__parse_dcg_goal__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct parse_tree__parse_dcg_goal__vector_common_type_7_0_s parse_tree__parse_dcg_goal_vector_common_7[19];



static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_1[65][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_plain_state_vars_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_2[0]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_1[3]))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In DCG clause head:"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "all"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In first argument of"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[13])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "some"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[9])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[16])))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[17])))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "( if goal then goal else goal )"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should occur in expressions of the form"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[23])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "operator"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[25])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "else"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[27])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the "))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[29])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "between the curly braces."))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[19])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: there should be at least one goal"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and must therefore be used with arity 0."))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[19])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "against a list of zero items,"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may only be used to match the input"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[39])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[41])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "[]"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[42])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[44])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: in DCG clauses,"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[46])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "at the end of the list."))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[19])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[50])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: there is no"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[51])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and must therefore be used with arity 2."))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[19])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "against a list of one or more items,"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[55])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[57])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[58])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "[|]"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[59])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[61])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[62])))
  },
  /* row  64 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_2[9][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0)),
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_1[3]))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_100_99_103_95_103_111_97_108_95_99_111_108_111_110_95_101_113_117_97_108_95_95_91_51_93_95_48_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_6[1])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_dcg_goal_some_all_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_6[1])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_dcg_goal_some_all_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_6[1])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_6[1])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_6[1])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_dcg_if_then_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_6[1])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_dcg_if_then_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_dcg_clause_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_3[5][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "call"))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "[|]"))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) ":="))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_1[64]))
  },
  /* row   4 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_5[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_dcg_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0)),
    ((MR_Box) (&parse_tree__parse_dcg_goal__cord__pti_cord_1__plain_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__parse_dcg_goal__cord__pti_cord_1__plain_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_6[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_dcg_goal__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_dcg_goal__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_dcg_goal__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_dcg_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};


static /* final */ const struct parse_tree__parse_dcg_goal__vector_common_type_4_0_s parse_tree__parse_dcg_goal_vector_common_4[19] = {
  /* row   0 */   { (MR_String) "impure" },
  /* row   1 */   { (MR_String) "semipure" },
  /* row   2 */   { (MR_String) "promise_impure" },
  /* row   3 */   { (MR_String) "promise_semipure" },
  /* row   4 */   { (MR_String) "promise_pure" },
  /* row   5 */   { (MR_String) "not" },
  /* row   6 */   { (MR_String) "\\+" },
  /* row   7 */   { (MR_String) "some" },
  /* row   8 */   { (MR_String) "all" },
  /* row   9 */   { (MR_String) "," },
  /* row  10 */   { (MR_String) "&" },
  /* row  11 */   { (MR_String) ";" },
  /* row  12 */   { (MR_String) "else" },
  /* row  13 */   { (MR_String) "if" },
  /* row  14 */   { (MR_String) "{}" },
  /* row  15 */   { (MR_String) "[]" },
  /* row  16 */   { (MR_String) "[|]" },
  /* row  17 */   { (MR_String) "=" },
  /* row  18 */   { (MR_String) ":=" },
};

static /* final */ const struct parse_tree__parse_dcg_goal__vector_common_type_7_0_s parse_tree__parse_dcg_goal_vector_common_7[19] = {
  /* row   0 */   { (MR_Integer) 10 },
  /* row   1 */   { (MR_Integer) 9 },
  /* row   2 */   { (MR_Integer) 18 },
  /* row   3 */   { (MR_Integer) 11 },
  /* row   4 */   { (MR_Integer) 17 },
  /* row   5 */   { (MR_Integer) 15 },
  /* row   6 */   { (MR_Integer) 16 },
  /* row   7 */   { (MR_Integer) 6 },
  /* row   8 */   { (MR_Integer) 8 },
  /* row   9 */   { (MR_Integer) 12 },
  /* row  10 */   { (MR_Integer) 13 },
  /* row  11 */   { (MR_Integer) 0 },
  /* row  12 */   { (MR_Integer) 5 },
  /* row  13 */   { (MR_Integer) 2 },
  /* row  14 */   { (MR_Integer) 4 },
  /* row  15 */   { (MR_Integer) 3 },
  /* row  16 */   { (MR_Integer) 1 },
  /* row  17 */   { (MR_Integer) 7 },
  /* row  18 */   { (MR_Integer) 14 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_dcg_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_dcg_goal__pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0),
    (MR_TypeInfo) (&parse_tree__parse_dcg_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__cord__pti_cord_1__plain_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_dcg_goal__pair__ti_pair_2parse_tree__prog_item__type_ctor_info_goal_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_0 = {
  (MR_String) "dgk_impure",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_1 = {
  (MR_String) "dgk_semipure",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_2 = {
  (MR_String) "dgk_promise_impure",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_3 = {
  (MR_String) "dgk_promise_semipure",
  INT32_C(3)
};

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_4 = {
  (MR_String) "dgk_promise_pure",
  INT32_C(4)
};

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_5 = {
  (MR_String) "dgk_not",
  INT32_C(5)
};

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_6 = {
  (MR_String) "dgk_not_prolog",
  INT32_C(6)
};

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_7 = {
  (MR_String) "dgk_some",
  INT32_C(7)
};

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_8 = {
  (MR_String) "dgk_all",
  INT32_C(8)
};

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_9 = {
  (MR_String) "dgk_conj",
  INT32_C(9)
};

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_10 = {
  (MR_String) "dgk_par_conj",
  INT32_C(10)
};

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_11 = {
  (MR_String) "dgk_semicolon",
  INT32_C(11)
};

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_12 = {
  (MR_String) "dgk_else",
  INT32_C(12)
};

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_13 = {
  (MR_String) "dgk_if",
  INT32_C(13)
};

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_14 = {
  (MR_String) "dgk_braces",
  INT32_C(14)
};

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_15 = {
  (MR_String) "dgk_nil",
  INT32_C(15)
};

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_16 = {
  (MR_String) "dgk_cons",
  INT32_C(16)
};

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_17 = {
  (MR_String) "dgk_equal",
  INT32_C(17)
};

static const MR_EnumFunctorDesc parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_18 = {
  (MR_String) "dgk_colon_equal",
  INT32_C(18)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_ordinal_ordered_dcg_goal_kind_0[19] = {
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_0,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_1,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_2,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_3,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_4,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_5,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_6,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_7,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_8,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_9,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_10,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_11,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_12,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_13,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_14,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_15,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_16,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_17,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_18
};

static const MR_EnumFunctorDescPtr parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_name_ordered_dcg_goal_kind_0[19] = {
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_8,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_14,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_18,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_9,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_16,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_12,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_17,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_13,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_0,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_15,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_5,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_6,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_10,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_2,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_4,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_3,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_11,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_1,
  &parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_functor_desc_dcg_goal_kind_0_7
};

static const MR_Integer parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__functor_number_map_dcg_goal_kind_0[19] = {
  (MR_Integer) 8,
  (MR_Integer) 17,
  (MR_Integer) 13,
  (MR_Integer) 15,
  (MR_Integer) 14,
  (MR_Integer) 10,
  (MR_Integer) 11,
  (MR_Integer) 18,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 12,
  (MR_Integer) 16,
  (MR_Integer) 5,
  (MR_Integer) 7,
  (MR_Integer) 1,
  (MR_Integer) 9,
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__type_ctor_info_dcg_goal_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_dcg_goal____Unify____dcg_goal_kind_0_0_10001)),
  ((MR_Box) (parse_tree__parse_dcg_goal____Compare____dcg_goal_kind_0_0_10001)),
  (MR_String) "parse_tree.parse_dcg_goal",
  (MR_String) "dcg_goal_kind",
  { parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_name_ordered_dcg_goal_kind_0 },
  { parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__enum_ordinal_ordered_dcg_goal_kind_0 },
  (MR_Integer) 19,
  UINT16_C(12),
  parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__functor_number_map_dcg_goal_kind_0,

};

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__1059__1_2_p_0(
  MR_Word HeadVar__1_75,
  MR_Word * HeadVar__2_76)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_75, HeadVar__2_76);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__1058__1_2_p_0(
  MR_Word HeadVar__1_69,
  MR_Word * HeadVar__2_70)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_69, HeadVar__2_70);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal_colon_equal__1019__1_2_p_0(
  MR_Word HeadVar__1_46,
  MR_Word * HeadVar__2_47)
{
  mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_46, HeadVar__2_47);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal_some_all__467__1_2_p_0(
  MR_Word HeadVar__1_96,
  MR_Word * HeadVar__2_97)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_96, HeadVar__2_97);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal_some_all__466__1_2_p_0(
  MR_Word HeadVar__1_90,
  MR_Word * HeadVar__2_91)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_90, HeadVar__2_91);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_clause__93__1_2_p_0(
  MR_Word HeadVar__1_49,
  MR_Word * HeadVar__2_50)
{
  mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_49, HeadVar__2_50);
}

static void MR_CALL 
parse_tree__parse_dcg_goal____Compare____dcg_goal_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_dcg_goal____Unify____dcg_goal_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
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
  MR_Word Counter0_14;
  MR_Word STATE_VARIABLE_VarSet_18_18;
  MR_Word Var_19;
  MR_Integer N_21;
  MR_String VarName_22;
  MR_String Var_28;
  MR_Word _Counter_15;

  Var_19 = mercury__counter__init_1_f_0((MR_Integer) 0);
  mercury__counter__allocate_3_p_0(&N_21, Var_19, &Counter0_14);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[4]), N_21, &Var_28);
  VarName_22 = mercury__string__f_43_43_2_f_0((MR_String) "DCG_", Var_28);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarName_22, DCGVar0_11, STATE_VARIABLE_VarSet_0_16, &STATE_VARIABLE_VarSet_18_18);
  parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(GoalTerm_8, ContextPieces_9, MaybeGoal_10, STATE_VARIABLE_VarSet_18_18, STATE_VARIABLE_VarSet_17, Counter0_14, &_Counter_15, *DCGVar0_11, DCGVar_12);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_clause_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_50;

  parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_clause__93__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_50);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_50));
}

void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_clause_7_p_0(
  MR_Word MaybeModuleName_8,
  MR_Word VarSet0_9,
  MR_Word DCG_HeadTerm_10,
  MR_Word DCG_BodyTerm_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeClause_14)
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
  MR_Integer N_57;
  MR_String VarName_58;
  MR_String Var_64;
  MR_Word _Counter_22;

  mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet0_9, &ProgVarSet0_15);
  Var_34 = mercury__counter__init_1_f_0((MR_Integer) 0);
  mercury__counter__allocate_3_p_0(&N_57, Var_34, &Counter0_17);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[4]), N_57, &Var_64);
  VarName_58 = mercury__string__f_43_43_2_f_0((MR_String) "DCG_", Var_64);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarName_58, &DCGVar0_18, ProgVarSet0_15, &ProgVarSet1_16);
  BodyContextPieces_19 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0));
  parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(DCG_BodyTerm_11, BodyContextPieces_19, &MaybeBodyGoal_20, ProgVarSet1_16, &ProgVarSet_21, Counter0_17, &_Counter_22, DCGVar0_18, &DCGVar_23);
  HeadContextPieces_24 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ((MR_Box) (MR_mkword(3, &parse_tree__parse_dcg_goal_scalar_common_1[7]))));
  if ((MaybeModuleName_8 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet0_9, HeadContextPieces_24, DCG_HeadTerm_10, &MaybeFunctor_25);
  else
  {
    MR_Word ModuleName_26 = ((MR_Word) ((MR_hl_field(1, MaybeModuleName_8, (MR_Integer) 0))));

    parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleName_26, VarSet0_9, HeadContextPieces_24, DCG_HeadTerm_10, &MaybeFunctor_25);
  }
  if (((MR_tag((MR_Word) MaybeFunctor_25)) == (MR_Integer) 0))
  {
    MR_Word FunctorSpecs_32 = ((MR_Word) ((MR_hl_field(0, MaybeFunctor_25, (MR_Integer) 0))));
    MR_Word Specs_33;
    MR_Word Var_45;

    Var_45 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeBodyGoal_20);
    Specs_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FunctorSpecs_32, Var_45);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeClause_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_33));
    }
  }
  else
  {
    MR_Word SymName_27 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_25, (MR_Integer) 0))));
    MR_Word ArgTerms0_28 = ((MR_Word) ((MR_hl_field(1, MaybeFunctor_25, (MR_Integer) 1))));
    MR_Word ArgTerms1_29;
    MR_Word ArgTerms_30;
    MR_Word ItemClause_31;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_2[8]), ArgTerms0_28, &ArgTerms1_29);
    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) (DCGVar0_18));
      MR_hl_field(1, Var_40, 1) = ((MR_Box) (Context_12));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (DCGVar_23));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) (Context_12));
    }
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_41));
    }
    ArgTerms_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[1]), ArgTerms1_29, Var_39);
    {
      ItemClause_31 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ItemClause_31, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(0, ItemClause_31, 1) = ((MR_Box) (SymName_27));
      MR_hl_field(0, ItemClause_31, 2) = ((MR_Box) (ArgTerms_30));
      MR_hl_field(0, ItemClause_31, 3) = ((MR_Box) (ProgVarSet_21));
      MR_hl_field(0, ItemClause_31, 4) = ((MR_Box) (MaybeBodyGoal_20));
      MR_hl_field(0, ItemClause_31, 5) = ((MR_Box) (Context_12));
      MR_hl_field(0, ItemClause_31, 6) = ((MR_Box) (SeqNum_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeClause_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ItemClause_31));
    }
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
  MR_bool succeeded;
  MR_Word Context_16;
  MR_Word ProgTerm_17;
  MR_Word ArgTerms_19;
  MR_Word GoalKind_20;
  MR_String Functor_18;
  MR_Word Var_30;
  MR_Word Var_49;

  Context_16 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_10);
  mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Term_10, &ProgTerm_17);
  succeeded = ((MR_tag((MR_Word) Term_10)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_30 = ((MR_Word) ((MR_hl_field(0, Term_10, (MR_Integer) 0))));
    ArgTerms_19 = ((MR_Word) ((MR_hl_field(0, Term_10, (MR_Integer) 1))));
    Var_49 = ((MR_Word) ((MR_hl_field(0, Term_10, (MR_Integer) 2))));
    succeeded = mercury__term_context____Unify____term_context_0_0(Context_16, Var_49);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 0);
      if (succeeded)
      {
        Functor_18 = ((MR_String) ((MR_hl_field(0, Var_30, (MR_Integer) 0))));
        {
          MR_Integer case_num_0 = (MR_Integer) -1;

          switch (MR_nth_code_unit(Functor_18, 0)) {
            case (MR_Integer) 38:
              if (MR_offset_streq(1, Functor_18, (MR_String) "&"))
                case_num_0 = (MR_Integer) 0;
              break;
            case (MR_Integer) 44:
              if (MR_offset_streq(1, Functor_18, (MR_String) ","))
                case_num_0 = (MR_Integer) 1;
              break;
            case (MR_Integer) 58:
              if (MR_offset_streq(1, Functor_18, (MR_String) ":="))
                case_num_0 = (MR_Integer) 2;
              break;
            case (MR_Integer) 59:
              if (MR_offset_streq(1, Functor_18, (MR_String) ";"))
                case_num_0 = (MR_Integer) 3;
              break;
            case (MR_Integer) 61:
              if (MR_offset_streq(1, Functor_18, (MR_String) "="))
                case_num_0 = (MR_Integer) 4;
              break;
            case (MR_Integer) 91:
              switch (MR_nth_code_unit(Functor_18, 1)) {
                case (MR_Integer) 93:
                  if (MR_offset_streq(2, Functor_18, (MR_String) "[]"))
                    case_num_0 = (MR_Integer) 5;
                  break;
                case (MR_Integer) 124:
                  if (MR_offset_streq(2, Functor_18, (MR_String) "[|]"))
                    case_num_0 = (MR_Integer) 6;
                  break;
              }
              break;
            case (MR_Integer) 92:
              if (MR_offset_streq(1, Functor_18, (MR_String) "\\+"))
                case_num_0 = (MR_Integer) 7;
              break;
            case (MR_Integer) 97:
              if (MR_offset_streq(1, Functor_18, (MR_String) "all"))
                case_num_0 = (MR_Integer) 8;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(1, Functor_18, (MR_String) "else"))
                case_num_0 = (MR_Integer) 9;
              break;
            case (MR_Integer) 105:
              switch (MR_nth_code_unit(Functor_18, 1)) {
                case (MR_Integer) 102:
                  if (MR_offset_streq(2, Functor_18, (MR_String) "if"))
                    case_num_0 = (MR_Integer) 10;
                  break;
                case (MR_Integer) 109:
                  if (MR_offset_streq(2, Functor_18, (MR_String) "impure"))
                    case_num_0 = (MR_Integer) 11;
                  break;
              }
              break;
            case (MR_Integer) 110:
              if (MR_offset_streq(1, Functor_18, (MR_String) "not"))
                case_num_0 = (MR_Integer) 12;
              break;
            case (MR_Integer) 112:
              if (((((((((((((((MR_nth_code_unit(Functor_18, 1)) == (MR_Integer) 114)) && (((MR_nth_code_unit(Functor_18, 2)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(Functor_18, 3)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(Functor_18, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Functor_18, 5)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(Functor_18, 6)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Functor_18, 7)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(Functor_18, 8)) {
                  case (MR_Integer) 105:
                    if (MR_offset_streq(9, Functor_18, (MR_String) "promise_impure"))
                      case_num_0 = (MR_Integer) 13;
                    break;
                  case (MR_Integer) 112:
                    if (MR_offset_streq(9, Functor_18, (MR_String) "promise_pure"))
                      case_num_0 = (MR_Integer) 14;
                    break;
                  case (MR_Integer) 115:
                    if (MR_offset_streq(9, Functor_18, (MR_String) "promise_semipure"))
                      case_num_0 = (MR_Integer) 15;
                    break;
                }
              break;
            case (MR_Integer) 115:
              switch (MR_nth_code_unit(Functor_18, 1)) {
                case (MR_Integer) 101:
                  if (MR_offset_streq(2, Functor_18, (MR_String) "semipure"))
                    case_num_0 = (MR_Integer) 16;
                  break;
                case (MR_Integer) 111:
                  if (MR_offset_streq(2, Functor_18, (MR_String) "some"))
                    case_num_0 = (MR_Integer) 17;
                  break;
              }
              break;
            case (MR_Integer) 123:
              if (MR_offset_streq(1, Functor_18, (MR_String) "{}"))
                case_num_0 = (MR_Integer) 18;
              break;
          }
          if ((case_num_0 < (MR_Integer) 0))
            succeeded = MR_FALSE;
          else
          {
            // we found a match; look up the results
            ;
            GoalKind_20 = ((&parse_tree__parse_dcg_goal_vector_common_7[0 + case_num_0]))->parse_tree__parse_dcg_goal__vector_common_type_7_0__vct_7_f_0;
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  if (succeeded)
    switch (GoalKind_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 8:
      case (MR_Integer) 7:
        parse_tree__parse_dcg_goal__parse_dcg_goal_some_all_11_p_0(GoalKind_20, ArgTerms_19, Context_16, ContextPieces_11, MaybeGoal_12, STATE_VARIABLE_VarSet_0_24, STATE_VARIABLE_VarSet_25, STATE_VARIABLE_Counter_0_26, STATE_VARIABLE_Counter_27, STATE_VARIABLE_DCGVar_0_28, STATE_VARIABLE_DCGVar_29);
        break;
      case (MR_Integer) 14:
        parse_tree__parse_dcg_goal__parse_dcg_goal_braces_10_p_0(ArgTerms_19, Context_16, ContextPieces_11, MaybeGoal_12, STATE_VARIABLE_VarSet_0_24, STATE_VARIABLE_VarSet_25, STATE_VARIABLE_Counter_0_26, STATE_VARIABLE_Counter_27, STATE_VARIABLE_DCGVar_0_28, STATE_VARIABLE_DCGVar_29);
        break;
      case (MR_Integer) 18:
        parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_100_99_103_95_103_111_97_108_95_99_111_108_111_110_95_101_113_117_97_108_95_95_91_51_93_95_48_10_p_0(ArgTerms_19, Context_16, MaybeGoal_12, STATE_VARIABLE_VarSet_0_24, STATE_VARIABLE_VarSet_25, STATE_VARIABLE_Counter_0_26, STATE_VARIABLE_Counter_27, STATE_VARIABLE_DCGVar_0_28, STATE_VARIABLE_DCGVar_29);
        break;
      case (MR_Integer) 9:
        parse_tree__parse_dcg_goal__parse_dcg_goal_conj_11_p_0(GoalKind_20, ArgTerms_19, Context_16, ContextPieces_11, MaybeGoal_12, STATE_VARIABLE_VarSet_0_24, STATE_VARIABLE_VarSet_25, STATE_VARIABLE_Counter_0_26, STATE_VARIABLE_Counter_27, STATE_VARIABLE_DCGVar_0_28, STATE_VARIABLE_DCGVar_29);
        break;
      case (MR_Integer) 16:
        parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_100_99_103_95_103_111_97_108_95_99_111_110_115_95_95_91_51_93_95_48_10_p_0(ArgTerms_19, Context_16, MaybeGoal_12, STATE_VARIABLE_VarSet_0_24, STATE_VARIABLE_VarSet_25, STATE_VARIABLE_Counter_0_26, STATE_VARIABLE_Counter_27, STATE_VARIABLE_DCGVar_0_28, STATE_VARIABLE_DCGVar_29);
        break;
      case (MR_Integer) 12:
        parse_tree__parse_dcg_goal__parse_dcg_goal_else_10_p_0(ArgTerms_19, Context_16, ContextPieces_11, MaybeGoal_12, STATE_VARIABLE_VarSet_0_24, STATE_VARIABLE_VarSet_25, STATE_VARIABLE_Counter_0_26, STATE_VARIABLE_Counter_27, STATE_VARIABLE_DCGVar_0_28, STATE_VARIABLE_DCGVar_29);
        break;
      case (MR_Integer) 17:
        parse_tree__parse_dcg_goal__parse_dcg_goal_equal_10_p_0(ArgTerms_19, Context_16, ContextPieces_11, MaybeGoal_12, STATE_VARIABLE_VarSet_0_24, STATE_VARIABLE_VarSet_25, STATE_VARIABLE_Counter_0_26, STATE_VARIABLE_Counter_27, STATE_VARIABLE_DCGVar_0_28, STATE_VARIABLE_DCGVar_29);
        break;
      case (MR_Integer) 13:
        parse_tree__parse_dcg_goal__parse_dcg_goal_if_10_p_0(ArgTerms_19, Context_16, ContextPieces_11, MaybeGoal_12, STATE_VARIABLE_VarSet_0_24, STATE_VARIABLE_VarSet_25, STATE_VARIABLE_Counter_0_26, STATE_VARIABLE_Counter_27, STATE_VARIABLE_DCGVar_0_28, STATE_VARIABLE_DCGVar_29);
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        parse_tree__parse_dcg_goal__parse_dcg_goal_impure_semipure_11_p_0(GoalKind_20, ArgTerms_19, Context_16, ContextPieces_11, MaybeGoal_12, STATE_VARIABLE_VarSet_0_24, STATE_VARIABLE_VarSet_25, STATE_VARIABLE_Counter_0_26, STATE_VARIABLE_Counter_27, STATE_VARIABLE_DCGVar_0_28, STATE_VARIABLE_DCGVar_29);
        break;
      case (MR_Integer) 15:
        parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_100_99_103_95_103_111_97_108_95_110_105_108_95_95_91_51_93_95_48_10_p_0(ArgTerms_19, Context_16, MaybeGoal_12, STATE_VARIABLE_VarSet_0_24, STATE_VARIABLE_VarSet_25, STATE_VARIABLE_Counter_0_26, STATE_VARIABLE_Counter_27, STATE_VARIABLE_DCGVar_0_28, STATE_VARIABLE_DCGVar_29);
        break;
      case (MR_Integer) 5:
      case (MR_Integer) 6:
        parse_tree__parse_dcg_goal__parse_dcg_goal_not_11_p_0(GoalKind_20, ArgTerms_19, Context_16, ContextPieces_11, MaybeGoal_12, STATE_VARIABLE_VarSet_0_24, STATE_VARIABLE_VarSet_25, STATE_VARIABLE_Counter_0_26, STATE_VARIABLE_Counter_27, STATE_VARIABLE_DCGVar_0_28, STATE_VARIABLE_DCGVar_29);
        break;
      case (MR_Integer) 10:
        parse_tree__parse_dcg_goal__parse_dcg_goal_conj_11_p_1(GoalKind_20, ArgTerms_19, Context_16, ContextPieces_11, MaybeGoal_12, STATE_VARIABLE_VarSet_0_24, STATE_VARIABLE_VarSet_25, STATE_VARIABLE_Counter_0_26, STATE_VARIABLE_Counter_27, STATE_VARIABLE_DCGVar_0_28, STATE_VARIABLE_DCGVar_29);
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 4:
      case (MR_Integer) 3:
        parse_tree__parse_dcg_goal__parse_dcg_goal_promise_purity_11_p_0(GoalKind_20, ArgTerms_19, Context_16, ContextPieces_11, MaybeGoal_12, STATE_VARIABLE_VarSet_0_24, STATE_VARIABLE_VarSet_25, STATE_VARIABLE_Counter_0_26, STATE_VARIABLE_Counter_27, STATE_VARIABLE_DCGVar_0_28, STATE_VARIABLE_DCGVar_29);
        break;
      case (MR_Integer) 11:
        parse_tree__parse_dcg_goal__parse_dcg_goal_semicolon_10_p_0(ArgTerms_19, Context_16, ContextPieces_11, MaybeGoal_12, STATE_VARIABLE_VarSet_0_24, STATE_VARIABLE_VarSet_25, STATE_VARIABLE_Counter_0_26, STATE_VARIABLE_Counter_27, STATE_VARIABLE_DCGVar_0_28, STATE_VARIABLE_DCGVar_29);
        break;
    }
  else
  {
    MR_Word SymName_21;
    MR_Word ArgTerms0_22;

    succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgTerm_17, &SymName_21, &ArgTerms0_22);
    if (succeeded)
    {
      MR_Word Goal_23;
      MR_Word ArgTerms_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Integer N_61;
      MR_String VarName_62;
      MR_String Var_68;

      mercury__counter__allocate_3_p_0(&N_61, STATE_VARIABLE_Counter_0_26, STATE_VARIABLE_Counter_27);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[4]), N_61, &Var_68);
      VarName_62 = mercury__string__f_43_43_2_f_0((MR_String) "DCG_", Var_68);
      mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarName_62, STATE_VARIABLE_DCGVar_29, STATE_VARIABLE_VarSet_0_24, STATE_VARIABLE_VarSet_25);
      {
        Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_55, 0) = ((MR_Box) (STATE_VARIABLE_DCGVar_0_28));
        MR_hl_field(1, Var_55, 1) = ((MR_Box) (Context_16));
      }
      {
        Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_57, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_29));
        MR_hl_field(1, Var_57, 1) = ((MR_Box) (Context_16));
      }
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
        MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_56));
      }
      ArgTerms_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[1]), ArgTerms0_22, Var_54);
      {
        Goal_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Goal_23, 0) = ((MR_Box) (Context_16));
        MR_hl_field(1, Goal_23, 1) = ((MR_Box) (SymName_21));
        MR_hl_field(1, Goal_23, 2) = ((MR_Box) (ArgTerms_53));
        MR_hl_field(1, Goal_23, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_23));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word Var_39;
      MR_Word Goal_46;
      MR_Word ArgTerms_78;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Integer N_86;
      MR_String VarName_87;
      MR_String Var_93;

      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (ProgTerm_17));
        MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__counter__allocate_3_p_0(&N_86, STATE_VARIABLE_Counter_0_26, STATE_VARIABLE_Counter_27);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[4]), N_86, &Var_93);
      VarName_87 = mercury__string__f_43_43_2_f_0((MR_String) "DCG_", Var_93);
      mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarName_87, STATE_VARIABLE_DCGVar_29, STATE_VARIABLE_VarSet_0_24, STATE_VARIABLE_VarSet_25);
      {
        Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_80, 0) = ((MR_Box) (STATE_VARIABLE_DCGVar_0_28));
        MR_hl_field(1, Var_80, 1) = ((MR_Box) (Context_16));
      }
      {
        Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_82, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_29));
        MR_hl_field(1, Var_82, 1) = ((MR_Box) (Context_16));
      }
      {
        Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
        MR_hl_field(1, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
        MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_81));
      }
      ArgTerms_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[1]), Var_39, Var_79);
      {
        Goal_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Goal_46, 0) = ((MR_Box) (Context_16));
        MR_hl_field(1, Goal_46, 1) = ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_3[0]));
        MR_hl_field(1, Goal_46, 2) = ((MR_Box) (ArgTerms_78));
        MR_hl_field(1, Goal_46, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_46));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_else_10_p_0(
  MR_Word ArgTerms_11,
  MR_Word Context_12,
  MR_Word ContextPieces_13,
  MR_Word * MaybeGoal_14,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27,
  MR_Word STATE_VARIABLE_Counter_0_28,
  MR_Word * STATE_VARIABLE_Counter_29,
  MR_Word STATE_VARIABLE_DCGVar_0_30,
  MR_Word * STATE_VARIABLE_DCGVar_31)
{
  MR_bool succeeded = (ArgTerms_11 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word ElseGoalTerm_19;
  MR_Word CondGoalTerm_20;
  MR_Word ThenGoalTerm_21;
  MR_Word CondContext_23;
  MR_Word CondThenTerm_18;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_String Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_String Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;

  if (succeeded)
  {
    CondThenTerm_18 = ((MR_Word) ((MR_hl_field(1, ArgTerms_11, (MR_Integer) 0))));
    Var_32 = ((MR_Word) ((MR_hl_field(1, ArgTerms_11, (MR_Integer) 1))));
    succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ElseGoalTerm_19 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 0))));
      Var_33 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 1))));
      succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) CondThenTerm_18)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_34 = ((MR_Word) ((MR_hl_field(0, CondThenTerm_18, (MR_Integer) 0))));
          Var_36 = ((MR_Word) ((MR_hl_field(0, CondThenTerm_18, (MR_Integer) 1))));
          CondContext_23 = ((MR_Word) ((MR_hl_field(0, CondThenTerm_18, (MR_Integer) 2))));
          succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_35 = ((MR_String) ((MR_hl_field(0, Var_34, (MR_Integer) 0))));
            succeeded = (strcmp(Var_35, (MR_String) "if") == 0);
            if (succeeded)
            {
              succeeded = (Var_36 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_37 = ((MR_Word) ((MR_hl_field(1, Var_36, (MR_Integer) 0))));
                Var_43 = ((MR_Word) ((MR_hl_field(1, Var_36, (MR_Integer) 1))));
                succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_38 = ((MR_Word) ((MR_hl_field(0, Var_37, (MR_Integer) 0))));
                    Var_40 = ((MR_Word) ((MR_hl_field(0, Var_37, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_39 = ((MR_String) ((MR_hl_field(0, Var_38, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_39, (MR_String) "then") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          CondGoalTerm_20 = ((MR_Word) ((MR_hl_field(1, Var_40, (MR_Integer) 0))));
                          Var_41 = ((MR_Word) ((MR_hl_field(1, Var_40, (MR_Integer) 1))));
                          succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ThenGoalTerm_21 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 0))));
                            Var_42 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 1))));
                            succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
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
    parse_tree__parse_dcg_goal__parse_dcg_if_then_else_12_p_0(CondGoalTerm_20, ThenGoalTerm_21, ElseGoalTerm_19, CondContext_23, ContextPieces_13, MaybeGoal_14, STATE_VARIABLE_VarSet_0_26, STATE_VARIABLE_VarSet_27, STATE_VARIABLE_Counter_0_28, STATE_VARIABLE_Counter_29, STATE_VARIABLE_DCGVar_0_30, STATE_VARIABLE_DCGVar_31);
  else
  {
    MR_Word Spec_25;
    MR_Word Var_70;

    {
      Spec_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_25, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_dcg_goal_else\'/10"));
      MR_hl_field(1, Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_25, 3) = ((MR_Box) (Context_12));
      MR_hl_field(1, Spec_25, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[31])));
    }
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (Spec_25));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_70));
    }
    *STATE_VARIABLE_DCGVar_31 = STATE_VARIABLE_DCGVar_0_30;
    *STATE_VARIABLE_Counter_29 = STATE_VARIABLE_Counter_0_28;
    *STATE_VARIABLE_VarSet_27 = STATE_VARIABLE_VarSet_0_26;
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_semicolon_10_p_0(
  MR_Word ArgTerms_11,
  MR_Word Context_12,
  MR_Word ContextPieces_13,
  MR_Word * MaybeGoal_14,
  MR_Word STATE_VARIABLE_VarSet_0_40,
  MR_Word * STATE_VARIABLE_VarSet_41,
  MR_Word STATE_VARIABLE_Counter_0_42,
  MR_Word * STATE_VARIABLE_Counter_43,
  MR_Word STATE_VARIABLE_DCGVar_0_44,
  MR_Word * STATE_VARIABLE_DCGVar_45)
{
  MR_bool succeeded = (ArgTerms_11 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word SubGoalTermA_18;
  MR_Word SubGoalTermB_19;
  MR_Word Var_46;
  MR_Word Var_47;

  if (succeeded)
  {
    SubGoalTermA_18 = ((MR_Word) ((MR_hl_field(1, ArgTerms_11, (MR_Integer) 0))));
    Var_46 = ((MR_Word) ((MR_hl_field(1, ArgTerms_11, (MR_Integer) 1))));
    succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalTermB_19 = ((MR_Word) ((MR_hl_field(1, Var_46, (MR_Integer) 0))));
      Var_47 = ((MR_Word) ((MR_hl_field(1, Var_46, (MR_Integer) 1))));
      succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word CondGoalTerm_20;
    MR_Word ThenGoalTerm_21;
    MR_Word Var_48;
    MR_String Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;

    succeeded = ((MR_tag((MR_Word) SubGoalTermA_18)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_48 = ((MR_Word) ((MR_hl_field(0, SubGoalTermA_18, (MR_Integer) 0))));
      Var_50 = ((MR_Word) ((MR_hl_field(0, SubGoalTermA_18, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_48)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_49 = ((MR_String) ((MR_hl_field(0, Var_48, (MR_Integer) 0))));
        succeeded = (strcmp(Var_49, (MR_String) "->") == 0);
        if (succeeded)
        {
          succeeded = (Var_50 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            CondGoalTerm_20 = ((MR_Word) ((MR_hl_field(1, Var_50, (MR_Integer) 0))));
            Var_51 = ((MR_Word) ((MR_hl_field(1, Var_50, (MR_Integer) 1))));
            succeeded = (Var_51 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ThenGoalTerm_21 = ((MR_Word) ((MR_hl_field(1, Var_51, (MR_Integer) 0))));
              Var_52 = ((MR_Word) ((MR_hl_field(1, Var_51, (MR_Integer) 1))));
              succeeded = (Var_52 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
      parse_tree__parse_dcg_goal__parse_dcg_if_then_else_12_p_0(CondGoalTerm_20, ThenGoalTerm_21, SubGoalTermB_19, Context_12, ContextPieces_13, MaybeGoal_14, STATE_VARIABLE_VarSet_0_40, STATE_VARIABLE_VarSet_41, STATE_VARIABLE_Counter_0_42, STATE_VARIABLE_Counter_43, STATE_VARIABLE_DCGVar_0_44, STATE_VARIABLE_DCGVar_45);
    else
    {
      MR_Word MaybeFirstDiffDCGVar_24;
      MR_Word DisjunctsDCGVarsCord_25;
      MR_Word Warnings_26;
      MR_Word ErrorSpecs_27;
      MR_Word Var_57;

      Var_57 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_2[0]));
      parse_tree__parse_dcg_goal__parse_dcg_goal_disjunction_16_p_0(STATE_VARIABLE_DCGVar_0_44, ContextPieces_13, SubGoalTermA_18, SubGoalTermB_19, (MR_Word) ((MR_Unsigned) 0U), &MaybeFirstDiffDCGVar_24, Var_57, &DisjunctsDCGVarsCord_25, (MR_Word) ((MR_Unsigned) 0U), &Warnings_26, (MR_Word) ((MR_Unsigned) 0U), &ErrorSpecs_27, STATE_VARIABLE_VarSet_0_40, STATE_VARIABLE_VarSet_41, STATE_VARIABLE_Counter_0_42, STATE_VARIABLE_Counter_43);
      if ((ErrorSpecs_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word DisjunctsDCGVars_28;
        MR_Word Disjuncts_29;
        MR_Word Disjunct1_33;
        MR_Word Disjunct2_34;
        MR_Word Disjuncts3plus_35;
        MR_Word Goal_36;

        DisjunctsDCGVars_28 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_2[0]), DisjunctsDCGVarsCord_25);
        if ((MaybeFirstDiffDCGVar_24 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__assoc_list__keys_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), DisjunctsDCGVars_28, &Disjuncts_29);
          *STATE_VARIABLE_DCGVar_45 = STATE_VARIABLE_DCGVar_0_44;
        }
        else
        {
          MR_Word RevDisjuncts_31;

          *STATE_VARIABLE_DCGVar_45 = ((MR_Word) ((MR_hl_field(1, MaybeFirstDiffDCGVar_24, (MR_Integer) 0))));
          parse_tree__parse_dcg_goal__bring_disjuncts_up_to_6_p_0(STATE_VARIABLE_DCGVar_0_44, *STATE_VARIABLE_DCGVar_45, Context_12, DisjunctsDCGVars_28, (MR_Word) ((MR_Unsigned) 0U), &RevDisjuncts_31);
          mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), RevDisjuncts_31, &Disjuncts_29);
        }
        if ((Disjuncts_29 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_dcg_goal_semicolon\'/10", (MR_String) "less than two disjuncts");
            return;
          }
        else
        {
          MR_Word Var_79 = ((MR_Word) ((MR_hl_field(1, Disjuncts_29, (MR_Integer) 1))));
          MR_Word Var_80 = ((MR_Word) ((MR_hl_field(1, Disjuncts_29, (MR_Integer) 0))));

          if ((Var_79 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_dcg_goal_semicolon\'/10", (MR_String) "less than two disjuncts");
              return;
            }
          else
          {
            Disjunct1_33 = Var_80;
            Disjunct2_34 = ((MR_Word) ((MR_hl_field(1, Var_79, (MR_Integer) 0))));
            Disjuncts3plus_35 = ((MR_Word) ((MR_hl_field(1, Var_79, (MR_Integer) 1))));
          }
        }
        {
          Goal_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Goal_36, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Goal_36, 1) = ((MR_Box) (Context_12));
          MR_hl_field(3, Goal_36, 2) = ((MR_Box) (Disjunct1_33));
          MR_hl_field(3, Goal_36, 3) = ((MR_Box) (Disjunct2_34));
          MR_hl_field(3, Goal_36, 4) = ((MR_Box) (Disjuncts3plus_35));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_14 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Goal_36));
          MR_hl_field(1, base, 1) = ((MR_Box) (Warnings_26));
        }
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (ErrorSpecs_27));
        }
        *STATE_VARIABLE_DCGVar_45 = STATE_VARIABLE_DCGVar_0_44;
      }
    }
  }
  else
  {
    MR_Word Spec_39;
    MR_Word Var_69;

    Spec_39 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_13, Context_12, (MR_String) ";");
    {
      Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_69, 0) = ((MR_Box) (Spec_39));
      MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_69));
    }
    *STATE_VARIABLE_DCGVar_45 = STATE_VARIABLE_DCGVar_0_44;
    *STATE_VARIABLE_Counter_43 = STATE_VARIABLE_Counter_0_42;
    *STATE_VARIABLE_VarSet_41 = STATE_VARIABLE_VarSet_0_40;
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_disjunction_16_p_0(
  MR_Word DCGVar0_17,
  MR_Word ContextPieces_18,
  MR_Word TermA_19,
  MR_Word TermB_20,
  MR_Word STATE_VARIABLE_MaybeFirstDiffDCGVar_0_44,
  MR_Word * STATE_VARIABLE_MaybeFirstDiffDCGVar_45,
  MR_Word STATE_VARIABLE_DisjunctsDCGVarsCord_0_46,
  MR_Word * STATE_VARIABLE_DisjunctsDCGVarsCord_47,
  MR_Word STATE_VARIABLE_Warnings_0_48,
  MR_Word * STATE_VARIABLE_Warnings_49,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51,
  MR_Word STATE_VARIABLE_VarSet_0_52,
  MR_Word * STATE_VARIABLE_VarSet_53,
  MR_Word STATE_VARIABLE_Counter_0_54,
  MR_Word * STATE_VARIABLE_Counter_55)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MaybeGoalA_27;
    MR_Word DCGVarA_28;
    MR_Word STATE_VARIABLE_VarSet_56_56;
    MR_Word STATE_VARIABLE_Counter_57_57;
    MR_Word STATE_VARIABLE_MaybeFirstDiffDCGVar_58_58;
    MR_Word STATE_VARIABLE_DisjunctsDCGVarsCord_59_59;
    MR_Word STATE_VARIABLE_Warnings_60_60;
    MR_Word STATE_VARIABLE_Specs_61_61;
    MR_Word TermBA_34;
    MR_Word TermBB_35;
    MR_Word ArgTermsB_32;
    MR_Word Var_62;
    MR_String Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_String Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(TermA_19, ContextPieces_18, &MaybeGoalA_27, STATE_VARIABLE_VarSet_0_52, &STATE_VARIABLE_VarSet_56_56, STATE_VARIABLE_Counter_0_54, &STATE_VARIABLE_Counter_57_57, DCGVar0_17, &DCGVarA_28);
    if (((MR_tag((MR_Word) MaybeGoalA_27)) == (MR_Integer) 0))
    {
      MR_Word SpecsA_31 = ((MR_Word) ((MR_hl_field(0, MaybeGoalA_27, (MR_Integer) 0))));

      STATE_VARIABLE_Specs_61_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_0_50, SpecsA_31);
      STATE_VARIABLE_MaybeFirstDiffDCGVar_58_58 = STATE_VARIABLE_MaybeFirstDiffDCGVar_0_44;
      STATE_VARIABLE_DisjunctsDCGVarsCord_59_59 = STATE_VARIABLE_DisjunctsDCGVarsCord_0_46;
      STATE_VARIABLE_Warnings_60_60 = STATE_VARIABLE_Warnings_0_48;
    }
    else
    {
      MR_Word DisjunctA_29 = ((MR_Word) ((MR_hl_field(1, MaybeGoalA_27, (MR_Integer) 0))));
      MR_Word WarningsA_30 = ((MR_Word) ((MR_hl_field(1, MaybeGoalA_27, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (DCGVar0_17)), ((MR_Box) (DCGVarA_28)));
      if (succeeded)
        STATE_VARIABLE_MaybeFirstDiffDCGVar_58_58 = STATE_VARIABLE_MaybeFirstDiffDCGVar_0_44;
      else
      if ((STATE_VARIABLE_MaybeFirstDiffDCGVar_0_44 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          STATE_VARIABLE_MaybeFirstDiffDCGVar_58_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_MaybeFirstDiffDCGVar_58_58, 0) = ((MR_Box) (DCGVarA_28));
        }
      else
        STATE_VARIABLE_MaybeFirstDiffDCGVar_58_58 = STATE_VARIABLE_MaybeFirstDiffDCGVar_0_44;
      parse_tree__parse_dcg_goal__append_disjunct_dcg_var_to_cord_4_p_0(DCGVarA_28, DisjunctA_29, STATE_VARIABLE_DisjunctsDCGVarsCord_0_46, &STATE_VARIABLE_DisjunctsDCGVarsCord_59_59);
      STATE_VARIABLE_Warnings_60_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), WarningsA_30, STATE_VARIABLE_Warnings_0_48);
      STATE_VARIABLE_Specs_61_61 = STATE_VARIABLE_Specs_0_50;
    }
    succeeded = ((MR_tag((MR_Word) TermB_20)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_62 = ((MR_Word) ((MR_hl_field(0, TermB_20, (MR_Integer) 0))));
      ArgTermsB_32 = ((MR_Word) ((MR_hl_field(0, TermB_20, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_62)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_63 = ((MR_String) ((MR_hl_field(0, Var_62, (MR_Integer) 0))));
        succeeded = (strcmp(Var_63, (MR_String) ";") == 0);
        if (succeeded)
        {
          succeeded = (ArgTermsB_32 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TermBA_34 = ((MR_Word) ((MR_hl_field(1, ArgTermsB_32, (MR_Integer) 0))));
            Var_64 = ((MR_Word) ((MR_hl_field(1, ArgTermsB_32, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) TermBA_34)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_66 = ((MR_Word) ((MR_hl_field(0, TermBA_34, (MR_Integer) 0))));
              Var_68 = ((MR_Word) ((MR_hl_field(0, TermBA_34, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_66)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_67 = ((MR_String) ((MR_hl_field(0, Var_66, (MR_Integer) 0))));
                succeeded = (strcmp(Var_67, (MR_String) "->") == 0);
                if (succeeded)
                {
                  succeeded = (Var_68 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_69 = ((MR_Word) ((MR_hl_field(1, Var_68, (MR_Integer) 1))));
                    succeeded = (Var_69 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_70 = ((MR_Word) ((MR_hl_field(1, Var_69, (MR_Integer) 1))));
                      succeeded = (Var_70 == (MR_Word) ((MR_Unsigned) 0U));
                    }
                  }
                }
              }
            }
            succeeded = !(succeeded);
            if (succeeded)
            {
              succeeded = (Var_64 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TermBB_35 = ((MR_Word) ((MR_hl_field(1, Var_64, (MR_Integer) 0))));
                Var_65 = ((MR_Word) ((MR_hl_field(1, Var_64, (MR_Integer) 1))));
                succeeded = (Var_65 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_TermA_19 = TermBA_34;
      MR_Word next_value_of_TermB_20 = TermBB_35;
      MR_Word next_value_of_STATE_VARIABLE_MaybeFirstDiffDCGVar_0_44 = STATE_VARIABLE_MaybeFirstDiffDCGVar_58_58;
      MR_Word next_value_of_STATE_VARIABLE_DisjunctsDCGVarsCord_0_46 = STATE_VARIABLE_DisjunctsDCGVarsCord_59_59;
      MR_Word next_value_of_STATE_VARIABLE_Warnings_0_48 = STATE_VARIABLE_Warnings_60_60;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_50 = STATE_VARIABLE_Specs_61_61;
      MR_Word next_value_of_STATE_VARIABLE_VarSet_0_52 = STATE_VARIABLE_VarSet_56_56;
      MR_Word next_value_of_STATE_VARIABLE_Counter_0_54 = STATE_VARIABLE_Counter_57_57;

      // direct tailcall eliminated
      ;
      TermA_19 = next_value_of_TermA_19;
      TermB_20 = next_value_of_TermB_20;
      STATE_VARIABLE_MaybeFirstDiffDCGVar_0_44 = next_value_of_STATE_VARIABLE_MaybeFirstDiffDCGVar_0_44;
      STATE_VARIABLE_DisjunctsDCGVarsCord_0_46 = next_value_of_STATE_VARIABLE_DisjunctsDCGVarsCord_0_46;
      STATE_VARIABLE_Warnings_0_48 = next_value_of_STATE_VARIABLE_Warnings_0_48;
      STATE_VARIABLE_Specs_0_50 = next_value_of_STATE_VARIABLE_Specs_0_50;
      STATE_VARIABLE_VarSet_0_52 = next_value_of_STATE_VARIABLE_VarSet_0_52;
      STATE_VARIABLE_Counter_0_54 = next_value_of_STATE_VARIABLE_Counter_0_54;
      continue;
    }
    else
    {
      MR_Word MaybeGoalB_39;
      MR_Word DCGVarB_40;

      parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(TermB_20, ContextPieces_18, &MaybeGoalB_39, STATE_VARIABLE_VarSet_56_56, STATE_VARIABLE_VarSet_53, STATE_VARIABLE_Counter_57_57, STATE_VARIABLE_Counter_55, DCGVar0_17, &DCGVarB_40);
      if (((MR_tag((MR_Word) MaybeGoalB_39)) == (MR_Integer) 0))
      {
        MR_Word SpecsB_43 = ((MR_Word) ((MR_hl_field(0, MaybeGoalB_39, (MR_Integer) 0))));

        *STATE_VARIABLE_Specs_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_61_61, SpecsB_43);
        *STATE_VARIABLE_MaybeFirstDiffDCGVar_45 = STATE_VARIABLE_MaybeFirstDiffDCGVar_58_58;
        *STATE_VARIABLE_DisjunctsDCGVarsCord_47 = STATE_VARIABLE_DisjunctsDCGVarsCord_59_59;
        *STATE_VARIABLE_Warnings_49 = STATE_VARIABLE_Warnings_60_60;
      }
      else
      {
        MR_Word DisjunctB_41 = ((MR_Word) ((MR_hl_field(1, MaybeGoalB_39, (MR_Integer) 0))));
        MR_Word WarningsB_42 = ((MR_Word) ((MR_hl_field(1, MaybeGoalB_39, (MR_Integer) 1))));

        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (DCGVar0_17)), ((MR_Box) (DCGVarB_40)));
        if (succeeded)
          *STATE_VARIABLE_MaybeFirstDiffDCGVar_45 = STATE_VARIABLE_MaybeFirstDiffDCGVar_58_58;
        else
        if ((STATE_VARIABLE_MaybeFirstDiffDCGVar_58_58 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_MaybeFirstDiffDCGVar_45 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (DCGVarB_40));
          }
        else
          *STATE_VARIABLE_MaybeFirstDiffDCGVar_45 = STATE_VARIABLE_MaybeFirstDiffDCGVar_58_58;
        parse_tree__parse_dcg_goal__append_disjunct_dcg_var_to_cord_4_p_0(DCGVarB_40, DisjunctB_41, STATE_VARIABLE_DisjunctsDCGVarsCord_59_59, STATE_VARIABLE_DisjunctsDCGVarsCord_47);
        *STATE_VARIABLE_Warnings_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_Warnings_60_60, WarningsB_42);
        *STATE_VARIABLE_Specs_51 = STATE_VARIABLE_Specs_61_61;
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_conjunction_17_p_0(
  MR_String Functor_18,
  MR_Word TermA_19,
  MR_Word TermB_20,
  MR_Word Context_21,
  MR_Word ContextPieces_22,
  MR_Word STATE_VARIABLE_ConjunctsCord_0_40,
  MR_Word * STATE_VARIABLE_ConjunctsCord_41,
  MR_Word STATE_VARIABLE_Warnings_0_42,
  MR_Word * STATE_VARIABLE_Warnings_43,
  MR_Word STATE_VARIABLE_Errors_0_44,
  MR_Word * STATE_VARIABLE_Errors_45,
  MR_Word STATE_VARIABLE_VarSet_0_46,
  MR_Word * STATE_VARIABLE_VarSet_47,
  MR_Word STATE_VARIABLE_Counter_0_48,
  MR_Word * STATE_VARIABLE_Counter_49,
  MR_Word STATE_VARIABLE_DCGVar_0_50,
  MR_Word * STATE_VARIABLE_DCGVar_51)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MaybeGoalA_29;
    MR_Word STATE_VARIABLE_VarSet_52_52;
    MR_Word STATE_VARIABLE_Counter_53_53;
    MR_Word STATE_VARIABLE_DCGVar_54_54;
    MR_Word STATE_VARIABLE_ConjunctsCord_55_55;
    MR_Word STATE_VARIABLE_Warnings_56_56;
    MR_Word STATE_VARIABLE_Errors_57_57;
    MR_Word TermBA_34;
    MR_Word TermBB_35;
    MR_Word ArgTermsB_33;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_67;
    MR_String Var_68;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(TermA_19, ContextPieces_22, &MaybeGoalA_29, STATE_VARIABLE_VarSet_0_46, &STATE_VARIABLE_VarSet_52_52, STATE_VARIABLE_Counter_0_48, &STATE_VARIABLE_Counter_53_53, STATE_VARIABLE_DCGVar_0_50, &STATE_VARIABLE_DCGVar_54_54);
    if (((MR_tag((MR_Word) MaybeGoalA_29)) == (MR_Integer) 0))
    {
      MR_Word SpecsA_32 = ((MR_Word) ((MR_hl_field(0, MaybeGoalA_29, (MR_Integer) 0))));

      STATE_VARIABLE_Errors_57_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), SpecsA_32, STATE_VARIABLE_Errors_0_44);
      STATE_VARIABLE_ConjunctsCord_55_55 = STATE_VARIABLE_ConjunctsCord_0_40;
      STATE_VARIABLE_Warnings_56_56 = STATE_VARIABLE_Warnings_0_42;
    }
    else
    {
      MR_Word GoalA_30 = ((MR_Word) ((MR_hl_field(1, MaybeGoalA_29, (MR_Integer) 0))));
      MR_Word WarningsA_31 = ((MR_Word) ((MR_hl_field(1, MaybeGoalA_29, (MR_Integer) 1))));

      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), ((MR_Box) (GoalA_30)), STATE_VARIABLE_ConjunctsCord_0_40, &STATE_VARIABLE_ConjunctsCord_55_55);
      STATE_VARIABLE_Warnings_56_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), WarningsA_31, STATE_VARIABLE_Warnings_0_42);
      STATE_VARIABLE_Errors_57_57 = STATE_VARIABLE_Errors_0_44;
    }
    succeeded = ((MR_tag((MR_Word) TermB_20)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_58 = ((MR_Word) ((MR_hl_field(0, TermB_20, (MR_Integer) 0))));
      ArgTermsB_33 = ((MR_Word) ((MR_hl_field(0, TermB_20, (MR_Integer) 1))));
      Var_67 = ((MR_Word) ((MR_hl_field(0, TermB_20, (MR_Integer) 2))));
      succeeded = mercury__term_context____Unify____term_context_0_0(Context_21, Var_67);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_58)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_68 = ((MR_String) ((MR_hl_field(0, Var_58, (MR_Integer) 0))));
          succeeded = (strcmp(Functor_18, Var_68) == 0);
          if (succeeded)
          {
            succeeded = (ArgTermsB_33 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TermBA_34 = ((MR_Word) ((MR_hl_field(1, ArgTermsB_33, (MR_Integer) 0))));
              Var_59 = ((MR_Word) ((MR_hl_field(1, ArgTermsB_33, (MR_Integer) 1))));
              succeeded = (Var_59 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TermBB_35 = ((MR_Word) ((MR_hl_field(1, Var_59, (MR_Integer) 0))));
                Var_60 = ((MR_Word) ((MR_hl_field(1, Var_59, (MR_Integer) 1))));
                succeeded = (Var_60 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_TermA_19 = TermBA_34;
      MR_Word next_value_of_TermB_20 = TermBB_35;
      MR_Word next_value_of_STATE_VARIABLE_ConjunctsCord_0_40 = STATE_VARIABLE_ConjunctsCord_55_55;
      MR_Word next_value_of_STATE_VARIABLE_Warnings_0_42 = STATE_VARIABLE_Warnings_56_56;
      MR_Word next_value_of_STATE_VARIABLE_Errors_0_44 = STATE_VARIABLE_Errors_57_57;
      MR_Word next_value_of_STATE_VARIABLE_VarSet_0_46 = STATE_VARIABLE_VarSet_52_52;
      MR_Word next_value_of_STATE_VARIABLE_Counter_0_48 = STATE_VARIABLE_Counter_53_53;
      MR_Word next_value_of_STATE_VARIABLE_DCGVar_0_50 = STATE_VARIABLE_DCGVar_54_54;

      // direct tailcall eliminated
      ;
      TermA_19 = next_value_of_TermA_19;
      TermB_20 = next_value_of_TermB_20;
      STATE_VARIABLE_ConjunctsCord_0_40 = next_value_of_STATE_VARIABLE_ConjunctsCord_0_40;
      STATE_VARIABLE_Warnings_0_42 = next_value_of_STATE_VARIABLE_Warnings_0_42;
      STATE_VARIABLE_Errors_0_44 = next_value_of_STATE_VARIABLE_Errors_0_44;
      STATE_VARIABLE_VarSet_0_46 = next_value_of_STATE_VARIABLE_VarSet_0_46;
      STATE_VARIABLE_Counter_0_48 = next_value_of_STATE_VARIABLE_Counter_0_48;
      STATE_VARIABLE_DCGVar_0_50 = next_value_of_STATE_VARIABLE_DCGVar_0_50;
      continue;
    }
    else
    {
      MR_Word MaybeGoalB_36;

      parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(TermB_20, ContextPieces_22, &MaybeGoalB_36, STATE_VARIABLE_VarSet_52_52, STATE_VARIABLE_VarSet_47, STATE_VARIABLE_Counter_53_53, STATE_VARIABLE_Counter_49, STATE_VARIABLE_DCGVar_54_54, STATE_VARIABLE_DCGVar_51);
      if (((MR_tag((MR_Word) MaybeGoalB_36)) == (MR_Integer) 0))
      {
        MR_Word SpecsB_39 = ((MR_Word) ((MR_hl_field(0, MaybeGoalB_36, (MR_Integer) 0))));

        *STATE_VARIABLE_Errors_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), SpecsB_39, STATE_VARIABLE_Errors_57_57);
        *STATE_VARIABLE_ConjunctsCord_41 = STATE_VARIABLE_ConjunctsCord_55_55;
        *STATE_VARIABLE_Warnings_43 = STATE_VARIABLE_Warnings_56_56;
      }
      else
      {
        MR_Word GoalB_37 = ((MR_Word) ((MR_hl_field(1, MaybeGoalB_36, (MR_Integer) 0))));
        MR_Word WarningsB_38 = ((MR_Word) ((MR_hl_field(1, MaybeGoalB_36, (MR_Integer) 1))));

        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), ((MR_Box) (GoalB_37)), STATE_VARIABLE_ConjunctsCord_55_55, STATE_VARIABLE_ConjunctsCord_41);
        *STATE_VARIABLE_Warnings_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), WarningsB_38, STATE_VARIABLE_Warnings_56_56);
        *STATE_VARIABLE_Errors_45 = STATE_VARIABLE_Errors_57_57;
      }
    }
    break;
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
    Vars_28 = ((MR_Word) ((MR_hl_field(1, MaybeVarsCond_23, (MR_Integer) 0))));
    StateVars_29 = ((MR_Word) ((MR_hl_field(1, MaybeVarsCond_23, (MR_Integer) 1))));
    Cond_30 = ((MR_Word) ((MR_hl_field(1, MaybeVarsCond_23, (MR_Integer) 2))));
    CondWarningSpecs_31 = ((MR_Word) ((MR_hl_field(1, MaybeVarsCond_23, (MR_Integer) 3))));
    succeeded = ((MR_tag((MR_Word) MaybeThen1_24)) == (MR_Integer) 1);
    if (succeeded)
    {
      Then1_32 = ((MR_Word) ((MR_hl_field(1, MaybeThen1_24, (MR_Integer) 0))));
      ThenWarningSpecs_33 = ((MR_Word) ((MR_hl_field(1, MaybeThen1_24, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) MaybeElse1_26)) == (MR_Integer) 1);
      if (succeeded)
      {
        Else1_34 = ((MR_Word) ((MR_hl_field(1, MaybeElse1_26, (MR_Integer) 0))));
        ElseWarningSpecs_35 = ((MR_Word) ((MR_hl_field(1, MaybeElse1_26, (MR_Integer) 1))));
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
    MR_Word TypeInfo_71_71;

    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ThenWarningSpecs_33, ElseWarningSpecs_35);
    WarningSpecs_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), CondWarningSpecs_31, Var_50);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (VarThen_25)), ((MR_Box) (Var0_21)));
    if (succeeded)
    {
      TypeInfo_71_71 = (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_71_71, ((MR_Box) (VarElse_27)), ((MR_Box) (Var0_21)));
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
        MR_Word Var_54;

        *Var_22 = VarElse_27;
        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (*Var_22));
          MR_hl_field(1, Var_51, 1) = ((MR_Box) (Context_16));
        }
        {
          Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_52, 0) = ((MR_Box) (VarThen_25));
          MR_hl_field(1, Var_52, 1) = ((MR_Box) (Context_16));
        }
        {
          Unify_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Unify_39, 0) = ((MR_Box) (Context_16));
          MR_hl_field(0, Unify_39, 1) = ((MR_Box) (Var_51));
          MR_hl_field(0, Unify_39, 2) = ((MR_Box) (Var_52));
          MR_hl_field(0, Unify_39, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (Unify_39));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Then_37 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Then_37, 0) = ((MR_Box) (Context_16));
          MR_hl_field(2, Then_37, 1) = ((MR_Box) (Then1_32));
          MR_hl_field(2, Then_37, 2) = ((MR_Box) (Var_54));
        }
        Else_38 = Else1_34;
      }
      else
      {
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (VarElse_27)), ((MR_Box) (Var0_21)));
        if (succeeded)
        {
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_59;
          MR_Word Unify_65;

          *Var_22 = VarThen_25;
          Then_37 = Then1_32;
          {
            Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_56, 0) = ((MR_Box) (*Var_22));
            MR_hl_field(1, Var_56, 1) = ((MR_Box) (Context_16));
          }
          {
            Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_57, 0) = ((MR_Box) (VarElse_27));
            MR_hl_field(1, Var_57, 1) = ((MR_Box) (Context_16));
          }
          {
            Unify_65 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Unify_65, 0) = ((MR_Box) (Context_16));
            MR_hl_field(0, Unify_65, 1) = ((MR_Box) (Var_56));
            MR_hl_field(0, Unify_65, 2) = ((MR_Box) (Var_57));
            MR_hl_field(0, Unify_65, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          {
            Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_59, 0) = ((MR_Box) (Unify_65));
            MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Else_38 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Else_38, 0) = ((MR_Box) (Context_16));
            MR_hl_field(2, Else_38, 1) = ((MR_Box) (Else1_34));
            MR_hl_field(2, Else_38, 2) = ((MR_Box) (Var_59));
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
      Goal_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Goal_40, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Goal_40, 1) = ((MR_Box) (Context_16));
      MR_hl_field(3, Goal_40, 2) = ((MR_Box) (Vars_28));
      MR_hl_field(3, Goal_40, 3) = ((MR_Box) (StateVars_29));
      MR_hl_field(3, Goal_40, 4) = ((MR_Box) (Cond_30));
      MR_hl_field(3, Goal_40, 5) = ((MR_Box) (Then_37));
      MR_hl_field(3, Goal_40, 6) = ((MR_Box) (Else_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MaybeGoal_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_40));
      MR_hl_field(1, base, 1) = ((MR_Box) (WarningSpecs_36));
    }
  }
  else
  {
    MR_Word Specs_41;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;

    Var_61 = parse_tree__maybe_error__get_any_errors_warnings4_1_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[6]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeVarsCond_23);
    Var_63 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeThen1_24);
    Var_64 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeElse1_26);
    Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_63, Var_64);
    Specs_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_61, Var_62);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_18 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_41));
    }
    *Var_22 = Var0_21;
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_if_then_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_76;

  parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__1059__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_76);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_76));
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_if_then_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_70;

  parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__1058__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_70);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_70));
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
  MR_bool succeeded = ((MR_tag((MR_Word) CondGoalTerm_13)) == (MR_Integer) 0);
  MR_Word Var1_23;
  MR_Word MaybeThen1_24;
  MR_Word Var2_25;
  MR_Word STATE_VARIABLE_VarSet_35_35;
  MR_Word STATE_VARIABLE_Counter_36_36;
  MR_Word STATE_VARIABLE_VarSet_37_37;
  MR_Word STATE_VARIABLE_Counter_38_38;
  MR_Word MaybeVars_54;
  MR_Word GoalTerm_55;
  MR_Word MaybeGoal_56;
  MR_Word VarsTerm_48;
  MR_Word SubGoalTerm_49;
  MR_Word Var_64;
  MR_String Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Vars0_57;
  MR_Word StateVars0_58;
  MR_Word Goal_59;
  MR_Word GoalWarningSpecs_60;
  MR_Word Var_70;
  MR_Word TypeInfo_47_47;

  if (succeeded)
  {
    Var_64 = ((MR_Word) ((MR_hl_field(0, CondGoalTerm_13, (MR_Integer) 0))));
    Var_66 = ((MR_Word) ((MR_hl_field(0, CondGoalTerm_13, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_64)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_65 = ((MR_String) ((MR_hl_field(0, Var_64, (MR_Integer) 0))));
      succeeded = (strcmp(Var_65, (MR_String) "some") == 0);
      if (succeeded)
      {
        succeeded = (Var_66 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          VarsTerm_48 = ((MR_Word) ((MR_hl_field(1, Var_66, (MR_Integer) 0))));
          Var_67 = ((MR_Word) ((MR_hl_field(1, Var_66, (MR_Integer) 1))));
          succeeded = (Var_67 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SubGoalTerm_49 = ((MR_Word) ((MR_hl_field(1, Var_67, (MR_Integer) 0))));
            Var_68 = ((MR_Word) ((MR_hl_field(1, Var_67, (MR_Integer) 1))));
            succeeded = (Var_68 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word GenericVarSet_51;
    MR_Word VarsContextPieces_53;
    MR_Word Var_69;

    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_31, &GenericVarSet_51);
    Var_69 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[18])));
    VarsContextPieces_53 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_16, Var_69);
    parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_48, GenericVarSet_51, VarsContextPieces_53, &MaybeVars_54);
    GoalTerm_55 = SubGoalTerm_49;
  }
  else
  {
    MaybeVars_54 = (MR_Word) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_3[3]));
    GoalTerm_55 = CondGoalTerm_13;
  }
  parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(GoalTerm_55, ContextPieces_16, &MaybeGoal_56, STATE_VARIABLE_VarSet_0_31, &STATE_VARIABLE_VarSet_35_35, STATE_VARIABLE_Counter_0_33, &STATE_VARIABLE_Counter_36_36, Var0_21, &Var1_23);
  succeeded = ((MR_tag((MR_Word) MaybeVars_54)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_70 = ((MR_Word) ((MR_hl_field(1, MaybeVars_54, (MR_Integer) 0))));
    Vars0_57 = ((MR_Word) ((MR_hl_field(0, Var_70, (MR_Integer) 0))));
    StateVars0_58 = ((MR_Word) ((MR_hl_field(0, Var_70, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) MaybeGoal_56)) == (MR_Integer) 1);
    if (succeeded)
    {
      Goal_59 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_56, (MR_Integer) 0))));
      GoalWarningSpecs_60 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_56, (MR_Integer) 1))));
    }
  }
  if (succeeded)
  {
    MR_Word Vars_61;
    MR_Word StateVars_62;

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_2[6]), Vars0_57, &Vars_61);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_2[7]), StateVars0_58, &StateVars_62);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *MaybeVarsCond_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Vars_61));
      MR_hl_field(1, base, 1) = ((MR_Box) (StateVars_62));
      MR_hl_field(1, base, 2) = ((MR_Box) (Goal_59));
      MR_hl_field(1, base, 3) = ((MR_Box) (GoalWarningSpecs_60));
    }
  }
  else
  {
    MR_Word Specs_63;
    MR_Word Var_73;
    MR_Word Var_74;

    Var_73 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[4]), MaybeVars_54);
    Var_74 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeGoal_56);
    Specs_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_73, Var_74);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeVarsCond_17 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_63));
    }
  }
  parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(ThenGoalTerm_14, ContextPieces_16, &MaybeThen1_24, STATE_VARIABLE_VarSet_35_35, &STATE_VARIABLE_VarSet_37_37, STATE_VARIABLE_Counter_36_36, &STATE_VARIABLE_Counter_38_38, Var1_23, &Var2_25);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (Var0_21)), ((MR_Box) (Var1_23)));
  succeeded = !(succeeded);
  if (succeeded)
  {
    TypeInfo_47_47 = (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]);
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, ((MR_Box) (Var1_23)), ((MR_Box) (Var2_25)));
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
      MR_Word Then1_26 = ((MR_Word) ((MR_hl_field(1, MaybeThen1_24, (MR_Integer) 0))));
      MR_Word ThenWarningSpecs_27 = ((MR_Word) ((MR_hl_field(1, MaybeThen1_24, (MR_Integer) 1))));
      MR_Word Unify_28;
      MR_Word Then_29;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_44;
      MR_Integer N_83;
      MR_String VarName_84;
      MR_String Var_90;

      mercury__counter__allocate_3_p_0(&N_83, STATE_VARIABLE_Counter_38_38, STATE_VARIABLE_Counter_34);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[4]), N_83, &Var_90);
      VarName_84 = mercury__string__f_43_43_2_f_0((MR_String) "DCG_", Var_90);
      mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarName_84, Var_22, STATE_VARIABLE_VarSet_37_37, STATE_VARIABLE_VarSet_32);
      {
        Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_41, 0) = ((MR_Box) (*Var_22));
        MR_hl_field(1, Var_41, 1) = ((MR_Box) (Context_15));
      }
      {
        Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var2_25));
        MR_hl_field(1, Var_42, 1) = ((MR_Box) (Context_15));
      }
      {
        Unify_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Unify_28, 0) = ((MR_Box) (Context_15));
        MR_hl_field(0, Unify_28, 1) = ((MR_Box) (Var_41));
        MR_hl_field(0, Unify_28, 2) = ((MR_Box) (Var_42));
        MR_hl_field(0, Unify_28, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (Unify_28));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Then_29 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Then_29, 0) = ((MR_Box) (Context_15));
        MR_hl_field(2, Then_29, 1) = ((MR_Box) (Then1_26));
        MR_hl_field(2, Then_29, 2) = ((MR_Box) (Var_44));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeThen_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Then_29));
        MR_hl_field(1, base, 1) = ((MR_Box) (ThenWarningSpecs_27));
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

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_76;

  parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__1059__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_76);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_76));
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_70;

  parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__1058__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_70);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_70));
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
    Var_38 = ((MR_Word) ((MR_hl_field(0, Term_10, (MR_Integer) 0))));
    Var_40 = ((MR_Word) ((MR_hl_field(0, Term_10, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_39 = ((MR_String) ((MR_hl_field(0, Var_38, (MR_Integer) 0))));
      succeeded = (strcmp(Var_39, (MR_String) "some") == 0);
      if (succeeded)
      {
        succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          VarsTerm_16 = ((MR_Word) ((MR_hl_field(1, Var_40, (MR_Integer) 0))));
          Var_41 = ((MR_Word) ((MR_hl_field(1, Var_40, (MR_Integer) 1))));
          succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SubGoalTerm_17 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 0))));
            Var_42 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 1))));
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
    Var_54 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[18])));
    VarsContextPieces_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_11, Var_54);
    parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_16, GenericVarSet_19, VarsContextPieces_21, &MaybeVars_22);
    GoalTerm_23 = SubGoalTerm_17;
  }
  else
  {
    MaybeVars_22 = (MR_Word) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_3[3]));
    GoalTerm_23 = Term_10;
  }
  parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(GoalTerm_23, ContextPieces_11, &MaybeGoal_24, STATE_VARIABLE_VarSet_0_32, STATE_VARIABLE_VarSet_33, STATE_VARIABLE_Counter_0_34, STATE_VARIABLE_Counter_35, STATE_VARIABLE_DCGVar_0_36, STATE_VARIABLE_DCGVar_37);
  succeeded = ((MR_tag((MR_Word) MaybeVars_22)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_61 = ((MR_Word) ((MR_hl_field(1, MaybeVars_22, (MR_Integer) 0))));
    Vars0_25 = ((MR_Word) ((MR_hl_field(0, Var_61, (MR_Integer) 0))));
    StateVars0_26 = ((MR_Word) ((MR_hl_field(0, Var_61, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) MaybeGoal_24)) == (MR_Integer) 1);
    if (succeeded)
    {
      Goal_27 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_24, (MR_Integer) 0))));
      GoalWarningSpecs_28 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_24, (MR_Integer) 1))));
    }
  }
  if (succeeded)
  {
    MR_Word Vars_29;
    MR_Word StateVars_30;

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_2[4]), Vars0_25, &Vars_29);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_2[5]), StateVars0_26, &StateVars_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *MaybeVarsGoal_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Vars_29));
      MR_hl_field(1, base, 1) = ((MR_Box) (StateVars_30));
      MR_hl_field(1, base, 2) = ((MR_Box) (Goal_27));
      MR_hl_field(1, base, 3) = ((MR_Box) (GoalWarningSpecs_28));
    }
  }
  else
  {
    MR_Word Specs_31;
    MR_Word Var_64;
    MR_Word Var_65;

    Var_64 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[4]), MaybeVars_22);
    Var_65 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeGoal_24);
    Specs_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_64, Var_65);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeVarsGoal_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_31));
    }
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_if_10_p_0(
  MR_Word ArgTerms_11,
  MR_Word Context_12,
  MR_Word ContextPieces_13,
  MR_Word * MaybeGoal_14,
  MR_Word STATE_VARIABLE_VarSet_0_37,
  MR_Word * STATE_VARIABLE_VarSet_38,
  MR_Word STATE_VARIABLE_Counter_0_39,
  MR_Word * STATE_VARIABLE_Counter_40,
  MR_Word STATE_VARIABLE_DCGVar_0_41,
  MR_Word * STATE_VARIABLE_DCGVar_42)
{
  MR_bool succeeded = (ArgTerms_11 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word CondGoalTerm_18;
  MR_Word ThenGoalTerm_19;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_String Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;

  if (succeeded)
  {
    Var_43 = ((MR_Word) ((MR_hl_field(1, ArgTerms_11, (MR_Integer) 0))));
    Var_49 = ((MR_Word) ((MR_hl_field(1, ArgTerms_11, (MR_Integer) 1))));
    succeeded = (Var_49 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_43)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_44 = ((MR_Word) ((MR_hl_field(0, Var_43, (MR_Integer) 0))));
        Var_46 = ((MR_Word) ((MR_hl_field(0, Var_43, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_45 = ((MR_String) ((MR_hl_field(0, Var_44, (MR_Integer) 0))));
          succeeded = (strcmp(Var_45, (MR_String) "then") == 0);
          if (succeeded)
          {
            succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              CondGoalTerm_18 = ((MR_Word) ((MR_hl_field(1, Var_46, (MR_Integer) 0))));
              Var_47 = ((MR_Word) ((MR_hl_field(1, Var_46, (MR_Integer) 1))));
              succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ThenGoalTerm_19 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 0))));
                Var_48 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 1))));
                succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word MaybeVarsCondGoal_22;
    MR_Word MaybeThenGoal_23;
    MR_Word Var1_88;
    MR_Word MaybeThen1_89;
    MR_Word Var2_90;
    MR_Word STATE_VARIABLE_VarSet_35_96;
    MR_Word STATE_VARIABLE_Counter_36_97;
    MR_Word STATE_VARIABLE_VarSet_37_98;
    MR_Word STATE_VARIABLE_Counter_38_99;
    MR_Word TypeInfo_47_106;
    MR_Word Vars_25;
    MR_Word StateVars_26;
    MR_Word CondGoal_27;
    MR_Word CondWarningSpecs_28;
    MR_Word ThenGoal_29;
    MR_Word ThenWarningSpecs_30;

    parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0(CondGoalTerm_18, ContextPieces_13, &MaybeVarsCondGoal_22, STATE_VARIABLE_VarSet_0_37, &STATE_VARIABLE_VarSet_35_96, STATE_VARIABLE_Counter_0_39, &STATE_VARIABLE_Counter_36_97, STATE_VARIABLE_DCGVar_0_41, &Var1_88);
    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(ThenGoalTerm_19, ContextPieces_13, &MaybeThen1_89, STATE_VARIABLE_VarSet_35_96, &STATE_VARIABLE_VarSet_37_98, STATE_VARIABLE_Counter_36_97, &STATE_VARIABLE_Counter_38_99, Var1_88, &Var2_90);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (STATE_VARIABLE_DCGVar_0_41)), ((MR_Box) (Var1_88)));
    succeeded = !(succeeded);
    if (succeeded)
    {
      TypeInfo_47_106 = (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_106, ((MR_Box) (Var1_88)), ((MR_Box) (Var2_90)));
    }
    if (succeeded)
      if (((MR_tag((MR_Word) MaybeThen1_89)) == (MR_Integer) 0))
      {
        MaybeThenGoal_23 = MaybeThen1_89;
        *STATE_VARIABLE_DCGVar_42 = Var2_90;
        *STATE_VARIABLE_VarSet_38 = STATE_VARIABLE_VarSet_37_98;
        *STATE_VARIABLE_Counter_40 = STATE_VARIABLE_Counter_38_99;
      }
      else
      {
        MR_Word Then1_91 = ((MR_Word) ((MR_hl_field(1, MaybeThen1_89, (MR_Integer) 0))));
        MR_Word ThenWarningSpecs_92 = ((MR_Word) ((MR_hl_field(1, MaybeThen1_89, (MR_Integer) 1))));
        MR_Word Unify_93;
        MR_Word Then_94;
        MR_Word Var_100;
        MR_Word Var_101;
        MR_Word Var_103;

        parse_tree__parse_dcg_goal__new_dcg_var_5_p_0(STATE_VARIABLE_VarSet_37_98, STATE_VARIABLE_VarSet_38, STATE_VARIABLE_Counter_38_99, STATE_VARIABLE_Counter_40, STATE_VARIABLE_DCGVar_42);
        {
          Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_100, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_42));
          MR_hl_field(1, Var_100, 1) = ((MR_Box) (Context_12));
        }
        {
          Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var2_90));
          MR_hl_field(1, Var_101, 1) = ((MR_Box) (Context_12));
        }
        {
          Unify_93 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Unify_93, 0) = ((MR_Box) (Context_12));
          MR_hl_field(0, Unify_93, 1) = ((MR_Box) (Var_100));
          MR_hl_field(0, Unify_93, 2) = ((MR_Box) (Var_101));
          MR_hl_field(0, Unify_93, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_103, 0) = ((MR_Box) (Unify_93));
          MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Then_94 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Then_94, 0) = ((MR_Box) (Context_12));
          MR_hl_field(2, Then_94, 1) = ((MR_Box) (Then1_91));
          MR_hl_field(2, Then_94, 2) = ((MR_Box) (Var_103));
        }
        {
          MaybeThenGoal_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeThenGoal_23, 0) = ((MR_Box) (Then_94));
          MR_hl_field(1, MaybeThenGoal_23, 1) = ((MR_Box) (ThenWarningSpecs_92));
        }
      }
    else
    {
      MaybeThenGoal_23 = MaybeThen1_89;
      *STATE_VARIABLE_DCGVar_42 = Var2_90;
      *STATE_VARIABLE_Counter_40 = STATE_VARIABLE_Counter_38_99;
      *STATE_VARIABLE_VarSet_38 = STATE_VARIABLE_VarSet_37_98;
    }
    succeeded = ((MR_tag((MR_Word) MaybeVarsCondGoal_22)) == (MR_Integer) 1);
    if (succeeded)
    {
      Vars_25 = ((MR_Word) ((MR_hl_field(1, MaybeVarsCondGoal_22, (MR_Integer) 0))));
      StateVars_26 = ((MR_Word) ((MR_hl_field(1, MaybeVarsCondGoal_22, (MR_Integer) 1))));
      CondGoal_27 = ((MR_Word) ((MR_hl_field(1, MaybeVarsCondGoal_22, (MR_Integer) 2))));
      CondWarningSpecs_28 = ((MR_Word) ((MR_hl_field(1, MaybeVarsCondGoal_22, (MR_Integer) 3))));
      succeeded = ((MR_tag((MR_Word) MaybeThenGoal_23)) == (MR_Integer) 1);
      if (succeeded)
      {
        ThenGoal_29 = ((MR_Word) ((MR_hl_field(1, MaybeThenGoal_23, (MR_Integer) 0))));
        ThenWarningSpecs_30 = ((MR_Word) ((MR_hl_field(1, MaybeThenGoal_23, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Word WarningSpecs_31;
      MR_Word ElseGoal_32;
      MR_Word Goal_33;

      WarningSpecs_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), CondWarningSpecs_28, ThenWarningSpecs_30);
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (*STATE_VARIABLE_DCGVar_42)), ((MR_Box) (STATE_VARIABLE_DCGVar_0_41)));
      if (succeeded)
        {
          ElseGoal_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ElseGoal_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, ElseGoal_32, 1) = ((MR_Box) (Context_12));
        }
      else
      {
        MR_Word Var_53;
        MR_Word Var_54;

        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_42));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) (Context_12));
        }
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (STATE_VARIABLE_DCGVar_0_41));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) (Context_12));
        }
        {
          ElseGoal_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ElseGoal_32, 0) = ((MR_Box) (Context_12));
          MR_hl_field(0, ElseGoal_32, 1) = ((MR_Box) (Var_53));
          MR_hl_field(0, ElseGoal_32, 2) = ((MR_Box) (Var_54));
          MR_hl_field(0, ElseGoal_32, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
      }
      {
        Goal_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Goal_33, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Goal_33, 1) = ((MR_Box) (Context_12));
        MR_hl_field(3, Goal_33, 2) = ((MR_Box) (Vars_25));
        MR_hl_field(3, Goal_33, 3) = ((MR_Box) (StateVars_26));
        MR_hl_field(3, Goal_33, 4) = ((MR_Box) (CondGoal_27));
        MR_hl_field(3, Goal_33, 5) = ((MR_Box) (ThenGoal_29));
        MR_hl_field(3, Goal_33, 6) = ((MR_Box) (ElseGoal_32));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_14 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_33));
        MR_hl_field(1, base, 1) = ((MR_Box) (WarningSpecs_31));
      }
    }
    else
    {
      MR_Word Specs_34;
      MR_Word Var_56;
      MR_Word Var_57;

      Var_56 = parse_tree__maybe_error__get_any_errors_warnings4_1_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[6]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[6]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeVarsCondGoal_22);
      Var_57 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeThenGoal_23);
      Specs_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_56, Var_57);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_14 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_34));
      }
    }
  }
  else
  {
    MR_Word Spec_36;
    MR_Word Var_81;

    {
      Spec_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_36, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_dcg_goal_if\'/10"));
      MR_hl_field(1, Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_36, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_36, 3) = ((MR_Box) (Context_12));
      MR_hl_field(1, Spec_36, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[31])));
    }
    {
      Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_81, 0) = ((MR_Box) (Spec_36));
      MR_hl_field(1, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_81));
    }
    *STATE_VARIABLE_DCGVar_42 = STATE_VARIABLE_DCGVar_0_41;
    *STATE_VARIABLE_Counter_40 = STATE_VARIABLE_Counter_0_39;
    *STATE_VARIABLE_VarSet_38 = STATE_VARIABLE_VarSet_0_37;
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_conj_11_p_1(
  MR_Word GoalKind_12,
  MR_Word ArgTerms_13,
  MR_Word Context_14,
  MR_Word ContextPieces_15,
  MR_Word * MaybeGoal_16,
  MR_Word STATE_VARIABLE_VarSet_0_33,
  MR_Word * STATE_VARIABLE_VarSet_34,
  MR_Word STATE_VARIABLE_Counter_0_35,
  MR_Word * STATE_VARIABLE_Counter_36,
  MR_Word STATE_VARIABLE_DCGVar_0_37,
  MR_Word * STATE_VARIABLE_DCGVar_38)
{
  MR_bool succeeded;
  MR_String Functor_20;
  MR_Word TermA_21;
  MR_Word TermB_22;
  MR_Word Var_39;
  MR_Word Var_40;

  parse_tree__parse_dcg_goal__string_dcg_goal_kind_2_p_1(&Functor_20, GoalKind_12);
  succeeded = (ArgTerms_13 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    TermA_21 = ((MR_Word) ((MR_hl_field(1, ArgTerms_13, (MR_Integer) 0))));
    Var_39 = ((MR_Word) ((MR_hl_field(1, ArgTerms_13, (MR_Integer) 1))));
    succeeded = (Var_39 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TermB_22 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 0))));
      Var_40 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 1))));
      succeeded = (Var_40 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word ConjunctsCord_23;
    MR_Word Warnings_24;
    MR_Word Errors_25;
    MR_Word Var_41;

    Var_41 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0));
    parse_tree__parse_dcg_goal__parse_dcg_goal_conjunction_17_p_0(Functor_20, TermA_21, TermB_22, Context_14, ContextPieces_15, Var_41, &ConjunctsCord_23, (MR_Word) ((MR_Unsigned) 0U), &Warnings_24, (MR_Word) ((MR_Unsigned) 0U), &Errors_25, STATE_VARIABLE_VarSet_0_33, STATE_VARIABLE_VarSet_34, STATE_VARIABLE_Counter_0_35, STATE_VARIABLE_Counter_36, STATE_VARIABLE_DCGVar_0_37, STATE_VARIABLE_DCGVar_38);
    if ((Errors_25 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Conjuncts_26;
      MR_Word ConjunctA_27;
      MR_Word ConjunctsB_28;
      MR_Word Goal_29;

      Conjuncts_26 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), ConjunctsCord_23);
      if ((Conjuncts_26 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_dcg_goal_conj\'/11", (MR_String) "no Conjuncts");
          return;
        }
      else
      {
        ConjunctA_27 = ((MR_Word) ((MR_hl_field(1, Conjuncts_26, (MR_Integer) 0))));
        ConjunctsB_28 = ((MR_Word) ((MR_hl_field(1, Conjuncts_26, (MR_Integer) 1))));
      }
      {
        Goal_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Goal_29, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Goal_29, 1) = ((MR_Box) (Context_14));
        MR_hl_field(3, Goal_29, 2) = ((MR_Box) (ConjunctA_27));
        MR_hl_field(3, Goal_29, 3) = ((MR_Box) (ConjunctsB_28));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_29));
        MR_hl_field(1, base, 1) = ((MR_Box) (Warnings_24));
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_16 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Errors_25));
      }
  }
  else
  {
    MR_Word Spec_32;
    MR_Word Var_49;

    Spec_32 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_15, Context_14, Functor_20);
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (Spec_32));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_49));
    }
    *STATE_VARIABLE_DCGVar_38 = STATE_VARIABLE_DCGVar_0_37;
    *STATE_VARIABLE_Counter_36 = STATE_VARIABLE_Counter_0_35;
    *STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_0_33;
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_conj_11_p_0(
  MR_Word GoalKind_12,
  MR_Word ArgTerms_13,
  MR_Word Context_14,
  MR_Word ContextPieces_15,
  MR_Word * MaybeGoal_16,
  MR_Word STATE_VARIABLE_VarSet_0_33,
  MR_Word * STATE_VARIABLE_VarSet_34,
  MR_Word STATE_VARIABLE_Counter_0_35,
  MR_Word * STATE_VARIABLE_Counter_36,
  MR_Word STATE_VARIABLE_DCGVar_0_37,
  MR_Word * STATE_VARIABLE_DCGVar_38)
{
  MR_bool succeeded;
  MR_String Functor_20;
  MR_Word TermA_21;
  MR_Word TermB_22;
  MR_Word Var_39;
  MR_Word Var_40;

  parse_tree__parse_dcg_goal__string_dcg_goal_kind_2_p_1(&Functor_20, GoalKind_12);
  succeeded = (ArgTerms_13 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    TermA_21 = ((MR_Word) ((MR_hl_field(1, ArgTerms_13, (MR_Integer) 0))));
    Var_39 = ((MR_Word) ((MR_hl_field(1, ArgTerms_13, (MR_Integer) 1))));
    succeeded = (Var_39 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TermB_22 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 0))));
      Var_40 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 1))));
      succeeded = (Var_40 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word ConjunctsCord_23;
    MR_Word Warnings_24;
    MR_Word Errors_25;
    MR_Word Var_41;

    Var_41 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0));
    parse_tree__parse_dcg_goal__parse_dcg_goal_conjunction_17_p_0(Functor_20, TermA_21, TermB_22, Context_14, ContextPieces_15, Var_41, &ConjunctsCord_23, (MR_Word) ((MR_Unsigned) 0U), &Warnings_24, (MR_Word) ((MR_Unsigned) 0U), &Errors_25, STATE_VARIABLE_VarSet_0_33, STATE_VARIABLE_VarSet_34, STATE_VARIABLE_Counter_0_35, STATE_VARIABLE_Counter_36, STATE_VARIABLE_DCGVar_0_37, STATE_VARIABLE_DCGVar_38);
    if ((Errors_25 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Conjuncts_26;
      MR_Word ConjunctA_27;
      MR_Word ConjunctsB_28;
      MR_Word Goal_29;

      Conjuncts_26 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), ConjunctsCord_23);
      if ((Conjuncts_26 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_dcg_goal_conj\'/11", (MR_String) "no Conjuncts");
          return;
        }
      else
      {
        ConjunctA_27 = ((MR_Word) ((MR_hl_field(1, Conjuncts_26, (MR_Integer) 0))));
        ConjunctsB_28 = ((MR_Word) ((MR_hl_field(1, Conjuncts_26, (MR_Integer) 1))));
      }
      {
        Goal_29 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Goal_29, 0) = ((MR_Box) (Context_14));
        MR_hl_field(2, Goal_29, 1) = ((MR_Box) (ConjunctA_27));
        MR_hl_field(2, Goal_29, 2) = ((MR_Box) (ConjunctsB_28));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_29));
        MR_hl_field(1, base, 1) = ((MR_Box) (Warnings_24));
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_16 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Errors_25));
      }
  }
  else
  {
    MR_Word Spec_32;
    MR_Word Var_49;

    Spec_32 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_15, Context_14, Functor_20);
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (Spec_32));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_49));
    }
    *STATE_VARIABLE_DCGVar_38 = STATE_VARIABLE_DCGVar_0_37;
    *STATE_VARIABLE_Counter_36 = STATE_VARIABLE_Counter_0_35;
    *STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_0_33;
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_some_all_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_97;

  parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal_some_all__467__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_97);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_97));
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_some_all_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_91;

  parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal_some_all__466__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_91);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_91));
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_some_all_11_p_0(
  MR_Word GoalKind_12,
  MR_Word ArgTerms_13,
  MR_Word Context_14,
  MR_Word ContextPieces_15,
  MR_Word * MaybeGoal_16,
  MR_Word STATE_VARIABLE_VarSet_0_43,
  MR_Word * STATE_VARIABLE_VarSet_44,
  MR_Word STATE_VARIABLE_Counter_0_45,
  MR_Word * STATE_VARIABLE_Counter_46,
  MR_Word STATE_VARIABLE_DCGVar_0_47,
  MR_Word * STATE_VARIABLE_DCGVar_48)
{
  MR_bool succeeded;
  MR_Word QuantType_20;
  MR_Word VarsTailPieces_21;
  MR_Word QVarsTerm_22;
  MR_Word SubGoalTerm_23;
  MR_Word Var_71;
  MR_Word Var_72;

  switch (GoalKind_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 8:
      {
        QuantType_20 = (MR_Integer) 1;
        VarsTailPieces_21 = (MR_Word) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[14]));
      }
      break;
    case (MR_Integer) 7:
      {
        QuantType_20 = (MR_Integer) 0;
        VarsTailPieces_21 = (MR_Word) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[18]));
      }
      break;
  }
  succeeded = (ArgTerms_13 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    QVarsTerm_22 = ((MR_Word) ((MR_hl_field(1, ArgTerms_13, (MR_Integer) 0))));
    Var_71 = ((MR_Word) ((MR_hl_field(1, ArgTerms_13, (MR_Integer) 1))));
    succeeded = (Var_71 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalTerm_23 = ((MR_Word) ((MR_hl_field(1, Var_71, (MR_Integer) 0))));
      Var_72 = ((MR_Word) ((MR_hl_field(1, Var_71, (MR_Integer) 1))));
      succeeded = (Var_72 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word GenericVarSet_24;
    MR_Word VarsContextPieces_25;
    MR_Word MaybeVars_26;
    MR_Word MaybeSubGoal_27;
    MR_Word Var_73;
    MR_Word Vars0_28;
    MR_Word StateVars0_29;
    MR_Word SubGoal_30;
    MR_Word SubGoalWarningSpecs_31;
    MR_Word Var_77;

    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_43, &GenericVarSet_24);
    Var_73 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), VarsTailPieces_21);
    VarsContextPieces_25 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_15, Var_73);
    parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), QVarsTerm_22, GenericVarSet_24, VarsContextPieces_25, &MaybeVars_26);
    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_23, ContextPieces_15, &MaybeSubGoal_27, STATE_VARIABLE_VarSet_0_43, STATE_VARIABLE_VarSet_44, STATE_VARIABLE_Counter_0_45, STATE_VARIABLE_Counter_46, STATE_VARIABLE_DCGVar_0_47, STATE_VARIABLE_DCGVar_48);
    succeeded = ((MR_tag((MR_Word) MaybeVars_26)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_77 = ((MR_Word) ((MR_hl_field(1, MaybeVars_26, (MR_Integer) 0))));
      Vars0_28 = ((MR_Word) ((MR_hl_field(0, Var_77, (MR_Integer) 0))));
      StateVars0_29 = ((MR_Word) ((MR_hl_field(0, Var_77, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) MaybeSubGoal_27)) == (MR_Integer) 1);
      if (succeeded)
      {
        SubGoal_30 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_27, (MR_Integer) 0))));
        SubGoalWarningSpecs_31 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_27, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Word StateVars_32;
      MR_Word Vars_33;
      MR_Word Goal1_34;
      MR_Word Goal_37;

      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_2[2]), StateVars0_29, &StateVars_32);
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[2]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_2[3]), Vars0_28, &Vars_33);
      if ((StateVars_32 == (MR_Word) ((MR_Unsigned) 0U)))
        Goal1_34 = SubGoal_30;
      else
        {
          Goal1_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Goal1_34, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Goal1_34, 1) = (MR_Box) (((((MR_Unsigned) (QuantType_20) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
          MR_hl_field(3, Goal1_34, 2) = ((MR_Box) (Context_14));
          MR_hl_field(3, Goal1_34, 3) = ((MR_Box) (StateVars_32));
          MR_hl_field(3, Goal1_34, 4) = ((MR_Box) (SubGoal_30));
        }
      if ((Vars_33 == (MR_Word) ((MR_Unsigned) 0U)))
        Goal_37 = Goal1_34;
      else
        {
          Goal_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Goal_37, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Goal_37, 1) = (MR_Box) (((((MR_Unsigned) (QuantType_20) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
          MR_hl_field(3, Goal_37, 2) = ((MR_Box) (Context_14));
          MR_hl_field(3, Goal_37, 3) = ((MR_Box) (Vars_33));
          MR_hl_field(3, Goal_37, 4) = ((MR_Box) (Goal1_34));
        }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_37));
        MR_hl_field(1, base, 1) = ((MR_Box) (SubGoalWarningSpecs_31));
      }
    }
    else
    {
      MR_Word Specs_40;
      MR_Word Var_82;
      MR_Word Var_83;

      Var_82 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[4]), MaybeVars_26);
      Var_83 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_27);
      Specs_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_82, Var_83);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_16 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_40));
      }
    }
  }
  else
  {
    MR_String Functor_41;
    MR_Word Spec_42;
    MR_Word Var_85;

    parse_tree__parse_dcg_goal__string_dcg_goal_kind_2_p_1(&Functor_41, GoalKind_12);
    Spec_42 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_15, Context_14, (MR_String) "a list of variables", Functor_41);
    {
      Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_85, 0) = ((MR_Box) (Spec_42));
      MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_85));
    }
    *STATE_VARIABLE_DCGVar_48 = STATE_VARIABLE_DCGVar_0_47;
    *STATE_VARIABLE_Counter_46 = STATE_VARIABLE_Counter_0_45;
    *STATE_VARIABLE_VarSet_44 = STATE_VARIABLE_VarSet_0_43;
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_not_11_p_0(
  MR_Word GoalKind_12,
  MR_Word ArgTerms_13,
  MR_Word Context_14,
  MR_Word ContextPieces_15,
  MR_Word * MaybeGoal_16,
  MR_Word STATE_VARIABLE_VarSet_0_29,
  MR_Word * STATE_VARIABLE_VarSet_30,
  MR_Word STATE_VARIABLE_Counter_0_31,
  MR_Word * STATE_VARIABLE_Counter_32,
  MR_Word STATE_VARIABLE_DCGVar_0_33,
  MR_Word * STATE_VARIABLE_DCGVar_34)
{
  MR_bool succeeded = (ArgTerms_13 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word SubGoalTerm_20;
  MR_Word Var_35;

  if (succeeded)
  {
    SubGoalTerm_20 = ((MR_Word) ((MR_hl_field(1, ArgTerms_13, (MR_Integer) 0))));
    Var_35 = ((MR_Word) ((MR_hl_field(1, ArgTerms_13, (MR_Integer) 1))));
    succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word MaybeSubGoal_21;
    MR_Word Var_22;

    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_20, ContextPieces_15, &MaybeSubGoal_21, STATE_VARIABLE_VarSet_0_29, STATE_VARIABLE_VarSet_30, STATE_VARIABLE_Counter_0_31, STATE_VARIABLE_Counter_32, STATE_VARIABLE_DCGVar_0_33, &Var_22);
    if (((MR_tag((MR_Word) MaybeSubGoal_21)) == (MR_Integer) 0))
      *MaybeGoal_16 = MaybeSubGoal_21;
    else
    {
      MR_Word SubGoal_23 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_21, (MR_Integer) 0))));
      MR_Word GoalWarningSpecs_24 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_21, (MR_Integer) 1))));
      MR_Word Goal_25;

      {
        Goal_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Goal_25, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, Goal_25, 1) = ((MR_Box) (Context_14));
        MR_hl_field(3, Goal_25, 2) = ((MR_Box) (SubGoal_23));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_25));
        MR_hl_field(1, base, 1) = ((MR_Box) (GoalWarningSpecs_24));
      }
    }
  }
  else
  {
    MR_String Functor_27;
    MR_Word Spec_28;
    MR_Word Var_38;

    parse_tree__parse_dcg_goal__string_dcg_goal_kind_2_p_1(&Functor_27, GoalKind_12);
    Spec_28 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_15, Context_14, Functor_27);
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Spec_28));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_38));
    }
    *STATE_VARIABLE_Counter_32 = STATE_VARIABLE_Counter_0_31;
    *STATE_VARIABLE_VarSet_30 = STATE_VARIABLE_VarSet_0_29;
  }
  *STATE_VARIABLE_DCGVar_34 = STATE_VARIABLE_DCGVar_0_33;
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_promise_purity_11_p_0(
  MR_Word GoalKind_12,
  MR_Word ArgTerms_13,
  MR_Word Context_14,
  MR_Word ContextPieces_15,
  MR_Word * MaybeGoal_16,
  MR_Word STATE_VARIABLE_VarSet_0_29,
  MR_Word * STATE_VARIABLE_VarSet_30,
  MR_Word STATE_VARIABLE_Counter_0_31,
  MR_Word * STATE_VARIABLE_Counter_32,
  MR_Word STATE_VARIABLE_DCGVar_0_33,
  MR_Word * STATE_VARIABLE_DCGVar_34)
{
  MR_bool succeeded;
  MR_Word PromisedPurity_20;
  MR_Word SubGoalTerm_21;
  MR_Word Var_35;

  switch (GoalKind_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      PromisedPurity_20 = (MR_Integer) 2;
      break;
    case (MR_Integer) 4:
      PromisedPurity_20 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      PromisedPurity_20 = (MR_Integer) 1;
      break;
  }
  succeeded = (ArgTerms_13 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    SubGoalTerm_21 = ((MR_Word) ((MR_hl_field(1, ArgTerms_13, (MR_Integer) 0))));
    Var_35 = ((MR_Word) ((MR_hl_field(1, ArgTerms_13, (MR_Integer) 1))));
    succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word MaybeGoal0_22;

    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_21, ContextPieces_15, &MaybeGoal0_22, STATE_VARIABLE_VarSet_0_29, STATE_VARIABLE_VarSet_30, STATE_VARIABLE_Counter_0_31, STATE_VARIABLE_Counter_32, STATE_VARIABLE_DCGVar_0_33, STATE_VARIABLE_DCGVar_34);
    if (((MR_tag((MR_Word) MaybeGoal0_22)) == (MR_Integer) 0))
      *MaybeGoal_16 = MaybeGoal0_22;
    else
    {
      MR_Word Goal0_23 = ((MR_Word) ((MR_hl_field(1, MaybeGoal0_22, (MR_Integer) 0))));
      MR_Word GoalWarningSpecs_24 = ((MR_Word) ((MR_hl_field(1, MaybeGoal0_22, (MR_Integer) 1))));
      MR_Word Goal_25;

      {
        Goal_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Goal_25, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(3, Goal_25, 1) = ((MR_Box) (Context_14));
        MR_hl_field(3, Goal_25, 2) = (MR_Box) ((MR_Unsigned) (PromisedPurity_20));
        MR_hl_field(3, Goal_25, 3) = ((MR_Box) (Goal0_23));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_25));
        MR_hl_field(1, base, 1) = ((MR_Box) (GoalWarningSpecs_24));
      }
    }
  }
  else
  {
    MR_String Functor_27;
    MR_Word Spec_28;
    MR_Word Var_39;

    parse_tree__parse_dcg_goal__string_dcg_goal_kind_2_p_1(&Functor_27, GoalKind_12);
    Spec_28 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_15, Context_14, Functor_27);
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (Spec_28));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_39));
    }
    *STATE_VARIABLE_DCGVar_34 = STATE_VARIABLE_DCGVar_0_33;
    *STATE_VARIABLE_Counter_32 = STATE_VARIABLE_Counter_0_31;
    *STATE_VARIABLE_VarSet_30 = STATE_VARIABLE_VarSet_0_29;
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_impure_semipure_11_p_0(
  MR_Word GoalKind_12,
  MR_Word ArgTerms_13,
  MR_Word Context_14,
  MR_Word ContextPieces_15,
  MR_Word * MaybeGoal_16,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26,
  MR_Word STATE_VARIABLE_Counter_0_27,
  MR_Word * STATE_VARIABLE_Counter_28,
  MR_Word STATE_VARIABLE_DCGVar_0_29,
  MR_Word * STATE_VARIABLE_DCGVar_30)
{
  MR_bool succeeded;
  MR_Word Purity_20;
  MR_Word SubGoalTerm_21;
  MR_Word Var_31;

  switch (GoalKind_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Purity_20 = (MR_Integer) 2;
      break;
    case (MR_Integer) 1:
      Purity_20 = (MR_Integer) 1;
      break;
  }
  succeeded = (ArgTerms_13 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    SubGoalTerm_21 = ((MR_Word) ((MR_hl_field(1, ArgTerms_13, (MR_Integer) 0))));
    Var_31 = ((MR_Word) ((MR_hl_field(1, ArgTerms_13, (MR_Integer) 1))));
    succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word MaybeGoal0_22;

    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(SubGoalTerm_21, ContextPieces_15, &MaybeGoal0_22, STATE_VARIABLE_VarSet_0_25, STATE_VARIABLE_VarSet_26, STATE_VARIABLE_Counter_0_27, STATE_VARIABLE_Counter_28, STATE_VARIABLE_DCGVar_0_29, STATE_VARIABLE_DCGVar_30);
    parse_tree__parse_goal__apply_purity_marker_to_maybe_goal_4_p_0(SubGoalTerm_21, Purity_20, MaybeGoal0_22, MaybeGoal_16);
  }
  else
  {
    MR_String Functor_23;
    MR_Word Spec_24;
    MR_Word Var_35;

    parse_tree__parse_dcg_goal__string_dcg_goal_kind_2_p_1(&Functor_23, GoalKind_12);
    Spec_24 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_15, Context_14, Functor_23);
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (Spec_24));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_35));
    }
    *STATE_VARIABLE_DCGVar_30 = STATE_VARIABLE_DCGVar_0_29;
    *STATE_VARIABLE_Counter_28 = STATE_VARIABLE_Counter_0_27;
    *STATE_VARIABLE_VarSet_26 = STATE_VARIABLE_VarSet_0_25;
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_100_99_103_95_103_111_97_108_95_99_111_108_111_110_95_101_113_117_97_108_95_95_91_51_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_47;

  parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal_colon_equal__1019__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_47);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_47));
}

static void MR_CALL 
parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_100_99_103_95_103_111_97_108_95_99_111_108_111_110_95_101_113_117_97_108_95_95_91_51_93_95_48_10_p_0(
  MR_Word ArgTerms_11,
  MR_Word Context_12,
  MR_Word * MaybeGoal_14,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26,
  MR_Word STATE_VARIABLE_Counter_0_27,
  MR_Word * STATE_VARIABLE_Counter_28,
  MR_Word STATE_VARIABLE_DCGVar_0_29,
  MR_Word * STATE_VARIABLE_DCGVar_30)
{
  MR_bool succeeded = (ArgTerms_11 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word ArgTerm0_18;
  MR_Word Var_31;

  if (succeeded)
  {
    ArgTerm0_18 = ((MR_Word) ((MR_hl_field(1, ArgTerms_11, (MR_Integer) 0))));
    Var_31 = ((MR_Word) ((MR_hl_field(1, ArgTerms_11, (MR_Integer) 1))));
    succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word ArgTerm_20;
    MR_Word OutVarTerm_21;
    MR_Word Goal_22;
    MR_Integer N_52;
    MR_String VarName_53;
    MR_String Var_59;

    mercury__counter__allocate_3_p_0(&N_52, STATE_VARIABLE_Counter_0_27, STATE_VARIABLE_Counter_28);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[4]), N_52, &Var_59);
    VarName_53 = mercury__string__f_43_43_2_f_0((MR_String) "DCG_", Var_59);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarName_53, STATE_VARIABLE_DCGVar_30, STATE_VARIABLE_VarSet_0_25, STATE_VARIABLE_VarSet_26);
    mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgTerm0_18, &ArgTerm_20);
    {
      OutVarTerm_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, OutVarTerm_21, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_30));
      MR_hl_field(1, OutVarTerm_21, 1) = ((MR_Box) (Context_12));
    }
    {
      Goal_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_22, 0) = ((MR_Box) (Context_12));
      MR_hl_field(0, Goal_22, 1) = ((MR_Box) (ArgTerm_20));
      MR_hl_field(0, Goal_22, 2) = ((MR_Box) (OutVarTerm_21));
      MR_hl_field(0, Goal_22, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MaybeGoal_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_22));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_Word ProgArgTerms_24;
    MR_Word Goal_43;
    MR_Word ArgTerms_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Integer N_77;
    MR_String VarName_78;
    MR_String Var_84;

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_2[1]), ArgTerms_11, &ProgArgTerms_24);
    mercury__counter__allocate_3_p_0(&N_77, STATE_VARIABLE_Counter_0_27, STATE_VARIABLE_Counter_28);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[4]), N_77, &Var_84);
    VarName_78 = mercury__string__f_43_43_2_f_0((MR_String) "DCG_", Var_84);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarName_78, STATE_VARIABLE_DCGVar_30, STATE_VARIABLE_VarSet_0_25, STATE_VARIABLE_VarSet_26);
    {
      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_71, 0) = ((MR_Box) (STATE_VARIABLE_DCGVar_0_29));
      MR_hl_field(1, Var_71, 1) = ((MR_Box) (Context_12));
    }
    {
      Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_73, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_30));
      MR_hl_field(1, Var_73, 1) = ((MR_Box) (Context_12));
    }
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_72));
    }
    ArgTerms_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[1]), ProgArgTerms_24, Var_70);
    {
      Goal_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Goal_43, 0) = ((MR_Box) (Context_12));
      MR_hl_field(1, Goal_43, 1) = ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_3[2]));
      MR_hl_field(1, Goal_43, 2) = ((MR_Box) (ArgTerms_69));
      MR_hl_field(1, Goal_43, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MaybeGoal_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_43));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_100_99_103_95_103_111_97_108_95_99_111_110_115_95_95_91_51_93_95_48_10_p_0(
  MR_Word ArgTerms_11,
  MR_Word Context_12,
  MR_Word * MaybeGoal_14,
  MR_Word STATE_VARIABLE_VarSet_0_29,
  MR_Word * STATE_VARIABLE_VarSet_30,
  MR_Word STATE_VARIABLE_Counter_0_31,
  MR_Word * STATE_VARIABLE_Counter_32,
  MR_Word STATE_VARIABLE_DCGVar_0_33,
  MR_Word * STATE_VARIABLE_DCGVar_34)
{
  MR_bool succeeded = (ArgTerms_11 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Var_35;
  MR_Word Var_36;

  if (succeeded)
  {
    Var_35 = ((MR_Word) ((MR_hl_field(1, ArgTerms_11, (MR_Integer) 1))));
    succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_36 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 1))));
      succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word ConsTerm0_22;
    MR_Word ConsTerm_23;
    MR_Word OutVarTerm_24;
    MR_Integer N_96;
    MR_String VarName_97;
    MR_String Var_103;
    MR_Word Term_25;

    mercury__counter__allocate_3_p_0(&N_96, STATE_VARIABLE_Counter_0_31, STATE_VARIABLE_Counter_32);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[4]), N_96, &Var_103);
    VarName_97 = mercury__string__f_43_43_2_f_0((MR_String) "DCG_", Var_103);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarName_97, STATE_VARIABLE_DCGVar_34, STATE_VARIABLE_VarSet_0_29, STATE_VARIABLE_VarSet_30);
    {
      ConsTerm0_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ConsTerm0_22, 0) = ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_3[1]));
      MR_hl_field(0, ConsTerm0_22, 1) = ((MR_Box) (ArgTerms_11));
      MR_hl_field(0, ConsTerm0_22, 2) = ((MR_Box) (Context_12));
    }
    mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsTerm0_22, &ConsTerm_23);
    {
      OutVarTerm_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, OutVarTerm_24, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_34));
      MR_hl_field(1, OutVarTerm_24, 1) = ((MR_Box) (Context_12));
    }
    succeeded = parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(ConsTerm_23, OutVarTerm_24, &Term_25);
    if (succeeded)
    {
      MR_Word Goal_26;
      MR_Word Var_45;

      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (STATE_VARIABLE_DCGVar_0_33));
        MR_hl_field(1, Var_45, 1) = ((MR_Box) (Context_12));
      }
      {
        Goal_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Goal_26, 0) = ((MR_Box) (Context_12));
        MR_hl_field(0, Goal_26, 1) = ((MR_Box) (Var_45));
        MR_hl_field(0, Goal_26, 2) = ((MR_Box) (Term_25));
        MR_hl_field(0, Goal_26, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_14 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_26));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word Spec_28;
      MR_Word Var_62;

      {
        Spec_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_dcg_goal_cons\'/10"));
        MR_hl_field(1, Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_28, 3) = ((MR_Box) (Context_12));
        MR_hl_field(1, Spec_28, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[53])));
      }
      {
        Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_62, 0) = ((MR_Box) (Spec_28));
        MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_14 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_62));
      }
    }
  }
  else
  {
    MR_Word Var_90;
    MR_Word Spec_93;

    {
      Spec_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_93, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_dcg_goal_cons\'/10"));
      MR_hl_field(1, Spec_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_93, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_93, 3) = ((MR_Box) (Context_12));
      MR_hl_field(1, Spec_93, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[63])));
    }
    {
      Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_90, 0) = ((MR_Box) (Spec_93));
      MR_hl_field(1, Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_90));
    }
    *STATE_VARIABLE_DCGVar_34 = STATE_VARIABLE_DCGVar_0_33;
    *STATE_VARIABLE_Counter_32 = STATE_VARIABLE_Counter_0_31;
    *STATE_VARIABLE_VarSet_30 = STATE_VARIABLE_VarSet_0_29;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
  MR_Word List0_4,
  MR_Word Term_5,
  MR_Word * List_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) List0_4)) == (MR_Integer) 0);
  MR_Word Var_12;
  MR_String Var_13;
  MR_Word Var_14;

  if (succeeded)
  {
    Var_12 = ((MR_Word) ((MR_hl_field(0, List0_4, (MR_Integer) 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(0, List0_4, (MR_Integer) 1))));
    succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_13 = ((MR_String) ((MR_hl_field(0, Var_12, (MR_Integer) 0))));
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
      Var_15 = ((MR_Word) ((MR_hl_field(0, List0_4, (MR_Integer) 0))));
      Var_17 = ((MR_Word) ((MR_hl_field(0, List0_4, (MR_Integer) 1))));
      Context_10 = ((MR_Word) ((MR_hl_field(0, List0_4, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_16 = ((MR_String) ((MR_hl_field(0, Var_15, (MR_Integer) 0))));
        succeeded = (strcmp(Var_16, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Var_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Head_8 = ((MR_Word) ((MR_hl_field(1, Var_17, (MR_Integer) 0))));
            Var_18 = ((MR_Word) ((MR_hl_field(1, Var_17, (MR_Integer) 1))));
            succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Tail0_9 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 0))));
              Var_19 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 1))));
              succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(Tail0_9, Term_5, &Tail_11);
                if (succeeded)
                {
                  Var_20 = (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[1]);
                  Var_24 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Tail_11));
                    MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_24));
                  }
                  {
                    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Head_8));
                    MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_23));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    *List_6 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Var_20));
                    MR_hl_field(0, base, 1) = ((MR_Box) (Var_22));
                    MR_hl_field(0, base, 2) = ((MR_Box) (Context_10));
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

static void MR_CALL 
parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_100_99_103_95_103_111_97_108_95_110_105_108_95_95_91_51_93_95_48_10_p_0(
  MR_Word ArgTerms_11,
  MR_Word Context_12,
  MR_Word * MaybeGoal_14,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26,
  MR_Word STATE_VARIABLE_Counter_0_27,
  MR_Word * STATE_VARIABLE_Counter_28,
  MR_Word STATE_VARIABLE_DCGVar_0_29,
  MR_Word * STATE_VARIABLE_DCGVar_30)
{
  if ((ArgTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Goal_20;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Integer N_66;
    MR_String VarName_67;
    MR_String Var_73;

    mercury__counter__allocate_3_p_0(&N_66, STATE_VARIABLE_Counter_0_27, STATE_VARIABLE_Counter_28);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[4]), N_66, &Var_73);
    VarName_67 = mercury__string__f_43_43_2_f_0((MR_String) "DCG_", Var_73);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarName_67, STATE_VARIABLE_DCGVar_30, STATE_VARIABLE_VarSet_0_25, STATE_VARIABLE_VarSet_26);
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (STATE_VARIABLE_DCGVar_0_29));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (Context_12));
    }
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (*STATE_VARIABLE_DCGVar_30));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) (Context_12));
    }
    {
      Goal_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_20, 0) = ((MR_Box) (Context_12));
      MR_hl_field(0, Goal_20, 1) = ((MR_Box) (Var_34));
      MR_hl_field(0, Goal_20, 2) = ((MR_Box) (Var_35));
      MR_hl_field(0, Goal_20, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MaybeGoal_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_20));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_Word Spec_24;
    MR_Word Var_64;

    {
      Spec_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_dcg_goal_nil\'/10"));
      MR_hl_field(1, Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_24, 3) = ((MR_Box) (Context_12));
      MR_hl_field(1, Spec_24, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[48])));
    }
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (Spec_24));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_64));
    }
    *STATE_VARIABLE_VarSet_26 = STATE_VARIABLE_VarSet_0_25;
    *STATE_VARIABLE_Counter_28 = STATE_VARIABLE_Counter_0_27;
    *STATE_VARIABLE_DCGVar_30 = STATE_VARIABLE_DCGVar_0_29;
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_equal_10_p_0(
  MR_Word ArgTerms_11,
  MR_Word Context_12,
  MR_Word ContextPieces_13,
  MR_Word * MaybeGoal_14,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Word STATE_VARIABLE_Counter_0_25,
  MR_Word * STATE_VARIABLE_Counter_26,
  MR_Word STATE_VARIABLE_DCGVar_0_27,
  MR_Word * STATE_VARIABLE_DCGVar_28)
{
  MR_bool succeeded = (ArgTerms_11 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word ArgTerm0_18;
  MR_Word Var_29;

  if (succeeded)
  {
    ArgTerm0_18 = ((MR_Word) ((MR_hl_field(1, ArgTerms_11, (MR_Integer) 0))));
    Var_29 = ((MR_Word) ((MR_hl_field(1, ArgTerms_11, (MR_Integer) 1))));
    succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word ArgTerm_19;
    MR_Word DCGVarTerm_20;
    MR_Word Goal_21;

    mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgTerm0_18, &ArgTerm_19);
    {
      DCGVarTerm_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, DCGVarTerm_20, 0) = ((MR_Box) (STATE_VARIABLE_DCGVar_0_27));
      MR_hl_field(1, DCGVarTerm_20, 1) = ((MR_Box) (Context_12));
    }
    {
      Goal_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_21, 0) = ((MR_Box) (Context_12));
      MR_hl_field(0, Goal_21, 1) = ((MR_Box) (ArgTerm_19));
      MR_hl_field(0, Goal_21, 2) = ((MR_Box) (DCGVarTerm_20));
      MR_hl_field(0, Goal_21, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MaybeGoal_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_21));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_Word Spec_22;
    MR_Word Var_33;

    Spec_22 = parse_tree__parse_goal__should_have_two_terms_infix_3_f_0(ContextPieces_13, Context_12, (MR_String) "=");
    {
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (Spec_22));
      MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_33));
    }
  }
  *STATE_VARIABLE_DCGVar_28 = STATE_VARIABLE_DCGVar_0_27;
  *STATE_VARIABLE_Counter_26 = STATE_VARIABLE_Counter_0_25;
  *STATE_VARIABLE_VarSet_24 = STATE_VARIABLE_VarSet_0_23;
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_braces_10_p_0(
  MR_Word ArgTerms_11,
  MR_Word Context_12,
  MR_Word ContextPieces_13,
  MR_Word * MaybeGoal_14,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Word STATE_VARIABLE_Counter_0_25,
  MR_Word * STATE_VARIABLE_Counter_26,
  MR_Word STATE_VARIABLE_DCGVar_0_27,
  MR_Word * STATE_VARIABLE_DCGVar_28)
{
  if ((ArgTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Spec_19;
    MR_Word Var_40;

    {
      Spec_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_dcg_goal.parse_dcg_goal_braces\'/10"));
      MR_hl_field(1, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_19, 3) = ((MR_Box) (Context_12));
      MR_hl_field(1, Spec_19, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_dcg_goal_scalar_common_1[35])));
    }
    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) (Spec_19));
      MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_40));
    }
    *STATE_VARIABLE_VarSet_24 = STATE_VARIABLE_VarSet_0_23;
  }
  else
  {
    MR_Word HeadTerm_20 = ((MR_Word) ((MR_hl_field(1, ArgTerms_11, (MR_Integer) 0))));
    MR_Word TailTerm_21 = ((MR_Word) ((MR_hl_field(1, ArgTerms_11, (MR_Integer) 1))));
    MR_Word SubGoal_22;
    MR_Word Var_42;

    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_42, 0) = ((MR_Box) (HeadTerm_20));
      MR_hl_field(0, Var_42, 1) = ((MR_Box) (TailTerm_21));
    }
    parse_tree__parse_util__one_or_more_to_conjunction_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Context_12, Var_42, &SubGoal_22);
    parse_tree__parse_goal__parse_goal_5_p_0(SubGoal_22, ContextPieces_13, MaybeGoal_14, STATE_VARIABLE_VarSet_0_23, STATE_VARIABLE_VarSet_24);
  }
  *STATE_VARIABLE_DCGVar_28 = STATE_VARIABLE_DCGVar_0_27;
  *STATE_VARIABLE_Counter_26 = STATE_VARIABLE_Counter_0_25;
}

static void MR_CALL 
parse_tree__parse_dcg_goal__new_dcg_var_5_p_0(
  MR_Word STATE_VARIABLE_VarSet_0_11,
  MR_Word * STATE_VARIABLE_VarSet_12,
  MR_Word STATE_VARIABLE_Counter_0_13,
  MR_Word * STATE_VARIABLE_Counter_14,
  MR_Word * DCGVar_8)
{
  MR_Integer N_9;
  MR_String VarName_10;
  MR_String Var_21;

  mercury__counter__allocate_3_p_0(&N_9, STATE_VARIABLE_Counter_0_13, STATE_VARIABLE_Counter_14);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_3[4]), N_9, &Var_21);
  VarName_10 = mercury__string__f_43_43_2_f_0((MR_String) "DCG_", Var_21);
  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarName_10, DCGVar_8, STATE_VARIABLE_VarSet_0_11, STATE_VARIABLE_VarSet_12);
}

static void MR_CALL 
parse_tree__parse_dcg_goal__bring_disjuncts_up_to_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Disjuncts_0_5,
  MR_Word * STATE_VARIABLE_Disjuncts_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Disjuncts_6 = STATE_VARIABLE_Disjuncts_0_5;
    else
    {
      MR_Word RevDisjunctDCGVar_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word RevDisjunctsDCGVars_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Disjuncts_21_21;
      MR_Word Disjunct0_22 = ((MR_Word) ((MR_hl_field(0, RevDisjunctDCGVar_16, (MR_Integer) 0))));
      MR_Word DisjunctEndDCGVar_23 = ((MR_Word) ((MR_hl_field(0, RevDisjunctDCGVar_16, (MR_Integer) 1))));
      MR_Word Disjunct_24;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Disjuncts_0_5;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (DisjunctEndDCGVar_23)), ((MR_Box) (HeadVar__2_2)));
      if (succeeded)
        Disjunct_24 = Disjunct0_22;
      else
      {
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[3]), ((MR_Box) (DisjunctEndDCGVar_23)), ((MR_Box) (HeadVar__1_1)));
        if (succeeded)
        {
          MR_Word Unify_25;
          MR_Word Var_26;
          MR_Word Var_27;
          MR_Word Var_29;

          {
            Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_26, 0) = ((MR_Box) (HeadVar__2_2));
            MR_hl_field(1, Var_26, 1) = ((MR_Box) (HeadVar__3_3));
          }
          {
            Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_27, 0) = ((MR_Box) (HeadVar__1_1));
            MR_hl_field(1, Var_27, 1) = ((MR_Box) (HeadVar__3_3));
          }
          {
            Unify_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Unify_25, 0) = ((MR_Box) (HeadVar__3_3));
            MR_hl_field(0, Unify_25, 1) = ((MR_Box) (Var_26));
            MR_hl_field(0, Unify_25, 2) = ((MR_Box) (Var_27));
            MR_hl_field(0, Unify_25, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          {
            Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_29, 0) = ((MR_Box) (Unify_25));
            MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Disjunct_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Disjunct_24, 0) = ((MR_Box) (HeadVar__3_3));
            MR_hl_field(2, Disjunct_24, 1) = ((MR_Box) (Disjunct0_22));
            MR_hl_field(2, Disjunct_24, 2) = ((MR_Box) (Var_29));
          }
        }
        else
          parse_tree__prog_util__rename_in_goal_4_p_0(DisjunctEndDCGVar_23, HeadVar__2_2, Disjunct0_22, &Disjunct_24);
      }
      {
        STATE_VARIABLE_Disjuncts_21_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Disjuncts_21_21, 0) = ((MR_Box) (Disjunct_24));
        MR_hl_field(1, STATE_VARIABLE_Disjuncts_21_21, 1) = ((MR_Box) (STATE_VARIABLE_Disjuncts_0_5));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = RevDisjunctsDCGVars_17;
      next_value_of_STATE_VARIABLE_Disjuncts_0_5 = STATE_VARIABLE_Disjuncts_21_21;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_Disjuncts_0_5 = next_value_of_STATE_VARIABLE_Disjuncts_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__append_disjunct_dcg_var_to_cord_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_DisjunctsDCGVarsCord_13;

  parse_tree__parse_dcg_goal__append_disjunct_dcg_var_to_cord_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DisjunctsDCGVarsCord_13);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DisjunctsDCGVarsCord_13));
}

static void MR_CALL 
parse_tree__parse_dcg_goal__append_disjunct_dcg_var_to_cord_4_p_0(
  MR_Word DCGVar_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_DisjunctsDCGVarsCord_0_12,
  MR_Word * STATE_VARIABLE_DisjunctsDCGVarsCord_13)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) Goal_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Goal_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
  MR_Word Disjunct1_9;
  MR_Word Disjunct2_10;
  MR_Word Disjuncts3plus_11;

  if (succeeded)
  {
    Disjunct1_9 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 2))));
    Disjunct2_10 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 3))));
    Disjuncts3plus_11 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 4))));
    {
      MR_Word STATE_VARIABLE_DisjunctsDCGVarsCord_14_14;
      MR_Word STATE_VARIABLE_DisjunctsDCGVarsCord_15_15;
      MR_Word Var_16;
      MR_Box conv1_STATE_VARIABLE_DisjunctsDCGVarsCord_13;

      parse_tree__parse_dcg_goal__append_disjunct_dcg_var_to_cord_4_p_0(DCGVar_5, Disjunct1_9, STATE_VARIABLE_DisjunctsDCGVarsCord_0_12, &STATE_VARIABLE_DisjunctsDCGVarsCord_14_14);
      parse_tree__parse_dcg_goal__append_disjunct_dcg_var_to_cord_4_p_0(DCGVar_5, Disjunct2_10, STATE_VARIABLE_DisjunctsDCGVarsCord_14_14, &STATE_VARIABLE_DisjunctsDCGVarsCord_15_15);
      {
        Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_16, 0) = ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_5[0]));
        MR_hl_field(0, Var_16, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__append_disjunct_dcg_var_to_cord_4_p_0_1));
        MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_16, 3) = ((MR_Box) (DCGVar_5));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_1[5]), Var_16, Disjuncts3plus_11, ((MR_Box) (STATE_VARIABLE_DisjunctsDCGVarsCord_15_15)), &conv1_STATE_VARIABLE_DisjunctsDCGVarsCord_13);
      *STATE_VARIABLE_DisjunctsDCGVarsCord_13 = ((MR_Word) (conv1_STATE_VARIABLE_DisjunctsDCGVarsCord_13));
    }
  }
  else
  {
    MR_Word Var_18;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_18, 0) = ((MR_Box) (Goal_6));
      MR_hl_field(0, Var_18, 1) = ((MR_Box) (DCGVar_5));
    }
    mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__parse_dcg_goal_scalar_common_2[0]), ((MR_Box) (Var_18)), STATE_VARIABLE_DisjunctsDCGVarsCord_0_12, STATE_VARIABLE_DisjunctsDCGVarsCord_13);
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__string_dcg_goal_kind_2_p_1(
  MR_String * Functor_3,
  MR_Word GoalKind_4)
{
  *Functor_3 = ((&parse_tree__parse_dcg_goal_vector_common_4[0 + GoalKind_4]))->parse_tree__parse_dcg_goal__vector_common_type_4_0__vct_4_f_0;
}

static MR_bool MR_CALL 
parse_tree__parse_dcg_goal____Unify____dcg_goal_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_dcg_goal____Unify____dcg_goal_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_dcg_goal____Compare____dcg_goal_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_dcg_goal____Compare____dcg_goal_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__parse_dcg_goal__init(void)
{
}

void mercury__parse_tree__parse_dcg_goal__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_dcg_goal__parse_tree__parse_dcg_goal__type_ctor_info_dcg_goal_kind_0);
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
