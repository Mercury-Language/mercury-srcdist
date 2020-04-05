/*
** Automatically generated from `parse_goal.m'
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


// :- module parse_tree.parse_goal.
// :- implementation.

/*
INIT mercury__parse_tree__parse_goal__init
ENDINIT
*/

#include "parse_tree.parse_goal.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
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
#include "solutions.mih"
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
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_vars.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"



struct parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0_s {
  MR_Box * parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0__wrapper_arg_1;
  MR_Cont parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0__cont;
  void * parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0__cont_env_ptr;
  MR_String parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0__conv0_HeadVar__1_1;
};


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_goal__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_goal__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_goal__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_trace_compiletime_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_goal__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_trace_runtime_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_goal__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo parse_tree__parse_goal__parse_tree__parse_goal__field_types_atomic_component_0_0[1];

static const MR_DuFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_atomic_component_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_goal__parse_tree__parse_goal__field_types_atomic_component_0_1[1];

static const MR_DuFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_atomic_component_0_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_goal__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo parse_tree__parse_goal__parse_tree__parse_goal__field_types_atomic_component_0_2[1];

static const MR_DuFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_atomic_component_0_2;

static const MR_DuFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_atomic_component_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_atomic_component_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_atomic_component_0_2[1];

static const MR_DuPtagLayout parse_tree__parse_goal__parse_tree__parse_goal__du_ptag_ordered_atomic_component_0[3];

static const MR_DuFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__du_name_ordered_atomic_component_0[3];

static const MR_Integer parse_tree__parse_goal__parse_tree__parse_goal__functor_number_map_atomic_component_0[3];

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_goal__parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_compiletime_0;

static const MR_PseudoTypeInfo parse_tree__parse_goal__parse_tree__parse_goal__field_types_trace_component_0_0[1];

static const MR_DuFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_trace_component_0_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_goal__parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0;

static const MR_PseudoTypeInfo parse_tree__parse_goal__parse_tree__parse_goal__field_types_trace_component_0_1[1];

static const MR_DuFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_trace_component_0_1;

static const MR_PseudoTypeInfo parse_tree__parse_goal__parse_tree__parse_goal__field_types_trace_component_0_2[1];

static const MR_DuFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_trace_component_0_2;

static const MR_PseudoTypeInfo parse_tree__parse_goal__parse_tree__parse_goal__field_types_trace_component_0_3[1];

static const MR_DuFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_trace_component_0_3;

static const MR_DuFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_trace_component_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_trace_component_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_trace_component_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_trace_component_0_3[1];

static const MR_DuPtagLayout parse_tree__parse_goal__parse_tree__parse_goal__du_ptag_ordered_trace_component_0[4];

static const MR_DuFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__du_name_ordered_trace_component_0[4];

static const MR_Integer parse_tree__parse_goal__parse_tree__parse_goal__functor_number_map_trace_component_0[4];

static const MR_Integer parse_tree__parse_goal__parse_tree__parse_goal__functor_number_map_try_component_0[1];

static const MR_NotagFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__notag_functor_desc_try_component_0;

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_atomic_component__2421__1_2_p_0(
  MR_Word HeadVar__1_119,
  MR_Word * HeadVar__2_120);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__400__2_2_p_0(
  MR_Word HeadVar__1_2862,
  MR_Word * HeadVar__2_2863);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__399__2_2_p_0(
  MR_Word HeadVar__1_2856,
  MR_Word * HeadVar__2_2857);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__844__1_2_p_0(
  MR_Word HeadVar__1_1606,
  MR_Word * HeadVar__2_1607);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__843__1_2_p_0(
  MR_Word HeadVar__1_1602,
  MR_Word * HeadVar__2_1603);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__842__1_2_p_0(
  MR_Word HeadVar__1_1598,
  MR_Word * HeadVar__2_1599);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__841__1_2_p_0(
  MR_Word HeadVar__1_1592,
  MR_Word * HeadVar__2_1593);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__881__1_2_p_0(
  MR_Word HeadVar__1_1629,
  MR_Word * HeadVar__2_1630);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__880__1_2_p_0(
  MR_Word HeadVar__1_1625,
  MR_Word * HeadVar__2_1626);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__879__1_2_p_0(
  MR_Word HeadVar__1_1621,
  MR_Word * HeadVar__2_1622);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__878__1_2_p_0(
  MR_Word HeadVar__1_1615,
  MR_Word * HeadVar__2_1616);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__400__1_2_p_0(
  MR_Word HeadVar__1_1548,
  MR_Word * HeadVar__2_1549);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__399__1_2_p_0(
  MR_Word HeadVar__1_1542,
  MR_Word * HeadVar__2_1543);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__155__1_2_p_0(
  MR_Word HeadVar__1_63,
  MR_Word * HeadVar__2_64);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__154__1_2_p_0(
  MR_Word HeadVar__1_57,
  MR_Word * HeadVar__2_58);

static void MR_CALL 
parse_tree__parse_goal____Compare____try_component_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_goal____Unify____try_component_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_goal____Compare____trace_component_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_goal____Unify____trace_component_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_goal____Compare____atomic_component_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_goal____Unify____atomic_component_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__parse_goal__env_var_is_acceptable_char_1_p_0(
  MR_Char Char_2);

static MR_bool MR_CALL 
parse_tree__parse_goal__parse_trace_runtime_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_goal__parse_trace_runtime_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeRuntime_6);

static void MR_CALL 
parse_tree__parse_goal__parse_trace_compiletime_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
parse_tree__parse_goal__parse_trace_compiletime_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeCompiletime_6);

static void MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0(
  MR_String Functor_8,
  MR_Word Args_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_147,
  MR_Word * STATE_VARIABLE_VarSet_148);

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_101_108_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_52_93_95_48_8_p_0(
  MR_Word Term_9,
  MR_Word CatchExprs_10,
  MR_Word MaybeCatchAnyExpr_11,
  MR_Word ContextPieces_13,
  MR_Word * MaybeGoal_14,
  MR_Word STATE_VARIABLE_VarSet_0_30,
  MR_Word * STATE_VARIABLE_VarSet_31);

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_53_93_95_48_9_p_0(
  MR_Word ThenTryTerm_10,
  MR_Word MaybeElse_11,
  MR_Word CatchExprs_12,
  MR_Word MaybeCatchAnyExpr_13,
  MR_Word ContextPieces_15,
  MR_Word * MaybeGoal_16,
  MR_Word STATE_VARIABLE_VarSet_0_40,
  MR_Word * STATE_VARIABLE_VarSet_41);

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_97_116_99_104_95_97_114_114_111_119_95_116_101_114_109_95_95_91_50_93_95_48_6_p_0(
  MR_Word ArrowTerm_7,
  MR_Word ContextPieces_9,
  MR_Word * MaybeCatch_10,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24);

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_98_95_99_97_116_99_104_95_116_101_114_109_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word Term_7,
  MR_Word ContextPieces_9,
  MR_Word * MaybeCatches_10,
  MR_Word STATE_VARIABLE_VarSet_0_28,
  MR_Word * STATE_VARIABLE_VarSet_29);

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_97_116_99_104_95_97_110_121_95_116_101_114_109_95_95_91_50_93_95_48_6_p_0(
  MR_Word ArrowTerm_7,
  MR_Word ContextPieces_9,
  MR_Word * MaybeCatchAny_10,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26);

static void MR_CALL 
parse_tree__parse_goal__parse_atomic_subgoals_as_list_4_p_0(
  MR_Word Term_5,
  MR_Word * MaybeGoals_6,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24);

static void MR_CALL 
parse_tree__parse_goal__parse_atomic_subexpr_4_p_0(
  MR_Word Term_5,
  MR_Word * MaybeOoMSubGoals_6,
  MR_Word STATE_VARIABLE_VarSet_0_17,
  MR_Word * STATE_VARIABLE_VarSet_18);

static void MR_CALL 
parse_tree__parse_goal__parse_catch_then_try_term_args_7_p_0(
  MR_Word CatchTermArgs_8,
  MR_Word MaybeCatchAnyExpr_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26);

static void MR_CALL 
parse_tree__parse_goal__parse_some_vars_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__parse_some_vars_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_111_109_105_99_95_112_97_114_97_109_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word Term_6,
  MR_Word VarSet_7,
  MR_Word * MaybeComponentsContexts_8);

static void MR_CALL 
parse_tree__parse_goal__parse_atomic_component_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__parse_atomic_component_4_p_0(
  MR_Word ErrorTerm_5,
  MR_Word Term_6,
  MR_Word VarSet_7,
  MR_Word * MaybeComponentContext_8);

static void MR_CALL 
parse_tree__parse_goal__parse_atomic_subterm_4_p_0(
  MR_String Name_5,
  MR_Word ErrorTerm_6,
  MR_Word Term_7,
  MR_Word * MaybeComponentState_8);

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_112_97_114_97_109_115_95_95_91_50_93_95_48_4_p_0(
  MR_Word VarSet_5,
  MR_Word Term_7,
  MR_Word * MaybeComponentsContexts_8);

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_99_111_109_112_111_110_101_110_116_95_95_91_50_93_95_48_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_99_111_109_112_111_110_101_110_116_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_99_111_109_112_111_110_101_110_116_95_95_91_50_93_95_48_4_p_0(
  MR_Word VarSet_5,
  MR_Word Term_7,
  MR_Word * MaybeComponentContext_8);

static void MR_CALL 
parse_tree__parse_goal__parse_trace_tree_3_p_0(
  MR_Word TypeInfo_for_T_41,
  MR_Word BaseParser_4,
  MR_Word Term_5,
  MR_Word * MaybeTree_6);

static void MR_CALL 
parse_tree__parse_goal__convert_atomic_params_3_p_0(
  MR_Word ErrorTerm_4,
  MR_Word ComponentsContexts_5,
  MR_Word * MaybeParams_6);

static void MR_CALL 
parse_tree__parse_goal__convert_atomic_params_2_7_p_0(
  MR_Word Context_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * MaybeParams_7);

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_121_95_112_97_114_97_109_115_95_95_91_50_93_95_48_4_p_0(
  MR_Word VarSet_5,
  MR_Word Term_7,
  MR_Word * MaybeComponentsContexts_8);

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_121_95_112_97_114_97_109_95_95_91_50_93_95_48_4_p_0(
  MR_Word VarSet_5,
  MR_Word Term_7,
  MR_Word * MaybeComponentContext_8);

static void MR_CALL 
parse_tree__parse_goal__convert_try_params_2_p_0(
  MR_Word Components_3,
  MR_Word * MaybeParams_4);

static void MR_CALL 
parse_tree__parse_goal__convert_try_params_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * MaybeParams_4);

static void MR_CALL 
parse_tree__parse_goal__convert_trace_params_2_p_0(
  MR_Word Components_3,
  MR_Word * MaybeParams_4);

static void MR_CALL 
parse_tree__parse_goal__convert_trace_params_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * MaybeParams_7);

static void MR_CALL 
parse_tree__parse_goal__generate_warnings_for_duplicate_warnings_5_p_0(
  MR_Word Context_1,
  MR_Word ContextPieces_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
parse_tree__parse_goal__parse_warnings_6_p_0(
  MR_Word VarSet_7,
  MR_Word Term_8,
  MR_String ScopeFunctor_9,
  MR_Word ContextPieces_10,
  MR_Integer WarningNum_11,
  MR_Word * MaybeWarnings_12);

static void MR_CALL 
parse_tree__parse_goal__parse_warning_7_p_0(
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_String ScopeFunctor_10,
  MR_Word ContextPieces_11,
  MR_Integer WarningNum_12,
  MR_Word * Warnings_13,
  MR_Word * WarningSpecs_14);

static void MR_CALL 
parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(
  MR_Word PSDCVars_6,
  MR_Word Goal_7,
  MR_Word ContextPieces_8,
  MR_String ConstructName_9,
  MR_Word * MaybePODVar_10);

static MR_Word MR_CALL 
parse_tree__parse_goal__should_have_one_call_prefix_3_f_0(
  MR_Word ContextPieces_5,
  MR_Word Context_6,
  MR_String Functor_7);

static MR_Word MR_CALL 
parse_tree__parse_goal__should_have_no_args_3_f_0(
  MR_Word ContextPieces_5,
  MR_Word Context_6,
  MR_String Functor_7);

static MR_Word MR_CALL 
parse_tree__parse_goal__bad_purity_goal_3_f_0(
  MR_Word GoalTerm0_5,
  MR_Word Context_6,
  MR_Word Purity_7);

static MR_bool MR_CALL 
parse_tree__parse_goal____Unify____atomic_component_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal____Compare____atomic_component_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_goal____Unify____trace_component_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal____Compare____trace_component_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_goal____Unify____try_component_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal____Compare____try_component_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_1[384][2];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_2[20][3];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_3[9][1];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_5[2][6];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_6[1][5];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_7[2][4];


/* sealed */ struct parse_tree__parse_goal__vector_common_type_4_0_s {
  const MR_String parse_tree__parse_goal__vector_common_type_4_0__vct_4_f_0;
  const MR_Word parse_tree__parse_goal__vector_common_type_4_0__vct_4_f_1;
};

static /* final */ const struct parse_tree__parse_goal__vector_common_type_4_0_s parse_tree__parse_goal_vector_common_4[5];



static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_1[384][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_plain_state_vars_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_1[1]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_2[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_2[1]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_plain_state_dot_colon_vars_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_plain_state_dot_colon_vars_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_1[1]))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_2[2]))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_expr_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_expr_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_compiletime_0))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "some"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In first argument of"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should precede a single goal."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have two terms as arguments."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have two goals as arguments."))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and a goal."))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "all"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[16])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[33])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "variable -> goal"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and should be followed by an expression of the form"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "optional else-clause and zero or more catch clauses,"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a try expression, with a then-clause,"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "operator should be preceded by"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "catch_any"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[46])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the "))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[48])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must list at least one warning."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "scope"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "then"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[36])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[56])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "->"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[58])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "replace the"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[60])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: malformed if-then-else;"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[62])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "before the condition."))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "if"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[66])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and add an"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[68])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[70])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[72])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[73])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[74])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[75])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[76])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "( if goal then goal else goal )"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[36])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should occur in expressions of the form"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[79])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "operator"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[81])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "else"))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[83])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[85])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must not be qualified."))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the event name"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[88])))
  },
  /* row 91 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[90])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "impure or semipure."))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: an event cannot be"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[93])))
  },
  /* row 96 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[95])))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[36])))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[97])))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[98])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[100])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[101])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has no"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[97])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[104])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "this"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[105])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[107])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[56])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[109])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[110])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[111])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "clause."))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[114])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "clauses, and optionally by a single"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[115])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "catch"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[117])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which in turn may be followed by zero or more"))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[120]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[119])))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[121])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "else failure_goal"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[122])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "optionally followed by"))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[125]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[124])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[126])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "try [try_params] main_goal then success_goal"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[128]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[127])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or in an expression of the form"))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[130]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[129])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[131])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[132])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be used either in an expression of the form"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[133])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "operator,"))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[135])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[137])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[138])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have no arguments."))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should precede a call."))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[142]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may not contain a state variable pair."))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[144]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of a state variable."))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[146]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may not contain a reference to the next value"))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[148]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[147])))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may not contain more than one variable."))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[150]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must contain a variable."))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[152]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not a list."))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[154]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "so the compiler cannot act on it."))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[156]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not the name of a warning,"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[158]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[157])))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[159])))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the list of warnings to disable."))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[161]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of compile-time tests."))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[163]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which should be a boolean expression"))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[165]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[164])))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "takes exactly one argument,"))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[167]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[166])))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of run-time tests."))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[169]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[165]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[170])))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[167]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[171])))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be a state variable."))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[173]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which should be a state variable name."))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[167]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[176])))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the name of a mutable variable."))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[178]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be"))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[180]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[179])))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a state variable name."))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[182]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[180]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[183])))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and a state variable name."))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[185]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the name of a mutable variable"))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[187]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[186])))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which should be"))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[189]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[188])))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "takes exactly two arguments,"))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[191]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[190])))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "takes a string as argument."))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[193]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "flag"))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[195]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[194])))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: compile_time parameter"))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[197]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[196])))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "takes just one argument."))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[199]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[195]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[200])))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[197]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[201])))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "valid grade tests are"))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[203]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "invalid grade test;"))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[205]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[204])))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "grade"))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[207]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[200])))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[197]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[208])))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "as argument."))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[210]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "deep"))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[212]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[211])))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[214]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[213])))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "shallow"))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[216]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[215])))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "takes just"))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[218]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[217])))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "tracelevel"))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[220]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[219])))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[197]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[221])))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[220]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[200])))
  },
  /* row 224 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[197]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[223])))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "tracelevel(deep)"))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[225]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 227 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[226])))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "tracelevel(shallow)"))
  },
  /* row 229 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[228]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[227])))
  },
  /* row 230 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[229])))
  },
  /* row 231 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "grade(\"grade name\")"))
  },
  /* row 232 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[231]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[230])))
  },
  /* row 233 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[232])))
  },
  /* row 234 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "flag(\"name of --trace-flag parameter\")"))
  },
  /* row 235 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[234]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[233])))
  },
  /* row 236 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[235])))
  },
  /* row 237 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "have one of the following forms:"))
  },
  /* row 238 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[237]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[236])))
  },
  /* row 239 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The acceptable compile_time paramaters"))
  },
  /* row 240 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[239]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[238])))
  },
  /* row 241 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[240])))
  },
  /* row 242 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[241])))
  },
  /* row 243 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 244 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "takes an identifier as argument."))
  },
  /* row 245 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[244]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 246 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "env"))
  },
  /* row 247 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[246]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[245])))
  },
  /* row 248 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: run_time parameter"))
  },
  /* row 249 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[248]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[247])))
  },
  /* row 250 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[246]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[200])))
  },
  /* row 251 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[248]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[250])))
  },
  /* row 252 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "env(\"name of an environment variable\")"))
  },
  /* row 253 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[252]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 254 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The only acceptable run_time paramaters have the form"))
  },
  /* row 255 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[254]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[253])))
  },
  /* row 256 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[255])))
  },
  /* row 257 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[256])))
  },
  /* row 258 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate compile_time trace parameter."))
  },
  /* row 259 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[258]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 260 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate io trace parameter."))
  },
  /* row 261 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[260]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 262 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate run_time trace parameter."))
  },
  /* row 263 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[262]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 264 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be a variable."))
  },
  /* row 265 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[264]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 266 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[265])))
  },
  /* row 267 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[266])))
  },
  /* row 268 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of a"))
  },
  /* row 269 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[268]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[267])))
  },
  /* row 270 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "operator inside the scope"))
  },
  /* row 271 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[270]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[269])))
  },
  /* row 272 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[271])))
  },
  /* row 273 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the left operand of the"))
  },
  /* row 274 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[273]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[272])))
  },
  /* row 275 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be followed by an expression of the form"))
  },
  /* row 276 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[275]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[38])))
  },
  /* row 277 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[276])))
  },
  /* row 278 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[277])))
  },
  /* row 279 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[278])))
  },
  /* row 280 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "catch_pattern -> catch_goal"))
  },
  /* row 281 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[280]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[36])))
  },
  /* row 282 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and followed by an expression of the form"))
  },
  /* row 283 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[282]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[281])))
  },
  /* row 284 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[283])))
  },
  /* row 285 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "try [try_params] main_goal then else_goal"))
  },
  /* row 286 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[285]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[284])))
  },
  /* row 287 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be preceded by a try expression of the form"))
  },
  /* row 288 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[287]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[286])))
  },
  /* row 289 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[288])))
  },
  /* row 290 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[289])))
  },
  /* row 291 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[290])))
  },
  /* row 292 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[275]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[281])))
  },
  /* row 293 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[292])))
  },
  /* row 294 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[293])))
  },
  /* row 295 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[294])))
  },
  /* row 296 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[36])))
  },
  /* row 297 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is missing its"))
  },
  /* row 298 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[297]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[296])))
  },
  /* row 299 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[298])))
  },
  /* row 300 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[299])))
  },
  /* row 301 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[300])))
  },
  /* row 302 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have the form"))
  },
  /* row 303 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[302]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[129])))
  },
  /* row 304 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "goal"))
  },
  /* row 305 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[304]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[303])))
  },
  /* row 306 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "try"))
  },
  /* row 307 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[306]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[305])))
  },
  /* row 308 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 309 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[308]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[307])))
  },
  /* row 310 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate io try parameter."))
  },
  /* row 311 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[310]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 312 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Invalid atomic goal parameter."))
  },
  /* row 313 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[312]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 314 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Expected atomic goal parameter, found variable."))
  },
  /* row 315 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[314]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 316 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or a pair of variables."))
  },
  /* row 317 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[316]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 318 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which should be a state variable"))
  },
  /* row 319 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[318]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[317])))
  },
  /* row 320 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[167]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[319])))
  },
  /* row 321 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "found variable."))
  },
  /* row 322 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[321]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 323 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected atomic goal parameter,"))
  },
  /* row 324 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[323]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[322])))
  },
  /* row 325 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "specifier of atomic scope:"))
  },
  /* row 326 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[325]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 327 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "vars"))
  },
  /* row 328 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[327]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[326])))
  },
  /* row 329 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 330 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[329]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[328])))
  },
  /* row 331 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which should be a list of variable names."))
  },
  /* row 332 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[331]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 333 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "takes exact one argument,"))
  },
  /* row 334 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[333]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[332])))
  },
  /* row 335 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the outer and inner STM states."))
  },
  /* row 336 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[335]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 337 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a specification of both"))
  },
  /* row 338 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[337]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[336])))
  },
  /* row 339 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Atomic goal is missing"))
  },
  /* row 340 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[339]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[338])))
  },
  /* row 341 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a specification of the outer STM state."))
  },
  /* row 342 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[341]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 343 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[339]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[342])))
  },
  /* row 344 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a specification of the inner STM state."))
  },
  /* row 345 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[344]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 346 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[339]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[345])))
  },
  /* row 347 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate inner atomic parameter."))
  },
  /* row 348 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[347]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 349 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate outer atomic parameter."))
  },
  /* row 350 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[349]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 351 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate atomic vars parameter."))
  },
  /* row 352 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[351]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 353 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: atomic scope must have a goal."))
  },
  /* row 354 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[353]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 355 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 356 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the prefix operator"))
  },
  /* row 357 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the infix operator"))
  },
  /* row 358 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the binary prefix operator"))
  },
  /* row 359 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should precede"))
  },
  /* row 360 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the first argument of"))
  },
  /* row 361 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 362 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row 363 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "element"))
  },
  /* row 364 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the list following the"))
  },
  /* row 365 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "keyword,"))
  },
  /* row 366 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 367 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "keyword should be"))
  },
  /* row 368 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "followed by a list of warnings to disable."))
  },
  /* row 369 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The term"))
  },
  /* row 370 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the warning"))
  },
  /* row 371 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is duplicated"))
  },
  /* row 372 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the argument of"))
  },
  /* row 373 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: invalid try goal parameter"))
  },
  /* row 374 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 375 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "try"))
  },
  /* row 376 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "operator"))
  },
  /* row 377 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be followed by a list of try parameters;"))
  },
  /* row 378 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the second argument of"))
  },
  /* row 379 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: invalid trace goal parameter"))
  },
  /* row 380 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 381 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a"))
  },
  /* row 382 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: invalid compile_time parameter"))
  },
  /* row 383 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: invalid run_time parameter"))
  },
};

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_2[20][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__parse_goal__parse_tree__parse_goal__type_ctor_info_trace_component_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__parse_goal__parse_tree__parse_goal__type_ctor_info_atomic_component_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__parse_goal__parse_tree__parse_goal__type_ctor_info_try_component_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_atomic_component_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_some_vars_goal_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_some_vars_goal_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_non_call_goal_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_non_call_goal_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_non_call_goal_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_non_call_goal_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_non_call_goal_7_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_non_call_goal_7_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_non_call_goal_7_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_non_call_goal_7_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_non_call_goal_7_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_non_call_goal_7_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_non_call_goal_7_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_non_call_goal_7_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_7[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_7[1])),
    ((MR_Box) (parse_tree__parse_goal__parse_trace_runtime_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_3[9][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "call"))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_1[380]))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "else"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "then"))
  },
};

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_goal__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_goal__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_goal__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_trace_compiletime_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_goal__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_goal__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_goal__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_trace_runtime_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_6[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_goal__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_7[2][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};


static /* final */ const struct parse_tree__parse_goal__vector_common_type_4_0_s parse_tree__parse_goal_vector_common_4[5] = {
  /* row 0 */
  {
    (MR_String) "no_solution_disjunct",
    (MR_Integer) 4
  },
  /* row 1 */
  {
    (MR_String) "non_tail_recursive_calls",
    (MR_Integer) 2
  },
  /* row 2 */
  {
    (MR_String) "singleton_vars",
    (MR_Integer) 0
  },
  /* row 3 */
  {
    (MR_String) "suspected_occurs_check_failure",
    (MR_Integer) 1
  },
  /* row 4 */
  {
    (MR_String) "suspicious_recursion",
    (MR_Integer) 3
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_goal__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_goal__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_goal__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_trace_compiletime_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_compiletime_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_goal__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_trace_runtime_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_goal__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_goal__parse_tree__parse_goal__field_types_atomic_component_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_atomic_component_state_0)
};

static const MR_DuFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_atomic_component_0_0 = {
  (MR_String) "atomic_component_inner",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_goal__parse_tree__parse_goal__field_types_atomic_component_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_goal__parse_tree__parse_goal__field_types_atomic_component_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_atomic_component_state_0)
};

static const MR_DuFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_atomic_component_0_1 = {
  (MR_String) "atomic_component_outer",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_goal__parse_tree__parse_goal__field_types_atomic_component_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_goal__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__parse_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_goal__parse_tree__parse_goal__field_types_atomic_component_0_2[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_goal__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_atomic_component_0_2 = {
  (MR_String) "atomic_component_vars",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__parse_goal__parse_tree__parse_goal__field_types_atomic_component_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_atomic_component_0_0[1] = {
  &parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_atomic_component_0_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_atomic_component_0_1[1] = {
  &parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_atomic_component_0_1
};

static const MR_DuFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_atomic_component_0_2[1] = {
  &parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_atomic_component_0_2
};

static const MR_DuPtagLayout parse_tree__parse_goal__parse_tree__parse_goal__du_ptag_ordered_atomic_component_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_atomic_component_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_atomic_component_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_atomic_component_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__du_name_ordered_atomic_component_0[3] = {
  &parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_atomic_component_0_0,
  &parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_atomic_component_0_1,
  &parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_atomic_component_0_2
};

static const MR_Integer parse_tree__parse_goal__parse_tree__parse_goal__functor_number_map_atomic_component_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct parse_tree__parse_goal__parse_tree__parse_goal__type_ctor_info_atomic_component_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_goal____Unify____atomic_component_0_0_10001)),
  ((MR_Box) (parse_tree__parse_goal____Compare____atomic_component_0_0_10001)),
  (MR_String) "parse_tree.parse_goal",
  (MR_String) "atomic_component",
  {     parse_tree__parse_goal__parse_tree__parse_goal__du_name_ordered_atomic_component_0 },
  {     parse_tree__parse_goal__parse_tree__parse_goal__du_ptag_ordered_atomic_component_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  parse_tree__parse_goal__parse_tree__parse_goal__functor_number_map_atomic_component_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_goal__parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_compiletime_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_expr_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_compiletime_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_goal__parse_tree__parse_goal__field_types_trace_component_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_goal__parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_compiletime_0)
};

static const MR_DuFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_trace_component_0_0 = {
  (MR_String) "trace_component_compiletime",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_goal__parse_tree__parse_goal__field_types_trace_component_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_goal__parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_expr_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_goal__parse_tree__parse_goal__field_types_trace_component_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_goal__parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0)
};

static const MR_DuFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_trace_component_0_1 = {
  (MR_String) "trace_component_runtime",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_goal__parse_tree__parse_goal__field_types_trace_component_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_goal__parse_tree__parse_goal__field_types_trace_component_0_2[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_trace_component_0_2 = {
  (MR_String) "trace_component_maybe_io",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__parse_goal__parse_tree__parse_goal__field_types_trace_component_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_goal__parse_tree__parse_goal__field_types_trace_component_0_3[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0)
};

static const MR_DuFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_trace_component_0_3 = {
  (MR_String) "trace_component_mutable_var",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(3),
  parse_tree__parse_goal__parse_tree__parse_goal__field_types_trace_component_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_trace_component_0_0[1] = {
  &parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_trace_component_0_3
};

static const MR_DuFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_trace_component_0_1[1] = {
  &parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_trace_component_0_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_trace_component_0_2[1] = {
  &parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_trace_component_0_1
};

static const MR_DuFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_trace_component_0_3[1] = {
  &parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_trace_component_0_2
};

static const MR_DuPtagLayout parse_tree__parse_goal__parse_tree__parse_goal__du_ptag_ordered_trace_component_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_trace_component_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_trace_component_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_trace_component_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_trace_component_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__du_name_ordered_trace_component_0[4] = {
  &parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_trace_component_0_0,
  &parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_trace_component_0_2,
  &parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_trace_component_0_3,
  &parse_tree__parse_goal__parse_tree__parse_goal__du_functor_desc_trace_component_0_1
};

static const MR_Integer parse_tree__parse_goal__parse_tree__parse_goal__functor_number_map_trace_component_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct parse_tree__parse_goal__parse_tree__parse_goal__type_ctor_info_trace_component_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_goal____Unify____trace_component_0_0_10001)),
  ((MR_Box) (parse_tree__parse_goal____Compare____trace_component_0_0_10001)),
  (MR_String) "parse_tree.parse_goal",
  (MR_String) "trace_component",
  {     parse_tree__parse_goal__parse_tree__parse_goal__du_name_ordered_trace_component_0 },
  {     parse_tree__parse_goal__parse_tree__parse_goal__du_ptag_ordered_trace_component_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  parse_tree__parse_goal__parse_tree__parse_goal__functor_number_map_trace_component_0
};

static const MR_Integer parse_tree__parse_goal__parse_tree__parse_goal__functor_number_map_try_component_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__notag_functor_desc_try_component_0 = {
  (MR_String) "try_component_maybe_io",
  (MR_PseudoTypeInfo) (&parse_tree__parse_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__parse_goal__parse_tree__parse_goal__type_ctor_info_try_component_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__parse_goal____Unify____try_component_0_0_10001)),
  ((MR_Box) (parse_tree__parse_goal____Compare____try_component_0_0_10001)),
  (MR_String) "parse_tree.parse_goal",
  (MR_String) "try_component",
  {     &parse_tree__parse_goal__parse_tree__parse_goal__notag_functor_desc_try_component_0 },
  {     &parse_tree__parse_goal__parse_tree__parse_goal__notag_functor_desc_try_component_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__parse_goal__parse_tree__parse_goal__functor_number_map_try_component_0
};

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_atomic_component__2421__1_2_p_0(
  MR_Word HeadVar__1_119,
  MR_Word * HeadVar__2_120)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_119, HeadVar__2_120);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__400__2_2_p_0(
  MR_Word HeadVar__1_2862,
  MR_Word * HeadVar__2_2863)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_2862, HeadVar__2_2863);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__399__2_2_p_0(
  MR_Word HeadVar__1_2856,
  MR_Word * HeadVar__2_2857)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_2856, HeadVar__2_2857);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__844__1_2_p_0(
  MR_Word HeadVar__1_1606,
  MR_Word * HeadVar__2_1607)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1606, HeadVar__2_1607);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__843__1_2_p_0(
  MR_Word HeadVar__1_1602,
  MR_Word * HeadVar__2_1603)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1602, HeadVar__2_1603);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__842__1_2_p_0(
  MR_Word HeadVar__1_1598,
  MR_Word * HeadVar__2_1599)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1598, HeadVar__2_1599);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__841__1_2_p_0(
  MR_Word HeadVar__1_1592,
  MR_Word * HeadVar__2_1593)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1592, HeadVar__2_1593);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__881__1_2_p_0(
  MR_Word HeadVar__1_1629,
  MR_Word * HeadVar__2_1630)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1629, HeadVar__2_1630);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__880__1_2_p_0(
  MR_Word HeadVar__1_1625,
  MR_Word * HeadVar__2_1626)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1625, HeadVar__2_1626);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__879__1_2_p_0(
  MR_Word HeadVar__1_1621,
  MR_Word * HeadVar__2_1622)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1621, HeadVar__2_1622);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__878__1_2_p_0(
  MR_Word HeadVar__1_1615,
  MR_Word * HeadVar__2_1616)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1615, HeadVar__2_1616);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__400__1_2_p_0(
  MR_Word HeadVar__1_1548,
  MR_Word * HeadVar__2_1549)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1548, HeadVar__2_1549);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__399__1_2_p_0(
  MR_Word HeadVar__1_1542,
  MR_Word * HeadVar__2_1543)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1542, HeadVar__2_1543);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__155__1_2_p_0(
  MR_Word HeadVar__1_63,
  MR_Word * HeadVar__2_64)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_63, HeadVar__2_64);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__154__1_2_p_0(
  MR_Word HeadVar__1_57,
  MR_Word * HeadVar__2_58)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_57, HeadVar__2_58);
}

static void MR_CALL 
parse_tree__parse_goal____Compare____try_component_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_goal____Unify____try_component_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_goal____Compare____trace_component_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_36 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_37 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_36 == CastY_37);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_44 = (MR_Word) ((MR_Word) (HeadVar__2_2));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_35 = (MR_Word) ((MR_Word) (HeadVar__3_3));

                  parse_tree__prog_data____Compare____trace_mutable_var_0_0(HeadVar__1_1, Var_44, ArgY1_35);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[14]), HeadVar__1_1, ((MR_Box) (Var_42)), ((MR_Box) (ArgY1_5)));
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[13]), HeadVar__1_1, ((MR_Box) (Var_45)), ((MR_Box) (ArgY1_15)));
                }
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgY1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_43)), ((MR_Box) (ArgY1_25)));
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_goal____Unify____trace_component_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_9 = (MR_Word) ((MR_Word) (HeadVar__1_1));
            MR_Word ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_10 = (MR_Word) ((MR_Word) (HeadVar__2_2));
              succeeded = parse_tree__prog_data____Unify____trace_mutable_var_0_0(ArgX1_9, ArgY1_10);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_13_13;
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_13_13 = (MR_Word) (&parse_tree__parse_goal_scalar_common_1[14]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_16_16;
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_16_16 = (MR_Word) (&parse_tree__parse_goal_scalar_common_1[13]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TypeInfo_14_14;
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_14_14 = (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_goal____Compare____atomic_component_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_22 == CastY_23);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

                  parse_tree__prog_data____Compare____atomic_component_state_0_0(HeadVar__1_1, Var_27, ArgY1_5);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  parse_tree__prog_data____Compare____atomic_component_state_0_0(HeadVar__1_1, Var_28, ArgY1_13);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Var_29)), ((MR_Box) (ArgY1_21)));
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_goal____Unify____atomic_component_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data____Unify____atomic_component_state_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data____Unify____atomic_component_state_0_0(ArgX1_5, ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_13_13;
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_13_13 = (MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
            }
          }
          break;
      }
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_goal__env_var_is_acceptable_char_1_p_0(
  MR_Char Char_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__char__is_alnum_1_p_0(Char_2);
    if (!(succeeded))
      succeeded = (Char_2 == (MR_Char) 95);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_goal__parse_trace_runtime_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__parse_goal__env_var_is_acceptable_char_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_trace_runtime_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeRuntime_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    MR_Word SubTerms_8;
    MR_Word TermContext_9;
    MR_String Atom_10;
    MR_Word Functor_7;

    if (succeeded)
    {
      Functor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
      SubTerms_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
      TermContext_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Functor_7)) == (MR_Integer) 0);
      if (succeeded)
        Atom_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_7, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      succeeded = (strcmp(Atom_10, (MR_String) "env") == 0);
      if (succeeded)
      {
        MR_Word SubTerm_11;
        MR_Word Var_21;

        succeeded = (SubTerms_8 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          SubTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_8, (MR_Integer) 0))));
          Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_8, (MR_Integer) 1))));
          succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          MR_String EnvVarName_14;
          MR_Word TypeCtorInfo_105_105;
          MR_Word TypeInfo_110_110;
          MR_Word SubFunctor_12;
          MR_Word EnvVarChars_15;
          MR_Word Var_22;
          MR_Word Var_23;
          MR_Word Var_24;
          MR_Word Var_109;
          MR_Word Var_16;

          succeeded = ((MR_tag((MR_Word) SubTerm_11)) == (MR_Integer) 0);
          if (succeeded)
          {
            SubFunctor_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTerm_11, (MR_Integer) 0))));
            Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTerm_11, (MR_Integer) 1))));
            succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              if (((MR_tag((MR_Word) SubFunctor_12)) == (MR_Integer) 0))
              {
                EnvVarName_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), SubFunctor_12, (MR_Integer) 0))));
                succeeded = MR_TRUE;
              }
              else
              if (((MR_tag((MR_Word) SubFunctor_12)) == (MR_Integer) 2))
              {
                EnvVarName_14 = ((MR_String) ((MR_hl_field(MR_mktag(2), SubFunctor_12, (MR_Integer) 0))));
                succeeded = MR_TRUE;
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                EnvVarChars_15 = mercury__string__to_char_list_1_f_0(EnvVarName_14);
                Var_23 = (MR_Word) (&parse_tree__parse_goal_scalar_common_2[19]);
                Var_24 = (MR_Word) ((MR_Unsigned) 0U);
                TypeCtorInfo_105_105 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0);
                mercury__list__filter_4_p_0(TypeCtorInfo_105_105, Var_23, EnvVarChars_15, &Var_16, &Var_109);
                TypeInfo_110_110 = (MR_Word) (&parse_tree__parse_goal_scalar_common_1[243]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_110_110, ((MR_Box) (Var_24)), ((MR_Box) (Var_109)));
              }
            }
          }
          if (succeeded)
          {
            MR_Word Runtime_17 = (MR_Word) (EnvVarName_14);

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeRuntime_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Runtime_17));
            }
          }
          else
          {
            MR_Word Spec_19;
            MR_Word Var_39;
            MR_Word Var_40;

            Var_39 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubTerm_11);
            {
              Spec_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_runtime\'/3"));
              MR_hl_field(MR_mktag(1), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_19, 3) = ((MR_Box) (Var_39));
              MR_hl_field(MR_mktag(1), Spec_19, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[249])));
            }
            {
              Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Spec_19));
              MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeRuntime_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_40));
            }
          }
        }
        else
        {
          MR_Word Var_56;
          MR_Word Spec_98;

          {
            Spec_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_98, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_runtime\'/3"));
            MR_hl_field(MR_mktag(1), Spec_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_98, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_98, 3) = ((MR_Box) (TermContext_9));
            MR_hl_field(MR_mktag(1), Spec_98, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[251])));
          }
          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Spec_98));
            MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeRuntime_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_56));
          }
        }
      }
      else
      {
        MR_String TermStr_20;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_79;
        MR_Word Pieces_99;
        MR_Word Spec_100;

        TermStr_20 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (TermStr_20));
        }
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[257])));
        }
        {
          Pieces_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_99, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[383])));
          MR_hl_field(MR_mktag(1), Pieces_99, 1) = ((MR_Box) (Var_60));
        }
        {
          Spec_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_100, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_runtime\'/3"));
          MR_hl_field(MR_mktag(1), Spec_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_100, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_100, 3) = ((MR_Box) (TermContext_9));
          MR_hl_field(MR_mktag(1), Spec_100, 4) = ((MR_Box) (Pieces_99));
        }
        {
          Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Spec_100));
          MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeRuntime_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_79));
        }
      }
    }
    else
    {
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Pieces_101;
      MR_Word Spec_102;
      MR_String TermStr_103;

      TermStr_103 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
      {
        Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) (TermStr_103));
      }
      {
        Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[36])));
      }
      {
        Pieces_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[383])));
        MR_hl_field(MR_mktag(1), Pieces_101, 1) = ((MR_Box) (Var_83));
      }
      Var_94 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
      {
        Spec_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_102, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_runtime\'/3"));
        MR_hl_field(MR_mktag(1), Spec_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_102, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_102, 3) = ((MR_Box) (Var_94));
        MR_hl_field(MR_mktag(1), Spec_102, 4) = ((MR_Box) (Pieces_101));
      }
      {
        Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Spec_102));
        MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeRuntime_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_95));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_trace_compiletime_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0_s * env_ptr = (struct parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0_s *) (env_ptr_arg);

    *((env_ptr)->parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0__conv0_HeadVar__1_1));
    ((env_ptr)->parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0__cont)((env_ptr)->parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0_s env;

    (env).parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0__cont = cont;
    (env).parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      parse_tree__prog_data__valid_trace_grade_name_1_p_0(&(env).parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0__conv0_HeadVar__1_1, parse_tree__parse_goal__parse_trace_compiletime_3_p_0_1, &env);
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_trace_compiletime_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeCompiletime_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    MR_Word SubTerms_8;
    MR_Word TermContext_9;
    MR_String Atom_10;
    MR_Word Functor_7;

    if (succeeded)
    {
      Functor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
      SubTerms_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
      TermContext_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Functor_7)) == (MR_Integer) 0);
      if (succeeded)
        Atom_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_7, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      succeeded = (strcmp(Atom_10, (MR_String) "flag") == 0);
      if (succeeded)
      {
        MR_Word SubTerm_11;
        MR_Word Var_25;

        succeeded = (SubTerms_8 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          SubTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_8, (MR_Integer) 0))));
          Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_8, (MR_Integer) 1))));
          succeeded = (Var_25 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          MR_String FlagName_12;
          MR_Word Var_26;
          MR_Word Var_27;

          succeeded = ((MR_tag((MR_Word) SubTerm_11)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTerm_11, (MR_Integer) 0))));
            Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTerm_11, (MR_Integer) 1))));
            succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_Integer) 2);
              if (succeeded)
                FlagName_12 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_26, (MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word Compiletime_14;

            {
              Compiletime_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Compiletime_14, 0) = ((MR_Box) (FlagName_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeCompiletime_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Compiletime_14));
            }
          }
          else
          {
            MR_Word Spec_16;
            MR_Word Var_42;

            {
              Spec_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_compiletime\'/3"));
              MR_hl_field(MR_mktag(1), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_16, 3) = ((MR_Box) (TermContext_9));
              MR_hl_field(MR_mktag(1), Spec_16, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[198])));
            }
            {
              Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Spec_16));
              MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeCompiletime_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_42));
            }
          }
        }
        else
        {
          MR_Word Var_58;
          MR_Word Spec_235;

          {
            Spec_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_235, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_compiletime\'/3"));
            MR_hl_field(MR_mktag(1), Spec_235, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_235, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_235, 3) = ((MR_Box) (TermContext_9));
            MR_hl_field(MR_mktag(1), Spec_235, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[202])));
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Spec_235));
            MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeCompiletime_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_58));
          }
        }
      }
      else
      {
        succeeded = (strcmp(Atom_10, (MR_String) "grade") == 0);
        if (succeeded)
        {
          MR_Word SubTerm_244;
          MR_Word Var_60;

          succeeded = (SubTerms_8 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SubTerm_244 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_8, (MR_Integer) 0))));
            Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_8, (MR_Integer) 1))));
            succeeded = (Var_60 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            MR_Word TraceGrade_19;
            MR_String GradeName_17;
            MR_Word Var_61;
            MR_Word Var_62;

            succeeded = ((MR_tag((MR_Word) SubTerm_244)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTerm_244, (MR_Integer) 0))));
              Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTerm_244, (MR_Integer) 1))));
              succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Var_61)) == (MR_Integer) 0);
                if (succeeded)
                {
                  GradeName_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 0))));
                  succeeded = parse_tree__prog_data__parse_trace_grade_name_2_p_0(GradeName_17, &TraceGrade_19);
                }
              }
            }
            if (succeeded)
            {
              MR_Word Compiletime_236;

              {
                Compiletime_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Compiletime_236, 0) = (MR_Box) ((MR_Unsigned) (TraceGrade_19));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeCompiletime_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Compiletime_236));
              }
            }
            else
            {
              MR_Word ValidGradeNames_20;
              MR_Word Var_71;
              MR_Word Var_72;
              MR_Word Var_82;
              MR_Word Pieces_237;
              MR_Word Spec_238;

              mercury__solutions__solutions_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[18]), &ValidGradeNames_20);
              Var_72 = parse_tree__error_util__list_to_pieces_1_f_0(ValidGradeNames_20);
              Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_72, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[36])));
              Pieces_237 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[206])), Var_71);
              {
                Spec_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_238, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_compiletime\'/3"));
                MR_hl_field(MR_mktag(1), Spec_238, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_238, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_238, 3) = ((MR_Box) (TermContext_9));
                MR_hl_field(MR_mktag(1), Spec_238, 4) = ((MR_Box) (Pieces_237));
              }
              {
                Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Spec_238));
                MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeCompiletime_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_82));
              }
            }
          }
          else
          {
            MR_Word Var_98;
            MR_Word Spec_243;

            {
              Spec_243 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_243, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_compiletime\'/3"));
              MR_hl_field(MR_mktag(1), Spec_243, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_243, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_243, 3) = ((MR_Box) (TermContext_9));
              MR_hl_field(MR_mktag(1), Spec_243, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[209])));
            }
            {
              Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Spec_243));
              MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeCompiletime_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_98));
            }
          }
        }
        else
        {
          if ((strcmp(Atom_10, (MR_String) "tracelevel") == 0))
            succeeded = MR_TRUE;
          else
          if ((strcmp(Atom_10, (MR_String) "trace_level") == 0))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
          if (succeeded)
          {
            MR_Word SubTerm_256;
            MR_Word Var_100;

            succeeded = (SubTerms_8 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SubTerm_256 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_8, (MR_Integer) 0))));
              Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_8, (MR_Integer) 1))));
              succeeded = (Var_100 == (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
            {
              MR_Word Level_23;
              MR_String LevelName_21;
              MR_Word Var_101;
              MR_Word Var_102;

              succeeded = ((MR_tag((MR_Word) SubTerm_256)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTerm_256, (MR_Integer) 0))));
                Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTerm_256, (MR_Integer) 1))));
                succeeded = (Var_102 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_101)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    LevelName_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_101, (MR_Integer) 0))));
                    if ((strcmp(LevelName_21, (MR_String) "deep") == 0))
                    {
                      Level_23 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    if ((strcmp(LevelName_21, (MR_String) "shallow") == 0))
                    {
                      Level_23 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                    else
                      succeeded = MR_FALSE;
                  }
                }
              }
              if (succeeded)
              {
                MR_Word Compiletime_248;

                {
                  Compiletime_248 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Compiletime_248, 0) = (MR_Box) ((MR_Unsigned) (Level_23));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeCompiletime_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Compiletime_248));
                }
              }
              else
              {
                MR_Word Var_129;
                MR_Word Spec_250;

                {
                  Spec_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_250, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_compiletime\'/3"));
                  MR_hl_field(MR_mktag(1), Spec_250, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_250, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_250, 3) = ((MR_Box) (TermContext_9));
                  MR_hl_field(MR_mktag(1), Spec_250, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[222])));
                }
                {
                  Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Spec_250));
                  MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeCompiletime_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_129));
                }
              }
            }
            else
            {
              MR_Word Var_145;
              MR_Word Spec_255;

              {
                Spec_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_255, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_compiletime\'/3"));
                MR_hl_field(MR_mktag(1), Spec_255, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_255, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_255, 3) = ((MR_Box) (TermContext_9));
                MR_hl_field(MR_mktag(1), Spec_255, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[224])));
              }
              {
                Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (Spec_255));
                MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeCompiletime_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_145));
              }
            }
          }
          else
          {
            MR_String TermStr_24;
            MR_Word Var_149;
            MR_Word Var_150;
            MR_Word Var_188;
            MR_Word Pieces_260;
            MR_Word Spec_261;

            TermStr_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
            {
              Var_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_150, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_150, 1) = ((MR_Box) (TermStr_24));
            }
            {
              Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (Var_150));
              MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[242])));
            }
            {
              Pieces_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_260, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[382])));
              MR_hl_field(MR_mktag(1), Pieces_260, 1) = ((MR_Box) (Var_149));
            }
            {
              Spec_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_261, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_compiletime\'/3"));
              MR_hl_field(MR_mktag(1), Spec_261, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_261, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_261, 3) = ((MR_Box) (TermContext_9));
              MR_hl_field(MR_mktag(1), Spec_261, 4) = ((MR_Box) (Pieces_260));
            }
            {
              Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_188, 0) = ((MR_Box) (Spec_261));
              MR_hl_field(MR_mktag(1), Var_188, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeCompiletime_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_188));
            }
          }
        }
      }
    }
    else
    {
      MR_Word Var_192;
      MR_Word Var_193;
      MR_Word Var_231;
      MR_Word Var_232;
      MR_Word Pieces_270;
      MR_Word Spec_271;
      MR_String TermStr_272;

      TermStr_272 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
      {
        Var_193 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_193, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_193, 1) = ((MR_Box) (TermStr_272));
      }
      {
        Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) (Var_193));
        MR_hl_field(MR_mktag(1), Var_192, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[242])));
      }
      {
        Pieces_270 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_270, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[382])));
        MR_hl_field(MR_mktag(1), Pieces_270, 1) = ((MR_Box) (Var_192));
      }
      Var_231 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
      {
        Spec_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_271, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_compiletime\'/3"));
        MR_hl_field(MR_mktag(1), Spec_271, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_271, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_271, 3) = ((MR_Box) (Var_231));
        MR_hl_field(MR_mktag(1), Spec_271, 4) = ((MR_Box) (Pieces_270));
      }
      {
        Var_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_232, 0) = ((MR_Box) (Spec_271));
        MR_hl_field(MR_mktag(1), Var_232, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCompiletime_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_232));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_HeadVar__2_2863;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__400__2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv11_HeadVar__2_2863);
    *wrapper_arg_2 = ((MR_Box) (conv11_HeadVar__2_2863));
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_HeadVar__2_2857;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__399__2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv10_HeadVar__2_2857);
    *wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__2_2857));
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_HeadVar__2_1607;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__844__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv9_HeadVar__2_1607);
    *wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__2_1607));
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__2_1603;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__843__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv8_HeadVar__2_1603);
    *wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_1603));
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__2_1599;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__842__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv7_HeadVar__2_1599);
    *wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_1599));
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__2_1593;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__841__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv6_HeadVar__2_1593);
    *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_1593));
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__2_1630;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__881__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__2_1630);
    *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_1630));
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_1626;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__880__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__2_1626);
    *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_1626));
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_1622;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__879__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_1622);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_1622));
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_1616;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__878__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_1616);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_1616));
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_1549;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__400__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_1549);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_1549));
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_1543;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__399__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_1543);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_1543));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0(
  MR_String Functor_8,
  MR_Word Args_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_147,
  MR_Word * STATE_VARIABLE_VarSet_148)
{
  {
    MR_bool succeeded;

    {
      MR_Integer case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(Functor_8, 0)) {
        case (MR_Integer) 38:
          if (MR_offset_streq(1, Functor_8, (MR_String) "&"))
            case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 44:
          if (MR_offset_streq(1, Functor_8, (MR_String) ","))
            case_num_0 = (MR_Integer) 1;
          break;
        case (MR_Integer) 59:
          if (MR_offset_streq(1, Functor_8, (MR_String) ";"))
            case_num_0 = (MR_Integer) 2;
          break;
        case (MR_Integer) 60:
          if (((MR_nth_code_unit(Functor_8, 1)) == (MR_Integer) 61))
            switch (MR_nth_code_unit(Functor_8, 2)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 3;
                break;
              case (MR_Integer) 62:
                if (MR_offset_streq(3, Functor_8, (MR_String) "<=>"))
                  case_num_0 = (MR_Integer) 3;
                break;
            }
          break;
        case (MR_Integer) 61:
          switch (MR_nth_code_unit(Functor_8, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 4;
              break;
            case (MR_Integer) 62:
              if (MR_offset_streq(2, Functor_8, (MR_String) "=>"))
                case_num_0 = (MR_Integer) 3;
              break;
          }
          break;
        case (MR_Integer) 92:
          if (MR_offset_streq(1, Functor_8, (MR_String) "\\+"))
            case_num_0 = (MR_Integer) 5;
          break;
        case (MR_Integer) 97:
          switch (MR_nth_code_unit(Functor_8, 1)) {
            case (MR_Integer) 108:
              if (MR_offset_streq(2, Functor_8, (MR_String) "all"))
                case_num_0 = (MR_Integer) 6;
              break;
            case (MR_Integer) 114:
              if (MR_offset_streq(2, Functor_8, (MR_String) "arbitrary"))
                case_num_0 = (MR_Integer) 7;
              break;
            case (MR_Integer) 116:
              if (MR_offset_streq(2, Functor_8, (MR_String) "atomic"))
                case_num_0 = (MR_Integer) 8;
              break;
          }
          break;
        case (MR_Integer) 99:
          if (((((((((MR_nth_code_unit(Functor_8, 1)) == (MR_Integer) 97)) && (((MR_nth_code_unit(Functor_8, 2)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(Functor_8, 3)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(Functor_8, 4)) == (MR_Integer) 104))))
            switch (MR_nth_code_unit(Functor_8, 5)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 9;
                break;
              case (MR_Integer) 95:
                if (MR_offset_streq(6, Functor_8, (MR_String) "catch_any"))
                  case_num_0 = (MR_Integer) 10;
                break;
            }
          break;
        case (MR_Integer) 100:
          if (((((((((((((((((((((((((((((MR_nth_code_unit(Functor_8, 1)) == (MR_Integer) 105)) && (((MR_nth_code_unit(Functor_8, 2)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(Functor_8, 3)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(Functor_8, 4)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(Functor_8, 5)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(Functor_8, 6)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Functor_8, 7)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(Functor_8, 8)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(Functor_8, 9)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(Functor_8, 10)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(Functor_8, 11)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(Functor_8, 12)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Functor_8, 13)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(Functor_8, 14)) == (MR_Integer) 103))))
            switch (MR_nth_code_unit(Functor_8, 15)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 11;
                break;
              case (MR_Integer) 115:
                if (MR_offset_streq(16, Functor_8, (MR_String) "disable_warnings"))
                  case_num_0 = (MR_Integer) 11;
                break;
            }
          break;
        case (MR_Integer) 101:
          switch (MR_nth_code_unit(Functor_8, 1)) {
            case (MR_Integer) 108:
              if (MR_offset_streq(2, Functor_8, (MR_String) "else"))
                case_num_0 = (MR_Integer) 12;
              break;
            case (MR_Integer) 118:
              if (MR_offset_streq(2, Functor_8, (MR_String) "event"))
                case_num_0 = (MR_Integer) 13;
              break;
          }
          break;
        case (MR_Integer) 102:
          if (MR_offset_streq(1, Functor_8, (MR_String) "fail"))
            case_num_0 = (MR_Integer) 14;
          break;
        case (MR_Integer) 105:
          switch (MR_nth_code_unit(Functor_8, 1)) {
            case (MR_Integer) 102:
              if (MR_offset_streq(2, Functor_8, (MR_String) "if"))
                case_num_0 = (MR_Integer) 15;
              break;
            case (MR_Integer) 109:
              if (MR_offset_streq(2, Functor_8, (MR_String) "impure"))
                case_num_0 = (MR_Integer) 16;
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(2, Functor_8, (MR_String) "is"))
                case_num_0 = (MR_Integer) 4;
              break;
          }
          break;
        case (MR_Integer) 110:
          if (MR_offset_streq(1, Functor_8, (MR_String) "not"))
            case_num_0 = (MR_Integer) 5;
          break;
        case (MR_Integer) 112:
          if (((((((((((((((MR_nth_code_unit(Functor_8, 1)) == (MR_Integer) 114)) && (((MR_nth_code_unit(Functor_8, 2)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(Functor_8, 3)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(Functor_8, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Functor_8, 5)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(Functor_8, 6)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Functor_8, 7)) == (MR_Integer) 95))))
            switch (MR_nth_code_unit(Functor_8, 8)) {
              case (MR_Integer) 101:
                if (((((((((((((((((((((((((((((((((((((MR_nth_code_unit(Functor_8, 9)) == (MR_Integer) 113)) && (((MR_nth_code_unit(Functor_8, 10)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(Functor_8, 11)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Functor_8, 12)) == (MR_Integer) 118)))) && (((MR_nth_code_unit(Functor_8, 13)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(Functor_8, 14)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(Functor_8, 15)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Functor_8, 16)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(Functor_8, 17)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(Functor_8, 18)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(Functor_8, 19)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(Functor_8, 20)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(Functor_8, 21)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(Functor_8, 22)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(Functor_8, 23)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(Functor_8, 24)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Functor_8, 25)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(Functor_8, 26)) == (MR_Integer) 110))))
                  switch (MR_nth_code_unit(Functor_8, 27)) {
                    case (MR_Integer) 95:
                      if (MR_offset_streq(28, Functor_8, (MR_String) "promise_equivalent_solution_sets"))
                        case_num_0 = (MR_Integer) 17;
                      break;
                    case (MR_Integer) 115:
                      if (MR_offset_streq(28, Functor_8, (MR_String) "promise_equivalent_solutions"))
                        case_num_0 = (MR_Integer) 17;
                      break;
                  }
                break;
              case (MR_Integer) 105:
                if (MR_offset_streq(9, Functor_8, (MR_String) "promise_impure"))
                  case_num_0 = (MR_Integer) 18;
                break;
              case (MR_Integer) 112:
                if (MR_offset_streq(9, Functor_8, (MR_String) "promise_pure"))
                  case_num_0 = (MR_Integer) 19;
                break;
              case (MR_Integer) 115:
                if (MR_offset_streq(9, Functor_8, (MR_String) "promise_semipure"))
                  case_num_0 = (MR_Integer) 20;
                break;
            }
          break;
        case (MR_Integer) 114:
          if (((((((((((((((MR_nth_code_unit(Functor_8, 1)) == (MR_Integer) 101)) && (((MR_nth_code_unit(Functor_8, 2)) == (MR_Integer) 113)))) && (((MR_nth_code_unit(Functor_8, 3)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(Functor_8, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Functor_8, 5)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(Functor_8, 6)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Functor_8, 7)) == (MR_Integer) 95))))
            switch (MR_nth_code_unit(Functor_8, 8)) {
              case (MR_Integer) 99:
                switch (MR_nth_code_unit(Functor_8, 9)) {
                  case (MR_Integer) 99:
                    if (((MR_nth_code_unit(Functor_8, 10)) == (MR_Integer) 95))
                      switch (MR_nth_code_unit(Functor_8, 11)) {
                        case (MR_Integer) 109:
                          if (MR_offset_streq(12, Functor_8, (MR_String) "require_cc_multi"))
                            case_num_0 = (MR_Integer) 21;
                          break;
                        case (MR_Integer) 110:
                          if (MR_offset_streq(12, Functor_8, (MR_String) "require_cc_nondet"))
                            case_num_0 = (MR_Integer) 22;
                          break;
                      }
                    break;
                  case (MR_Integer) 111:
                    if (MR_offset_streq(10, Functor_8, (MR_String) "require_complete_switch"))
                      case_num_0 = (MR_Integer) 23;
                    break;
                }
                break;
              case (MR_Integer) 100:
                if (MR_offset_streq(9, Functor_8, (MR_String) "require_det"))
                  case_num_0 = (MR_Integer) 24;
                break;
              case (MR_Integer) 101:
                if (MR_offset_streq(9, Functor_8, (MR_String) "require_erroneous"))
                  case_num_0 = (MR_Integer) 25;
                break;
              case (MR_Integer) 102:
                if (MR_offset_streq(9, Functor_8, (MR_String) "require_failure"))
                  case_num_0 = (MR_Integer) 26;
                break;
              case (MR_Integer) 109:
                if (MR_offset_streq(9, Functor_8, (MR_String) "require_multi"))
                  case_num_0 = (MR_Integer) 27;
                break;
              case (MR_Integer) 110:
                if (MR_offset_streq(9, Functor_8, (MR_String) "require_nondet"))
                  case_num_0 = (MR_Integer) 28;
                break;
              case (MR_Integer) 115:
                switch (MR_nth_code_unit(Functor_8, 9)) {
                  case (MR_Integer) 101:
                    if (MR_offset_streq(10, Functor_8, (MR_String) "require_semidet"))
                      case_num_0 = (MR_Integer) 29;
                    break;
                  case (MR_Integer) 119:
                    if (((((((((((((((((((((MR_nth_code_unit(Functor_8, 10)) == (MR_Integer) 105)) && (((MR_nth_code_unit(Functor_8, 11)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(Functor_8, 12)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(Functor_8, 13)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(Functor_8, 14)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(Functor_8, 15)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(Functor_8, 16)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(Functor_8, 17)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(Functor_8, 18)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(Functor_8, 19)) == (MR_Integer) 95))))
                      switch (MR_nth_code_unit(Functor_8, 20)) {
                        case (MR_Integer) 99:
                          if (((((MR_nth_code_unit(Functor_8, 21)) == (MR_Integer) 99)) && (((MR_nth_code_unit(Functor_8, 22)) == (MR_Integer) 95))))
                            switch (MR_nth_code_unit(Functor_8, 23)) {
                              case (MR_Integer) 109:
                                if (MR_offset_streq(24, Functor_8, (MR_String) "require_switch_arms_cc_multi"))
                                  case_num_0 = (MR_Integer) 30;
                                break;
                              case (MR_Integer) 110:
                                if (MR_offset_streq(24, Functor_8, (MR_String) "require_switch_arms_cc_nondet"))
                                  case_num_0 = (MR_Integer) 31;
                                break;
                            }
                          break;
                        case (MR_Integer) 100:
                          if (MR_offset_streq(21, Functor_8, (MR_String) "require_switch_arms_det"))
                            case_num_0 = (MR_Integer) 32;
                          break;
                        case (MR_Integer) 101:
                          if (MR_offset_streq(21, Functor_8, (MR_String) "require_switch_arms_erroneous"))
                            case_num_0 = (MR_Integer) 33;
                          break;
                        case (MR_Integer) 102:
                          if (MR_offset_streq(21, Functor_8, (MR_String) "require_switch_arms_failure"))
                            case_num_0 = (MR_Integer) 34;
                          break;
                        case (MR_Integer) 109:
                          if (MR_offset_streq(21, Functor_8, (MR_String) "require_switch_arms_multi"))
                            case_num_0 = (MR_Integer) 35;
                          break;
                        case (MR_Integer) 110:
                          if (MR_offset_streq(21, Functor_8, (MR_String) "require_switch_arms_nondet"))
                            case_num_0 = (MR_Integer) 36;
                          break;
                        case (MR_Integer) 115:
                          if (MR_offset_streq(21, Functor_8, (MR_String) "require_switch_arms_semidet"))
                            case_num_0 = (MR_Integer) 37;
                          break;
                      }
                    break;
                }
                break;
            }
          break;
        case (MR_Integer) 115:
          switch (MR_nth_code_unit(Functor_8, 1)) {
            case (MR_Integer) 101:
              if (MR_offset_streq(2, Functor_8, (MR_String) "semipure"))
                case_num_0 = (MR_Integer) 38;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, Functor_8, (MR_String) "some"))
                case_num_0 = (MR_Integer) 39;
              break;
          }
          break;
        case (MR_Integer) 116:
          switch (MR_nth_code_unit(Functor_8, 1)) {
            case (MR_Integer) 104:
              if (MR_offset_streq(2, Functor_8, (MR_String) "then"))
                case_num_0 = (MR_Integer) 40;
              break;
            case (MR_Integer) 114:
              switch (MR_nth_code_unit(Functor_8, 2)) {
                case (MR_Integer) 97:
                  if (MR_offset_streq(3, Functor_8, (MR_String) "trace"))
                    case_num_0 = (MR_Integer) 41;
                  break;
                case (MR_Integer) 117:
                  if (MR_offset_streq(3, Functor_8, (MR_String) "true"))
                    case_num_0 = (MR_Integer) 42;
                  break;
              }
              break;
          }
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
              MR_Word SubGoalTermA_889;
              MR_Word SubGoalTermB_890;
              MR_Word Var_646;
              MR_Word Var_647;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTermA_889 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_646 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_646 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTermB_890 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_646, (MR_Integer) 0))));
                  Var_647 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_646, (MR_Integer) 1))));
                  succeeded = (Var_647 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_VarSet_648_648;
                MR_Word MaybeSubGoalA_878;
                MR_Word MaybeSubGoalB_879;
                MR_Word SubGoalA_871;
                MR_Word GoalWarningSpecsA_872;
                MR_Word SubGoalB_873;
                MR_Word GoalWarningSpecsB_874;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermA_889, ContextPieces_11, &MaybeSubGoalA_878, STATE_VARIABLE_VarSet_0_147, &STATE_VARIABLE_VarSet_648_648);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermB_890, ContextPieces_11, &MaybeSubGoalB_879, STATE_VARIABLE_VarSet_648_648, STATE_VARIABLE_VarSet_148);
                succeeded = ((MR_tag((MR_Word) MaybeSubGoalA_878)) == (MR_Integer) 1);
                if (succeeded)
                {
                  SubGoalA_871 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_878, (MR_Integer) 0))));
                  GoalWarningSpecsA_872 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_878, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoalB_879)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoalB_873 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_879, (MR_Integer) 0))));
                    GoalWarningSpecsB_874 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_879, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word Goal_865;
                  MR_Word WarningSpecs_866;

                  {
                    Goal_865 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_865, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Goal_865, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_865, 2) = ((MR_Box) (SubGoalA_871));
                    MR_hl_field(MR_mktag(3), Goal_865, 3) = ((MR_Box) (SubGoalB_873));
                  }
                  WarningSpecs_866 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), GoalWarningSpecsA_872, GoalWarningSpecsB_874);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_865));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WarningSpecs_866));
                  }
                }
                else
                {
                  MR_Word Var_650;
                  MR_Word Var_651;
                  MR_Word Specs_867;

                  Var_650 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalA_878);
                  Var_651 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalB_879);
                  Specs_867 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_650, Var_651);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_867));
                  }
                }
              }
              else
              {
                MR_Word Var_652;
                MR_Word Spec_884;

                Spec_884 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_652 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_652, 0) = ((MR_Box) (Spec_884));
                  MR_hl_field(MR_mktag(1), Var_652, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_652));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
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
              MR_Word SubGoalTermA_55;
              MR_Word SubGoalTermB_56;
              MR_Word Var_654;
              MR_Word Var_655;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTermA_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_654 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_654 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTermB_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_654, (MR_Integer) 0))));
                  Var_655 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_654, (MR_Integer) 1))));
                  succeeded = (Var_655 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoalA_57;
                MR_Word MaybeSubGoalB_58;
                MR_Word STATE_VARIABLE_VarSet_656_656;
                MR_Word SubGoalA_59;
                MR_Word GoalWarningSpecsA_60;
                MR_Word SubGoalB_61;
                MR_Word GoalWarningSpecsB_62;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermA_55, ContextPieces_11, &MaybeSubGoalA_57, STATE_VARIABLE_VarSet_0_147, &STATE_VARIABLE_VarSet_656_656);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermB_56, ContextPieces_11, &MaybeSubGoalB_58, STATE_VARIABLE_VarSet_656_656, STATE_VARIABLE_VarSet_148);
                succeeded = ((MR_tag((MR_Word) MaybeSubGoalA_57)) == (MR_Integer) 1);
                if (succeeded)
                {
                  SubGoalA_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_57, (MR_Integer) 0))));
                  GoalWarningSpecsA_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_57, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoalB_58)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoalB_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_58, (MR_Integer) 0))));
                    GoalWarningSpecsB_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_58, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word Goal_847;
                  MR_Word WarningSpecs_848;

                  {
                    Goal_847 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Goal_847, 0) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(2), Goal_847, 1) = ((MR_Box) (SubGoalA_59));
                    MR_hl_field(MR_mktag(2), Goal_847, 2) = ((MR_Box) (SubGoalB_61));
                  }
                  WarningSpecs_848 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), GoalWarningSpecsA_60, GoalWarningSpecsB_62);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_847));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WarningSpecs_848));
                  }
                }
                else
                {
                  MR_Word Var_658;
                  MR_Word Var_659;
                  MR_Word Specs_849;

                  Var_658 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalA_57);
                  Var_659 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalB_58);
                  Specs_849 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_658, Var_659);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_849));
                  }
                }
              }
              else
              {
                MR_Word Var_660;
                MR_Word Spec_856;

                Spec_856 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_660 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_660, 0) = ((MR_Box) (Spec_856));
                  MR_hl_field(MR_mktag(1), Var_660, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_660));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            // case ";"
            ;
            {
              MR_Word SubGoalTermA_959;
              MR_Word SubGoalTermB_960;
              MR_Word Var_625;
              MR_Word Var_626;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTermA_959 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_625 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_625 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTermB_960 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_625, (MR_Integer) 0))));
                  Var_626 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_625, (MR_Integer) 1))));
                  succeeded = (Var_626 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word CondGoalTerm_63;
                MR_Word ThenGoalTerm_64;
                MR_Word Var_627;
                MR_String Var_628;
                MR_Word Var_629;
                MR_Word Var_630;
                MR_Word Var_631;

                succeeded = ((MR_tag((MR_Word) SubGoalTermA_959)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_627 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoalTermA_959, (MR_Integer) 0))));
                  Var_629 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoalTermA_959, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_627)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_628 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_627, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_628, (MR_String) "->") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_629 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        CondGoalTerm_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_629, (MR_Integer) 0))));
                        Var_630 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_629, (MR_Integer) 1))));
                        succeeded = (Var_630 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ThenGoalTerm_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_630, (MR_Integer) 0))));
                          Var_631 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_630, (MR_Integer) 1))));
                          succeeded = (Var_631 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word MaybeCondGoal_67;
                  MR_Word MaybeThenGoal_68;
                  MR_Word MaybeElseGoal_69;
                  MR_Word STATE_VARIABLE_VarSet_632_632;
                  MR_Word STATE_VARIABLE_VarSet_633_633;
                  MR_Word CondGoal_70;
                  MR_Word CondWarningSpecs_71;
                  MR_Word ThenGoal_72;
                  MR_Word ThenWarningSpecs_73;
                  MR_Word ElseGoal_74;
                  MR_Word ElseWarningSpecs_75;
                  MR_Word Vars_915;
                  MR_Word StateVars_916;

                  parse_tree__parse_goal__parse_some_vars_goal_5_p_0(CondGoalTerm_63, ContextPieces_11, &MaybeCondGoal_67, STATE_VARIABLE_VarSet_0_147, &STATE_VARIABLE_VarSet_632_632);
                  parse_tree__parse_goal__parse_goal_5_p_0(ThenGoalTerm_64, ContextPieces_11, &MaybeThenGoal_68, STATE_VARIABLE_VarSet_632_632, &STATE_VARIABLE_VarSet_633_633);
                  parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermB_960, ContextPieces_11, &MaybeElseGoal_69, STATE_VARIABLE_VarSet_633_633, STATE_VARIABLE_VarSet_148);
                  succeeded = ((MR_tag((MR_Word) MaybeCondGoal_67)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Vars_915 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_67, (MR_Integer) 0))));
                    StateVars_916 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_67, (MR_Integer) 1))));
                    CondGoal_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_67, (MR_Integer) 2))));
                    CondWarningSpecs_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_67, (MR_Integer) 3))));
                    succeeded = ((MR_tag((MR_Word) MaybeThenGoal_68)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      ThenGoal_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThenGoal_68, (MR_Integer) 0))));
                      ThenWarningSpecs_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThenGoal_68, (MR_Integer) 1))));
                      succeeded = ((MR_tag((MR_Word) MaybeElseGoal_69)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        ElseGoal_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElseGoal_69, (MR_Integer) 0))));
                        ElseWarningSpecs_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElseGoal_69, (MR_Integer) 1))));
                      }
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word Var_635;
                    MR_Word Goal_909;
                    MR_Word WarningSpecs_910;

                    {
                      Goal_909 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_909, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), Goal_909, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_909, 2) = ((MR_Box) (Vars_915));
                      MR_hl_field(MR_mktag(3), Goal_909, 3) = ((MR_Box) (StateVars_916));
                      MR_hl_field(MR_mktag(3), Goal_909, 4) = ((MR_Box) (CondGoal_70));
                      MR_hl_field(MR_mktag(3), Goal_909, 5) = ((MR_Box) (ThenGoal_72));
                      MR_hl_field(MR_mktag(3), Goal_909, 6) = ((MR_Box) (ElseGoal_74));
                    }
                    Var_635 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ThenWarningSpecs_73, ElseWarningSpecs_75);
                    WarningSpecs_910 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), CondWarningSpecs_71, Var_635);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_909));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WarningSpecs_910));
                    }
                  }
                  else
                  {
                    MR_Word Var_636;
                    MR_Word Var_637;
                    MR_Word Var_638;
                    MR_Word Var_639;
                    MR_Word Specs_911;

                    Var_636 = parse_tree__maybe_error__get_any_errors_warnings4_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeCondGoal_67);
                    Var_638 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeThenGoal_68);
                    Var_639 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeElseGoal_69);
                    Var_637 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_638, Var_639);
                    Specs_911 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_636, Var_637);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_911));
                    }
                  }
                }
                else
                {
                  MR_Word STATE_VARIABLE_VarSet_640_640;
                  MR_Word MaybeSubGoalA_935;
                  MR_Word MaybeSubGoalB_936;
                  MR_Word SubGoalA_928;
                  MR_Word GoalWarningSpecsA_929;
                  MR_Word SubGoalB_930;
                  MR_Word GoalWarningSpecsB_931;

                  parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermA_959, ContextPieces_11, &MaybeSubGoalA_935, STATE_VARIABLE_VarSet_0_147, &STATE_VARIABLE_VarSet_640_640);
                  parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermB_960, ContextPieces_11, &MaybeSubGoalB_936, STATE_VARIABLE_VarSet_640_640, STATE_VARIABLE_VarSet_148);
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoalA_935)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoalA_928 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_935, (MR_Integer) 0))));
                    GoalWarningSpecsA_929 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_935, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) MaybeSubGoalB_936)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      SubGoalB_930 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_936, (MR_Integer) 0))));
                      GoalWarningSpecsB_931 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_936, (MR_Integer) 1))));
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word Goal_922;
                    MR_Word WarningSpecs_923;

                    {
                      Goal_922 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_922, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), Goal_922, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_922, 2) = ((MR_Box) (SubGoalA_928));
                      MR_hl_field(MR_mktag(3), Goal_922, 3) = ((MR_Box) (SubGoalB_930));
                    }
                    WarningSpecs_923 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), GoalWarningSpecsA_929, GoalWarningSpecsB_931);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_922));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WarningSpecs_923));
                    }
                  }
                  else
                  {
                    MR_Word Var_642;
                    MR_Word Var_643;
                    MR_Word Specs_924;

                    Var_642 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalA_935);
                    Var_643 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalB_936);
                    Specs_924 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_642, Var_643);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_924));
                    }
                  }
                }
              }
              else
              {
                MR_Word Var_644;
                MR_Word Spec_952;

                Spec_952 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_644 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_644, 0) = ((MR_Box) (Spec_952));
                  MR_hl_field(MR_mktag(1), Var_644, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_644));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            // case "<=", "<=>", "=>"
            ;
            {
              MR_Word TermB_100;
              MR_Word TermA_1154;
              MR_Word Var_264;
              MR_Word Var_265;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TermA_1154 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_264 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_264 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  TermB_100 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_264, (MR_Integer) 0))));
                  Var_265 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_264, (MR_Integer) 1))));
                  succeeded = (Var_265 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeGoalA_101;
                MR_Word MaybeGoalB_102;
                MR_Word STATE_VARIABLE_VarSet_266_266;
                MR_Word GoalA_103;
                MR_Word GoalB_104;
                MR_Word GoalWarningSpecsA_1140;
                MR_Word GoalWarningSpecsB_1141;

                parse_tree__parse_goal__parse_goal_5_p_0(TermA_1154, ContextPieces_11, &MaybeGoalA_101, STATE_VARIABLE_VarSet_0_147, &STATE_VARIABLE_VarSet_266_266);
                parse_tree__parse_goal__parse_goal_5_p_0(TermB_100, ContextPieces_11, &MaybeGoalB_102, STATE_VARIABLE_VarSet_266_266, STATE_VARIABLE_VarSet_148);
                succeeded = ((MR_tag((MR_Word) MaybeGoalA_101)) == (MR_Integer) 1);
                if (succeeded)
                {
                  GoalA_103 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoalA_101, (MR_Integer) 0))));
                  GoalWarningSpecsA_1140 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoalA_101, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) MaybeGoalB_102)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    GoalB_104 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoalB_102, (MR_Integer) 0))));
                    GoalWarningSpecsB_1141 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoalB_102, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word Goal_1134;
                  MR_Word WarningSpecs_1135;

                  if ((strcmp(Functor_8, (MR_String) "<=") == 0))
                    {
                      Goal_1134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1134, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                      MR_hl_field(MR_mktag(3), Goal_1134, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1134, 2) = ((MR_Box) (GoalB_104));
                      MR_hl_field(MR_mktag(3), Goal_1134, 3) = ((MR_Box) (GoalB_104));
                    }
                  else
                  if ((strcmp(Functor_8, (MR_String) "=>") == 0))
                    {
                      Goal_1134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1134, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                      MR_hl_field(MR_mktag(3), Goal_1134, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1134, 2) = ((MR_Box) (GoalA_103));
                      MR_hl_field(MR_mktag(3), Goal_1134, 3) = ((MR_Box) (GoalB_104));
                    }
                  else
                    {
                      Goal_1134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1134, 0) = ((MR_Box) ((MR_Unsigned) 19U));
                      MR_hl_field(MR_mktag(3), Goal_1134, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1134, 2) = ((MR_Box) (GoalA_103));
                      MR_hl_field(MR_mktag(3), Goal_1134, 3) = ((MR_Box) (GoalB_104));
                    }
                  WarningSpecs_1135 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), GoalWarningSpecsA_1140, GoalWarningSpecsB_1141);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1134));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WarningSpecs_1135));
                  }
                }
                else
                {
                  MR_Word Var_269;
                  MR_Word Var_270;
                  MR_Word Specs_1136;

                  Var_269 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeGoalA_101);
                  Var_270 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeGoalB_102);
                  Specs_1136 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_269, Var_270);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1136));
                  }
                }
              }
              else
              {
                MR_Word Var_271;
                MR_Word Spec_1147;

                Spec_1147 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_271, 0) = ((MR_Box) (Spec_1147));
                  MR_hl_field(MR_mktag(1), Var_271, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_271));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            // case "=", "is"
            ;
            {
              MR_Word TermA0_145;
              MR_Word TermB0_146;
              MR_Word Var_149;
              MR_Word Var_150;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TermA0_145 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_149 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  TermB0_146 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_149, (MR_Integer) 0))));
                  Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_149, (MR_Integer) 1))));
                  succeeded = (Var_150 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word Var_151;
                MR_Word TermA_1522;
                MR_Word TermB_1523;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermA0_145, &TermA_1522);
                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermB0_146, &TermB_1523);
                {
                  Var_151 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_151, 0) = ((MR_Box) (Context_10));
                  MR_hl_field(MR_mktag(0), Var_151, 1) = ((MR_Box) (TermA_1522));
                  MR_hl_field(MR_mktag(0), Var_151, 2) = ((MR_Box) (TermB_1523));
                  MR_hl_field(MR_mktag(0), Var_151, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_151));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              else
              {
                MR_Word Var_154;
                MR_Word Spec_1524;

                Spec_1524 = parse_tree__parse_goal__should_have_two_terms_infix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (Spec_1524));
                  MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_154));
                }
              }
              *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            // case "\+", "not"
            ;
            {
              MR_Word SubGoalTerm_804;
              MR_Word Var_698;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_804 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_698 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_698 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_798;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_804, ContextPieces_11, &MaybeSubGoal_798, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                if (((MR_tag((MR_Word) MaybeSubGoal_798)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_798;
                else
                {
                  MR_Word SubGoal_790 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_798, (MR_Integer) 0))));
                  MR_Word SubGoalWarningSpecs_791 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_798, (MR_Integer) 1))));
                  MR_Word Goal_792;

                  {
                    Goal_792 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_792, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), Goal_792, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_792, 2) = ((MR_Box) (SubGoal_790));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_792));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_791));
                  }
                }
              }
              else
              {
                MR_Word Var_700;
                MR_Word Spec_803;

                Spec_803 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_700 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_700, 0) = ((MR_Box) (Spec_803));
                  MR_hl_field(MR_mktag(1), Var_700, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_700));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            // case "all"
            ;
            {
              MR_Word QVarsTerm_43;
              MR_Word SubGoalTerm_831;
              MR_Word Var_684;
              MR_Word Var_685;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                QVarsTerm_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_684 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_684 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_831 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_684, (MR_Integer) 0))));
                  Var_685 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_684, (MR_Integer) 1))));
                  succeeded = (Var_685 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word VarsContextPieces_44;
                MR_Word MaybeVars_45;
                MR_Word Var_686;
                MR_Word MaybeSubGoal_824;
                MR_Word GenericVarSet_829;
                MR_Word Vars0_46;
                MR_Word StateVars0_47;
                MR_Word SubGoal_820;
                MR_Word SubGoalWarningSpecs_821;
                MR_Word Var_688;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_147, &GenericVarSet_829);
                Var_686 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[34])));
                VarsContextPieces_44 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_11, Var_686);
                parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), QVarsTerm_43, GenericVarSet_829, VarsContextPieces_44, &MaybeVars_45);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_831, ContextPieces_11, &MaybeSubGoal_824, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                succeeded = ((MR_tag((MR_Word) MaybeVars_45)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_688 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_45, (MR_Integer) 0))));
                  Vars0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_688, (MR_Integer) 0))));
                  StateVars0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_688, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_824)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoal_820 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_824, (MR_Integer) 0))));
                    SubGoalWarningSpecs_821 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_824, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word Vars_48;
                  MR_Word StateVars_49;
                  MR_Word Goal1_50;
                  MR_Word Goal_818;

                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[6]), Vars0_46, &Vars_48);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[7]), StateVars0_47, &StateVars_49);
                  if ((StateVars_49 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal1_50 = SubGoal_820;
                  else
                    {
                      Goal1_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal1_50, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal1_50, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                      MR_hl_field(MR_mktag(3), Goal1_50, 2) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal1_50, 3) = ((MR_Box) (StateVars_49));
                      MR_hl_field(MR_mktag(3), Goal1_50, 4) = ((MR_Box) (SubGoal_820));
                    }
                  if ((Vars_48 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal_818 = Goal1_50;
                  else
                    {
                      Goal_818 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_818, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal_818, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
                      MR_hl_field(MR_mktag(3), Goal_818, 2) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_818, 3) = ((MR_Box) (Vars_48));
                      MR_hl_field(MR_mktag(3), Goal_818, 4) = ((MR_Box) (Goal1_50));
                    }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_818));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_821));
                  }
                }
                else
                {
                  MR_Word Var_693;
                  MR_Word Var_694;
                  MR_Word Specs_819;

                  Var_693 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[2]), MaybeVars_45);
                  Var_694 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_824);
                  Specs_819 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_693, Var_694);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_819));
                  }
                }
              }
              else
              {
                MR_Word Var_696;
                MR_Word Spec_830;

                Spec_830 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of variables", Functor_8);
                {
                  Var_696 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_696, 0) = ((MR_Box) (Spec_830));
                  MR_hl_field(MR_mktag(1), Var_696, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_696));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 7:
          {
            // case "arbitrary"
            ;
            {
              MR_Word SubGoalTerm_1322;
              MR_Word VarsTerm_1335;
              MR_Word Var_220;
              MR_Word Var_221;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_1335 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_220 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_220 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_1322 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_220, (MR_Integer) 0))));
                  Var_221 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_220, (MR_Integer) 1))));
                  succeeded = (Var_221 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1306;
                MR_Word GenericVarSet_1311;
                MR_Word MaybeVars_1312;
                MR_Word SubGoal_1294;
                MR_Word SubGoalWarningSpecs_1295;
                MR_Word Vars0_1298;
                MR_Word StateVars0_1299;
                MR_Word DotSVars0_1302;
                MR_Word ColonSVars0_1303;
                MR_Word Var_223;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_147, &GenericVarSet_1311);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_1335, GenericVarSet_1311, ContextPieces_11, &MaybeVars_1312);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1322, ContextPieces_11, &MaybeSubGoal_1306, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                succeeded = ((MR_tag((MR_Word) MaybeVars_1312)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_1312, (MR_Integer) 0))));
                  Vars0_1298 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_223, (MR_Integer) 0))));
                  StateVars0_1299 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_223, (MR_Integer) 1))));
                  DotSVars0_1302 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_223, (MR_Integer) 2))));
                  ColonSVars0_1303 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_223, (MR_Integer) 3))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_1306)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoal_1294 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1306, (MR_Integer) 0))));
                    SubGoalWarningSpecs_1295 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1306, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word Goal_1288;
                  MR_Word Vars_1289;
                  MR_Word StateVars_1290;
                  MR_Word DotSVars_1291;
                  MR_Word ColonSVars_1292;

                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[8]), Vars0_1298, &Vars_1289);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[9]), StateVars0_1299, &StateVars_1290);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[10]), DotSVars0_1302, &DotSVars_1291);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[11]), ColonSVars0_1303, &ColonSVars_1292);
                  {
                    Goal_1288 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1288, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                    MR_hl_field(MR_mktag(3), Goal_1288, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1288, 2) = ((MR_Box) (Vars_1289));
                    MR_hl_field(MR_mktag(3), Goal_1288, 3) = ((MR_Box) (StateVars_1290));
                    MR_hl_field(MR_mktag(3), Goal_1288, 4) = ((MR_Box) (DotSVars_1291));
                    MR_hl_field(MR_mktag(3), Goal_1288, 5) = ((MR_Box) (ColonSVars_1292));
                    MR_hl_field(MR_mktag(3), Goal_1288, 6) = ((MR_Box) (SubGoal_1294));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1288));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_1295));
                  }
                }
                else
                {
                  MR_Word Var_228;
                  MR_Word Var_229;
                  MR_Word Specs_1293;

                  Var_228 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[8]), MaybeVars_1312);
                  Var_229 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_1306);
                  Specs_1293 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_228, Var_229);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1293));
                  }
                }
              }
              else
              {
                MR_Word Var_231;
                MR_Word Spec_1321;

                Spec_1321 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of variables", Functor_8);
                {
                  Var_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_231, 0) = ((MR_Box) (Spec_1321));
                  MR_hl_field(MR_mktag(1), Var_231, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_231));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 8:
          {
            // case "atomic"
            ;
            {
              MR_Word SubGoalsTerm_113;
              MR_Word ParamsTerm_1222;
              MR_Word Var_246;
              MR_Word Var_247;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ParamsTerm_1222 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_246 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_246 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalsTerm_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_246, (MR_Integer) 0))));
                  Var_247 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_246, (MR_Integer) 1))));
                  succeeded = (Var_247 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoals_114;
                MR_Word GenericVarSet_1212;
                MR_Word MaybeParams_1213;
                MR_Word MainGoal_115;
                MR_Word OrElseGoals_116;
                MR_Word SubGoalWarningSpecs_1204;
                MR_Word Params_1207;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_147, &GenericVarSet_1212);
                parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_111_109_105_99_95_112_97_114_97_109_115_95_95_91_49_93_95_48_4_p_0(ParamsTerm_1222, GenericVarSet_1212, &MaybeParams_1213);
                parse_tree__parse_goal__parse_atomic_subexpr_4_p_0(SubGoalsTerm_113, &MaybeSubGoals_114, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                succeeded = ((MR_tag((MR_Word) MaybeParams_1213)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Params_1207 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeParams_1213, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoals_114)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    MainGoal_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoals_114, (MR_Integer) 0))));
                    OrElseGoals_116 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoals_114, (MR_Integer) 1))));
                    SubGoalWarningSpecs_1204 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoals_114, (MR_Integer) 2))));
                  }
                }
                if (succeeded)
                {
                  MR_Word MaybeComponents_1202;

                  parse_tree__parse_goal__convert_atomic_params_3_p_0(ParamsTerm_1222, Params_1207, &MaybeComponents_1202);
                  if (((MR_tag((MR_Word) MaybeComponents_1202)) == (MR_Integer) 0))
                  {
                    MR_Word Var_249;
                    MR_Word Specs_1197 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeComponents_1202, (MR_Integer) 0))));

                    Var_249 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_1197, SubGoalWarningSpecs_1204);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_249));
                    }
                  }
                  else
                  {
                    MR_Word Outer_117 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_1202, (MR_Integer) 0))));
                    MR_Word Inner_118 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_1202, (MR_Integer) 1))));
                    MR_Word MaybeOutputVars_119 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_1202, (MR_Integer) 2))));
                    MR_Word Goal_1196;

                    {
                      Goal_1196 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1196, 0) = ((MR_Box) ((MR_Unsigned) 16U));
                      MR_hl_field(MR_mktag(3), Goal_1196, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1196, 2) = ((MR_Box) (Outer_117));
                      MR_hl_field(MR_mktag(3), Goal_1196, 3) = ((MR_Box) (Inner_118));
                      MR_hl_field(MR_mktag(3), Goal_1196, 4) = ((MR_Box) (MaybeOutputVars_119));
                      MR_hl_field(MR_mktag(3), Goal_1196, 5) = ((MR_Box) (MainGoal_115));
                      MR_hl_field(MR_mktag(3), Goal_1196, 6) = ((MR_Box) (OrElseGoals_116));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1196));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_1204));
                    }
                  }
                }
                else
                {
                  MR_Word Var_250;
                  MR_Word Var_251;
                  MR_Word Specs_1203;

                  Var_250 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[6]), MaybeParams_1213);
                  Var_251 = parse_tree__maybe_error__get_any_errors_warnings3_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[7]), MaybeSubGoals_114);
                  Specs_1203 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_250, Var_251);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1203));
                  }
                }
              }
              else
              {
                MR_Word Var_253;
                MR_Word Spec_1216;

                Spec_1216 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of atomic parameters", Functor_8);
                {
                  Var_253 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_253, 0) = ((MR_Box) (Spec_1216));
                  MR_hl_field(MR_mktag(1), Var_253, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_253));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 9:
          {
            // case "catch"
            ;
            parse_tree__parse_goal__parse_catch_then_try_term_args_7_p_0(Args_9, (MR_Word) ((MR_Unsigned) 0U), Context_10, ContextPieces_11, MaybeGoal_12, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 10:
          {
            // case "catch_any"
            ;
            {
              MR_Word TermA_92;
              MR_Word ArrowTerm_93;
              MR_Word Var_273;
              MR_Word Var_274;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TermA_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_273 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_273 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ArrowTerm_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_273, (MR_Integer) 0))));
                  Var_274 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_273, (MR_Integer) 1))));
                  succeeded = (Var_274 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeCatchAnyExpr_94;
                MR_Word STATE_VARIABLE_VarSet_275_275;

                parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_97_116_99_104_95_97_110_121_95_116_101_114_109_95_95_91_50_93_95_48_6_p_0(ArrowTerm_93, ContextPieces_11, &MaybeCatchAnyExpr_94, STATE_VARIABLE_VarSet_0_147, &STATE_VARIABLE_VarSet_275_275);
                if (((MR_tag((MR_Word) MaybeCatchAnyExpr_94)) == (MR_Integer) 0))
                {
                  *MaybeGoal_12 = (MR_Word) (MaybeCatchAnyExpr_94);
                  *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_275_275;
                }
                else
                {
                  MR_Word CatchAnyExpr_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatchAnyExpr_94, (MR_Integer) 0))));
                  MR_Word CatchWarningSpecs_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatchAnyExpr_94, (MR_Integer) 1))));
                  MR_Word MaybeGoal0_1112;
                  MR_Word TermAArgs_97;
                  MR_Word Var_276;
                  MR_String Var_277;

                  succeeded = ((MR_tag((MR_Word) TermA_92)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_276 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermA_92, (MR_Integer) 0))));
                    TermAArgs_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermA_92, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_276)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_277 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_276, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_277, (MR_String) "catch") == 0);
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word Var_278;

                    {
                      Var_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_278, 0) = ((MR_Box) (CatchAnyExpr_95));
                    }
                    parse_tree__parse_goal__parse_catch_then_try_term_args_7_p_0(TermAArgs_97, Var_278, Context_10, ContextPieces_11, &MaybeGoal0_1112, STATE_VARIABLE_VarSet_275_275, STATE_VARIABLE_VarSet_148);
                  }
                  else
                  {
                    MR_Word Var_281;

                    {
                      Var_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_281, 0) = ((MR_Box) (CatchAnyExpr_95));
                    }
                    parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_101_108_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_52_93_95_48_8_p_0(TermA_92, (MR_Word) ((MR_Unsigned) 0U), Var_281, ContextPieces_11, &MaybeGoal0_1112, STATE_VARIABLE_VarSet_275_275, STATE_VARIABLE_VarSet_148);
                  }
                  if (((MR_tag((MR_Word) MaybeGoal0_1112)) == (MR_Integer) 0))
                  {
                    MR_Word Var_283;
                    MR_Word Specs_1109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeGoal0_1112, (MR_Integer) 0))));

                    Var_283 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), CatchWarningSpecs_96, Specs_1109);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_283));
                    }
                  }
                  else
                  {
                    MR_Word GoalWarningSpecs_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal0_1112, (MR_Integer) 1))));
                    MR_Word Var_284;
                    MR_Word Goal_1108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal0_1112, (MR_Integer) 0))));

                    Var_284 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), CatchWarningSpecs_96, GoalWarningSpecs_99);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1108));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_284));
                    }
                  }
                }
              }
              else
              {
                MR_Word Var_314;
                MR_Word Spec_1122;

                {
                  Spec_1122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_1122, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_non_call_goal\'/7"));
                  MR_hl_field(MR_mktag(1), Spec_1122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_1122, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_1122, 3) = ((MR_Box) (Context_10));
                  MR_hl_field(MR_mktag(1), Spec_1122, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[50])));
                }
                {
                  Var_314 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_314, 0) = ((MR_Box) (Spec_1122));
                  MR_hl_field(MR_mktag(1), Var_314, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_314));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 11:
          {
            // case "disable_warning", "disable_warnings"
            ;
            {
              MR_Word WarningsTerm_23;
              MR_Word SubGoalTerm_776;
              MR_Word Var_702;
              MR_Word Var_703;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                WarningsTerm_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_702 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_702 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_776 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_702, (MR_Integer) 0))));
                  Var_703 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_702, (MR_Integer) 1))));
                  succeeded = (Var_703 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word GenericVarSet_24;
                MR_Word MaybeWarnings_25;
                MR_Word MaybeSubGoal_770;
                MR_Word Warnings_26;
                MR_Word WarningsWarningSpecs_27;
                MR_Word SubGoal_765;
                MR_Word SubGoalWarningSpecs_766;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_147, &GenericVarSet_24);
                parse_tree__parse_goal__parse_warnings_6_p_0(GenericVarSet_24, WarningsTerm_23, Functor_8, ContextPieces_11, (MR_Integer) 1, &MaybeWarnings_25);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_776, ContextPieces_11, &MaybeSubGoal_770, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                succeeded = ((MR_tag((MR_Word) MaybeWarnings_25)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Warnings_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWarnings_25, (MR_Integer) 0))));
                  WarningsWarningSpecs_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWarnings_25, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_770)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoal_765 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_770, (MR_Integer) 0))));
                    SubGoalWarningSpecs_766 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_770, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word WarningSpecs_28;
                  MR_Word WarningsContext_29;
                  MR_Word WarningsBag_30;
                  MR_Word WarningsCounts_31;
                  MR_Word NonDuplicateWarnings_32;
                  MR_Word DuplicateSpecs_33;
                  MR_Word Var_706;

                  WarningSpecs_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), WarningsWarningSpecs_27, SubGoalWarningSpecs_766);
                  WarningsContext_29 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), WarningsTerm_23);
                  Var_706 = mercury__bag__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0));
                  mercury__bag__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), Warnings_26, Var_706, &WarningsBag_30);
                  mercury__bag__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), WarningsBag_30, &WarningsCounts_31);
                  parse_tree__parse_goal__generate_warnings_for_duplicate_warnings_5_p_0(WarningsContext_29, ContextPieces_11, WarningsCounts_31, &NonDuplicateWarnings_32, &DuplicateSpecs_33);
                  if ((DuplicateSpecs_33 == (MR_Word) ((MR_Unsigned) 0U)))
                    if ((NonDuplicateWarnings_32 == (MR_Word) ((MR_Unsigned) 0U)))
                      if ((WarningsWarningSpecs_27 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MR_Word Pieces_36;
                        MR_Word Var_708;
                        MR_Word Var_709;
                        MR_Word Var_711;
                        MR_Word Var_714;
                        MR_Word Var_717;
                        MR_Word Var_718;
                        MR_Word Var_731;
                        MR_Word Spec_752;

                        Var_708 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_11);
                        {
                          Var_718 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_718, 0) = ((MR_Box) (Functor_8));
                        }
                        {
                          Var_717 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_717, 0) = ((MR_Box) (Var_718));
                          MR_hl_field(MR_mktag(1), Var_717, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[54])));
                        }
                        {
                          Var_714 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_714, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[381])));
                          MR_hl_field(MR_mktag(1), Var_714, 1) = ((MR_Box) (Var_717));
                        }
                        {
                          Var_711 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_711, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[355])));
                          MR_hl_field(MR_mktag(1), Var_711, 1) = ((MR_Box) (Var_714));
                        }
                        {
                          Var_709 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_709, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(1), Var_709, 1) = ((MR_Box) (Var_711));
                        }
                        Pieces_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_708, Var_709);
                        {
                          Spec_752 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Spec_752, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_non_call_goal\'/7"));
                          MR_hl_field(MR_mktag(1), Spec_752, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(1), Spec_752, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                          MR_hl_field(MR_mktag(1), Spec_752, 3) = ((MR_Box) (WarningsContext_29));
                          MR_hl_field(MR_mktag(1), Spec_752, 4) = ((MR_Box) (Pieces_36));
                        }
                        {
                          Var_731 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_731, 0) = ((MR_Box) (Spec_752));
                          MR_hl_field(MR_mktag(1), Var_731, 1) = ((MR_Box) (WarningSpecs_28));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          *MaybeGoal_12 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_731));
                        }
                      }
                      else
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *MaybeGoal_12 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SubGoal_765));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WarningSpecs_28));
                        }
                    else
                    {
                      MR_Word HeadWarning_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonDuplicateWarnings_32, (MR_Integer) 0))));
                      MR_Word TailWarnings_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonDuplicateWarnings_32, (MR_Integer) 1))));
                      MR_Word Goal_751;

                      {
                        Goal_751 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Goal_751, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                        MR_hl_field(MR_mktag(3), Goal_751, 1) = ((MR_Box) (Context_10));
                        MR_hl_field(MR_mktag(3), Goal_751, 2) = (MR_Box) ((MR_Unsigned) (HeadWarning_34));
                        MR_hl_field(MR_mktag(3), Goal_751, 3) = ((MR_Box) (TailWarnings_35));
                        MR_hl_field(MR_mktag(3), Goal_751, 4) = ((MR_Box) (SubGoal_765));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeGoal_12 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_751));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WarningSpecs_28));
                      }
                    }
                  else
                  {
                    MR_Word Var_707;

                    Var_707 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), DuplicateSpecs_33, WarningSpecs_28);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_707));
                    }
                  }
                }
                else
                {
                  MR_Word Var_732;
                  MR_Word Var_733;
                  MR_Word Specs_763;

                  Var_732 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[3]), MaybeWarnings_25);
                  Var_733 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_770);
                  Specs_763 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_732, Var_733);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_763));
                  }
                }
              }
              else
              {
                MR_Word Var_735;
                MR_Word Spec_775;

                Spec_775 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of warnings to disable", Functor_8);
                {
                  Var_735 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_735, 0) = ((MR_Box) (Spec_775));
                  MR_hl_field(MR_mktag(1), Var_735, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_735));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 12:
          {
            // case "else"
            ;
            {
              MR_Word CondThenTerm_76;
              MR_Word ElseGoalTerm_1053;
              MR_Word Var_501;
              MR_Word Var_502;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                CondThenTerm_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_501 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_501 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ElseGoalTerm_1053 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_501, (MR_Integer) 0))));
                  Var_502 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_501, (MR_Integer) 1))));
                  succeeded = (Var_502 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word CondContext_78;
                MR_Word CondGoalTerm_1031;
                MR_Word ThenGoalTerm_1032;
                MR_Word Var_503;
                MR_String Var_504;
                MR_Word Var_505;
                MR_Word Var_506;
                MR_Word Var_507;
                MR_String Var_508;
                MR_Word Var_509;
                MR_Word Var_510;
                MR_Word Var_511;
                MR_Word Var_512;

                succeeded = ((MR_tag((MR_Word) CondThenTerm_76)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_503 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_76, (MR_Integer) 0))));
                  Var_505 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_76, (MR_Integer) 1))));
                  CondContext_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_76, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) Var_503)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_504 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_503, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_504, (MR_String) "if") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_505 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_506 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_505, (MR_Integer) 0))));
                        Var_512 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_505, (MR_Integer) 1))));
                        succeeded = (Var_512 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) Var_506)) == (MR_Integer) 0);
                          if (succeeded)
                          {
                            Var_507 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_506, (MR_Integer) 0))));
                            Var_509 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_506, (MR_Integer) 1))));
                            succeeded = ((MR_tag((MR_Word) Var_507)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Var_508 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_507, (MR_Integer) 0))));
                              succeeded = (strcmp(Var_508, (MR_String) "then") == 0);
                              if (succeeded)
                              {
                                succeeded = (Var_509 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  CondGoalTerm_1031 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_509, (MR_Integer) 0))));
                                  Var_510 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_509, (MR_Integer) 1))));
                                  succeeded = (Var_510 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    ThenGoalTerm_1032 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_510, (MR_Integer) 0))));
                                    Var_511 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_510, (MR_Integer) 1))));
                                    succeeded = (Var_511 == (MR_Word) ((MR_Unsigned) 0U));
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
                {
                  MR_Word STATE_VARIABLE_VarSet_513_513;
                  MR_Word STATE_VARIABLE_VarSet_514_514;
                  MR_Word MaybeCondGoal_1000;
                  MR_Word MaybeThenGoal_1001;
                  MR_Word MaybeElseGoal_1002;
                  MR_Word Vars_987;
                  MR_Word StateVars_988;
                  MR_Word CondGoal_989;
                  MR_Word CondWarningSpecs_990;
                  MR_Word ThenGoal_991;
                  MR_Word ThenWarningSpecs_992;
                  MR_Word ElseGoal_993;
                  MR_Word ElseWarningSpecs_994;

                  parse_tree__parse_goal__parse_some_vars_goal_5_p_0(CondGoalTerm_1031, ContextPieces_11, &MaybeCondGoal_1000, STATE_VARIABLE_VarSet_0_147, &STATE_VARIABLE_VarSet_513_513);
                  parse_tree__parse_goal__parse_goal_5_p_0(ThenGoalTerm_1032, ContextPieces_11, &MaybeThenGoal_1001, STATE_VARIABLE_VarSet_513_513, &STATE_VARIABLE_VarSet_514_514);
                  parse_tree__parse_goal__parse_goal_5_p_0(ElseGoalTerm_1053, ContextPieces_11, &MaybeElseGoal_1002, STATE_VARIABLE_VarSet_514_514, STATE_VARIABLE_VarSet_148);
                  succeeded = ((MR_tag((MR_Word) MaybeCondGoal_1000)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Vars_987 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_1000, (MR_Integer) 0))));
                    StateVars_988 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_1000, (MR_Integer) 1))));
                    CondGoal_989 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_1000, (MR_Integer) 2))));
                    CondWarningSpecs_990 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_1000, (MR_Integer) 3))));
                    succeeded = ((MR_tag((MR_Word) MaybeThenGoal_1001)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      ThenGoal_991 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThenGoal_1001, (MR_Integer) 0))));
                      ThenWarningSpecs_992 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThenGoal_1001, (MR_Integer) 1))));
                      succeeded = ((MR_tag((MR_Word) MaybeElseGoal_1002)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        ElseGoal_993 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElseGoal_1002, (MR_Integer) 0))));
                        ElseWarningSpecs_994 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElseGoal_1002, (MR_Integer) 1))));
                      }
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word Var_516;
                    MR_Word Goal_981;
                    MR_Word WarningSpecs_982;

                    {
                      Goal_981 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_981, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), Goal_981, 1) = ((MR_Box) (CondContext_78));
                      MR_hl_field(MR_mktag(3), Goal_981, 2) = ((MR_Box) (Vars_987));
                      MR_hl_field(MR_mktag(3), Goal_981, 3) = ((MR_Box) (StateVars_988));
                      MR_hl_field(MR_mktag(3), Goal_981, 4) = ((MR_Box) (CondGoal_989));
                      MR_hl_field(MR_mktag(3), Goal_981, 5) = ((MR_Box) (ThenGoal_991));
                      MR_hl_field(MR_mktag(3), Goal_981, 6) = ((MR_Box) (ElseGoal_993));
                    }
                    Var_516 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ThenWarningSpecs_992, ElseWarningSpecs_994);
                    WarningSpecs_982 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), CondWarningSpecs_990, Var_516);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_981));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WarningSpecs_982));
                    }
                  }
                  else
                  {
                    MR_Word Var_517;
                    MR_Word Var_518;
                    MR_Word Var_519;
                    MR_Word Var_520;
                    MR_Word Specs_983;

                    Var_517 = parse_tree__maybe_error__get_any_errors_warnings4_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeCondGoal_1000);
                    Var_519 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeThenGoal_1001);
                    Var_520 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeElseGoal_1002);
                    Var_518 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_519, Var_520);
                    Specs_983 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_517, Var_518);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_983));
                    }
                  }
                }
                else
                {
                  MR_Word ArrowContext_81;
                  MR_Word Var_521;
                  MR_String Var_522;
                  MR_Word Var_523;
                  MR_Word Var_524;
                  MR_Word Var_525;
                  MR_String Var_526;
                  MR_Word Var_527;
                  MR_Word Var_528;
                  MR_Word Var_529;
                  MR_Word Var_530;

                  succeeded = ((MR_tag((MR_Word) CondThenTerm_76)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_521 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_76, (MR_Integer) 0))));
                    Var_523 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_76, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_521)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_522 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_521, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_522, (MR_String) "if") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_523 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_524 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_523, (MR_Integer) 0))));
                          Var_530 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_523, (MR_Integer) 1))));
                          succeeded = (Var_530 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = ((MR_tag((MR_Word) Var_524)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Var_525 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_524, (MR_Integer) 0))));
                              Var_527 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_524, (MR_Integer) 1))));
                              ArrowContext_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_524, (MR_Integer) 2))));
                              succeeded = ((MR_tag((MR_Word) Var_525)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                Var_526 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_525, (MR_Integer) 0))));
                                succeeded = (strcmp(Var_526, (MR_String) "->") == 0);
                                if (succeeded)
                                {
                                  succeeded = (Var_527 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_528 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_527, (MR_Integer) 1))));
                                    succeeded = (Var_528 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_529 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_528, (MR_Integer) 1))));
                                      succeeded = (Var_529 == (MR_Word) ((MR_Unsigned) 0U));
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
                  {
                    MR_Word Var_554;
                    MR_Word Spec_1009;

                    {
                      Spec_1009 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Spec_1009, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_non_call_goal\'/7"));
                      MR_hl_field(MR_mktag(1), Spec_1009, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), Spec_1009, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(1), Spec_1009, 3) = ((MR_Box) (ArrowContext_81));
                      MR_hl_field(MR_mktag(1), Spec_1009, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[64])));
                    }
                    {
                      Var_554 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_554, 0) = ((MR_Box) (Spec_1009));
                      MR_hl_field(MR_mktag(1), Var_554, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_554));
                    }
                    *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
                  }
                  else
                  {
                    MR_Word ArrowContext_1021;
                    MR_Word Var_556;
                    MR_String Var_557;
                    MR_Word Var_558;
                    MR_Word Var_559;
                    MR_Word Var_560;

                    succeeded = ((MR_tag((MR_Word) CondThenTerm_76)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_556 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_76, (MR_Integer) 0))));
                      Var_558 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_76, (MR_Integer) 1))));
                      ArrowContext_1021 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_76, (MR_Integer) 2))));
                      succeeded = ((MR_tag((MR_Word) Var_556)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_557 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_556, (MR_Integer) 0))));
                        succeeded = (strcmp(Var_557, (MR_String) "->") == 0);
                        if (succeeded)
                        {
                          succeeded = (Var_558 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_559 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_558, (MR_Integer) 1))));
                            succeeded = (Var_559 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Var_560 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_559, (MR_Integer) 1))));
                              succeeded = (Var_560 == (MR_Word) ((MR_Unsigned) 0U));
                            }
                          }
                        }
                      }
                    }
                    if (succeeded)
                    {
                      MR_Word Var_593;
                      MR_Word Spec_1015;

                      {
                        Spec_1015 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Spec_1015, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_non_call_goal\'/7"));
                        MR_hl_field(MR_mktag(1), Spec_1015, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(1), Spec_1015, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(MR_mktag(1), Spec_1015, 3) = ((MR_Box) (ArrowContext_1021));
                        MR_hl_field(MR_mktag(1), Spec_1015, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[77])));
                      }
                      {
                        Var_593 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_593, 0) = ((MR_Box) (Spec_1015));
                        MR_hl_field(MR_mktag(1), Var_593, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        *MaybeGoal_12 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_593));
                      }
                      *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
                    }
                    else
                    {
                      MR_Word FullTerm_83;

                      {
                        FullTerm_83 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), FullTerm_83, 0) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[7]));
                        MR_hl_field(MR_mktag(0), FullTerm_83, 1) = ((MR_Box) (Args_9));
                        MR_hl_field(MR_mktag(0), FullTerm_83, 2) = ((MR_Box) (Context_10));
                      }
                      parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_101_108_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_52_93_95_48_8_p_0(FullTerm_83, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), ContextPieces_11, MaybeGoal_12, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                    }
                  }
                }
              }
              else
              {
                MR_Word Var_623;
                MR_Word Spec_1042;

                {
                  Spec_1042 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_1042, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_non_call_goal\'/7"));
                  MR_hl_field(MR_mktag(1), Spec_1042, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_1042, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_1042, 3) = ((MR_Box) (Context_10));
                  MR_hl_field(MR_mktag(1), Spec_1042, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[86])));
                }
                {
                  Var_623 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_623, 0) = ((MR_Box) (Spec_1042));
                  MR_hl_field(MR_mktag(1), Var_623, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_623));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 13:
          {
            // case "event"
            ;
            {
              MR_Word SubGoalTerm_1503;
              MR_Word Var_159;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1503 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_159 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1496;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1503, ContextPieces_11, &MaybeSubGoal_1496, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                if (((MR_tag((MR_Word) MaybeSubGoal_1496)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1496;
                else
                {
                  MR_Word SubGoal_1484 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1496, (MR_Integer) 0))));
                  MR_Word SubGoalWarningSpecs_1485 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1496, (MR_Integer) 1))));
                  MR_Word SubContext_132;
                  MR_Word SymName_133;
                  MR_Word CallArgs_134;
                  MR_Word Purity_1479;

                  succeeded = ((MR_tag((MR_Word) SubGoal_1484)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubContext_132 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubGoal_1484, (MR_Integer) 0))));
                    SymName_133 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubGoal_1484, (MR_Integer) 1))));
                    CallArgs_134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubGoal_1484, (MR_Integer) 2))));
                    Purity_1479 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), SubGoal_1484, (MR_Integer) 3))) & (MR_Integer) 3);
                    {
                      MR_String EventName_135;

                      succeeded = (Purity_1479 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) SymName_133)) == (MR_Integer) 0);
                        if (succeeded)
                          EventName_135 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_133, (MR_Integer) 0))));
                      }
                      if (succeeded)
                      {
                        MR_Word Goal_1476;

                        {
                          Goal_1476 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Goal_1476, 0) = ((MR_Box) ((MR_Unsigned) 20U));
                          MR_hl_field(MR_mktag(3), Goal_1476, 1) = ((MR_Box) (Context_10));
                          MR_hl_field(MR_mktag(3), Goal_1476, 2) = ((MR_Box) (EventName_135));
                          MR_hl_field(MR_mktag(3), Goal_1476, 3) = ((MR_Box) (CallArgs_134));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *MaybeGoal_12 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1476));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_1485));
                        }
                      }
                      else
                      {
                        MR_Word STATE_VARIABLE_Specs_177_177;
                        MR_Word STATE_VARIABLE_Specs_193_193;
                        MR_Word Var_194;

                        if (((MR_tag((MR_Word) SymName_133)) == (MR_Integer) 1))
                        {
                          MR_Word QualPieces_139;
                          MR_Word QualSpec_140;
                          MR_Word Var_162;

                          Var_162 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_11);
                          QualPieces_139 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_162, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[91])));
                          {
                            QualSpec_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), QualSpec_140, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_non_call_goal\'/7"));
                            MR_hl_field(MR_mktag(1), QualSpec_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(MR_mktag(1), QualSpec_140, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                            MR_hl_field(MR_mktag(1), QualSpec_140, 3) = ((MR_Box) (SubContext_132));
                            MR_hl_field(MR_mktag(1), QualSpec_140, 4) = ((MR_Box) (QualPieces_139));
                          }
                          {
                            STATE_VARIABLE_Specs_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_177_177, 0) = ((MR_Box) (QualSpec_140));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_177_177, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                        }
                        else
                          STATE_VARIABLE_Specs_177_177 = (MR_Word) ((MR_Unsigned) 0U);
                        switch (Purity_1479) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 2:
                          case (MR_Integer) 1:
                            {
                              MR_Word PurityPieces_141;
                              MR_Word PuritySpec_142;
                              MR_Word Var_178;

                              Var_178 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_11);
                              PurityPieces_141 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_178, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[96])));
                              {
                                PuritySpec_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), PuritySpec_142, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_non_call_goal\'/7"));
                                MR_hl_field(MR_mktag(1), PuritySpec_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                MR_hl_field(MR_mktag(1), PuritySpec_142, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                                MR_hl_field(MR_mktag(1), PuritySpec_142, 3) = ((MR_Box) (SubContext_132));
                                MR_hl_field(MR_mktag(1), PuritySpec_142, 4) = ((MR_Box) (PurityPieces_141));
                              }
                              {
                                STATE_VARIABLE_Specs_193_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_193_193, 0) = ((MR_Box) (PuritySpec_142));
                                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_193_193, 1) = ((MR_Box) (STATE_VARIABLE_Specs_177_177));
                              }
                            }
                            break;
                          case (MR_Integer) 0:
                            STATE_VARIABLE_Specs_193_193 = STATE_VARIABLE_Specs_177_177;
                            break;
                        }
                        Var_194 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_193_193, SubGoalWarningSpecs_1485);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          *MaybeGoal_12 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_194));
                        }
                      }
                    }
                  }
                  else
                  {
                    MR_Word Var_195;
                    MR_Word Spec_1478;

                    Spec_1478 = parse_tree__parse_goal__should_have_one_call_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                    {
                      Var_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_195, 0) = ((MR_Box) (Spec_1478));
                      MR_hl_field(MR_mktag(1), Var_195, 1) = ((MR_Box) (SubGoalWarningSpecs_1485));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_195));
                    }
                  }
                }
              }
              else
              {
                MR_Word Var_196;
                MR_Word Spec_1501;

                Spec_1501 = parse_tree__parse_goal__should_have_one_call_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_196, 0) = ((MR_Box) (Spec_1501));
                  MR_hl_field(MR_mktag(1), Var_196, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_196));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 14:
          {
            // case "fail"
            ;
            {
              MR_Word Goal_1521;

              {
                Goal_1521 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Goal_1521, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), Goal_1521, 1) = ((MR_Box) (Context_10));
              }
              if ((Args_9 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1521));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              else
              {
                MR_Word Var_156;
                MR_Word Spec_1518;

                Spec_1518 = parse_tree__parse_goal__should_have_no_args_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (Spec_1518));
                  MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_156));
                }
              }
              *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 15:
          {
            // case "if"
            ;
            {
              MR_Word Var_499;
              MR_Word Spec_1091;
              MR_Word ThenContext_84;
              MR_Word ThenGoalTerm_1089;
              MR_Word Var_418;
              MR_Word Var_419;
              MR_String Var_420;
              MR_Word Var_421;
              MR_Word Var_422;
              MR_Word Var_423;
              MR_Word Var_424;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_418 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_424 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_424 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_418)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_419 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_418, (MR_Integer) 0))));
                    Var_421 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_418, (MR_Integer) 1))));
                    ThenContext_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_418, (MR_Integer) 2))));
                    succeeded = ((MR_tag((MR_Word) Var_419)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_420 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_419, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_420, (MR_String) "then") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_421 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_422 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_421, (MR_Integer) 1))));
                          succeeded = (Var_422 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ThenGoalTerm_1089 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_422, (MR_Integer) 0))));
                            Var_423 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_422, (MR_Integer) 1))));
                            succeeded = (Var_423 == (MR_Word) ((MR_Unsigned) 0U));
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word SemiColonContext_87;
                MR_Word Var_425;
                MR_String Var_426;
                MR_Word Var_427;
                MR_Word Var_428;
                MR_Word Var_429;

                succeeded = ((MR_tag((MR_Word) ThenGoalTerm_1089)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_425 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenGoalTerm_1089, (MR_Integer) 0))));
                  Var_427 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenGoalTerm_1089, (MR_Integer) 1))));
                  SemiColonContext_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenGoalTerm_1089, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) Var_425)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_426 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_425, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_426, (MR_String) ";") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_427 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_428 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_427, (MR_Integer) 1))));
                        succeeded = (Var_428 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_429 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_428, (MR_Integer) 1))));
                          succeeded = (Var_429 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                  {
                    Spec_1091 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Spec_1091, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_non_call_goal\'/7"));
                    MR_hl_field(MR_mktag(1), Spec_1091, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), Spec_1091, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(1), Spec_1091, 3) = ((MR_Box) (SemiColonContext_87));
                    MR_hl_field(MR_mktag(1), Spec_1091, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[102])));
                  }
                else
                  {
                    Spec_1091 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Spec_1091, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_non_call_goal\'/7"));
                    MR_hl_field(MR_mktag(1), Spec_1091, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), Spec_1091, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(1), Spec_1091, 3) = ((MR_Box) (ThenContext_84));
                    MR_hl_field(MR_mktag(1), Spec_1091, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[108])));
                  }
              }
              else
                {
                  Spec_1091 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_1091, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_non_call_goal\'/7"));
                  MR_hl_field(MR_mktag(1), Spec_1091, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_1091, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_1091, 3) = ((MR_Box) (Context_10));
                  MR_hl_field(MR_mktag(1), Spec_1091, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[112])));
                }
              {
                Var_499 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_499, 0) = ((MR_Box) (Spec_1091));
                MR_hl_field(MR_mktag(1), Var_499, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeGoal_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_499));
              }
              *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 16:
          {
            // case "impure"
            ;
            {
              MR_Word SubGoalTerm_15;
              MR_Word Var_741;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_741 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_741 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeGoal0_16;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_15, ContextPieces_11, &MaybeGoal0_16, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                parse_tree__parse_goal__apply_purity_marker_to_maybe_goal_4_p_0(SubGoalTerm_15, (MR_Integer) 2, MaybeGoal0_16, MaybeGoal_12);
              }
              else
              {
                MR_Word Spec_17;
                MR_Word Var_743;

                Spec_17 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_743 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_743, 0) = ((MR_Box) (Spec_17));
                  MR_hl_field(MR_mktag(1), Var_743, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_743));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 17:
          {
            // case "promise_equivalent_solution_sets", "promise_equivalent_solutions"
            ;
            {
              MR_Word VarsTerm_120;
              MR_Word SubGoalTerm_1262;
              MR_Word Var_233;
              MR_Word Var_234;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_120 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_233 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_233 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_1262 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_233, (MR_Integer) 0))));
                  Var_234 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_233, (MR_Integer) 1))));
                  succeeded = (Var_234 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1250;
                MR_Word GenericVarSet_1255;
                MR_Word MaybeVars_1256;
                MR_Word DotSVars0_121;
                MR_Word ColonSVars0_122;
                MR_Word SubGoal_1242;
                MR_Word SubGoalWarningSpecs_1243;
                MR_Word Vars0_1246;
                MR_Word StateVars0_1247;
                MR_Word Var_236;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_147, &GenericVarSet_1255);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_120, GenericVarSet_1255, ContextPieces_11, &MaybeVars_1256);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1262, ContextPieces_11, &MaybeSubGoal_1250, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                succeeded = ((MR_tag((MR_Word) MaybeVars_1256)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_236 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_1256, (MR_Integer) 0))));
                  Vars0_1246 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_236, (MR_Integer) 0))));
                  StateVars0_1247 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_236, (MR_Integer) 1))));
                  DotSVars0_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_236, (MR_Integer) 2))));
                  ColonSVars0_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_236, (MR_Integer) 3))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_1250)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoal_1242 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1250, (MR_Integer) 0))));
                    SubGoalWarningSpecs_1243 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1250, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word DotSVars_123;
                  MR_Word ColonSVars_124;
                  MR_Word Vars_1239;
                  MR_Word StateVars_1240;

                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[12]), Vars0_1246, &Vars_1239);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[13]), StateVars0_1247, &StateVars_1240);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[14]), DotSVars0_121, &DotSVars_123);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[15]), ColonSVars0_122, &ColonSVars_124);
                  if ((strcmp(Functor_8, (MR_String) "promise_equivalent_solutions") == 0))
                  {
                    MR_Word Goal_1235;

                    {
                      Goal_1235 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1235, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(MR_mktag(3), Goal_1235, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1235, 2) = ((MR_Box) (Vars_1239));
                      MR_hl_field(MR_mktag(3), Goal_1235, 3) = ((MR_Box) (StateVars_1240));
                      MR_hl_field(MR_mktag(3), Goal_1235, 4) = ((MR_Box) (DotSVars_123));
                      MR_hl_field(MR_mktag(3), Goal_1235, 5) = ((MR_Box) (ColonSVars_124));
                      MR_hl_field(MR_mktag(3), Goal_1235, 6) = ((MR_Box) (SubGoal_1242));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1235));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_1243));
                    }
                  }
                  else
                  {
                    MR_Word Goal_1236;

                    {
                      Goal_1236 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1236, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                      MR_hl_field(MR_mktag(3), Goal_1236, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1236, 2) = ((MR_Box) (Vars_1239));
                      MR_hl_field(MR_mktag(3), Goal_1236, 3) = ((MR_Box) (StateVars_1240));
                      MR_hl_field(MR_mktag(3), Goal_1236, 4) = ((MR_Box) (DotSVars_123));
                      MR_hl_field(MR_mktag(3), Goal_1236, 5) = ((MR_Box) (ColonSVars_124));
                      MR_hl_field(MR_mktag(3), Goal_1236, 6) = ((MR_Box) (SubGoal_1242));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1236));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_1243));
                    }
                  }
                }
                else
                {
                  MR_Word Var_241;
                  MR_Word Var_242;
                  MR_Word Specs_1241;

                  Var_241 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[8]), MaybeVars_1256);
                  Var_242 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_1250);
                  Specs_1241 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_241, Var_242);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1241));
                  }
                }
              }
              else
              {
                MR_Word Var_244;
                MR_Word Spec_1261;

                Spec_1261 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of variables", Functor_8);
                {
                  Var_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_244, 0) = ((MR_Box) (Spec_1261));
                  MR_hl_field(MR_mktag(1), Var_244, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_244));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 18:
          {
            // case "promise_impure"
            ;
            {
              MR_Word SubGoalTerm_746;
              MR_Word Var_737;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_746 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_737 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_737 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_18;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_746, ContextPieces_11, &MaybeSubGoal_18, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                if (((MR_tag((MR_Word) MaybeSubGoal_18)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_18;
                else
                {
                  MR_Word SubGoal_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_18, (MR_Integer) 0))));
                  MR_Word SubGoalWarningSpecs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_18, (MR_Integer) 1))));
                  MR_Word Goal_21;

                  {
                    Goal_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_21, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), Goal_21, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_21, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), Goal_21, 3) = ((MR_Box) (SubGoal_19));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_21));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_20));
                  }
                }
              }
              else
              {
                MR_Word Var_739;
                MR_Word Spec_745;

                Spec_745 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_739 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_739, 0) = ((MR_Box) (Spec_745));
                  MR_hl_field(MR_mktag(1), Var_739, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_739));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 19:
          {
            // case "promise_pure"
            ;
            {
              MR_Word SubGoalTerm_1679;
              MR_Word Var_1653;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1679 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1653 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1653 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1662;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1679, ContextPieces_11, &MaybeSubGoal_1662, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                if (((MR_tag((MR_Word) MaybeSubGoal_1662)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1662;
                else
                {
                  MR_Word SubGoal_1655 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1662, (MR_Integer) 0))));
                  MR_Word SubGoalWarningSpecs_1656 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1662, (MR_Integer) 1))));
                  MR_Word Goal_1657;

                  {
                    Goal_1657 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1657, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), Goal_1657, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1657, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), Goal_1657, 3) = ((MR_Box) (SubGoal_1655));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1657));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_1656));
                  }
                }
              }
              else
              {
                MR_Word Var_1667;
                MR_Word Spec_1669;

                Spec_1669 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1667 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1667, 0) = ((MR_Box) (Spec_1669));
                  MR_hl_field(MR_mktag(1), Var_1667, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1667));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 20:
          {
            // case "promise_semipure"
            ;
            {
              MR_Word SubGoalTerm_1717;
              MR_Word Var_1691;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1717 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1691 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1691 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1700;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1717, ContextPieces_11, &MaybeSubGoal_1700, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                if (((MR_tag((MR_Word) MaybeSubGoal_1700)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1700;
                else
                {
                  MR_Word SubGoal_1693 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1700, (MR_Integer) 0))));
                  MR_Word SubGoalWarningSpecs_1694 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1700, (MR_Integer) 1))));
                  MR_Word Goal_1695;

                  {
                    Goal_1695 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1695, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), Goal_1695, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1695, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), Goal_1695, 3) = ((MR_Box) (SubGoal_1693));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1695));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_1694));
                  }
                }
              }
              else
              {
                MR_Word Var_1705;
                MR_Word Spec_1707;

                Spec_1707 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1705 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1705, 0) = ((MR_Box) (Spec_1707));
                  MR_hl_field(MR_mktag(1), Var_1705, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1705));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 21:
          {
            // case "require_cc_multi"
            ;
            {
              MR_Word SubGoalTerm_1372;
              MR_Word Var_216;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1372 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_216 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_216 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1366;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1372, ContextPieces_11, &MaybeSubGoal_1366, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                if (((MR_tag((MR_Word) MaybeSubGoal_1366)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1366;
                else
                {
                  MR_Word SubGoal_1358 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1366, (MR_Integer) 0))));
                  MR_Word SubGoalWarningSpecs_1359 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1366, (MR_Integer) 1))));
                  MR_Word Goal_1360;

                  {
                    Goal_1360 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1360, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(MR_mktag(3), Goal_1360, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1360, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), Goal_1360, 3) = ((MR_Box) (SubGoal_1358));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1360));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_1359));
                  }
                }
              }
              else
              {
                MR_Word Var_218;
                MR_Word Spec_1371;

                Spec_1371 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_218, 0) = ((MR_Box) (Spec_1371));
                  MR_hl_field(MR_mktag(1), Var_218, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_218));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 22:
          {
            // case "require_cc_nondet"
            ;
            {
              MR_Word SubGoalTerm_1755;
              MR_Word Var_1729;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1755 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1729 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1729 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1742;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1755, ContextPieces_11, &MaybeSubGoal_1742, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                if (((MR_tag((MR_Word) MaybeSubGoal_1742)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1742;
                else
                {
                  MR_Word SubGoal_1731 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1742, (MR_Integer) 0))));
                  MR_Word SubGoalWarningSpecs_1732 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1742, (MR_Integer) 1))));
                  MR_Word Goal_1733;

                  {
                    Goal_1733 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1733, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(MR_mktag(3), Goal_1733, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1733, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), Goal_1733, 3) = ((MR_Box) (SubGoal_1731));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1733));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_1732));
                  }
                }
              }
              else
              {
                MR_Word Var_1743;
                MR_Word Spec_1745;

                Spec_1745 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1743 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1743, 0) = ((MR_Box) (Spec_1745));
                  MR_hl_field(MR_mktag(1), Var_1743, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1743));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 23:
          {
            // case "require_complete_switch"
            ;
            {
              MR_Word SubGoalTerm_1400;
              MR_Word VarsTerm_1407;
              MR_Word Var_207;
              MR_Word Var_208;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_1407 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_207 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_207 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_1400 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_207, (MR_Integer) 0))));
                  Var_208 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_207, (MR_Integer) 1))));
                  succeeded = (Var_208 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word ProgVarsTerm_126;
                MR_Word MaybePSDCVars_127;
                MR_Word MaybeSubGoal_1394;
                MR_Word PSDCVars0_128;
                MR_Word SubGoal_1390;
                MR_Word SubGoalWarningSpecs_1391;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_1407, &ProgVarsTerm_126);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_126, STATE_VARIABLE_VarSet_0_147, ContextPieces_11, &MaybePSDCVars_127);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1400, ContextPieces_11, &MaybeSubGoal_1394, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_127)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_128 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_127, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_1394)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoal_1390 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1394, (MR_Integer) 0))));
                    SubGoalWarningSpecs_1391 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1394, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_129;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_128, SubGoal_1390, ContextPieces_11, Functor_8, &MaybePODVar_129);
                  if (((MR_tag((MR_Word) MaybePODVar_129)) == (MR_Integer) 0))
                  {
                    MR_Word RCSSpecs_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePODVar_129, (MR_Integer) 0))));
                    MR_Word Var_210;

                    Var_210 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), RCSSpecs_131, SubGoalWarningSpecs_1391);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_210));
                    }
                  }
                  else
                  {
                    MR_Word PODVar_130 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_129, (MR_Integer) 0))));
                    MR_Word Goal_1386;

                    {
                      Goal_1386 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1386, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(3), Goal_1386, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1386, 2) = ((MR_Box) (PODVar_130));
                      MR_hl_field(MR_mktag(3), Goal_1386, 3) = ((MR_Box) (SubGoal_1390));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1386));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_1391));
                    }
                  }
                }
                else
                {
                  MR_Word Var_211;
                  MR_Word Var_212;
                  MR_Word Specs_1389;

                  Var_211 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_127);
                  Var_212 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_1394);
                  Specs_1389 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_211, Var_212);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1389));
                  }
                }
              }
              else
              {
                MR_Word Var_214;
                MR_Word Spec_1399;

                Spec_1399 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
                {
                  Var_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_214, 0) = ((MR_Box) (Spec_1399));
                  MR_hl_field(MR_mktag(1), Var_214, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_214));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 24:
          {
            // case "require_det"
            ;
            {
              MR_Word SubGoalTerm_1793;
              MR_Word Var_1767;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1793 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1767 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1767 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1780;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1793, ContextPieces_11, &MaybeSubGoal_1780, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                if (((MR_tag((MR_Word) MaybeSubGoal_1780)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1780;
                else
                {
                  MR_Word SubGoal_1769 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1780, (MR_Integer) 0))));
                  MR_Word SubGoalWarningSpecs_1770 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1780, (MR_Integer) 1))));
                  MR_Word Goal_1771;

                  {
                    Goal_1771 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1771, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(MR_mktag(3), Goal_1771, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1771, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), Goal_1771, 3) = ((MR_Box) (SubGoal_1769));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1771));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_1770));
                  }
                }
              }
              else
              {
                MR_Word Var_1781;
                MR_Word Spec_1783;

                Spec_1783 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1781 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1781, 0) = ((MR_Box) (Spec_1783));
                  MR_hl_field(MR_mktag(1), Var_1781, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1781));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 25:
          {
            // case "require_erroneous"
            ;
            {
              MR_Word SubGoalTerm_1831;
              MR_Word Var_1805;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1831 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1805 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1805 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1818;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1831, ContextPieces_11, &MaybeSubGoal_1818, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                if (((MR_tag((MR_Word) MaybeSubGoal_1818)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1818;
                else
                {
                  MR_Word SubGoal_1807 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1818, (MR_Integer) 0))));
                  MR_Word SubGoalWarningSpecs_1808 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1818, (MR_Integer) 1))));
                  MR_Word Goal_1809;

                  {
                    Goal_1809 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1809, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(MR_mktag(3), Goal_1809, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1809, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), Goal_1809, 3) = ((MR_Box) (SubGoal_1807));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1809));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_1808));
                  }
                }
              }
              else
              {
                MR_Word Var_1819;
                MR_Word Spec_1821;

                Spec_1821 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1819 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1819, 0) = ((MR_Box) (Spec_1821));
                  MR_hl_field(MR_mktag(1), Var_1819, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1819));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 26:
          {
            // case "require_failure"
            ;
            {
              MR_Word SubGoalTerm_1869;
              MR_Word Var_1843;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1869 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1843 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1843 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1856;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1869, ContextPieces_11, &MaybeSubGoal_1856, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                if (((MR_tag((MR_Word) MaybeSubGoal_1856)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1856;
                else
                {
                  MR_Word SubGoal_1845 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1856, (MR_Integer) 0))));
                  MR_Word SubGoalWarningSpecs_1846 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1856, (MR_Integer) 1))));
                  MR_Word Goal_1847;

                  {
                    Goal_1847 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1847, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(MR_mktag(3), Goal_1847, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1847, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 7));
                    MR_hl_field(MR_mktag(3), Goal_1847, 3) = ((MR_Box) (SubGoal_1845));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1847));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_1846));
                  }
                }
              }
              else
              {
                MR_Word Var_1857;
                MR_Word Spec_1859;

                Spec_1859 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1857 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1857, 0) = ((MR_Box) (Spec_1859));
                  MR_hl_field(MR_mktag(1), Var_1857, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1857));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 27:
          {
            // case "require_multi"
            ;
            {
              MR_Word SubGoalTerm_1907;
              MR_Word Var_1881;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1907 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1881 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1881 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1894;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1907, ContextPieces_11, &MaybeSubGoal_1894, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                if (((MR_tag((MR_Word) MaybeSubGoal_1894)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1894;
                else
                {
                  MR_Word SubGoal_1883 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1894, (MR_Integer) 0))));
                  MR_Word SubGoalWarningSpecs_1884 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1894, (MR_Integer) 1))));
                  MR_Word Goal_1885;

                  {
                    Goal_1885 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1885, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(MR_mktag(3), Goal_1885, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1885, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), Goal_1885, 3) = ((MR_Box) (SubGoal_1883));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1885));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_1884));
                  }
                }
              }
              else
              {
                MR_Word Var_1895;
                MR_Word Spec_1897;

                Spec_1897 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1895 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1895, 0) = ((MR_Box) (Spec_1897));
                  MR_hl_field(MR_mktag(1), Var_1895, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1895));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 28:
          {
            // case "require_nondet"
            ;
            {
              MR_Word SubGoalTerm_1945;
              MR_Word Var_1919;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1945 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1919 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1919 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1932;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1945, ContextPieces_11, &MaybeSubGoal_1932, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                if (((MR_tag((MR_Word) MaybeSubGoal_1932)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1932;
                else
                {
                  MR_Word SubGoal_1921 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1932, (MR_Integer) 0))));
                  MR_Word SubGoalWarningSpecs_1922 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1932, (MR_Integer) 1))));
                  MR_Word Goal_1923;

                  {
                    Goal_1923 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1923, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(MR_mktag(3), Goal_1923, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1923, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), Goal_1923, 3) = ((MR_Box) (SubGoal_1921));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1923));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_1922));
                  }
                }
              }
              else
              {
                MR_Word Var_1933;
                MR_Word Spec_1935;

                Spec_1935 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1933 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1933, 0) = ((MR_Box) (Spec_1935));
                  MR_hl_field(MR_mktag(1), Var_1933, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1933));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 29:
          {
            // case "require_semidet"
            ;
            {
              MR_Word SubGoalTerm_1983;
              MR_Word Var_1957;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1983 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1957 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1957 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1970;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1983, ContextPieces_11, &MaybeSubGoal_1970, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                if (((MR_tag((MR_Word) MaybeSubGoal_1970)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1970;
                else
                {
                  MR_Word SubGoal_1959 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1970, (MR_Integer) 0))));
                  MR_Word SubGoalWarningSpecs_1960 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1970, (MR_Integer) 1))));
                  MR_Word Goal_1961;

                  {
                    Goal_1961 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1961, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(MR_mktag(3), Goal_1961, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1961, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), Goal_1961, 3) = ((MR_Box) (SubGoal_1959));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1961));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_1960));
                  }
                }
              }
              else
              {
                MR_Word Var_1971;
                MR_Word Spec_1973;

                Spec_1973 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1971 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1971, 0) = ((MR_Box) (Spec_1973));
                  MR_hl_field(MR_mktag(1), Var_1971, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1971));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 30:
          {
            // case "require_switch_arms_cc_multi"
            ;
            {
              MR_Word SubGoalTerm_1447;
              MR_Word VarsTerm_1454;
              MR_Word Var_198;
              MR_Word Var_199;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_1454 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_198 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_198 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_1447 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_198, (MR_Integer) 0))));
                  Var_199 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_198, (MR_Integer) 1))));
                  succeeded = (Var_199 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1435;
                MR_Word ProgVarsTerm_1440;
                MR_Word MaybePSDCVars_1441;
                MR_Word SubGoal_1427;
                MR_Word SubGoalWarningSpecs_1428;
                MR_Word PSDCVars0_1431;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_1454, &ProgVarsTerm_1440);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_1440, STATE_VARIABLE_VarSet_0_147, ContextPieces_11, &MaybePSDCVars_1441);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1447, ContextPieces_11, &MaybeSubGoal_1435, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_1441)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_1431 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_1441, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_1435)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoal_1427 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1435, (MR_Integer) 0))));
                    SubGoalWarningSpecs_1428 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1435, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_1423;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_1431, SubGoal_1427, ContextPieces_11, Functor_8, &MaybePODVar_1423);
                  if (((MR_tag((MR_Word) MaybePODVar_1423)) == (MR_Integer) 0))
                  {
                    MR_Word Var_201;
                    MR_Word RCSSpecs_1418 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePODVar_1423, (MR_Integer) 0))));

                    Var_201 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), RCSSpecs_1418, SubGoalWarningSpecs_1428);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_201));
                    }
                  }
                  else
                  {
                    MR_Word Goal_1416;
                    MR_Word PODVar_1417 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_1423, (MR_Integer) 0))));

                    {
                      Goal_1416 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1416, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Goal_1416, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1416, 2) = ((MR_Box) (PODVar_1417));
                      MR_hl_field(MR_mktag(3), Goal_1416, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), Goal_1416, 4) = ((MR_Box) (SubGoal_1427));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1416));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_1428));
                    }
                  }
                }
                else
                {
                  MR_Word Var_202;
                  MR_Word Var_203;
                  MR_Word Specs_1426;

                  Var_202 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_1441);
                  Var_203 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_1435);
                  Specs_1426 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_202, Var_203);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1426));
                  }
                }
              }
              else
              {
                MR_Word Var_205;
                MR_Word Spec_1446;

                Spec_1446 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
                {
                  Var_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_205, 0) = ((MR_Box) (Spec_1446));
                  MR_hl_field(MR_mktag(1), Var_205, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_205));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 31:
          {
            // case "require_switch_arms_cc_nondet"
            ;
            {
              MR_Word SubGoalTerm_2078;
              MR_Word VarsTerm_2079;
              MR_Word Var_1995;
              MR_Word Var_1996;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_2079 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1995 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1995 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_2078 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1995, (MR_Integer) 0))));
                  Var_1996 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1995, (MR_Integer) 1))));
                  succeeded = (Var_1996 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_2045;
                MR_Word ProgVarsTerm_2046;
                MR_Word MaybePSDCVars_2047;
                MR_Word SubGoal_2027;
                MR_Word SubGoalWarningSpecs_2028;
                MR_Word PSDCVars0_2029;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_2079, &ProgVarsTerm_2046);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_2046, STATE_VARIABLE_VarSet_0_147, ContextPieces_11, &MaybePSDCVars_2047);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_2078, ContextPieces_11, &MaybeSubGoal_2045, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_2047)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_2029 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_2047, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_2045)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoal_2027 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2045, (MR_Integer) 0))));
                    SubGoalWarningSpecs_2028 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2045, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_2011;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_2029, SubGoal_2027, ContextPieces_11, Functor_8, &MaybePODVar_2011);
                  if (((MR_tag((MR_Word) MaybePODVar_2011)) == (MR_Integer) 0))
                  {
                    MR_Word Var_1997;
                    MR_Word RCSSpecs_1998 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePODVar_2011, (MR_Integer) 0))));

                    Var_1997 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), RCSSpecs_1998, SubGoalWarningSpecs_2028);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1997));
                    }
                  }
                  else
                  {
                    MR_Word Goal_2000;
                    MR_Word PODVar_2001 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_2011, (MR_Integer) 0))));

                    {
                      Goal_2000 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_2000, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Goal_2000, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_2000, 2) = ((MR_Box) (PODVar_2001));
                      MR_hl_field(MR_mktag(3), Goal_2000, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), Goal_2000, 4) = ((MR_Box) (SubGoal_2027));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_2000));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_2028));
                    }
                  }
                }
                else
                {
                  MR_Word Var_2013;
                  MR_Word Var_2014;
                  MR_Word Specs_2015;

                  Var_2013 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_2047);
                  Var_2014 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_2045);
                  Specs_2015 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_2013, Var_2014);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_2015));
                  }
                }
              }
              else
              {
                MR_Word Var_2055;
                MR_Word Spec_2057;

                Spec_2057 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
                {
                  Var_2055 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_2055, 0) = ((MR_Box) (Spec_2057));
                  MR_hl_field(MR_mktag(1), Var_2055, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2055));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 32:
          {
            // case "require_switch_arms_det"
            ;
            {
              MR_Word SubGoalTerm_2198;
              MR_Word VarsTerm_2199;
              MR_Word Var_2115;
              MR_Word Var_2116;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_2199 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_2115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_2115 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_2198 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2115, (MR_Integer) 0))));
                  Var_2116 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2115, (MR_Integer) 1))));
                  succeeded = (Var_2116 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_2165;
                MR_Word ProgVarsTerm_2166;
                MR_Word MaybePSDCVars_2167;
                MR_Word SubGoal_2147;
                MR_Word SubGoalWarningSpecs_2148;
                MR_Word PSDCVars0_2149;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_2199, &ProgVarsTerm_2166);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_2166, STATE_VARIABLE_VarSet_0_147, ContextPieces_11, &MaybePSDCVars_2167);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_2198, ContextPieces_11, &MaybeSubGoal_2165, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_2167)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_2149 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_2167, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_2165)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoal_2147 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2165, (MR_Integer) 0))));
                    SubGoalWarningSpecs_2148 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2165, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_2131;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_2149, SubGoal_2147, ContextPieces_11, Functor_8, &MaybePODVar_2131);
                  if (((MR_tag((MR_Word) MaybePODVar_2131)) == (MR_Integer) 0))
                  {
                    MR_Word Var_2117;
                    MR_Word RCSSpecs_2118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePODVar_2131, (MR_Integer) 0))));

                    Var_2117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), RCSSpecs_2118, SubGoalWarningSpecs_2148);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2117));
                    }
                  }
                  else
                  {
                    MR_Word Goal_2120;
                    MR_Word PODVar_2121 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_2131, (MR_Integer) 0))));

                    {
                      Goal_2120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_2120, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Goal_2120, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_2120, 2) = ((MR_Box) (PODVar_2121));
                      MR_hl_field(MR_mktag(3), Goal_2120, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), Goal_2120, 4) = ((MR_Box) (SubGoal_2147));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_2120));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_2148));
                    }
                  }
                }
                else
                {
                  MR_Word Var_2133;
                  MR_Word Var_2134;
                  MR_Word Specs_2135;

                  Var_2133 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_2167);
                  Var_2134 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_2165);
                  Specs_2135 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_2133, Var_2134);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_2135));
                  }
                }
              }
              else
              {
                MR_Word Var_2175;
                MR_Word Spec_2177;

                Spec_2177 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
                {
                  Var_2175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_2175, 0) = ((MR_Box) (Spec_2177));
                  MR_hl_field(MR_mktag(1), Var_2175, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2175));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 33:
          {
            // case "require_switch_arms_erroneous"
            ;
            {
              MR_Word SubGoalTerm_2318;
              MR_Word VarsTerm_2319;
              MR_Word Var_2235;
              MR_Word Var_2236;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_2319 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_2235 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_2235 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_2318 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2235, (MR_Integer) 0))));
                  Var_2236 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2235, (MR_Integer) 1))));
                  succeeded = (Var_2236 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_2285;
                MR_Word ProgVarsTerm_2286;
                MR_Word MaybePSDCVars_2287;
                MR_Word SubGoal_2267;
                MR_Word SubGoalWarningSpecs_2268;
                MR_Word PSDCVars0_2269;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_2319, &ProgVarsTerm_2286);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_2286, STATE_VARIABLE_VarSet_0_147, ContextPieces_11, &MaybePSDCVars_2287);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_2318, ContextPieces_11, &MaybeSubGoal_2285, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_2287)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_2269 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_2287, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_2285)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoal_2267 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2285, (MR_Integer) 0))));
                    SubGoalWarningSpecs_2268 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2285, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_2251;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_2269, SubGoal_2267, ContextPieces_11, Functor_8, &MaybePODVar_2251);
                  if (((MR_tag((MR_Word) MaybePODVar_2251)) == (MR_Integer) 0))
                  {
                    MR_Word Var_2237;
                    MR_Word RCSSpecs_2238 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePODVar_2251, (MR_Integer) 0))));

                    Var_2237 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), RCSSpecs_2238, SubGoalWarningSpecs_2268);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2237));
                    }
                  }
                  else
                  {
                    MR_Word Goal_2240;
                    MR_Word PODVar_2241 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_2251, (MR_Integer) 0))));

                    {
                      Goal_2240 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_2240, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Goal_2240, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_2240, 2) = ((MR_Box) (PODVar_2241));
                      MR_hl_field(MR_mktag(3), Goal_2240, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
                      MR_hl_field(MR_mktag(3), Goal_2240, 4) = ((MR_Box) (SubGoal_2267));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_2240));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_2268));
                    }
                  }
                }
                else
                {
                  MR_Word Var_2253;
                  MR_Word Var_2254;
                  MR_Word Specs_2255;

                  Var_2253 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_2287);
                  Var_2254 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_2285);
                  Specs_2255 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_2253, Var_2254);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_2255));
                  }
                }
              }
              else
              {
                MR_Word Var_2295;
                MR_Word Spec_2297;

                Spec_2297 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
                {
                  Var_2295 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_2295, 0) = ((MR_Box) (Spec_2297));
                  MR_hl_field(MR_mktag(1), Var_2295, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2295));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 34:
          {
            // case "require_switch_arms_failure"
            ;
            {
              MR_Word SubGoalTerm_2438;
              MR_Word VarsTerm_2439;
              MR_Word Var_2355;
              MR_Word Var_2356;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_2439 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_2355 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_2355 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_2438 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2355, (MR_Integer) 0))));
                  Var_2356 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2355, (MR_Integer) 1))));
                  succeeded = (Var_2356 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_2405;
                MR_Word ProgVarsTerm_2406;
                MR_Word MaybePSDCVars_2407;
                MR_Word SubGoal_2387;
                MR_Word SubGoalWarningSpecs_2388;
                MR_Word PSDCVars0_2389;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_2439, &ProgVarsTerm_2406);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_2406, STATE_VARIABLE_VarSet_0_147, ContextPieces_11, &MaybePSDCVars_2407);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_2438, ContextPieces_11, &MaybeSubGoal_2405, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_2407)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_2389 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_2407, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_2405)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoal_2387 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2405, (MR_Integer) 0))));
                    SubGoalWarningSpecs_2388 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2405, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_2371;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_2389, SubGoal_2387, ContextPieces_11, Functor_8, &MaybePODVar_2371);
                  if (((MR_tag((MR_Word) MaybePODVar_2371)) == (MR_Integer) 0))
                  {
                    MR_Word Var_2357;
                    MR_Word RCSSpecs_2358 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePODVar_2371, (MR_Integer) 0))));

                    Var_2357 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), RCSSpecs_2358, SubGoalWarningSpecs_2388);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2357));
                    }
                  }
                  else
                  {
                    MR_Word Goal_2360;
                    MR_Word PODVar_2361 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_2371, (MR_Integer) 0))));

                    {
                      Goal_2360 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_2360, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Goal_2360, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_2360, 2) = ((MR_Box) (PODVar_2361));
                      MR_hl_field(MR_mktag(3), Goal_2360, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), Goal_2360, 4) = ((MR_Box) (SubGoal_2387));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_2360));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_2388));
                    }
                  }
                }
                else
                {
                  MR_Word Var_2373;
                  MR_Word Var_2374;
                  MR_Word Specs_2375;

                  Var_2373 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_2407);
                  Var_2374 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_2405);
                  Specs_2375 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_2373, Var_2374);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_2375));
                  }
                }
              }
              else
              {
                MR_Word Var_2415;
                MR_Word Spec_2417;

                Spec_2417 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
                {
                  Var_2415 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_2415, 0) = ((MR_Box) (Spec_2417));
                  MR_hl_field(MR_mktag(1), Var_2415, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2415));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 35:
          {
            // case "require_switch_arms_multi"
            ;
            {
              MR_Word SubGoalTerm_2558;
              MR_Word VarsTerm_2559;
              MR_Word Var_2475;
              MR_Word Var_2476;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_2559 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_2475 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_2475 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_2558 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2475, (MR_Integer) 0))));
                  Var_2476 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2475, (MR_Integer) 1))));
                  succeeded = (Var_2476 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_2525;
                MR_Word ProgVarsTerm_2526;
                MR_Word MaybePSDCVars_2527;
                MR_Word SubGoal_2507;
                MR_Word SubGoalWarningSpecs_2508;
                MR_Word PSDCVars0_2509;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_2559, &ProgVarsTerm_2526);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_2526, STATE_VARIABLE_VarSet_0_147, ContextPieces_11, &MaybePSDCVars_2527);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_2558, ContextPieces_11, &MaybeSubGoal_2525, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_2527)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_2509 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_2527, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_2525)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoal_2507 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2525, (MR_Integer) 0))));
                    SubGoalWarningSpecs_2508 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2525, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_2491;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_2509, SubGoal_2507, ContextPieces_11, Functor_8, &MaybePODVar_2491);
                  if (((MR_tag((MR_Word) MaybePODVar_2491)) == (MR_Integer) 0))
                  {
                    MR_Word Var_2477;
                    MR_Word RCSSpecs_2478 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePODVar_2491, (MR_Integer) 0))));

                    Var_2477 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), RCSSpecs_2478, SubGoalWarningSpecs_2508);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2477));
                    }
                  }
                  else
                  {
                    MR_Word Goal_2480;
                    MR_Word PODVar_2481 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_2491, (MR_Integer) 0))));

                    {
                      Goal_2480 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_2480, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Goal_2480, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_2480, 2) = ((MR_Box) (PODVar_2481));
                      MR_hl_field(MR_mktag(3), Goal_2480, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), Goal_2480, 4) = ((MR_Box) (SubGoal_2507));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_2480));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_2508));
                    }
                  }
                }
                else
                {
                  MR_Word Var_2493;
                  MR_Word Var_2494;
                  MR_Word Specs_2495;

                  Var_2493 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_2527);
                  Var_2494 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_2525);
                  Specs_2495 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_2493, Var_2494);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_2495));
                  }
                }
              }
              else
              {
                MR_Word Var_2535;
                MR_Word Spec_2537;

                Spec_2537 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
                {
                  Var_2535 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_2535, 0) = ((MR_Box) (Spec_2537));
                  MR_hl_field(MR_mktag(1), Var_2535, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2535));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 36:
          {
            // case "require_switch_arms_nondet"
            ;
            {
              MR_Word SubGoalTerm_2678;
              MR_Word VarsTerm_2679;
              MR_Word Var_2595;
              MR_Word Var_2596;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_2679 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_2595 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_2595 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_2678 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2595, (MR_Integer) 0))));
                  Var_2596 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2595, (MR_Integer) 1))));
                  succeeded = (Var_2596 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_2645;
                MR_Word ProgVarsTerm_2646;
                MR_Word MaybePSDCVars_2647;
                MR_Word SubGoal_2627;
                MR_Word SubGoalWarningSpecs_2628;
                MR_Word PSDCVars0_2629;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_2679, &ProgVarsTerm_2646);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_2646, STATE_VARIABLE_VarSet_0_147, ContextPieces_11, &MaybePSDCVars_2647);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_2678, ContextPieces_11, &MaybeSubGoal_2645, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_2647)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_2629 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_2647, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_2645)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoal_2627 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2645, (MR_Integer) 0))));
                    SubGoalWarningSpecs_2628 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2645, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_2611;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_2629, SubGoal_2627, ContextPieces_11, Functor_8, &MaybePODVar_2611);
                  if (((MR_tag((MR_Word) MaybePODVar_2611)) == (MR_Integer) 0))
                  {
                    MR_Word Var_2597;
                    MR_Word RCSSpecs_2598 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePODVar_2611, (MR_Integer) 0))));

                    Var_2597 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), RCSSpecs_2598, SubGoalWarningSpecs_2628);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2597));
                    }
                  }
                  else
                  {
                    MR_Word Goal_2600;
                    MR_Word PODVar_2601 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_2611, (MR_Integer) 0))));

                    {
                      Goal_2600 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_2600, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Goal_2600, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_2600, 2) = ((MR_Box) (PODVar_2601));
                      MR_hl_field(MR_mktag(3), Goal_2600, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), Goal_2600, 4) = ((MR_Box) (SubGoal_2627));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_2600));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_2628));
                    }
                  }
                }
                else
                {
                  MR_Word Var_2613;
                  MR_Word Var_2614;
                  MR_Word Specs_2615;

                  Var_2613 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_2647);
                  Var_2614 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_2645);
                  Specs_2615 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_2613, Var_2614);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_2615));
                  }
                }
              }
              else
              {
                MR_Word Var_2655;
                MR_Word Spec_2657;

                Spec_2657 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
                {
                  Var_2655 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_2655, 0) = ((MR_Box) (Spec_2657));
                  MR_hl_field(MR_mktag(1), Var_2655, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2655));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 37:
          {
            // case "require_switch_arms_semidet"
            ;
            {
              MR_Word SubGoalTerm_2798;
              MR_Word VarsTerm_2799;
              MR_Word Var_2715;
              MR_Word Var_2716;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_2799 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_2715 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_2715 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_2798 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2715, (MR_Integer) 0))));
                  Var_2716 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2715, (MR_Integer) 1))));
                  succeeded = (Var_2716 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_2765;
                MR_Word ProgVarsTerm_2766;
                MR_Word MaybePSDCVars_2767;
                MR_Word SubGoal_2747;
                MR_Word SubGoalWarningSpecs_2748;
                MR_Word PSDCVars0_2749;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_2799, &ProgVarsTerm_2766);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_2766, STATE_VARIABLE_VarSet_0_147, ContextPieces_11, &MaybePSDCVars_2767);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_2798, ContextPieces_11, &MaybeSubGoal_2765, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_2767)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_2749 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_2767, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_2765)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoal_2747 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2765, (MR_Integer) 0))));
                    SubGoalWarningSpecs_2748 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2765, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_2731;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_2749, SubGoal_2747, ContextPieces_11, Functor_8, &MaybePODVar_2731);
                  if (((MR_tag((MR_Word) MaybePODVar_2731)) == (MR_Integer) 0))
                  {
                    MR_Word Var_2717;
                    MR_Word RCSSpecs_2718 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePODVar_2731, (MR_Integer) 0))));

                    Var_2717 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), RCSSpecs_2718, SubGoalWarningSpecs_2748);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2717));
                    }
                  }
                  else
                  {
                    MR_Word Goal_2720;
                    MR_Word PODVar_2721 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_2731, (MR_Integer) 0))));

                    {
                      Goal_2720 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_2720, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Goal_2720, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_2720, 2) = ((MR_Box) (PODVar_2721));
                      MR_hl_field(MR_mktag(3), Goal_2720, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Goal_2720, 4) = ((MR_Box) (SubGoal_2747));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_2720));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_2748));
                    }
                  }
                }
                else
                {
                  MR_Word Var_2733;
                  MR_Word Var_2734;
                  MR_Word Specs_2735;

                  Var_2733 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_2767);
                  Var_2734 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_2765);
                  Specs_2735 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_2733, Var_2734);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_2735));
                  }
                }
              }
              else
              {
                MR_Word Var_2775;
                MR_Word Spec_2777;

                Spec_2777 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
                {
                  Var_2775 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_2775, 0) = ((MR_Box) (Spec_2777));
                  MR_hl_field(MR_mktag(1), Var_2775, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2775));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 38:
          {
            // case "semipure"
            ;
            {
              MR_Word SubGoalTerm_2840;
              MR_Word Var_2835;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_2840 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_2835 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_2835 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeGoal0_2836;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_2840, ContextPieces_11, &MaybeGoal0_2836, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                parse_tree__parse_goal__apply_purity_marker_to_maybe_goal_4_p_0(SubGoalTerm_2840, (MR_Integer) 1, MaybeGoal0_2836, MaybeGoal_12);
              }
              else
              {
                MR_Word Spec_2837;
                MR_Word Var_2838;

                Spec_2837 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_2838 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_2838, 0) = ((MR_Box) (Spec_2837));
                  MR_hl_field(MR_mktag(1), Var_2838, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2838));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 39:
          {
            // case "some"
            ;
            {
              MR_Word QVarsTerm_2978;
              MR_Word SubGoalTerm_3010;
              MR_Word Var_2853;
              MR_Word Var_2854;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                QVarsTerm_2978 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_2853 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_2853 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_3010 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2853, (MR_Integer) 0))));
                  Var_2854 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2853, (MR_Integer) 1))));
                  succeeded = (Var_2854 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word VarsContextPieces_2937;
                MR_Word MaybeVars_2938;
                MR_Word Var_2948;
                MR_Word MaybeSubGoal_2960;
                MR_Word GenericVarSet_2961;
                MR_Word Vars0_2908;
                MR_Word StateVars0_2909;
                MR_Word SubGoal_2926;
                MR_Word SubGoalWarningSpecs_2927;
                MR_Word Var_2855;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_147, &GenericVarSet_2961);
                Var_2948 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[21])));
                VarsContextPieces_2937 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_11, Var_2948);
                parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), QVarsTerm_2978, GenericVarSet_2961, VarsContextPieces_2937, &MaybeVars_2938);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_3010, ContextPieces_11, &MaybeSubGoal_2960, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                succeeded = ((MR_tag((MR_Word) MaybeVars_2938)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_2855 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_2938, (MR_Integer) 0))));
                  Vars0_2908 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_2855, (MR_Integer) 0))));
                  StateVars0_2909 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_2855, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_2960)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoal_2926 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2960, (MR_Integer) 0))));
                    SubGoalWarningSpecs_2927 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2960, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word Vars_2884;
                  MR_Word StateVars_2885;
                  MR_Word Goal1_2886;
                  MR_Word Goal_2895;

                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[16]), Vars0_2908, &Vars_2884);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[17]), StateVars0_2909, &StateVars_2885);
                  if ((StateVars_2885 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal1_2886 = SubGoal_2926;
                  else
                    {
                      Goal1_2886 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal1_2886, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal1_2886, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                      MR_hl_field(MR_mktag(3), Goal1_2886, 2) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal1_2886, 3) = ((MR_Box) (StateVars_2885));
                      MR_hl_field(MR_mktag(3), Goal1_2886, 4) = ((MR_Box) (SubGoal_2926));
                    }
                  if ((Vars_2884 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal_2895 = Goal1_2886;
                  else
                    {
                      Goal_2895 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_2895, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal_2895, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
                      MR_hl_field(MR_mktag(3), Goal_2895, 2) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_2895, 3) = ((MR_Box) (Vars_2884));
                      MR_hl_field(MR_mktag(3), Goal_2895, 4) = ((MR_Box) (Goal1_2886));
                    }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_2895));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_2927));
                  }
                }
                else
                {
                  MR_Word Var_2902;
                  MR_Word Var_2903;
                  MR_Word Specs_2904;

                  Var_2902 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[2]), MaybeVars_2938);
                  Var_2903 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_2960);
                  Specs_2904 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_2902, Var_2903);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_2904));
                  }
                }
              }
              else
              {
                MR_Word Var_2975;
                MR_Word Spec_2977;

                Spec_2977 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of variables", Functor_8);
                {
                  Var_2975 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_2975, 0) = ((MR_Box) (Spec_2977));
                  MR_hl_field(MR_mktag(1), Var_2975, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2975));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 40:
          {
            // case "then"
            ;
            {
              MR_Word ThenTerm_89;
              MR_Word Var_318;
              MR_Word Var_319;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_318 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_318 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ThenTerm_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_318, (MR_Integer) 0))));
                  Var_319 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_318, (MR_Integer) 1))));
                  succeeded = (Var_319 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word SemiColonContext_1099;
                MR_Word Var_320;
                MR_String Var_321;
                MR_Word Var_322;
                MR_Word Var_323;
                MR_Word Var_324;

                succeeded = ((MR_tag((MR_Word) ThenTerm_89)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_320 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenTerm_89, (MR_Integer) 0))));
                  Var_322 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenTerm_89, (MR_Integer) 1))));
                  SemiColonContext_1099 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenTerm_89, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) Var_320)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_321 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_320, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_321, (MR_String) ";") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_322 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_323 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_322, (MR_Integer) 1))));
                        succeeded = (Var_323 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_324 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_323, (MR_Integer) 1))));
                          succeeded = (Var_324 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word Var_348;
                  MR_Word Spec_1095;

                  {
                    Spec_1095 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Spec_1095, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_non_call_goal\'/7"));
                    MR_hl_field(MR_mktag(1), Spec_1095, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), Spec_1095, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(1), Spec_1095, 3) = ((MR_Box) (SemiColonContext_1099));
                    MR_hl_field(MR_mktag(1), Spec_1095, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[102])));
                  }
                  {
                    Var_348 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_348, 0) = ((MR_Box) (Spec_1095));
                    MR_hl_field(MR_mktag(1), Var_348, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_348));
                  }
                  *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
                }
                else
                {
                  MR_Word Var_350;

                  {
                    Var_350 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_350, 0) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[8]));
                    MR_hl_field(MR_mktag(0), Var_350, 1) = ((MR_Box) (Args_9));
                    MR_hl_field(MR_mktag(0), Var_350, 2) = ((MR_Box) (Context_10));
                  }
                  parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_53_93_95_48_9_p_0(Var_350, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), ContextPieces_11, MaybeGoal_12, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                }
              }
              else
              {
                MR_Word Var_416;
                MR_Word Spec_1100;

                {
                  Spec_1100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_1100, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_non_call_goal\'/7"));
                  MR_hl_field(MR_mktag(1), Spec_1100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_1100, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_1100, 3) = ((MR_Box) (Context_10));
                  MR_hl_field(MR_mktag(1), Spec_1100, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[139])));
                }
                {
                  Var_416 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_416, 0) = ((MR_Box) (Spec_1100));
                  MR_hl_field(MR_mktag(1), Var_416, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_416));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 41:
          {
            // case "trace"
            ;
            {
              MR_Word ParamsTerm_105;
              MR_Word SubGoalTerm_1180;
              MR_Word Var_255;
              MR_Word Var_256;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ParamsTerm_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_255 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_255 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_1180 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_255, (MR_Integer) 0))));
                  Var_256 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_255, (MR_Integer) 1))));
                  succeeded = (Var_256 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeParams_106;
                MR_Word MaybeSubGoal_1173;
                MR_Word GenericVarSet_1178;
                MR_Word Params_107;
                MR_Word SubGoal_1169;
                MR_Word SubGoalWarningSpecs_1170;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_147, &GenericVarSet_1178);
                parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_112_97_114_97_109_115_95_95_91_50_93_95_48_4_p_0(GenericVarSet_1178, ParamsTerm_105, &MaybeParams_106);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1180, ContextPieces_11, &MaybeSubGoal_1173, STATE_VARIABLE_VarSet_0_147, STATE_VARIABLE_VarSet_148);
                succeeded = ((MR_tag((MR_Word) MaybeParams_106)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Params_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeParams_106, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_1173)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoal_1169 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1173, (MR_Integer) 0))));
                    SubGoalWarningSpecs_1170 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1173, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word MaybeComponents_108;

                  parse_tree__parse_goal__convert_trace_params_2_p_0(Params_107, &MaybeComponents_108);
                  if (((MR_tag((MR_Word) MaybeComponents_108)) == (MR_Integer) 0))
                  {
                    MR_Word Var_258;
                    MR_Word Specs_1163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeComponents_108, (MR_Integer) 0))));

                    Var_258 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_1163, SubGoalWarningSpecs_1170);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_258));
                    }
                  }
                  else
                  {
                    MR_Word CompileTime_109 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_108, (MR_Integer) 0))));
                    MR_Word RunTime_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_108, (MR_Integer) 1))));
                    MR_Word MaybeIO_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_108, (MR_Integer) 2))));
                    MR_Word MutVars_112 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_108, (MR_Integer) 3))));
                    MR_Word Goal_1162;

                    {
                      Goal_1162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1162, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                      MR_hl_field(MR_mktag(3), Goal_1162, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1162, 2) = ((MR_Box) (CompileTime_109));
                      MR_hl_field(MR_mktag(3), Goal_1162, 3) = ((MR_Box) (RunTime_110));
                      MR_hl_field(MR_mktag(3), Goal_1162, 4) = ((MR_Box) (MaybeIO_111));
                      MR_hl_field(MR_mktag(3), Goal_1162, 5) = ((MR_Box) (MutVars_112));
                      MR_hl_field(MR_mktag(3), Goal_1162, 6) = ((MR_Box) (SubGoal_1169));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1162));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_1170));
                    }
                  }
                }
                else
                {
                  MR_Word Var_259;
                  MR_Word Var_260;
                  MR_Word Specs_1168;

                  Var_259 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[5]), MaybeParams_106);
                  Var_260 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_1173);
                  Specs_1168 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_259, Var_260);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1168));
                  }
                }
              }
              else
              {
                MR_Word Var_262;
                MR_Word Spec_1179;

                Spec_1179 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of trace parameters", Functor_8);
                {
                  Var_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_262, 0) = ((MR_Box) (Spec_1179));
                  MR_hl_field(MR_mktag(1), Var_262, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_262));
                }
                *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 42:
          {
            // case "true"
            ;
            {
              MR_Word Goal_3090;

              {
                Goal_3090 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Goal_3090, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Goal_3090, 1) = ((MR_Box) (Context_10));
              }
              if ((Args_9 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_3090));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              else
              {
                MR_Word Var_3075;
                MR_Word Spec_3077;

                Spec_3077 = parse_tree__parse_goal__should_have_no_args_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_3075 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_3075, 0) = ((MR_Box) (Spec_3077));
                  MR_hl_field(MR_mktag(1), Var_3075, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_3075));
                }
              }
              *STATE_VARIABLE_VarSet_148 = STATE_VARIABLE_VarSet_0_147;
              succeeded = MR_TRUE;
            }
          }
          break;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_101_108_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_52_93_95_48_8_p_0(
  MR_Word Term_9,
  MR_Word CatchExprs_10,
  MR_Word MaybeCatchAnyExpr_11,
  MR_Word ContextPieces_13,
  MR_Word * MaybeGoal_14,
  MR_Word STATE_VARIABLE_VarSet_0_30,
  MR_Word * STATE_VARIABLE_VarSet_31)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    MR_Word ThenTerm_16;
    MR_Word ElseTerm_17;
    MR_Word Var_32;
    MR_String Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;

    if (succeeded)
    {
      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
      Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_33 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0))));
        succeeded = (strcmp(Var_33, (MR_String) "else") == 0);
        if (succeeded)
        {
          succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ThenTerm_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 0))));
            Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 1))));
            succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ElseTerm_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 0))));
              Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 1))));
              succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeElseGoal0_19;
      MR_Word STATE_VARIABLE_VarSet_37_37;

      parse_tree__parse_goal__parse_goal_5_p_0(ElseTerm_17, ContextPieces_13, &MaybeElseGoal0_19, STATE_VARIABLE_VarSet_0_30, &STATE_VARIABLE_VarSet_37_37);
      if (((MR_tag((MR_Word) MaybeElseGoal0_19)) == (MR_Integer) 0))
      {
        *MaybeGoal_14 = MaybeElseGoal0_19;
        *STATE_VARIABLE_VarSet_31 = STATE_VARIABLE_VarSet_37_37;
      }
      else
      {
        MR_Word ElseGoal_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElseGoal0_19, (MR_Integer) 0))));
        MR_Word ElseWarningSpecs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElseGoal0_19, (MR_Integer) 1))));
        MR_Word MaybeTryGoal_22;
        MR_Word Var_38;
        MR_Word ThenContext_26;
        MR_Word Var_40;
        MR_String Var_41;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;

        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (ElseGoal_20));
        }
        parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_53_93_95_48_9_p_0(ThenTerm_16, Var_38, CatchExprs_10, MaybeCatchAnyExpr_11, ContextPieces_13, &MaybeTryGoal_22, STATE_VARIABLE_VarSet_37_37, STATE_VARIABLE_VarSet_31);
        succeeded = ((MR_tag((MR_Word) MaybeTryGoal_22)) == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) ThenTerm_16)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenTerm_16, (MR_Integer) 0))));
            Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenTerm_16, (MR_Integer) 1))));
            ThenContext_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenTerm_16, (MR_Integer) 2))));
            succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_41 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 0))));
              succeeded = (strcmp(Var_41, (MR_String) "then") == 0);
              if (succeeded)
              {
                succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 1))));
                  succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 1))));
                    succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word Spec_28;
          MR_Word Var_68;

          {
            Spec_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_else_then_try_term\'/8"));
            MR_hl_field(MR_mktag(1), Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_28, 3) = ((MR_Box) (ThenContext_26));
            MR_hl_field(MR_mktag(1), Spec_28, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[301])));
          }
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Spec_28));
            MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (ElseWarningSpecs_21));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeGoal_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_68));
          }
        }
        else
          *MaybeGoal_14 = MaybeTryGoal_22;
      }
    }
    else
      parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_53_93_95_48_9_p_0(Term_9, (MR_Word) ((MR_Unsigned) 0U), CatchExprs_10, MaybeCatchAnyExpr_11, ContextPieces_13, MaybeGoal_14, STATE_VARIABLE_VarSet_0_30, STATE_VARIABLE_VarSet_31);
  }
}

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_53_93_95_48_9_p_0(
  MR_Word ThenTryTerm_10,
  MR_Word MaybeElse_11,
  MR_Word CatchExprs_12,
  MR_Word MaybeCatchAnyExpr_13,
  MR_Word ContextPieces_15,
  MR_Word * MaybeGoal_16,
  MR_Word STATE_VARIABLE_VarSet_0_40,
  MR_Word * STATE_VARIABLE_VarSet_41)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) ThenTryTerm_10)) == (MR_Integer) 0);
    MR_Word ThenTerm_19;
    MR_Word ParamsTerm_21;
    MR_Word TryGoalTerm_22;
    MR_Word TryContext_23;
    MR_Word TryTerm_18;
    MR_Word Var_42;
    MR_String Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_String Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;

    if (succeeded)
    {
      Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenTryTerm_10, (MR_Integer) 0))));
      Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenTryTerm_10, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_43 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 0))));
        succeeded = (strcmp(Var_43, (MR_String) "then") == 0);
        if (succeeded)
        {
          succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TryTerm_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 0))));
            Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 1))));
            succeeded = (Var_45 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ThenTerm_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 0))));
              Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 1))));
              succeeded = (Var_46 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) TryTerm_18)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TryTerm_18, (MR_Integer) 0))));
                  Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TryTerm_18, (MR_Integer) 1))));
                  TryContext_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TryTerm_18, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_48 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_48, (MR_String) "try") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ParamsTerm_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_49, (MR_Integer) 0))));
                        Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_49, (MR_Integer) 1))));
                        succeeded = (Var_50 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          TryGoalTerm_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0))));
                          Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 1))));
                          succeeded = (Var_51 == (MR_Word) ((MR_Unsigned) 0U));
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
    {
      MR_Word GenericVarSet_24;
      MR_Word MaybeParams_25;
      MR_Word MaybeTryGoal_26;
      MR_Word MaybeThenGoal_27;
      MR_Word STATE_VARIABLE_VarSet_52_52;
      MR_Word Params_28;
      MR_Word TryGoal_29;
      MR_Word TryWarningSpecs_30;
      MR_Word ThenGoal_31;
      MR_Word ThenWarningSpecs_32;

      mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_40, &GenericVarSet_24);
      parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_121_95_112_97_114_97_109_115_95_95_91_50_93_95_48_4_p_0(GenericVarSet_24, ParamsTerm_21, &MaybeParams_25);
      parse_tree__parse_goal__parse_goal_5_p_0(TryGoalTerm_22, ContextPieces_15, &MaybeTryGoal_26, STATE_VARIABLE_VarSet_0_40, &STATE_VARIABLE_VarSet_52_52);
      parse_tree__parse_goal__parse_goal_5_p_0(ThenTerm_19, ContextPieces_15, &MaybeThenGoal_27, STATE_VARIABLE_VarSet_52_52, STATE_VARIABLE_VarSet_41);
      succeeded = ((MR_tag((MR_Word) MaybeParams_25)) == (MR_Integer) 1);
      if (succeeded)
      {
        Params_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeParams_25, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeTryGoal_26)) == (MR_Integer) 1);
        if (succeeded)
        {
          TryGoal_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTryGoal_26, (MR_Integer) 0))));
          TryWarningSpecs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTryGoal_26, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) MaybeThenGoal_27)) == (MR_Integer) 1);
          if (succeeded)
          {
            ThenGoal_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThenGoal_27, (MR_Integer) 0))));
            ThenWarningSpecs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThenGoal_27, (MR_Integer) 1))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word WarningSpecs_33;
        MR_Word MaybeComponents_34;

        WarningSpecs_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), TryWarningSpecs_30, ThenWarningSpecs_32);
        parse_tree__parse_goal__convert_try_params_2_p_0(Params_28, &MaybeComponents_34);
        if (((MR_tag((MR_Word) MaybeComponents_34)) == (MR_Integer) 0))
        {
          MR_Word Specs_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeComponents_34, (MR_Integer) 0))));
          MR_Word Var_54;

          Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_37, WarningSpecs_33);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeGoal_16 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_54));
          }
        }
        else
        {
          MR_Word MaybeIO_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_34, (MR_Integer) 0))));
          MR_Word Goal_36;

          {
            Goal_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Goal_36, 0) = ((MR_Box) ((MR_Unsigned) 17U));
            MR_hl_field(MR_mktag(3), Goal_36, 1) = ((MR_Box) (TryContext_23));
            MR_hl_field(MR_mktag(3), Goal_36, 2) = ((MR_Box) (MaybeIO_35));
            MR_hl_field(MR_mktag(3), Goal_36, 3) = ((MR_Box) (TryGoal_29));
            MR_hl_field(MR_mktag(3), Goal_36, 4) = ((MR_Box) (ThenGoal_31));
            MR_hl_field(MR_mktag(3), Goal_36, 5) = ((MR_Box) (MaybeElse_11));
            MR_hl_field(MR_mktag(3), Goal_36, 6) = ((MR_Box) (CatchExprs_12));
            MR_hl_field(MR_mktag(3), Goal_36, 7) = ((MR_Box) (MaybeCatchAnyExpr_13));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MaybeGoal_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_36));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WarningSpecs_33));
          }
        }
      }
      else
      {
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Specs_109;

        Var_55 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[12]), MaybeParams_25);
        Var_57 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeTryGoal_26);
        Var_58 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeThenGoal_27);
        Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_57, Var_58);
        Specs_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_55, Var_56);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_109));
        }
      }
    }
    else
    {
      MR_Word Spec_39;
      MR_Word Var_106;
      MR_Word Var_107;

      Var_106 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ThenTryTerm_10);
      {
        Spec_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_39, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_then_try_term\'/9"));
        MR_hl_field(MR_mktag(1), Spec_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_39, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_39, 3) = ((MR_Box) (Var_106));
        MR_hl_field(MR_mktag(1), Spec_39, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[309])));
      }
      {
        Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Spec_39));
        MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_107));
      }
      *STATE_VARIABLE_VarSet_41 = STATE_VARIABLE_VarSet_0_40;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_97_116_99_104_95_97_114_114_111_119_95_116_101_114_109_95_95_91_50_93_95_48_6_p_0(
  MR_Word ArrowTerm_7,
  MR_Word ContextPieces_9,
  MR_Word * MaybeCatch_10,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) ArrowTerm_7)) == (MR_Integer) 0);
    MR_Word PatternTerm0_12;
    MR_Word GoalTerm_13;
    MR_Word Var_25;
    MR_String Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;

    if (succeeded)
    {
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArrowTerm_7, (MR_Integer) 0))));
      Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArrowTerm_7, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
        succeeded = (strcmp(Var_26, (MR_String) "->") == 0);
        if (succeeded)
        {
          succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            PatternTerm0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0))));
            Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 1))));
            succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              GoalTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 0))));
              Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 1))));
              succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word PatternTerm_15;
      MR_Word MaybeGoal_16;

      mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PatternTerm0_12, &PatternTerm_15);
      parse_tree__parse_goal__parse_goal_5_p_0(GoalTerm_13, ContextPieces_9, &MaybeGoal_16, STATE_VARIABLE_VarSet_0_23, STATE_VARIABLE_VarSet_24);
      if (((MR_tag((MR_Word) MaybeGoal_16)) == (MR_Integer) 0))
        *MaybeCatch_10 = (MR_Word) (MaybeGoal_16);
      else
      {
        MR_Word Goal_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal_16, (MR_Integer) 0))));
        MR_Word GoalWarningSpecs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal_16, (MR_Integer) 1))));
        MR_Word Catch_19;

        {
          Catch_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Catch_19, 0) = ((MR_Box) (PatternTerm_15));
          MR_hl_field(MR_mktag(0), Catch_19, 1) = ((MR_Box) (Goal_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeCatch_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Catch_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (GoalWarningSpecs_18));
        }
      }
    }
    else
    {
      MR_Word Spec_22;
      MR_Word Var_54;
      MR_Word Var_55;

      Var_54 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArrowTerm_7);
      {
        Spec_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_catch_arrow_term\'/6"));
        MR_hl_field(MR_mktag(1), Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_22, 3) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(1), Spec_22, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[295])));
      }
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Spec_22));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCatch_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_55));
      }
      *STATE_VARIABLE_VarSet_24 = STATE_VARIABLE_VarSet_0_23;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_98_95_99_97_116_99_104_95_116_101_114_109_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word Term_7,
  MR_Word ContextPieces_9,
  MR_Word * MaybeCatches_10,
  MR_Word STATE_VARIABLE_VarSet_0_28,
  MR_Word * STATE_VARIABLE_VarSet_29)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_Word CatchArrowTerm_12;
    MR_Word SubTerm_13;
    MR_Word Var_30;
    MR_String Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;

    if (succeeded)
    {
      Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_31 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0))));
        succeeded = (strcmp(Var_31, (MR_String) "catch") == 0);
        if (succeeded)
        {
          succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            CatchArrowTerm_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 0))));
            Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 1))));
            succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SubTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 0))));
              Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 1))));
              succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word HeadMaybeCatch_15;
      MR_Word TailMaybeCatches_16;
      MR_Word STATE_VARIABLE_VarSet_35_35;
      MR_Word HeadCatch_17;
      MR_Word HeadWarningSpecs_18;
      MR_Word TailCatches_19;
      MR_Word TailWarningSpecs_20;

      parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_97_116_99_104_95_97_114_114_111_119_95_116_101_114_109_95_95_91_50_93_95_48_6_p_0(CatchArrowTerm_12, ContextPieces_9, &HeadMaybeCatch_15, STATE_VARIABLE_VarSet_0_28, &STATE_VARIABLE_VarSet_35_35);
      parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_98_95_99_97_116_99_104_95_116_101_114_109_115_95_95_91_50_93_95_48_6_p_0(SubTerm_13, ContextPieces_9, &TailMaybeCatches_16, STATE_VARIABLE_VarSet_35_35, STATE_VARIABLE_VarSet_29);
      succeeded = ((MR_tag((MR_Word) HeadMaybeCatch_15)) == (MR_Integer) 1);
      if (succeeded)
      {
        HeadCatch_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadMaybeCatch_15, (MR_Integer) 0))));
        HeadWarningSpecs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadMaybeCatch_15, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) TailMaybeCatches_16)) == (MR_Integer) 1);
        if (succeeded)
        {
          TailCatches_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailMaybeCatches_16, (MR_Integer) 0))));
          TailWarningSpecs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailMaybeCatches_16, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Word Catches_21;
        MR_Word WarningSpecs_22;

        {
          Catches_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Catches_21, 0) = ((MR_Box) (HeadCatch_17));
          MR_hl_field(MR_mktag(1), Catches_21, 1) = ((MR_Box) (TailCatches_19));
        }
        WarningSpecs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), HeadWarningSpecs_18, TailWarningSpecs_20);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeCatches_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Catches_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WarningSpecs_22));
        }
      }
      else
      {
        MR_Word Specs_23;
        MR_Word Var_37;
        MR_Word Var_38;

        Var_37 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0), HeadMaybeCatch_15);
        Var_38 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[11]), TailMaybeCatches_16);
        Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_37, Var_38);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeCatches_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_23));
        }
      }
    }
    else
    {
      MR_Word MaybeCatch_24;

      parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_97_116_99_104_95_97_114_114_111_119_95_116_101_114_109_95_95_91_50_93_95_48_6_p_0(Term_7, ContextPieces_9, &MaybeCatch_24, STATE_VARIABLE_VarSet_0_28, STATE_VARIABLE_VarSet_29);
      if (((MR_tag((MR_Word) MaybeCatch_24)) == (MR_Integer) 0))
        *MaybeCatches_10 = (MR_Word) (MaybeCatch_24);
      else
      {
        MR_Word Catch_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatch_24, (MR_Integer) 0))));
        MR_Word CatchWarningSpecs_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatch_24, (MR_Integer) 1))));
        MR_Word Var_40;

        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Catch_25));
          MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeCatches_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_40));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CatchWarningSpecs_26));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_97_116_99_104_95_97_110_121_95_116_101_114_109_95_95_91_50_93_95_48_6_p_0(
  MR_Word ArrowTerm_7,
  MR_Word ContextPieces_9,
  MR_Word * MaybeCatchAny_10,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) ArrowTerm_7)) == (MR_Integer) 0);
    MR_Word VarTerm0_12;
    MR_Word GoalTerm_13;
    MR_Word Var_27;
    MR_String Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;

    if (succeeded)
    {
      Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArrowTerm_7, (MR_Integer) 0))));
      Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArrowTerm_7, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0))));
        succeeded = (strcmp(Var_28, (MR_String) "->") == 0);
        if (succeeded)
        {
          succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            VarTerm0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 0))));
            Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 1))));
            succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              GoalTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0))));
              Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 1))));
              succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var0_15;

      succeeded = ((MR_tag((MR_Word) VarTerm0_12)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarTerm0_12, (MR_Integer) 0))));
        {
          MR_Word Var_17;
          MR_Word MaybeGoal_18;

          mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var0_15, &Var_17);
          parse_tree__parse_goal__parse_goal_5_p_0(GoalTerm_13, ContextPieces_9, &MaybeGoal_18, STATE_VARIABLE_VarSet_0_25, STATE_VARIABLE_VarSet_26);
          if (((MR_tag((MR_Word) MaybeGoal_18)) == (MR_Integer) 0))
            *MaybeCatchAny_10 = (MR_Word) (MaybeGoal_18);
          else
          {
            MR_Word Goal_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal_18, (MR_Integer) 0))));
            MR_Word GoalWarningSpecs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal_18, (MR_Integer) 1))));
            MR_Word CatchAny_21;

            {
              CatchAny_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CatchAny_21, 0) = ((MR_Box) (Var_17));
              MR_hl_field(MR_mktag(0), CatchAny_21, 1) = ((MR_Box) (Goal_19));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *MaybeCatchAny_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CatchAny_21));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (GoalWarningSpecs_20));
            }
          }
        }
      }
      else
      {
        MR_Word Spec_24;
        MR_Word Var_59;
        MR_Word Var_60;

        Var_59 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArrowTerm_7);
        {
          Spec_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_catch_any_term\'/6"));
          MR_hl_field(MR_mktag(1), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_24, 3) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(1), Spec_24, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[274])));
        }
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Spec_24));
          MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeCatchAny_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_60));
        }
        *STATE_VARIABLE_VarSet_26 = STATE_VARIABLE_VarSet_0_25;
      }
    }
    else
    {
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Spec_89;

      Var_85 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArrowTerm_7);
      {
        Spec_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_89, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_catch_any_term\'/6"));
        MR_hl_field(MR_mktag(1), Spec_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_89, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_89, 3) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(1), Spec_89, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[279])));
      }
      {
        Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Spec_89));
        MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCatchAny_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_86));
      }
      *STATE_VARIABLE_VarSet_26 = STATE_VARIABLE_VarSet_0_25;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_atomic_subgoals_as_list_4_p_0(
  MR_Word Term_5,
  MR_Word * MaybeGoals_6,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    MR_Word LeftGoal_8;
    MR_Word RightGoal_9;
    MR_Word Var_25;
    MR_String Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;

    if (succeeded)
    {
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
      Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
        succeeded = (strcmp(Var_26, (MR_String) "or_else") == 0);
        if (succeeded)
        {
          succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            LeftGoal_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0))));
            Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 1))));
            succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              RightGoal_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 0))));
              Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 1))));
              succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeLeftGoalList_11;
      MR_Word MaybeRightGoalList_12;
      MR_Word STATE_VARIABLE_VarSet_30_30;
      MR_Word LeftGoalList_13;
      MR_Word LeftWarningSpecs_14;
      MR_Word RightGoalList_15;
      MR_Word RightWarningSpecs_16;

      parse_tree__parse_goal__parse_atomic_subgoals_as_list_4_p_0(LeftGoal_8, &MaybeLeftGoalList_11, STATE_VARIABLE_VarSet_0_23, &STATE_VARIABLE_VarSet_30_30);
      parse_tree__parse_goal__parse_atomic_subgoals_as_list_4_p_0(RightGoal_9, &MaybeRightGoalList_12, STATE_VARIABLE_VarSet_30_30, STATE_VARIABLE_VarSet_24);
      succeeded = ((MR_tag((MR_Word) MaybeLeftGoalList_11)) == (MR_Integer) 1);
      if (succeeded)
      {
        LeftGoalList_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLeftGoalList_11, (MR_Integer) 0))));
        LeftWarningSpecs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLeftGoalList_11, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) MaybeRightGoalList_12)) == (MR_Integer) 1);
        if (succeeded)
        {
          RightGoalList_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRightGoalList_12, (MR_Integer) 0))));
          RightWarningSpecs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRightGoalList_12, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Word Goals_17;
        MR_Word WarningSpecs_18;

        Goals_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), LeftGoalList_13, RightGoalList_15);
        WarningSpecs_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), LeftWarningSpecs_14, RightWarningSpecs_16);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoals_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goals_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WarningSpecs_18));
        }
      }
      else
      {
        MR_Word Specs_19;
        MR_Word Var_32;
        MR_Word Var_33;

        Var_32 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[7]), MaybeLeftGoalList_11);
        Var_33 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[7]), MaybeRightGoalList_12);
        Specs_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_32, Var_33);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoals_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_19));
        }
      }
    }
    else
    {
      MR_Word ContextPieces_20;
      MR_Word MaybeSubGoal_21;

      ContextPieces_20 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0));
      parse_tree__parse_goal__parse_goal_5_p_0(Term_5, ContextPieces_20, &MaybeSubGoal_21, STATE_VARIABLE_VarSet_0_23, STATE_VARIABLE_VarSet_24);
      if (((MR_tag((MR_Word) MaybeSubGoal_21)) == (MR_Integer) 0))
        *MaybeGoals_6 = (MR_Word) (MaybeSubGoal_21);
      else
      {
        MR_Word SubGoal_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_21, (MR_Integer) 0))));
        MR_Word Var_35;
        MR_Word WarningSpecs_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_21, (MR_Integer) 1))));

        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (SubGoal_22));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoals_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_35));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WarningSpecs_37));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_atomic_subexpr_4_p_0(
  MR_Word Term_5,
  MR_Word * MaybeOoMSubGoals_6,
  MR_Word STATE_VARIABLE_VarSet_0_17,
  MR_Word * STATE_VARIABLE_VarSet_18)
{
  {
    MR_Word MaybeSubGoals_8;

    parse_tree__parse_goal__parse_atomic_subgoals_as_list_4_p_0(Term_5, &MaybeSubGoals_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
    if (((MR_tag((MR_Word) MaybeSubGoals_8)) == (MR_Integer) 0))
    {
      MR_Word Specs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeSubGoals_8, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeOoMSubGoals_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_16));
      }
    }
    else
    {
      MR_Word Goals_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoals_8, (MR_Integer) 0))));
      MR_Word WarningSpecs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoals_8, (MR_Integer) 1))));

      if ((Goals_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Context_12;
        MR_Word Spec_13;
        MR_Word Var_28;

        Context_12 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
        {
          Spec_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_subexpr\'/4"));
          MR_hl_field(MR_mktag(1), Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_13, 3) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(1), Spec_13, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[354])));
        }
        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Spec_13));
          MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (WarningSpecs_10));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeOoMSubGoals_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_28));
        }
      }
      else
      {
        MR_Word MainSubGoal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_9, (MR_Integer) 0))));
        MR_Word OrElseSubGoals_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_9, (MR_Integer) 1))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *MaybeOoMSubGoals_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MainSubGoal_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OrElseSubGoals_15));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (WarningSpecs_10));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_catch_then_try_term_args_7_p_0(
  MR_Word CatchTermArgs_8,
  MR_Word MaybeCatchAnyExpr_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26)
{
  {
    MR_bool succeeded = (CatchTermArgs_8 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word TermA_14;
    MR_Word TermB_15;
    MR_Word Var_27;
    MR_Word Var_28;

    if (succeeded)
    {
      TermA_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CatchTermArgs_8, (MR_Integer) 0))));
      Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CatchTermArgs_8, (MR_Integer) 1))));
      succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TermB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0))));
        Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 1))));
        succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word MaybeCatches_16;
      MR_Word STATE_VARIABLE_VarSet_29_29;

      parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_98_95_99_97_116_99_104_95_116_101_114_109_115_95_95_91_50_93_95_48_6_p_0(TermB_15, ContextPieces_11, &MaybeCatches_16, STATE_VARIABLE_VarSet_0_25, &STATE_VARIABLE_VarSet_29_29);
      if (((MR_tag((MR_Word) MaybeCatches_16)) == (MR_Integer) 0))
      {
        *MaybeGoal_12 = (MR_Word) (MaybeCatches_16);
        *STATE_VARIABLE_VarSet_26 = STATE_VARIABLE_VarSet_29_29;
      }
      else
      {
        MR_Word Catches_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatches_16, (MR_Integer) 0))));
        MR_Word CatchWarningSpecs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatches_16, (MR_Integer) 1))));
        MR_Word MaybeGoal0_19;

        parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_101_108_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_52_93_95_48_8_p_0(TermA_14, Catches_17, MaybeCatchAnyExpr_9, ContextPieces_11, &MaybeGoal0_19, STATE_VARIABLE_VarSet_29_29, STATE_VARIABLE_VarSet_26);
        if (((MR_tag((MR_Word) MaybeGoal0_19)) == (MR_Integer) 0))
        {
          MR_Word Specs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeGoal0_19, (MR_Integer) 0))));
          MR_Word Var_31;

          Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), CatchWarningSpecs_18, Specs_22);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeGoal_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_31));
          }
        }
        else
        {
          MR_Word Goal_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal0_19, (MR_Integer) 0))));
          MR_Word GoalWarningSpecs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal0_19, (MR_Integer) 1))));
          MR_Word Var_32;

          Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), CatchWarningSpecs_18, GoalWarningSpecs_21);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MaybeGoal_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_20));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_32));
          }
        }
      }
    }
    else
    {
      MR_Word Spec_24;
      MR_Word Var_65;

      {
        Spec_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_catch_then_try_term_args\'/7"));
        MR_hl_field(MR_mktag(1), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_24, 3) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(1), Spec_24, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[291])));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Spec_24));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_65));
      }
      *STATE_VARIABLE_VarSet_26 = STATE_VARIABLE_VarSet_0_25;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_some_vars_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_64;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__155__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_64);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_64));
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_some_vars_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_58;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__154__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_58);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_58));
  }
}

void MR_CALL 
parse_tree__parse_goal__parse_some_vars_goal_5_p_0(
  MR_Word Term_6,
  MR_Word ContextPieces_7,
  MR_Word * MaybeVarsAndGoal_8,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0);
    MR_Word MaybeVars_16;
    MR_Word GoalTerm_17;
    MR_Word MaybeGoal_18;
    MR_Word VarsTerm_10;
    MR_Word SubGoalTerm_11;
    MR_Word Var_28;
    MR_String Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Vars0_19;
    MR_Word StateVars0_20;
    MR_Word Goal_21;
    MR_Word SubGoalWarningSpecs_22;
    MR_Word Var_49;

    if (succeeded)
    {
      Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 0))));
      Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_29 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 0))));
        succeeded = (strcmp(Var_29, (MR_String) "some") == 0);
        if (succeeded)
        {
          succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            VarsTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0))));
            Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 1))));
            succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SubGoalTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 0))));
              Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 1))));
              succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word GenericVarSet_13;
      MR_Word VarsContextPieces_15;
      MR_Word Var_44;

      mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_26, &GenericVarSet_13);
      Var_44 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[21])));
      VarsContextPieces_15 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7, Var_44);
      parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_10, GenericVarSet_13, VarsContextPieces_15, &MaybeVars_16);
      GoalTerm_17 = SubGoalTerm_11;
    }
    else
    {
      MaybeVars_16 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_3[6]));
      GoalTerm_17 = Term_6;
    }
    parse_tree__parse_goal__parse_goal_5_p_0(GoalTerm_17, ContextPieces_7, &MaybeGoal_18, STATE_VARIABLE_VarSet_0_26, STATE_VARIABLE_VarSet_27);
    succeeded = ((MR_tag((MR_Word) MaybeVars_16)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_16, (MR_Integer) 0))));
      Vars0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_49, (MR_Integer) 0))));
      StateVars0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_49, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) MaybeGoal_18)) == (MR_Integer) 1);
      if (succeeded)
      {
        Goal_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal_18, (MR_Integer) 0))));
        SubGoalWarningSpecs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal_18, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Word Vars_23;
      MR_Word StateVars_24;

      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[4]), Vars0_19, &Vars_23);
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[5]), StateVars0_20, &StateVars_24);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        *MaybeVarsAndGoal_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Vars_23));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (StateVars_24));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Goal_21));
        MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (SubGoalWarningSpecs_22));
      }
    }
    else
    {
      MR_Word Specs_25;
      MR_Word Var_52;
      MR_Word Var_53;

      Var_52 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[2]), MaybeVars_16);
      Var_53 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeGoal_18);
      Specs_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_52, Var_53);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeVarsAndGoal_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_25));
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_goal__parse_goal_5_p_0(
  MR_Word Term_6,
  MR_Word ContextPieces_7,
  MR_Word * MaybeGoal_8,
  MR_Word STATE_VARIABLE_VarSet_0_17,
  MR_Word * STATE_VARIABLE_VarSet_18)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0);
    MR_Word MaybeGoalPrime_13;
    MR_Word STATE_VARIABLE_VarSet_20_20;
    MR_String Name_10;
    MR_Word Args_11;
    MR_Word Context_12;
    MR_Word Var_19;

    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 0))));
      Args_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 1))));
      Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
      if (succeeded)
      {
        Name_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))));
        succeeded = parse_tree__parse_goal__parse_non_call_goal_7_p_0(Name_10, Args_11, Context_12, ContextPieces_7, &MaybeGoalPrime_13, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_20_20);
      }
    }
    if (succeeded)
    {
      *STATE_VARIABLE_VarSet_18 = STATE_VARIABLE_VarSet_20_20;
      *MaybeGoal_8 = MaybeGoalPrime_13;
    }
    else
    {
      MR_Word ArgsTerm_14;
      MR_Word Goal_16;
      MR_Word Context_31;
      MR_Word SymName_15;
      MR_Word Args_29;

      Context_31 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_6);
      mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Term_6, &ArgsTerm_14);
      succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgsTerm_14, &SymName_15, &Args_29);
      if (succeeded)
        {
          Goal_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Goal_16, 0) = ((MR_Box) (Context_31));
          MR_hl_field(MR_mktag(1), Goal_16, 1) = ((MR_Box) (SymName_15));
          MR_hl_field(MR_mktag(1), Goal_16, 2) = ((MR_Box) (Args_29));
          MR_hl_field(MR_mktag(1), Goal_16, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
      else
      {
        MR_Word Var_24;

        {
          Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (ArgsTerm_14));
          MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Goal_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Goal_16, 0) = ((MR_Box) (Context_31));
          MR_hl_field(MR_mktag(1), Goal_16, 1) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[5]));
          MR_hl_field(MR_mktag(1), Goal_16, 2) = ((MR_Box) (Var_24));
          MR_hl_field(MR_mktag(1), Goal_16, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_VarSet_18 = STATE_VARIABLE_VarSet_0_17;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_111_109_105_99_95_112_97_114_97_109_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word Term_6,
  MR_Word VarSet_7,
  MR_Word * MaybeComponentsContexts_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0);
    MR_Word Var_24;
    MR_String Var_25;
    MR_Word Var_26;

    if (succeeded)
    {
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 0))));
      Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 1))));
      succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_25 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
          succeeded = (strcmp(Var_25, (MR_String) "[]") == 0);
        }
      }
    }
    if (succeeded)
      *MaybeComponentsContexts_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_3[4]));
    else
    {
      MR_Word HeadTerm_10;
      MR_Word TailTerm_11;
      MR_Word Var_28;
      MR_String Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;

      succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 0))));
        Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_29 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 0))));
          succeeded = (strcmp(Var_29, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0))));
              Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 1))));
              succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TailTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 0))));
                Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 1))));
                succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word MaybeHeadComponent_13;
        MR_Word MaybeTailComponentsContexts_14;
        MR_Word HeadComponent_15;
        MR_Word TailComponentsContexts_16;

        parse_tree__parse_goal__parse_atomic_component_4_p_0(Term_6, HeadTerm_10, VarSet_7, &MaybeHeadComponent_13);
        parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_111_109_105_99_95_112_97_114_97_109_115_95_95_91_49_93_95_48_4_p_0(TailTerm_11, VarSet_7, &MaybeTailComponentsContexts_14);
        succeeded = ((MR_tag((MR_Word) MaybeHeadComponent_13)) == (MR_Integer) 1);
        if (succeeded)
        {
          HeadComponent_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHeadComponent_13, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeTailComponentsContexts_14)) == (MR_Integer) 1);
          if (succeeded)
            TailComponentsContexts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTailComponentsContexts_14, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word Var_33;

          {
            Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (HeadComponent_15));
            MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (TailComponentsContexts_16));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeComponentsContexts_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_33));
          }
        }
        else
        {
          MR_Word Specs_17;
          MR_Word Var_34;
          MR_Word Var_35;

          Var_34 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_2[1]), MaybeHeadComponent_13);
          Var_35 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[6]), MaybeTailComponentsContexts_14);
          Specs_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_34, Var_35);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeComponentsContexts_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_17));
          }
        }
      }
      else
      if (((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0))
      {
        MR_Word TermContext_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 2))));
        MR_Word Spec_22;
        MR_Word Var_54;

        {
          Spec_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_params\'/4"));
          MR_hl_field(MR_mktag(1), Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_22, 3) = ((MR_Box) (TermContext_20));
          MR_hl_field(MR_mktag(1), Spec_22, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[313])));
        }
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Spec_22));
          MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeComponentsContexts_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_54));
        }
      }
      else
      {
        MR_Word Var_44;
        MR_Word TermContext_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_6, (MR_Integer) 1))));
        MR_Word Spec_58;

        {
          Spec_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_58, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_params\'/4"));
          MR_hl_field(MR_mktag(1), Spec_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_58, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_58, 3) = ((MR_Box) (TermContext_56));
          MR_hl_field(MR_mktag(1), Spec_58, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[315])));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Spec_58));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeComponentsContexts_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_44));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_atomic_component_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_120;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_atomic_component__2421__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_120);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_120));
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_atomic_component_4_p_0(
  MR_Word ErrorTerm_5,
  MR_Word Term_6,
  MR_Word VarSet_7,
  MR_Word * MaybeComponentContext_8)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0))
    {
      MR_Word Functor_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 0))));
      MR_Word SubTerms_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 1))));
      MR_Word Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 2))));
      MR_String Atom_12;

      succeeded = ((MR_tag((MR_Word) Functor_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Atom_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_9, (MR_Integer) 0))));
        succeeded = (strcmp(Atom_12, (MR_String) "outer") == 0);
        if (succeeded)
        {
          MR_Word MaybeComponentSubTerm_13;

          parse_tree__parse_goal__parse_atomic_subterm_4_p_0(Atom_12, ErrorTerm_5, Term_6, &MaybeComponentSubTerm_13);
          if (((MR_tag((MR_Word) MaybeComponentSubTerm_13)) == (MR_Integer) 0))
            *MaybeComponentContext_8 = (MR_Word) (MaybeComponentSubTerm_13);
          else
          {
            MR_Word CompTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponentSubTerm_13, (MR_Integer) 0))));
            MR_Word Component_15;
            MR_Word Var_37;

            {
              Component_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Component_15, 0) = ((MR_Box) (CompTerm_14));
            }
            {
              Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (Component_15));
              MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (Context_11));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeComponentContext_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_37));
            }
          }
        }
        else
        {
          succeeded = (strcmp(Atom_12, (MR_String) "inner") == 0);
          if (succeeded)
          {
            MR_Word MaybeComponentSubTerm_93;

            parse_tree__parse_goal__parse_atomic_subterm_4_p_0(Atom_12, ErrorTerm_5, Term_6, &MaybeComponentSubTerm_93);
            if (((MR_tag((MR_Word) MaybeComponentSubTerm_93)) == (MR_Integer) 0))
              *MaybeComponentContext_8 = (MR_Word) (MaybeComponentSubTerm_93);
            else
            {
              MR_Word Var_38;
              MR_Word CompTerm_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponentSubTerm_93, (MR_Integer) 0))));
              MR_Word Component_88;

              {
                Component_88 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Component_88, 0) = ((MR_Box) (CompTerm_87));
              }
              {
                Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Component_88));
                MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (Context_11));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeComponentContext_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_38));
              }
            }
          }
          else
          {
            succeeded = (strcmp(Atom_12, (MR_String) "vars") == 0);
            if (succeeded)
            {
              MR_Word SubTerm_17;
              MR_Word Var_39;

              succeeded = (SubTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubTerm_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 0))));
                Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 1))));
                succeeded = (Var_39 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word ContextPieces_18;
                MR_Word MaybeVars_19;

                ContextPieces_18 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[330])));
                parse_tree__parse_vars__parse_possibly_repeated_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubTerm_17, VarSet_7, ContextPieces_18, &MaybeVars_19);
                if (((MR_tag((MR_Word) MaybeVars_19)) == (MR_Integer) 0))
                  *MaybeComponentContext_8 = (MR_Word) (MaybeVars_19);
                else
                {
                  MR_Word Vars_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_19, (MR_Integer) 0))));
                  MR_Word ProgVars_21;
                  MR_Word Var_51;
                  MR_Word Component_97;

                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[3]), Vars_20, &ProgVars_21);
                  {
                    Component_97 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Component_97, 0) = ((MR_Box) (ProgVars_21));
                  }
                  {
                    Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (Component_97));
                    MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (Context_11));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeComponentContext_8 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_51));
                  }
                }
              }
              else
              {
                MR_Word Pieces_22;
                MR_Word Spec_23;
                MR_Word Var_52;
                MR_Word Var_65;

                {
                  Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (Atom_12));
                }
                {
                  Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_22, 0) = ((MR_Box) (Var_52));
                  MR_hl_field(MR_mktag(1), Pieces_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[334])));
                }
                {
                  Spec_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_component\'/4"));
                  MR_hl_field(MR_mktag(1), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_23, 3) = ((MR_Box) (Context_11));
                  MR_hl_field(MR_mktag(1), Spec_23, 4) = ((MR_Box) (Pieces_22));
                }
                {
                  Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Spec_23));
                  MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeComponentContext_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_65));
                }
              }
            }
            else
            {
              MR_Word Var_75;
              MR_Word Spec_106;

              {
                Spec_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_106, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_component\'/4"));
                MR_hl_field(MR_mktag(1), Spec_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_106, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_106, 3) = ((MR_Box) (Context_11));
                MR_hl_field(MR_mktag(1), Spec_106, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[313])));
              }
              {
                Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Spec_106));
                MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeComponentContext_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_75));
              }
            }
          }
        }
      }
      else
      {
        MR_Word Var_85;
        MR_Word Spec_114;

        {
          Spec_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_114, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_component\'/4"));
          MR_hl_field(MR_mktag(1), Spec_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_114, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_114, 3) = ((MR_Box) (Context_11));
          MR_hl_field(MR_mktag(1), Spec_114, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[313])));
        }
        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Spec_114));
          MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeComponentContext_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_85));
        }
      }
    }
    else
    {
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Spec_116;

      Var_34 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_5);
      {
        Spec_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_116, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_component\'/4"));
        MR_hl_field(MR_mktag(1), Spec_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_116, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_116, 3) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(1), Spec_116, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[315])));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Spec_116));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeComponentContext_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_35));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_atomic_subterm_4_p_0(
  MR_String Name_5,
  MR_Word ErrorTerm_6,
  MR_Word Term_7,
  MR_Word * MaybeComponentState_8)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0))
    {
      MR_Word SubTerms_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      MR_Word TermContext_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 2))));
      MR_Word ComponentState_12;
      MR_Word Var_58;
      MR_Word Term_57;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_String Var_72;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_75;

      succeeded = (SubTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Term_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 0))));
        Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 1))));
        succeeded = (Var_70 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Term_57)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_57, (MR_Integer) 0))));
            Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_57, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_71)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_72 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_71, (MR_Integer) 0))));
              succeeded = (strcmp(Var_72, (MR_String) "!") == 0);
              if (succeeded)
              {
                succeeded = (Var_73 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_73, (MR_Integer) 0))));
                  Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_73, (MR_Integer) 1))));
                  succeeded = (Var_75 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Var_74)) == (MR_Integer) 1);
                    if (succeeded)
                      Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_74, (MR_Integer) 0))));
                  }
                }
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word ProgVar_61;

        mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_58, &ProgVar_61);
        {
          ComponentState_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ComponentState_12, 0) = ((MR_Box) (ProgVar_61));
        }
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word TypeCtorInfo_28_80;
        MR_Word TypeCtorInfo_29_81;
        MR_Word TermA_62;
        MR_Word TermB_63;
        MR_Word VarA_64;
        MR_Word VarB_66;
        MR_Word ProgVarA_68;
        MR_Word ProgVarB_69;
        MR_Word Var_76;
        MR_Word Var_77;

        succeeded = (SubTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TermA_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 0))));
          Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 1))));
          succeeded = (Var_76 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TermB_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_76, (MR_Integer) 0))));
            Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_76, (MR_Integer) 1))));
            succeeded = (Var_77 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) TermA_62)) == (MR_Integer) 1);
              if (succeeded)
              {
                VarA_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TermA_62, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) TermB_63)) == (MR_Integer) 1);
                if (succeeded)
                {
                  VarB_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TermB_63, (MR_Integer) 0))));
                  TypeCtorInfo_28_80 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                  TypeCtorInfo_29_81 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                  mercury__term__coerce_var_2_p_0(TypeCtorInfo_28_80, TypeCtorInfo_29_81, VarA_64, &ProgVarA_68);
                  mercury__term__coerce_var_2_p_0(TypeCtorInfo_28_80, TypeCtorInfo_29_81, VarB_66, &ProgVarB_69);
                  {
                    ComponentState_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ComponentState_12, 0) = ((MR_Box) (ProgVarA_68));
                    MR_hl_field(MR_mktag(1), ComponentState_12, 1) = ((MR_Box) (ProgVarB_69));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
      }
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeComponentState_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ComponentState_12));
        }
      else
      {
        MR_Word Pieces_13;
        MR_Word Spec_14;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_50;

        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Name_5));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[320])));
        }
        {
          Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[355])));
          MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_33));
        }
        {
          Spec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_subterm\'/4"));
          MR_hl_field(MR_mktag(1), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_14, 3) = ((MR_Box) (TermContext_11));
          MR_hl_field(MR_mktag(1), Spec_14, 4) = ((MR_Box) (Pieces_13));
        }
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Spec_14));
          MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeComponentState_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_50));
        }
      }
    }
    else
    {
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Spec_53;

      Var_28 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_6);
      {
        Spec_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_53, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_subterm\'/4"));
        MR_hl_field(MR_mktag(1), Spec_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_53, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_53, 3) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), Spec_53, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[324])));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Spec_53));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeComponentState_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_29));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_112_97_114_97_109_115_95_95_91_50_93_95_48_4_p_0(
  MR_Word VarSet_5,
  MR_Word Term_7,
  MR_Word * MaybeComponentsContexts_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_Word Var_21;
    MR_String Var_22;
    MR_Word Var_23;

    if (succeeded)
    {
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
          succeeded = (strcmp(Var_22, (MR_String) "[]") == 0);
        }
      }
    }
    if (succeeded)
      *MaybeComponentsContexts_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_3[3]));
    else
    {
      MR_Word HeadTerm_10;
      MR_Word TailTerm_11;
      MR_Word Var_25;
      MR_String Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;

      succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
        Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
          succeeded = (strcmp(Var_26, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0))));
              Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 1))));
              succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TailTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 0))));
                Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 1))));
                succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word MaybeHeadComponentContext_13;
        MR_Word MaybeTailComponentsContexts_14;
        MR_Word HeadComponentContext_15;
        MR_Word TailComponentsContexts_16;

        parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_99_111_109_112_111_110_101_110_116_95_95_91_50_93_95_48_4_p_0(VarSet_5, HeadTerm_10, &MaybeHeadComponentContext_13);
        parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_112_97_114_97_109_115_95_95_91_50_93_95_48_4_p_0(VarSet_5, TailTerm_11, &MaybeTailComponentsContexts_14);
        succeeded = ((MR_tag((MR_Word) MaybeHeadComponentContext_13)) == (MR_Integer) 1);
        if (succeeded)
        {
          HeadComponentContext_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHeadComponentContext_13, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeTailComponentsContexts_14)) == (MR_Integer) 1);
          if (succeeded)
            TailComponentsContexts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTailComponentsContexts_14, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word Var_30;

          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (HeadComponentContext_15));
            MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (TailComponentsContexts_16));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeComponentsContexts_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_30));
          }
        }
        else
        {
          MR_Word Specs_17;
          MR_Word Var_31;
          MR_Word Var_32;

          Var_31 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_2[0]), MaybeHeadComponentContext_13);
          Var_32 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[5]), MaybeTailComponentsContexts_14);
          Specs_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_31, Var_32);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeComponentsContexts_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_17));
          }
        }
      }
      else
      {
        MR_String TermStr_18;
        MR_Word Pieces_19;
        MR_Word Spec_20;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_46;
        MR_Word Var_47;

        TermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, Term_7);
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (TermStr_18));
        }
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[36])));
        }
        {
          Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[379])));
          MR_hl_field(MR_mktag(1), Pieces_19, 1) = ((MR_Box) (Var_35));
        }
        Var_46 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
        {
          Spec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_params\'/4"));
          MR_hl_field(MR_mktag(1), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_20, 3) = ((MR_Box) (Var_46));
          MR_hl_field(MR_mktag(1), Spec_20, 4) = ((MR_Box) (Pieces_19));
        }
        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Spec_20));
          MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeComponentsContexts_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_47));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_99_111_109_112_111_110_101_110_116_95_95_91_50_93_95_48_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_MaybeRuntime_6;

    parse_tree__parse_goal__parse_trace_runtime_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_MaybeRuntime_6);
    *wrapper_arg_2 = ((MR_Box) (conv1_MaybeRuntime_6));
  }
}

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_99_111_109_112_111_110_101_110_116_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybeCompiletime_6;

    parse_tree__parse_goal__parse_trace_compiletime_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeCompiletime_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_MaybeCompiletime_6));
  }
}

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_99_111_109_112_111_110_101_110_116_95_95_91_50_93_95_48_4_p_0(
  MR_Word VarSet_5,
  MR_Word Term_7,
  MR_Word * MaybeComponentContext_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_Word SubTerms_10;
    MR_Word Context_11;
    MR_String Atom_12;
    MR_Word Functor_9;

    if (succeeded)
    {
      Functor_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      SubTerms_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Functor_9)) == (MR_Integer) 0);
      if (succeeded)
        Atom_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_9, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      if ((strcmp(Atom_12, (MR_String) "compiletime") == 0))
        succeeded = MR_TRUE;
      else
      if ((strcmp(Atom_12, (MR_String) "compile_time") == 0))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word SubTerm_13;
        MR_Word Var_42;

        succeeded = (SubTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          SubTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 0))));
          Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 1))));
          succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          MR_Word MaybeCompileTime_14;
          MR_Word Var_43;

          {
            Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_99_111_109_112_111_110_101_110_116_95_95_91_50_93_95_48_4_p_0_1));
            MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (VarSet_5));
          }
          parse_tree__parse_goal__parse_trace_tree_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_compiletime_0), Var_43, SubTerm_13, &MaybeCompileTime_14);
          if (((MR_tag((MR_Word) MaybeCompileTime_14)) == (MR_Integer) 0))
            *MaybeComponentContext_8 = (MR_Word) (MaybeCompileTime_14);
          else
          {
            MR_Word CompileTime_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCompileTime_14, (MR_Integer) 0))));
            MR_Word Component_16;
            MR_Word Var_44;

            {
              Component_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Component_16, 0) = ((MR_Box) (CompileTime_15));
            }
            {
              Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (Component_16));
              MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (Context_11));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeComponentContext_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_44));
            }
          }
        }
        else
        {
          MR_Word Pieces_18;
          MR_Word Spec_19;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_64;

          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_48, 0) = ((MR_Box) (Atom_12));
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[168])));
          }
          {
            Pieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[355])));
            MR_hl_field(MR_mktag(1), Pieces_18, 1) = ((MR_Box) (Var_47));
          }
          {
            Spec_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component\'/4"));
            MR_hl_field(MR_mktag(1), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_19, 3) = ((MR_Box) (Context_11));
            MR_hl_field(MR_mktag(1), Spec_19, 4) = ((MR_Box) (Pieces_18));
          }
          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Spec_19));
            MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeComponentContext_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_64));
          }
        }
      }
      else
      {
        if ((strcmp(Atom_12, (MR_String) "runtime") == 0))
          succeeded = MR_TRUE;
        else
        if ((strcmp(Atom_12, (MR_String) "run_time") == 0))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          MR_Word SubTerm_244;
          MR_Word Var_66;

          succeeded = (SubTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SubTerm_244 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 0))));
            Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 1))));
            succeeded = (Var_66 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            MR_Word MaybeRunTime_20;
            MR_Word Var_67;

            {
              Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_5[1]));
              MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_99_111_109_112_111_110_101_110_116_95_95_91_50_93_95_48_4_p_0_2));
              MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (VarSet_5));
            }
            parse_tree__parse_goal__parse_trace_tree_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0), Var_67, SubTerm_244, &MaybeRunTime_20);
            if (((MR_tag((MR_Word) MaybeRunTime_20)) == (MR_Integer) 0))
              *MaybeComponentContext_8 = (MR_Word) (MaybeRunTime_20);
            else
            {
              MR_Word RunTime_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRunTime_20, (MR_Integer) 0))));
              MR_Word Var_68;
              MR_Word Component_236;

              {
                Component_236 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Component_236, 0) = ((MR_Box) (RunTime_21));
              }
              {
                Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Component_236));
                MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (Context_11));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeComponentContext_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_68));
              }
            }
          }
          else
          {
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_88;
            MR_Word Pieces_242;
            MR_Word Spec_243;

            {
              Var_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_72, 0) = ((MR_Box) (Atom_12));
            }
            {
              Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
              MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[172])));
            }
            {
              Pieces_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_242, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[355])));
              MR_hl_field(MR_mktag(1), Pieces_242, 1) = ((MR_Box) (Var_71));
            }
            {
              Spec_243 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_243, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component\'/4"));
              MR_hl_field(MR_mktag(1), Spec_243, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_243, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_243, 3) = ((MR_Box) (Context_11));
              MR_hl_field(MR_mktag(1), Spec_243, 4) = ((MR_Box) (Pieces_242));
            }
            {
              Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Spec_243));
              MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeComponentContext_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_88));
            }
          }
        }
        else
        {
          succeeded = (strcmp(Atom_12, (MR_String) "io") == 0);
          if (succeeded)
          {
            MR_Word SubTerm_257;
            MR_Word Var_90;

            succeeded = (SubTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SubTerm_257 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 0))));
              Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 1))));
              succeeded = (Var_90 == (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
            {
              MR_Word Var_22;
              MR_Word Var_91;
              MR_String Var_92;
              MR_Word Var_93;
              MR_Word Var_94;
              MR_Word Var_95;

              succeeded = ((MR_tag((MR_Word) SubTerm_257)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTerm_257, (MR_Integer) 0))));
                Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTerm_257, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_91)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_92 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_91, (MR_Integer) 0))));
                  succeeded = (strcmp(Var_92, (MR_String) "!") == 0);
                  if (succeeded)
                  {
                    succeeded = (Var_93 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_93, (MR_Integer) 0))));
                      Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_93, (MR_Integer) 1))));
                      succeeded = (Var_95 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) Var_94)) == (MR_Integer) 1);
                        if (succeeded)
                          Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_94, (MR_Integer) 0))));
                      }
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word ProgVar_25;
                MR_Word Var_96;
                MR_Word Component_249;

                mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_22, &ProgVar_25);
                {
                  Component_249 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Component_249, 0) = ((MR_Box) (ProgVar_25));
                }
                {
                  Var_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (Component_249));
                  MR_hl_field(MR_mktag(0), Var_96, 1) = ((MR_Box) (Context_11));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeComponentContext_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_96));
                }
              }
              else
              {
                MR_Word Var_99;
                MR_Word Var_100;
                MR_Word Var_110;
                MR_Word Var_111;
                MR_Word Pieces_250;
                MR_Word Spec_251;

                {
                  Var_100 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_100, 0) = ((MR_Box) (Atom_12));
                }
                {
                  Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
                  MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[174])));
                }
                {
                  Pieces_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_250, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[372])));
                  MR_hl_field(MR_mktag(1), Pieces_250, 1) = ((MR_Box) (Var_99));
                }
                Var_110 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubTerm_257);
                {
                  Spec_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_251, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component\'/4"));
                  MR_hl_field(MR_mktag(1), Spec_251, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_251, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_251, 3) = ((MR_Box) (Var_110));
                  MR_hl_field(MR_mktag(1), Spec_251, 4) = ((MR_Box) (Pieces_250));
                }
                {
                  Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Spec_251));
                  MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeComponentContext_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_111));
                }
              }
            }
            else
            {
              MR_Word Var_115;
              MR_Word Var_116;
              MR_Word Var_129;
              MR_Word Pieces_255;
              MR_Word Spec_256;

              {
                Var_116 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_116, 0) = ((MR_Box) (Atom_12));
              }
              {
                Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Var_116));
                MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[177])));
              }
              {
                Pieces_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_255, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[355])));
                MR_hl_field(MR_mktag(1), Pieces_255, 1) = ((MR_Box) (Var_115));
              }
              {
                Spec_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_256, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component\'/4"));
                MR_hl_field(MR_mktag(1), Spec_256, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_256, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_256, 3) = ((MR_Box) (Context_11));
                MR_hl_field(MR_mktag(1), Spec_256, 4) = ((MR_Box) (Pieces_255));
              }
              {
                Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Spec_256));
                MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeComponentContext_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_129));
              }
            }
          }
          else
          {
            succeeded = (strcmp(Atom_12, (MR_String) "state") == 0);
            if (succeeded)
            {
              MR_Word SubTermA_26;
              MR_Word SubTermB_27;
              MR_Word Var_131;
              MR_Word Var_132;

              succeeded = (SubTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubTermA_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 0))));
                Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 1))));
                succeeded = (Var_131 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubTermB_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_131, (MR_Integer) 0))));
                  Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_131, (MR_Integer) 1))));
                  succeeded = (Var_132 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeMutable_30;
                MR_Word MaybeVar_35;
                MR_String MutableName_28;
                MR_Word Var_133;
                MR_Word Var_134;
                MR_Word Var_261;
                MR_Word Var_154;
                MR_String Var_155;
                MR_Word Var_156;
                MR_Word Var_157;
                MR_Word Var_158;
                MR_String FinalMutable_38;
                MR_Word FinalVar_39;

                succeeded = ((MR_tag((MR_Word) SubTermA_26)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTermA_26, (MR_Integer) 0))));
                  Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTermA_26, (MR_Integer) 1))));
                  succeeded = (Var_134 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Var_133)) == (MR_Integer) 0);
                    if (succeeded)
                      MutableName_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_133, (MR_Integer) 0))));
                  }
                }
                if (succeeded)
                  {
                    MaybeMutable_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MaybeMutable_30, 0) = ((MR_Box) (MutableName_28));
                  }
                else
                {
                  MR_Word MutablePieces_31;
                  MR_Word MutableSpec_32;
                  MR_Word Var_137;
                  MR_Word Var_138;
                  MR_Word Var_151;
                  MR_Word Var_152;

                  {
                    Var_138 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_138, 0) = ((MR_Box) (Atom_12));
                  }
                  {
                    Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (Var_138));
                    MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[181])));
                  }
                  {
                    MutablePieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MutablePieces_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[360])));
                    MR_hl_field(MR_mktag(1), MutablePieces_31, 1) = ((MR_Box) (Var_137));
                  }
                  Var_151 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubTermA_26);
                  {
                    MutableSpec_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MutableSpec_32, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component\'/4"));
                    MR_hl_field(MR_mktag(1), MutableSpec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), MutableSpec_32, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(1), MutableSpec_32, 3) = ((MR_Box) (Var_151));
                    MR_hl_field(MR_mktag(1), MutableSpec_32, 4) = ((MR_Box) (MutablePieces_31));
                  }
                  {
                    Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (MutableSpec_32));
                    MR_hl_field(MR_mktag(1), Var_152, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MaybeMutable_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MaybeMutable_30, 0) = ((MR_Box) (Var_152));
                  }
                }
                succeeded = ((MR_tag((MR_Word) SubTermB_27)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTermB_27, (MR_Integer) 0))));
                  Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTermB_27, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_154)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_155 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_154, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_155, (MR_String) "!") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_156 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_156, (MR_Integer) 0))));
                        Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_156, (MR_Integer) 1))));
                        succeeded = (Var_158 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) Var_157)) == (MR_Integer) 1);
                          if (succeeded)
                            Var_261 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_157, (MR_Integer) 0))));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                  {
                    MaybeVar_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MaybeVar_35, 0) = ((MR_Box) (Var_261));
                  }
                else
                {
                  MR_Word VarPieces_36;
                  MR_Word VarSpec_37;
                  MR_Word Var_161;
                  MR_Word Var_162;
                  MR_Word Var_175;
                  MR_Word Var_176;

                  {
                    Var_162 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_162, 0) = ((MR_Box) (Atom_12));
                  }
                  {
                    Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_161, 0) = ((MR_Box) (Var_162));
                    MR_hl_field(MR_mktag(1), Var_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[184])));
                  }
                  {
                    VarPieces_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), VarPieces_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[378])));
                    MR_hl_field(MR_mktag(1), VarPieces_36, 1) = ((MR_Box) (Var_161));
                  }
                  Var_175 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubTermB_27);
                  {
                    VarSpec_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), VarSpec_37, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component\'/4"));
                    MR_hl_field(MR_mktag(1), VarSpec_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), VarSpec_37, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(1), VarSpec_37, 3) = ((MR_Box) (Var_175));
                    MR_hl_field(MR_mktag(1), VarSpec_37, 4) = ((MR_Box) (VarPieces_36));
                  }
                  {
                    Var_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_176, 0) = ((MR_Box) (VarSpec_37));
                    MR_hl_field(MR_mktag(1), Var_176, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MaybeVar_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MaybeVar_35, 0) = ((MR_Box) (Var_176));
                  }
                }
                succeeded = ((MR_tag((MR_Word) MaybeMutable_30)) == (MR_Integer) 1);
                if (succeeded)
                {
                  FinalMutable_38 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeMutable_30, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeVar_35)) == (MR_Integer) 1);
                  if (succeeded)
                    FinalVar_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVar_35, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word MutableVar_40;
                  MR_Word Var_178;
                  MR_Word Component_262;
                  MR_Word ProgVar_263;

                  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FinalVar_39, &ProgVar_263);
                  {
                    MutableVar_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MutableVar_40, 0) = ((MR_Box) (FinalMutable_38));
                    MR_hl_field(MR_mktag(0), MutableVar_40, 1) = ((MR_Box) (ProgVar_263));
                  }
                  Component_262 = (MR_Word) ((MR_Word) (MutableVar_40));
                  {
                    Var_178 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_178, 0) = ((MR_Box) (Component_262));
                    MR_hl_field(MR_mktag(0), Var_178, 1) = ((MR_Box) (Context_11));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeComponentContext_8 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_178));
                  }
                }
                else
                {
                  MR_Word Var_179;
                  MR_Word Var_180;
                  MR_Word Specs_264;

                  Var_179 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), MaybeVar_35);
                  Var_180 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeMutable_30);
                  Specs_264 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_179, Var_180);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeComponentContext_8 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_264));
                  }
                }
              }
              else
              {
                MR_Word Var_183;
                MR_Word Var_184;
                MR_Word Var_203;
                MR_Word Pieces_272;
                MR_Word Spec_273;

                {
                  Var_184 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_184, 0) = ((MR_Box) (Atom_12));
                }
                {
                  Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_183, 0) = ((MR_Box) (Var_184));
                  MR_hl_field(MR_mktag(1), Var_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[192])));
                }
                {
                  Pieces_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_272, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[355])));
                  MR_hl_field(MR_mktag(1), Pieces_272, 1) = ((MR_Box) (Var_183));
                }
                {
                  Spec_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_273, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component\'/4"));
                  MR_hl_field(MR_mktag(1), Spec_273, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_273, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_273, 3) = ((MR_Box) (Context_11));
                  MR_hl_field(MR_mktag(1), Spec_273, 4) = ((MR_Box) (Pieces_272));
                }
                {
                  Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_203, 0) = ((MR_Box) (Spec_273));
                  MR_hl_field(MR_mktag(1), Var_203, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeComponentContext_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_203));
                }
              }
            }
            else
            {
              MR_String TermStr_41;
              MR_Word Var_207;
              MR_Word Var_208;
              MR_Word Var_218;
              MR_Word Pieces_280;
              MR_Word Spec_281;

              TermStr_41 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, Term_7);
              {
                Var_208 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_208, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_208, 1) = ((MR_Box) (TermStr_41));
              }
              {
                Var_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_207, 0) = ((MR_Box) (Var_208));
                MR_hl_field(MR_mktag(1), Var_207, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[36])));
              }
              {
                Pieces_280 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_280, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[379])));
                MR_hl_field(MR_mktag(1), Pieces_280, 1) = ((MR_Box) (Var_207));
              }
              {
                Spec_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_281, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component\'/4"));
                MR_hl_field(MR_mktag(1), Spec_281, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_281, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_281, 3) = ((MR_Box) (Context_11));
                MR_hl_field(MR_mktag(1), Spec_281, 4) = ((MR_Box) (Pieces_280));
              }
              {
                Var_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_218, 0) = ((MR_Box) (Spec_281));
                MR_hl_field(MR_mktag(1), Var_218, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeComponentContext_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_218));
              }
            }
          }
        }
      }
    }
    else
    {
      MR_Word Var_222;
      MR_Word Var_223;
      MR_Word Var_233;
      MR_Word Var_234;
      MR_Word Pieces_298;
      MR_Word Spec_299;
      MR_String TermStr_300;

      TermStr_300 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, Term_7);
      {
        Var_223 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_223, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_223, 1) = ((MR_Box) (TermStr_300));
      }
      {
        Var_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_222, 0) = ((MR_Box) (Var_223));
        MR_hl_field(MR_mktag(1), Var_222, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[36])));
      }
      {
        Pieces_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_298, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[379])));
        MR_hl_field(MR_mktag(1), Pieces_298, 1) = ((MR_Box) (Var_222));
      }
      Var_233 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_299 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_299, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component\'/4"));
        MR_hl_field(MR_mktag(1), Spec_299, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_299, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_299, 3) = ((MR_Box) (Var_233));
        MR_hl_field(MR_mktag(1), Spec_299, 4) = ((MR_Box) (Pieces_298));
      }
      {
        Var_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_234, 0) = ((MR_Box) (Spec_299));
        MR_hl_field(MR_mktag(1), Var_234, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeComponentContext_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_234));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_trace_tree_3_p_0(
  MR_Word TypeInfo_for_T_41,
  MR_Word BaseParser_4,
  MR_Word Term_5,
  MR_Word * MaybeTree_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    MR_Word LTerm_8;
    MR_Word RTerm_9;
    MR_Word Op_11;
    MR_String Atom_7;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;

    if (succeeded)
    {
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
      if (succeeded)
      {
        Atom_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
        succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          LTerm_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0))));
          Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1))));
          succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RTerm_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0))));
            Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1))));
            succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              if ((strcmp(Atom_7, (MR_String) "or") == 0))
              {
                Op_11 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
              else
              if ((strcmp(Atom_7, (MR_String) "and") == 0))
              {
                Op_11 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
                succeeded = MR_FALSE;
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeLExpr_12;
      MR_Word MaybeRExpr_13;
      MR_Word LExpr_14;
      MR_Word RExpr_15;

      parse_tree__parse_goal__parse_trace_tree_3_p_0(TypeInfo_for_T_41, BaseParser_4, LTerm_8, &MaybeLExpr_12);
      parse_tree__parse_goal__parse_trace_tree_3_p_0(TypeInfo_for_T_41, BaseParser_4, RTerm_9, &MaybeRExpr_13);
      succeeded = ((MR_tag((MR_Word) MaybeLExpr_12)) == (MR_Integer) 1);
      if (succeeded)
      {
        LExpr_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLExpr_12, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeRExpr_13)) == (MR_Integer) 1);
        if (succeeded)
          RExpr_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRExpr_13, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word Var_28;

        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_28, 0) = (MR_Box) ((MR_Unsigned) (Op_11));
          MR_hl_field(MR_mktag(2), Var_28, 1) = ((MR_Box) (LExpr_14));
          MR_hl_field(MR_mktag(2), Var_28, 2) = ((MR_Box) (RExpr_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeTree_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
        }
      }
      else
      {
        MR_Word TypeInfo_44_44;
        MR_Word Specs_16;
        MR_Word Var_29;
        MR_Word Var_30;

        {
          TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_44_44, 0) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_expr_1));
          MR_hl_field(MR_mktag(0), TypeInfo_44_44, 1) = ((MR_Box) (TypeInfo_for_T_41));
        }
        Var_29 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_44_44, (MR_Word) (MaybeLExpr_12));
        Var_30 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_44_44, (MR_Word) (MaybeRExpr_13));
        Specs_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_29, Var_30);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeTree_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_16));
        }
      }
    }
    else
    {
      MR_Word SubTerm_17;
      MR_Word Var_31;
      MR_String Var_32;
      MR_Word Var_33;
      MR_Word Var_34;

      succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
        Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_32 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 0))));
          succeeded = (strcmp(Var_32, (MR_String) "not") == 0);
          if (succeeded)
          {
            succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SubTerm_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 0))));
              Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 1))));
              succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word MaybeSubExpr_19;
        MR_Word SubExpr_20;

        parse_tree__parse_goal__parse_trace_tree_3_p_0(TypeInfo_for_T_41, BaseParser_4, SubTerm_17, &MaybeSubExpr_19);
        succeeded = ((MR_tag((MR_Word) MaybeSubExpr_19)) == (MR_Integer) 1);
        if (succeeded)
        {
          SubExpr_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubExpr_19, (MR_Integer) 0))));
          {
            MR_Word Var_35;

            {
              Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (SubExpr_20));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeTree_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_35));
            }
          }
        }
        else
        {
          MR_Word TypeInfo_46_46;
          MR_Word SubSpecs_21;

          {
            TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_46_46, 0) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_expr_1));
            MR_hl_field(MR_mktag(0), TypeInfo_46_46, 1) = ((MR_Box) (TypeInfo_for_T_41));
          }
          SubSpecs_21 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_46_46, (MR_Word) (MaybeSubExpr_19));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeTree_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SubSpecs_21));
          }
        }
      }
      else
      {
        MR_Word MaybeBase_22;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), BaseParser_4, (MR_Integer) 1))));
        MR_Box conv1_MaybeBase_22;

        func_0(((MR_Box) (BaseParser_4)), ((MR_Box) (Term_5)), &conv1_MaybeBase_22);
        MaybeBase_22 = ((MR_Word) (conv1_MaybeBase_22));
        if (((MR_tag((MR_Word) MaybeBase_22)) == (MR_Integer) 0))
          *MaybeTree_6 = (MR_Word) (MaybeBase_22);
        else
        {
          MR_Box Base_23 = (MR_hl_field(MR_mktag(1), MaybeBase_22, (MR_Integer) 0));
          MR_Word Var_36;

          {
            Var_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_36, 0) = Base_23;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeTree_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_36));
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__convert_atomic_params_3_p_0(
  MR_Word ErrorTerm_4,
  MR_Word ComponentsContexts_5,
  MR_Word * MaybeParams_6)
{
  {
    MR_Word Var_7;

    Var_7 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_4);
    parse_tree__parse_goal__convert_atomic_params_2_7_p_0(Var_7, ComponentsContexts_5, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), MaybeParams_6);
  }
}

static void MR_CALL 
parse_tree__parse_goal__convert_atomic_params_2_7_p_0(
  MR_Word Context_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * MaybeParams_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
          if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_36;
            MR_Word Spec_67;

            {
              Spec_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_67, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.convert_atomic_params_2\'/7"));
              MR_hl_field(MR_mktag(1), Spec_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_67, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_67, 3) = ((MR_Box) (Context_1));
              MR_hl_field(MR_mktag(1), Spec_67, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[340])));
            }
            {
              Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Spec_67));
              MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeParams_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
            }
          }
          else
          {
            MR_Word Var_49;
            MR_Word Spec_65;

            {
              Spec_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_65, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.convert_atomic_params_2\'/7"));
              MR_hl_field(MR_mktag(1), Spec_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_65, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_65, 3) = ((MR_Box) (Context_1));
              MR_hl_field(MR_mktag(1), Spec_65, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[343])));
            }
            {
              Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Spec_65));
              MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeParams_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_49));
            }
          }
        else
        {
          MR_Word Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

          if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Spec_18;
            MR_Word Var_62;

            {
              Spec_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.convert_atomic_params_2\'/7"));
              MR_hl_field(MR_mktag(1), Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_18, 3) = ((MR_Box) (Context_1));
              MR_hl_field(MR_mktag(1), Spec_18, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[346])));
            }
            {
              Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Spec_18));
              MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeParams_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_62));
            }
          }
          else
          {
            MR_Word Inner_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *MaybeParams_7 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_141));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Inner_15));
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (HeadVar__5_5));
            }
          }
        }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeParams_7 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (HeadVar__6_6));
        }
    else
    {
      MR_Word Component_69;
      MR_Word CompContext_70;
      MR_Word ComponentsContexts_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_MaybeVars_101_101;
      MR_Word STATE_VARIABLE_MaybeInner_113_113;
      MR_Word STATE_VARIABLE_Specs_122_122;
      MR_Word STATE_VARIABLE_MaybeOuter_125_125;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_HeadVar__6_6;

      Component_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_89, (MR_Integer) 0))));
      CompContext_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_89, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) Component_69)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Inner_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Component_69, (MR_Integer) 0))));

            if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                STATE_VARIABLE_MaybeInner_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeInner_113_113, 0) = ((MR_Box) (Inner_81));
              }
              STATE_VARIABLE_Specs_122_122 = HeadVar__6_6;
            }
            else
            {
              MR_Word Var_111;
              MR_Word Spec_127;

              {
                Spec_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_127, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.convert_atomic_params_2\'/7"));
                MR_hl_field(MR_mktag(1), Spec_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_127, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_127, 3) = ((MR_Box) (CompContext_70));
                MR_hl_field(MR_mktag(1), Spec_127, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[348])));
              }
              {
                Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Spec_127));
                MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_Specs_122_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), HeadVar__6_6, Var_111);
              STATE_VARIABLE_MaybeInner_113_113 = HeadVar__4_4;
            }
            STATE_VARIABLE_MaybeOuter_125_125 = HeadVar__3_3;
            STATE_VARIABLE_MaybeVars_101_101 = HeadVar__5_5;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Outer_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Component_69, (MR_Integer) 0))));

            if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                STATE_VARIABLE_MaybeOuter_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeOuter_125_125, 0) = ((MR_Box) (Outer_77));
              }
              STATE_VARIABLE_Specs_122_122 = HeadVar__6_6;
            }
            else
            {
              MR_Word Spec_80;
              MR_Word Var_123;

              {
                Spec_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_80, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.convert_atomic_params_2\'/7"));
                MR_hl_field(MR_mktag(1), Spec_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_80, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_80, 3) = ((MR_Box) (CompContext_70));
                MR_hl_field(MR_mktag(1), Spec_80, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[350])));
              }
              {
                Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Spec_80));
                MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_Specs_122_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), HeadVar__6_6, Var_123);
              STATE_VARIABLE_MaybeOuter_125_125 = HeadVar__3_3;
            }
            STATE_VARIABLE_MaybeInner_113_113 = HeadVar__4_4;
            STATE_VARIABLE_MaybeVars_101_101 = HeadVar__5_5;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Vars_83 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Component_69, (MR_Integer) 0))));

            if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                STATE_VARIABLE_MaybeVars_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeVars_101_101, 0) = ((MR_Box) (Vars_83));
              }
              STATE_VARIABLE_Specs_122_122 = HeadVar__6_6;
            }
            else
            {
              MR_Word Var_99;
              MR_Word Spec_133;

              {
                Spec_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_133, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.convert_atomic_params_2\'/7"));
                MR_hl_field(MR_mktag(1), Spec_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_133, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_133, 3) = ((MR_Box) (CompContext_70));
                MR_hl_field(MR_mktag(1), Spec_133, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[352])));
              }
              {
                Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Spec_133));
                MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_Specs_122_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), HeadVar__6_6, Var_99);
              STATE_VARIABLE_MaybeVars_101_101 = HeadVar__5_5;
            }
            STATE_VARIABLE_MaybeOuter_125_125 = HeadVar__3_3;
            STATE_VARIABLE_MaybeInner_113_113 = HeadVar__4_4;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ComponentsContexts_71;
      next_value_of_HeadVar__3_3 = STATE_VARIABLE_MaybeOuter_125_125;
      next_value_of_HeadVar__4_4 = STATE_VARIABLE_MaybeInner_113_113;
      next_value_of_HeadVar__5_5 = STATE_VARIABLE_MaybeVars_101_101;
      next_value_of_HeadVar__6_6 = STATE_VARIABLE_Specs_122_122;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_121_95_112_97_114_97_109_115_95_95_91_50_93_95_48_4_p_0(
  MR_Word VarSet_5,
  MR_Word Term_7,
  MR_Word * MaybeComponentsContexts_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_Word Var_21;
    MR_String Var_22;
    MR_Word Var_23;

    if (succeeded)
    {
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
          succeeded = (strcmp(Var_22, (MR_String) "[]") == 0);
        }
      }
    }
    if (succeeded)
      *MaybeComponentsContexts_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_3[2]));
    else
    {
      MR_Word HeadTerm_10;
      MR_Word TailTerm_11;
      MR_Word Var_25;
      MR_String Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;

      succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
        Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
          succeeded = (strcmp(Var_26, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0))));
              Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 1))));
              succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TailTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 0))));
                Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 1))));
                succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word MaybeHeadComponentContext_13;
        MR_Word MaybeTailComponentsContexts_14;
        MR_Word HeadComponentContext_15;
        MR_Word TailComponentsContexts_16;

        parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_121_95_112_97_114_97_109_95_95_91_50_93_95_48_4_p_0(VarSet_5, HeadTerm_10, &MaybeHeadComponentContext_13);
        parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_121_95_112_97_114_97_109_115_95_95_91_50_93_95_48_4_p_0(VarSet_5, TailTerm_11, &MaybeTailComponentsContexts_14);
        succeeded = ((MR_tag((MR_Word) MaybeHeadComponentContext_13)) == (MR_Integer) 1);
        if (succeeded)
        {
          HeadComponentContext_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHeadComponentContext_13, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeTailComponentsContexts_14)) == (MR_Integer) 1);
          if (succeeded)
            TailComponentsContexts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTailComponentsContexts_14, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word Var_30;

          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (HeadComponentContext_15));
            MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (TailComponentsContexts_16));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeComponentsContexts_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_30));
          }
        }
        else
        {
          MR_Word Specs_17;
          MR_Word Var_31;
          MR_Word Var_32;

          Var_31 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_2[2]), MaybeHeadComponentContext_13);
          Var_32 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[12]), MaybeTailComponentsContexts_14);
          Specs_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_31, Var_32);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeComponentsContexts_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_17));
          }
        }
      }
      else
      {
        MR_String TermStr_18;
        MR_Word Pieces_19;
        MR_Word Spec_20;
        MR_Word Var_35;
        MR_Word Var_38;
        MR_Word Var_41;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_55;
        MR_Word Var_56;

        TermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, Term_7);
        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (TermStr_18));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[155])));
        }
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[377])));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[376])));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
        }
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[375])));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
        }
        {
          Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[374])));
          MR_hl_field(MR_mktag(1), Pieces_19, 1) = ((MR_Box) (Var_35));
        }
        Var_55 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
        {
          Spec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_try_params\'/4"));
          MR_hl_field(MR_mktag(1), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_20, 3) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(1), Spec_20, 4) = ((MR_Box) (Pieces_19));
        }
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Spec_20));
          MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeComponentsContexts_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_56));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_121_95_112_97_114_97_109_95_95_91_50_93_95_48_4_p_0(
  MR_Word VarSet_5,
  MR_Word Term_7,
  MR_Word * MaybeComponentContext_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_Word SubTerms_10;
    MR_Word Context_11;
    MR_String Atom_12;
    MR_Word Functor_9;

    if (succeeded)
    {
      Functor_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      SubTerms_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Functor_9)) == (MR_Integer) 0);
      if (succeeded)
        Atom_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_9, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      succeeded = (strcmp(Atom_12, (MR_String) "io") == 0);
      if (succeeded)
      {
        MR_Word SubTerm_13;
        MR_Word Var_22;

        succeeded = (SubTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          SubTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 0))));
          Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 1))));
          succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          MR_Word Var_14;
          MR_Word Var_23;
          MR_String Var_24;
          MR_Word Var_25;
          MR_Word Var_26;
          MR_Word Var_27;

          succeeded = ((MR_tag((MR_Word) SubTerm_13)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTerm_13, (MR_Integer) 0))));
            Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTerm_13, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
              succeeded = (strcmp(Var_24, (MR_String) "!") == 0);
              if (succeeded)
              {
                succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0))));
                  Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1))));
                  succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_Integer) 1);
                    if (succeeded)
                      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0))));
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word ProgVar_17;
            MR_Word Component_18;
            MR_Word Var_28;

            mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_14, &ProgVar_17);
            Component_18 = (MR_Word) (ProgVar_17);
            {
              Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Component_18));
              MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (Context_11));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeComponentContext_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
            }
          }
          else
          {
            MR_Word Pieces_19;
            MR_Word Spec_20;
            MR_Word Var_31;
            MR_Word Var_32;
            MR_Word Var_42;
            MR_Word Var_43;

            {
              Var_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_32, 0) = ((MR_Box) (Atom_12));
            }
            {
              Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
              MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[174])));
            }
            {
              Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[372])));
              MR_hl_field(MR_mktag(1), Pieces_19, 1) = ((MR_Box) (Var_31));
            }
            Var_42 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubTerm_13);
            {
              Spec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_try_param\'/4"));
              MR_hl_field(MR_mktag(1), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_20, 3) = ((MR_Box) (Var_42));
              MR_hl_field(MR_mktag(1), Spec_20, 4) = ((MR_Box) (Pieces_19));
            }
            {
              Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Spec_20));
              MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeComponentContext_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_43));
            }
          }
        }
        else
        {
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_61;
          MR_Word Pieces_94;
          MR_Word Spec_95;

          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_48, 0) = ((MR_Box) (Atom_12));
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[177])));
          }
          {
            Pieces_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[355])));
            MR_hl_field(MR_mktag(1), Pieces_94, 1) = ((MR_Box) (Var_47));
          }
          {
            Spec_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_95, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_try_param\'/4"));
            MR_hl_field(MR_mktag(1), Spec_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_95, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_95, 3) = ((MR_Box) (Context_11));
            MR_hl_field(MR_mktag(1), Spec_95, 4) = ((MR_Box) (Pieces_94));
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Spec_95));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeComponentContext_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_61));
          }
        }
      }
      else
      {
        MR_String TermStr_21;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_76;
        MR_Word Pieces_96;
        MR_Word Spec_97;

        TermStr_21 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, Term_7);
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (TermStr_21));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[36])));
        }
        {
          Pieces_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_96, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[373])));
          MR_hl_field(MR_mktag(1), Pieces_96, 1) = ((MR_Box) (Var_65));
        }
        {
          Spec_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_97, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_try_param\'/4"));
          MR_hl_field(MR_mktag(1), Spec_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_97, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_97, 3) = ((MR_Box) (Context_11));
          MR_hl_field(MR_mktag(1), Spec_97, 4) = ((MR_Box) (Pieces_96));
        }
        {
          Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Spec_97));
          MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeComponentContext_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_76));
        }
      }
    }
    else
    {
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Pieces_98;
      MR_Word Spec_99;
      MR_String TermStr_100;

      TermStr_100 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, Term_7);
      {
        Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (TermStr_100));
      }
      {
        Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[36])));
      }
      {
        Pieces_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_98, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[373])));
        MR_hl_field(MR_mktag(1), Pieces_98, 1) = ((MR_Box) (Var_80));
      }
      Var_91 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_99, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_try_param\'/4"));
        MR_hl_field(MR_mktag(1), Spec_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_99, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_99, 3) = ((MR_Box) (Var_91));
        MR_hl_field(MR_mktag(1), Spec_99, 4) = ((MR_Box) (Pieces_98));
      }
      {
        Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Spec_99));
        MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeComponentContext_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_92));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__convert_try_params_2_p_0(
  MR_Word Components_3,
  MR_Word * MaybeParams_4)
{
  parse_tree__parse_goal__convert_try_params_2_4_p_0(Components_3, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), MaybeParams_4);
}

static void MR_CALL 
parse_tree__parse_goal__convert_try_params_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * MaybeParams_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeParams_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVar__2_2));
        }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeParams_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (HeadVar__3_3));
        }
    else
    {
      MR_Word Component_10;
      MR_Word Context_11;
      MR_Word ComponentsContexts_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word IOStateVar_16;
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Specs_31_31;
      MR_Word STATE_VARIABLE_MaybeIO_32_32;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      Component_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0))));
      Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1))));
      IOStateVar_16 = (MR_Word) (Component_10);
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_MaybeIO_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeIO_32_32, 0) = ((MR_Box) (IOStateVar_16));
        }
        STATE_VARIABLE_Specs_31_31 = HeadVar__3_3;
      }
      else
      {
        MR_Word Spec_19;

        {
          Spec_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.convert_try_params_2\'/4"));
          MR_hl_field(MR_mktag(1), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_19, 3) = ((MR_Box) (Context_11));
          MR_hl_field(MR_mktag(1), Spec_19, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[311])));
        }
        {
          STATE_VARIABLE_Specs_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_31_31, 0) = ((MR_Box) (Spec_19));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_31_31, 1) = ((MR_Box) (HeadVar__3_3));
        }
        STATE_VARIABLE_MaybeIO_32_32 = HeadVar__2_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ComponentsContexts_12;
      next_value_of_HeadVar__2_2 = STATE_VARIABLE_MaybeIO_32_32;
      next_value_of_HeadVar__3_3 = STATE_VARIABLE_Specs_31_31;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_goal__convert_trace_params_2_p_0(
  MR_Word Components_3,
  MR_Word * MaybeParams_4)
{
  parse_tree__parse_goal__convert_trace_params_2_7_p_0(Components_3, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), MaybeParams_4);
}

static void MR_CALL 
parse_tree__parse_goal__convert_trace_params_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * MaybeParams_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *MaybeParams_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (HeadVar__3_3));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (HeadVar__4_4));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (HeadVar__5_5));
        }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeParams_7 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (HeadVar__6_6));
        }
    else
    {
      MR_Word Component_16;
      MR_Word Context_17;
      MR_Word ComponentsContexts_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_MutableVars_40_40;
      MR_Word STATE_VARIABLE_MaybeIO_52_52;
      MR_Word STATE_VARIABLE_MaybeRunTime_62_62;
      MR_Word STATE_VARIABLE_Specs_71_71;
      MR_Word STATE_VARIABLE_MaybeCompileTime_72_72;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_HeadVar__6_6;

      Component_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0))));
      Context_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) Component_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MutableVar_33 = (MR_Word) ((MR_Word) (Component_16));
            MR_Word Var_41;

            {
              Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MutableVar_33));
              MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            STATE_VARIABLE_MutableVars_40_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), HeadVar__5_5, Var_41);
            STATE_VARIABLE_MaybeCompileTime_72_72 = HeadVar__2_2;
            STATE_VARIABLE_MaybeRunTime_62_62 = HeadVar__3_3;
            STATE_VARIABLE_MaybeIO_52_52 = HeadVar__4_4;
            STATE_VARIABLE_Specs_71_71 = HeadVar__6_6;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CompileTime_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Component_16, (MR_Integer) 0))));

            if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                STATE_VARIABLE_MaybeCompileTime_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeCompileTime_72_72, 0) = ((MR_Box) (CompileTime_25));
              }
              STATE_VARIABLE_Specs_71_71 = HeadVar__6_6;
            }
            else
            {
              MR_Word Spec_28;

              {
                Spec_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.convert_trace_params_2\'/7"));
                MR_hl_field(MR_mktag(1), Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_28, 3) = ((MR_Box) (Context_17));
                MR_hl_field(MR_mktag(1), Spec_28, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[259])));
              }
              {
                STATE_VARIABLE_Specs_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_71_71, 0) = ((MR_Box) (Spec_28));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_71_71, 1) = ((MR_Box) (HeadVar__6_6));
              }
              STATE_VARIABLE_MaybeCompileTime_72_72 = HeadVar__2_2;
            }
            STATE_VARIABLE_MaybeRunTime_62_62 = HeadVar__3_3;
            STATE_VARIABLE_MaybeIO_52_52 = HeadVar__4_4;
            STATE_VARIABLE_MutableVars_40_40 = HeadVar__5_5;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word RunTime_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Component_16, (MR_Integer) 0))));

            if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                STATE_VARIABLE_MaybeRunTime_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeRunTime_62_62, 0) = ((MR_Box) (RunTime_29));
              }
              STATE_VARIABLE_Specs_71_71 = HeadVar__6_6;
            }
            else
            {
              MR_Word Spec_74;

              {
                Spec_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_74, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.convert_trace_params_2\'/7"));
                MR_hl_field(MR_mktag(1), Spec_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_74, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_74, 3) = ((MR_Box) (Context_17));
                MR_hl_field(MR_mktag(1), Spec_74, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[263])));
              }
              {
                STATE_VARIABLE_Specs_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_71_71, 0) = ((MR_Box) (Spec_74));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_71_71, 1) = ((MR_Box) (HeadVar__6_6));
              }
              STATE_VARIABLE_MaybeRunTime_62_62 = HeadVar__3_3;
            }
            STATE_VARIABLE_MaybeCompileTime_72_72 = HeadVar__2_2;
            STATE_VARIABLE_MaybeIO_52_52 = HeadVar__4_4;
            STATE_VARIABLE_MutableVars_40_40 = HeadVar__5_5;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word IOStateVar_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Component_16, (MR_Integer) 0))));

            if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                STATE_VARIABLE_MaybeIO_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeIO_52_52, 0) = ((MR_Box) (IOStateVar_31));
              }
              STATE_VARIABLE_Specs_71_71 = HeadVar__6_6;
            }
            else
            {
              MR_Word Spec_80;

              {
                Spec_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_80, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.convert_trace_params_2\'/7"));
                MR_hl_field(MR_mktag(1), Spec_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_80, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_80, 3) = ((MR_Box) (Context_17));
                MR_hl_field(MR_mktag(1), Spec_80, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[261])));
              }
              {
                STATE_VARIABLE_Specs_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_71_71, 0) = ((MR_Box) (Spec_80));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_71_71, 1) = ((MR_Box) (HeadVar__6_6));
              }
              STATE_VARIABLE_MaybeIO_52_52 = HeadVar__4_4;
            }
            STATE_VARIABLE_MaybeCompileTime_72_72 = HeadVar__2_2;
            STATE_VARIABLE_MaybeRunTime_62_62 = HeadVar__3_3;
            STATE_VARIABLE_MutableVars_40_40 = HeadVar__5_5;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ComponentsContexts_18;
      next_value_of_HeadVar__2_2 = STATE_VARIABLE_MaybeCompileTime_72_72;
      next_value_of_HeadVar__3_3 = STATE_VARIABLE_MaybeRunTime_62_62;
      next_value_of_HeadVar__4_4 = STATE_VARIABLE_MaybeIO_52_52;
      next_value_of_HeadVar__5_5 = STATE_VARIABLE_MutableVars_40_40;
      next_value_of_HeadVar__6_6 = STATE_VARIABLE_Specs_71_71;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_goal__generate_warnings_for_duplicate_warnings_5_p_0(
  MR_Word Context_1,
  MR_Word ContextPieces_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word WarningCount_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word WarningsCounts_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word TailNonDupWarnings_14;
      MR_Word TailDupSpecs_15;
      MR_Word Warning_16;
      MR_Integer Count_17;

      parse_tree__parse_goal__generate_warnings_for_duplicate_warnings_5_p_0(Context_1, ContextPieces_2, WarningsCounts_11, &TailNonDupWarnings_14, &TailDupSpecs_15);
      Warning_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), WarningCount_10, (MR_Integer) 0))));
      Count_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), WarningCount_10, (MR_Integer) 1))));
      succeeded = (Count_17 > (MR_Integer) 1);
      if (succeeded)
      {
        MR_String WarningStr_18;
        MR_String MoreThanOnce_19;
        MR_Word Pieces_20;
        MR_Word Spec_21;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word Var_27;
        MR_Word Var_30;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_38;
        MR_Word Var_39;

        WarningStr_18 = parse_tree__prog_out__goal_warning_to_string_1_f_0(Warning_16);
        succeeded = (Count_17 > (MR_Integer) 2);
        if (succeeded)
          MoreThanOnce_19 = (MR_String) "more than once";
        else
          MoreThanOnce_19 = (MR_String) "";
        Var_24 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_2);
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_34, 0) = ((MR_Box) (WarningStr_18));
        }
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (MoreThanOnce_19));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[162])));
        }
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[371])));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[370])));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
        }
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[355])));
          MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
        }
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
        }
        Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_24, Var_25);
        {
          Spec_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.generate_warnings_for_duplicate_warnings\'/5"));
          MR_hl_field(MR_mktag(1), Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_21, 3) = ((MR_Box) (Context_1));
          MR_hl_field(MR_mktag(1), Spec_21, 4) = ((MR_Box) (Pieces_20));
        }
        *HeadVar__4_4 = TailNonDupWarnings_14;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailDupSpecs_15));
        }
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Warning_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailNonDupWarnings_14));
        }
        *HeadVar__5_5 = TailDupSpecs_15;
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_warnings_6_p_0(
  MR_Word VarSet_7,
  MR_Word Term_8,
  MR_String ScopeFunctor_9,
  MR_Word ContextPieces_10,
  MR_Integer WarningNum_11,
  MR_Word * MaybeWarnings_12)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_Integer) 0);
    MR_Word Var_29;
    MR_String Var_30;
    MR_Word Var_31;

    if (succeeded)
    {
      Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 0))));
      Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 1))));
      succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_30 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 0))));
          succeeded = (strcmp(Var_30, (MR_String) "[]") == 0);
        }
      }
    }
    if (succeeded)
      *MaybeWarnings_12 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[366]));
    else
    {
      MR_Word HeadTerm_14;
      MR_Word TailTerm_15;
      MR_Word Var_34;
      MR_String Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;

      succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 0))));
        Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_35 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 0))));
          succeeded = (strcmp(Var_35, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            succeeded = (Var_36 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_36, (MR_Integer) 0))));
              Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_36, (MR_Integer) 1))));
              succeeded = (Var_37 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TailTerm_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_37, (MR_Integer) 0))));
                Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_37, (MR_Integer) 1))));
                succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word HeadWarnings_17;
        MR_Word HeadWarningSpecs_18;
        MR_Word MaybeTailWarnings_19;
        MR_Integer Var_39;

        parse_tree__parse_goal__parse_warning_7_p_0(VarSet_7, HeadTerm_14, ScopeFunctor_9, ContextPieces_10, WarningNum_11, &HeadWarnings_17, &HeadWarningSpecs_18);
        Var_39 = (MR_Integer) ((MR_Unsigned) WarningNum_11 + (MR_Unsigned) 1);
        parse_tree__parse_goal__parse_warnings_6_p_0(VarSet_7, TailTerm_15, ScopeFunctor_9, ContextPieces_10, Var_39, &MaybeTailWarnings_19);
        if (((MR_tag((MR_Word) MaybeTailWarnings_19)) == (MR_Integer) 0))
        {
          MR_Word TailSpecs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeTailWarnings_19, (MR_Integer) 0))));
          MR_Word Specs_25;

          Specs_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), HeadWarningSpecs_18, TailSpecs_24);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeWarnings_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_25));
          }
        }
        else
        {
          MR_Word TailWarnings_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTailWarnings_19, (MR_Integer) 0))));
          MR_Word TailWarningSpecs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTailWarnings_19, (MR_Integer) 1))));
          MR_Word Warnings_22;
          MR_Word WarningSpecs_23;

          Warnings_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), HeadWarnings_17, TailWarnings_20);
          WarningSpecs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), HeadWarningSpecs_18, TailWarningSpecs_21);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MaybeWarnings_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Warnings_22));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WarningSpecs_23));
          }
        }
      }
      else
      {
        MR_String TermStr_26;
        MR_Word Pieces_27;
        MR_Word Spec_28;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_44;
        MR_Word Var_47;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_55;
        MR_Word Var_58;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_72;
        MR_Word Var_73;

        TermStr_26 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_8);
        Var_41 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_10);
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (ScopeFunctor_9));
        }
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (TermStr_26));
        }
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[155])));
        }
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[369])));
          MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
        }
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[368])));
          MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[367])));
          MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
        }
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
          MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_52));
        }
        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[362])));
          MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[355])));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
        }
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_44));
        }
        Pieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_41, Var_42);
        Var_72 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_8);
        {
          Spec_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_warnings\'/6"));
          MR_hl_field(MR_mktag(1), Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_28, 3) = ((MR_Box) (Var_72));
          MR_hl_field(MR_mktag(1), Spec_28, 4) = ((MR_Box) (Pieces_27));
        }
        {
          Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Spec_28));
          MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeWarnings_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_73));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_warning_7_p_0(
  MR_Word VarSet_8,
  MR_Word Term_9,
  MR_String ScopeFunctor_10,
  MR_Word ContextPieces_11,
  MR_Integer WarningNum_12,
  MR_Word * Warnings_13,
  MR_Word * WarningSpecs_14)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    MR_Word Warning_17;
    MR_String WarningFunctor_15;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
      Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
      succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
        if (succeeded)
        {
          WarningFunctor_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
          // binary string simple lookup switch
          ;
          lo_0 = (MR_Integer) 0;
          hi_1 = (MR_Integer) 4;
          do
          {
            mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
            result_3 = MR_strcmp(WarningFunctor_15, ((&parse_tree__parse_goal_vector_common_4[0 + mid_2]))->parse_tree__parse_goal__vector_common_type_4_0__vct_4_f_0);
            if ((result_3 == (MR_Integer) 0))
            {
              Warning_17 = ((&parse_tree__parse_goal_vector_common_4[0 + mid_2]))->parse_tree__parse_goal__vector_common_type_4_0__vct_4_f_1;
              succeeded = MR_TRUE;
              // jump out of search loop
              ;
              goto label_0;
            }
            else
            if ((result_3 < (MR_Integer) 0))
              hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
            else
              lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
          }
          while ((lo_0 <= hi_1));
          succeeded = MR_FALSE;
        label_0:;
        }
      }
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Warnings_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Warning_17));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *WarningSpecs_14 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_String TermStr_18;
      MR_Word Pieces_19;
      MR_Word Spec_20;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_27;
      MR_Word Var_30;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_38;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_63;

      TermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
      Var_24 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_11);
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (WarningNum_12));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (ScopeFunctor_10));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (TermStr_18));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[160])));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[365])));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[364])));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[363])));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[362])));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[361])));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
      }
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
      }
      Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_24, Var_25);
      Var_63 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
      {
        Spec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_warning\'/7"));
        MR_hl_field(MR_mktag(1), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_20, 3) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(1), Spec_20, 4) = ((MR_Box) (Pieces_19));
      }
      *Warnings_13 = (MR_Word) ((MR_Unsigned) 0U);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *WarningSpecs_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_20));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(
  MR_Word PSDCVars_6,
  MR_Word Goal_7,
  MR_Word ContextPieces_8,
  MR_String ConstructName_9,
  MR_Word * MaybePODVar_10)
{
  {
    MR_bool succeeded;
    MR_Word PlainVars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PSDCVars_6, (MR_Integer) 0))));
    MR_Word StateVars_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PSDCVars_6, (MR_Integer) 1))));
    MR_Word DotVars_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PSDCVars_6, (MR_Integer) 2))));
    MR_Word ColonVars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PSDCVars_6, (MR_Integer) 3))));
    MR_Word Context_15;
    MR_Word MaybeStateVars_16;
    MR_Word MaybeColonVars_21;
    MR_Word MaybeMaybePlainVar_26;
    MR_Word MaybeMaybeDotVar_33;
    MR_Word MaybePlainVar_42;
    MR_Word MaybeDotVar_43;

    Context_15 = parse_tree__prog_item__get_goal_context_1_f_0(Goal_7);
    if ((StateVars_12 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeStateVars_16 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_3[0]));
    else
    {
      MR_Word StatePieces_19;
      MR_Word StateSpec_20;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_66;

      Var_51 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (ConstructName_9));
      }
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[145])));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[360])));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
      }
      StatePieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_51, Var_52);
      {
        StateSpec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), StateSpec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_one_plain_or_dot_var\'/5"));
        MR_hl_field(MR_mktag(1), StateSpec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), StateSpec_20, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), StateSpec_20, 3) = ((MR_Box) (Context_15));
        MR_hl_field(MR_mktag(1), StateSpec_20, 4) = ((MR_Box) (StatePieces_19));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (StateSpec_20));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeStateVars_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MaybeStateVars_16, 0) = ((MR_Box) (Var_66));
      }
    }
    if ((ColonVars_14 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeColonVars_21 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_3[0]));
    else
    {
      MR_Word ColonPieces_24;
      MR_Word ColonSpec_25;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_87;

      Var_69 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (ConstructName_9));
      }
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[149])));
      }
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[360])));
        MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_73));
      }
      ColonPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_69, Var_70);
      {
        ColonSpec_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ColonSpec_25, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_one_plain_or_dot_var\'/5"));
        MR_hl_field(MR_mktag(1), ColonSpec_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), ColonSpec_25, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), ColonSpec_25, 3) = ((MR_Box) (Context_15));
        MR_hl_field(MR_mktag(1), ColonSpec_25, 4) = ((MR_Box) (ColonPieces_24));
      }
      {
        Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (ColonSpec_25));
        MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeColonVars_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MaybeColonVars_21, 0) = ((MR_Box) (Var_87));
      }
    }
    if ((PlainVars_11 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeMaybePlainVar_26 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_3[1]));
    else
    {
      MR_Word Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PlainVars_11, (MR_Integer) 1))));
      MR_Word Var_186 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PlainVars_11, (MR_Integer) 0))));

      if ((Var_185 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_109;

        {
          Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Var_186));
        }
        {
          MaybeMaybePlainVar_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeMaybePlainVar_26, 0) = ((MR_Box) (Var_109));
        }
      }
      else
      {
        MR_Word PlainPieces_31;
        MR_Word PlainSpec_32;
        MR_Word Var_91;
        MR_Word Var_92;
        MR_Word Var_95;
        MR_Word Var_96;
        MR_Word Var_106;

        Var_91 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
        {
          Var_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_96, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_96, 1) = ((MR_Box) (ConstructName_9));
        }
        {
          Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
          MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[151])));
        }
        {
          Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[360])));
          MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_95));
        }
        PlainPieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_91, Var_92);
        {
          PlainSpec_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), PlainSpec_32, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_one_plain_or_dot_var\'/5"));
          MR_hl_field(MR_mktag(1), PlainSpec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), PlainSpec_32, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), PlainSpec_32, 3) = ((MR_Box) (Context_15));
          MR_hl_field(MR_mktag(1), PlainSpec_32, 4) = ((MR_Box) (PlainPieces_31));
        }
        {
          Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (PlainSpec_32));
          MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeMaybePlainVar_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeMaybePlainVar_26, 0) = ((MR_Box) (Var_106));
        }
      }
    }
    if ((DotVars_13 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeMaybeDotVar_33 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_3[1]));
    else
    {
      MR_Word Var_187 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DotVars_13, (MR_Integer) 1))));
      MR_Word Var_188 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DotVars_13, (MR_Integer) 0))));

      if ((Var_187 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_130;

        {
          Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (Var_188));
        }
        {
          MaybeMaybeDotVar_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeMaybeDotVar_33, 0) = ((MR_Box) (Var_130));
        }
      }
      else
      {
        MR_Word DotPieces_38;
        MR_Word DotSpec_39;
        MR_Word Var_112;
        MR_Word Var_113;
        MR_Word Var_116;
        MR_Word Var_117;
        MR_Word Var_127;

        Var_112 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
        {
          Var_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_117, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_117, 1) = ((MR_Box) (ConstructName_9));
        }
        {
          Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (Var_117));
          MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[151])));
        }
        {
          Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[360])));
          MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_116));
        }
        DotPieces_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_112, Var_113);
        {
          DotSpec_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DotSpec_39, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_one_plain_or_dot_var\'/5"));
          MR_hl_field(MR_mktag(1), DotSpec_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), DotSpec_39, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), DotSpec_39, 3) = ((MR_Box) (Context_15));
          MR_hl_field(MR_mktag(1), DotSpec_39, 4) = ((MR_Box) (DotPieces_38));
        }
        {
          Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (DotSpec_39));
          MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeMaybeDotVar_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeMaybeDotVar_33, 0) = ((MR_Box) (Var_127));
        }
      }
    }
    succeeded = ((MR_tag((MR_Word) MaybeStateVars_16)) == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) MaybeColonVars_21)) == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) MaybeMaybePlainVar_26)) == (MR_Integer) 1);
        if (succeeded)
        {
          MaybePlainVar_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybePlainVar_26, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeMaybeDotVar_33)) == (MR_Integer) 1);
          if (succeeded)
            MaybeDotVar_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeDotVar_33, (MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
      if ((MaybePlainVar_42 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((MaybeDotVar_43 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Pieces_44;
          MR_Word Spec_45;
          MR_Word Var_151;
          MR_Word Var_152;
          MR_Word Var_155;
          MR_Word Var_156;
          MR_Word Var_166;

          Var_151 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
          {
            Var_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_156, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_156, 1) = ((MR_Box) (ConstructName_9));
          }
          {
            Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_155, 0) = ((MR_Box) (Var_156));
            MR_hl_field(MR_mktag(1), Var_155, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[153])));
          }
          {
            Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[360])));
            MR_hl_field(MR_mktag(1), Var_152, 1) = ((MR_Box) (Var_155));
          }
          Pieces_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_151, Var_152);
          {
            Spec_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_45, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_one_plain_or_dot_var\'/5"));
            MR_hl_field(MR_mktag(1), Spec_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_45, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_45, 3) = ((MR_Box) (Context_15));
            MR_hl_field(MR_mktag(1), Spec_45, 4) = ((MR_Box) (Pieces_44));
          }
          {
            Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (Spec_45));
            MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybePODVar_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_166));
          }
        }
        else
        {
          MR_Word DotVar_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDotVar_43, (MR_Integer) 0))));
          MR_Word Var_149;

          {
            Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (DotVar_47));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybePODVar_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_149));
          }
        }
      else
      {
        MR_Word Var_189 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePlainVar_42, (MR_Integer) 0))));

        if ((MaybeDotVar_43 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_150;

          {
            Var_150 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_150, 0) = ((MR_Box) (Var_189));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybePODVar_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_150));
          }
        }
        else
        {
          MR_Word Var_132;
          MR_Word Var_133;
          MR_Word Var_136;
          MR_Word Var_137;
          MR_Word Var_147;
          MR_Word Pieces_174;
          MR_Word Spec_175;

          Var_132 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
          {
            Var_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_137, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_137, 1) = ((MR_Box) (ConstructName_9));
          }
          {
            Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (Var_137));
            MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[151])));
          }
          {
            Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[360])));
            MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (Var_136));
          }
          Pieces_174 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_132, Var_133);
          {
            Spec_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_175, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_one_plain_or_dot_var\'/5"));
            MR_hl_field(MR_mktag(1), Spec_175, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_175, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_175, 3) = ((MR_Box) (Context_15));
            MR_hl_field(MR_mktag(1), Spec_175, 4) = ((MR_Box) (Pieces_174));
          }
          {
            Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (Spec_175));
            MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybePODVar_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_147));
          }
        }
      }
    else
    {
      MR_Word Specs_50;
      MR_Word Var_168;
      MR_Word Var_169;
      MR_Word Var_170;
      MR_Word Var_171;
      MR_Word Var_172;
      MR_Word Var_173;

      Var_168 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), MaybeStateVars_16);
      Var_170 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), MaybeColonVars_21);
      Var_172 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[10]), MaybeMaybePlainVar_26);
      Var_173 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[10]), MaybeMaybeDotVar_33);
      Var_171 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_172, Var_173);
      Var_169 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_170, Var_171);
      Specs_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_168, Var_169);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybePODVar_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_50));
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_goal__should_have_one_call_prefix_3_f_0(
  MR_Word ContextPieces_5,
  MR_Word Context_6,
  MR_String Functor_7)
{
  {
    MR_Word Spec_8;
    MR_Word Pieces_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_13;
    MR_Word Var_16;
    MR_Word Var_19;
    MR_Word Var_20;

    Var_10 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_5);
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (Functor_7));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[143])));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[356])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[355])));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_16));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_13));
    }
    Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_10, Var_11);
    {
      Spec_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_8, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_goal.should_have_one_call_prefix\'/3"));
      MR_hl_field(MR_mktag(1), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_8, 3) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(1), Spec_8, 4) = ((MR_Box) (Pieces_9));
    }
    return Spec_8;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_goal__should_have_no_args_3_f_0(
  MR_Word ContextPieces_5,
  MR_Word Context_6,
  MR_String Functor_7)
{
  {
    MR_Word Spec_8;
    MR_Word Pieces_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_13;
    MR_Word Var_16;
    MR_Word Var_17;

    Var_10 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_5);
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (Functor_7));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[141])));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[355])));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_16));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_13));
    }
    Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_10, Var_11);
    {
      Spec_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_8, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_goal.should_have_no_args\'/3"));
      MR_hl_field(MR_mktag(1), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_8, 3) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(1), Spec_8, 4) = ((MR_Box) (Pieces_9));
    }
    return Spec_8;
  }
}

void MR_CALL 
parse_tree__parse_goal__apply_purity_marker_to_maybe_goal_4_p_0(
  MR_Word GoalTerm_5,
  MR_Word Purity_6,
  MR_Word MaybeGoal0_7,
  MR_Word * MaybeGoal_8)
{
  if (((MR_tag((MR_Word) MaybeGoal0_7)) == (MR_Integer) 0))
    *MaybeGoal_8 = MaybeGoal0_7;
  else
  {
    MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal0_7, (MR_Integer) 0))));
    MR_Word WarningSpecs0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal0_7, (MR_Integer) 1))));
    MR_Word Goal_15;

    switch (MR_tag((MR_Word) Goal0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ProgTerm1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 1))));
          MR_Word ProgTerm2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 2))));
          MR_Word Context_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 0))));
          MR_Word Purity0_108 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 3))) & (MR_Integer) 3);

          switch (Purity0_108) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              Goal_15 = parse_tree__parse_goal__bad_purity_goal_3_f_0(GoalTerm_5, Context_107, Purity_6);
              break;
            case (MR_Integer) 0:
              {
                Goal_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Goal_15, 0) = ((MR_Box) (Context_107));
                MR_hl_field(MR_mktag(0), Goal_15, 1) = ((MR_Box) (ProgTerm1_16));
                MR_hl_field(MR_mktag(0), Goal_15, 2) = ((MR_Box) (ProgTerm2_17));
                MR_hl_field(MR_mktag(0), Goal_15, 3) = (MR_Box) ((MR_Unsigned) (Purity_6));
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal0_9, (MR_Integer) 0))));
          MR_Word Pred_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal0_9, (MR_Integer) 1))));
          MR_Word Args_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal0_9, (MR_Integer) 2))));
          MR_Word Purity0_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Goal0_9, (MR_Integer) 3))) & (MR_Integer) 3);

          switch (Purity0_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              Goal_15 = parse_tree__parse_goal__bad_purity_goal_3_f_0(GoalTerm_5, Context_11, Purity_6);
              break;
            case (MR_Integer) 0:
              {
                Goal_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Goal_15, 0) = ((MR_Box) (Context_11));
                MR_hl_field(MR_mktag(1), Goal_15, 1) = ((MR_Box) (Pred_12));
                MR_hl_field(MR_mktag(1), Goal_15, 2) = ((MR_Box) (Args_13));
                MR_hl_field(MR_mktag(1), Goal_15, 3) = (MR_Box) ((MR_Unsigned) (Purity_6));
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_106;

          Var_106 = parse_tree__prog_item__get_goal_context_1_f_0(Goal0_9);
          Goal_15 = parse_tree__parse_goal__bad_purity_goal_3_f_0(GoalTerm_5, Var_106, Purity_6);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_106;

          Var_106 = parse_tree__prog_item__get_goal_context_1_f_0(Goal0_9);
          Goal_15 = parse_tree__parse_goal__bad_purity_goal_3_f_0(GoalTerm_5, Var_106, Purity_6);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MaybeGoal_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WarningSpecs0_10));
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_goal__bad_purity_goal_3_f_0(
  MR_Word GoalTerm0_5,
  MR_Word Context_6,
  MR_Word Purity_7)
{
  {
    MR_Word Goal_8;
    MR_Word GoalTerm_9;
    MR_String PurityString_10;
    MR_Word Var_11;
    MR_Word Var_12;

    mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalTerm0_5, &GoalTerm_9);
    parse_tree__prog_out__purity_name_2_p_0(Purity_7, &PurityString_10);
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (PurityString_10));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (GoalTerm_9));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Goal_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Goal_8, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(1), Goal_8, 1) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(1), Goal_8, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(1), Goal_8, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    return Goal_8;
  }
}

MR_Word MR_CALL 
parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(
  MR_Word ContextPieces_6,
  MR_Word Context_7,
  MR_String X_8,
  MR_String Functor_9)
{
  {
    MR_Word Spec_10;
    MR_Word Pieces_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_15;
    MR_Word Var_18;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_27;

    Var_12 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_6);
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (Functor_9));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (X_8));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[30])));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[359])));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[358])));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[355])));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_18));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_15));
    }
    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_12, Var_13);
    {
      Spec_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_10, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_goal.should_have_one_x_one_goal_prefix\'/4"));
      MR_hl_field(MR_mktag(1), Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_10, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_10, 3) = ((MR_Box) (Context_7));
      MR_hl_field(MR_mktag(1), Spec_10, 4) = ((MR_Box) (Pieces_11));
    }
    return Spec_10;
  }
}

MR_Word MR_CALL 
parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(
  MR_Word ContextPieces_5,
  MR_Word Context_6,
  MR_String Functor_7)
{
  {
    MR_Word Spec_8;
    MR_Word Pieces_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_13;
    MR_Word Var_16;
    MR_Word Var_19;
    MR_Word Var_20;

    Var_10 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_5);
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (Functor_7));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[28])));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[357])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[355])));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_16));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_13));
    }
    Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_10, Var_11);
    {
      Spec_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_8, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_goal.should_have_two_goals_infix\'/3"));
      MR_hl_field(MR_mktag(1), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_8, 3) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(1), Spec_8, 4) = ((MR_Box) (Pieces_9));
    }
    return Spec_8;
  }
}

MR_Word MR_CALL 
parse_tree__parse_goal__should_have_two_terms_infix_3_f_0(
  MR_Word ContextPieces_5,
  MR_Word Context_6,
  MR_String Functor_7)
{
  {
    MR_Word Spec_8;
    MR_Word Pieces_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_13;
    MR_Word Var_16;
    MR_Word Var_19;
    MR_Word Var_20;

    Var_10 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_5);
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (Functor_7));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[26])));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[357])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[355])));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_16));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_13));
    }
    Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_10, Var_11);
    {
      Spec_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_8, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_goal.should_have_two_terms_infix\'/3"));
      MR_hl_field(MR_mktag(1), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_8, 3) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(1), Spec_8, 4) = ((MR_Box) (Pieces_9));
    }
    return Spec_8;
  }
}

MR_Word MR_CALL 
parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(
  MR_Word ContextPieces_5,
  MR_Word Context_6,
  MR_String Functor_7)
{
  {
    MR_Word Spec_8;
    MR_Word Pieces_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_13;
    MR_Word Var_16;
    MR_Word Var_19;
    MR_Word Var_20;

    Var_10 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_5);
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (Functor_7));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[24])));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[356])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[355])));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_16));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_13));
    }
    Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_10, Var_11);
    {
      Spec_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_8, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_goal.should_have_one_goal_prefix\'/3"));
      MR_hl_field(MR_mktag(1), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_8, 3) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(1), Spec_8, 4) = ((MR_Box) (Pieces_9));
    }
    return Spec_8;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_goal____Unify____atomic_component_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_goal____Unify____atomic_component_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_goal____Compare____atomic_component_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_goal____Compare____atomic_component_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_goal____Unify____trace_component_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_goal____Unify____trace_component_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_goal____Compare____trace_component_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_goal____Compare____trace_component_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_goal____Unify____try_component_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_goal____Unify____try_component_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_goal____Compare____try_component_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_goal____Compare____try_component_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__parse_goal__init(void)
{
}

void mercury__parse_tree__parse_goal__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_goal__parse_tree__parse_goal__type_ctor_info_atomic_component_0);
	MR_register_type_ctor_info(&parse_tree__parse_goal__parse_tree__parse_goal__type_ctor_info_trace_component_0);
	MR_register_type_ctor_info(&parse_tree__parse_goal__parse_tree__parse_goal__type_ctor_info_try_component_0);
}

void mercury__parse_tree__parse_goal__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_goal__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_goal.
