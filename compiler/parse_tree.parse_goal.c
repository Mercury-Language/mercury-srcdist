/*
** Automatically generated from `parse_goal.m'
** by the Mercury compiler,
** version rotd-2020-03-20
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
parse_tree__parse_goal__IntroducedFrom__pred__parse_atomic_component__2359__1_2_p_0(
  MR_Word HeadVar__1_119,
  MR_Word * HeadVar__2_120);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__381__2_2_p_0(
  MR_Word HeadVar__1_2502,
  MR_Word * HeadVar__2_2503);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__380__2_2_p_0(
  MR_Word HeadVar__1_2496,
  MR_Word * HeadVar__2_2497);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__803__1_2_p_0(
  MR_Word HeadVar__1_1420,
  MR_Word * HeadVar__2_1421);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__802__1_2_p_0(
  MR_Word HeadVar__1_1416,
  MR_Word * HeadVar__2_1417);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__801__1_2_p_0(
  MR_Word HeadVar__1_1412,
  MR_Word * HeadVar__2_1413);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__800__1_2_p_0(
  MR_Word HeadVar__1_1406,
  MR_Word * HeadVar__2_1407);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__840__1_2_p_0(
  MR_Word HeadVar__1_1443,
  MR_Word * HeadVar__2_1444);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__839__1_2_p_0(
  MR_Word HeadVar__1_1439,
  MR_Word * HeadVar__2_1440);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__838__1_2_p_0(
  MR_Word HeadVar__1_1435,
  MR_Word * HeadVar__2_1436);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__837__1_2_p_0(
  MR_Word HeadVar__1_1429,
  MR_Word * HeadVar__2_1430);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__381__1_2_p_0(
  MR_Word HeadVar__1_1372,
  MR_Word * HeadVar__2_1373);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__380__1_2_p_0(
  MR_Word HeadVar__1_1366,
  MR_Word * HeadVar__2_1367);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__153__1_2_p_0(
  MR_Word HeadVar__1_62,
  MR_Word * HeadVar__2_63);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__152__1_2_p_0(
  MR_Word HeadVar__1_56,
  MR_Word * HeadVar__2_57);

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
  MR_Word STATE_VARIABLE_VarSet_0_136,
  MR_Word * STATE_VARIABLE_VarSet_137);

static void MR_CALL 
parse_tree__parse_goal__parse_catch_then_try_term_args_7_p_0(
  MR_Word CatchTermArgs_8,
  MR_Word MaybeCatchAnyExpr_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22);

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_101_108_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_52_93_95_48_8_p_0(
  MR_Word Term_9,
  MR_Word CatchExprs_10,
  MR_Word MaybeCatchAnyExpr_11,
  MR_Word ContextPieces_13,
  MR_Word * MaybeGoal_14,
  MR_Word STATE_VARIABLE_VarSet_0_29,
  MR_Word * STATE_VARIABLE_VarSet_30);

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_53_93_95_48_9_p_0(
  MR_Word ThenTryTerm_10,
  MR_Word MaybeElse_11,
  MR_Word CatchExprs_12,
  MR_Word MaybeCatchAnyExpr_13,
  MR_Word ContextPieces_15,
  MR_Word * MaybeGoal_16,
  MR_Word STATE_VARIABLE_VarSet_0_37,
  MR_Word * STATE_VARIABLE_VarSet_38);

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_97_116_99_104_95_97_114_114_111_119_95_116_101_114_109_95_95_91_50_93_95_48_6_p_0(
  MR_Word ArrowTerm_7,
  MR_Word ContextPieces_9,
  MR_Word * MaybeCatch_10,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23);

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_98_95_99_97_116_99_104_95_116_101_114_109_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word Term_7,
  MR_Word ContextPieces_9,
  MR_Word * MaybeCatches_10,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24);

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_97_116_99_104_95_97_110_121_95_116_101_114_109_95_95_91_50_93_95_48_6_p_0(
  MR_Word ArrowTerm_7,
  MR_Word ContextPieces_9,
  MR_Word * MaybeCatchAny_10,
  MR_Word STATE_VARIABLE_VarSet_0_24,
  MR_Word * STATE_VARIABLE_VarSet_25);

static void MR_CALL 
parse_tree__parse_goal__parse_atomic_subgoals_as_list_4_p_0(
  MR_Word Term_5,
  MR_Word * MaybeGoals_6,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20);

static void MR_CALL 
parse_tree__parse_goal__parse_atomic_subexpr_4_p_0(
  MR_Word Term_5,
  MR_Word * MaybeSubExpr_6,
  MR_Word STATE_VARIABLE_VarSet_0_16,
  MR_Word * STATE_VARIABLE_VarSet_17);

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
parse_tree__parse_goal__parse_warning_6_p_0(
  MR_Word VarSet_7,
  MR_Word Term_8,
  MR_String ScopeFunctor_9,
  MR_Word ContextPieces_10,
  MR_Integer WarningNum_11,
  MR_Word * MaybeWarning_12);

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


static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_1[378][2];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_2[20][3];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_3[10][1];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_5[2][6];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_6[1][5];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_7[2][4];


/* sealed */ struct parse_tree__parse_goal__vector_common_type_4_0_s {
  const MR_String parse_tree__parse_goal__vector_common_type_4_0__vct_4_f_0;
  const MR_Word parse_tree__parse_goal__vector_common_type_4_0__vct_4_f_1;
};

static /* final */ const struct parse_tree__parse_goal__vector_common_type_4_0_s parse_tree__parse_goal_vector_common_4[4];



static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_1[378][2] = {
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
    ((MR_Box) ((MR_String) "is not the name of a warning."))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[156]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the list of warnings to disable."))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[158]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of compile-time tests."))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[160]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which should be a boolean expression"))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[161])))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "takes exactly one argument,"))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[163])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of run-time tests."))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[166]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[167])))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[168])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be a state variable."))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[170]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which should be a state variable name."))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[172]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[173])))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the name of a mutable variable."))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be"))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[177]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[176])))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a state variable name."))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[179]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[177]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[180])))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and a state variable name."))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[182]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the name of a mutable variable"))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[184]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[183])))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which should be"))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[186]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[185])))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "takes exactly two arguments,"))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[188]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[187])))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "takes a string as argument."))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[190]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "flag"))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[192]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[191])))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: compile_time parameter"))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[194]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[193])))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "takes just one argument."))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[196]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[192]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[197])))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[194]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[198])))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "valid grade tests are"))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[200]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "invalid grade test;"))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[202]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[201])))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "grade"))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[204]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[197])))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[194]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[205])))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "as argument."))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[207]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "deep"))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[209]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[208])))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[211]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[210])))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "shallow"))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[213]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[212])))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "takes just"))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[215]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[214])))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "tracelevel"))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[217]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[216])))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[194]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[218])))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[217]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[197])))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[194]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[220])))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "tracelevel(deep)"))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[222]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 224 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[223])))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "tracelevel(shallow)"))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[225]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[224])))
  },
  /* row 227 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[226])))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "grade(\"grade name\")"))
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
    ((MR_Box) ((MR_String) "flag(\"name of --trace-flag parameter\")"))
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "have one of the following forms:"))
  },
  /* row 235 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[234]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[233])))
  },
  /* row 236 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The acceptable compile_time paramaters"))
  },
  /* row 237 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[236]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[235])))
  },
  /* row 238 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[237])))
  },
  /* row 239 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[238])))
  },
  /* row 240 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 241 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "takes an identifier as argument."))
  },
  /* row 242 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[241]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 243 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "env"))
  },
  /* row 244 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[243]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[242])))
  },
  /* row 245 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: run_time parameter"))
  },
  /* row 246 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[245]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[244])))
  },
  /* row 247 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[243]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[197])))
  },
  /* row 248 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[245]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[247])))
  },
  /* row 249 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "env(\"name of an environment variable\")"))
  },
  /* row 250 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[249]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 251 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The only acceptable run_time paramaters have the form"))
  },
  /* row 252 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[251]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[250])))
  },
  /* row 253 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[252])))
  },
  /* row 254 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[253])))
  },
  /* row 255 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate compile_time trace parameter."))
  },
  /* row 256 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[255]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 257 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate io trace parameter."))
  },
  /* row 258 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[257]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 259 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate run_time trace parameter."))
  },
  /* row 260 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[259]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 261 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be a variable."))
  },
  /* row 262 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[261]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 263 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[262])))
  },
  /* row 264 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[263])))
  },
  /* row 265 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of a"))
  },
  /* row 266 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[265]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[264])))
  },
  /* row 267 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "operator inside the scope"))
  },
  /* row 268 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[267]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[266])))
  },
  /* row 269 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[268])))
  },
  /* row 270 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the left operand of the"))
  },
  /* row 271 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[270]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[269])))
  },
  /* row 272 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be followed by an expression of the form"))
  },
  /* row 273 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[272]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[38])))
  },
  /* row 274 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[273])))
  },
  /* row 275 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[274])))
  },
  /* row 276 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[275])))
  },
  /* row 277 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "catch_pattern -> catch_goal"))
  },
  /* row 278 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[277]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[36])))
  },
  /* row 279 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and followed by an expression of the form"))
  },
  /* row 280 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[279]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[278])))
  },
  /* row 281 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[280])))
  },
  /* row 282 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "try [try_params] main_goal then else_goal"))
  },
  /* row 283 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[282]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[281])))
  },
  /* row 284 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be preceded by a try expression of the form"))
  },
  /* row 285 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[284]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[283])))
  },
  /* row 286 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[285])))
  },
  /* row 287 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[286])))
  },
  /* row 288 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[287])))
  },
  /* row 289 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[272]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[278])))
  },
  /* row 290 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[289])))
  },
  /* row 291 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[290])))
  },
  /* row 292 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[291])))
  },
  /* row 293 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[36])))
  },
  /* row 294 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is missing its"))
  },
  /* row 295 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[294]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[293])))
  },
  /* row 296 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[295])))
  },
  /* row 297 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[296])))
  },
  /* row 298 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[297])))
  },
  /* row 299 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have the form"))
  },
  /* row 300 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[299]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[129])))
  },
  /* row 301 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "goal"))
  },
  /* row 302 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[301]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[300])))
  },
  /* row 303 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "try"))
  },
  /* row 304 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[303]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[302])))
  },
  /* row 305 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 306 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[305]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[304])))
  },
  /* row 307 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate io try parameter."))
  },
  /* row 308 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[307]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 309 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Invalid atomic goal parameter."))
  },
  /* row 310 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[309]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 311 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Expected atomic goal parameter, found variable."))
  },
  /* row 312 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[311]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 313 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or a pair of variables."))
  },
  /* row 314 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[313]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 315 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which should be a state variable"))
  },
  /* row 316 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[315]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[314])))
  },
  /* row 317 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[316])))
  },
  /* row 318 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "found variable."))
  },
  /* row 319 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[318]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 320 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected atomic goal parameter,"))
  },
  /* row 321 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[320]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[319])))
  },
  /* row 322 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "specifier of atomic scope:"))
  },
  /* row 323 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[322]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 324 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "vars"))
  },
  /* row 325 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[324]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[323])))
  },
  /* row 326 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 327 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[326]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[325])))
  },
  /* row 328 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which should be a list of variable names."))
  },
  /* row 329 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[328]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 330 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "takes exact one argument,"))
  },
  /* row 331 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[330]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[329])))
  },
  /* row 332 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the outer and inner STM states."))
  },
  /* row 333 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[332]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 334 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a specification of both"))
  },
  /* row 335 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[334]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[333])))
  },
  /* row 336 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Atomic goal is missing"))
  },
  /* row 337 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[336]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[335])))
  },
  /* row 338 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a specification of the outer STM state."))
  },
  /* row 339 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[338]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 340 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[336]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[339])))
  },
  /* row 341 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a specification of the inner STM state."))
  },
  /* row 342 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[341]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 343 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[336]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[342])))
  },
  /* row 344 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate inner atomic parameter."))
  },
  /* row 345 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[344]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 346 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate outer atomic parameter."))
  },
  /* row 347 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[346]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 348 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate atomic vars parameter."))
  },
  /* row 349 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[348]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 350 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: atomic scope must have a goal."))
  },
  /* row 351 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[350]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 352 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 353 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the prefix operator"))
  },
  /* row 354 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the infix operator"))
  },
  /* row 355 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the binary prefix operator"))
  },
  /* row 356 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should precede"))
  },
  /* row 357 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the first argument of"))
  },
  /* row 358 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row 359 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument of the"))
  },
  /* row 360 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "keyword should be"))
  },
  /* row 361 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the name of a warning to disable."))
  },
  /* row 362 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The term"))
  },
  /* row 363 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "followed by a list of warnings to disable."))
  },
  /* row 364 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the warning"))
  },
  /* row 365 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is duplicated"))
  },
  /* row 366 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the argument of"))
  },
  /* row 367 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: invalid try goal parameter"))
  },
  /* row 368 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 369 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "try"))
  },
  /* row 370 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "operator"))
  },
  /* row 371 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be followed by a list of try parameters;"))
  },
  /* row 372 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the second argument of"))
  },
  /* row 373 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: invalid trace goal parameter"))
  },
  /* row 374 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 375 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a"))
  },
  /* row 376 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: invalid compile_time parameter"))
  },
  /* row 377 */
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

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_3[10][1] = {
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
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "call"))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_1[374]))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "else"))
  },
  /* row 9 */
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


static /* final */ const struct parse_tree__parse_goal__vector_common_type_4_0_s parse_tree__parse_goal_vector_common_4[4] = {
  /* row 0 */
  {
    (MR_String) "non_tail_recursive_calls",
    (MR_Integer) 2
  },
  /* row 1 */
  {
    (MR_String) "singleton_vars",
    (MR_Integer) 0
  },
  /* row 2 */
  {
    (MR_String) "suspected_occurs_check_failure",
    (MR_Integer) 1
  },
  /* row 3 */
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
parse_tree__parse_goal__IntroducedFrom__pred__parse_atomic_component__2359__1_2_p_0(
  MR_Word HeadVar__1_119,
  MR_Word * HeadVar__2_120)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_119, HeadVar__2_120);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__381__2_2_p_0(
  MR_Word HeadVar__1_2502,
  MR_Word * HeadVar__2_2503)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_2502, HeadVar__2_2503);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__380__2_2_p_0(
  MR_Word HeadVar__1_2496,
  MR_Word * HeadVar__2_2497)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_2496, HeadVar__2_2497);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__803__1_2_p_0(
  MR_Word HeadVar__1_1420,
  MR_Word * HeadVar__2_1421)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1420, HeadVar__2_1421);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__802__1_2_p_0(
  MR_Word HeadVar__1_1416,
  MR_Word * HeadVar__2_1417)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1416, HeadVar__2_1417);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__801__1_2_p_0(
  MR_Word HeadVar__1_1412,
  MR_Word * HeadVar__2_1413)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1412, HeadVar__2_1413);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__800__1_2_p_0(
  MR_Word HeadVar__1_1406,
  MR_Word * HeadVar__2_1407)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1406, HeadVar__2_1407);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__840__1_2_p_0(
  MR_Word HeadVar__1_1443,
  MR_Word * HeadVar__2_1444)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1443, HeadVar__2_1444);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__839__1_2_p_0(
  MR_Word HeadVar__1_1439,
  MR_Word * HeadVar__2_1440)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1439, HeadVar__2_1440);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__838__1_2_p_0(
  MR_Word HeadVar__1_1435,
  MR_Word * HeadVar__2_1436)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1435, HeadVar__2_1436);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__837__1_2_p_0(
  MR_Word HeadVar__1_1429,
  MR_Word * HeadVar__2_1430)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1429, HeadVar__2_1430);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__381__1_2_p_0(
  MR_Word HeadVar__1_1372,
  MR_Word * HeadVar__2_1373)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1372, HeadVar__2_1373);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__380__1_2_p_0(
  MR_Word HeadVar__1_1366,
  MR_Word * HeadVar__2_1367)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1366, HeadVar__2_1367);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__153__1_2_p_0(
  MR_Word HeadVar__1_62,
  MR_Word * HeadVar__2_63)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_62, HeadVar__2_63);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__152__1_2_p_0(
  MR_Word HeadVar__1_56,
  MR_Word * HeadVar__2_57)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_56, HeadVar__2_57);
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
                TypeInfo_110_110 = (MR_Word) (&parse_tree__parse_goal_scalar_common_1[240]);
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
              MR_hl_field(MR_mktag(1), Spec_19, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[246])));
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
            MR_hl_field(MR_mktag(1), Spec_98, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[248])));
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
          MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[254])));
        }
        {
          Pieces_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_99, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[377])));
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
        MR_hl_field(MR_mktag(1), Pieces_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[377])));
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
              MR_hl_field(MR_mktag(1), Spec_16, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[195])));
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
            MR_hl_field(MR_mktag(1), Spec_235, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[199])));
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
              Pieces_237 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[203])), Var_71);
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
              MR_hl_field(MR_mktag(1), Spec_243, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[206])));
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
                  MR_hl_field(MR_mktag(1), Spec_250, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[219])));
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
                MR_hl_field(MR_mktag(1), Spec_255, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[221])));
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
              MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[239])));
            }
            {
              Pieces_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_260, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[376])));
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
        MR_hl_field(MR_mktag(1), Var_192, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[239])));
      }
      {
        Pieces_270 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_270, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[376])));
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
    MR_Word conv11_HeadVar__2_2503;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__381__2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv11_HeadVar__2_2503);
    *wrapper_arg_2 = ((MR_Box) (conv11_HeadVar__2_2503));
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
    MR_Word conv10_HeadVar__2_2497;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__380__2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv10_HeadVar__2_2497);
    *wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__2_2497));
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
    MR_Word conv9_HeadVar__2_1421;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__803__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv9_HeadVar__2_1421);
    *wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__2_1421));
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
    MR_Word conv8_HeadVar__2_1417;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__802__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv8_HeadVar__2_1417);
    *wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_1417));
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
    MR_Word conv7_HeadVar__2_1413;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__801__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv7_HeadVar__2_1413);
    *wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_1413));
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
    MR_Word conv6_HeadVar__2_1407;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__800__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv6_HeadVar__2_1407);
    *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_1407));
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
    MR_Word conv5_HeadVar__2_1444;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__840__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__2_1444);
    *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_1444));
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
    MR_Word conv4_HeadVar__2_1440;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__839__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__2_1440);
    *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_1440));
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
    MR_Word conv3_HeadVar__2_1436;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__838__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_1436);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_1436));
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
    MR_Word conv2_HeadVar__2_1430;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__837__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_1430);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_1430));
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
    MR_Word conv1_HeadVar__2_1373;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__381__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_1373);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_1373));
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
    MR_Word conv0_HeadVar__2_1367;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__380__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_1367);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_1367));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_goal__parse_non_call_goal_7_p_0(
  MR_String Functor_8,
  MR_Word Args_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_136,
  MR_Word * STATE_VARIABLE_VarSet_137)
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
              MR_Word SubGoalTermA_825;
              MR_Word SubGoalTermB_826;
              MR_Word Var_626;
              MR_Word Var_627;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTermA_825 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_626 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_626 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTermB_826 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_626, (MR_Integer) 0))));
                  Var_627 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_626, (MR_Integer) 1))));
                  succeeded = (Var_627 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_VarSet_628_628;
                MR_Word MaybeSubGoalA_818;
                MR_Word MaybeSubGoalB_819;
                MR_Word SubGoalA_815;
                MR_Word SubGoalB_816;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermA_825, ContextPieces_11, &MaybeSubGoalA_818, STATE_VARIABLE_VarSet_0_136, &STATE_VARIABLE_VarSet_628_628);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermB_826, ContextPieces_11, &MaybeSubGoalB_819, STATE_VARIABLE_VarSet_628_628, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybeSubGoalA_818)) == (MR_Integer) 1);
                if (succeeded)
                {
                  SubGoalA_815 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_818, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoalB_819)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoalB_816 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_819, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word Var_630;

                  {
                    Var_630 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_630, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_630, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Var_630, 2) = ((MR_Box) (SubGoalA_815));
                    MR_hl_field(MR_mktag(3), Var_630, 3) = ((MR_Box) (SubGoalB_816));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_630));
                  }
                }
                else
                {
                  MR_Word Var_631;
                  MR_Word Var_632;
                  MR_Word Specs_813;

                  Var_631 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalA_818);
                  Var_632 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalB_819);
                  Specs_813 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_631, Var_632);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_813));
                  }
                }
              }
              else
              {
                MR_Word Var_633;
                MR_Word Spec_822;

                Spec_822 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_633 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_633, 0) = ((MR_Box) (Spec_822));
                  MR_hl_field(MR_mktag(1), Var_633, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_633));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalTermA_51;
              MR_Word SubGoalTermB_52;
              MR_Word Var_635;
              MR_Word Var_636;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTermA_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_635 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_635 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTermB_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_635, (MR_Integer) 0))));
                  Var_636 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_635, (MR_Integer) 1))));
                  succeeded = (Var_636 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoalA_53;
                MR_Word MaybeSubGoalB_54;
                MR_Word STATE_VARIABLE_VarSet_637_637;
                MR_Word SubGoalA_55;
                MR_Word SubGoalB_56;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermA_51, ContextPieces_11, &MaybeSubGoalA_53, STATE_VARIABLE_VarSet_0_136, &STATE_VARIABLE_VarSet_637_637);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermB_52, ContextPieces_11, &MaybeSubGoalB_54, STATE_VARIABLE_VarSet_637_637, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybeSubGoalA_53)) == (MR_Integer) 1);
                if (succeeded)
                {
                  SubGoalA_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_53, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoalB_54)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoalB_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_54, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word Var_639;

                  {
                    Var_639 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_639, 0) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(2), Var_639, 1) = ((MR_Box) (SubGoalA_55));
                    MR_hl_field(MR_mktag(2), Var_639, 2) = ((MR_Box) (SubGoalB_56));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_639));
                  }
                }
                else
                {
                  MR_Word Var_640;
                  MR_Word Var_641;
                  MR_Word Specs_805;

                  Var_640 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalA_53);
                  Var_641 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalB_54);
                  Specs_805 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_640, Var_641);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_805));
                  }
                }
              }
              else
              {
                MR_Word Var_642;
                MR_Word Spec_808;

                Spec_808 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_642 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_642, 0) = ((MR_Box) (Spec_808));
                  MR_hl_field(MR_mktag(1), Var_642, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_642));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalTermA_872;
              MR_Word SubGoalTermB_873;
              MR_Word Var_605;
              MR_Word Var_606;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTermA_872 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_605 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_605 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTermB_873 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_605, (MR_Integer) 0))));
                  Var_606 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_605, (MR_Integer) 1))));
                  succeeded = (Var_606 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word CondGoalTerm_57;
                MR_Word ThenGoalTerm_58;
                MR_Word Var_607;
                MR_String Var_608;
                MR_Word Var_609;
                MR_Word Var_610;
                MR_Word Var_611;

                succeeded = ((MR_tag((MR_Word) SubGoalTermA_872)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_607 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoalTermA_872, (MR_Integer) 0))));
                  Var_609 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoalTermA_872, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_607)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_608 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_607, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_608, (MR_String) "->") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_609 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        CondGoalTerm_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_609, (MR_Integer) 0))));
                        Var_610 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_609, (MR_Integer) 1))));
                        succeeded = (Var_610 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ThenGoalTerm_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_610, (MR_Integer) 0))));
                          Var_611 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_610, (MR_Integer) 1))));
                          succeeded = (Var_611 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word MaybeCondGoal_61;
                  MR_Word MaybeThenGoal_62;
                  MR_Word MaybeElseGoal_63;
                  MR_Word STATE_VARIABLE_VarSet_612_612;
                  MR_Word STATE_VARIABLE_VarSet_613_613;
                  MR_Word CondGoal_64;
                  MR_Word ThenGoal_65;
                  MR_Word ElseGoal_66;
                  MR_Word Vars_843;
                  MR_Word StateVars_844;

                  parse_tree__parse_goal__parse_some_vars_goal_5_p_0(CondGoalTerm_57, ContextPieces_11, &MaybeCondGoal_61, STATE_VARIABLE_VarSet_0_136, &STATE_VARIABLE_VarSet_612_612);
                  parse_tree__parse_goal__parse_goal_5_p_0(ThenGoalTerm_58, ContextPieces_11, &MaybeThenGoal_62, STATE_VARIABLE_VarSet_612_612, &STATE_VARIABLE_VarSet_613_613);
                  parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermB_873, ContextPieces_11, &MaybeElseGoal_63, STATE_VARIABLE_VarSet_613_613, STATE_VARIABLE_VarSet_137);
                  succeeded = ((MR_tag((MR_Word) MaybeCondGoal_61)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Vars_843 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_61, (MR_Integer) 0))));
                    StateVars_844 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_61, (MR_Integer) 1))));
                    CondGoal_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_61, (MR_Integer) 2))));
                    succeeded = ((MR_tag((MR_Word) MaybeThenGoal_62)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      ThenGoal_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThenGoal_62, (MR_Integer) 0))));
                      succeeded = ((MR_tag((MR_Word) MaybeElseGoal_63)) == (MR_Integer) 1);
                      if (succeeded)
                        ElseGoal_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElseGoal_63, (MR_Integer) 0))));
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word Goal_839;

                    {
                      Goal_839 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_839, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), Goal_839, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_839, 2) = ((MR_Box) (Vars_843));
                      MR_hl_field(MR_mktag(3), Goal_839, 3) = ((MR_Box) (StateVars_844));
                      MR_hl_field(MR_mktag(3), Goal_839, 4) = ((MR_Box) (CondGoal_64));
                      MR_hl_field(MR_mktag(3), Goal_839, 5) = ((MR_Box) (ThenGoal_65));
                      MR_hl_field(MR_mktag(3), Goal_839, 6) = ((MR_Box) (ElseGoal_66));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_839));
                    }
                  }
                  else
                  {
                    MR_Word Var_615;
                    MR_Word Var_616;
                    MR_Word Var_617;
                    MR_Word Var_618;
                    MR_Word Specs_840;

                    Var_615 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeCondGoal_61);
                    Var_617 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeThenGoal_62);
                    Var_618 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeElseGoal_63);
                    Var_616 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_617, Var_618);
                    Specs_840 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_615, Var_616);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_840));
                    }
                  }
                }
                else
                {
                  MR_Word STATE_VARIABLE_VarSet_619_619;
                  MR_Word MaybeSubGoalA_854;
                  MR_Word MaybeSubGoalB_855;
                  MR_Word SubGoalA_851;
                  MR_Word SubGoalB_852;

                  parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermA_872, ContextPieces_11, &MaybeSubGoalA_854, STATE_VARIABLE_VarSet_0_136, &STATE_VARIABLE_VarSet_619_619);
                  parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermB_873, ContextPieces_11, &MaybeSubGoalB_855, STATE_VARIABLE_VarSet_619_619, STATE_VARIABLE_VarSet_137);
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoalA_854)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoalA_851 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_854, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) MaybeSubGoalB_855)) == (MR_Integer) 1);
                    if (succeeded)
                      SubGoalB_852 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_855, (MR_Integer) 0))));
                  }
                  if (succeeded)
                  {
                    MR_Word Var_621;

                    {
                      Var_621 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_621, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), Var_621, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Var_621, 2) = ((MR_Box) (SubGoalA_851));
                      MR_hl_field(MR_mktag(3), Var_621, 3) = ((MR_Box) (SubGoalB_852));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_621));
                    }
                  }
                  else
                  {
                    MR_Word Var_622;
                    MR_Word Var_623;
                    MR_Word Specs_849;

                    Var_622 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalA_854);
                    Var_623 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalB_855);
                    Specs_849 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_622, Var_623);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_849));
                    }
                  }
                }
              }
              else
              {
                MR_Word Var_624;
                MR_Word Spec_866;

                Spec_866 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_624 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_624, 0) = ((MR_Box) (Spec_866));
                  MR_hl_field(MR_mktag(1), Var_624, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_624));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word TermB_89;
              MR_Word TermA_1016;
              MR_Word Var_247;
              MR_Word Var_248;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TermA_1016 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_247 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_247 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  TermB_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_247, (MR_Integer) 0))));
                  Var_248 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_247, (MR_Integer) 1))));
                  succeeded = (Var_248 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeGoalA_90;
                MR_Word MaybeGoalB_91;
                MR_Word STATE_VARIABLE_VarSet_249_249;
                MR_Word GoalA_92;
                MR_Word GoalB_93;

                parse_tree__parse_goal__parse_goal_5_p_0(TermA_1016, ContextPieces_11, &MaybeGoalA_90, STATE_VARIABLE_VarSet_0_136, &STATE_VARIABLE_VarSet_249_249);
                parse_tree__parse_goal__parse_goal_5_p_0(TermB_89, ContextPieces_11, &MaybeGoalB_91, STATE_VARIABLE_VarSet_249_249, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybeGoalA_90)) == (MR_Integer) 1);
                if (succeeded)
                {
                  GoalA_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoalA_90, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeGoalB_91)) == (MR_Integer) 1);
                  if (succeeded)
                    GoalB_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoalB_91, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word Goal_1006;

                  if ((strcmp(Functor_8, (MR_String) "<=") == 0))
                    {
                      Goal_1006 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1006, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                      MR_hl_field(MR_mktag(3), Goal_1006, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1006, 2) = ((MR_Box) (GoalB_93));
                      MR_hl_field(MR_mktag(3), Goal_1006, 3) = ((MR_Box) (GoalB_93));
                    }
                  else
                  if ((strcmp(Functor_8, (MR_String) "=>") == 0))
                    {
                      Goal_1006 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1006, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                      MR_hl_field(MR_mktag(3), Goal_1006, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1006, 2) = ((MR_Box) (GoalA_92));
                      MR_hl_field(MR_mktag(3), Goal_1006, 3) = ((MR_Box) (GoalB_93));
                    }
                  else
                    {
                      Goal_1006 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1006, 0) = ((MR_Box) ((MR_Unsigned) 19U));
                      MR_hl_field(MR_mktag(3), Goal_1006, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1006, 2) = ((MR_Box) (GoalA_92));
                      MR_hl_field(MR_mktag(3), Goal_1006, 3) = ((MR_Box) (GoalB_93));
                    }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1006));
                  }
                }
                else
                {
                  MR_Word Var_252;
                  MR_Word Var_253;
                  MR_Word Specs_1007;

                  Var_252 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeGoalA_90);
                  Var_253 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeGoalB_91);
                  Specs_1007 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_252, Var_253);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1007));
                  }
                }
              }
              else
              {
                MR_Word Var_254;
                MR_Word Spec_1012;

                Spec_1012 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_254, 0) = ((MR_Box) (Spec_1012));
                  MR_hl_field(MR_mktag(1), Var_254, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_254));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word TermA0_134;
              MR_Word TermB0_135;
              MR_Word Var_138;
              MR_Word Var_139;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TermA0_134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_138 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  TermB0_135 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_138, (MR_Integer) 0))));
                  Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_138, (MR_Integer) 1))));
                  succeeded = (Var_139 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word Var_140;
                MR_Word TermA_1347;
                MR_Word TermB_1348;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermA0_134, &TermA_1347);
                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermB0_135, &TermB_1348);
                {
                  Var_140 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_140, 0) = ((MR_Box) (Context_10));
                  MR_hl_field(MR_mktag(0), Var_140, 1) = ((MR_Box) (TermA_1347));
                  MR_hl_field(MR_mktag(0), Var_140, 2) = ((MR_Box) (TermB_1348));
                  MR_hl_field(MR_mktag(0), Var_140, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_140));
                }
              }
              else
              {
                MR_Word Var_142;
                MR_Word Spec_1349;

                Spec_1349 = parse_tree__parse_goal__should_have_two_terms_infix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (Spec_1349));
                  MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_142));
                }
              }
              *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            // case "\+", "not"
            ;
            {
              MR_Word SubGoalTerm_772;
              MR_Word Var_680;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_772 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_680 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_680 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_769;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_772, ContextPieces_11, &MaybeSubGoal_769, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                if (((MR_tag((MR_Word) MaybeSubGoal_769)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_769;
                else
                {
                  MR_Word Var_682;
                  MR_Word SubGoal_767 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_769, (MR_Integer) 0))));

                  {
                    Var_682 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_682, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), Var_682, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Var_682, 2) = ((MR_Box) (SubGoal_767));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_682));
                  }
                }
              }
              else
              {
                MR_Word Var_683;
                MR_Word Spec_771;

                Spec_771 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_683 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_683, 0) = ((MR_Box) (Spec_771));
                  MR_hl_field(MR_mktag(1), Var_683, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_683));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word QVarsTerm_39;
              MR_Word SubGoalTerm_791;
              MR_Word Var_666;
              MR_Word Var_667;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                QVarsTerm_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_666 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_666 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_791 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_666, (MR_Integer) 0))));
                  Var_667 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_666, (MR_Integer) 1))));
                  succeeded = (Var_667 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word VarsContextPieces_40;
                MR_Word MaybeVars_41;
                MR_Word Var_668;
                MR_Word MaybeSubGoal_785;
                MR_Word GenericVarSet_789;
                MR_Word Vars0_42;
                MR_Word StateVars0_43;
                MR_Word SubGoal_782;
                MR_Word Var_670;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_136, &GenericVarSet_789);
                Var_668 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[34])));
                VarsContextPieces_40 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_11, Var_668);
                parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), QVarsTerm_39, GenericVarSet_789, VarsContextPieces_40, &MaybeVars_41);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_791, ContextPieces_11, &MaybeSubGoal_785, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybeVars_41)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_670 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_41, (MR_Integer) 0))));
                  Vars0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_670, (MR_Integer) 0))));
                  StateVars0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_670, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_785)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_782 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_785, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word Vars_44;
                  MR_Word StateVars_45;
                  MR_Word Goal1_46;
                  MR_Word Goal_780;

                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[6]), Vars0_42, &Vars_44);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[7]), StateVars0_43, &StateVars_45);
                  if ((StateVars_45 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal1_46 = SubGoal_782;
                  else
                    {
                      Goal1_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal1_46, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal1_46, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                      MR_hl_field(MR_mktag(3), Goal1_46, 2) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal1_46, 3) = ((MR_Box) (StateVars_45));
                      MR_hl_field(MR_mktag(3), Goal1_46, 4) = ((MR_Box) (SubGoal_782));
                    }
                  if ((Vars_44 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal_780 = Goal1_46;
                  else
                    {
                      Goal_780 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_780, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal_780, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
                      MR_hl_field(MR_mktag(3), Goal_780, 2) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_780, 3) = ((MR_Box) (Vars_44));
                      MR_hl_field(MR_mktag(3), Goal_780, 4) = ((MR_Box) (Goal1_46));
                    }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_780));
                  }
                }
                else
                {
                  MR_Word Var_675;
                  MR_Word Var_676;
                  MR_Word Specs_781;

                  Var_675 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[2]), MaybeVars_41);
                  Var_676 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_785);
                  Specs_781 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_675, Var_676);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_781));
                  }
                }
              }
              else
              {
                MR_Word Var_678;
                MR_Word Spec_790;

                Spec_790 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of variables", Functor_8);
                {
                  Var_678 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_678, 0) = ((MR_Box) (Spec_790));
                  MR_hl_field(MR_mktag(1), Var_678, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_678));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalTerm_1167;
              MR_Word VarsTerm_1179;
              MR_Word Var_205;
              MR_Word Var_206;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_1179 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_205 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_205 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_1167 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_205, (MR_Integer) 0))));
                  Var_206 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_205, (MR_Integer) 1))));
                  succeeded = (Var_206 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1152;
                MR_Word GenericVarSet_1156;
                MR_Word MaybeVars_1157;
                MR_Word SubGoal_1141;
                MR_Word Vars0_1144;
                MR_Word StateVars0_1145;
                MR_Word DotSVars0_1148;
                MR_Word ColonSVars0_1149;
                MR_Word Var_208;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_136, &GenericVarSet_1156);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_1179, GenericVarSet_1156, ContextPieces_11, &MaybeVars_1157);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1167, ContextPieces_11, &MaybeSubGoal_1152, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybeVars_1157)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_208 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_1157, (MR_Integer) 0))));
                  Vars0_1144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_208, (MR_Integer) 0))));
                  StateVars0_1145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_208, (MR_Integer) 1))));
                  DotSVars0_1148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_208, (MR_Integer) 2))));
                  ColonSVars0_1149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_208, (MR_Integer) 3))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_1152)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_1141 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1152, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word Goal_1135;
                  MR_Word Vars_1136;
                  MR_Word StateVars_1137;
                  MR_Word DotSVars_1138;
                  MR_Word ColonSVars_1139;

                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[8]), Vars0_1144, &Vars_1136);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[9]), StateVars0_1145, &StateVars_1137);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[10]), DotSVars0_1148, &DotSVars_1138);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[11]), ColonSVars0_1149, &ColonSVars_1139);
                  {
                    Goal_1135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1135, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                    MR_hl_field(MR_mktag(3), Goal_1135, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1135, 2) = ((MR_Box) (Vars_1136));
                    MR_hl_field(MR_mktag(3), Goal_1135, 3) = ((MR_Box) (StateVars_1137));
                    MR_hl_field(MR_mktag(3), Goal_1135, 4) = ((MR_Box) (DotSVars_1138));
                    MR_hl_field(MR_mktag(3), Goal_1135, 5) = ((MR_Box) (ColonSVars_1139));
                    MR_hl_field(MR_mktag(3), Goal_1135, 6) = ((MR_Box) (SubGoal_1141));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1135));
                  }
                }
                else
                {
                  MR_Word Var_213;
                  MR_Word Var_214;
                  MR_Word Specs_1140;

                  Var_213 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[8]), MaybeVars_1157);
                  Var_214 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_1152);
                  Specs_1140 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_213, Var_214);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1140));
                  }
                }
              }
              else
              {
                MR_Word Var_216;
                MR_Word Spec_1166;

                Spec_1166 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of variables", Functor_8);
                {
                  Var_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_216, 0) = ((MR_Box) (Spec_1166));
                  MR_hl_field(MR_mktag(1), Var_216, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_216));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalsTerm_102;
              MR_Word ParamsTerm_1074;
              MR_Word Var_231;
              MR_Word Var_232;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ParamsTerm_1074 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_231 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_231 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalsTerm_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_231, (MR_Integer) 0))));
                  Var_232 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_231, (MR_Integer) 1))));
                  succeeded = (Var_232 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoals_103;
                MR_Word GenericVarSet_1065;
                MR_Word MaybeParams_1066;
                MR_Word MainGoal_104;
                MR_Word OrElseGoals_105;
                MR_Word Params_1061;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_136, &GenericVarSet_1065);
                parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_111_109_105_99_95_112_97_114_97_109_115_95_95_91_49_93_95_48_4_p_0(ParamsTerm_1074, GenericVarSet_1065, &MaybeParams_1066);
                parse_tree__parse_goal__parse_atomic_subexpr_4_p_0(SubGoalsTerm_102, &MaybeSubGoals_103, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybeParams_1066)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Params_1061 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeParams_1066, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoals_103)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    MainGoal_104 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoals_103, (MR_Integer) 0))));
                    OrElseGoals_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoals_103, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word MaybeComponents_1057;

                  parse_tree__parse_goal__convert_atomic_params_3_p_0(ParamsTerm_1074, Params_1061, &MaybeComponents_1057);
                  if (((MR_tag((MR_Word) MaybeComponents_1057)) == (MR_Integer) 0))
                  {
                    MR_Word Specs_1052 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeComponents_1057, (MR_Integer) 0))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1052));
                    }
                  }
                  else
                  {
                    MR_Word Outer_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_1057, (MR_Integer) 0))));
                    MR_Word Inner_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_1057, (MR_Integer) 1))));
                    MR_Word MaybeOutputVars_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_1057, (MR_Integer) 2))));
                    MR_Word Goal_1051;

                    {
                      Goal_1051 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1051, 0) = ((MR_Box) ((MR_Unsigned) 16U));
                      MR_hl_field(MR_mktag(3), Goal_1051, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1051, 2) = ((MR_Box) (Outer_106));
                      MR_hl_field(MR_mktag(3), Goal_1051, 3) = ((MR_Box) (Inner_107));
                      MR_hl_field(MR_mktag(3), Goal_1051, 4) = ((MR_Box) (MaybeOutputVars_108));
                      MR_hl_field(MR_mktag(3), Goal_1051, 5) = ((MR_Box) (MainGoal_104));
                      MR_hl_field(MR_mktag(3), Goal_1051, 6) = ((MR_Box) (OrElseGoals_105));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1051));
                    }
                  }
                }
                else
                {
                  MR_Word Var_234;
                  MR_Word Var_235;
                  MR_Word Specs_1058;

                  Var_234 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[6]), MaybeParams_1066);
                  Var_235 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[7]), MaybeSubGoals_103);
                  Specs_1058 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_234, Var_235);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1058));
                  }
                }
              }
              else
              {
                MR_Word Var_237;
                MR_Word Spec_1069;

                Spec_1069 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of atomic parameters", Functor_8);
                {
                  Var_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_237, 0) = ((MR_Box) (Spec_1069));
                  MR_hl_field(MR_mktag(1), Var_237, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_237));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 9:
          {
            // case "catch"
            ;
            parse_tree__parse_goal__parse_catch_then_try_term_args_7_p_0(Args_9, (MR_Word) ((MR_Unsigned) 0U), Context_10, ContextPieces_11, MaybeGoal_12, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 10:
          {
            // case "catch_any"
            ;
            {
              MR_Word TermA_83;
              MR_Word ArrowTerm_84;
              MR_Word Var_256;
              MR_Word Var_257;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TermA_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_256 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_256 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ArrowTerm_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_256, (MR_Integer) 0))));
                  Var_257 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_256, (MR_Integer) 1))));
                  succeeded = (Var_257 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeCatchAnyExpr_85;
                MR_Word STATE_VARIABLE_VarSet_258_258;

                parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_97_116_99_104_95_97_110_121_95_116_101_114_109_95_95_91_50_93_95_48_6_p_0(ArrowTerm_84, ContextPieces_11, &MaybeCatchAnyExpr_85, STATE_VARIABLE_VarSet_0_136, &STATE_VARIABLE_VarSet_258_258);
                if (((MR_tag((MR_Word) MaybeCatchAnyExpr_85)) == (MR_Integer) 0))
                {
                  *MaybeGoal_12 = (MR_Word) (MaybeCatchAnyExpr_85);
                  *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_258_258;
                }
                else
                {
                  MR_Word CatchAnyExpr_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatchAnyExpr_85, (MR_Integer) 0))));
                  MR_Word TermAArgs_87;
                  MR_Word Var_259;
                  MR_String Var_260;

                  succeeded = ((MR_tag((MR_Word) TermA_83)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_259 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermA_83, (MR_Integer) 0))));
                    TermAArgs_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermA_83, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_259)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_260 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_259, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_260, (MR_String) "catch") == 0);
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word Var_261;

                    {
                      Var_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_261, 0) = ((MR_Box) (CatchAnyExpr_86));
                    }
                    parse_tree__parse_goal__parse_catch_then_try_term_args_7_p_0(TermAArgs_87, Var_261, Context_10, ContextPieces_11, MaybeGoal_12, STATE_VARIABLE_VarSet_258_258, STATE_VARIABLE_VarSet_137);
                  }
                  else
                  {
                    MR_Word Var_264;

                    {
                      Var_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_264, 0) = ((MR_Box) (CatchAnyExpr_86));
                    }
                    parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_101_108_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_52_93_95_48_8_p_0(TermA_83, (MR_Word) ((MR_Unsigned) 0U), Var_264, ContextPieces_11, MaybeGoal_12, STATE_VARIABLE_VarSet_258_258, STATE_VARIABLE_VarSet_137);
                  }
                }
              }
              else
              {
                MR_Word Var_295;
                MR_Word Spec_998;

                {
                  Spec_998 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_998, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_non_call_goal\'/7"));
                  MR_hl_field(MR_mktag(1), Spec_998, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_998, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_998, 3) = ((MR_Box) (Context_10));
                  MR_hl_field(MR_mktag(1), Spec_998, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[50])));
                }
                {
                  Var_295 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_295, 0) = ((MR_Box) (Spec_998));
                  MR_hl_field(MR_mktag(1), Var_295, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_295));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word WarningsTerm_22;
              MR_Word SubGoalTerm_755;
              MR_Word Var_685;
              MR_Word Var_686;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                WarningsTerm_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_685 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_685 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_755 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_685, (MR_Integer) 0))));
                  Var_686 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_685, (MR_Integer) 1))));
                  succeeded = (Var_686 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word GenericVarSet_23;
                MR_Word MaybeWarnings_24;
                MR_Word MaybeSubGoal_750;
                MR_Word Warnings_25;
                MR_Word SubGoal_746;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_136, &GenericVarSet_23);
                parse_tree__parse_goal__parse_warnings_6_p_0(GenericVarSet_23, WarningsTerm_22, Functor_8, ContextPieces_11, (MR_Integer) 1, &MaybeWarnings_24);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_755, ContextPieces_11, &MaybeSubGoal_750, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybeWarnings_24)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Warnings_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWarnings_24, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_750)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_746 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_750, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word WarningsContext_26;
                  MR_Word WarningsBag_27;
                  MR_Word WarningsCounts_28;
                  MR_Word NonDuplicateWarnings_29;
                  MR_Word DuplicateSpecs_30;
                  MR_Word Var_689;

                  WarningsContext_26 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), WarningsTerm_22);
                  Var_689 = mercury__bag__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0));
                  mercury__bag__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), Warnings_25, Var_689, &WarningsBag_27);
                  mercury__bag__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), WarningsBag_27, &WarningsCounts_28);
                  parse_tree__parse_goal__generate_warnings_for_duplicate_warnings_5_p_0(WarningsContext_26, ContextPieces_11, WarningsCounts_28, &NonDuplicateWarnings_29, &DuplicateSpecs_30);
                  if ((DuplicateSpecs_30 == (MR_Word) ((MR_Unsigned) 0U)))
                    if ((NonDuplicateWarnings_29 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word Pieces_33;
                      MR_Word Var_690;
                      MR_Word Var_691;
                      MR_Word Var_693;
                      MR_Word Var_696;
                      MR_Word Var_699;
                      MR_Word Var_700;
                      MR_Word Var_713;
                      MR_Word Spec_735;

                      Var_690 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_11);
                      {
                        Var_700 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), Var_700, 0) = ((MR_Box) (Functor_8));
                      }
                      {
                        Var_699 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_699, 0) = ((MR_Box) (Var_700));
                        MR_hl_field(MR_mktag(1), Var_699, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[54])));
                      }
                      {
                        Var_696 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_696, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[375])));
                        MR_hl_field(MR_mktag(1), Var_696, 1) = ((MR_Box) (Var_699));
                      }
                      {
                        Var_693 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_693, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[352])));
                        MR_hl_field(MR_mktag(1), Var_693, 1) = ((MR_Box) (Var_696));
                      }
                      {
                        Var_691 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_691, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(1), Var_691, 1) = ((MR_Box) (Var_693));
                      }
                      Pieces_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_690, Var_691);
                      {
                        Spec_735 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Spec_735, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_non_call_goal\'/7"));
                        MR_hl_field(MR_mktag(1), Spec_735, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(1), Spec_735, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(MR_mktag(1), Spec_735, 3) = ((MR_Box) (WarningsContext_26));
                        MR_hl_field(MR_mktag(1), Spec_735, 4) = ((MR_Box) (Pieces_33));
                      }
                      {
                        Var_713 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_713, 0) = ((MR_Box) (Spec_735));
                        MR_hl_field(MR_mktag(1), Var_713, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        *MaybeGoal_12 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_713));
                      }
                    }
                    else
                    {
                      MR_Word HeadWarning_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonDuplicateWarnings_29, (MR_Integer) 0))));
                      MR_Word TailWarnings_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonDuplicateWarnings_29, (MR_Integer) 1))));
                      MR_Word Goal_734;

                      {
                        Goal_734 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Goal_734, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                        MR_hl_field(MR_mktag(3), Goal_734, 1) = ((MR_Box) (Context_10));
                        MR_hl_field(MR_mktag(3), Goal_734, 2) = (MR_Box) ((MR_Unsigned) (HeadWarning_31));
                        MR_hl_field(MR_mktag(3), Goal_734, 3) = ((MR_Box) (TailWarnings_32));
                        MR_hl_field(MR_mktag(3), Goal_734, 4) = ((MR_Box) (SubGoal_746));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeGoal_12 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_734));
                      }
                    }
                  else
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (DuplicateSpecs_30));
                    }
                }
                else
                {
                  MR_Word Var_715;
                  MR_Word Var_716;
                  MR_Word Specs_744;

                  Var_715 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[3]), MaybeWarnings_24);
                  Var_716 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_750);
                  Specs_744 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_715, Var_716);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_744));
                  }
                }
              }
              else
              {
                MR_Word Var_718;
                MR_Word Spec_754;

                Spec_754 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of warnings to disable", Functor_8);
                {
                  Var_718 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_718, 0) = ((MR_Box) (Spec_754));
                  MR_hl_field(MR_mktag(1), Var_718, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_718));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word CondThenTerm_67;
              MR_Word ElseGoalTerm_947;
              MR_Word Var_482;
              MR_Word Var_483;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                CondThenTerm_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_482 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_482 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ElseGoalTerm_947 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_482, (MR_Integer) 0))));
                  Var_483 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_482, (MR_Integer) 1))));
                  succeeded = (Var_483 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word CondContext_69;
                MR_Word CondGoalTerm_929;
                MR_Word ThenGoalTerm_930;
                MR_Word Var_484;
                MR_String Var_485;
                MR_Word Var_486;
                MR_Word Var_487;
                MR_Word Var_488;
                MR_String Var_489;
                MR_Word Var_490;
                MR_Word Var_491;
                MR_Word Var_492;
                MR_Word Var_493;

                succeeded = ((MR_tag((MR_Word) CondThenTerm_67)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_484 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_67, (MR_Integer) 0))));
                  Var_486 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_67, (MR_Integer) 1))));
                  CondContext_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_67, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) Var_484)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_485 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_484, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_485, (MR_String) "if") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_486 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_487 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_486, (MR_Integer) 0))));
                        Var_493 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_486, (MR_Integer) 1))));
                        succeeded = (Var_493 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) Var_487)) == (MR_Integer) 0);
                          if (succeeded)
                          {
                            Var_488 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_487, (MR_Integer) 0))));
                            Var_490 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_487, (MR_Integer) 1))));
                            succeeded = ((MR_tag((MR_Word) Var_488)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Var_489 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_488, (MR_Integer) 0))));
                              succeeded = (strcmp(Var_489, (MR_String) "then") == 0);
                              if (succeeded)
                              {
                                succeeded = (Var_490 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  CondGoalTerm_929 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_490, (MR_Integer) 0))));
                                  Var_491 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_490, (MR_Integer) 1))));
                                  succeeded = (Var_491 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    ThenGoalTerm_930 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_491, (MR_Integer) 0))));
                                    Var_492 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_491, (MR_Integer) 1))));
                                    succeeded = (Var_492 == (MR_Word) ((MR_Unsigned) 0U));
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
                  MR_Word STATE_VARIABLE_VarSet_494_494;
                  MR_Word STATE_VARIABLE_VarSet_495_495;
                  MR_Word MaybeCondGoal_902;
                  MR_Word MaybeThenGoal_903;
                  MR_Word MaybeElseGoal_904;
                  MR_Word Vars_893;
                  MR_Word StateVars_894;
                  MR_Word CondGoal_895;
                  MR_Word ThenGoal_896;
                  MR_Word ElseGoal_897;

                  parse_tree__parse_goal__parse_some_vars_goal_5_p_0(CondGoalTerm_929, ContextPieces_11, &MaybeCondGoal_902, STATE_VARIABLE_VarSet_0_136, &STATE_VARIABLE_VarSet_494_494);
                  parse_tree__parse_goal__parse_goal_5_p_0(ThenGoalTerm_930, ContextPieces_11, &MaybeThenGoal_903, STATE_VARIABLE_VarSet_494_494, &STATE_VARIABLE_VarSet_495_495);
                  parse_tree__parse_goal__parse_goal_5_p_0(ElseGoalTerm_947, ContextPieces_11, &MaybeElseGoal_904, STATE_VARIABLE_VarSet_495_495, STATE_VARIABLE_VarSet_137);
                  succeeded = ((MR_tag((MR_Word) MaybeCondGoal_902)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Vars_893 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_902, (MR_Integer) 0))));
                    StateVars_894 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_902, (MR_Integer) 1))));
                    CondGoal_895 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_902, (MR_Integer) 2))));
                    succeeded = ((MR_tag((MR_Word) MaybeThenGoal_903)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      ThenGoal_896 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThenGoal_903, (MR_Integer) 0))));
                      succeeded = ((MR_tag((MR_Word) MaybeElseGoal_904)) == (MR_Integer) 1);
                      if (succeeded)
                        ElseGoal_897 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElseGoal_904, (MR_Integer) 0))));
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word Goal_889;

                    {
                      Goal_889 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_889, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), Goal_889, 1) = ((MR_Box) (CondContext_69));
                      MR_hl_field(MR_mktag(3), Goal_889, 2) = ((MR_Box) (Vars_893));
                      MR_hl_field(MR_mktag(3), Goal_889, 3) = ((MR_Box) (StateVars_894));
                      MR_hl_field(MR_mktag(3), Goal_889, 4) = ((MR_Box) (CondGoal_895));
                      MR_hl_field(MR_mktag(3), Goal_889, 5) = ((MR_Box) (ThenGoal_896));
                      MR_hl_field(MR_mktag(3), Goal_889, 6) = ((MR_Box) (ElseGoal_897));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_889));
                    }
                  }
                  else
                  {
                    MR_Word Var_497;
                    MR_Word Var_498;
                    MR_Word Var_499;
                    MR_Word Var_500;
                    MR_Word Specs_890;

                    Var_497 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeCondGoal_902);
                    Var_499 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeThenGoal_903);
                    Var_500 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeElseGoal_904);
                    Var_498 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_499, Var_500);
                    Specs_890 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_497, Var_498);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_890));
                    }
                  }
                }
                else
                {
                  MR_Word ArrowContext_72;
                  MR_Word Var_501;
                  MR_String Var_502;
                  MR_Word Var_503;
                  MR_Word Var_504;
                  MR_Word Var_505;
                  MR_String Var_506;
                  MR_Word Var_507;
                  MR_Word Var_508;
                  MR_Word Var_509;
                  MR_Word Var_510;

                  succeeded = ((MR_tag((MR_Word) CondThenTerm_67)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_501 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_67, (MR_Integer) 0))));
                    Var_503 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_67, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_501)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_502 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_501, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_502, (MR_String) "if") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_503 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_504 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_503, (MR_Integer) 0))));
                          Var_510 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_503, (MR_Integer) 1))));
                          succeeded = (Var_510 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = ((MR_tag((MR_Word) Var_504)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Var_505 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_504, (MR_Integer) 0))));
                              Var_507 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_504, (MR_Integer) 1))));
                              ArrowContext_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_504, (MR_Integer) 2))));
                              succeeded = ((MR_tag((MR_Word) Var_505)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                Var_506 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_505, (MR_Integer) 0))));
                                succeeded = (strcmp(Var_506, (MR_String) "->") == 0);
                                if (succeeded)
                                {
                                  succeeded = (Var_507 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_508 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_507, (MR_Integer) 1))));
                                    succeeded = (Var_508 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_509 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_508, (MR_Integer) 1))));
                                      succeeded = (Var_509 == (MR_Word) ((MR_Unsigned) 0U));
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
                    MR_Word Var_534;
                    MR_Word Spec_908;

                    {
                      Spec_908 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Spec_908, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_non_call_goal\'/7"));
                      MR_hl_field(MR_mktag(1), Spec_908, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), Spec_908, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(1), Spec_908, 3) = ((MR_Box) (ArrowContext_72));
                      MR_hl_field(MR_mktag(1), Spec_908, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[64])));
                    }
                    {
                      Var_534 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_534, 0) = ((MR_Box) (Spec_908));
                      MR_hl_field(MR_mktag(1), Var_534, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_534));
                    }
                    *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
                  }
                  else
                  {
                    MR_Word ArrowContext_920;
                    MR_Word Var_536;
                    MR_String Var_537;
                    MR_Word Var_538;
                    MR_Word Var_539;
                    MR_Word Var_540;

                    succeeded = ((MR_tag((MR_Word) CondThenTerm_67)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_536 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_67, (MR_Integer) 0))));
                      Var_538 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_67, (MR_Integer) 1))));
                      ArrowContext_920 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_67, (MR_Integer) 2))));
                      succeeded = ((MR_tag((MR_Word) Var_536)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_537 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_536, (MR_Integer) 0))));
                        succeeded = (strcmp(Var_537, (MR_String) "->") == 0);
                        if (succeeded)
                        {
                          succeeded = (Var_538 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_539 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_538, (MR_Integer) 1))));
                            succeeded = (Var_539 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Var_540 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_539, (MR_Integer) 1))));
                              succeeded = (Var_540 == (MR_Word) ((MR_Unsigned) 0U));
                            }
                          }
                        }
                      }
                    }
                    if (succeeded)
                    {
                      MR_Word Var_573;
                      MR_Word Spec_914;

                      {
                        Spec_914 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Spec_914, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_non_call_goal\'/7"));
                        MR_hl_field(MR_mktag(1), Spec_914, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(1), Spec_914, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(MR_mktag(1), Spec_914, 3) = ((MR_Box) (ArrowContext_920));
                        MR_hl_field(MR_mktag(1), Spec_914, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[77])));
                      }
                      {
                        Var_573 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_573, 0) = ((MR_Box) (Spec_914));
                        MR_hl_field(MR_mktag(1), Var_573, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        *MaybeGoal_12 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_573));
                      }
                      *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
                    }
                    else
                    {
                      MR_Word FullTerm_74;

                      {
                        FullTerm_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), FullTerm_74, 0) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[8]));
                        MR_hl_field(MR_mktag(0), FullTerm_74, 1) = ((MR_Box) (Args_9));
                        MR_hl_field(MR_mktag(0), FullTerm_74, 2) = ((MR_Box) (Context_10));
                      }
                      parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_101_108_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_52_93_95_48_8_p_0(FullTerm_74, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), ContextPieces_11, MaybeGoal_12, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                    }
                  }
                }
              }
              else
              {
                MR_Word Var_603;
                MR_Word Spec_937;

                {
                  Spec_937 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_937, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_non_call_goal\'/7"));
                  MR_hl_field(MR_mktag(1), Spec_937, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_937, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_937, 3) = ((MR_Box) (Context_10));
                  MR_hl_field(MR_mktag(1), Spec_937, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[86])));
                }
                {
                  Var_603 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_603, 0) = ((MR_Box) (Spec_937));
                  MR_hl_field(MR_mktag(1), Var_603, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_603));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalTerm_1330;
              MR_Word Var_146;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1330 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_146 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1324;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1330, ContextPieces_11, &MaybeSubGoal_1324, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                if (((MR_tag((MR_Word) MaybeSubGoal_1324)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1324;
                else
                {
                  MR_Word SubGoal_1314 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1324, (MR_Integer) 0))));
                  MR_Word SubContext_121;
                  MR_Word SymName_122;
                  MR_Word CallArgs_123;
                  MR_Word Purity_1309;

                  succeeded = ((MR_tag((MR_Word) SubGoal_1314)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubContext_121 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubGoal_1314, (MR_Integer) 0))));
                    SymName_122 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubGoal_1314, (MR_Integer) 1))));
                    CallArgs_123 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubGoal_1314, (MR_Integer) 2))));
                    Purity_1309 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), SubGoal_1314, (MR_Integer) 3))) & (MR_Integer) 3);
                    {
                      MR_String EventName_124;

                      succeeded = (Purity_1309 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) SymName_122)) == (MR_Integer) 0);
                        if (succeeded)
                          EventName_124 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_122, (MR_Integer) 0))));
                      }
                      if (succeeded)
                      {
                        MR_Word Goal_1306;

                        {
                          Goal_1306 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Goal_1306, 0) = ((MR_Box) ((MR_Unsigned) 20U));
                          MR_hl_field(MR_mktag(3), Goal_1306, 1) = ((MR_Box) (Context_10));
                          MR_hl_field(MR_mktag(3), Goal_1306, 2) = ((MR_Box) (EventName_124));
                          MR_hl_field(MR_mktag(3), Goal_1306, 3) = ((MR_Box) (CallArgs_123));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          *MaybeGoal_12 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1306));
                        }
                      }
                      else
                      {
                        MR_Word STATE_VARIABLE_Specs_164_164;
                        MR_Word STATE_VARIABLE_Specs_180_180;

                        if (((MR_tag((MR_Word) SymName_122)) == (MR_Integer) 1))
                        {
                          MR_Word QualPieces_128;
                          MR_Word QualSpec_129;
                          MR_Word Var_149;

                          Var_149 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_11);
                          QualPieces_128 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_149, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[91])));
                          {
                            QualSpec_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), QualSpec_129, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_non_call_goal\'/7"));
                            MR_hl_field(MR_mktag(1), QualSpec_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(MR_mktag(1), QualSpec_129, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                            MR_hl_field(MR_mktag(1), QualSpec_129, 3) = ((MR_Box) (SubContext_121));
                            MR_hl_field(MR_mktag(1), QualSpec_129, 4) = ((MR_Box) (QualPieces_128));
                          }
                          {
                            STATE_VARIABLE_Specs_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_164_164, 0) = ((MR_Box) (QualSpec_129));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_164_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                        }
                        else
                          STATE_VARIABLE_Specs_164_164 = (MR_Word) ((MR_Unsigned) 0U);
                        switch (Purity_1309) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 2:
                          case (MR_Integer) 1:
                            {
                              MR_Word PurityPieces_130;
                              MR_Word PuritySpec_131;
                              MR_Word Var_165;

                              Var_165 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_11);
                              PurityPieces_130 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_165, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[96])));
                              {
                                PuritySpec_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), PuritySpec_131, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_non_call_goal\'/7"));
                                MR_hl_field(MR_mktag(1), PuritySpec_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                MR_hl_field(MR_mktag(1), PuritySpec_131, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                                MR_hl_field(MR_mktag(1), PuritySpec_131, 3) = ((MR_Box) (SubContext_121));
                                MR_hl_field(MR_mktag(1), PuritySpec_131, 4) = ((MR_Box) (PurityPieces_130));
                              }
                              {
                                STATE_VARIABLE_Specs_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_180_180, 0) = ((MR_Box) (PuritySpec_131));
                                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_180_180, 1) = ((MR_Box) (STATE_VARIABLE_Specs_164_164));
                              }
                            }
                            break;
                          case (MR_Integer) 0:
                            STATE_VARIABLE_Specs_180_180 = STATE_VARIABLE_Specs_164_164;
                            break;
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          *MaybeGoal_12 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_Specs_180_180));
                        }
                      }
                    }
                  }
                  else
                  {
                    MR_Word Var_181;
                    MR_Word Spec_1308;

                    Spec_1308 = parse_tree__parse_goal__should_have_one_call_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                    {
                      Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_181, 0) = ((MR_Box) (Spec_1308));
                      MR_hl_field(MR_mktag(1), Var_181, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_181));
                    }
                  }
                }
              }
              else
              {
                MR_Word Var_183;
                MR_Word Spec_1328;

                Spec_1328 = parse_tree__parse_goal__should_have_one_call_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_183, 0) = ((MR_Box) (Spec_1328));
                  MR_hl_field(MR_mktag(1), Var_183, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_183));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word Goal_1346;

              {
                Goal_1346 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Goal_1346, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), Goal_1346, 1) = ((MR_Box) (Context_10));
              }
              if ((Args_9 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1346));
                }
              else
              {
                MR_Word Var_144;
                MR_Word Spec_1343;

                Spec_1343 = parse_tree__parse_goal__should_have_no_args_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (Spec_1343));
                  MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_144));
                }
              }
              *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 15:
          {
            // case "if"
            ;
            {
              MR_Word Var_480;
              MR_Word Spec_978;
              MR_Word ThenContext_75;
              MR_Word ThenGoalTerm_976;
              MR_Word Var_399;
              MR_Word Var_400;
              MR_String Var_401;
              MR_Word Var_402;
              MR_Word Var_403;
              MR_Word Var_404;
              MR_Word Var_405;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_399 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_405 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_405 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_399)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_400 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_399, (MR_Integer) 0))));
                    Var_402 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_399, (MR_Integer) 1))));
                    ThenContext_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_399, (MR_Integer) 2))));
                    succeeded = ((MR_tag((MR_Word) Var_400)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_401 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_400, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_401, (MR_String) "then") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_402 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_403 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_402, (MR_Integer) 1))));
                          succeeded = (Var_403 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ThenGoalTerm_976 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_403, (MR_Integer) 0))));
                            Var_404 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_403, (MR_Integer) 1))));
                            succeeded = (Var_404 == (MR_Word) ((MR_Unsigned) 0U));
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word SemiColonContext_78;
                MR_Word Var_406;
                MR_String Var_407;
                MR_Word Var_408;
                MR_Word Var_409;
                MR_Word Var_410;

                succeeded = ((MR_tag((MR_Word) ThenGoalTerm_976)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_406 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenGoalTerm_976, (MR_Integer) 0))));
                  Var_408 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenGoalTerm_976, (MR_Integer) 1))));
                  SemiColonContext_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenGoalTerm_976, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) Var_406)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_407 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_406, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_407, (MR_String) ";") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_408 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_409 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_408, (MR_Integer) 1))));
                        succeeded = (Var_409 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_410 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_409, (MR_Integer) 1))));
                          succeeded = (Var_410 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                  {
                    Spec_978 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Spec_978, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_non_call_goal\'/7"));
                    MR_hl_field(MR_mktag(1), Spec_978, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), Spec_978, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(1), Spec_978, 3) = ((MR_Box) (SemiColonContext_78));
                    MR_hl_field(MR_mktag(1), Spec_978, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[102])));
                  }
                else
                  {
                    Spec_978 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Spec_978, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_non_call_goal\'/7"));
                    MR_hl_field(MR_mktag(1), Spec_978, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), Spec_978, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(1), Spec_978, 3) = ((MR_Box) (ThenContext_75));
                    MR_hl_field(MR_mktag(1), Spec_978, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[108])));
                  }
              }
              else
                {
                  Spec_978 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_978, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_non_call_goal\'/7"));
                  MR_hl_field(MR_mktag(1), Spec_978, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_978, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_978, 3) = ((MR_Box) (Context_10));
                  MR_hl_field(MR_mktag(1), Spec_978, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[112])));
                }
              {
                Var_480 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_480, 0) = ((MR_Box) (Spec_978));
                MR_hl_field(MR_mktag(1), Var_480, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeGoal_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_480));
              }
              *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word Var_724;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_724 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_724 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeGoal0_16;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_15, ContextPieces_11, &MaybeGoal0_16, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                parse_tree__parse_goal__apply_purity_marker_to_maybe_goal_4_p_0(SubGoalTerm_15, (MR_Integer) 2, MaybeGoal0_16, MaybeGoal_12);
              }
              else
              {
                MR_Word Spec_17;
                MR_Word Var_726;

                Spec_17 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_726 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_726, 0) = ((MR_Box) (Spec_17));
                  MR_hl_field(MR_mktag(1), Var_726, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_726));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word VarsTerm_109;
              MR_Word SubGoalTerm_1111;
              MR_Word Var_218;
              MR_Word Var_219;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_109 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_218 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_218 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_1111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_218, (MR_Integer) 0))));
                  Var_219 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_218, (MR_Integer) 1))));
                  succeeded = (Var_219 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1100;
                MR_Word GenericVarSet_1104;
                MR_Word MaybeVars_1105;
                MR_Word DotSVars0_110;
                MR_Word ColonSVars0_111;
                MR_Word SubGoal_1093;
                MR_Word Vars0_1096;
                MR_Word StateVars0_1097;
                MR_Word Var_221;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_136, &GenericVarSet_1104);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_109, GenericVarSet_1104, ContextPieces_11, &MaybeVars_1105);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1111, ContextPieces_11, &MaybeSubGoal_1100, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybeVars_1105)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_221 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_1105, (MR_Integer) 0))));
                  Vars0_1096 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_221, (MR_Integer) 0))));
                  StateVars0_1097 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_221, (MR_Integer) 1))));
                  DotSVars0_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_221, (MR_Integer) 2))));
                  ColonSVars0_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_221, (MR_Integer) 3))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_1100)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_1093 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1100, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word DotSVars_112;
                  MR_Word ColonSVars_113;
                  MR_Word Vars_1090;
                  MR_Word StateVars_1091;

                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[12]), Vars0_1096, &Vars_1090);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[13]), StateVars0_1097, &StateVars_1091);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[14]), DotSVars0_110, &DotSVars_112);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[15]), ColonSVars0_111, &ColonSVars_113);
                  if ((strcmp(Functor_8, (MR_String) "promise_equivalent_solutions") == 0))
                  {
                    MR_Word Goal_1086;

                    {
                      Goal_1086 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1086, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(MR_mktag(3), Goal_1086, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1086, 2) = ((MR_Box) (Vars_1090));
                      MR_hl_field(MR_mktag(3), Goal_1086, 3) = ((MR_Box) (StateVars_1091));
                      MR_hl_field(MR_mktag(3), Goal_1086, 4) = ((MR_Box) (DotSVars_112));
                      MR_hl_field(MR_mktag(3), Goal_1086, 5) = ((MR_Box) (ColonSVars_113));
                      MR_hl_field(MR_mktag(3), Goal_1086, 6) = ((MR_Box) (SubGoal_1093));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1086));
                    }
                  }
                  else
                  {
                    MR_Word Goal_1087;

                    {
                      Goal_1087 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1087, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                      MR_hl_field(MR_mktag(3), Goal_1087, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1087, 2) = ((MR_Box) (Vars_1090));
                      MR_hl_field(MR_mktag(3), Goal_1087, 3) = ((MR_Box) (StateVars_1091));
                      MR_hl_field(MR_mktag(3), Goal_1087, 4) = ((MR_Box) (DotSVars_112));
                      MR_hl_field(MR_mktag(3), Goal_1087, 5) = ((MR_Box) (ColonSVars_113));
                      MR_hl_field(MR_mktag(3), Goal_1087, 6) = ((MR_Box) (SubGoal_1093));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1087));
                    }
                  }
                }
                else
                {
                  MR_Word Var_226;
                  MR_Word Var_227;
                  MR_Word Specs_1092;

                  Var_226 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[8]), MaybeVars_1105);
                  Var_227 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_1100);
                  Specs_1092 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_226, Var_227);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1092));
                  }
                }
              }
              else
              {
                MR_Word Var_229;
                MR_Word Spec_1110;

                Spec_1110 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of variables", Functor_8);
                {
                  Var_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_229, 0) = ((MR_Box) (Spec_1110));
                  MR_hl_field(MR_mktag(1), Var_229, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_229));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalTerm_729;
              MR_Word Var_720;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_729 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_720 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_720 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_18;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_729, ContextPieces_11, &MaybeSubGoal_18, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                if (((MR_tag((MR_Word) MaybeSubGoal_18)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_18;
                else
                {
                  MR_Word SubGoal_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_18, (MR_Integer) 0))));
                  MR_Word Goal_20;

                  {
                    Goal_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_20, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), Goal_20, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_20, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), Goal_20, 3) = ((MR_Box) (SubGoal_19));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_20));
                  }
                }
              }
              else
              {
                MR_Word Var_722;
                MR_Word Spec_728;

                Spec_728 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_722 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_722, 0) = ((MR_Box) (Spec_728));
                  MR_hl_field(MR_mktag(1), Var_722, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_722));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalTerm_1486;
              MR_Word Var_1464;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1486 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1464 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1464 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1471;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1486, ContextPieces_11, &MaybeSubGoal_1471, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                if (((MR_tag((MR_Word) MaybeSubGoal_1471)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1471;
                else
                {
                  MR_Word SubGoal_1466 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1471, (MR_Integer) 0))));
                  MR_Word Goal_1467;

                  {
                    Goal_1467 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1467, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), Goal_1467, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1467, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), Goal_1467, 3) = ((MR_Box) (SubGoal_1466));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1467));
                  }
                }
              }
              else
              {
                MR_Word Var_1475;
                MR_Word Spec_1477;

                Spec_1477 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1475 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1475, 0) = ((MR_Box) (Spec_1477));
                  MR_hl_field(MR_mktag(1), Var_1475, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1475));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalTerm_1519;
              MR_Word Var_1497;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1519 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1497 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1497 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1504;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1519, ContextPieces_11, &MaybeSubGoal_1504, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                if (((MR_tag((MR_Word) MaybeSubGoal_1504)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1504;
                else
                {
                  MR_Word SubGoal_1499 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1504, (MR_Integer) 0))));
                  MR_Word Goal_1500;

                  {
                    Goal_1500 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1500, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), Goal_1500, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1500, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), Goal_1500, 3) = ((MR_Box) (SubGoal_1499));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1500));
                  }
                }
              }
              else
              {
                MR_Word Var_1508;
                MR_Word Spec_1510;

                Spec_1510 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1508 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1508, 0) = ((MR_Box) (Spec_1510));
                  MR_hl_field(MR_mktag(1), Var_1508, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1508));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalTerm_1212;
              MR_Word Var_201;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1212 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_201 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_201 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1207;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1212, ContextPieces_11, &MaybeSubGoal_1207, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                if (((MR_tag((MR_Word) MaybeSubGoal_1207)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1207;
                else
                {
                  MR_Word SubGoal_1201 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1207, (MR_Integer) 0))));
                  MR_Word Goal_1202;

                  {
                    Goal_1202 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1202, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(MR_mktag(3), Goal_1202, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1202, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), Goal_1202, 3) = ((MR_Box) (SubGoal_1201));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1202));
                  }
                }
              }
              else
              {
                MR_Word Var_203;
                MR_Word Spec_1211;

                Spec_1211 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_203, 0) = ((MR_Box) (Spec_1211));
                  MR_hl_field(MR_mktag(1), Var_203, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_203));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalTerm_1552;
              MR_Word Var_1530;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1552 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1530 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1530 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1540;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1552, ContextPieces_11, &MaybeSubGoal_1540, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                if (((MR_tag((MR_Word) MaybeSubGoal_1540)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1540;
                else
                {
                  MR_Word SubGoal_1532 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1540, (MR_Integer) 0))));
                  MR_Word Goal_1533;

                  {
                    Goal_1533 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1533, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(MR_mktag(3), Goal_1533, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1533, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), Goal_1533, 3) = ((MR_Box) (SubGoal_1532));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1533));
                  }
                }
              }
              else
              {
                MR_Word Var_1541;
                MR_Word Spec_1543;

                Spec_1543 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1541 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1541, 0) = ((MR_Box) (Spec_1543));
                  MR_hl_field(MR_mktag(1), Var_1541, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1541));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalTerm_1236;
              MR_Word VarsTerm_1242;
              MR_Word Var_193;
              MR_Word Var_194;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_1242 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_193 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_193 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_1236 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_193, (MR_Integer) 0))));
                  Var_194 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_193, (MR_Integer) 1))));
                  succeeded = (Var_194 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word ProgVarsTerm_115;
                MR_Word MaybePSDCVars_116;
                MR_Word MaybeSubGoal_1231;
                MR_Word PSDCVars0_117;
                MR_Word SubGoal_1228;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_1242, &ProgVarsTerm_115);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_115, STATE_VARIABLE_VarSet_0_136, ContextPieces_11, &MaybePSDCVars_116);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1236, ContextPieces_11, &MaybeSubGoal_1231, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_116)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_117 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_116, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_1231)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_1228 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1231, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_118;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_117, SubGoal_1228, ContextPieces_11, Functor_8, &MaybePODVar_118);
                  if (((MR_tag((MR_Word) MaybePODVar_118)) == (MR_Integer) 0))
                    *MaybeGoal_12 = (MR_Word) (MaybePODVar_118);
                  else
                  {
                    MR_Word PODVar_119 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_118, (MR_Integer) 0))));
                    MR_Word Goal_1224;

                    {
                      Goal_1224 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1224, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(3), Goal_1224, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1224, 2) = ((MR_Box) (PODVar_119));
                      MR_hl_field(MR_mktag(3), Goal_1224, 3) = ((MR_Box) (SubGoal_1228));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1224));
                    }
                  }
                }
                else
                {
                  MR_Word Var_196;
                  MR_Word Var_197;
                  MR_Word Specs_1227;

                  Var_196 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_116);
                  Var_197 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_1231);
                  Specs_1227 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_196, Var_197);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1227));
                  }
                }
              }
              else
              {
                MR_Word Var_199;
                MR_Word Spec_1235;

                Spec_1235 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
                {
                  Var_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_199, 0) = ((MR_Box) (Spec_1235));
                  MR_hl_field(MR_mktag(1), Var_199, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_199));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalTerm_1585;
              MR_Word Var_1563;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1585 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1563 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1563 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1573;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1585, ContextPieces_11, &MaybeSubGoal_1573, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                if (((MR_tag((MR_Word) MaybeSubGoal_1573)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1573;
                else
                {
                  MR_Word SubGoal_1565 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1573, (MR_Integer) 0))));
                  MR_Word Goal_1566;

                  {
                    Goal_1566 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1566, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(MR_mktag(3), Goal_1566, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1566, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), Goal_1566, 3) = ((MR_Box) (SubGoal_1565));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1566));
                  }
                }
              }
              else
              {
                MR_Word Var_1574;
                MR_Word Spec_1576;

                Spec_1576 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1574 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1574, 0) = ((MR_Box) (Spec_1576));
                  MR_hl_field(MR_mktag(1), Var_1574, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1574));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalTerm_1618;
              MR_Word Var_1596;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1618 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1596 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1596 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1606;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1618, ContextPieces_11, &MaybeSubGoal_1606, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                if (((MR_tag((MR_Word) MaybeSubGoal_1606)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1606;
                else
                {
                  MR_Word SubGoal_1598 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1606, (MR_Integer) 0))));
                  MR_Word Goal_1599;

                  {
                    Goal_1599 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1599, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(MR_mktag(3), Goal_1599, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1599, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), Goal_1599, 3) = ((MR_Box) (SubGoal_1598));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1599));
                  }
                }
              }
              else
              {
                MR_Word Var_1607;
                MR_Word Spec_1609;

                Spec_1609 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1607 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1607, 0) = ((MR_Box) (Spec_1609));
                  MR_hl_field(MR_mktag(1), Var_1607, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1607));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalTerm_1651;
              MR_Word Var_1629;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1651 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1629 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1629 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1639;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1651, ContextPieces_11, &MaybeSubGoal_1639, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                if (((MR_tag((MR_Word) MaybeSubGoal_1639)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1639;
                else
                {
                  MR_Word SubGoal_1631 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1639, (MR_Integer) 0))));
                  MR_Word Goal_1632;

                  {
                    Goal_1632 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1632, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(MR_mktag(3), Goal_1632, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1632, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 7));
                    MR_hl_field(MR_mktag(3), Goal_1632, 3) = ((MR_Box) (SubGoal_1631));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1632));
                  }
                }
              }
              else
              {
                MR_Word Var_1640;
                MR_Word Spec_1642;

                Spec_1642 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1640 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1640, 0) = ((MR_Box) (Spec_1642));
                  MR_hl_field(MR_mktag(1), Var_1640, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1640));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalTerm_1684;
              MR_Word Var_1662;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1684 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1662 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1662 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1672;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1684, ContextPieces_11, &MaybeSubGoal_1672, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                if (((MR_tag((MR_Word) MaybeSubGoal_1672)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1672;
                else
                {
                  MR_Word SubGoal_1664 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1672, (MR_Integer) 0))));
                  MR_Word Goal_1665;

                  {
                    Goal_1665 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1665, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(MR_mktag(3), Goal_1665, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1665, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), Goal_1665, 3) = ((MR_Box) (SubGoal_1664));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1665));
                  }
                }
              }
              else
              {
                MR_Word Var_1673;
                MR_Word Spec_1675;

                Spec_1675 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1673 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1673, 0) = ((MR_Box) (Spec_1675));
                  MR_hl_field(MR_mktag(1), Var_1673, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1673));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalTerm_1717;
              MR_Word Var_1695;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1717 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1695 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1695 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1705;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1717, ContextPieces_11, &MaybeSubGoal_1705, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                if (((MR_tag((MR_Word) MaybeSubGoal_1705)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1705;
                else
                {
                  MR_Word SubGoal_1697 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1705, (MR_Integer) 0))));
                  MR_Word Goal_1698;

                  {
                    Goal_1698 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1698, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(MR_mktag(3), Goal_1698, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1698, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), Goal_1698, 3) = ((MR_Box) (SubGoal_1697));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1698));
                  }
                }
              }
              else
              {
                MR_Word Var_1706;
                MR_Word Spec_1708;

                Spec_1708 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1706 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1706, 0) = ((MR_Box) (Spec_1708));
                  MR_hl_field(MR_mktag(1), Var_1706, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1706));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalTerm_1750;
              MR_Word Var_1728;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1750 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1728 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1728 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1738;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1750, ContextPieces_11, &MaybeSubGoal_1738, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                if (((MR_tag((MR_Word) MaybeSubGoal_1738)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1738;
                else
                {
                  MR_Word SubGoal_1730 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1738, (MR_Integer) 0))));
                  MR_Word Goal_1731;

                  {
                    Goal_1731 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1731, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(MR_mktag(3), Goal_1731, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1731, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), Goal_1731, 3) = ((MR_Box) (SubGoal_1730));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1731));
                  }
                }
              }
              else
              {
                MR_Word Var_1739;
                MR_Word Spec_1741;

                Spec_1741 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1739 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1739, 0) = ((MR_Box) (Spec_1741));
                  MR_hl_field(MR_mktag(1), Var_1739, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1739));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalTerm_1279;
              MR_Word VarsTerm_1285;
              MR_Word Var_185;
              MR_Word Var_186;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_1285 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_185 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_1279 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_185, (MR_Integer) 0))));
                  Var_186 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_185, (MR_Integer) 1))));
                  succeeded = (Var_186 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1268;
                MR_Word ProgVarsTerm_1272;
                MR_Word MaybePSDCVars_1273;
                MR_Word SubGoal_1261;
                MR_Word PSDCVars0_1264;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_1285, &ProgVarsTerm_1272);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_1272, STATE_VARIABLE_VarSet_0_136, ContextPieces_11, &MaybePSDCVars_1273);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1279, ContextPieces_11, &MaybeSubGoal_1268, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_1273)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_1264 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_1273, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_1268)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_1261 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1268, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_1257;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_1264, SubGoal_1261, ContextPieces_11, Functor_8, &MaybePODVar_1257);
                  if (((MR_tag((MR_Word) MaybePODVar_1257)) == (MR_Integer) 0))
                    *MaybeGoal_12 = (MR_Word) (MaybePODVar_1257);
                  else
                  {
                    MR_Word Goal_1250;
                    MR_Word PODVar_1251 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_1257, (MR_Integer) 0))));

                    {
                      Goal_1250 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1250, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Goal_1250, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1250, 2) = ((MR_Box) (PODVar_1251));
                      MR_hl_field(MR_mktag(3), Goal_1250, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), Goal_1250, 4) = ((MR_Box) (SubGoal_1261));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1250));
                    }
                  }
                }
                else
                {
                  MR_Word Var_188;
                  MR_Word Var_189;
                  MR_Word Specs_1260;

                  Var_188 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_1273);
                  Var_189 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_1268);
                  Specs_1260 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_188, Var_189);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1260));
                  }
                }
              }
              else
              {
                MR_Word Var_191;
                MR_Word Spec_1278;

                Spec_1278 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
                {
                  Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_191, 0) = ((MR_Box) (Spec_1278));
                  MR_hl_field(MR_mktag(1), Var_191, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_191));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalTerm_1830;
              MR_Word VarsTerm_1831;
              MR_Word Var_1761;
              MR_Word Var_1762;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_1831 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1761 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1761 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_1830 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1761, (MR_Integer) 0))));
                  Var_1762 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1761, (MR_Integer) 1))));
                  succeeded = (Var_1762 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1800;
                MR_Word ProgVarsTerm_1801;
                MR_Word MaybePSDCVars_1802;
                MR_Word SubGoal_1786;
                MR_Word PSDCVars0_1787;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_1831, &ProgVarsTerm_1801);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_1801, STATE_VARIABLE_VarSet_0_136, ContextPieces_11, &MaybePSDCVars_1802);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1830, ContextPieces_11, &MaybeSubGoal_1800, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_1802)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_1787 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_1802, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_1800)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_1786 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1800, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_1772;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_1787, SubGoal_1786, ContextPieces_11, Functor_8, &MaybePODVar_1772);
                  if (((MR_tag((MR_Word) MaybePODVar_1772)) == (MR_Integer) 0))
                    *MaybeGoal_12 = (MR_Word) (MaybePODVar_1772);
                  else
                  {
                    MR_Word Goal_1764;
                    MR_Word PODVar_1765 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_1772, (MR_Integer) 0))));

                    {
                      Goal_1764 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1764, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Goal_1764, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1764, 2) = ((MR_Box) (PODVar_1765));
                      MR_hl_field(MR_mktag(3), Goal_1764, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), Goal_1764, 4) = ((MR_Box) (SubGoal_1786));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1764));
                    }
                  }
                }
                else
                {
                  MR_Word Var_1773;
                  MR_Word Var_1774;
                  MR_Word Specs_1775;

                  Var_1773 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_1802);
                  Var_1774 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_1800);
                  Specs_1775 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_1773, Var_1774);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1775));
                  }
                }
              }
              else
              {
                MR_Word Var_1809;
                MR_Word Spec_1811;

                Spec_1811 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
                {
                  Var_1809 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1809, 0) = ((MR_Box) (Spec_1811));
                  MR_hl_field(MR_mktag(1), Var_1809, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1809));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalTerm_1932;
              MR_Word VarsTerm_1933;
              MR_Word Var_1863;
              MR_Word Var_1864;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_1933 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1863 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1863 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_1932 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1863, (MR_Integer) 0))));
                  Var_1864 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1863, (MR_Integer) 1))));
                  succeeded = (Var_1864 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1902;
                MR_Word ProgVarsTerm_1903;
                MR_Word MaybePSDCVars_1904;
                MR_Word SubGoal_1888;
                MR_Word PSDCVars0_1889;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_1933, &ProgVarsTerm_1903);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_1903, STATE_VARIABLE_VarSet_0_136, ContextPieces_11, &MaybePSDCVars_1904);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1932, ContextPieces_11, &MaybeSubGoal_1902, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_1904)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_1889 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_1904, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_1902)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_1888 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1902, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_1874;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_1889, SubGoal_1888, ContextPieces_11, Functor_8, &MaybePODVar_1874);
                  if (((MR_tag((MR_Word) MaybePODVar_1874)) == (MR_Integer) 0))
                    *MaybeGoal_12 = (MR_Word) (MaybePODVar_1874);
                  else
                  {
                    MR_Word Goal_1866;
                    MR_Word PODVar_1867 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_1874, (MR_Integer) 0))));

                    {
                      Goal_1866 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1866, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Goal_1866, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1866, 2) = ((MR_Box) (PODVar_1867));
                      MR_hl_field(MR_mktag(3), Goal_1866, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), Goal_1866, 4) = ((MR_Box) (SubGoal_1888));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1866));
                    }
                  }
                }
                else
                {
                  MR_Word Var_1875;
                  MR_Word Var_1876;
                  MR_Word Specs_1877;

                  Var_1875 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_1904);
                  Var_1876 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_1902);
                  Specs_1877 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_1875, Var_1876);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1877));
                  }
                }
              }
              else
              {
                MR_Word Var_1911;
                MR_Word Spec_1913;

                Spec_1913 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
                {
                  Var_1911 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1911, 0) = ((MR_Box) (Spec_1913));
                  MR_hl_field(MR_mktag(1), Var_1911, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1911));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalTerm_2034;
              MR_Word VarsTerm_2035;
              MR_Word Var_1965;
              MR_Word Var_1966;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_2035 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1965 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1965 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_2034 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1965, (MR_Integer) 0))));
                  Var_1966 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1965, (MR_Integer) 1))));
                  succeeded = (Var_1966 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_2004;
                MR_Word ProgVarsTerm_2005;
                MR_Word MaybePSDCVars_2006;
                MR_Word SubGoal_1990;
                MR_Word PSDCVars0_1991;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_2035, &ProgVarsTerm_2005);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_2005, STATE_VARIABLE_VarSet_0_136, ContextPieces_11, &MaybePSDCVars_2006);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_2034, ContextPieces_11, &MaybeSubGoal_2004, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_2006)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_1991 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_2006, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_2004)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_1990 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2004, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_1976;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_1991, SubGoal_1990, ContextPieces_11, Functor_8, &MaybePODVar_1976);
                  if (((MR_tag((MR_Word) MaybePODVar_1976)) == (MR_Integer) 0))
                    *MaybeGoal_12 = (MR_Word) (MaybePODVar_1976);
                  else
                  {
                    MR_Word Goal_1968;
                    MR_Word PODVar_1969 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_1976, (MR_Integer) 0))));

                    {
                      Goal_1968 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1968, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Goal_1968, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1968, 2) = ((MR_Box) (PODVar_1969));
                      MR_hl_field(MR_mktag(3), Goal_1968, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
                      MR_hl_field(MR_mktag(3), Goal_1968, 4) = ((MR_Box) (SubGoal_1990));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1968));
                    }
                  }
                }
                else
                {
                  MR_Word Var_1977;
                  MR_Word Var_1978;
                  MR_Word Specs_1979;

                  Var_1977 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_2006);
                  Var_1978 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_2004);
                  Specs_1979 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_1977, Var_1978);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1979));
                  }
                }
              }
              else
              {
                MR_Word Var_2013;
                MR_Word Spec_2015;

                Spec_2015 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
                {
                  Var_2013 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_2013, 0) = ((MR_Box) (Spec_2015));
                  MR_hl_field(MR_mktag(1), Var_2013, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2013));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalTerm_2136;
              MR_Word VarsTerm_2137;
              MR_Word Var_2067;
              MR_Word Var_2068;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_2137 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_2067 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_2067 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_2136 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2067, (MR_Integer) 0))));
                  Var_2068 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2067, (MR_Integer) 1))));
                  succeeded = (Var_2068 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_2106;
                MR_Word ProgVarsTerm_2107;
                MR_Word MaybePSDCVars_2108;
                MR_Word SubGoal_2092;
                MR_Word PSDCVars0_2093;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_2137, &ProgVarsTerm_2107);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_2107, STATE_VARIABLE_VarSet_0_136, ContextPieces_11, &MaybePSDCVars_2108);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_2136, ContextPieces_11, &MaybeSubGoal_2106, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_2108)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_2093 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_2108, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_2106)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_2092 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2106, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_2078;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_2093, SubGoal_2092, ContextPieces_11, Functor_8, &MaybePODVar_2078);
                  if (((MR_tag((MR_Word) MaybePODVar_2078)) == (MR_Integer) 0))
                    *MaybeGoal_12 = (MR_Word) (MaybePODVar_2078);
                  else
                  {
                    MR_Word Goal_2070;
                    MR_Word PODVar_2071 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_2078, (MR_Integer) 0))));

                    {
                      Goal_2070 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_2070, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Goal_2070, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_2070, 2) = ((MR_Box) (PODVar_2071));
                      MR_hl_field(MR_mktag(3), Goal_2070, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), Goal_2070, 4) = ((MR_Box) (SubGoal_2092));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_2070));
                    }
                  }
                }
                else
                {
                  MR_Word Var_2079;
                  MR_Word Var_2080;
                  MR_Word Specs_2081;

                  Var_2079 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_2108);
                  Var_2080 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_2106);
                  Specs_2081 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_2079, Var_2080);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_2081));
                  }
                }
              }
              else
              {
                MR_Word Var_2115;
                MR_Word Spec_2117;

                Spec_2117 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
                {
                  Var_2115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_2115, 0) = ((MR_Box) (Spec_2117));
                  MR_hl_field(MR_mktag(1), Var_2115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2115));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalTerm_2238;
              MR_Word VarsTerm_2239;
              MR_Word Var_2169;
              MR_Word Var_2170;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_2239 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_2169 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_2169 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_2238 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2169, (MR_Integer) 0))));
                  Var_2170 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2169, (MR_Integer) 1))));
                  succeeded = (Var_2170 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_2208;
                MR_Word ProgVarsTerm_2209;
                MR_Word MaybePSDCVars_2210;
                MR_Word SubGoal_2194;
                MR_Word PSDCVars0_2195;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_2239, &ProgVarsTerm_2209);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_2209, STATE_VARIABLE_VarSet_0_136, ContextPieces_11, &MaybePSDCVars_2210);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_2238, ContextPieces_11, &MaybeSubGoal_2208, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_2210)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_2195 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_2210, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_2208)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_2194 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2208, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_2180;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_2195, SubGoal_2194, ContextPieces_11, Functor_8, &MaybePODVar_2180);
                  if (((MR_tag((MR_Word) MaybePODVar_2180)) == (MR_Integer) 0))
                    *MaybeGoal_12 = (MR_Word) (MaybePODVar_2180);
                  else
                  {
                    MR_Word Goal_2172;
                    MR_Word PODVar_2173 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_2180, (MR_Integer) 0))));

                    {
                      Goal_2172 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_2172, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Goal_2172, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_2172, 2) = ((MR_Box) (PODVar_2173));
                      MR_hl_field(MR_mktag(3), Goal_2172, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), Goal_2172, 4) = ((MR_Box) (SubGoal_2194));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_2172));
                    }
                  }
                }
                else
                {
                  MR_Word Var_2181;
                  MR_Word Var_2182;
                  MR_Word Specs_2183;

                  Var_2181 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_2210);
                  Var_2182 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_2208);
                  Specs_2183 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_2181, Var_2182);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_2183));
                  }
                }
              }
              else
              {
                MR_Word Var_2217;
                MR_Word Spec_2219;

                Spec_2219 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
                {
                  Var_2217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_2217, 0) = ((MR_Box) (Spec_2219));
                  MR_hl_field(MR_mktag(1), Var_2217, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2217));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalTerm_2340;
              MR_Word VarsTerm_2341;
              MR_Word Var_2271;
              MR_Word Var_2272;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_2341 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_2271 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_2271 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_2340 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2271, (MR_Integer) 0))));
                  Var_2272 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2271, (MR_Integer) 1))));
                  succeeded = (Var_2272 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_2310;
                MR_Word ProgVarsTerm_2311;
                MR_Word MaybePSDCVars_2312;
                MR_Word SubGoal_2296;
                MR_Word PSDCVars0_2297;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_2341, &ProgVarsTerm_2311);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_2311, STATE_VARIABLE_VarSet_0_136, ContextPieces_11, &MaybePSDCVars_2312);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_2340, ContextPieces_11, &MaybeSubGoal_2310, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_2312)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_2297 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_2312, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_2310)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_2296 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2310, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_2282;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_2297, SubGoal_2296, ContextPieces_11, Functor_8, &MaybePODVar_2282);
                  if (((MR_tag((MR_Word) MaybePODVar_2282)) == (MR_Integer) 0))
                    *MaybeGoal_12 = (MR_Word) (MaybePODVar_2282);
                  else
                  {
                    MR_Word Goal_2274;
                    MR_Word PODVar_2275 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_2282, (MR_Integer) 0))));

                    {
                      Goal_2274 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_2274, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Goal_2274, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_2274, 2) = ((MR_Box) (PODVar_2275));
                      MR_hl_field(MR_mktag(3), Goal_2274, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), Goal_2274, 4) = ((MR_Box) (SubGoal_2296));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_2274));
                    }
                  }
                }
                else
                {
                  MR_Word Var_2283;
                  MR_Word Var_2284;
                  MR_Word Specs_2285;

                  Var_2283 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_2312);
                  Var_2284 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_2310);
                  Specs_2285 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_2283, Var_2284);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_2285));
                  }
                }
              }
              else
              {
                MR_Word Var_2319;
                MR_Word Spec_2321;

                Spec_2321 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
                {
                  Var_2319 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_2319, 0) = ((MR_Box) (Spec_2321));
                  MR_hl_field(MR_mktag(1), Var_2319, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2319));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalTerm_2442;
              MR_Word VarsTerm_2443;
              MR_Word Var_2373;
              MR_Word Var_2374;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_2443 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_2373 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_2373 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_2442 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2373, (MR_Integer) 0))));
                  Var_2374 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2373, (MR_Integer) 1))));
                  succeeded = (Var_2374 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_2412;
                MR_Word ProgVarsTerm_2413;
                MR_Word MaybePSDCVars_2414;
                MR_Word SubGoal_2398;
                MR_Word PSDCVars0_2399;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_2443, &ProgVarsTerm_2413);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_2413, STATE_VARIABLE_VarSet_0_136, ContextPieces_11, &MaybePSDCVars_2414);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_2442, ContextPieces_11, &MaybeSubGoal_2412, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_2414)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_2399 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_2414, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_2412)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_2398 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2412, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_2384;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_2399, SubGoal_2398, ContextPieces_11, Functor_8, &MaybePODVar_2384);
                  if (((MR_tag((MR_Word) MaybePODVar_2384)) == (MR_Integer) 0))
                    *MaybeGoal_12 = (MR_Word) (MaybePODVar_2384);
                  else
                  {
                    MR_Word Goal_2376;
                    MR_Word PODVar_2377 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_2384, (MR_Integer) 0))));

                    {
                      Goal_2376 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_2376, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Goal_2376, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_2376, 2) = ((MR_Box) (PODVar_2377));
                      MR_hl_field(MR_mktag(3), Goal_2376, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Goal_2376, 4) = ((MR_Box) (SubGoal_2398));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_2376));
                    }
                  }
                }
                else
                {
                  MR_Word Var_2385;
                  MR_Word Var_2386;
                  MR_Word Specs_2387;

                  Var_2385 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_2414);
                  Var_2386 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_2412);
                  Specs_2387 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_2385, Var_2386);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_2387));
                  }
                }
              }
              else
              {
                MR_Word Var_2421;
                MR_Word Spec_2423;

                Spec_2423 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
                {
                  Var_2421 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_2421, 0) = ((MR_Box) (Spec_2423));
                  MR_hl_field(MR_mktag(1), Var_2421, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2421));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word SubGoalTerm_2480;
              MR_Word Var_2475;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_2480 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_2475 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_2475 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeGoal0_2476;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_2480, ContextPieces_11, &MaybeGoal0_2476, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                parse_tree__parse_goal__apply_purity_marker_to_maybe_goal_4_p_0(SubGoalTerm_2480, (MR_Integer) 1, MaybeGoal0_2476, MaybeGoal_12);
              }
              else
              {
                MR_Word Spec_2477;
                MR_Word Var_2478;

                Spec_2477 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_2478 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_2478, 0) = ((MR_Box) (Spec_2477));
                  MR_hl_field(MR_mktag(1), Var_2478, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2478));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word QVarsTerm_2616;
              MR_Word SubGoalTerm_2647;
              MR_Word Var_2493;
              MR_Word Var_2494;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                QVarsTerm_2616 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_2493 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_2493 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_2647 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2493, (MR_Integer) 0))));
                  Var_2494 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2493, (MR_Integer) 1))));
                  succeeded = (Var_2494 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word VarsContextPieces_2576;
                MR_Word MaybeVars_2577;
                MR_Word Var_2587;
                MR_Word MaybeSubGoal_2598;
                MR_Word GenericVarSet_2599;
                MR_Word Vars0_2548;
                MR_Word StateVars0_2549;
                MR_Word SubGoal_2566;
                MR_Word Var_2495;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_136, &GenericVarSet_2599);
                Var_2587 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[21])));
                VarsContextPieces_2576 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_11, Var_2587);
                parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), QVarsTerm_2616, GenericVarSet_2599, VarsContextPieces_2576, &MaybeVars_2577);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_2647, ContextPieces_11, &MaybeSubGoal_2598, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybeVars_2577)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_2495 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_2577, (MR_Integer) 0))));
                  Vars0_2548 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_2495, (MR_Integer) 0))));
                  StateVars0_2549 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_2495, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_2598)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_2566 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2598, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word Vars_2524;
                  MR_Word StateVars_2525;
                  MR_Word Goal1_2526;
                  MR_Word Goal_2535;

                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[16]), Vars0_2548, &Vars_2524);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[17]), StateVars0_2549, &StateVars_2525);
                  if ((StateVars_2525 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal1_2526 = SubGoal_2566;
                  else
                    {
                      Goal1_2526 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal1_2526, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal1_2526, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                      MR_hl_field(MR_mktag(3), Goal1_2526, 2) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal1_2526, 3) = ((MR_Box) (StateVars_2525));
                      MR_hl_field(MR_mktag(3), Goal1_2526, 4) = ((MR_Box) (SubGoal_2566));
                    }
                  if ((Vars_2524 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal_2535 = Goal1_2526;
                  else
                    {
                      Goal_2535 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_2535, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal_2535, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
                      MR_hl_field(MR_mktag(3), Goal_2535, 2) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_2535, 3) = ((MR_Box) (Vars_2524));
                      MR_hl_field(MR_mktag(3), Goal_2535, 4) = ((MR_Box) (Goal1_2526));
                    }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_2535));
                  }
                }
                else
                {
                  MR_Word Var_2542;
                  MR_Word Var_2543;
                  MR_Word Specs_2544;

                  Var_2542 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[2]), MaybeVars_2577);
                  Var_2543 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_2598);
                  Specs_2544 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_2542, Var_2543);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_2544));
                  }
                }
              }
              else
              {
                MR_Word Var_2613;
                MR_Word Spec_2615;

                Spec_2615 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of variables", Functor_8);
                {
                  Var_2613 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_2613, 0) = ((MR_Box) (Spec_2615));
                  MR_hl_field(MR_mktag(1), Var_2613, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2613));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word ThenTerm_80;
              MR_Word Var_299;
              MR_Word Var_300;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_299 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_299 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ThenTerm_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_299, (MR_Integer) 0))));
                  Var_300 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_299, (MR_Integer) 1))));
                  succeeded = (Var_300 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word SemiColonContext_986;
                MR_Word Var_301;
                MR_String Var_302;
                MR_Word Var_303;
                MR_Word Var_304;
                MR_Word Var_305;

                succeeded = ((MR_tag((MR_Word) ThenTerm_80)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_301 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenTerm_80, (MR_Integer) 0))));
                  Var_303 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenTerm_80, (MR_Integer) 1))));
                  SemiColonContext_986 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenTerm_80, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) Var_301)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_302 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_301, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_302, (MR_String) ";") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_303 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_304 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_303, (MR_Integer) 1))));
                        succeeded = (Var_304 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_305 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_304, (MR_Integer) 1))));
                          succeeded = (Var_305 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word Var_329;
                  MR_Word Spec_982;

                  {
                    Spec_982 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Spec_982, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_non_call_goal\'/7"));
                    MR_hl_field(MR_mktag(1), Spec_982, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), Spec_982, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(1), Spec_982, 3) = ((MR_Box) (SemiColonContext_986));
                    MR_hl_field(MR_mktag(1), Spec_982, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[102])));
                  }
                  {
                    Var_329 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_329, 0) = ((MR_Box) (Spec_982));
                    MR_hl_field(MR_mktag(1), Var_329, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_329));
                  }
                  *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
                }
                else
                {
                  MR_Word Var_331;

                  {
                    Var_331 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_331, 0) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[9]));
                    MR_hl_field(MR_mktag(0), Var_331, 1) = ((MR_Box) (Args_9));
                    MR_hl_field(MR_mktag(0), Var_331, 2) = ((MR_Box) (Context_10));
                  }
                  parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_53_93_95_48_9_p_0(Var_331, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), ContextPieces_11, MaybeGoal_12, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                }
              }
              else
              {
                MR_Word Var_397;
                MR_Word Spec_987;

                {
                  Spec_987 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_987, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_non_call_goal\'/7"));
                  MR_hl_field(MR_mktag(1), Spec_987, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_987, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), Spec_987, 3) = ((MR_Box) (Context_10));
                  MR_hl_field(MR_mktag(1), Spec_987, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[139])));
                }
                {
                  Var_397 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_397, 0) = ((MR_Box) (Spec_987));
                  MR_hl_field(MR_mktag(1), Var_397, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_397));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word ParamsTerm_94;
              MR_Word SubGoalTerm_1037;
              MR_Word Var_239;
              MR_Word Var_240;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ParamsTerm_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_239 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_239 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_1037 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_239, (MR_Integer) 0))));
                  Var_240 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_239, (MR_Integer) 1))));
                  succeeded = (Var_240 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeParams_95;
                MR_Word MaybeSubGoal_1031;
                MR_Word GenericVarSet_1035;
                MR_Word Params_96;
                MR_Word SubGoal_1028;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_136, &GenericVarSet_1035);
                parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_112_97_114_97_109_115_95_95_91_50_93_95_48_4_p_0(GenericVarSet_1035, ParamsTerm_94, &MaybeParams_95);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1037, ContextPieces_11, &MaybeSubGoal_1031, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybeParams_95)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Params_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeParams_95, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_1031)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_1028 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1031, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word MaybeComponents_97;

                  parse_tree__parse_goal__convert_trace_params_2_p_0(Params_96, &MaybeComponents_97);
                  if (((MR_tag((MR_Word) MaybeComponents_97)) == (MR_Integer) 0))
                  {
                    MR_Word Specs_1022 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeComponents_97, (MR_Integer) 0))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1022));
                    }
                  }
                  else
                  {
                    MR_Word CompileTime_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_97, (MR_Integer) 0))));
                    MR_Word RunTime_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_97, (MR_Integer) 1))));
                    MR_Word MaybeIO_100 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_97, (MR_Integer) 2))));
                    MR_Word MutVars_101 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_97, (MR_Integer) 3))));
                    MR_Word Goal_1021;

                    {
                      Goal_1021 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1021, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                      MR_hl_field(MR_mktag(3), Goal_1021, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1021, 2) = ((MR_Box) (CompileTime_98));
                      MR_hl_field(MR_mktag(3), Goal_1021, 3) = ((MR_Box) (RunTime_99));
                      MR_hl_field(MR_mktag(3), Goal_1021, 4) = ((MR_Box) (MaybeIO_100));
                      MR_hl_field(MR_mktag(3), Goal_1021, 5) = ((MR_Box) (MutVars_101));
                      MR_hl_field(MR_mktag(3), Goal_1021, 6) = ((MR_Box) (SubGoal_1028));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1021));
                    }
                  }
                }
                else
                {
                  MR_Word Var_242;
                  MR_Word Var_243;
                  MR_Word Specs_1027;

                  Var_242 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[5]), MaybeParams_95);
                  Var_243 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_1031);
                  Specs_1027 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_242, Var_243);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1027));
                  }
                }
              }
              else
              {
                MR_Word Var_245;
                MR_Word Spec_1036;

                Spec_1036 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of trace parameters", Functor_8);
                {
                  Var_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_245, 0) = ((MR_Box) (Spec_1036));
                  MR_hl_field(MR_mktag(1), Var_245, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_245));
                }
                *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
              MR_Word Goal_2723;

              {
                Goal_2723 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Goal_2723, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Goal_2723, 1) = ((MR_Box) (Context_10));
              }
              if ((Args_9 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_2723));
                }
              else
              {
                MR_Word Var_2710;
                MR_Word Spec_2712;

                Spec_2712 = parse_tree__parse_goal__should_have_no_args_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_2710 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_2710, 0) = ((MR_Box) (Spec_2712));
                  MR_hl_field(MR_mktag(1), Var_2710, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2710));
                }
              }
              *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
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
parse_tree__parse_goal__parse_catch_then_try_term_args_7_p_0(
  MR_Word CatchTermArgs_8,
  MR_Word MaybeCatchAnyExpr_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22)
{
  {
    MR_bool succeeded = (CatchTermArgs_8 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word TermA_14;
    MR_Word TermB_15;
    MR_Word Var_23;
    MR_Word Var_24;

    if (succeeded)
    {
      TermA_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CatchTermArgs_8, (MR_Integer) 0))));
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CatchTermArgs_8, (MR_Integer) 1))));
      succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TermB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 0))));
        Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 1))));
        succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word MaybeCatches_16;
      MR_Word STATE_VARIABLE_VarSet_25_25;

      parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_98_95_99_97_116_99_104_95_116_101_114_109_115_95_95_91_50_93_95_48_6_p_0(TermB_15, ContextPieces_11, &MaybeCatches_16, STATE_VARIABLE_VarSet_0_21, &STATE_VARIABLE_VarSet_25_25);
      if (((MR_tag((MR_Word) MaybeCatches_16)) == (MR_Integer) 0))
      {
        *MaybeGoal_12 = (MR_Word) (MaybeCatches_16);
        *STATE_VARIABLE_VarSet_22 = STATE_VARIABLE_VarSet_25_25;
      }
      else
      {
        MR_Word Catches_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatches_16, (MR_Integer) 0))));

        parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_101_108_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_52_93_95_48_8_p_0(TermA_14, Catches_17, MaybeCatchAnyExpr_9, ContextPieces_11, MaybeGoal_12, STATE_VARIABLE_VarSet_25_25, STATE_VARIABLE_VarSet_22);
      }
    }
    else
    {
      MR_Word Spec_20;
      MR_Word Var_59;

      {
        Spec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_catch_then_try_term_args\'/7"));
        MR_hl_field(MR_mktag(1), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_20, 3) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(1), Spec_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[288])));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Spec_20));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_59));
      }
      *STATE_VARIABLE_VarSet_22 = STATE_VARIABLE_VarSet_0_21;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_101_108_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_52_93_95_48_8_p_0(
  MR_Word Term_9,
  MR_Word CatchExprs_10,
  MR_Word MaybeCatchAnyExpr_11,
  MR_Word ContextPieces_13,
  MR_Word * MaybeGoal_14,
  MR_Word STATE_VARIABLE_VarSet_0_29,
  MR_Word * STATE_VARIABLE_VarSet_30)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    MR_Word ThenTerm_16;
    MR_Word ElseTerm_17;
    MR_Word Var_31;
    MR_String Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;

    if (succeeded)
    {
      Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
      Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_32 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 0))));
        succeeded = (strcmp(Var_32, (MR_String) "else") == 0);
        if (succeeded)
        {
          succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ThenTerm_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 0))));
            Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 1))));
            succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ElseTerm_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 0))));
              Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 1))));
              succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeElseGoal0_19;
      MR_Word STATE_VARIABLE_VarSet_36_36;

      parse_tree__parse_goal__parse_goal_5_p_0(ElseTerm_17, ContextPieces_13, &MaybeElseGoal0_19, STATE_VARIABLE_VarSet_0_29, &STATE_VARIABLE_VarSet_36_36);
      if (((MR_tag((MR_Word) MaybeElseGoal0_19)) == (MR_Integer) 0))
      {
        *MaybeGoal_14 = MaybeElseGoal0_19;
        *STATE_VARIABLE_VarSet_30 = STATE_VARIABLE_VarSet_36_36;
      }
      else
      {
        MR_Word ElseGoal_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElseGoal0_19, (MR_Integer) 0))));
        MR_Word MaybeTryGoal_21;
        MR_Word Var_37;
        MR_Word ThenContext_25;
        MR_Word Var_39;
        MR_String Var_40;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_43;

        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (ElseGoal_20));
        }
        parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_53_93_95_48_9_p_0(ThenTerm_16, Var_37, CatchExprs_10, MaybeCatchAnyExpr_11, ContextPieces_13, &MaybeTryGoal_21, STATE_VARIABLE_VarSet_36_36, STATE_VARIABLE_VarSet_30);
        succeeded = ((MR_tag((MR_Word) MaybeTryGoal_21)) == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) ThenTerm_16)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenTerm_16, (MR_Integer) 0))));
            Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenTerm_16, (MR_Integer) 1))));
            ThenContext_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenTerm_16, (MR_Integer) 2))));
            succeeded = ((MR_tag((MR_Word) Var_39)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_40 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0))));
              succeeded = (strcmp(Var_40, (MR_String) "then") == 0);
              if (succeeded)
              {
                succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 1))));
                  succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 1))));
                    succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word Spec_27;
          MR_Word Var_67;

          {
            Spec_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_27, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_else_then_try_term\'/8"));
            MR_hl_field(MR_mktag(1), Spec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_27, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_27, 3) = ((MR_Box) (ThenContext_25));
            MR_hl_field(MR_mktag(1), Spec_27, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[298])));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Spec_27));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeGoal_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_67));
          }
        }
        else
          *MaybeGoal_14 = MaybeTryGoal_21;
      }
    }
    else
      parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_53_93_95_48_9_p_0(Term_9, (MR_Word) ((MR_Unsigned) 0U), CatchExprs_10, MaybeCatchAnyExpr_11, ContextPieces_13, MaybeGoal_14, STATE_VARIABLE_VarSet_0_29, STATE_VARIABLE_VarSet_30);
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
  MR_Word STATE_VARIABLE_VarSet_0_37,
  MR_Word * STATE_VARIABLE_VarSet_38)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) ThenTryTerm_10)) == (MR_Integer) 0);
    MR_Word ThenTerm_19;
    MR_Word ParamsTerm_21;
    MR_Word TryGoalTerm_22;
    MR_Word TryContext_23;
    MR_Word TryTerm_18;
    MR_Word Var_39;
    MR_String Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_String Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;

    if (succeeded)
    {
      Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenTryTerm_10, (MR_Integer) 0))));
      Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenTryTerm_10, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_39)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_40 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0))));
        succeeded = (strcmp(Var_40, (MR_String) "then") == 0);
        if (succeeded)
        {
          succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TryTerm_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0))));
            Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 1))));
            succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ThenTerm_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0))));
              Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 1))));
              succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) TryTerm_18)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TryTerm_18, (MR_Integer) 0))));
                  Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TryTerm_18, (MR_Integer) 1))));
                  TryContext_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TryTerm_18, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_45, (MR_String) "try") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ParamsTerm_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 0))));
                        Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 1))));
                        succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          TryGoalTerm_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 0))));
                          Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 1))));
                          succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
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
      MR_Word STATE_VARIABLE_VarSet_49_49;
      MR_Word Params_28;
      MR_Word TryGoal_29;
      MR_Word ThenGoal_30;

      mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_37, &GenericVarSet_24);
      parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_121_95_112_97_114_97_109_115_95_95_91_50_93_95_48_4_p_0(GenericVarSet_24, ParamsTerm_21, &MaybeParams_25);
      parse_tree__parse_goal__parse_goal_5_p_0(TryGoalTerm_22, ContextPieces_15, &MaybeTryGoal_26, STATE_VARIABLE_VarSet_0_37, &STATE_VARIABLE_VarSet_49_49);
      parse_tree__parse_goal__parse_goal_5_p_0(ThenTerm_19, ContextPieces_15, &MaybeThenGoal_27, STATE_VARIABLE_VarSet_49_49, STATE_VARIABLE_VarSet_38);
      succeeded = ((MR_tag((MR_Word) MaybeParams_25)) == (MR_Integer) 1);
      if (succeeded)
      {
        Params_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeParams_25, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeTryGoal_26)) == (MR_Integer) 1);
        if (succeeded)
        {
          TryGoal_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTryGoal_26, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeThenGoal_27)) == (MR_Integer) 1);
          if (succeeded)
            ThenGoal_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThenGoal_27, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Word MaybeComponents_31;

        parse_tree__parse_goal__convert_try_params_2_p_0(Params_28, &MaybeComponents_31);
        if (((MR_tag((MR_Word) MaybeComponents_31)) == (MR_Integer) 0))
          *MaybeGoal_16 = (MR_Word) (MaybeComponents_31);
        else
        {
          MR_Word MaybeIO_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_31, (MR_Integer) 0))));
          MR_Word Goal_33;

          {
            Goal_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Goal_33, 0) = ((MR_Box) ((MR_Unsigned) 17U));
            MR_hl_field(MR_mktag(3), Goal_33, 1) = ((MR_Box) (TryContext_23));
            MR_hl_field(MR_mktag(3), Goal_33, 2) = ((MR_Box) (MaybeIO_32));
            MR_hl_field(MR_mktag(3), Goal_33, 3) = ((MR_Box) (TryGoal_29));
            MR_hl_field(MR_mktag(3), Goal_33, 4) = ((MR_Box) (ThenGoal_30));
            MR_hl_field(MR_mktag(3), Goal_33, 5) = ((MR_Box) (MaybeElse_11));
            MR_hl_field(MR_mktag(3), Goal_33, 6) = ((MR_Box) (CatchExprs_12));
            MR_hl_field(MR_mktag(3), Goal_33, 7) = ((MR_Box) (MaybeCatchAnyExpr_13));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeGoal_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_33));
          }
        }
      }
      else
      {
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Specs_105;

        Var_51 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[12]), MaybeParams_25);
        Var_53 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeTryGoal_26);
        Var_54 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeThenGoal_27);
        Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_53, Var_54);
        Specs_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_51, Var_52);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_105));
        }
      }
    }
    else
    {
      MR_Word Spec_36;
      MR_Word Var_102;
      MR_Word Var_103;

      Var_102 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ThenTryTerm_10);
      {
        Spec_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_36, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_then_try_term\'/9"));
        MR_hl_field(MR_mktag(1), Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_36, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_36, 3) = ((MR_Box) (Var_102));
        MR_hl_field(MR_mktag(1), Spec_36, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[306])));
      }
      {
        Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Spec_36));
        MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_103));
      }
      *STATE_VARIABLE_VarSet_38 = STATE_VARIABLE_VarSet_0_37;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_97_116_99_104_95_97_114_114_111_119_95_116_101_114_109_95_95_91_50_93_95_48_6_p_0(
  MR_Word ArrowTerm_7,
  MR_Word ContextPieces_9,
  MR_Word * MaybeCatch_10,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) ArrowTerm_7)) == (MR_Integer) 0);
    MR_Word PatternTerm0_12;
    MR_Word GoalTerm_13;
    MR_Word Var_24;
    MR_String Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;

    if (succeeded)
    {
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArrowTerm_7, (MR_Integer) 0))));
      Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArrowTerm_7, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_25 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
        succeeded = (strcmp(Var_25, (MR_String) "->") == 0);
        if (succeeded)
        {
          succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            PatternTerm0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0))));
            Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1))));
            succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              GoalTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0))));
              Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 1))));
              succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
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
      parse_tree__parse_goal__parse_goal_5_p_0(GoalTerm_13, ContextPieces_9, &MaybeGoal_16, STATE_VARIABLE_VarSet_0_22, STATE_VARIABLE_VarSet_23);
      if (((MR_tag((MR_Word) MaybeGoal_16)) == (MR_Integer) 0))
        *MaybeCatch_10 = (MR_Word) (MaybeGoal_16);
      else
      {
        MR_Word Goal_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal_16, (MR_Integer) 0))));
        MR_Word Catch_18;

        {
          Catch_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Catch_18, 0) = ((MR_Box) (PatternTerm_15));
          MR_hl_field(MR_mktag(0), Catch_18, 1) = ((MR_Box) (Goal_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeCatch_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Catch_18));
        }
      }
    }
    else
    {
      MR_Word Spec_21;
      MR_Word Var_53;
      MR_Word Var_54;

      Var_53 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArrowTerm_7);
      {
        Spec_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_catch_arrow_term\'/6"));
        MR_hl_field(MR_mktag(1), Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_21, 3) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(1), Spec_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[292])));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Spec_21));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCatch_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_54));
      }
      *STATE_VARIABLE_VarSet_23 = STATE_VARIABLE_VarSet_0_22;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_98_95_99_97_116_99_104_95_116_101_114_109_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word Term_7,
  MR_Word ContextPieces_9,
  MR_Word * MaybeCatches_10,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_Word CatchArrowTerm_12;
    MR_Word SubTerm_13;
    MR_Word Var_25;
    MR_String Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;

    if (succeeded)
    {
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
        succeeded = (strcmp(Var_26, (MR_String) "catch") == 0);
        if (succeeded)
        {
          succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            CatchArrowTerm_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0))));
            Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 1))));
            succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SubTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 0))));
              Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 1))));
              succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word HeadMaybeCatch_15;
      MR_Word TailMaybeCatches_16;
      MR_Word STATE_VARIABLE_VarSet_30_30;
      MR_Word PatternTerm0_48;
      MR_Word GoalTerm_49;
      MR_Word Var_58;
      MR_String Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word HeadCatch_17;
      MR_Word TailCatches_18;

      succeeded = ((MR_tag((MR_Word) CatchArrowTerm_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CatchArrowTerm_12, (MR_Integer) 0))));
        Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CatchArrowTerm_12, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_58)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_59 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_58, (MR_Integer) 0))));
          succeeded = (strcmp(Var_59, (MR_String) "->") == 0);
          if (succeeded)
          {
            succeeded = (Var_60 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              PatternTerm0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 0))));
              Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 1))));
              succeeded = (Var_61 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                GoalTerm_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_61, (MR_Integer) 0))));
                Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_61, (MR_Integer) 1))));
                succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word PatternTerm_51;
        MR_Word MaybeGoal_52;

        mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PatternTerm0_48, &PatternTerm_51);
        parse_tree__parse_goal__parse_goal_5_p_0(GoalTerm_49, ContextPieces_9, &MaybeGoal_52, STATE_VARIABLE_VarSet_0_23, &STATE_VARIABLE_VarSet_30_30);
        if (((MR_tag((MR_Word) MaybeGoal_52)) == (MR_Integer) 0))
          HeadMaybeCatch_15 = (MR_Word) (MaybeGoal_52);
        else
        {
          MR_Word Goal_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal_52, (MR_Integer) 0))));
          MR_Word Catch_54;

          {
            Catch_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Catch_54, 0) = ((MR_Box) (PatternTerm_51));
            MR_hl_field(MR_mktag(0), Catch_54, 1) = ((MR_Box) (Goal_53));
          }
          {
            HeadMaybeCatch_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadMaybeCatch_15, 0) = ((MR_Box) (Catch_54));
          }
        }
      }
      else
      {
        MR_Word Spec_57;
        MR_Word Var_87;
        MR_Word Var_88;

        Var_87 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), CatchArrowTerm_12);
        {
          Spec_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_57, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_catch_arrow_term\'/6"));
          MR_hl_field(MR_mktag(1), Spec_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_57, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_57, 3) = ((MR_Box) (Var_87));
          MR_hl_field(MR_mktag(1), Spec_57, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[292])));
        }
        {
          Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Spec_57));
          MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          HeadMaybeCatch_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadMaybeCatch_15, 0) = ((MR_Box) (Var_88));
        }
        STATE_VARIABLE_VarSet_30_30 = STATE_VARIABLE_VarSet_0_23;
      }
      parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_98_95_99_97_116_99_104_95_116_101_114_109_115_95_95_91_50_93_95_48_6_p_0(SubTerm_13, ContextPieces_9, &TailMaybeCatches_16, STATE_VARIABLE_VarSet_30_30, STATE_VARIABLE_VarSet_24);
      succeeded = ((MR_tag((MR_Word) HeadMaybeCatch_15)) == (MR_Integer) 1);
      if (succeeded)
      {
        HeadCatch_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadMaybeCatch_15, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) TailMaybeCatches_16)) == (MR_Integer) 1);
        if (succeeded)
          TailCatches_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailMaybeCatches_16, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word Var_32;

        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (HeadCatch_17));
          MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (TailCatches_18));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeCatches_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_32));
        }
      }
      else
      {
        MR_Word Specs_19;
        MR_Word Var_33;
        MR_Word Var_34;

        Var_33 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0), HeadMaybeCatch_15);
        Var_34 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[11]), TailMaybeCatches_16);
        Specs_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_33, Var_34);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeCatches_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_19));
        }
      }
    }
    else
    {
      MR_Word MaybeCatch_20;

      parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_97_116_99_104_95_97_114_114_111_119_95_116_101_114_109_95_95_91_50_93_95_48_6_p_0(Term_7, ContextPieces_9, &MaybeCatch_20, STATE_VARIABLE_VarSet_0_23, STATE_VARIABLE_VarSet_24);
      if (((MR_tag((MR_Word) MaybeCatch_20)) == (MR_Integer) 0))
        *MaybeCatches_10 = (MR_Word) (MaybeCatch_20);
      else
      {
        MR_Word Catch_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatch_20, (MR_Integer) 0))));
        MR_Word Var_36;

        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Catch_21));
          MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeCatches_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_36));
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
  MR_Word STATE_VARIABLE_VarSet_0_24,
  MR_Word * STATE_VARIABLE_VarSet_25)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) ArrowTerm_7)) == (MR_Integer) 0);
    MR_Word VarTerm0_12;
    MR_Word GoalTerm_13;
    MR_Word Var_26;
    MR_String Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;

    if (succeeded)
    {
      Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArrowTerm_7, (MR_Integer) 0))));
      Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArrowTerm_7, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_27 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0))));
        succeeded = (strcmp(Var_27, (MR_String) "->") == 0);
        if (succeeded)
        {
          succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            VarTerm0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 0))));
            Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 1))));
            succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              GoalTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 0))));
              Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 1))));
              succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
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
          parse_tree__parse_goal__parse_goal_5_p_0(GoalTerm_13, ContextPieces_9, &MaybeGoal_18, STATE_VARIABLE_VarSet_0_24, STATE_VARIABLE_VarSet_25);
          if (((MR_tag((MR_Word) MaybeGoal_18)) == (MR_Integer) 0))
            *MaybeCatchAny_10 = (MR_Word) (MaybeGoal_18);
          else
          {
            MR_Word Goal_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal_18, (MR_Integer) 0))));
            MR_Word CatchAny_20;

            {
              CatchAny_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CatchAny_20, 0) = ((MR_Box) (Var_17));
              MR_hl_field(MR_mktag(0), CatchAny_20, 1) = ((MR_Box) (Goal_19));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeCatchAny_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CatchAny_20));
            }
          }
        }
      }
      else
      {
        MR_Word Spec_23;
        MR_Word Var_58;
        MR_Word Var_59;

        Var_58 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArrowTerm_7);
        {
          Spec_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_catch_any_term\'/6"));
          MR_hl_field(MR_mktag(1), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_23, 3) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(1), Spec_23, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[271])));
        }
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Spec_23));
          MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeCatchAny_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_59));
        }
        *STATE_VARIABLE_VarSet_25 = STATE_VARIABLE_VarSet_0_24;
      }
    }
    else
    {
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Spec_88;

      Var_84 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArrowTerm_7);
      {
        Spec_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_88, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_catch_any_term\'/6"));
        MR_hl_field(MR_mktag(1), Spec_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_88, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_88, 3) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(1), Spec_88, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[276])));
      }
      {
        Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Spec_88));
        MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCatchAny_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_85));
      }
      *STATE_VARIABLE_VarSet_25 = STATE_VARIABLE_VarSet_0_24;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_atomic_subgoals_as_list_4_p_0(
  MR_Word Term_5,
  MR_Word * MaybeGoals_6,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    MR_Word LeftGoal_8;
    MR_Word RightGoal_9;
    MR_Word Var_21;
    MR_String Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;

    if (succeeded)
    {
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
        succeeded = (strcmp(Var_22, (MR_String) "or_else") == 0);
        if (succeeded)
        {
          succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            LeftGoal_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 0))));
            Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 1))));
            succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              RightGoal_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 0))));
              Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 1))));
              succeeded = (Var_25 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeLeftGoalList_11;
      MR_Word MaybeRightGoalList_12;
      MR_Word STATE_VARIABLE_VarSet_26_26;
      MR_Word LeftGoalList_13;
      MR_Word RightGoalList_14;

      parse_tree__parse_goal__parse_atomic_subgoals_as_list_4_p_0(LeftGoal_8, &MaybeLeftGoalList_11, STATE_VARIABLE_VarSet_0_19, &STATE_VARIABLE_VarSet_26_26);
      parse_tree__parse_goal__parse_atomic_subgoals_as_list_4_p_0(RightGoal_9, &MaybeRightGoalList_12, STATE_VARIABLE_VarSet_26_26, STATE_VARIABLE_VarSet_20);
      succeeded = ((MR_tag((MR_Word) MaybeLeftGoalList_11)) == (MR_Integer) 1);
      if (succeeded)
      {
        LeftGoalList_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLeftGoalList_11, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeRightGoalList_12)) == (MR_Integer) 1);
        if (succeeded)
          RightGoalList_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRightGoalList_12, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word Var_28;

        Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), LeftGoalList_13, RightGoalList_14);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoals_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
        }
      }
      else
      {
        MR_Word Specs_15;
        MR_Word Var_29;
        MR_Word Var_30;

        Var_29 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[7]), MaybeLeftGoalList_11);
        Var_30 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[7]), MaybeRightGoalList_12);
        Specs_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_29, Var_30);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoals_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_15));
        }
      }
    }
    else
    {
      MR_Word ContextPieces_16;
      MR_Word MaybeSubGoal_17;

      ContextPieces_16 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0));
      parse_tree__parse_goal__parse_goal_5_p_0(Term_5, ContextPieces_16, &MaybeSubGoal_17, STATE_VARIABLE_VarSet_0_19, STATE_VARIABLE_VarSet_20);
      if (((MR_tag((MR_Word) MaybeSubGoal_17)) == (MR_Integer) 0))
        *MaybeGoals_6 = (MR_Word) (MaybeSubGoal_17);
      else
      {
        MR_Word SubGoal_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_17, (MR_Integer) 0))));
        MR_Word Var_32;

        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (SubGoal_18));
          MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoals_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_32));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_atomic_subexpr_4_p_0(
  MR_Word Term_5,
  MR_Word * MaybeSubExpr_6,
  MR_Word STATE_VARIABLE_VarSet_0_16,
  MR_Word * STATE_VARIABLE_VarSet_17)
{
  {
    MR_Word MaybeGoalList_8;

    parse_tree__parse_goal__parse_atomic_subgoals_as_list_4_p_0(Term_5, &MaybeGoalList_8, STATE_VARIABLE_VarSet_0_16, STATE_VARIABLE_VarSet_17);
    if (((MR_tag((MR_Word) MaybeGoalList_8)) == (MR_Integer) 0))
    {
      MR_Word Specs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeGoalList_8, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSubExpr_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_15));
      }
    }
    else
    {
      MR_Word GoalList_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoalList_8, (MR_Integer) 0))));

      if ((GoalList_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Context_11;
        MR_Word Spec_12;
        MR_Word Var_27;

        Context_11 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
        {
          Spec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_subexpr\'/4"));
          MR_hl_field(MR_mktag(1), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_12, 3) = ((MR_Box) (Context_11));
          MR_hl_field(MR_mktag(1), Spec_12, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[351])));
        }
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Spec_12));
          MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSubExpr_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
        }
      }
      else
      {
        MR_Word MainSubGoalExpr_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalList_9, (MR_Integer) 0))));
        MR_Word OrElseAlternativeSubExpr_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalList_9, (MR_Integer) 1))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeSubExpr_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MainSubGoalExpr_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OrElseAlternativeSubExpr_14));
        }
      }
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
    MR_Word conv1_HeadVar__2_63;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__153__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_63);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_63));
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
    MR_Word conv0_HeadVar__2_57;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__152__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_57);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_57));
  }
}

void MR_CALL 
parse_tree__parse_goal__parse_some_vars_goal_5_p_0(
  MR_Word Term_6,
  MR_Word ContextPieces_7,
  MR_Word * MaybeVarsAndGoal_8,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0);
    MR_Word MaybeVars_16;
    MR_Word GoalTerm_17;
    MR_Word MaybeGoal_18;
    MR_Word VarsTerm_10;
    MR_Word SubGoalTerm_11;
    MR_Word Var_27;
    MR_String Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Vars0_19;
    MR_Word StateVars0_20;
    MR_Word Goal_21;
    MR_Word Var_48;

    if (succeeded)
    {
      Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 0))));
      Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0))));
        succeeded = (strcmp(Var_28, (MR_String) "some") == 0);
        if (succeeded)
        {
          succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            VarsTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 0))));
            Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 1))));
            succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SubGoalTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0))));
              Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 1))));
              succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word GenericVarSet_13;
      MR_Word VarsContextPieces_15;
      MR_Word Var_43;

      mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_25, &GenericVarSet_13);
      Var_43 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[21])));
      VarsContextPieces_15 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7, Var_43);
      parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_10, GenericVarSet_13, VarsContextPieces_15, &MaybeVars_16);
      GoalTerm_17 = SubGoalTerm_11;
    }
    else
    {
      MaybeVars_16 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_3[7]));
      GoalTerm_17 = Term_6;
    }
    parse_tree__parse_goal__parse_goal_5_p_0(GoalTerm_17, ContextPieces_7, &MaybeGoal_18, STATE_VARIABLE_VarSet_0_25, STATE_VARIABLE_VarSet_26);
    succeeded = ((MR_tag((MR_Word) MaybeVars_16)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_16, (MR_Integer) 0))));
      Vars0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 0))));
      StateVars0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) MaybeGoal_18)) == (MR_Integer) 1);
      if (succeeded)
        Goal_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal_18, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word Vars_22;
      MR_Word StateVars_23;

      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[4]), Vars0_19, &Vars_22);
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[5]), StateVars0_20, &StateVars_23);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *MaybeVarsAndGoal_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Vars_22));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (StateVars_23));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Goal_21));
      }
    }
    else
    {
      MR_Word Specs_24;
      MR_Word Var_51;
      MR_Word Var_52;

      Var_51 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[2]), MaybeVars_16);
      Var_52 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeGoal_18);
      Specs_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_51, Var_52);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeVarsAndGoal_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_24));
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
      MR_Word Context_30;
      MR_Word SymName_15;
      MR_Word Args_28;

      Context_30 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_6);
      mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Term_6, &ArgsTerm_14);
      succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgsTerm_14, &SymName_15, &Args_28);
      if (succeeded)
        {
          Goal_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Goal_16, 0) = ((MR_Box) (Context_30));
          MR_hl_field(MR_mktag(1), Goal_16, 1) = ((MR_Box) (SymName_15));
          MR_hl_field(MR_mktag(1), Goal_16, 2) = ((MR_Box) (Args_28));
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
          MR_hl_field(MR_mktag(1), Goal_16, 0) = ((MR_Box) (Context_30));
          MR_hl_field(MR_mktag(1), Goal_16, 1) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[6]));
          MR_hl_field(MR_mktag(1), Goal_16, 2) = ((MR_Box) (Var_24));
          MR_hl_field(MR_mktag(1), Goal_16, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_16));
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
      *MaybeComponentsContexts_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_3[5]));
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
          MR_hl_field(MR_mktag(1), Spec_22, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[310])));
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
          MR_hl_field(MR_mktag(1), Spec_58, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[312])));
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

    parse_tree__parse_goal__IntroducedFrom__pred__parse_atomic_component__2359__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_120);
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

                ContextPieces_18 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[327])));
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
                  MR_hl_field(MR_mktag(1), Pieces_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[331])));
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
                MR_hl_field(MR_mktag(1), Spec_106, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[310])));
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
          MR_hl_field(MR_mktag(1), Spec_114, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[310])));
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
        MR_hl_field(MR_mktag(1), Spec_116, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[312])));
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
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[317])));
        }
        {
          Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[352])));
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
        MR_hl_field(MR_mktag(1), Spec_53, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[321])));
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
      *MaybeComponentsContexts_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_3[4]));
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
          MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[373])));
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
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[165])));
          }
          {
            Pieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[352])));
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
              MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[169])));
            }
            {
              Pieces_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_242, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[352])));
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
                  MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[171])));
                }
                {
                  Pieces_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_250, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[366])));
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
                MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[174])));
              }
              {
                Pieces_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_255, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[352])));
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
                    MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[178])));
                  }
                  {
                    MutablePieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MutablePieces_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[357])));
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
                    MR_hl_field(MR_mktag(1), Var_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[181])));
                  }
                  {
                    VarPieces_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), VarPieces_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[372])));
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
                  MR_hl_field(MR_mktag(1), Var_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[189])));
                }
                {
                  Pieces_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_272, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[352])));
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
                MR_hl_field(MR_mktag(1), Pieces_280, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[373])));
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
        MR_hl_field(MR_mktag(1), Pieces_298, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[373])));
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
              MR_hl_field(MR_mktag(1), Spec_67, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[337])));
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
              MR_hl_field(MR_mktag(1), Spec_65, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[340])));
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
              MR_hl_field(MR_mktag(1), Spec_18, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[343])));
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
                MR_hl_field(MR_mktag(1), Spec_127, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[345])));
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
                MR_hl_field(MR_mktag(1), Spec_80, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[347])));
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
                MR_hl_field(MR_mktag(1), Spec_133, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[349])));
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
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[371])));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[370])));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
        }
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[369])));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
        }
        {
          Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[368])));
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
              MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[171])));
            }
            {
              Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[366])));
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
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[174])));
          }
          {
            Pieces_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[352])));
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
          MR_hl_field(MR_mktag(1), Pieces_96, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[367])));
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
        MR_hl_field(MR_mktag(1), Pieces_98, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[367])));
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
          MR_hl_field(MR_mktag(1), Spec_19, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[308])));
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
                MR_hl_field(MR_mktag(1), Spec_28, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[256])));
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
                MR_hl_field(MR_mktag(1), Spec_74, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[260])));
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
                MR_hl_field(MR_mktag(1), Spec_80, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[258])));
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
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[159])));
        }
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[365])));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[364])));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
        }
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[352])));
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
          MR_hl_field(MR_mktag(1), Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 4U));
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
    MR_Word Var_25;
    MR_String Var_26;
    MR_Word Var_27;

    if (succeeded)
    {
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 0))));
      Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 1))));
      succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
          succeeded = (strcmp(Var_26, (MR_String) "[]") == 0);
        }
      }
    }
    if (succeeded)
      *MaybeWarnings_12 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_3[2]));
    else
    {
      MR_Word HeadTerm_14;
      MR_Word TailTerm_15;
      MR_Word Var_29;
      MR_String Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;

      succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 0))));
        Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_30 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 0))));
          succeeded = (strcmp(Var_30, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 0))));
              Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 1))));
              succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TailTerm_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 0))));
                Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 1))));
                succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word MaybeHeadWarning_17;
        MR_Word MaybeTailWarnings_18;
        MR_Integer Var_34;
        MR_Word HeadWarning_19;
        MR_Word TailWarnings_20;

        parse_tree__parse_goal__parse_warning_6_p_0(VarSet_7, HeadTerm_14, ScopeFunctor_9, ContextPieces_10, WarningNum_11, &MaybeHeadWarning_17);
        Var_34 = (MR_Integer) ((MR_Unsigned) WarningNum_11 + (MR_Unsigned) 1);
        parse_tree__parse_goal__parse_warnings_6_p_0(VarSet_7, TailTerm_15, ScopeFunctor_9, ContextPieces_10, Var_34, &MaybeTailWarnings_18);
        succeeded = ((MR_tag((MR_Word) MaybeHeadWarning_17)) == (MR_Integer) 1);
        if (succeeded)
        {
          HeadWarning_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHeadWarning_17, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeTailWarnings_18)) == (MR_Integer) 1);
          if (succeeded)
            TailWarnings_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTailWarnings_18, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word Var_36;

          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (HeadWarning_19));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (TailWarnings_20));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeWarnings_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_36));
          }
        }
        else
        {
          MR_Word Specs_21;
          MR_Word Var_37;
          MR_Word Var_38;

          Var_37 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), MaybeHeadWarning_17);
          Var_38 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[3]), MaybeTailWarnings_18);
          Specs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_37, Var_38);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeWarnings_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_21));
          }
        }
      }
      else
      {
        MR_String TermStr_22;
        MR_Word Pieces_23;
        MR_Word Spec_24;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_42;
        MR_Word Var_45;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_53;
        MR_Word Var_56;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_70;
        MR_Word Var_71;

        TermStr_22 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_8);
        Var_39 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_10);
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (ScopeFunctor_9));
        }
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (TermStr_22));
        }
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
          MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[155])));
        }
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[362])));
          MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
        }
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[363])));
          MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
        }
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[360])));
          MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_50));
        }
        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[358])));
          MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_48));
        }
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[352])));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
        }
        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_42));
        }
        Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_39, Var_40);
        Var_70 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_8);
        {
          Spec_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_warnings\'/6"));
          MR_hl_field(MR_mktag(1), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_24, 3) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(1), Spec_24, 4) = ((MR_Box) (Pieces_23));
        }
        {
          Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Spec_24));
          MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeWarnings_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_71));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_warning_6_p_0(
  MR_Word VarSet_7,
  MR_Word Term_8,
  MR_String ScopeFunctor_9,
  MR_Word ContextPieces_10,
  MR_Integer WarningNum_11,
  MR_Word * MaybeWarning_12)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_Integer) 0);
    MR_Word Warning_15;
    MR_String WarningFunctor_13;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 0))));
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 1))));
      succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
        if (succeeded)
        {
          WarningFunctor_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))));
          // binary string simple lookup switch
          ;
          lo_0 = (MR_Integer) 0;
          hi_1 = (MR_Integer) 3;
          do
          {
            mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
            result_3 = MR_strcmp(WarningFunctor_13, ((&parse_tree__parse_goal_vector_common_4[0 + mid_2]))->parse_tree__parse_goal__vector_common_type_4_0__vct_4_f_0);
            if ((result_3 == (MR_Integer) 0))
            {
              Warning_15 = ((&parse_tree__parse_goal_vector_common_4[0 + mid_2]))->parse_tree__parse_goal__vector_common_type_4_0__vct_4_f_1;
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
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeWarning_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Warning_15));
      }
    else
    {
      MR_String TermStr_16;
      MR_Word Pieces_17;
      MR_Word Spec_18;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_24;
      MR_Word Var_27;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_40;
      MR_Word Var_43;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_57;
      MR_Word Var_58;

      TermStr_16 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_8);
      Var_21 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_10);
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (WarningNum_11));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (ScopeFunctor_9));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (TermStr_16));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[157])));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[362])));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[361])));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[360])));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_40));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[359])));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[358])));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
      }
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[352])));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
      }
      Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_21, Var_22);
      Var_57 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_8);
      {
        Spec_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_warning\'/6"));
        MR_hl_field(MR_mktag(1), Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_18, 3) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(1), Spec_18, 4) = ((MR_Box) (Pieces_17));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Spec_18));
        MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeWarning_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_58));
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
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[357])));
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
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[357])));
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
          MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[357])));
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
          MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[357])));
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
            MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[357])));
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
            MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[357])));
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
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[353])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[352])));
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
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[352])));
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
    MR_Word Goal_14;

    switch (MR_tag((MR_Word) Goal0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ProgTerm1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 1))));
          MR_Word ProgTerm2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 2))));
          MR_Word Context_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 0))));
          MR_Word Purity0_107 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 3))) & (MR_Integer) 3);

          switch (Purity0_107) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              Goal_14 = parse_tree__parse_goal__bad_purity_goal_3_f_0(GoalTerm_5, Context_106, Purity_6);
              break;
            case (MR_Integer) 0:
              {
                Goal_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Goal_14, 0) = ((MR_Box) (Context_106));
                MR_hl_field(MR_mktag(0), Goal_14, 1) = ((MR_Box) (ProgTerm1_15));
                MR_hl_field(MR_mktag(0), Goal_14, 2) = ((MR_Box) (ProgTerm2_16));
                MR_hl_field(MR_mktag(0), Goal_14, 3) = (MR_Box) ((MR_Unsigned) (Purity_6));
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Context_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal0_9, (MR_Integer) 0))));
          MR_Word Pred_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal0_9, (MR_Integer) 1))));
          MR_Word Args_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal0_9, (MR_Integer) 2))));
          MR_Word Purity0_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Goal0_9, (MR_Integer) 3))) & (MR_Integer) 3);

          switch (Purity0_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              Goal_14 = parse_tree__parse_goal__bad_purity_goal_3_f_0(GoalTerm_5, Context_10, Purity_6);
              break;
            case (MR_Integer) 0:
              {
                Goal_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Goal_14, 0) = ((MR_Box) (Context_10));
                MR_hl_field(MR_mktag(1), Goal_14, 1) = ((MR_Box) (Pred_11));
                MR_hl_field(MR_mktag(1), Goal_14, 2) = ((MR_Box) (Args_12));
                MR_hl_field(MR_mktag(1), Goal_14, 3) = (MR_Box) ((MR_Unsigned) (Purity_6));
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_105;

          Var_105 = parse_tree__prog_item__get_goal_context_1_f_0(Goal0_9);
          Goal_14 = parse_tree__parse_goal__bad_purity_goal_3_f_0(GoalTerm_5, Var_105, Purity_6);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_105;

          Var_105 = parse_tree__prog_item__get_goal_context_1_f_0(Goal0_9);
          Goal_14 = parse_tree__parse_goal__bad_purity_goal_3_f_0(GoalTerm_5, Var_105, Purity_6);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeGoal_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_14));
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
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[356])));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[355])));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[352])));
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
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[354])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[352])));
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
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[354])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[352])));
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
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[353])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[352])));
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
