/*
** Automatically generated from `parse_goal.m'
** by the Mercury compiler,
** version rotd-2019-01-27
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


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
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
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "solutions.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"



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
parse_tree__parse_goal__IntroducedFrom__pred__parse_atomic_component__2362__1_2_p_0(
  MR_Word HeadVar__1_139,
  MR_Word * HeadVar__2_140);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__346__2_2_p_0(
  MR_Word HeadVar__1_2562,
  MR_Word * HeadVar__2_2563);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__345__2_2_p_0(
  MR_Word HeadVar__1_2556,
  MR_Word * HeadVar__2_2557);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__768__1_2_p_0(
  MR_Word HeadVar__1_1480,
  MR_Word * HeadVar__2_1481);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__767__1_2_p_0(
  MR_Word HeadVar__1_1476,
  MR_Word * HeadVar__2_1477);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__766__1_2_p_0(
  MR_Word HeadVar__1_1472,
  MR_Word * HeadVar__2_1473);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__765__1_2_p_0(
  MR_Word HeadVar__1_1466,
  MR_Word * HeadVar__2_1467);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__805__1_2_p_0(
  MR_Word HeadVar__1_1503,
  MR_Word * HeadVar__2_1504);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__804__1_2_p_0(
  MR_Word HeadVar__1_1499,
  MR_Word * HeadVar__2_1500);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__803__1_2_p_0(
  MR_Word HeadVar__1_1495,
  MR_Word * HeadVar__2_1496);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__802__1_2_p_0(
  MR_Word HeadVar__1_1489,
  MR_Word * HeadVar__2_1490);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__346__1_2_p_0(
  MR_Word HeadVar__1_1432,
  MR_Word * HeadVar__2_1433);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__345__1_2_p_0(
  MR_Word HeadVar__1_1426,
  MR_Word * HeadVar__2_1427);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__1314__1_2_p_0(
  MR_Word HeadVar__1_62,
  MR_Word * HeadVar__2_63);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__1313__1_2_p_0(
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


static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_1[413][2];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_2[20][3];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_3[45][1];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_4[2][6];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_5[1][5];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_6[2][4];




static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_1[413][2] = {
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
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[3])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 367 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[4])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 368 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[5])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 369 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[6])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 370 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the argument of"))
  },
  /* row 371 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: invalid try goal parameter"))
  },
  /* row 372 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 373 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "try"))
  },
  /* row 374 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "operator"))
  },
  /* row 375 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be followed by a list of try parameters;"))
  },
  /* row 376 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[8])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 377 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[9])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 378 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[10])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 379 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[11])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 380 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[12])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 381 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[13])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 382 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the second argument of"))
  },
  /* row 383 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: invalid trace goal parameter"))
  },
  /* row 384 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[15])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 385 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[16])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 386 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[17])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 387 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 388 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[21])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 389 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[22])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 390 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[23])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 391 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[24])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 392 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[25])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 393 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[26])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 394 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[27])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 395 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[28])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 396 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a"))
  },
  /* row 397 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[29])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 398 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[30])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 399 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[32])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 400 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[33])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 401 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[34])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 402 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[35])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 403 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[37])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 404 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[38])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 405 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[39])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 406 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[40])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 407 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[41])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 408 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[42])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 409 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: invalid compile_time parameter"))
  },
  /* row 410 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[43])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 411 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[44])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 412 */
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
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_atomic_component_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_some_vars_goal_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_some_vars_goal_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_non_call_goal_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_non_call_goal_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_non_call_goal_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_non_call_goal_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_non_call_goal_7_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_non_call_goal_7_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_non_call_goal_7_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_non_call_goal_7_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_non_call_goal_7_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_non_call_goal_7_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_non_call_goal_7_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_non_call_goal_7_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[1])),
    ((MR_Box) (parse_tree__parse_goal__parse_trace_runtime_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_3[45][1] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[256])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[258])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[260])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[308])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[337])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[340])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[343])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[345])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[347])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[349])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[321])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[310])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[312])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "call"))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_1[387]))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[351])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[271])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[276])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[292])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[306])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[298])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[288])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[50])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[64])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[77])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "else"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[86])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[102])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[108])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[112])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "then"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[139])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[195])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[199])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[206])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[219])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[221])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[246])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[248])))
  },
};

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_4[2][6] = {
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

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_goal__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_6[2][4] = {
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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
parse_tree__parse_goal__IntroducedFrom__pred__parse_atomic_component__2362__1_2_p_0(
  MR_Word HeadVar__1_139,
  MR_Word * HeadVar__2_140)
{
  {
    mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_139, HeadVar__2_140);
  }
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__346__2_2_p_0(
  MR_Word HeadVar__1_2562,
  MR_Word * HeadVar__2_2563)
{
  {
    mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_2562, HeadVar__2_2563);
  }
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__345__2_2_p_0(
  MR_Word HeadVar__1_2556,
  MR_Word * HeadVar__2_2557)
{
  {
    mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_2556, HeadVar__2_2557);
  }
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__768__1_2_p_0(
  MR_Word HeadVar__1_1480,
  MR_Word * HeadVar__2_1481)
{
  {
    mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1480, HeadVar__2_1481);
  }
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__767__1_2_p_0(
  MR_Word HeadVar__1_1476,
  MR_Word * HeadVar__2_1477)
{
  {
    mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1476, HeadVar__2_1477);
  }
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__766__1_2_p_0(
  MR_Word HeadVar__1_1472,
  MR_Word * HeadVar__2_1473)
{
  {
    mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1472, HeadVar__2_1473);
  }
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__765__1_2_p_0(
  MR_Word HeadVar__1_1466,
  MR_Word * HeadVar__2_1467)
{
  {
    mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1466, HeadVar__2_1467);
  }
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__805__1_2_p_0(
  MR_Word HeadVar__1_1503,
  MR_Word * HeadVar__2_1504)
{
  {
    mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1503, HeadVar__2_1504);
  }
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__804__1_2_p_0(
  MR_Word HeadVar__1_1499,
  MR_Word * HeadVar__2_1500)
{
  {
    mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1499, HeadVar__2_1500);
  }
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__803__1_2_p_0(
  MR_Word HeadVar__1_1495,
  MR_Word * HeadVar__2_1496)
{
  {
    mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1495, HeadVar__2_1496);
  }
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__802__1_2_p_0(
  MR_Word HeadVar__1_1489,
  MR_Word * HeadVar__2_1490)
{
  {
    mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1489, HeadVar__2_1490);
  }
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__346__1_2_p_0(
  MR_Word HeadVar__1_1432,
  MR_Word * HeadVar__2_1433)
{
  {
    mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1432, HeadVar__2_1433);
  }
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__345__1_2_p_0(
  MR_Word HeadVar__1_1426,
  MR_Word * HeadVar__2_1427)
{
  {
    mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1426, HeadVar__2_1427);
  }
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__1314__1_2_p_0(
  MR_Word HeadVar__1_62,
  MR_Word * HeadVar__2_63)
{
  {
    mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_62, HeadVar__2_63);
  }
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__1313__1_2_p_0(
  MR_Word HeadVar__1_56,
  MR_Word * HeadVar__2_57)
{
  {
    mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_56, HeadVar__2_57);
  }
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
          MR_Word TypeCtorInfo_125_125;
          MR_Word TypeInfo_130_130;
          MR_Word SubFunctor_12;
          MR_Word EnvVarChars_15;
          MR_Word Var_22;
          MR_Word Var_23;
          MR_Word Var_24;
          MR_Word Var_129;
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
                TypeCtorInfo_125_125 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0);
                mercury__list__filter_4_p_0(TypeCtorInfo_125_125, Var_23, EnvVarChars_15, &Var_16, &Var_129);
                TypeInfo_130_130 = (MR_Word) (&parse_tree__parse_goal_scalar_common_1[240]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_130_130, ((MR_Box) (Var_24)), ((MR_Box) (Var_129)));
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
            MR_Word Var_38;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_45;

            Var_40 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubTerm_11);
            {
              Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (Var_40));
              MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[410])));
            }
            {
              Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
              MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_19, 2) = ((MR_Box) (Var_38));
            }
            {
              Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Spec_19));
              MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeRuntime_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
            }
          }
        }
        else
        {
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_66;
          MR_Word Spec_118;

          {
            Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (TermContext_9));
            MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[411])));
          }
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
            MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_118 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_118, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_118, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_118, 2) = ((MR_Box) (Var_60));
          }
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Spec_118));
            MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeRuntime_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_66));
          }
        }
      }
      else
      {
        MR_String TermStr_20;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_94;
        MR_Word Pieces_119;
        MR_Word Spec_120;

        TermStr_20 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
        {
          Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (TermStr_20));
        }
        {
          Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
          MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[254])));
        }
        {
          Pieces_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[412])));
          MR_hl_field(MR_mktag(1), Pieces_119, 1) = ((MR_Box) (Var_70));
        }
        {
          Var_91 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (Pieces_119));
        }
        {
          Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Var_91));
          MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (TermContext_9));
          MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (Var_90));
        }
        {
          Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
          MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_120 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_120, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_120, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_120, 2) = ((MR_Box) (Var_88));
        }
        {
          Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Spec_120));
          MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeRuntime_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_94));
        }
      }
    }
    else
    {
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word Var_115;
      MR_Word Pieces_121;
      MR_Word Spec_122;
      MR_String TermStr_123;

      TermStr_123 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
      {
        Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_99, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_99, 1) = ((MR_Box) (TermStr_123));
      }
      {
        Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Var_99));
        MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[36])));
      }
      {
        Pieces_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[412])));
        MR_hl_field(MR_mktag(1), Pieces_121, 1) = ((MR_Box) (Var_98));
      }
      Var_110 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
      {
        Var_112 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (Pieces_121));
      }
      {
        Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Var_112));
        MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_109 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_109, 0) = ((MR_Box) (Var_110));
        MR_hl_field(MR_mktag(0), Var_109, 1) = ((MR_Box) (Var_111));
      }
      {
        Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Var_109));
        MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_122 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_122, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_122, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_122, 2) = ((MR_Box) (Var_108));
      }
      {
        Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Spec_122));
        MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeRuntime_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_115));
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
            MR_Word Var_41;
            MR_Word Var_42;
            MR_Word Var_47;

            {
              Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (TermContext_9));
              MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[404])));
            }
            {
              Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
              MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) (Var_41));
            }
            {
              Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Spec_16));
              MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeCompiletime_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_47));
            }
          }
        }
        else
        {
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_68;
          MR_Word Spec_275;

          {
            Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (TermContext_9));
            MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[405])));
          }
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
            MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_275 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_275, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_275, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_275, 2) = ((MR_Box) (Var_62));
          }
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Spec_275));
            MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeCompiletime_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_68));
          }
        }
      }
      else
      {
        succeeded = (strcmp(Atom_10, (MR_String) "grade") == 0);
        if (succeeded)
        {
          MR_Word SubTerm_284;
          MR_Word Var_70;

          succeeded = (SubTerms_8 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SubTerm_284 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_8, (MR_Integer) 0))));
            Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_8, (MR_Integer) 1))));
            succeeded = (Var_70 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            MR_Word TraceGrade_19;
            MR_String GradeName_17;
            MR_Word Var_71;
            MR_Word Var_72;

            succeeded = ((MR_tag((MR_Word) SubTerm_284)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTerm_284, (MR_Integer) 0))));
              Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTerm_284, (MR_Integer) 1))));
              succeeded = (Var_72 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Var_71)) == (MR_Integer) 0);
                if (succeeded)
                {
                  GradeName_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_71, (MR_Integer) 0))));
                  succeeded = parse_tree__prog_data__parse_trace_grade_name_2_p_0(GradeName_17, &TraceGrade_19);
                }
              }
            }
            if (succeeded)
            {
              MR_Word Compiletime_276;

              {
                Compiletime_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Compiletime_276, 0) = (MR_Box) ((MR_Unsigned) (TraceGrade_19));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeCompiletime_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Compiletime_276));
              }
            }
            else
            {
              MR_Word ValidGradeNames_20;
              MR_Word Var_81;
              MR_Word Var_82;
              MR_Word Var_91;
              MR_Word Var_92;
              MR_Word Var_93;
              MR_Word Var_94;
              MR_Word Var_97;
              MR_Word Pieces_277;
              MR_Word Spec_278;

              mercury__solutions__solutions_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[18]), &ValidGradeNames_20);
              Var_82 = parse_tree__error_util__list_to_pieces_1_f_0(ValidGradeNames_20);
              Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_82, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[36])));
              Pieces_277 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[203])), Var_81);
              {
                Var_94 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (Pieces_277));
              }
              {
                Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
                MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (TermContext_9));
                MR_hl_field(MR_mktag(0), Var_92, 1) = ((MR_Box) (Var_93));
              }
              {
                Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
                MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_278 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_278, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_278, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), Spec_278, 2) = ((MR_Box) (Var_91));
              }
              {
                Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Spec_278));
                MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeCompiletime_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_97));
              }
            }
          }
          else
          {
            MR_Word Var_112;
            MR_Word Var_113;
            MR_Word Var_118;
            MR_Word Spec_283;

            {
              Var_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (TermContext_9));
              MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[406])));
            }
            {
              Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Var_113));
              MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_283 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_283, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_283, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_283, 2) = ((MR_Box) (Var_112));
            }
            {
              Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Spec_283));
              MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeCompiletime_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_118));
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
            MR_Word SubTerm_296;
            MR_Word Var_120;

            succeeded = (SubTerms_8 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SubTerm_296 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_8, (MR_Integer) 0))));
              Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_8, (MR_Integer) 1))));
              succeeded = (Var_120 == (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
            {
              MR_Word Level_23;
              MR_String LevelName_21;
              MR_Word Var_121;
              MR_Word Var_122;

              succeeded = ((MR_tag((MR_Word) SubTerm_296)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTerm_296, (MR_Integer) 0))));
                Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTerm_296, (MR_Integer) 1))));
                succeeded = (Var_122 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_121)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    LevelName_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_121, (MR_Integer) 0))));
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
                MR_Word Compiletime_288;

                {
                  Compiletime_288 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Compiletime_288, 0) = (MR_Box) ((MR_Unsigned) (Level_23));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeCompiletime_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Compiletime_288));
                }
              }
              else
              {
                MR_Word Var_148;
                MR_Word Var_149;
                MR_Word Var_154;
                MR_Word Spec_290;

                {
                  Var_149 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_149, 0) = ((MR_Box) (TermContext_9));
                  MR_hl_field(MR_mktag(0), Var_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[407])));
                }
                {
                  Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (Var_149));
                  MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_290 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_290, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_290, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(0), Spec_290, 2) = ((MR_Box) (Var_148));
                }
                {
                  Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (Spec_290));
                  MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeCompiletime_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_154));
                }
              }
            }
            else
            {
              MR_Word Var_169;
              MR_Word Var_170;
              MR_Word Var_175;
              MR_Word Spec_295;

              {
                Var_170 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_170, 0) = ((MR_Box) (TermContext_9));
                MR_hl_field(MR_mktag(0), Var_170, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[408])));
              }
              {
                Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_169, 0) = ((MR_Box) (Var_170));
                MR_hl_field(MR_mktag(1), Var_169, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_295 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_295, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_295, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), Spec_295, 2) = ((MR_Box) (Var_169));
              }
              {
                Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_175, 0) = ((MR_Box) (Spec_295));
                MR_hl_field(MR_mktag(1), Var_175, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeCompiletime_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_175));
              }
            }
          }
          else
          {
            MR_String TermStr_24;
            MR_Word Var_179;
            MR_Word Var_180;
            MR_Word Var_217;
            MR_Word Var_218;
            MR_Word Var_219;
            MR_Word Var_220;
            MR_Word Var_223;
            MR_Word Pieces_300;
            MR_Word Spec_301;

            TermStr_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
            {
              Var_180 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_180, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_180, 1) = ((MR_Box) (TermStr_24));
            }
            {
              Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) (Var_180));
              MR_hl_field(MR_mktag(1), Var_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[239])));
            }
            {
              Pieces_300 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_300, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[409])));
              MR_hl_field(MR_mktag(1), Pieces_300, 1) = ((MR_Box) (Var_179));
            }
            {
              Var_220 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_220, 0) = ((MR_Box) (Pieces_300));
            }
            {
              Var_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_219, 0) = ((MR_Box) (Var_220));
              MR_hl_field(MR_mktag(1), Var_219, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_218 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_218, 0) = ((MR_Box) (TermContext_9));
              MR_hl_field(MR_mktag(0), Var_218, 1) = ((MR_Box) (Var_219));
            }
            {
              Var_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_217, 0) = ((MR_Box) (Var_218));
              MR_hl_field(MR_mktag(1), Var_217, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_301 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_301, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_301, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_301, 2) = ((MR_Box) (Var_217));
            }
            {
              Var_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_223, 0) = ((MR_Box) (Spec_301));
              MR_hl_field(MR_mktag(1), Var_223, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeCompiletime_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_223));
            }
          }
        }
      }
    }
    else
    {
      MR_Word Var_227;
      MR_Word Var_228;
      MR_Word Var_265;
      MR_Word Var_266;
      MR_Word Var_267;
      MR_Word Var_268;
      MR_Word Var_269;
      MR_Word Var_272;
      MR_Word Pieces_310;
      MR_Word Spec_311;
      MR_String TermStr_312;

      TermStr_312 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, Term_5);
      {
        Var_228 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_228, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_228, 1) = ((MR_Box) (TermStr_312));
      }
      {
        Var_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_227, 0) = ((MR_Box) (Var_228));
        MR_hl_field(MR_mktag(1), Var_227, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[239])));
      }
      {
        Pieces_310 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_310, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[409])));
        MR_hl_field(MR_mktag(1), Pieces_310, 1) = ((MR_Box) (Var_227));
      }
      Var_267 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
      {
        Var_269 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_269, 0) = ((MR_Box) (Pieces_310));
      }
      {
        Var_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_268, 0) = ((MR_Box) (Var_269));
        MR_hl_field(MR_mktag(1), Var_268, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_266 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_266, 0) = ((MR_Box) (Var_267));
        MR_hl_field(MR_mktag(0), Var_266, 1) = ((MR_Box) (Var_268));
      }
      {
        Var_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_265, 0) = ((MR_Box) (Var_266));
        MR_hl_field(MR_mktag(1), Var_265, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_311 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_311, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_311, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_311, 2) = ((MR_Box) (Var_265));
      }
      {
        Var_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_272, 0) = ((MR_Box) (Spec_311));
        MR_hl_field(MR_mktag(1), Var_272, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCompiletime_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_272));
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
    MR_Word conv11_HeadVar__2_2563;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__346__2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv11_HeadVar__2_2563);
    *wrapper_arg_2 = ((MR_Box) (conv11_HeadVar__2_2563));
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
    MR_Word conv10_HeadVar__2_2557;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__345__2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv10_HeadVar__2_2557);
    *wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__2_2557));
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
    MR_Word conv9_HeadVar__2_1481;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__768__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv9_HeadVar__2_1481);
    *wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__2_1481));
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
    MR_Word conv8_HeadVar__2_1477;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__767__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv8_HeadVar__2_1477);
    *wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_1477));
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
    MR_Word conv7_HeadVar__2_1473;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__766__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv7_HeadVar__2_1473);
    *wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_1473));
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
    MR_Word conv6_HeadVar__2_1467;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__765__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv6_HeadVar__2_1467);
    *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_1467));
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
    MR_Word conv5_HeadVar__2_1504;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__805__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__2_1504);
    *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_1504));
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
    MR_Word conv4_HeadVar__2_1500;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__804__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__2_1500);
    *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_1500));
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
    MR_Word conv3_HeadVar__2_1496;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__803__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_1496);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_1496));
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
    MR_Word conv2_HeadVar__2_1490;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__802__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_1490);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_1490));
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
    MR_Word conv1_HeadVar__2_1433;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__346__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_1433);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_1433));
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
    MR_Word conv0_HeadVar__2_1427;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_non_call_goal__345__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_1427);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_1427));
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
              MR_Word SubGoalTermA_885;
              MR_Word SubGoalTermB_886;
              MR_Word Var_681;
              MR_Word Var_682;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTermA_885 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_681 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_681 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTermB_886 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_681, (MR_Integer) 0))));
                  Var_682 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_681, (MR_Integer) 1))));
                  succeeded = (Var_682 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_VarSet_683_683;
                MR_Word MaybeSubGoalA_878;
                MR_Word MaybeSubGoalB_879;
                MR_Word SubGoalA_875;
                MR_Word SubGoalB_876;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermA_885, ContextPieces_11, &MaybeSubGoalA_878, STATE_VARIABLE_VarSet_0_136, &STATE_VARIABLE_VarSet_683_683);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermB_886, ContextPieces_11, &MaybeSubGoalB_879, STATE_VARIABLE_VarSet_683_683, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybeSubGoalA_878)) == (MR_Integer) 1);
                if (succeeded)
                {
                  SubGoalA_875 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_878, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoalB_879)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoalB_876 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_879, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word Var_685;

                  {
                    Var_685 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_685, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_685, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Var_685, 2) = ((MR_Box) (SubGoalA_875));
                    MR_hl_field(MR_mktag(3), Var_685, 3) = ((MR_Box) (SubGoalB_876));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_685));
                  }
                }
                else
                {
                  MR_Word Var_686;
                  MR_Word Var_687;
                  MR_Word Specs_873;

                  Var_686 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalA_878);
                  Var_687 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalB_879);
                  Specs_873 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_686, Var_687);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_873));
                  }
                }
              }
              else
              {
                MR_Word Var_688;
                MR_Word Spec_882;

                Spec_882 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_688 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_688, 0) = ((MR_Box) (Spec_882));
                  MR_hl_field(MR_mktag(1), Var_688, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_688));
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
              MR_Word Var_690;
              MR_Word Var_691;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTermA_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_690 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_690 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTermB_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_690, (MR_Integer) 0))));
                  Var_691 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_690, (MR_Integer) 1))));
                  succeeded = (Var_691 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoalA_53;
                MR_Word MaybeSubGoalB_54;
                MR_Word STATE_VARIABLE_VarSet_692_692;
                MR_Word SubGoalA_55;
                MR_Word SubGoalB_56;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermA_51, ContextPieces_11, &MaybeSubGoalA_53, STATE_VARIABLE_VarSet_0_136, &STATE_VARIABLE_VarSet_692_692);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermB_52, ContextPieces_11, &MaybeSubGoalB_54, STATE_VARIABLE_VarSet_692_692, STATE_VARIABLE_VarSet_137);
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
                  MR_Word Var_694;

                  {
                    Var_694 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_694, 0) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(2), Var_694, 1) = ((MR_Box) (SubGoalA_55));
                    MR_hl_field(MR_mktag(2), Var_694, 2) = ((MR_Box) (SubGoalB_56));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_694));
                  }
                }
                else
                {
                  MR_Word Var_695;
                  MR_Word Var_696;
                  MR_Word Specs_865;

                  Var_695 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalA_53);
                  Var_696 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalB_54);
                  Specs_865 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_695, Var_696);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_865));
                  }
                }
              }
              else
              {
                MR_Word Var_697;
                MR_Word Spec_868;

                Spec_868 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_697 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_697, 0) = ((MR_Box) (Spec_868));
                  MR_hl_field(MR_mktag(1), Var_697, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_697));
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
              MR_Word SubGoalTermA_932;
              MR_Word SubGoalTermB_933;
              MR_Word Var_660;
              MR_Word Var_661;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTermA_932 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_660 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_660 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTermB_933 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_660, (MR_Integer) 0))));
                  Var_661 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_660, (MR_Integer) 1))));
                  succeeded = (Var_661 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word CondGoalTerm_57;
                MR_Word ThenGoalTerm_58;
                MR_Word Var_662;
                MR_String Var_663;
                MR_Word Var_664;
                MR_Word Var_665;
                MR_Word Var_666;

                succeeded = ((MR_tag((MR_Word) SubGoalTermA_932)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_662 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoalTermA_932, (MR_Integer) 0))));
                  Var_664 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoalTermA_932, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_662)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_663 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_662, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_663, (MR_String) "->") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_664 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        CondGoalTerm_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_664, (MR_Integer) 0))));
                        Var_665 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_664, (MR_Integer) 1))));
                        succeeded = (Var_665 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ThenGoalTerm_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_665, (MR_Integer) 0))));
                          Var_666 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_665, (MR_Integer) 1))));
                          succeeded = (Var_666 == (MR_Word) ((MR_Unsigned) 0U));
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
                  MR_Word STATE_VARIABLE_VarSet_667_667;
                  MR_Word STATE_VARIABLE_VarSet_668_668;
                  MR_Word CondGoal_64;
                  MR_Word ThenGoal_65;
                  MR_Word ElseGoal_66;
                  MR_Word Vars_903;
                  MR_Word StateVars_904;

                  parse_tree__parse_goal__parse_some_vars_goal_5_p_0(CondGoalTerm_57, ContextPieces_11, &MaybeCondGoal_61, STATE_VARIABLE_VarSet_0_136, &STATE_VARIABLE_VarSet_667_667);
                  parse_tree__parse_goal__parse_goal_5_p_0(ThenGoalTerm_58, ContextPieces_11, &MaybeThenGoal_62, STATE_VARIABLE_VarSet_667_667, &STATE_VARIABLE_VarSet_668_668);
                  parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermB_933, ContextPieces_11, &MaybeElseGoal_63, STATE_VARIABLE_VarSet_668_668, STATE_VARIABLE_VarSet_137);
                  succeeded = ((MR_tag((MR_Word) MaybeCondGoal_61)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Vars_903 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_61, (MR_Integer) 0))));
                    StateVars_904 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_61, (MR_Integer) 1))));
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
                    MR_Word Goal_899;

                    {
                      Goal_899 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_899, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), Goal_899, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_899, 2) = ((MR_Box) (Vars_903));
                      MR_hl_field(MR_mktag(3), Goal_899, 3) = ((MR_Box) (StateVars_904));
                      MR_hl_field(MR_mktag(3), Goal_899, 4) = ((MR_Box) (CondGoal_64));
                      MR_hl_field(MR_mktag(3), Goal_899, 5) = ((MR_Box) (ThenGoal_65));
                      MR_hl_field(MR_mktag(3), Goal_899, 6) = ((MR_Box) (ElseGoal_66));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_899));
                    }
                  }
                  else
                  {
                    MR_Word Var_670;
                    MR_Word Var_671;
                    MR_Word Var_672;
                    MR_Word Var_673;
                    MR_Word Specs_900;

                    Var_670 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeCondGoal_61);
                    Var_672 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeThenGoal_62);
                    Var_673 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeElseGoal_63);
                    Var_671 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_672, Var_673);
                    Specs_900 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_670, Var_671);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_900));
                    }
                  }
                }
                else
                {
                  MR_Word STATE_VARIABLE_VarSet_674_674;
                  MR_Word MaybeSubGoalA_914;
                  MR_Word MaybeSubGoalB_915;
                  MR_Word SubGoalA_911;
                  MR_Word SubGoalB_912;

                  parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermA_932, ContextPieces_11, &MaybeSubGoalA_914, STATE_VARIABLE_VarSet_0_136, &STATE_VARIABLE_VarSet_674_674);
                  parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermB_933, ContextPieces_11, &MaybeSubGoalB_915, STATE_VARIABLE_VarSet_674_674, STATE_VARIABLE_VarSet_137);
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoalA_914)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubGoalA_911 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_914, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) MaybeSubGoalB_915)) == (MR_Integer) 1);
                    if (succeeded)
                      SubGoalB_912 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_915, (MR_Integer) 0))));
                  }
                  if (succeeded)
                  {
                    MR_Word Var_676;

                    {
                      Var_676 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_676, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), Var_676, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Var_676, 2) = ((MR_Box) (SubGoalA_911));
                      MR_hl_field(MR_mktag(3), Var_676, 3) = ((MR_Box) (SubGoalB_912));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_676));
                    }
                  }
                  else
                  {
                    MR_Word Var_677;
                    MR_Word Var_678;
                    MR_Word Specs_909;

                    Var_677 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalA_914);
                    Var_678 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalB_915);
                    Specs_909 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_677, Var_678);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_909));
                    }
                  }
                }
              }
              else
              {
                MR_Word Var_679;
                MR_Word Spec_926;

                Spec_926 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_679 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_679, 0) = ((MR_Box) (Spec_926));
                  MR_hl_field(MR_mktag(1), Var_679, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_679));
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
              MR_Word TermA_1076;
              MR_Word Var_257;
              MR_Word Var_258;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TermA_1076 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_257 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_257 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  TermB_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_257, (MR_Integer) 0))));
                  Var_258 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_257, (MR_Integer) 1))));
                  succeeded = (Var_258 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeGoalA_90;
                MR_Word MaybeGoalB_91;
                MR_Word STATE_VARIABLE_VarSet_259_259;
                MR_Word GoalA_92;
                MR_Word GoalB_93;

                parse_tree__parse_goal__parse_goal_5_p_0(TermA_1076, ContextPieces_11, &MaybeGoalA_90, STATE_VARIABLE_VarSet_0_136, &STATE_VARIABLE_VarSet_259_259);
                parse_tree__parse_goal__parse_goal_5_p_0(TermB_89, ContextPieces_11, &MaybeGoalB_91, STATE_VARIABLE_VarSet_259_259, STATE_VARIABLE_VarSet_137);
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
                  MR_Word Goal_1066;

                  if ((strcmp(Functor_8, (MR_String) "<=") == 0))
                    {
                      Goal_1066 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1066, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                      MR_hl_field(MR_mktag(3), Goal_1066, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1066, 2) = ((MR_Box) (GoalB_93));
                      MR_hl_field(MR_mktag(3), Goal_1066, 3) = ((MR_Box) (GoalB_93));
                    }
                  else
                  if ((strcmp(Functor_8, (MR_String) "=>") == 0))
                    {
                      Goal_1066 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1066, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                      MR_hl_field(MR_mktag(3), Goal_1066, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1066, 2) = ((MR_Box) (GoalA_92));
                      MR_hl_field(MR_mktag(3), Goal_1066, 3) = ((MR_Box) (GoalB_93));
                    }
                  else
                    {
                      Goal_1066 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1066, 0) = ((MR_Box) ((MR_Unsigned) 19U));
                      MR_hl_field(MR_mktag(3), Goal_1066, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1066, 2) = ((MR_Box) (GoalA_92));
                      MR_hl_field(MR_mktag(3), Goal_1066, 3) = ((MR_Box) (GoalB_93));
                    }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1066));
                  }
                }
                else
                {
                  MR_Word Var_262;
                  MR_Word Var_263;
                  MR_Word Specs_1067;

                  Var_262 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeGoalA_90);
                  Var_263 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeGoalB_91);
                  Specs_1067 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_262, Var_263);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1067));
                  }
                }
              }
              else
              {
                MR_Word Var_264;
                MR_Word Spec_1072;

                Spec_1072 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_264, 0) = ((MR_Box) (Spec_1072));
                  MR_hl_field(MR_mktag(1), Var_264, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_264));
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
                MR_Word TermA_1407;
                MR_Word TermB_1408;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermA0_134, &TermA_1407);
                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermB0_135, &TermB_1408);
                {
                  Var_140 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_140, 0) = ((MR_Box) (Context_10));
                  MR_hl_field(MR_mktag(0), Var_140, 1) = ((MR_Box) (TermA_1407));
                  MR_hl_field(MR_mktag(0), Var_140, 2) = ((MR_Box) (TermB_1408));
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
                MR_Word Spec_1409;

                Spec_1409 = parse_tree__parse_goal__should_have_two_terms_infix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (Spec_1409));
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
              MR_Word SubGoalTerm_832;
              MR_Word Var_735;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_832 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_735 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_735 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_829;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_832, ContextPieces_11, &MaybeSubGoal_829, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                if (((MR_tag((MR_Word) MaybeSubGoal_829)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_829;
                else
                {
                  MR_Word Var_737;
                  MR_Word SubGoal_827 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_829, (MR_Integer) 0))));

                  {
                    Var_737 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_737, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), Var_737, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Var_737, 2) = ((MR_Box) (SubGoal_827));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_737));
                  }
                }
              }
              else
              {
                MR_Word Var_738;
                MR_Word Spec_831;

                Spec_831 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_738 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_738, 0) = ((MR_Box) (Spec_831));
                  MR_hl_field(MR_mktag(1), Var_738, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_738));
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
              MR_Word SubGoalTerm_851;
              MR_Word Var_721;
              MR_Word Var_722;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                QVarsTerm_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_721 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_721 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_851 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_721, (MR_Integer) 0))));
                  Var_722 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_721, (MR_Integer) 1))));
                  succeeded = (Var_722 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word VarsContextPieces_40;
                MR_Word MaybeVars_41;
                MR_Word Var_723;
                MR_Word MaybeSubGoal_845;
                MR_Word GenericVarSet_849;
                MR_Word Vars0_42;
                MR_Word StateVars0_43;
                MR_Word SubGoal_842;
                MR_Word Var_725;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_136, &GenericVarSet_849);
                Var_723 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[34])));
                VarsContextPieces_40 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_11, Var_723);
                parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), QVarsTerm_39, GenericVarSet_849, VarsContextPieces_40, &MaybeVars_41);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_851, ContextPieces_11, &MaybeSubGoal_845, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybeVars_41)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_725 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_41, (MR_Integer) 0))));
                  Vars0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_725, (MR_Integer) 0))));
                  StateVars0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_725, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_845)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_842 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_845, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word Vars_44;
                  MR_Word StateVars_45;
                  MR_Word Goal1_46;
                  MR_Word Goal_840;

                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[6]), Vars0_42, &Vars_44);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[7]), StateVars0_43, &StateVars_45);
                  if ((StateVars_45 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal1_46 = SubGoal_842;
                  else
                  {
                    {
                      Goal1_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal1_46, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal1_46, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                      MR_hl_field(MR_mktag(3), Goal1_46, 2) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal1_46, 3) = ((MR_Box) (StateVars_45));
                      MR_hl_field(MR_mktag(3), Goal1_46, 4) = ((MR_Box) (SubGoal_842));
                    }
                  }
                  if ((Vars_44 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal_840 = Goal1_46;
                  else
                  {
                    {
                      Goal_840 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_840, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal_840, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
                      MR_hl_field(MR_mktag(3), Goal_840, 2) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_840, 3) = ((MR_Box) (Vars_44));
                      MR_hl_field(MR_mktag(3), Goal_840, 4) = ((MR_Box) (Goal1_46));
                    }
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_840));
                  }
                }
                else
                {
                  MR_Word Var_730;
                  MR_Word Var_731;
                  MR_Word Specs_841;

                  Var_730 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[2]), MaybeVars_41);
                  Var_731 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_845);
                  Specs_841 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_730, Var_731);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_841));
                  }
                }
              }
              else
              {
                MR_Word Var_733;
                MR_Word Spec_850;

                Spec_850 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of variables", Functor_8);
                {
                  Var_733 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_733, 0) = ((MR_Box) (Spec_850));
                  MR_hl_field(MR_mktag(1), Var_733, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_733));
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
              MR_Word SubGoalTerm_1227;
              MR_Word VarsTerm_1239;
              MR_Word Var_215;
              MR_Word Var_216;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_1239 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_215 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_215 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_1227 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_215, (MR_Integer) 0))));
                  Var_216 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_215, (MR_Integer) 1))));
                  succeeded = (Var_216 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1212;
                MR_Word GenericVarSet_1216;
                MR_Word MaybeVars_1217;
                MR_Word SubGoal_1201;
                MR_Word Vars0_1204;
                MR_Word StateVars0_1205;
                MR_Word DotSVars0_1208;
                MR_Word ColonSVars0_1209;
                MR_Word Var_218;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_136, &GenericVarSet_1216);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_1239, GenericVarSet_1216, ContextPieces_11, &MaybeVars_1217);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1227, ContextPieces_11, &MaybeSubGoal_1212, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybeVars_1217)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_218 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_1217, (MR_Integer) 0))));
                  Vars0_1204 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_218, (MR_Integer) 0))));
                  StateVars0_1205 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_218, (MR_Integer) 1))));
                  DotSVars0_1208 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_218, (MR_Integer) 2))));
                  ColonSVars0_1209 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_218, (MR_Integer) 3))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_1212)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_1201 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1212, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word Goal_1195;
                  MR_Word Vars_1196;
                  MR_Word StateVars_1197;
                  MR_Word DotSVars_1198;
                  MR_Word ColonSVars_1199;

                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[8]), Vars0_1204, &Vars_1196);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[9]), StateVars0_1205, &StateVars_1197);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[10]), DotSVars0_1208, &DotSVars_1198);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[11]), ColonSVars0_1209, &ColonSVars_1199);
                  {
                    Goal_1195 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1195, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                    MR_hl_field(MR_mktag(3), Goal_1195, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1195, 2) = ((MR_Box) (Vars_1196));
                    MR_hl_field(MR_mktag(3), Goal_1195, 3) = ((MR_Box) (StateVars_1197));
                    MR_hl_field(MR_mktag(3), Goal_1195, 4) = ((MR_Box) (DotSVars_1198));
                    MR_hl_field(MR_mktag(3), Goal_1195, 5) = ((MR_Box) (ColonSVars_1199));
                    MR_hl_field(MR_mktag(3), Goal_1195, 6) = ((MR_Box) (SubGoal_1201));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1195));
                  }
                }
                else
                {
                  MR_Word Var_223;
                  MR_Word Var_224;
                  MR_Word Specs_1200;

                  Var_223 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[8]), MaybeVars_1217);
                  Var_224 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_1212);
                  Specs_1200 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_223, Var_224);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1200));
                  }
                }
              }
              else
              {
                MR_Word Var_226;
                MR_Word Spec_1226;

                Spec_1226 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of variables", Functor_8);
                {
                  Var_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_226, 0) = ((MR_Box) (Spec_1226));
                  MR_hl_field(MR_mktag(1), Var_226, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_226));
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
              MR_Word ParamsTerm_1134;
              MR_Word Var_241;
              MR_Word Var_242;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ParamsTerm_1134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_241 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_241 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalsTerm_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_241, (MR_Integer) 0))));
                  Var_242 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_241, (MR_Integer) 1))));
                  succeeded = (Var_242 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoals_103;
                MR_Word GenericVarSet_1125;
                MR_Word MaybeParams_1126;
                MR_Word MainGoal_104;
                MR_Word OrElseGoals_105;
                MR_Word Params_1121;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_136, &GenericVarSet_1125);
                parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_111_109_105_99_95_112_97_114_97_109_115_95_95_91_49_93_95_48_4_p_0(ParamsTerm_1134, GenericVarSet_1125, &MaybeParams_1126);
                parse_tree__parse_goal__parse_atomic_subexpr_4_p_0(SubGoalsTerm_102, &MaybeSubGoals_103, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybeParams_1126)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Params_1121 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeParams_1126, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoals_103)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    MainGoal_104 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoals_103, (MR_Integer) 0))));
                    OrElseGoals_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoals_103, (MR_Integer) 1))));
                  }
                }
                if (succeeded)
                {
                  MR_Word MaybeComponents_1117;

                  parse_tree__parse_goal__convert_atomic_params_3_p_0(ParamsTerm_1134, Params_1121, &MaybeComponents_1117);
                  if (((MR_tag((MR_Word) MaybeComponents_1117)) == (MR_Integer) 0))
                  {
                    MR_Word Specs_1112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeComponents_1117, (MR_Integer) 0))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1112));
                    }
                  }
                  else
                  {
                    MR_Word Outer_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_1117, (MR_Integer) 0))));
                    MR_Word Inner_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_1117, (MR_Integer) 1))));
                    MR_Word MaybeOutputVars_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_1117, (MR_Integer) 2))));
                    MR_Word Goal_1111;

                    {
                      Goal_1111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1111, 0) = ((MR_Box) ((MR_Unsigned) 16U));
                      MR_hl_field(MR_mktag(3), Goal_1111, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1111, 2) = ((MR_Box) (Outer_106));
                      MR_hl_field(MR_mktag(3), Goal_1111, 3) = ((MR_Box) (Inner_107));
                      MR_hl_field(MR_mktag(3), Goal_1111, 4) = ((MR_Box) (MaybeOutputVars_108));
                      MR_hl_field(MR_mktag(3), Goal_1111, 5) = ((MR_Box) (MainGoal_104));
                      MR_hl_field(MR_mktag(3), Goal_1111, 6) = ((MR_Box) (OrElseGoals_105));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1111));
                    }
                  }
                }
                else
                {
                  MR_Word Var_244;
                  MR_Word Var_245;
                  MR_Word Specs_1118;

                  Var_244 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[6]), MaybeParams_1126);
                  Var_245 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[7]), MaybeSubGoals_103);
                  Specs_1118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_244, Var_245);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1118));
                  }
                }
              }
              else
              {
                MR_Word Var_247;
                MR_Word Spec_1129;

                Spec_1129 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of atomic parameters", Functor_8);
                {
                  Var_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_247, 0) = ((MR_Box) (Spec_1129));
                  MR_hl_field(MR_mktag(1), Var_247, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_247));
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
              MR_Word Var_266;
              MR_Word Var_267;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TermA_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_266 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_266 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ArrowTerm_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_266, (MR_Integer) 0))));
                  Var_267 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_266, (MR_Integer) 1))));
                  succeeded = (Var_267 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeCatchAnyExpr_85;
                MR_Word STATE_VARIABLE_VarSet_268_268;

                parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_97_116_99_104_95_97_110_121_95_116_101_114_109_95_95_91_50_93_95_48_6_p_0(ArrowTerm_84, ContextPieces_11, &MaybeCatchAnyExpr_85, STATE_VARIABLE_VarSet_0_136, &STATE_VARIABLE_VarSet_268_268);
                if (((MR_tag((MR_Word) MaybeCatchAnyExpr_85)) == (MR_Integer) 0))
                {
                  *MaybeGoal_12 = (MR_Word) (MaybeCatchAnyExpr_85);
                  *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_268_268;
                }
                else
                {
                  MR_Word CatchAnyExpr_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatchAnyExpr_85, (MR_Integer) 0))));
                  MR_Word TermAArgs_87;
                  MR_Word Var_269;
                  MR_String Var_270;

                  succeeded = ((MR_tag((MR_Word) TermA_83)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_269 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermA_83, (MR_Integer) 0))));
                    TermAArgs_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermA_83, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_269)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_270 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_269, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_270, (MR_String) "catch") == 0);
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word Var_271;

                    {
                      Var_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_271, 0) = ((MR_Box) (CatchAnyExpr_86));
                    }
                    parse_tree__parse_goal__parse_catch_then_try_term_args_7_p_0(TermAArgs_87, Var_271, Context_10, ContextPieces_11, MaybeGoal_12, STATE_VARIABLE_VarSet_268_268, STATE_VARIABLE_VarSet_137);
                  }
                  else
                  {
                    MR_Word Var_274;

                    {
                      Var_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_274, 0) = ((MR_Box) (CatchAnyExpr_86));
                    }
                    parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_101_108_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_52_93_95_48_8_p_0(TermA_83, (MR_Word) ((MR_Unsigned) 0U), Var_274, ContextPieces_11, MaybeGoal_12, STATE_VARIABLE_VarSet_268_268, STATE_VARIABLE_VarSet_137);
                  }
                }
              }
              else
              {
                MR_Word Var_304;
                MR_Word Var_305;
                MR_Word Var_310;
                MR_Word Spec_1058;

                {
                  Var_305 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_305, 0) = ((MR_Box) (Context_10));
                  MR_hl_field(MR_mktag(0), Var_305, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[395])));
                }
                {
                  Var_304 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_304, 0) = ((MR_Box) (Var_305));
                  MR_hl_field(MR_mktag(1), Var_304, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_1058 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_1058, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_1058, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(0), Spec_1058, 2) = ((MR_Box) (Var_304));
                }
                {
                  Var_310 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_310, 0) = ((MR_Box) (Spec_1058));
                  MR_hl_field(MR_mktag(1), Var_310, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_310));
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
              MR_Word SubGoalTerm_815;
              MR_Word Var_740;
              MR_Word Var_741;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                WarningsTerm_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_740 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_740 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_815 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_740, (MR_Integer) 0))));
                  Var_741 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_740, (MR_Integer) 1))));
                  succeeded = (Var_741 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word GenericVarSet_23;
                MR_Word MaybeWarnings_24;
                MR_Word MaybeSubGoal_810;
                MR_Word Warnings_25;
                MR_Word SubGoal_806;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_136, &GenericVarSet_23);
                parse_tree__parse_goal__parse_warnings_6_p_0(GenericVarSet_23, WarningsTerm_22, Functor_8, ContextPieces_11, (MR_Integer) 1, &MaybeWarnings_24);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_815, ContextPieces_11, &MaybeSubGoal_810, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybeWarnings_24)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Warnings_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWarnings_24, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_810)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_806 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_810, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word WarningsContext_26;
                  MR_Word WarningsBag_27;
                  MR_Word WarningsCounts_28;
                  MR_Word NonDuplicateWarnings_29;
                  MR_Word DuplicateSpecs_30;
                  MR_Word Var_744;

                  WarningsContext_26 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), WarningsTerm_22);
                  Var_744 = mercury__bag__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0));
                  mercury__bag__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), Warnings_25, Var_744, &WarningsBag_27);
                  mercury__bag__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), WarningsBag_27, &WarningsCounts_28);
                  parse_tree__parse_goal__generate_warnings_for_duplicate_warnings_5_p_0(WarningsContext_26, ContextPieces_11, WarningsCounts_28, &NonDuplicateWarnings_29, &DuplicateSpecs_30);
                  if ((DuplicateSpecs_30 == (MR_Word) ((MR_Unsigned) 0U)))
                    if ((NonDuplicateWarnings_29 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word Pieces_33;
                      MR_Word Var_745;
                      MR_Word Var_746;
                      MR_Word Var_748;
                      MR_Word Var_751;
                      MR_Word Var_754;
                      MR_Word Var_755;
                      MR_Word Var_767;
                      MR_Word Var_768;
                      MR_Word Var_769;
                      MR_Word Var_770;
                      MR_Word Var_773;
                      MR_Word Spec_795;

                      Var_745 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_11);
                      {
                        Var_755 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), Var_755, 0) = ((MR_Box) (Functor_8));
                      }
                      {
                        Var_754 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_754, 0) = ((MR_Box) (Var_755));
                        MR_hl_field(MR_mktag(1), Var_754, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[54])));
                      }
                      {
                        Var_751 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_751, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[396])));
                        MR_hl_field(MR_mktag(1), Var_751, 1) = ((MR_Box) (Var_754));
                      }
                      {
                        Var_748 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_748, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[352])));
                        MR_hl_field(MR_mktag(1), Var_748, 1) = ((MR_Box) (Var_751));
                      }
                      {
                        Var_746 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_746, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(1), Var_746, 1) = ((MR_Box) (Var_748));
                      }
                      Pieces_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_745, Var_746);
                      {
                        Var_770 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_770, 0) = ((MR_Box) (Pieces_33));
                      }
                      {
                        Var_769 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_769, 0) = ((MR_Box) (Var_770));
                        MR_hl_field(MR_mktag(1), Var_769, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_768 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_768, 0) = ((MR_Box) (WarningsContext_26));
                        MR_hl_field(MR_mktag(0), Var_768, 1) = ((MR_Box) (Var_769));
                      }
                      {
                        Var_767 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_767, 0) = ((MR_Box) (Var_768));
                        MR_hl_field(MR_mktag(1), Var_767, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Spec_795 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Spec_795, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), Spec_795, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(MR_mktag(0), Spec_795, 2) = ((MR_Box) (Var_767));
                      }
                      {
                        Var_773 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_773, 0) = ((MR_Box) (Spec_795));
                        MR_hl_field(MR_mktag(1), Var_773, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        *MaybeGoal_12 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_773));
                      }
                    }
                    else
                    {
                      MR_Word HeadWarning_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonDuplicateWarnings_29, (MR_Integer) 0))));
                      MR_Word TailWarnings_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonDuplicateWarnings_29, (MR_Integer) 1))));
                      MR_Word Goal_794;

                      {
                        Goal_794 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Goal_794, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                        MR_hl_field(MR_mktag(3), Goal_794, 1) = ((MR_Box) (Context_10));
                        MR_hl_field(MR_mktag(3), Goal_794, 2) = (MR_Box) ((MR_Unsigned) (HeadWarning_31));
                        MR_hl_field(MR_mktag(3), Goal_794, 3) = ((MR_Box) (TailWarnings_32));
                        MR_hl_field(MR_mktag(3), Goal_794, 4) = ((MR_Box) (SubGoal_806));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeGoal_12 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_794));
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
                  MR_Word Var_775;
                  MR_Word Var_776;
                  MR_Word Specs_804;

                  Var_775 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[3]), MaybeWarnings_24);
                  Var_776 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_810);
                  Specs_804 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_775, Var_776);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_804));
                  }
                }
              }
              else
              {
                MR_Word Var_778;
                MR_Word Spec_814;

                Spec_814 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of warnings to disable", Functor_8);
                {
                  Var_778 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_778, 0) = ((MR_Box) (Spec_814));
                  MR_hl_field(MR_mktag(1), Var_778, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_778));
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
              MR_Word ElseGoalTerm_1007;
              MR_Word Var_522;
              MR_Word Var_523;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                CondThenTerm_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_522 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_522 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ElseGoalTerm_1007 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_522, (MR_Integer) 0))));
                  Var_523 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_522, (MR_Integer) 1))));
                  succeeded = (Var_523 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word CondContext_69;
                MR_Word CondGoalTerm_989;
                MR_Word ThenGoalTerm_990;
                MR_Word Var_524;
                MR_String Var_525;
                MR_Word Var_526;
                MR_Word Var_527;
                MR_Word Var_528;
                MR_String Var_529;
                MR_Word Var_530;
                MR_Word Var_531;
                MR_Word Var_532;
                MR_Word Var_533;

                succeeded = ((MR_tag((MR_Word) CondThenTerm_67)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_524 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_67, (MR_Integer) 0))));
                  Var_526 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_67, (MR_Integer) 1))));
                  CondContext_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_67, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) Var_524)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_525 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_524, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_525, (MR_String) "if") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_526 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_527 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_526, (MR_Integer) 0))));
                        Var_533 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_526, (MR_Integer) 1))));
                        succeeded = (Var_533 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) Var_527)) == (MR_Integer) 0);
                          if (succeeded)
                          {
                            Var_528 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_527, (MR_Integer) 0))));
                            Var_530 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_527, (MR_Integer) 1))));
                            succeeded = ((MR_tag((MR_Word) Var_528)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Var_529 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_528, (MR_Integer) 0))));
                              succeeded = (strcmp(Var_529, (MR_String) "then") == 0);
                              if (succeeded)
                              {
                                succeeded = (Var_530 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  CondGoalTerm_989 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_530, (MR_Integer) 0))));
                                  Var_531 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_530, (MR_Integer) 1))));
                                  succeeded = (Var_531 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    ThenGoalTerm_990 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_531, (MR_Integer) 0))));
                                    Var_532 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_531, (MR_Integer) 1))));
                                    succeeded = (Var_532 == (MR_Word) ((MR_Unsigned) 0U));
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
                  MR_Word STATE_VARIABLE_VarSet_534_534;
                  MR_Word STATE_VARIABLE_VarSet_535_535;
                  MR_Word MaybeCondGoal_962;
                  MR_Word MaybeThenGoal_963;
                  MR_Word MaybeElseGoal_964;
                  MR_Word Vars_953;
                  MR_Word StateVars_954;
                  MR_Word CondGoal_955;
                  MR_Word ThenGoal_956;
                  MR_Word ElseGoal_957;

                  parse_tree__parse_goal__parse_some_vars_goal_5_p_0(CondGoalTerm_989, ContextPieces_11, &MaybeCondGoal_962, STATE_VARIABLE_VarSet_0_136, &STATE_VARIABLE_VarSet_534_534);
                  parse_tree__parse_goal__parse_goal_5_p_0(ThenGoalTerm_990, ContextPieces_11, &MaybeThenGoal_963, STATE_VARIABLE_VarSet_534_534, &STATE_VARIABLE_VarSet_535_535);
                  parse_tree__parse_goal__parse_goal_5_p_0(ElseGoalTerm_1007, ContextPieces_11, &MaybeElseGoal_964, STATE_VARIABLE_VarSet_535_535, STATE_VARIABLE_VarSet_137);
                  succeeded = ((MR_tag((MR_Word) MaybeCondGoal_962)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Vars_953 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_962, (MR_Integer) 0))));
                    StateVars_954 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_962, (MR_Integer) 1))));
                    CondGoal_955 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_962, (MR_Integer) 2))));
                    succeeded = ((MR_tag((MR_Word) MaybeThenGoal_963)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      ThenGoal_956 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThenGoal_963, (MR_Integer) 0))));
                      succeeded = ((MR_tag((MR_Word) MaybeElseGoal_964)) == (MR_Integer) 1);
                      if (succeeded)
                        ElseGoal_957 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElseGoal_964, (MR_Integer) 0))));
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word Goal_949;

                    {
                      Goal_949 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_949, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), Goal_949, 1) = ((MR_Box) (CondContext_69));
                      MR_hl_field(MR_mktag(3), Goal_949, 2) = ((MR_Box) (Vars_953));
                      MR_hl_field(MR_mktag(3), Goal_949, 3) = ((MR_Box) (StateVars_954));
                      MR_hl_field(MR_mktag(3), Goal_949, 4) = ((MR_Box) (CondGoal_955));
                      MR_hl_field(MR_mktag(3), Goal_949, 5) = ((MR_Box) (ThenGoal_956));
                      MR_hl_field(MR_mktag(3), Goal_949, 6) = ((MR_Box) (ElseGoal_957));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_949));
                    }
                  }
                  else
                  {
                    MR_Word Var_537;
                    MR_Word Var_538;
                    MR_Word Var_539;
                    MR_Word Var_540;
                    MR_Word Specs_950;

                    Var_537 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeCondGoal_962);
                    Var_539 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeThenGoal_963);
                    Var_540 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeElseGoal_964);
                    Var_538 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_539, Var_540);
                    Specs_950 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_537, Var_538);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_950));
                    }
                  }
                }
                else
                {
                  MR_Word ArrowContext_72;
                  MR_Word Var_541;
                  MR_String Var_542;
                  MR_Word Var_543;
                  MR_Word Var_544;
                  MR_Word Var_545;
                  MR_String Var_546;
                  MR_Word Var_547;
                  MR_Word Var_548;
                  MR_Word Var_549;
                  MR_Word Var_550;

                  succeeded = ((MR_tag((MR_Word) CondThenTerm_67)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_541 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_67, (MR_Integer) 0))));
                    Var_543 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_67, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_541)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_542 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_541, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_542, (MR_String) "if") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_543 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_544 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_543, (MR_Integer) 0))));
                          Var_550 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_543, (MR_Integer) 1))));
                          succeeded = (Var_550 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = ((MR_tag((MR_Word) Var_544)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Var_545 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_544, (MR_Integer) 0))));
                              Var_547 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_544, (MR_Integer) 1))));
                              ArrowContext_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_544, (MR_Integer) 2))));
                              succeeded = ((MR_tag((MR_Word) Var_545)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                Var_546 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_545, (MR_Integer) 0))));
                                succeeded = (strcmp(Var_546, (MR_String) "->") == 0);
                                if (succeeded)
                                {
                                  succeeded = (Var_547 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_548 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_547, (MR_Integer) 1))));
                                    succeeded = (Var_548 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (succeeded)
                                    {
                                      Var_549 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_548, (MR_Integer) 1))));
                                      succeeded = (Var_549 == (MR_Word) ((MR_Unsigned) 0U));
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
                    MR_Word Var_573;
                    MR_Word Var_574;
                    MR_Word Var_579;
                    MR_Word Spec_968;

                    {
                      Var_574 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_574, 0) = ((MR_Box) (ArrowContext_72));
                      MR_hl_field(MR_mktag(0), Var_574, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[397])));
                    }
                    {
                      Var_573 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_573, 0) = ((MR_Box) (Var_574));
                      MR_hl_field(MR_mktag(1), Var_573, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Spec_968 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Spec_968, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), Spec_968, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(0), Spec_968, 2) = ((MR_Box) (Var_573));
                    }
                    {
                      Var_579 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_579, 0) = ((MR_Box) (Spec_968));
                      MR_hl_field(MR_mktag(1), Var_579, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_579));
                    }
                    *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
                  }
                  else
                  {
                    MR_Word ArrowContext_980;
                    MR_Word Var_581;
                    MR_String Var_582;
                    MR_Word Var_583;
                    MR_Word Var_584;
                    MR_Word Var_585;

                    succeeded = ((MR_tag((MR_Word) CondThenTerm_67)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_581 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_67, (MR_Integer) 0))));
                      Var_583 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_67, (MR_Integer) 1))));
                      ArrowContext_980 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_67, (MR_Integer) 2))));
                      succeeded = ((MR_tag((MR_Word) Var_581)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_582 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_581, (MR_Integer) 0))));
                        succeeded = (strcmp(Var_582, (MR_String) "->") == 0);
                        if (succeeded)
                        {
                          succeeded = (Var_583 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_584 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_583, (MR_Integer) 1))));
                            succeeded = (Var_584 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Var_585 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_584, (MR_Integer) 1))));
                              succeeded = (Var_585 == (MR_Word) ((MR_Unsigned) 0U));
                            }
                          }
                        }
                      }
                    }
                    if (succeeded)
                    {
                      MR_Word Var_617;
                      MR_Word Var_618;
                      MR_Word Var_623;
                      MR_Word Spec_974;

                      {
                        Var_618 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_618, 0) = ((MR_Box) (ArrowContext_980));
                        MR_hl_field(MR_mktag(0), Var_618, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[398])));
                      }
                      {
                        Var_617 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_617, 0) = ((MR_Box) (Var_618));
                        MR_hl_field(MR_mktag(1), Var_617, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Spec_974 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Spec_974, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), Spec_974, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(MR_mktag(0), Spec_974, 2) = ((MR_Box) (Var_617));
                      }
                      {
                        Var_623 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_623, 0) = ((MR_Box) (Spec_974));
                        MR_hl_field(MR_mktag(1), Var_623, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        *MaybeGoal_12 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_623));
                      }
                      *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
                    }
                    else
                    {
                      MR_Word FullTerm_74;

                      {
                        FullTerm_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), FullTerm_74, 0) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[31]));
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
                MR_Word Var_652;
                MR_Word Var_653;
                MR_Word Var_658;
                MR_Word Spec_997;

                {
                  Var_653 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_653, 0) = ((MR_Box) (Context_10));
                  MR_hl_field(MR_mktag(0), Var_653, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[399])));
                }
                {
                  Var_652 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_652, 0) = ((MR_Box) (Var_653));
                  MR_hl_field(MR_mktag(1), Var_652, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_997 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_997, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_997, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(0), Spec_997, 2) = ((MR_Box) (Var_652));
                }
                {
                  Var_658 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_658, 0) = ((MR_Box) (Spec_997));
                  MR_hl_field(MR_mktag(1), Var_658, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_658));
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
              MR_Word SubGoalTerm_1390;
              MR_Word Var_146;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1390 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_146 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1384;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1390, ContextPieces_11, &MaybeSubGoal_1384, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                if (((MR_tag((MR_Word) MaybeSubGoal_1384)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1384;
                else
                {
                  MR_Word SubGoal_1374 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1384, (MR_Integer) 0))));
                  MR_Word SubContext_121;
                  MR_Word SymName_122;
                  MR_Word CallArgs_123;
                  MR_Word Purity_1369;

                  succeeded = ((MR_tag((MR_Word) SubGoal_1374)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    SubContext_121 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubGoal_1374, (MR_Integer) 0))));
                    SymName_122 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubGoal_1374, (MR_Integer) 1))));
                    CallArgs_123 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubGoal_1374, (MR_Integer) 2))));
                    Purity_1369 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), SubGoal_1374, (MR_Integer) 3))) & (MR_Integer) 3);
                    {
                      MR_String EventName_124;

                      succeeded = (Purity_1369 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) SymName_122)) == (MR_Integer) 0);
                        if (succeeded)
                          EventName_124 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_122, (MR_Integer) 0))));
                      }
                      if (succeeded)
                      {
                        MR_Word Goal_1366;

                        {
                          Goal_1366 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Goal_1366, 0) = ((MR_Box) ((MR_Unsigned) 20U));
                          MR_hl_field(MR_mktag(3), Goal_1366, 1) = ((MR_Box) (Context_10));
                          MR_hl_field(MR_mktag(3), Goal_1366, 2) = ((MR_Box) (EventName_124));
                          MR_hl_field(MR_mktag(3), Goal_1366, 3) = ((MR_Box) (CallArgs_123));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          *MaybeGoal_12 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1366));
                        }
                      }
                      else
                      {
                        MR_Word STATE_VARIABLE_Specs_169_169;
                        MR_Word STATE_VARIABLE_Specs_190_190;

                        if (((MR_tag((MR_Word) SymName_122)) == (MR_Integer) 1))
                        {
                          MR_Word QualPieces_128;
                          MR_Word QualSpec_129;
                          MR_Word Var_149;
                          MR_Word Var_163;
                          MR_Word Var_164;
                          MR_Word Var_165;
                          MR_Word Var_166;

                          Var_149 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_11);
                          QualPieces_128 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_149, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[91])));
                          {
                            Var_166 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_166, 0) = ((MR_Box) (QualPieces_128));
                          }
                          {
                            Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_165, 0) = ((MR_Box) (Var_166));
                            MR_hl_field(MR_mktag(1), Var_165, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                          {
                            Var_164 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_164, 0) = ((MR_Box) (SubContext_121));
                            MR_hl_field(MR_mktag(0), Var_164, 1) = ((MR_Box) (Var_165));
                          }
                          {
                            Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_163, 0) = ((MR_Box) (Var_164));
                            MR_hl_field(MR_mktag(1), Var_163, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                          {
                            QualSpec_129 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), QualSpec_129, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(MR_mktag(0), QualSpec_129, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                            MR_hl_field(MR_mktag(0), QualSpec_129, 2) = ((MR_Box) (Var_163));
                          }
                          {
                            STATE_VARIABLE_Specs_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_169_169, 0) = ((MR_Box) (QualSpec_129));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_169_169, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                        }
                        else
                          STATE_VARIABLE_Specs_169_169 = (MR_Word) ((MR_Unsigned) 0U);
                        switch (Purity_1369) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 2:
                          case (MR_Integer) 1:
                            {
                              MR_Word PurityPieces_130;
                              MR_Word PuritySpec_131;
                              MR_Word Var_170;
                              MR_Word Var_184;
                              MR_Word Var_185;
                              MR_Word Var_186;
                              MR_Word Var_187;

                              Var_170 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_11);
                              PurityPieces_130 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_170, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[96])));
                              {
                                Var_187 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), Var_187, 0) = ((MR_Box) (PurityPieces_130));
                              }
                              {
                                Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_186, 0) = ((MR_Box) (Var_187));
                                MR_hl_field(MR_mktag(1), Var_186, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                              }
                              {
                                Var_185 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), Var_185, 0) = ((MR_Box) (SubContext_121));
                                MR_hl_field(MR_mktag(0), Var_185, 1) = ((MR_Box) (Var_186));
                              }
                              {
                                Var_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_184, 0) = ((MR_Box) (Var_185));
                                MR_hl_field(MR_mktag(1), Var_184, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                              }
                              {
                                PuritySpec_131 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), PuritySpec_131, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                                MR_hl_field(MR_mktag(0), PuritySpec_131, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                                MR_hl_field(MR_mktag(0), PuritySpec_131, 2) = ((MR_Box) (Var_184));
                              }
                              {
                                STATE_VARIABLE_Specs_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_190_190, 0) = ((MR_Box) (PuritySpec_131));
                                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_190_190, 1) = ((MR_Box) (STATE_VARIABLE_Specs_169_169));
                              }
                            }
                            break;
                          case (MR_Integer) 0:
                            STATE_VARIABLE_Specs_190_190 = STATE_VARIABLE_Specs_169_169;
                            break;
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          *MaybeGoal_12 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_Specs_190_190));
                        }
                      }
                    }
                  }
                  else
                  {
                    MR_Word Var_191;
                    MR_Word Spec_1368;

                    Spec_1368 = parse_tree__parse_goal__should_have_one_call_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                    {
                      Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_191, 0) = ((MR_Box) (Spec_1368));
                      MR_hl_field(MR_mktag(1), Var_191, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_191));
                    }
                  }
                }
              }
              else
              {
                MR_Word Var_193;
                MR_Word Spec_1388;

                Spec_1388 = parse_tree__parse_goal__should_have_one_call_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_193, 0) = ((MR_Box) (Spec_1388));
                  MR_hl_field(MR_mktag(1), Var_193, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_193));
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
              MR_Word Goal_1406;

              {
                Goal_1406 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Goal_1406, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), Goal_1406, 1) = ((MR_Box) (Context_10));
              }
              if ((Args_9 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1406));
                }
              else
              {
                MR_Word Var_144;
                MR_Word Spec_1403;

                Spec_1403 = parse_tree__parse_goal__should_have_no_args_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (Spec_1403));
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
              MR_Word Var_520;
              MR_Word Spec_1038;
              MR_Word ThenContext_75;
              MR_Word ThenGoalTerm_1036;
              MR_Word Var_424;
              MR_Word Var_425;
              MR_String Var_426;
              MR_Word Var_427;
              MR_Word Var_428;
              MR_Word Var_429;
              MR_Word Var_430;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_424 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_430 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_430 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_424)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_425 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_424, (MR_Integer) 0))));
                    Var_427 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_424, (MR_Integer) 1))));
                    ThenContext_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_424, (MR_Integer) 2))));
                    succeeded = ((MR_tag((MR_Word) Var_425)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_426 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_425, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_426, (MR_String) "then") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_427 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_428 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_427, (MR_Integer) 1))));
                          succeeded = (Var_428 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ThenGoalTerm_1036 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_428, (MR_Integer) 0))));
                            Var_429 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_428, (MR_Integer) 1))));
                            succeeded = (Var_429 == (MR_Word) ((MR_Unsigned) 0U));
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
                MR_Word Var_431;
                MR_String Var_432;
                MR_Word Var_433;
                MR_Word Var_434;
                MR_Word Var_435;

                succeeded = ((MR_tag((MR_Word) ThenGoalTerm_1036)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_431 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenGoalTerm_1036, (MR_Integer) 0))));
                  Var_433 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenGoalTerm_1036, (MR_Integer) 1))));
                  SemiColonContext_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenGoalTerm_1036, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) Var_431)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_432 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_431, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_432, (MR_String) ";") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_433 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_434 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_433, (MR_Integer) 1))));
                        succeeded = (Var_434 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_435 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_434, (MR_Integer) 1))));
                          succeeded = (Var_435 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word Var_458;
                  MR_Word Var_459;

                  {
                    Var_459 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_459, 0) = ((MR_Box) (SemiColonContext_78));
                    MR_hl_field(MR_mktag(0), Var_459, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[400])));
                  }
                  {
                    Var_458 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_458, 0) = ((MR_Box) (Var_459));
                    MR_hl_field(MR_mktag(1), Var_458, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_1038 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_1038, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), Spec_1038, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(0), Spec_1038, 2) = ((MR_Box) (Var_458));
                  }
                }
                else
                {
                  MR_Word Var_486;
                  MR_Word Var_487;

                  {
                    Var_487 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_487, 0) = ((MR_Box) (ThenContext_75));
                    MR_hl_field(MR_mktag(0), Var_487, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[401])));
                  }
                  {
                    Var_486 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_486, 0) = ((MR_Box) (Var_487));
                    MR_hl_field(MR_mktag(1), Var_486, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_1038 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_1038, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), Spec_1038, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(0), Spec_1038, 2) = ((MR_Box) (Var_486));
                  }
                }
              }
              else
              {
                MR_Word Var_514;
                MR_Word Var_515;

                {
                  Var_515 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_515, 0) = ((MR_Box) (Context_10));
                  MR_hl_field(MR_mktag(0), Var_515, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[402])));
                }
                {
                  Var_514 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_514, 0) = ((MR_Box) (Var_515));
                  MR_hl_field(MR_mktag(1), Var_514, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_1038 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_1038, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_1038, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(0), Spec_1038, 2) = ((MR_Box) (Var_514));
                }
              }
              {
                Var_520 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_520, 0) = ((MR_Box) (Spec_1038));
                MR_hl_field(MR_mktag(1), Var_520, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeGoal_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_520));
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
              MR_Word Var_784;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_784 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_784 == (MR_Word) ((MR_Unsigned) 0U));
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
                MR_Word Var_786;

                Spec_17 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_786 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_786, 0) = ((MR_Box) (Spec_17));
                  MR_hl_field(MR_mktag(1), Var_786, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_786));
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
              MR_Word SubGoalTerm_1171;
              MR_Word Var_228;
              MR_Word Var_229;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_109 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_228 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_228 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_1171 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_228, (MR_Integer) 0))));
                  Var_229 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_228, (MR_Integer) 1))));
                  succeeded = (Var_229 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1160;
                MR_Word GenericVarSet_1164;
                MR_Word MaybeVars_1165;
                MR_Word DotSVars0_110;
                MR_Word ColonSVars0_111;
                MR_Word SubGoal_1153;
                MR_Word Vars0_1156;
                MR_Word StateVars0_1157;
                MR_Word Var_231;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_136, &GenericVarSet_1164);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_109, GenericVarSet_1164, ContextPieces_11, &MaybeVars_1165);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1171, ContextPieces_11, &MaybeSubGoal_1160, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybeVars_1165)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_231 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_1165, (MR_Integer) 0))));
                  Vars0_1156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_231, (MR_Integer) 0))));
                  StateVars0_1157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_231, (MR_Integer) 1))));
                  DotSVars0_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_231, (MR_Integer) 2))));
                  ColonSVars0_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_231, (MR_Integer) 3))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_1160)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_1153 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1160, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word DotSVars_112;
                  MR_Word ColonSVars_113;
                  MR_Word Vars_1150;
                  MR_Word StateVars_1151;

                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[12]), Vars0_1156, &Vars_1150);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[13]), StateVars0_1157, &StateVars_1151);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[14]), DotSVars0_110, &DotSVars_112);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[15]), ColonSVars0_111, &ColonSVars_113);
                  if ((strcmp(Functor_8, (MR_String) "promise_equivalent_solutions") == 0))
                  {
                    MR_Word Goal_1146;

                    {
                      Goal_1146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1146, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(MR_mktag(3), Goal_1146, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1146, 2) = ((MR_Box) (Vars_1150));
                      MR_hl_field(MR_mktag(3), Goal_1146, 3) = ((MR_Box) (StateVars_1151));
                      MR_hl_field(MR_mktag(3), Goal_1146, 4) = ((MR_Box) (DotSVars_112));
                      MR_hl_field(MR_mktag(3), Goal_1146, 5) = ((MR_Box) (ColonSVars_113));
                      MR_hl_field(MR_mktag(3), Goal_1146, 6) = ((MR_Box) (SubGoal_1153));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1146));
                    }
                  }
                  else
                  {
                    MR_Word Goal_1147;

                    {
                      Goal_1147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1147, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                      MR_hl_field(MR_mktag(3), Goal_1147, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1147, 2) = ((MR_Box) (Vars_1150));
                      MR_hl_field(MR_mktag(3), Goal_1147, 3) = ((MR_Box) (StateVars_1151));
                      MR_hl_field(MR_mktag(3), Goal_1147, 4) = ((MR_Box) (DotSVars_112));
                      MR_hl_field(MR_mktag(3), Goal_1147, 5) = ((MR_Box) (ColonSVars_113));
                      MR_hl_field(MR_mktag(3), Goal_1147, 6) = ((MR_Box) (SubGoal_1153));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1147));
                    }
                  }
                }
                else
                {
                  MR_Word Var_236;
                  MR_Word Var_237;
                  MR_Word Specs_1152;

                  Var_236 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[8]), MaybeVars_1165);
                  Var_237 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_1160);
                  Specs_1152 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_236, Var_237);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1152));
                  }
                }
              }
              else
              {
                MR_Word Var_239;
                MR_Word Spec_1170;

                Spec_1170 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of variables", Functor_8);
                {
                  Var_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_239, 0) = ((MR_Box) (Spec_1170));
                  MR_hl_field(MR_mktag(1), Var_239, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_239));
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
              MR_Word SubGoalTerm_789;
              MR_Word Var_780;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_789 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_780 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_780 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_18;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_789, ContextPieces_11, &MaybeSubGoal_18, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
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
                MR_Word Var_782;
                MR_Word Spec_788;

                Spec_788 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_782 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_782, 0) = ((MR_Box) (Spec_788));
                  MR_hl_field(MR_mktag(1), Var_782, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_782));
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
              MR_Word SubGoalTerm_1546;
              MR_Word Var_1524;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1546 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1524 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1524 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1531;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1546, ContextPieces_11, &MaybeSubGoal_1531, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                if (((MR_tag((MR_Word) MaybeSubGoal_1531)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1531;
                else
                {
                  MR_Word SubGoal_1526 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1531, (MR_Integer) 0))));
                  MR_Word Goal_1527;

                  {
                    Goal_1527 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1527, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), Goal_1527, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1527, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), Goal_1527, 3) = ((MR_Box) (SubGoal_1526));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1527));
                  }
                }
              }
              else
              {
                MR_Word Var_1535;
                MR_Word Spec_1537;

                Spec_1537 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1535 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1535, 0) = ((MR_Box) (Spec_1537));
                  MR_hl_field(MR_mktag(1), Var_1535, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1535));
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
              MR_Word SubGoalTerm_1579;
              MR_Word Var_1557;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1579 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1557 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1557 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1564;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1579, ContextPieces_11, &MaybeSubGoal_1564, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                if (((MR_tag((MR_Word) MaybeSubGoal_1564)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1564;
                else
                {
                  MR_Word SubGoal_1559 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1564, (MR_Integer) 0))));
                  MR_Word Goal_1560;

                  {
                    Goal_1560 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1560, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), Goal_1560, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1560, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), Goal_1560, 3) = ((MR_Box) (SubGoal_1559));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1560));
                  }
                }
              }
              else
              {
                MR_Word Var_1568;
                MR_Word Spec_1570;

                Spec_1570 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1568 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1568, 0) = ((MR_Box) (Spec_1570));
                  MR_hl_field(MR_mktag(1), Var_1568, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1568));
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
              MR_Word SubGoalTerm_1272;
              MR_Word Var_211;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1272 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_211 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_211 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1267;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1272, ContextPieces_11, &MaybeSubGoal_1267, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                if (((MR_tag((MR_Word) MaybeSubGoal_1267)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1267;
                else
                {
                  MR_Word SubGoal_1261 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1267, (MR_Integer) 0))));
                  MR_Word Goal_1262;

                  {
                    Goal_1262 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1262, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(MR_mktag(3), Goal_1262, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1262, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), Goal_1262, 3) = ((MR_Box) (SubGoal_1261));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1262));
                  }
                }
              }
              else
              {
                MR_Word Var_213;
                MR_Word Spec_1271;

                Spec_1271 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_213 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_213, 0) = ((MR_Box) (Spec_1271));
                  MR_hl_field(MR_mktag(1), Var_213, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_213));
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
              MR_Word SubGoalTerm_1612;
              MR_Word Var_1590;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1612 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1590 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1590 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1600;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1612, ContextPieces_11, &MaybeSubGoal_1600, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                if (((MR_tag((MR_Word) MaybeSubGoal_1600)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1600;
                else
                {
                  MR_Word SubGoal_1592 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1600, (MR_Integer) 0))));
                  MR_Word Goal_1593;

                  {
                    Goal_1593 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1593, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(MR_mktag(3), Goal_1593, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1593, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), Goal_1593, 3) = ((MR_Box) (SubGoal_1592));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1593));
                  }
                }
              }
              else
              {
                MR_Word Var_1601;
                MR_Word Spec_1603;

                Spec_1603 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1601 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1601, 0) = ((MR_Box) (Spec_1603));
                  MR_hl_field(MR_mktag(1), Var_1601, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1601));
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
              MR_Word SubGoalTerm_1296;
              MR_Word VarsTerm_1302;
              MR_Word Var_203;
              MR_Word Var_204;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_1302 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_203 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_203 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_1296 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_203, (MR_Integer) 0))));
                  Var_204 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_203, (MR_Integer) 1))));
                  succeeded = (Var_204 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word ProgVarsTerm_115;
                MR_Word MaybePSDCVars_116;
                MR_Word MaybeSubGoal_1291;
                MR_Word PSDCVars0_117;
                MR_Word SubGoal_1288;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_1302, &ProgVarsTerm_115);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_115, STATE_VARIABLE_VarSet_0_136, ContextPieces_11, &MaybePSDCVars_116);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1296, ContextPieces_11, &MaybeSubGoal_1291, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_116)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_117 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_116, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_1291)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_1288 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1291, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_118;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_117, SubGoal_1288, ContextPieces_11, Functor_8, &MaybePODVar_118);
                  if (((MR_tag((MR_Word) MaybePODVar_118)) == (MR_Integer) 0))
                    *MaybeGoal_12 = (MR_Word) (MaybePODVar_118);
                  else
                  {
                    MR_Word PODVar_119 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_118, (MR_Integer) 0))));
                    MR_Word Goal_1284;

                    {
                      Goal_1284 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1284, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(3), Goal_1284, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1284, 2) = ((MR_Box) (PODVar_119));
                      MR_hl_field(MR_mktag(3), Goal_1284, 3) = ((MR_Box) (SubGoal_1288));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1284));
                    }
                  }
                }
                else
                {
                  MR_Word Var_206;
                  MR_Word Var_207;
                  MR_Word Specs_1287;

                  Var_206 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_116);
                  Var_207 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_1291);
                  Specs_1287 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_206, Var_207);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1287));
                  }
                }
              }
              else
              {
                MR_Word Var_209;
                MR_Word Spec_1295;

                Spec_1295 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
                {
                  Var_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_209, 0) = ((MR_Box) (Spec_1295));
                  MR_hl_field(MR_mktag(1), Var_209, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_209));
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
              MR_Word SubGoalTerm_1645;
              MR_Word Var_1623;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1645 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1623 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1623 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1633;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1645, ContextPieces_11, &MaybeSubGoal_1633, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                if (((MR_tag((MR_Word) MaybeSubGoal_1633)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1633;
                else
                {
                  MR_Word SubGoal_1625 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1633, (MR_Integer) 0))));
                  MR_Word Goal_1626;

                  {
                    Goal_1626 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1626, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(MR_mktag(3), Goal_1626, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1626, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), Goal_1626, 3) = ((MR_Box) (SubGoal_1625));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1626));
                  }
                }
              }
              else
              {
                MR_Word Var_1634;
                MR_Word Spec_1636;

                Spec_1636 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1634 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1634, 0) = ((MR_Box) (Spec_1636));
                  MR_hl_field(MR_mktag(1), Var_1634, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1634));
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
              MR_Word SubGoalTerm_1678;
              MR_Word Var_1656;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1678 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1656 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1656 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1666;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1678, ContextPieces_11, &MaybeSubGoal_1666, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                if (((MR_tag((MR_Word) MaybeSubGoal_1666)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1666;
                else
                {
                  MR_Word SubGoal_1658 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1666, (MR_Integer) 0))));
                  MR_Word Goal_1659;

                  {
                    Goal_1659 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1659, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(MR_mktag(3), Goal_1659, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1659, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), Goal_1659, 3) = ((MR_Box) (SubGoal_1658));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1659));
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
              MR_Word SubGoalTerm_1711;
              MR_Word Var_1689;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1711 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1689 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1689 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1699;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1711, ContextPieces_11, &MaybeSubGoal_1699, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                if (((MR_tag((MR_Word) MaybeSubGoal_1699)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1699;
                else
                {
                  MR_Word SubGoal_1691 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1699, (MR_Integer) 0))));
                  MR_Word Goal_1692;

                  {
                    Goal_1692 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1692, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(MR_mktag(3), Goal_1692, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1692, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 7));
                    MR_hl_field(MR_mktag(3), Goal_1692, 3) = ((MR_Box) (SubGoal_1691));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1692));
                  }
                }
              }
              else
              {
                MR_Word Var_1700;
                MR_Word Spec_1702;

                Spec_1702 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1700 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1700, 0) = ((MR_Box) (Spec_1702));
                  MR_hl_field(MR_mktag(1), Var_1700, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1700));
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
              MR_Word SubGoalTerm_1744;
              MR_Word Var_1722;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1744 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1722 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1722 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1732;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1744, ContextPieces_11, &MaybeSubGoal_1732, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                if (((MR_tag((MR_Word) MaybeSubGoal_1732)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1732;
                else
                {
                  MR_Word SubGoal_1724 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1732, (MR_Integer) 0))));
                  MR_Word Goal_1725;

                  {
                    Goal_1725 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1725, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(MR_mktag(3), Goal_1725, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1725, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), Goal_1725, 3) = ((MR_Box) (SubGoal_1724));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1725));
                  }
                }
              }
              else
              {
                MR_Word Var_1733;
                MR_Word Spec_1735;

                Spec_1735 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1733 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1733, 0) = ((MR_Box) (Spec_1735));
                  MR_hl_field(MR_mktag(1), Var_1733, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1733));
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
              MR_Word SubGoalTerm_1777;
              MR_Word Var_1755;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1777 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1755 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1755 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1765;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1777, ContextPieces_11, &MaybeSubGoal_1765, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                if (((MR_tag((MR_Word) MaybeSubGoal_1765)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1765;
                else
                {
                  MR_Word SubGoal_1757 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1765, (MR_Integer) 0))));
                  MR_Word Goal_1758;

                  {
                    Goal_1758 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1758, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(MR_mktag(3), Goal_1758, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1758, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), Goal_1758, 3) = ((MR_Box) (SubGoal_1757));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1758));
                  }
                }
              }
              else
              {
                MR_Word Var_1766;
                MR_Word Spec_1768;

                Spec_1768 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1766 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1766, 0) = ((MR_Box) (Spec_1768));
                  MR_hl_field(MR_mktag(1), Var_1766, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1766));
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
              MR_Word SubGoalTerm_1810;
              MR_Word Var_1788;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_1810 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1788 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1788 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1798;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1810, ContextPieces_11, &MaybeSubGoal_1798, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                if (((MR_tag((MR_Word) MaybeSubGoal_1798)) == (MR_Integer) 0))
                  *MaybeGoal_12 = MaybeSubGoal_1798;
                else
                {
                  MR_Word SubGoal_1790 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1798, (MR_Integer) 0))));
                  MR_Word Goal_1791;

                  {
                    Goal_1791 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Goal_1791, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(MR_mktag(3), Goal_1791, 1) = ((MR_Box) (Context_10));
                    MR_hl_field(MR_mktag(3), Goal_1791, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), Goal_1791, 3) = ((MR_Box) (SubGoal_1790));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1791));
                  }
                }
              }
              else
              {
                MR_Word Var_1799;
                MR_Word Spec_1801;

                Spec_1801 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_1799 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1799, 0) = ((MR_Box) (Spec_1801));
                  MR_hl_field(MR_mktag(1), Var_1799, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1799));
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
              MR_Word SubGoalTerm_1339;
              MR_Word VarsTerm_1345;
              MR_Word Var_195;
              MR_Word Var_196;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_1345 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_195 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_195 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_1339 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_195, (MR_Integer) 0))));
                  Var_196 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_195, (MR_Integer) 1))));
                  succeeded = (Var_196 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1328;
                MR_Word ProgVarsTerm_1332;
                MR_Word MaybePSDCVars_1333;
                MR_Word SubGoal_1321;
                MR_Word PSDCVars0_1324;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_1345, &ProgVarsTerm_1332);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_1332, STATE_VARIABLE_VarSet_0_136, ContextPieces_11, &MaybePSDCVars_1333);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1339, ContextPieces_11, &MaybeSubGoal_1328, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_1333)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_1324 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_1333, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_1328)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_1321 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1328, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_1317;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_1324, SubGoal_1321, ContextPieces_11, Functor_8, &MaybePODVar_1317);
                  if (((MR_tag((MR_Word) MaybePODVar_1317)) == (MR_Integer) 0))
                    *MaybeGoal_12 = (MR_Word) (MaybePODVar_1317);
                  else
                  {
                    MR_Word Goal_1310;
                    MR_Word PODVar_1311 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_1317, (MR_Integer) 0))));

                    {
                      Goal_1310 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1310, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Goal_1310, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1310, 2) = ((MR_Box) (PODVar_1311));
                      MR_hl_field(MR_mktag(3), Goal_1310, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), Goal_1310, 4) = ((MR_Box) (SubGoal_1321));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1310));
                    }
                  }
                }
                else
                {
                  MR_Word Var_198;
                  MR_Word Var_199;
                  MR_Word Specs_1320;

                  Var_198 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_1333);
                  Var_199 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_1328);
                  Specs_1320 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_198, Var_199);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1320));
                  }
                }
              }
              else
              {
                MR_Word Var_201;
                MR_Word Spec_1338;

                Spec_1338 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
                {
                  Var_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_201, 0) = ((MR_Box) (Spec_1338));
                  MR_hl_field(MR_mktag(1), Var_201, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_201));
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
              MR_Word SubGoalTerm_1890;
              MR_Word VarsTerm_1891;
              MR_Word Var_1821;
              MR_Word Var_1822;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_1891 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1821 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1821 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_1890 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1821, (MR_Integer) 0))));
                  Var_1822 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1821, (MR_Integer) 1))));
                  succeeded = (Var_1822 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1860;
                MR_Word ProgVarsTerm_1861;
                MR_Word MaybePSDCVars_1862;
                MR_Word SubGoal_1846;
                MR_Word PSDCVars0_1847;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_1891, &ProgVarsTerm_1861);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_1861, STATE_VARIABLE_VarSet_0_136, ContextPieces_11, &MaybePSDCVars_1862);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1890, ContextPieces_11, &MaybeSubGoal_1860, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_1862)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_1847 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_1862, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_1860)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_1846 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1860, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_1832;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_1847, SubGoal_1846, ContextPieces_11, Functor_8, &MaybePODVar_1832);
                  if (((MR_tag((MR_Word) MaybePODVar_1832)) == (MR_Integer) 0))
                    *MaybeGoal_12 = (MR_Word) (MaybePODVar_1832);
                  else
                  {
                    MR_Word Goal_1824;
                    MR_Word PODVar_1825 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_1832, (MR_Integer) 0))));

                    {
                      Goal_1824 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1824, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Goal_1824, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1824, 2) = ((MR_Box) (PODVar_1825));
                      MR_hl_field(MR_mktag(3), Goal_1824, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), Goal_1824, 4) = ((MR_Box) (SubGoal_1846));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1824));
                    }
                  }
                }
                else
                {
                  MR_Word Var_1833;
                  MR_Word Var_1834;
                  MR_Word Specs_1835;

                  Var_1833 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_1862);
                  Var_1834 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_1860);
                  Specs_1835 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_1833, Var_1834);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1835));
                  }
                }
              }
              else
              {
                MR_Word Var_1869;
                MR_Word Spec_1871;

                Spec_1871 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
                {
                  Var_1869 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_1869, 0) = ((MR_Box) (Spec_1871));
                  MR_hl_field(MR_mktag(1), Var_1869, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1869));
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
              MR_Word SubGoalTerm_1992;
              MR_Word VarsTerm_1993;
              MR_Word Var_1923;
              MR_Word Var_1924;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_1993 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_1923 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_1923 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_1992 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1923, (MR_Integer) 0))));
                  Var_1924 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1923, (MR_Integer) 1))));
                  succeeded = (Var_1924 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_1962;
                MR_Word ProgVarsTerm_1963;
                MR_Word MaybePSDCVars_1964;
                MR_Word SubGoal_1948;
                MR_Word PSDCVars0_1949;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_1993, &ProgVarsTerm_1963);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_1963, STATE_VARIABLE_VarSet_0_136, ContextPieces_11, &MaybePSDCVars_1964);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1992, ContextPieces_11, &MaybeSubGoal_1962, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_1964)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_1949 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_1964, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_1962)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_1948 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1962, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_1934;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_1949, SubGoal_1948, ContextPieces_11, Functor_8, &MaybePODVar_1934);
                  if (((MR_tag((MR_Word) MaybePODVar_1934)) == (MR_Integer) 0))
                    *MaybeGoal_12 = (MR_Word) (MaybePODVar_1934);
                  else
                  {
                    MR_Word Goal_1926;
                    MR_Word PODVar_1927 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_1934, (MR_Integer) 0))));

                    {
                      Goal_1926 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1926, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Goal_1926, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1926, 2) = ((MR_Box) (PODVar_1927));
                      MR_hl_field(MR_mktag(3), Goal_1926, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), Goal_1926, 4) = ((MR_Box) (SubGoal_1948));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1926));
                    }
                  }
                }
                else
                {
                  MR_Word Var_1935;
                  MR_Word Var_1936;
                  MR_Word Specs_1937;

                  Var_1935 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_1964);
                  Var_1936 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_1962);
                  Specs_1937 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_1935, Var_1936);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1937));
                  }
                }
              }
              else
              {
                MR_Word Var_1971;
                MR_Word Spec_1973;

                Spec_1973 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
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
              MR_Word SubGoalTerm_2094;
              MR_Word VarsTerm_2095;
              MR_Word Var_2025;
              MR_Word Var_2026;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_2095 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_2025 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_2025 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_2094 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2025, (MR_Integer) 0))));
                  Var_2026 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2025, (MR_Integer) 1))));
                  succeeded = (Var_2026 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_2064;
                MR_Word ProgVarsTerm_2065;
                MR_Word MaybePSDCVars_2066;
                MR_Word SubGoal_2050;
                MR_Word PSDCVars0_2051;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_2095, &ProgVarsTerm_2065);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_2065, STATE_VARIABLE_VarSet_0_136, ContextPieces_11, &MaybePSDCVars_2066);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_2094, ContextPieces_11, &MaybeSubGoal_2064, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_2066)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_2051 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_2066, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_2064)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_2050 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2064, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_2036;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_2051, SubGoal_2050, ContextPieces_11, Functor_8, &MaybePODVar_2036);
                  if (((MR_tag((MR_Word) MaybePODVar_2036)) == (MR_Integer) 0))
                    *MaybeGoal_12 = (MR_Word) (MaybePODVar_2036);
                  else
                  {
                    MR_Word Goal_2028;
                    MR_Word PODVar_2029 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_2036, (MR_Integer) 0))));

                    {
                      Goal_2028 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_2028, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Goal_2028, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_2028, 2) = ((MR_Box) (PODVar_2029));
                      MR_hl_field(MR_mktag(3), Goal_2028, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
                      MR_hl_field(MR_mktag(3), Goal_2028, 4) = ((MR_Box) (SubGoal_2050));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_2028));
                    }
                  }
                }
                else
                {
                  MR_Word Var_2037;
                  MR_Word Var_2038;
                  MR_Word Specs_2039;

                  Var_2037 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_2066);
                  Var_2038 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_2064);
                  Specs_2039 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_2037, Var_2038);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_2039));
                  }
                }
              }
              else
              {
                MR_Word Var_2073;
                MR_Word Spec_2075;

                Spec_2075 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
                {
                  Var_2073 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_2073, 0) = ((MR_Box) (Spec_2075));
                  MR_hl_field(MR_mktag(1), Var_2073, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2073));
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
              MR_Word SubGoalTerm_2196;
              MR_Word VarsTerm_2197;
              MR_Word Var_2127;
              MR_Word Var_2128;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_2197 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_2127 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_2127 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_2196 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2127, (MR_Integer) 0))));
                  Var_2128 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2127, (MR_Integer) 1))));
                  succeeded = (Var_2128 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_2166;
                MR_Word ProgVarsTerm_2167;
                MR_Word MaybePSDCVars_2168;
                MR_Word SubGoal_2152;
                MR_Word PSDCVars0_2153;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_2197, &ProgVarsTerm_2167);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_2167, STATE_VARIABLE_VarSet_0_136, ContextPieces_11, &MaybePSDCVars_2168);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_2196, ContextPieces_11, &MaybeSubGoal_2166, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_2168)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_2153 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_2168, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_2166)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_2152 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2166, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_2138;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_2153, SubGoal_2152, ContextPieces_11, Functor_8, &MaybePODVar_2138);
                  if (((MR_tag((MR_Word) MaybePODVar_2138)) == (MR_Integer) 0))
                    *MaybeGoal_12 = (MR_Word) (MaybePODVar_2138);
                  else
                  {
                    MR_Word Goal_2130;
                    MR_Word PODVar_2131 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_2138, (MR_Integer) 0))));

                    {
                      Goal_2130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_2130, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Goal_2130, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_2130, 2) = ((MR_Box) (PODVar_2131));
                      MR_hl_field(MR_mktag(3), Goal_2130, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), Goal_2130, 4) = ((MR_Box) (SubGoal_2152));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_2130));
                    }
                  }
                }
                else
                {
                  MR_Word Var_2139;
                  MR_Word Var_2140;
                  MR_Word Specs_2141;

                  Var_2139 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_2168);
                  Var_2140 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_2166);
                  Specs_2141 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_2139, Var_2140);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_2141));
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
              MR_Word SubGoalTerm_2298;
              MR_Word VarsTerm_2299;
              MR_Word Var_2229;
              MR_Word Var_2230;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_2299 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_2229 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_2229 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_2298 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2229, (MR_Integer) 0))));
                  Var_2230 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2229, (MR_Integer) 1))));
                  succeeded = (Var_2230 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_2268;
                MR_Word ProgVarsTerm_2269;
                MR_Word MaybePSDCVars_2270;
                MR_Word SubGoal_2254;
                MR_Word PSDCVars0_2255;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_2299, &ProgVarsTerm_2269);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_2269, STATE_VARIABLE_VarSet_0_136, ContextPieces_11, &MaybePSDCVars_2270);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_2298, ContextPieces_11, &MaybeSubGoal_2268, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_2270)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_2255 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_2270, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_2268)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_2254 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2268, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_2240;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_2255, SubGoal_2254, ContextPieces_11, Functor_8, &MaybePODVar_2240);
                  if (((MR_tag((MR_Word) MaybePODVar_2240)) == (MR_Integer) 0))
                    *MaybeGoal_12 = (MR_Word) (MaybePODVar_2240);
                  else
                  {
                    MR_Word Goal_2232;
                    MR_Word PODVar_2233 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_2240, (MR_Integer) 0))));

                    {
                      Goal_2232 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_2232, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Goal_2232, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_2232, 2) = ((MR_Box) (PODVar_2233));
                      MR_hl_field(MR_mktag(3), Goal_2232, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), Goal_2232, 4) = ((MR_Box) (SubGoal_2254));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_2232));
                    }
                  }
                }
                else
                {
                  MR_Word Var_2241;
                  MR_Word Var_2242;
                  MR_Word Specs_2243;

                  Var_2241 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_2270);
                  Var_2242 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_2268);
                  Specs_2243 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_2241, Var_2242);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_2243));
                  }
                }
              }
              else
              {
                MR_Word Var_2277;
                MR_Word Spec_2279;

                Spec_2279 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
                {
                  Var_2277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_2277, 0) = ((MR_Box) (Spec_2279));
                  MR_hl_field(MR_mktag(1), Var_2277, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2277));
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
              MR_Word SubGoalTerm_2400;
              MR_Word VarsTerm_2401;
              MR_Word Var_2331;
              MR_Word Var_2332;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_2401 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_2331 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_2331 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_2400 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2331, (MR_Integer) 0))));
                  Var_2332 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2331, (MR_Integer) 1))));
                  succeeded = (Var_2332 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_2370;
                MR_Word ProgVarsTerm_2371;
                MR_Word MaybePSDCVars_2372;
                MR_Word SubGoal_2356;
                MR_Word PSDCVars0_2357;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_2401, &ProgVarsTerm_2371);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_2371, STATE_VARIABLE_VarSet_0_136, ContextPieces_11, &MaybePSDCVars_2372);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_2400, ContextPieces_11, &MaybeSubGoal_2370, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_2372)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_2357 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_2372, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_2370)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_2356 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2370, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_2342;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_2357, SubGoal_2356, ContextPieces_11, Functor_8, &MaybePODVar_2342);
                  if (((MR_tag((MR_Word) MaybePODVar_2342)) == (MR_Integer) 0))
                    *MaybeGoal_12 = (MR_Word) (MaybePODVar_2342);
                  else
                  {
                    MR_Word Goal_2334;
                    MR_Word PODVar_2335 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_2342, (MR_Integer) 0))));

                    {
                      Goal_2334 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_2334, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Goal_2334, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_2334, 2) = ((MR_Box) (PODVar_2335));
                      MR_hl_field(MR_mktag(3), Goal_2334, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), Goal_2334, 4) = ((MR_Box) (SubGoal_2356));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_2334));
                    }
                  }
                }
                else
                {
                  MR_Word Var_2343;
                  MR_Word Var_2344;
                  MR_Word Specs_2345;

                  Var_2343 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_2372);
                  Var_2344 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_2370);
                  Specs_2345 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_2343, Var_2344);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_2345));
                  }
                }
              }
              else
              {
                MR_Word Var_2379;
                MR_Word Spec_2381;

                Spec_2381 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
                {
                  Var_2379 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_2379, 0) = ((MR_Box) (Spec_2381));
                  MR_hl_field(MR_mktag(1), Var_2379, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2379));
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
              MR_Word SubGoalTerm_2502;
              MR_Word VarsTerm_2503;
              MR_Word Var_2433;
              MR_Word Var_2434;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                VarsTerm_2503 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_2433 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_2433 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_2502 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2433, (MR_Integer) 0))));
                  Var_2434 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2433, (MR_Integer) 1))));
                  succeeded = (Var_2434 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeSubGoal_2472;
                MR_Word ProgVarsTerm_2473;
                MR_Word MaybePSDCVars_2474;
                MR_Word SubGoal_2458;
                MR_Word PSDCVars0_2459;

                mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_2503, &ProgVarsTerm_2473);
                parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_2473, STATE_VARIABLE_VarSet_0_136, ContextPieces_11, &MaybePSDCVars_2474);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_2502, ContextPieces_11, &MaybeSubGoal_2472, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybePSDCVars_2474)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PSDCVars0_2459 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_2474, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_2472)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_2458 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2472, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word MaybePODVar_2444;

                  parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_2459, SubGoal_2458, ContextPieces_11, Functor_8, &MaybePODVar_2444);
                  if (((MR_tag((MR_Word) MaybePODVar_2444)) == (MR_Integer) 0))
                    *MaybeGoal_12 = (MR_Word) (MaybePODVar_2444);
                  else
                  {
                    MR_Word Goal_2436;
                    MR_Word PODVar_2437 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_2444, (MR_Integer) 0))));

                    {
                      Goal_2436 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_2436, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Goal_2436, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_2436, 2) = ((MR_Box) (PODVar_2437));
                      MR_hl_field(MR_mktag(3), Goal_2436, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Goal_2436, 4) = ((MR_Box) (SubGoal_2458));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_2436));
                    }
                  }
                }
                else
                {
                  MR_Word Var_2445;
                  MR_Word Var_2446;
                  MR_Word Specs_2447;

                  Var_2445 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_2474);
                  Var_2446 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_2472);
                  Specs_2447 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_2445, Var_2446);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_2447));
                  }
                }
              }
              else
              {
                MR_Word Var_2481;
                MR_Word Spec_2483;

                Spec_2483 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
                {
                  Var_2481 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_2481, 0) = ((MR_Box) (Spec_2483));
                  MR_hl_field(MR_mktag(1), Var_2481, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2481));
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
              MR_Word SubGoalTerm_2540;
              MR_Word Var_2535;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubGoalTerm_2540 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_2535 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_2535 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word MaybeGoal0_2536;

                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_2540, ContextPieces_11, &MaybeGoal0_2536, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                parse_tree__parse_goal__apply_purity_marker_to_maybe_goal_4_p_0(SubGoalTerm_2540, (MR_Integer) 1, MaybeGoal0_2536, MaybeGoal_12);
              }
              else
              {
                MR_Word Spec_2537;
                MR_Word Var_2538;

                Spec_2537 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_2538 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_2538, 0) = ((MR_Box) (Spec_2537));
                  MR_hl_field(MR_mktag(1), Var_2538, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2538));
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
              MR_Word QVarsTerm_2676;
              MR_Word SubGoalTerm_2707;
              MR_Word Var_2553;
              MR_Word Var_2554;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                QVarsTerm_2676 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_2553 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_2553 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_2707 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2553, (MR_Integer) 0))));
                  Var_2554 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2553, (MR_Integer) 1))));
                  succeeded = (Var_2554 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word VarsContextPieces_2636;
                MR_Word MaybeVars_2637;
                MR_Word Var_2647;
                MR_Word MaybeSubGoal_2658;
                MR_Word GenericVarSet_2659;
                MR_Word Vars0_2608;
                MR_Word StateVars0_2609;
                MR_Word SubGoal_2626;
                MR_Word Var_2555;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_136, &GenericVarSet_2659);
                Var_2647 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[21])));
                VarsContextPieces_2636 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_11, Var_2647);
                parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), QVarsTerm_2676, GenericVarSet_2659, VarsContextPieces_2636, &MaybeVars_2637);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_2707, ContextPieces_11, &MaybeSubGoal_2658, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybeVars_2637)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_2555 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_2637, (MR_Integer) 0))));
                  Vars0_2608 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_2555, (MR_Integer) 0))));
                  StateVars0_2609 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_2555, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_2658)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_2626 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_2658, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word Vars_2584;
                  MR_Word StateVars_2585;
                  MR_Word Goal1_2586;
                  MR_Word Goal_2595;

                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[16]), Vars0_2608, &Vars_2584);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[17]), StateVars0_2609, &StateVars_2585);
                  if ((StateVars_2585 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal1_2586 = SubGoal_2626;
                  else
                  {
                    {
                      Goal1_2586 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal1_2586, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal1_2586, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                      MR_hl_field(MR_mktag(3), Goal1_2586, 2) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal1_2586, 3) = ((MR_Box) (StateVars_2585));
                      MR_hl_field(MR_mktag(3), Goal1_2586, 4) = ((MR_Box) (SubGoal_2626));
                    }
                  }
                  if ((Vars_2584 == (MR_Word) ((MR_Unsigned) 0U)))
                    Goal_2595 = Goal1_2586;
                  else
                  {
                    {
                      Goal_2595 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_2595, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Goal_2595, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
                      MR_hl_field(MR_mktag(3), Goal_2595, 2) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_2595, 3) = ((MR_Box) (Vars_2584));
                      MR_hl_field(MR_mktag(3), Goal_2595, 4) = ((MR_Box) (Goal1_2586));
                    }
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_2595));
                  }
                }
                else
                {
                  MR_Word Var_2602;
                  MR_Word Var_2603;
                  MR_Word Specs_2604;

                  Var_2602 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[2]), MaybeVars_2637);
                  Var_2603 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_2658);
                  Specs_2604 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_2602, Var_2603);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_2604));
                  }
                }
              }
              else
              {
                MR_Word Var_2673;
                MR_Word Spec_2675;

                Spec_2675 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of variables", Functor_8);
                {
                  Var_2673 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_2673, 0) = ((MR_Box) (Spec_2675));
                  MR_hl_field(MR_mktag(1), Var_2673, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2673));
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
              MR_Word Var_314;
              MR_Word Var_315;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_314 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_314 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ThenTerm_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_314, (MR_Integer) 0))));
                  Var_315 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_314, (MR_Integer) 1))));
                  succeeded = (Var_315 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word SemiColonContext_1046;
                MR_Word Var_316;
                MR_String Var_317;
                MR_Word Var_318;
                MR_Word Var_319;
                MR_Word Var_320;

                succeeded = ((MR_tag((MR_Word) ThenTerm_80)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_316 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenTerm_80, (MR_Integer) 0))));
                  Var_318 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenTerm_80, (MR_Integer) 1))));
                  SemiColonContext_1046 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenTerm_80, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) Var_316)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_317 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_316, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_317, (MR_String) ";") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_318 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_319 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_318, (MR_Integer) 1))));
                        succeeded = (Var_319 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_320 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_319, (MR_Integer) 1))));
                          succeeded = (Var_320 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word Var_343;
                  MR_Word Var_344;
                  MR_Word Var_349;
                  MR_Word Spec_1042;

                  {
                    Var_344 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_344, 0) = ((MR_Box) (SemiColonContext_1046));
                    MR_hl_field(MR_mktag(0), Var_344, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[400])));
                  }
                  {
                    Var_343 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_343, 0) = ((MR_Box) (Var_344));
                    MR_hl_field(MR_mktag(1), Var_343, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_1042 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_1042, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), Spec_1042, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(0), Spec_1042, 2) = ((MR_Box) (Var_343));
                  }
                  {
                    Var_349 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_349, 0) = ((MR_Box) (Spec_1042));
                    MR_hl_field(MR_mktag(1), Var_349, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_349));
                  }
                  *STATE_VARIABLE_VarSet_137 = STATE_VARIABLE_VarSet_0_136;
                }
                else
                {
                  MR_Word Var_351;

                  {
                    Var_351 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_351, 0) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[36]));
                    MR_hl_field(MR_mktag(0), Var_351, 1) = ((MR_Box) (Args_9));
                    MR_hl_field(MR_mktag(0), Var_351, 2) = ((MR_Box) (Context_10));
                  }
                  parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_53_93_95_48_9_p_0(Var_351, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), ContextPieces_11, MaybeGoal_12, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                }
              }
              else
              {
                MR_Word Var_416;
                MR_Word Var_417;
                MR_Word Var_422;
                MR_Word Spec_1047;

                {
                  Var_417 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_417, 0) = ((MR_Box) (Context_10));
                  MR_hl_field(MR_mktag(0), Var_417, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[403])));
                }
                {
                  Var_416 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_416, 0) = ((MR_Box) (Var_417));
                  MR_hl_field(MR_mktag(1), Var_416, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_1047 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_1047, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_1047, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(0), Spec_1047, 2) = ((MR_Box) (Var_416));
                }
                {
                  Var_422 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_422, 0) = ((MR_Box) (Spec_1047));
                  MR_hl_field(MR_mktag(1), Var_422, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_422));
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
              MR_Word SubGoalTerm_1097;
              MR_Word Var_249;
              MR_Word Var_250;

              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ParamsTerm_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
                Var_249 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
                succeeded = (Var_249 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubGoalTerm_1097 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_249, (MR_Integer) 0))));
                  Var_250 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_249, (MR_Integer) 1))));
                  succeeded = (Var_250 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeParams_95;
                MR_Word MaybeSubGoal_1091;
                MR_Word GenericVarSet_1095;
                MR_Word Params_96;
                MR_Word SubGoal_1088;

                mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_136, &GenericVarSet_1095);
                parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_112_97_114_97_109_115_95_95_91_50_93_95_48_4_p_0(GenericVarSet_1095, ParamsTerm_94, &MaybeParams_95);
                parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_1097, ContextPieces_11, &MaybeSubGoal_1091, STATE_VARIABLE_VarSet_0_136, STATE_VARIABLE_VarSet_137);
                succeeded = ((MR_tag((MR_Word) MaybeParams_95)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Params_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeParams_95, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) MaybeSubGoal_1091)) == (MR_Integer) 1);
                  if (succeeded)
                    SubGoal_1088 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_1091, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word MaybeComponents_97;

                  parse_tree__parse_goal__convert_trace_params_2_p_0(Params_96, &MaybeComponents_97);
                  if (((MR_tag((MR_Word) MaybeComponents_97)) == (MR_Integer) 0))
                  {
                    MR_Word Specs_1082 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeComponents_97, (MR_Integer) 0))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1082));
                    }
                  }
                  else
                  {
                    MR_Word CompileTime_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_97, (MR_Integer) 0))));
                    MR_Word RunTime_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_97, (MR_Integer) 1))));
                    MR_Word MaybeIO_100 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_97, (MR_Integer) 2))));
                    MR_Word MutVars_101 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_97, (MR_Integer) 3))));
                    MR_Word Goal_1081;

                    {
                      Goal_1081 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Goal_1081, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                      MR_hl_field(MR_mktag(3), Goal_1081, 1) = ((MR_Box) (Context_10));
                      MR_hl_field(MR_mktag(3), Goal_1081, 2) = ((MR_Box) (CompileTime_98));
                      MR_hl_field(MR_mktag(3), Goal_1081, 3) = ((MR_Box) (RunTime_99));
                      MR_hl_field(MR_mktag(3), Goal_1081, 4) = ((MR_Box) (MaybeIO_100));
                      MR_hl_field(MR_mktag(3), Goal_1081, 5) = ((MR_Box) (MutVars_101));
                      MR_hl_field(MR_mktag(3), Goal_1081, 6) = ((MR_Box) (SubGoal_1088));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeGoal_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_1081));
                    }
                  }
                }
                else
                {
                  MR_Word Var_252;
                  MR_Word Var_253;
                  MR_Word Specs_1087;

                  Var_252 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[5]), MaybeParams_95);
                  Var_253 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_1091);
                  Specs_1087 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_252, Var_253);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeGoal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_1087));
                  }
                }
              }
              else
              {
                MR_Word Var_255;
                MR_Word Spec_1096;

                Spec_1096 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of trace parameters", Functor_8);
                {
                  Var_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_255, 0) = ((MR_Box) (Spec_1096));
                  MR_hl_field(MR_mktag(1), Var_255, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_255));
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
              MR_Word Goal_2783;

              {
                Goal_2783 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Goal_2783, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Goal_2783, 1) = ((MR_Box) (Context_10));
              }
              if ((Args_9 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_2783));
                }
              else
              {
                MR_Word Var_2770;
                MR_Word Spec_2772;

                Spec_2772 = parse_tree__parse_goal__should_have_no_args_3_f_0(ContextPieces_11, Context_10, Functor_8);
                {
                  Var_2770 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_2770, 0) = ((MR_Box) (Spec_2772));
                  MR_hl_field(MR_mktag(1), Var_2770, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeGoal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_2770));
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
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_64;

      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[394])));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_20, 2) = ((MR_Box) (Var_58));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Spec_20));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_64));
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
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_72;

          {
            Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (ThenContext_25));
            MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[393])));
          }
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
            MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_27, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_27, 2) = ((MR_Box) (Var_66));
          }
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Spec_27));
            MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeGoal_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_72));
          }
        }
        else
          *MaybeGoal_14 = MaybeTryGoal_21;
      }
    }
    else
    {
      parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_53_93_95_48_9_p_0(Term_9, (MR_Word) ((MR_Unsigned) 0U), CatchExprs_10, MaybeCatchAnyExpr_11, ContextPieces_13, MaybeGoal_14, STATE_VARIABLE_VarSet_0_29, STATE_VARIABLE_VarSet_30);
    }
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
        MR_Word Specs_110;

        Var_51 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[12]), MaybeParams_25);
        Var_53 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeTryGoal_26);
        Var_54 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeThenGoal_27);
        Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_53, Var_54);
        Specs_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_51, Var_52);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_110));
        }
      }
    }
    else
    {
      MR_Word Spec_36;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_103;
      MR_Word Var_108;

      Var_103 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ThenTryTerm_10);
      {
        Var_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (Var_103));
        MR_hl_field(MR_mktag(0), Var_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[392])));
      }
      {
        Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
        MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_36, 2) = ((MR_Box) (Var_101));
      }
      {
        Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Spec_36));
        MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_108));
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
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_59;

      Var_54 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArrowTerm_7);
      {
        Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[391])));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_21, 2) = ((MR_Box) (Var_52));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Spec_21));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCatch_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_59));
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
      MR_Word HeadCatch_17;
      MR_Word TailCatches_18;

      parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_97_116_99_104_95_97_114_114_111_119_95_116_101_114_109_95_95_91_50_93_95_48_6_p_0(CatchArrowTerm_12, ContextPieces_9, &HeadMaybeCatch_15, STATE_VARIABLE_VarSet_0_23, &STATE_VARIABLE_VarSet_30_30);
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
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_64;

        Var_59 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArrowTerm_7);
        {
          Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[389])));
        }
        {
          Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_23, 2) = ((MR_Box) (Var_57));
        }
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Spec_23));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeCatchAny_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_64));
        }
        *STATE_VARIABLE_VarSet_25 = STATE_VARIABLE_VarSet_0_24;
      }
    }
    else
    {
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_95;
      MR_Word Spec_98;

      Var_90 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArrowTerm_7);
      {
        Var_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (Var_90));
        MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[390])));
      }
      {
        Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_98 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_98, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_98, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_98, 2) = ((MR_Box) (Var_88));
      }
      {
        Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Spec_98));
        MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCatchAny_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_95));
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
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Word Var_32;

        Context_11 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
        {
          Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (Context_11));
          MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[388])));
        }
        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
          MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_26));
        }
        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Spec_12));
          MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSubExpr_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_32));
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

    parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__1314__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_63);
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

    parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__1313__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_57);
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
      MaybeVars_16 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_3[20]));
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
        {
          Goal_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Goal_16, 0) = ((MR_Box) (Context_30));
          MR_hl_field(MR_mktag(1), Goal_16, 1) = ((MR_Box) (SymName_15));
          MR_hl_field(MR_mktag(1), Goal_16, 2) = ((MR_Box) (Args_28));
          MR_hl_field(MR_mktag(1), Goal_16, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
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
          MR_hl_field(MR_mktag(1), Goal_16, 1) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[19]));
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
      *MaybeComponentsContexts_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_3[18]));
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
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_64;

        {
          Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (TermContext_20));
          MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[385])));
        }
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_22, 2) = ((MR_Box) (Var_58));
        }
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Spec_22));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeComponentsContexts_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_64));
        }
      }
      else
      {
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_49;
        MR_Word TermContext_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_6, (MR_Integer) 1))));
        MR_Word Spec_68;

        {
          Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (TermContext_66));
          MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[386])));
        }
        {
          Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
          MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_68 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_68, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_68, 2) = ((MR_Box) (Var_43));
        }
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Spec_68));
          MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeComponentsContexts_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_49));
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
    MR_Word conv0_HeadVar__2_140;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_atomic_component__2362__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_140);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_140));
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
            MR_Word Var_42;

            {
              Component_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Component_15, 0) = ((MR_Box) (CompTerm_14));
            }
            {
              Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (Component_15));
              MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (Context_11));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeComponentContext_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_42));
            }
          }
        }
        else
        {
          succeeded = (strcmp(Atom_12, (MR_String) "inner") == 0);
          if (succeeded)
          {
            MR_Word MaybeComponentSubTerm_113;

            parse_tree__parse_goal__parse_atomic_subterm_4_p_0(Atom_12, ErrorTerm_5, Term_6, &MaybeComponentSubTerm_113);
            if (((MR_tag((MR_Word) MaybeComponentSubTerm_113)) == (MR_Integer) 0))
              *MaybeComponentContext_8 = (MR_Word) (MaybeComponentSubTerm_113);
            else
            {
              MR_Word Var_43;
              MR_Word CompTerm_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponentSubTerm_113, (MR_Integer) 0))));
              MR_Word Component_108;

              {
                Component_108 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Component_108, 0) = ((MR_Box) (CompTerm_107));
              }
              {
                Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (Component_108));
                MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (Context_11));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeComponentContext_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_43));
              }
            }
          }
          else
          {
            succeeded = (strcmp(Atom_12, (MR_String) "vars") == 0);
            if (succeeded)
            {
              MR_Word SubTerm_17;
              MR_Word Var_44;

              succeeded = (SubTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubTerm_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 0))));
                Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 1))));
                succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
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
                  MR_Word Var_56;
                  MR_Word Component_117;

                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[3]), Vars_20, &ProgVars_21);
                  {
                    Component_117 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Component_117, 0) = ((MR_Box) (ProgVars_21));
                  }
                  {
                    Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (Component_117));
                    MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (Context_11));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeComponentContext_8 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_56));
                  }
                }
              }
              else
              {
                MR_Word Pieces_22;
                MR_Word Spec_23;
                MR_Word Var_57;
                MR_Word Var_69;
                MR_Word Var_70;
                MR_Word Var_71;
                MR_Word Var_72;
                MR_Word Var_75;

                {
                  Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (Atom_12));
                }
                {
                  Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_22, 0) = ((MR_Box) (Var_57));
                  MR_hl_field(MR_mktag(1), Pieces_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[331])));
                }
                {
                  Var_72 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Pieces_22));
                }
                {
                  Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
                  MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (Context_11));
                  MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (Var_71));
                }
                {
                  Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
                  MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(0), Spec_23, 2) = ((MR_Box) (Var_69));
                }
                {
                  Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Spec_23));
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
            else
            {
              MR_Word Var_84;
              MR_Word Var_85;
              MR_Word Var_90;
              MR_Word Spec_126;

              {
                Var_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (Context_11));
                MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[385])));
              }
              {
                Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
                MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_126 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_126, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_126, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), Spec_126, 2) = ((MR_Box) (Var_84));
              }
              {
                Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Spec_126));
                MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeComponentContext_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_90));
              }
            }
          }
        }
      }
      else
      {
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Var_105;
        MR_Word Spec_134;

        {
          Var_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (Context_11));
          MR_hl_field(MR_mktag(0), Var_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[385])));
        }
        {
          Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
          MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_134 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_134, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_134, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_134, 2) = ((MR_Box) (Var_99));
        }
        {
          Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Spec_134));
          MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeComponentContext_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_105));
        }
      }
    }
    else
    {
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_40;
      MR_Word Spec_136;

      Var_35 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_5);
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[386])));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_136 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_136, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_136, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_136, 2) = ((MR_Box) (Var_33));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Spec_136));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeComponentContext_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_40));
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
      MR_Word Var_68;
      MR_Word Term_67;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_String Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;

      succeeded = (SubTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Term_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 0))));
        Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 1))));
        succeeded = (Var_80 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Term_67)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_67, (MR_Integer) 0))));
            Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_67, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_81)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_82 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_81, (MR_Integer) 0))));
              succeeded = (strcmp(Var_82, (MR_String) "!") == 0);
              if (succeeded)
              {
                succeeded = (Var_83 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_83, (MR_Integer) 0))));
                  Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_83, (MR_Integer) 1))));
                  succeeded = (Var_85 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Var_84)) == (MR_Integer) 1);
                    if (succeeded)
                      Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_84, (MR_Integer) 0))));
                  }
                }
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word ProgVar_71;

        mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_68, &ProgVar_71);
        {
          ComponentState_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ComponentState_12, 0) = ((MR_Box) (ProgVar_71));
        }
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word TypeCtorInfo_28_90;
        MR_Word TypeCtorInfo_29_91;
        MR_Word TermA_72;
        MR_Word TermB_73;
        MR_Word VarA_74;
        MR_Word VarB_76;
        MR_Word ProgVarA_78;
        MR_Word ProgVarB_79;
        MR_Word Var_86;
        MR_Word Var_87;

        succeeded = (SubTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TermA_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 0))));
          Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 1))));
          succeeded = (Var_86 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TermB_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_86, (MR_Integer) 0))));
            Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_86, (MR_Integer) 1))));
            succeeded = (Var_87 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) TermA_72)) == (MR_Integer) 1);
              if (succeeded)
              {
                VarA_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TermA_72, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) TermB_73)) == (MR_Integer) 1);
                if (succeeded)
                {
                  VarB_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TermB_73, (MR_Integer) 0))));
                  TypeCtorInfo_28_90 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                  TypeCtorInfo_29_91 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                  mercury__term__coerce_var_2_p_0(TypeCtorInfo_28_90, TypeCtorInfo_29_91, VarA_74, &ProgVarA_78);
                  mercury__term__coerce_var_2_p_0(TypeCtorInfo_28_90, TypeCtorInfo_29_91, VarB_76, &ProgVarB_79);
                  {
                    ComponentState_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ComponentState_12, 0) = ((MR_Box) (ProgVarA_78));
                    MR_hl_field(MR_mktag(1), ComponentState_12, 1) = ((MR_Box) (ProgVarB_79));
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
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_60;

        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (Name_5));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[317])));
        }
        {
          Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[352])));
          MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_38));
        }
        {
          Var_57 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (Pieces_13));
        }
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
          MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (TermContext_11));
          MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (Var_56));
        }
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_54));
        }
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Spec_14));
          MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeComponentState_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_60));
        }
      }
    }
    else
    {
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_34;
      MR_Word Spec_63;

      Var_29 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_6);
      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[384])));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_63 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_63, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_63, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_63, 2) = ((MR_Box) (Var_27));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Spec_63));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeComponentState_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_34));
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
      *MaybeComponentsContexts_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_3[14]));
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
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_52;

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
          MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[383])));
          MR_hl_field(MR_mktag(1), Pieces_19, 1) = ((MR_Box) (Var_35));
        }
        Var_47 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (Pieces_19));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Var_47));
          MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (Var_48));
        }
        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
          MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_20, 2) = ((MR_Box) (Var_45));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Spec_20));
          MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeComponentsContexts_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_52));
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
            MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_4[0]));
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
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_69;

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
            Var_66 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (Pieces_18));
          }
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
            MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (Context_11));
            MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (Var_65));
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
            MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_19, 2) = ((MR_Box) (Var_63));
          }
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Spec_19));
            MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeComponentContext_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_69));
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
          MR_Word SubTerm_289;
          MR_Word Var_71;

          succeeded = (SubTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SubTerm_289 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 0))));
            Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 1))));
            succeeded = (Var_71 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            MR_Word MaybeRunTime_20;
            MR_Word Var_72;

            {
              Var_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_4[1]));
              MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_99_111_109_112_111_110_101_110_116_95_95_91_50_93_95_48_4_p_0_2));
              MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (VarSet_5));
            }
            parse_tree__parse_goal__parse_trace_tree_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0), Var_72, SubTerm_289, &MaybeRunTime_20);
            if (((MR_tag((MR_Word) MaybeRunTime_20)) == (MR_Integer) 0))
              *MaybeComponentContext_8 = (MR_Word) (MaybeRunTime_20);
            else
            {
              MR_Word RunTime_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRunTime_20, (MR_Integer) 0))));
              MR_Word Var_73;
              MR_Word Component_281;

              {
                Component_281 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Component_281, 0) = ((MR_Box) (RunTime_21));
              }
              {
                Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (Component_281));
                MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (Context_11));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeComponentContext_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_73));
              }
            }
          }
          else
          {
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_92;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_95;
            MR_Word Var_98;
            MR_Word Pieces_287;
            MR_Word Spec_288;

            {
              Var_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_77, 0) = ((MR_Box) (Atom_12));
            }
            {
              Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
              MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[169])));
            }
            {
              Pieces_287 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_287, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[352])));
              MR_hl_field(MR_mktag(1), Pieces_287, 1) = ((MR_Box) (Var_76));
            }
            {
              Var_95 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (Pieces_287));
            }
            {
              Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
              MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (Context_11));
              MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (Var_94));
            }
            {
              Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
              MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_288 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_288, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_288, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_288, 2) = ((MR_Box) (Var_92));
            }
            {
              Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Spec_288));
              MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeComponentContext_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_98));
            }
          }
        }
        else
        {
          succeeded = (strcmp(Atom_12, (MR_String) "io") == 0);
          if (succeeded)
          {
            MR_Word SubTerm_302;
            MR_Word Var_100;

            succeeded = (SubTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SubTerm_302 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 0))));
              Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 1))));
              succeeded = (Var_100 == (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
            {
              MR_Word Var_22;
              MR_Word Var_101;
              MR_String Var_102;
              MR_Word Var_103;
              MR_Word Var_104;
              MR_Word Var_105;

              succeeded = ((MR_tag((MR_Word) SubTerm_302)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTerm_302, (MR_Integer) 0))));
                Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTerm_302, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_101)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_102 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_101, (MR_Integer) 0))));
                  succeeded = (strcmp(Var_102, (MR_String) "!") == 0);
                  if (succeeded)
                  {
                    succeeded = (Var_103 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_103, (MR_Integer) 0))));
                      Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_103, (MR_Integer) 1))));
                      succeeded = (Var_105 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) Var_104)) == (MR_Integer) 1);
                        if (succeeded)
                          Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_104, (MR_Integer) 0))));
                      }
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word ProgVar_25;
                MR_Word Var_106;
                MR_Word Component_294;

                mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_22, &ProgVar_25);
                {
                  Component_294 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Component_294, 0) = ((MR_Box) (ProgVar_25));
                }
                {
                  Var_106 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (Component_294));
                  MR_hl_field(MR_mktag(0), Var_106, 1) = ((MR_Box) (Context_11));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeComponentContext_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_106));
                }
              }
              else
              {
                MR_Word Var_109;
                MR_Word Var_110;
                MR_Word Var_119;
                MR_Word Var_120;
                MR_Word Var_121;
                MR_Word Var_122;
                MR_Word Var_123;
                MR_Word Var_126;
                MR_Word Pieces_295;
                MR_Word Spec_296;

                {
                  Var_110 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_110, 0) = ((MR_Box) (Atom_12));
                }
                {
                  Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Var_110));
                  MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[171])));
                }
                {
                  Pieces_295 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_295, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[370])));
                  MR_hl_field(MR_mktag(1), Pieces_295, 1) = ((MR_Box) (Var_109));
                }
                Var_121 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubTerm_302);
                {
                  Var_123 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_123, 0) = ((MR_Box) (Pieces_295));
                }
                {
                  Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Var_123));
                  MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_120 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (Var_121));
                  MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (Var_122));
                }
                {
                  Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (Var_120));
                  MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_296 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_296, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_296, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(0), Spec_296, 2) = ((MR_Box) (Var_119));
                }
                {
                  Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (Spec_296));
                  MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeComponentContext_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_126));
                }
              }
            }
            else
            {
              MR_Word Var_130;
              MR_Word Var_131;
              MR_Word Var_143;
              MR_Word Var_144;
              MR_Word Var_145;
              MR_Word Var_146;
              MR_Word Var_149;
              MR_Word Pieces_300;
              MR_Word Spec_301;

              {
                Var_131 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_131, 0) = ((MR_Box) (Atom_12));
              }
              {
                Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (Var_131));
                MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[174])));
              }
              {
                Pieces_300 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_300, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[352])));
                MR_hl_field(MR_mktag(1), Pieces_300, 1) = ((MR_Box) (Var_130));
              }
              {
                Var_146 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_146, 0) = ((MR_Box) (Pieces_300));
              }
              {
                Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (Var_146));
                MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_144 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_144, 0) = ((MR_Box) (Context_11));
                MR_hl_field(MR_mktag(0), Var_144, 1) = ((MR_Box) (Var_145));
              }
              {
                Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (Var_144));
                MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_301 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_301, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_301, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), Spec_301, 2) = ((MR_Box) (Var_143));
              }
              {
                Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (Spec_301));
                MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeComponentContext_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_149));
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
              MR_Word Var_151;
              MR_Word Var_152;

              succeeded = (SubTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubTermA_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 0))));
                Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubTerms_10, (MR_Integer) 1))));
                succeeded = (Var_151 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SubTermB_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_151, (MR_Integer) 0))));
                  Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_151, (MR_Integer) 1))));
                  succeeded = (Var_152 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeMutable_30;
                MR_Word MaybeVar_35;
                MR_String MutableName_28;
                MR_Word Var_153;
                MR_Word Var_154;
                MR_Word Var_306;
                MR_Word Var_179;
                MR_String Var_180;
                MR_Word Var_181;
                MR_Word Var_182;
                MR_Word Var_183;
                MR_String FinalMutable_38;
                MR_Word FinalVar_39;

                succeeded = ((MR_tag((MR_Word) SubTermA_26)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_153 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTermA_26, (MR_Integer) 0))));
                  Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTermA_26, (MR_Integer) 1))));
                  succeeded = (Var_154 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Var_153)) == (MR_Integer) 0);
                    if (succeeded)
                      MutableName_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_153, (MR_Integer) 0))));
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
                  MR_Word Var_157;
                  MR_Word Var_158;
                  MR_Word Var_170;
                  MR_Word Var_171;
                  MR_Word Var_172;
                  MR_Word Var_173;
                  MR_Word Var_174;
                  MR_Word Var_177;

                  {
                    Var_158 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_158, 0) = ((MR_Box) (Atom_12));
                  }
                  {
                    Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_157, 0) = ((MR_Box) (Var_158));
                    MR_hl_field(MR_mktag(1), Var_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[178])));
                  }
                  {
                    MutablePieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MutablePieces_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[357])));
                    MR_hl_field(MR_mktag(1), MutablePieces_31, 1) = ((MR_Box) (Var_157));
                  }
                  Var_172 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubTermA_26);
                  {
                    Var_174 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_174, 0) = ((MR_Box) (MutablePieces_31));
                  }
                  {
                    Var_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_173, 0) = ((MR_Box) (Var_174));
                    MR_hl_field(MR_mktag(1), Var_173, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_171 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_171, 0) = ((MR_Box) (Var_172));
                    MR_hl_field(MR_mktag(0), Var_171, 1) = ((MR_Box) (Var_173));
                  }
                  {
                    Var_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_170, 0) = ((MR_Box) (Var_171));
                    MR_hl_field(MR_mktag(1), Var_170, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MutableSpec_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MutableSpec_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), MutableSpec_32, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(0), MutableSpec_32, 2) = ((MR_Box) (Var_170));
                  }
                  {
                    Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_177, 0) = ((MR_Box) (MutableSpec_32));
                    MR_hl_field(MR_mktag(1), Var_177, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MaybeMutable_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MaybeMutable_30, 0) = ((MR_Box) (Var_177));
                  }
                }
                succeeded = ((MR_tag((MR_Word) SubTermB_27)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_179 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTermB_27, (MR_Integer) 0))));
                  Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTermB_27, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_179)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_180 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_179, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_180, (MR_String) "!") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_181 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_182 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_181, (MR_Integer) 0))));
                        Var_183 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_181, (MR_Integer) 1))));
                        succeeded = (Var_183 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) Var_182)) == (MR_Integer) 1);
                          if (succeeded)
                            Var_306 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_182, (MR_Integer) 0))));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                  {
                    MaybeVar_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MaybeVar_35, 0) = ((MR_Box) (Var_306));
                  }
                else
                {
                  MR_Word VarPieces_36;
                  MR_Word VarSpec_37;
                  MR_Word Var_186;
                  MR_Word Var_187;
                  MR_Word Var_199;
                  MR_Word Var_200;
                  MR_Word Var_201;
                  MR_Word Var_202;
                  MR_Word Var_203;
                  MR_Word Var_206;

                  {
                    Var_187 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_187, 0) = ((MR_Box) (Atom_12));
                  }
                  {
                    Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_186, 0) = ((MR_Box) (Var_187));
                    MR_hl_field(MR_mktag(1), Var_186, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[181])));
                  }
                  {
                    VarPieces_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), VarPieces_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[382])));
                    MR_hl_field(MR_mktag(1), VarPieces_36, 1) = ((MR_Box) (Var_186));
                  }
                  Var_201 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubTermB_27);
                  {
                    Var_203 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_203, 0) = ((MR_Box) (VarPieces_36));
                  }
                  {
                    Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_202, 0) = ((MR_Box) (Var_203));
                    MR_hl_field(MR_mktag(1), Var_202, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_200 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_200, 0) = ((MR_Box) (Var_201));
                    MR_hl_field(MR_mktag(0), Var_200, 1) = ((MR_Box) (Var_202));
                  }
                  {
                    Var_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_199, 0) = ((MR_Box) (Var_200));
                    MR_hl_field(MR_mktag(1), Var_199, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    VarSpec_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), VarSpec_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), VarSpec_37, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(0), VarSpec_37, 2) = ((MR_Box) (Var_199));
                  }
                  {
                    Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_206, 0) = ((MR_Box) (VarSpec_37));
                    MR_hl_field(MR_mktag(1), Var_206, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MaybeVar_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MaybeVar_35, 0) = ((MR_Box) (Var_206));
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
                  MR_Word Var_208;
                  MR_Word Component_307;
                  MR_Word ProgVar_308;

                  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FinalVar_39, &ProgVar_308);
                  {
                    MutableVar_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MutableVar_40, 0) = ((MR_Box) (FinalMutable_38));
                    MR_hl_field(MR_mktag(0), MutableVar_40, 1) = ((MR_Box) (ProgVar_308));
                  }
                  Component_307 = (MR_Word) ((MR_Word) (MutableVar_40));
                  {
                    Var_208 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_208, 0) = ((MR_Box) (Component_307));
                    MR_hl_field(MR_mktag(0), Var_208, 1) = ((MR_Box) (Context_11));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeComponentContext_8 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_208));
                  }
                }
                else
                {
                  MR_Word Var_209;
                  MR_Word Var_210;
                  MR_Word Specs_309;

                  Var_209 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), MaybeVar_35);
                  Var_210 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeMutable_30);
                  Specs_309 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_209, Var_210);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeComponentContext_8 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_309));
                  }
                }
              }
              else
              {
                MR_Word Var_213;
                MR_Word Var_214;
                MR_Word Var_232;
                MR_Word Var_233;
                MR_Word Var_234;
                MR_Word Var_235;
                MR_Word Var_238;
                MR_Word Pieces_317;
                MR_Word Spec_318;

                {
                  Var_214 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_214, 0) = ((MR_Box) (Atom_12));
                }
                {
                  Var_213 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_213, 0) = ((MR_Box) (Var_214));
                  MR_hl_field(MR_mktag(1), Var_213, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[189])));
                }
                {
                  Pieces_317 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_317, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[352])));
                  MR_hl_field(MR_mktag(1), Pieces_317, 1) = ((MR_Box) (Var_213));
                }
                {
                  Var_235 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_235, 0) = ((MR_Box) (Pieces_317));
                }
                {
                  Var_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_234, 0) = ((MR_Box) (Var_235));
                  MR_hl_field(MR_mktag(1), Var_234, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_233 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_233, 0) = ((MR_Box) (Context_11));
                  MR_hl_field(MR_mktag(0), Var_233, 1) = ((MR_Box) (Var_234));
                }
                {
                  Var_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_232, 0) = ((MR_Box) (Var_233));
                  MR_hl_field(MR_mktag(1), Var_232, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_318 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_318, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_318, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(0), Spec_318, 2) = ((MR_Box) (Var_232));
                }
                {
                  Var_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_238, 0) = ((MR_Box) (Spec_318));
                  MR_hl_field(MR_mktag(1), Var_238, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeComponentContext_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_238));
                }
              }
            }
            else
            {
              MR_String TermStr_41;
              MR_Word Var_242;
              MR_Word Var_243;
              MR_Word Var_252;
              MR_Word Var_253;
              MR_Word Var_254;
              MR_Word Var_255;
              MR_Word Var_258;
              MR_Word Pieces_325;
              MR_Word Spec_326;

              TermStr_41 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, Term_7);
              {
                Var_243 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_243, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_243, 1) = ((MR_Box) (TermStr_41));
              }
              {
                Var_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_242, 0) = ((MR_Box) (Var_243));
                MR_hl_field(MR_mktag(1), Var_242, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[36])));
              }
              {
                Pieces_325 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_325, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[383])));
                MR_hl_field(MR_mktag(1), Pieces_325, 1) = ((MR_Box) (Var_242));
              }
              {
                Var_255 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_255, 0) = ((MR_Box) (Pieces_325));
              }
              {
                Var_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_254, 0) = ((MR_Box) (Var_255));
                MR_hl_field(MR_mktag(1), Var_254, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_253 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_253, 0) = ((MR_Box) (Context_11));
                MR_hl_field(MR_mktag(0), Var_253, 1) = ((MR_Box) (Var_254));
              }
              {
                Var_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_252, 0) = ((MR_Box) (Var_253));
                MR_hl_field(MR_mktag(1), Var_252, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_326 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_326, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_326, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), Spec_326, 2) = ((MR_Box) (Var_252));
              }
              {
                Var_258 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_258, 0) = ((MR_Box) (Spec_326));
                MR_hl_field(MR_mktag(1), Var_258, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeComponentContext_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_258));
              }
            }
          }
        }
      }
    }
    else
    {
      MR_Word Var_262;
      MR_Word Var_263;
      MR_Word Var_272;
      MR_Word Var_273;
      MR_Word Var_274;
      MR_Word Var_275;
      MR_Word Var_276;
      MR_Word Var_279;
      MR_Word Pieces_343;
      MR_Word Spec_344;
      MR_String TermStr_345;

      TermStr_345 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, Term_7);
      {
        Var_263 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_263, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_263, 1) = ((MR_Box) (TermStr_345));
      }
      {
        Var_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_262, 0) = ((MR_Box) (Var_263));
        MR_hl_field(MR_mktag(1), Var_262, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[36])));
      }
      {
        Pieces_343 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_343, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[383])));
        MR_hl_field(MR_mktag(1), Pieces_343, 1) = ((MR_Box) (Var_262));
      }
      Var_274 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Var_276 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_276, 0) = ((MR_Box) (Pieces_343));
      }
      {
        Var_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_275, 0) = ((MR_Box) (Var_276));
        MR_hl_field(MR_mktag(1), Var_275, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_273 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_273, 0) = ((MR_Box) (Var_274));
        MR_hl_field(MR_mktag(0), Var_273, 1) = ((MR_Box) (Var_275));
      }
      {
        Var_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_272, 0) = ((MR_Box) (Var_273));
        MR_hl_field(MR_mktag(1), Var_272, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_344 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_344, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_344, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_344, 2) = ((MR_Box) (Var_272));
      }
      {
        Var_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_279, 0) = ((MR_Box) (Spec_344));
        MR_hl_field(MR_mktag(1), Var_279, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeComponentContext_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_279));
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
            MR_Word Var_35;
            MR_Word Var_36;
            MR_Word Var_41;
            MR_Word Spec_82;

            {
              Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (Context_1));
              MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[376])));
            }
            {
              Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
              MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_82 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_82, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_82, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_82, 2) = ((MR_Box) (Var_35));
            }
            {
              Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Spec_82));
              MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeParams_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_41));
            }
          }
          else
          {
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Word Var_59;
            MR_Word Spec_80;

            {
              Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (Context_1));
              MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[377])));
            }
            {
              Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
              MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_80 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_80, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_80, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_80, 2) = ((MR_Box) (Var_53));
            }
            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Spec_80));
              MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeParams_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_59));
            }
          }
        else
        {
          MR_Word Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

          if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Spec_18;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_77;

            {
              Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Context_1));
              MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[378])));
            }
            {
              Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
              MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_18, 2) = ((MR_Box) (Var_71));
            }
            {
              Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Spec_18));
              MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeParams_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_77));
            }
          }
          else
          {
            MR_Word Inner_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *MaybeParams_7 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_171));
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
      MR_Word Component_84;
      MR_Word CompContext_85;
      MR_Word ComponentsContexts_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_MaybeVars_121_121;
      MR_Word STATE_VARIABLE_MaybeInner_138_138;
      MR_Word STATE_VARIABLE_Specs_152_152;
      MR_Word STATE_VARIABLE_MaybeOuter_155_155;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_HeadVar__6_6;

      Component_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_104, (MR_Integer) 0))));
      CompContext_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_104, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) Component_84)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Inner_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Component_84, (MR_Integer) 0))));

            if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                STATE_VARIABLE_MaybeInner_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeInner_138_138, 0) = ((MR_Box) (Inner_96));
              }
              STATE_VARIABLE_Specs_152_152 = HeadVar__6_6;
            }
            else
            {
              MR_Word Var_129;
              MR_Word Var_130;
              MR_Word Var_136;
              MR_Word Spec_157;

              {
                Var_130 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_130, 0) = ((MR_Box) (CompContext_85));
                MR_hl_field(MR_mktag(0), Var_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[379])));
              }
              {
                Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Var_130));
                MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_157 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_157, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_157, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), Spec_157, 2) = ((MR_Box) (Var_129));
              }
              {
                Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (Spec_157));
                MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_Specs_152_152 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), HeadVar__6_6, Var_136);
              STATE_VARIABLE_MaybeInner_138_138 = HeadVar__4_4;
            }
            STATE_VARIABLE_MaybeOuter_155_155 = HeadVar__3_3;
            STATE_VARIABLE_MaybeVars_121_121 = HeadVar__5_5;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Outer_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Component_84, (MR_Integer) 0))));

            if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                STATE_VARIABLE_MaybeOuter_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeOuter_155_155, 0) = ((MR_Box) (Outer_92));
              }
              STATE_VARIABLE_Specs_152_152 = HeadVar__6_6;
            }
            else
            {
              MR_Word Spec_95;
              MR_Word Var_146;
              MR_Word Var_147;
              MR_Word Var_153;

              {
                Var_147 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_147, 0) = ((MR_Box) (CompContext_85));
                MR_hl_field(MR_mktag(0), Var_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[380])));
              }
              {
                Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (Var_147));
                MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_95 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_95, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_95, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), Spec_95, 2) = ((MR_Box) (Var_146));
              }
              {
                Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) (Spec_95));
                MR_hl_field(MR_mktag(1), Var_153, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_Specs_152_152 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), HeadVar__6_6, Var_153);
              STATE_VARIABLE_MaybeOuter_155_155 = HeadVar__3_3;
            }
            STATE_VARIABLE_MaybeInner_138_138 = HeadVar__4_4;
            STATE_VARIABLE_MaybeVars_121_121 = HeadVar__5_5;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Vars_98 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Component_84, (MR_Integer) 0))));

            if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                STATE_VARIABLE_MaybeVars_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeVars_121_121, 0) = ((MR_Box) (Vars_98));
              }
              STATE_VARIABLE_Specs_152_152 = HeadVar__6_6;
            }
            else
            {
              MR_Word Var_112;
              MR_Word Var_113;
              MR_Word Var_119;
              MR_Word Spec_163;

              {
                Var_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (CompContext_85));
                MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[381])));
              }
              {
                Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Var_113));
                MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_163 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_163, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_163, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), Spec_163, 2) = ((MR_Box) (Var_112));
              }
              {
                Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (Spec_163));
                MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_Specs_152_152 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), HeadVar__6_6, Var_119);
              STATE_VARIABLE_MaybeVars_121_121 = HeadVar__5_5;
            }
            STATE_VARIABLE_MaybeOuter_155_155 = HeadVar__3_3;
            STATE_VARIABLE_MaybeInner_138_138 = HeadVar__4_4;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ComponentsContexts_86;
      next_value_of_HeadVar__3_3 = STATE_VARIABLE_MaybeOuter_155_155;
      next_value_of_HeadVar__4_4 = STATE_VARIABLE_MaybeInner_138_138;
      next_value_of_HeadVar__5_5 = STATE_VARIABLE_MaybeVars_121_121;
      next_value_of_HeadVar__6_6 = STATE_VARIABLE_Specs_152_152;
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
      *MaybeComponentsContexts_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_3[7]));
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
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_61;

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
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[375])));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[374])));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
        }
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[373])));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
        }
        {
          Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[372])));
          MR_hl_field(MR_mktag(1), Pieces_19, 1) = ((MR_Box) (Var_35));
        }
        Var_56 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
        {
          Var_58 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (Pieces_19));
        }
        {
          Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (Var_57));
        }
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_20, 2) = ((MR_Box) (Var_54));
        }
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Spec_20));
          MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeComponentsContexts_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_61));
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
            MR_Word Var_41;
            MR_Word Var_42;
            MR_Word Var_43;
            MR_Word Var_44;
            MR_Word Var_45;
            MR_Word Var_48;

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
              MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[370])));
              MR_hl_field(MR_mktag(1), Pieces_19, 1) = ((MR_Box) (Var_31));
            }
            Var_43 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubTerm_13);
            {
              Var_45 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (Pieces_19));
            }
            {
              Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
              MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (Var_43));
              MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (Var_44));
            }
            {
              Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
              MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(0), Spec_20, 2) = ((MR_Box) (Var_41));
            }
            {
              Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Spec_20));
              MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeComponentContext_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_48));
            }
          }
        }
        else
        {
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_71;
          MR_Word Pieces_114;
          MR_Word Spec_115;

          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_53, 0) = ((MR_Box) (Atom_12));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
            MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[174])));
          }
          {
            Pieces_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_114, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[352])));
            MR_hl_field(MR_mktag(1), Pieces_114, 1) = ((MR_Box) (Var_52));
          }
          {
            Var_68 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Pieces_114));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (Context_11));
            MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (Var_67));
          }
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
            MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_115 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_115, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_115, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_115, 2) = ((MR_Box) (Var_65));
          }
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Spec_115));
            MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeComponentContext_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_71));
          }
        }
      }
      else
      {
        MR_String TermStr_21;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_88;
        MR_Word Var_91;
        MR_Word Pieces_116;
        MR_Word Spec_117;

        TermStr_21 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, Term_7);
        {
          Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (TermStr_21));
        }
        {
          Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
          MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[36])));
        }
        {
          Pieces_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[371])));
          MR_hl_field(MR_mktag(1), Pieces_116, 1) = ((MR_Box) (Var_75));
        }
        {
          Var_88 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (Pieces_116));
        }
        {
          Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
          MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (Context_11));
          MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (Var_87));
        }
        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
          MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_117 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_117, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_117, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_117, 2) = ((MR_Box) (Var_85));
        }
        {
          Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Spec_117));
          MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeComponentContext_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_91));
        }
      }
    }
    else
    {
      MR_Word Var_95;
      MR_Word Var_96;
      MR_Word Var_105;
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_Word Var_112;
      MR_Word Pieces_118;
      MR_Word Spec_119;
      MR_String TermStr_120;

      TermStr_120 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, Term_7);
      {
        Var_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_96, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_96, 1) = ((MR_Box) (TermStr_120));
      }
      {
        Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
        MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[36])));
      }
      {
        Pieces_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_118, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[371])));
        MR_hl_field(MR_mktag(1), Pieces_118, 1) = ((MR_Box) (Var_95));
      }
      Var_107 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Var_109 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_109, 0) = ((MR_Box) (Pieces_118));
      }
      {
        Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Var_109));
        MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_106 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (Var_107));
        MR_hl_field(MR_mktag(0), Var_106, 1) = ((MR_Box) (Var_108));
      }
      {
        Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Var_106));
        MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_119 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_119, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_119, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_119, 2) = ((MR_Box) (Var_105));
      }
      {
        Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Spec_119));
        MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeComponentContext_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_112));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__convert_try_params_2_p_0(
  MR_Word Components_3,
  MR_Word * MaybeParams_4)
{
  {
    parse_tree__parse_goal__convert_try_params_2_4_p_0(Components_3, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), MaybeParams_4);
  }
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
      MR_Word STATE_VARIABLE_Specs_36_36;
      MR_Word STATE_VARIABLE_MaybeIO_37_37;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      Component_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0))));
      Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1))));
      IOStateVar_16 = (MR_Word) (Component_10);
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_MaybeIO_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeIO_37_37, 0) = ((MR_Box) (IOStateVar_16));
        }
        STATE_VARIABLE_Specs_36_36 = HeadVar__3_3;
      }
      else
      {
        MR_Word Spec_19;
        MR_Word Var_30;
        MR_Word Var_31;

        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Context_11));
          MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[369])));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_19, 2) = ((MR_Box) (Var_30));
        }
        {
          STATE_VARIABLE_Specs_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_36_36, 0) = ((MR_Box) (Spec_19));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_36_36, 1) = ((MR_Box) (HeadVar__3_3));
        }
        STATE_VARIABLE_MaybeIO_37_37 = HeadVar__2_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ComponentsContexts_12;
      next_value_of_HeadVar__2_2 = STATE_VARIABLE_MaybeIO_37_37;
      next_value_of_HeadVar__3_3 = STATE_VARIABLE_Specs_36_36;
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
  {
    parse_tree__parse_goal__convert_trace_params_2_7_p_0(Components_3, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), MaybeParams_4);
  }
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
      MR_Word STATE_VARIABLE_MaybeIO_57_57;
      MR_Word STATE_VARIABLE_MaybeRunTime_72_72;
      MR_Word STATE_VARIABLE_Specs_86_86;
      MR_Word STATE_VARIABLE_MaybeCompileTime_87_87;
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
            STATE_VARIABLE_MaybeCompileTime_87_87 = HeadVar__2_2;
            STATE_VARIABLE_MaybeRunTime_72_72 = HeadVar__3_3;
            STATE_VARIABLE_MaybeIO_57_57 = HeadVar__4_4;
            STATE_VARIABLE_Specs_86_86 = HeadVar__6_6;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CompileTime_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Component_16, (MR_Integer) 0))));

            if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                STATE_VARIABLE_MaybeCompileTime_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeCompileTime_87_87, 0) = ((MR_Box) (CompileTime_25));
              }
              STATE_VARIABLE_Specs_86_86 = HeadVar__6_6;
            }
            else
            {
              MR_Word Spec_28;
              MR_Word Var_80;
              MR_Word Var_81;

              {
                Var_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (Context_17));
                MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[366])));
              }
              {
                Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
                MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), Spec_28, 2) = ((MR_Box) (Var_80));
              }
              {
                STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (Spec_28));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (HeadVar__6_6));
              }
              STATE_VARIABLE_MaybeCompileTime_87_87 = HeadVar__2_2;
            }
            STATE_VARIABLE_MaybeRunTime_72_72 = HeadVar__3_3;
            STATE_VARIABLE_MaybeIO_57_57 = HeadVar__4_4;
            STATE_VARIABLE_MutableVars_40_40 = HeadVar__5_5;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word RunTime_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Component_16, (MR_Integer) 0))));

            if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                STATE_VARIABLE_MaybeRunTime_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeRunTime_72_72, 0) = ((MR_Box) (RunTime_29));
              }
              STATE_VARIABLE_Specs_86_86 = HeadVar__6_6;
            }
            else
            {
              MR_Word Var_65;
              MR_Word Var_66;
              MR_Word Spec_89;

              {
                Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (Context_17));
                MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[368])));
              }
              {
                Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
                MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_89 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_89, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_89, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), Spec_89, 2) = ((MR_Box) (Var_65));
              }
              {
                STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (Spec_89));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (HeadVar__6_6));
              }
              STATE_VARIABLE_MaybeRunTime_72_72 = HeadVar__3_3;
            }
            STATE_VARIABLE_MaybeCompileTime_87_87 = HeadVar__2_2;
            STATE_VARIABLE_MaybeIO_57_57 = HeadVar__4_4;
            STATE_VARIABLE_MutableVars_40_40 = HeadVar__5_5;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word IOStateVar_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Component_16, (MR_Integer) 0))));

            if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                STATE_VARIABLE_MaybeIO_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeIO_57_57, 0) = ((MR_Box) (IOStateVar_31));
              }
              STATE_VARIABLE_Specs_86_86 = HeadVar__6_6;
            }
            else
            {
              MR_Word Var_50;
              MR_Word Var_51;
              MR_Word Spec_95;

              {
                Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (Context_17));
                MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[367])));
              }
              {
                Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
                MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_95 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_95, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_95, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(0), Spec_95, 2) = ((MR_Box) (Var_50));
              }
              {
                STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (Spec_95));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (HeadVar__6_6));
              }
              STATE_VARIABLE_MaybeIO_57_57 = HeadVar__4_4;
            }
            STATE_VARIABLE_MaybeCompileTime_87_87 = HeadVar__2_2;
            STATE_VARIABLE_MaybeRunTime_72_72 = HeadVar__3_3;
            STATE_VARIABLE_MutableVars_40_40 = HeadVar__5_5;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ComponentsContexts_18;
      next_value_of_HeadVar__2_2 = STATE_VARIABLE_MaybeCompileTime_87_87;
      next_value_of_HeadVar__3_3 = STATE_VARIABLE_MaybeRunTime_72_72;
      next_value_of_HeadVar__4_4 = STATE_VARIABLE_MaybeIO_57_57;
      next_value_of_HeadVar__5_5 = STATE_VARIABLE_MutableVars_40_40;
      next_value_of_HeadVar__6_6 = STATE_VARIABLE_Specs_86_86;
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
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;

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
          Var_51 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (Pieces_20));
        }
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
          MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (Context_1));
          MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (Var_50));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_21, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(0), Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_21, 2) = ((MR_Box) (Var_48));
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
        Var_34 = (MR_Integer) ((MR_Unsigned) WarningNum_11 + (MR_Unsigned) (MR_Integer) 1);
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
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_76;

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
        Var_71 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_8);
        {
          Var_73 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (Pieces_23));
        }
        {
          Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
          MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (Var_71));
          MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (Var_72));
        }
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), Spec_24, 2) = ((MR_Box) (Var_69));
        }
        {
          Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Spec_24));
          MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeWarnings_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_76));
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
          if ((strcmp(WarningFunctor_13, (MR_String) "singleton_vars") == 0))
          {
            Warning_15 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          else
          if ((strcmp(WarningFunctor_13, (MR_String) "non_tail_recursive_calls") == 0))
          {
            Warning_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
            succeeded = MR_FALSE;
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
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_63;

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
      Var_58 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_8);
      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (Pieces_17));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (Var_59));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_18, 2) = ((MR_Box) (Var_56));
      }
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Spec_18));
        MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeWarning_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_63));
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

    Context_15 = parse_tree__prog_item__goal_get_context_1_f_0(Goal_7);
    if ((StateVars_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeStateVars_16 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_3[0]));
    }
    else
    {
      MR_Word StatePieces_19;
      MR_Word StateSpec_20;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_71;

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
        Var_68 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (StatePieces_19));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (Context_15));
        MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (Var_67));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        StateSpec_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), StateSpec_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), StateSpec_20, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), StateSpec_20, 2) = ((MR_Box) (Var_65));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (StateSpec_20));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeStateVars_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MaybeStateVars_16, 0) = ((MR_Box) (Var_71));
      }
    }
    if ((ColonVars_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeColonVars_21 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_3[0]));
    }
    else
    {
      MR_Word ColonPieces_24;
      MR_Word ColonSpec_25;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_97;

      Var_74 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
      {
        Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (ConstructName_9));
      }
      {
        Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
        MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[149])));
      }
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[357])));
        MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_78));
      }
      ColonPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_74, Var_75);
      {
        Var_94 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (ColonPieces_24));
      }
      {
        Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
        MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (Context_15));
        MR_hl_field(MR_mktag(0), Var_92, 1) = ((MR_Box) (Var_93));
      }
      {
        Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
        MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        ColonSpec_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ColonSpec_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), ColonSpec_25, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), ColonSpec_25, 2) = ((MR_Box) (Var_91));
      }
      {
        Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (ColonSpec_25));
        MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeColonVars_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MaybeColonVars_21, 0) = ((MR_Box) (Var_97));
      }
    }
    if ((PlainVars_11 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeMaybePlainVar_26 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_3[1]));
    else
    {
      MR_Word Var_215 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PlainVars_11, (MR_Integer) 1))));
      MR_Word Var_216 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PlainVars_11, (MR_Integer) 0))));

      if ((Var_215 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_124;

        {
          Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (Var_216));
        }
        {
          MaybeMaybePlainVar_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeMaybePlainVar_26, 0) = ((MR_Box) (Var_124));
        }
      }
      else
      {
        MR_Word PlainPieces_31;
        MR_Word PlainSpec_32;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_115;
        MR_Word Var_116;
        MR_Word Var_117;
        MR_Word Var_118;
        MR_Word Var_121;

        Var_101 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
        {
          Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_106, 1) = ((MR_Box) (ConstructName_9));
        }
        {
          Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Var_106));
          MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[151])));
        }
        {
          Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[357])));
          MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_105));
        }
        PlainPieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_101, Var_102);
        {
          Var_118 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_118, 0) = ((MR_Box) (PlainPieces_31));
        }
        {
          Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (Var_118));
          MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_116 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (Context_15));
          MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (Var_117));
        }
        {
          Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Var_116));
          MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          PlainSpec_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PlainSpec_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), PlainSpec_32, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), PlainSpec_32, 2) = ((MR_Box) (Var_115));
        }
        {
          Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (PlainSpec_32));
          MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeMaybePlainVar_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeMaybePlainVar_26, 0) = ((MR_Box) (Var_121));
        }
      }
    }
    if ((DotVars_13 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeMaybeDotVar_33 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_3[1]));
    else
    {
      MR_Word Var_217 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DotVars_13, (MR_Integer) 1))));
      MR_Word Var_218 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DotVars_13, (MR_Integer) 0))));

      if ((Var_217 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_150;

        {
          Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (Var_218));
        }
        {
          MaybeMaybeDotVar_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeMaybeDotVar_33, 0) = ((MR_Box) (Var_150));
        }
      }
      else
      {
        MR_Word DotPieces_38;
        MR_Word DotSpec_39;
        MR_Word Var_127;
        MR_Word Var_128;
        MR_Word Var_131;
        MR_Word Var_132;
        MR_Word Var_141;
        MR_Word Var_142;
        MR_Word Var_143;
        MR_Word Var_144;
        MR_Word Var_147;

        Var_127 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
        {
          Var_132 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_132, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_132, 1) = ((MR_Box) (ConstructName_9));
        }
        {
          Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (Var_132));
          MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[151])));
        }
        {
          Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[357])));
          MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (Var_131));
        }
        DotPieces_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_127, Var_128);
        {
          Var_144 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_144, 0) = ((MR_Box) (DotPieces_38));
        }
        {
          Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (Var_144));
          MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_142 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_142, 0) = ((MR_Box) (Context_15));
          MR_hl_field(MR_mktag(0), Var_142, 1) = ((MR_Box) (Var_143));
        }
        {
          Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (Var_142));
          MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          DotSpec_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DotSpec_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), DotSpec_39, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), DotSpec_39, 2) = ((MR_Box) (Var_141));
        }
        {
          Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (DotSpec_39));
          MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeMaybeDotVar_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeMaybeDotVar_33, 0) = ((MR_Box) (Var_147));
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
          MR_Word Var_176;
          MR_Word Var_177;
          MR_Word Var_180;
          MR_Word Var_181;
          MR_Word Var_190;
          MR_Word Var_191;
          MR_Word Var_192;
          MR_Word Var_193;
          MR_Word Var_196;

          Var_176 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
          {
            Var_181 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_181, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_181, 1) = ((MR_Box) (ConstructName_9));
          }
          {
            Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_180, 0) = ((MR_Box) (Var_181));
            MR_hl_field(MR_mktag(1), Var_180, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[153])));
          }
          {
            Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_177, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[357])));
            MR_hl_field(MR_mktag(1), Var_177, 1) = ((MR_Box) (Var_180));
          }
          Pieces_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_176, Var_177);
          {
            Var_193 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_193, 0) = ((MR_Box) (Pieces_44));
          }
          {
            Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) (Var_193));
            MR_hl_field(MR_mktag(1), Var_192, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_191 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_191, 0) = ((MR_Box) (Context_15));
            MR_hl_field(MR_mktag(0), Var_191, 1) = ((MR_Box) (Var_192));
          }
          {
            Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_190, 0) = ((MR_Box) (Var_191));
            MR_hl_field(MR_mktag(1), Var_190, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_45, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_45, 2) = ((MR_Box) (Var_190));
          }
          {
            Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_196, 0) = ((MR_Box) (Spec_45));
            MR_hl_field(MR_mktag(1), Var_196, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybePODVar_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_196));
          }
        }
        else
        {
          MR_Word DotVar_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDotVar_43, (MR_Integer) 0))));
          MR_Word Var_174;

          {
            Var_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_174, 0) = ((MR_Box) (DotVar_47));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybePODVar_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_174));
          }
        }
      else
      {
        MR_Word Var_219 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePlainVar_42, (MR_Integer) 0))));

        if ((MaybeDotVar_43 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_175;

          {
            Var_175 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_175, 0) = ((MR_Box) (Var_219));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybePODVar_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_175));
          }
        }
        else
        {
          MR_Word Var_152;
          MR_Word Var_153;
          MR_Word Var_156;
          MR_Word Var_157;
          MR_Word Var_166;
          MR_Word Var_167;
          MR_Word Var_168;
          MR_Word Var_169;
          MR_Word Var_172;
          MR_Word Pieces_204;
          MR_Word Spec_205;

          Var_152 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
          {
            Var_157 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_157, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_157, 1) = ((MR_Box) (ConstructName_9));
          }
          {
            Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (Var_157));
            MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[151])));
          }
          {
            Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[357])));
            MR_hl_field(MR_mktag(1), Var_153, 1) = ((MR_Box) (Var_156));
          }
          Pieces_204 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_152, Var_153);
          {
            Var_169 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_169, 0) = ((MR_Box) (Pieces_204));
          }
          {
            Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (Var_169));
            MR_hl_field(MR_mktag(1), Var_168, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_167 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_167, 0) = ((MR_Box) (Context_15));
            MR_hl_field(MR_mktag(0), Var_167, 1) = ((MR_Box) (Var_168));
          }
          {
            Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (Var_167));
            MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_205 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_205, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_205, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_205, 2) = ((MR_Box) (Var_166));
          }
          {
            Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (Spec_205));
            MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybePODVar_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_172));
          }
        }
      }
    else
    {
      MR_Word Specs_50;
      MR_Word Var_198;
      MR_Word Var_199;
      MR_Word Var_200;
      MR_Word Var_201;
      MR_Word Var_202;
      MR_Word Var_203;

      Var_198 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), MaybeStateVars_16);
      Var_200 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), MaybeColonVars_21);
      Var_202 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[10]), MaybeMaybePlainVar_26);
      Var_203 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[10]), MaybeMaybeDotVar_33);
      Var_201 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_202, Var_203);
      Var_199 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_200, Var_201);
      Specs_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_198, Var_199);
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
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;

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
      Var_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (Pieces_9));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Var_29));
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
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;

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
      Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (Pieces_9));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Var_26));
    }
    return Spec_8;
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
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;

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
      Var_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (Pieces_11));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (Context_7));
      MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_10, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_10, 2) = ((MR_Box) (Var_36));
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
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;

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
      Var_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (Pieces_9));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Var_29));
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
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;

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
      Var_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (Pieces_9));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Var_29));
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
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;

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
      Var_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (Pieces_9));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Var_29));
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

          Var_105 = parse_tree__prog_item__goal_get_context_1_f_0(Goal0_9);
          Goal_14 = parse_tree__parse_goal__bad_purity_goal_3_f_0(GoalTerm_5, Var_105, Purity_6);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_105;

          Var_105 = parse_tree__prog_item__goal_get_context_1_f_0(Goal0_9);
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
