/*
** Automatically generated from `parse_goal.m'
** by the Mercury compiler,
** version rotd-2020-05-02
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
parse_tree__parse_goal__IntroducedFrom__pred__parse_atomic_component__2691__1_2_p_0(
  MR_Word HeadVar__1_119,
  MR_Word * HeadVar__2_120);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1109__1_2_p_0(
  MR_Word HeadVar__1_62,
  MR_Word * HeadVar__2_63);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1108__1_2_p_0(
  MR_Word HeadVar__1_58,
  MR_Word * HeadVar__2_59);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1107__1_2_p_0(
  MR_Word HeadVar__1_54,
  MR_Word * HeadVar__2_55);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1106__1_2_p_0(
  MR_Word HeadVar__1_48,
  MR_Word * HeadVar__2_49);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1064__1_2_p_0(
  MR_Word HeadVar__1_64,
  MR_Word * HeadVar__2_65);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1063__1_2_p_0(
  MR_Word HeadVar__1_60,
  MR_Word * HeadVar__2_61);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1062__1_2_p_0(
  MR_Word HeadVar__1_56,
  MR_Word * HeadVar__2_57);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1061__1_2_p_0(
  MR_Word HeadVar__1_50,
  MR_Word * HeadVar__2_51);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_some_all__566__1_2_p_0(
  MR_Word HeadVar__1_83,
  MR_Word * HeadVar__2_84);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_some_all__565__1_2_p_0(
  MR_Word HeadVar__1_77,
  MR_Word * HeadVar__2_78);

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
parse_tree__parse_goal__parse_goal_then_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_else_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_39,
  MR_Word * STATE_VARIABLE_VarSet_40);

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
parse_tree__parse_goal__parse_catch_then_try_term_args_7_p_0(
  MR_Word CatchTermArgs_8,
  MR_Word MaybeCatchAnyExpr_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_event_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_31,
  MR_Word * STATE_VARIABLE_VarSet_32);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_require_switch_arm_detism_7_p_0(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_29,
  MR_Word * STATE_VARIABLE_VarSet_30);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_require_complete_switch_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_require_detism_7_p_0(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_arbitrary_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_30,
  MR_Word * STATE_VARIABLE_VarSet_31);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_32,
  MR_Word * STATE_VARIABLE_VarSet_33);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_atomic_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_28,
  MR_Word * STATE_VARIABLE_VarSet_29);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_trace_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_28,
  MR_Word * STATE_VARIABLE_VarSet_29);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_implication_7_p_0(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_catch_any_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_semicolon_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_39,
  MR_Word * STATE_VARIABLE_VarSet_40);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_conj_7_p_1(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_conj_7_p_0(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_some_all_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_some_all_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_some_all_7_p_0(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_36,
  MR_Word * STATE_VARIABLE_VarSet_37);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_not_7_p_0(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_disable_warnings_7_p_0(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_39,
  MR_Word * STATE_VARIABLE_VarSet_40);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_promise_purity_7_p_0(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_impure_semipure_7_p_0(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_18,
  MR_Word * STATE_VARIABLE_VarSet_19);

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
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_103_111_97_108_95_105_102_95_95_91_51_93_95_48_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_20,
  MR_Word * STATE_VARIABLE_VarSet_21);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_equal_7_p_0(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_true_fail_7_p_0(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_18,
  MR_Word * STATE_VARIABLE_VarSet_19);

static MR_Word MR_CALL 
parse_tree__parse_goal__should_have_one_call_prefix_3_f_0(
  MR_Word ContextPieces_5,
  MR_Word Context_6,
  MR_String Functor_7);

static void MR_CALL 
parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(
  MR_Word PSDCVars_6,
  MR_Word Goal_7,
  MR_Word ContextPieces_8,
  MR_String ConstructName_9,
  MR_Word * MaybePODVar_10);

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
parse_tree__parse_goal__convert_atomic_params_2_7_p_0(
  MR_Word Context_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * MaybeParams_7);

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
parse_tree__parse_goal__convert_trace_params_2_7_p_0(
  MR_Word HeadVar__1_1,
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

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_2[18][3];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_4[9][1];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_5[2][6];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_6[1][5];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_9[2][4];


/* sealed */ struct parse_tree__parse_goal__vector_common_type_3_0_s {
  const MR_String parse_tree__parse_goal__vector_common_type_3_0__vct_3_f_0;
  const MR_Word parse_tree__parse_goal__vector_common_type_3_0__vct_3_f_1;
};

static /* final */ const struct parse_tree__parse_goal__vector_common_type_3_0_s parse_tree__parse_goal_vector_common_3[5];

/* sealed */ struct parse_tree__parse_goal__vector_common_type_7_0_s {
  const MR_String parse_tree__parse_goal__vector_common_type_7_0__vct_7_f_0;
  const MR_Integer parse_tree__parse_goal__vector_common_type_7_0__vct_7_f_1;
  const MR_Word parse_tree__parse_goal__vector_common_type_7_0__vct_7_f_2;
};

static /* final */ const struct parse_tree__parse_goal__vector_common_type_7_0_s parse_tree__parse_goal_vector_common_7[16];

/* sealed */ struct parse_tree__parse_goal__vector_common_type_8_0_s {
  const MR_String parse_tree__parse_goal__vector_common_type_8_0__vct_8_f_0;
  const MR_Word parse_tree__parse_goal__vector_common_type_8_0__vct_8_f_1;
};

static /* final */ const struct parse_tree__parse_goal__vector_common_type_8_0_s parse_tree__parse_goal_vector_common_8[32];



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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must list at least one warning."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "scope"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "all"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[16])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "then"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "->"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "replace the"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[46])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: malformed if-then-else;"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[48])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "before the condition."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "if"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and add an"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[54])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[56])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[58])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[59])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[61])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[62])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "( if goal then goal else goal )"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[40])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should occur in expressions of the form"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[65])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "operator"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[67])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "else"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[69])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the "))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[71])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[40])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[74])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[75])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[77])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[78])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has no"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[74])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[81])))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "this"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[82])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[84])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[42])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[86])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[87])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[88])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "clause."))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "catch_any"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[91])))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "clauses, and optionally by a single"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[93])))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "catch"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[95])))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which in turn may be followed by zero or more"))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[97])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[99])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "else failure_goal"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[100])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "optionally followed by"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[102])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[104])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "try [try_params] main_goal then success_goal"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[105])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or in an expression of the form"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[107])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[109])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[110])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be used either in an expression of the form"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[111])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "operator,"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[114]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[113])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[115])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[116])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "variable -> goal"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[40])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and should be followed by an expression of the form"))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[120]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[119])))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "optional else-clause and zero or more catch clauses,"))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[122]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[121])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a try expression, with a then-clause,"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[123])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "operator should be preceded by"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[125])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[127])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[128])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must not be qualified."))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[130]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the event name"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[131])))
  },
  /* row 134 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[133])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "impure or semipure."))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[22])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: an event cannot be"))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[137]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[136])))
  },
  /* row 139 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[57]))),
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[39]))),
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[39]))),
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[265])))
  },
  /* row 267 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[92]))),
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[45]))),
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[119])))
  },
  /* row 277 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[276])))
  },
  /* row 278 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[277])))
  },
  /* row 279 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[72]))),
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[40])))
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[57]))),
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[288])))
  },
  /* row 290 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[289])))
  },
  /* row 291 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[290])))
  },
  /* row 292 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[275]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[281])))
  },
  /* row 293 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[292])))
  },
  /* row 294 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[293])))
  },
  /* row 295 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[294])))
  },
  /* row 296 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[40])))
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[298])))
  },
  /* row 300 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[299])))
  },
  /* row 301 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[49]))),
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[107])))
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
    ((MR_Box) ((MR_String) "the binary prefix operator"))
  },
  /* row 358 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should precede"))
  },
  /* row 359 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 360 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row 361 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "element"))
  },
  /* row 362 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the list following the"))
  },
  /* row 363 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "keyword,"))
  },
  /* row 364 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 365 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "keyword should be"))
  },
  /* row 366 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "followed by a list of warnings to disable."))
  },
  /* row 367 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The term"))
  },
  /* row 368 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the warning"))
  },
  /* row 369 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is duplicated"))
  },
  /* row 370 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the infix operator"))
  },
  /* row 371 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the argument of"))
  },
  /* row 372 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: invalid try goal parameter"))
  },
  /* row 373 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 374 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "try"))
  },
  /* row 375 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "operator"))
  },
  /* row 376 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be followed by a list of try parameters;"))
  },
  /* row 377 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the first argument of"))
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

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_2[18][3] = {
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
    ((MR_Box) (parse_tree__parse_goal__parse_goal_some_all_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_some_all_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_9[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_9[1])),
    ((MR_Box) (parse_tree__parse_goal__parse_trace_runtime_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_4[9][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) ((MR_Integer) 0))
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

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_9[2][4] = {
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


static /* final */ const struct parse_tree__parse_goal__vector_common_type_3_0_s parse_tree__parse_goal_vector_common_3[5] = {
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

static /* final */ const struct parse_tree__parse_goal__vector_common_type_7_0_s parse_tree__parse_goal_vector_common_7[16] = {
  /* row 0 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 1 */
  {
    (MR_String) "require_multi",
    (MR_Integer) -1,
    (MR_Integer) 2
  },
  /* row 2 */
  {
    (MR_String) "require_nondet",
    (MR_Integer) -1,
    (MR_Integer) 3
  },
  /* row 3 */
  {
    (MR_String) "require_failure",
    (MR_Integer) -1,
    (MR_Integer) 7
  },
  /* row 4 */
  {
    (MR_String) "require_cc_multi",
    (MR_Integer) -1,
    (MR_Integer) 4
  },
  /* row 5 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 6 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 7 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 8 */
  {
    (MR_String) "require_semidet",
    (MR_Integer) -1,
    (MR_Integer) 1
  },
  /* row 9 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 10 */
  {
    (MR_String) "require_det",
    (MR_Integer) 1,
    (MR_Integer) 0
  },
  /* row 11 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 12 */
  {
    (MR_String) "require_cc_nondet",
    (MR_Integer) -1,
    (MR_Integer) 5
  },
  /* row 13 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 14 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 15 */
  {
    (MR_String) "require_erroneous",
    (MR_Integer) -1,
    (MR_Integer) 6
  },
};

static /* final */ const struct parse_tree__parse_goal__vector_common_type_8_0_s parse_tree__parse_goal_vector_common_8[32] = {
  /* row 0 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 1 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 2 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 3 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 4 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 5 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 6 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 7 */
  {
    (MR_String) "require_switch_arms_cc_multi",
    (MR_Integer) 4
  },
  /* row 8 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 9 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 10 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 11 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 12 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 13 */
  {
    (MR_String) "require_switch_arms_nondet",
    (MR_Integer) 3
  },
  /* row 14 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 15 */
  {
    (MR_String) "require_switch_arms_det",
    (MR_Integer) 0
  },
  /* row 16 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 17 */
  {
    (MR_String) "require_switch_arms_semidet",
    (MR_Integer) 1
  },
  /* row 18 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 19 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 20 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 21 */
  {
    (MR_String) "require_switch_arms_cc_nondet",
    (MR_Integer) 5
  },
  /* row 22 */
  {
    (MR_String) "require_switch_arms_failure",
    (MR_Integer) 7
  },
  /* row 23 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 24 */
  {
    (MR_String) "require_switch_arms_erroneous",
    (MR_Integer) 6
  },
  /* row 25 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 26 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 27 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 28 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 29 */
  {
    (MR_String) "require_switch_arms_multi",
    (MR_Integer) 2
  },
  /* row 30 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 31 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
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
parse_tree__parse_goal__IntroducedFrom__pred__parse_atomic_component__2691__1_2_p_0(
  MR_Word HeadVar__1_119,
  MR_Word * HeadVar__2_120)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_119, HeadVar__2_120);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1109__1_2_p_0(
  MR_Word HeadVar__1_62,
  MR_Word * HeadVar__2_63)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_62, HeadVar__2_63);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1108__1_2_p_0(
  MR_Word HeadVar__1_58,
  MR_Word * HeadVar__2_59)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_58, HeadVar__2_59);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1107__1_2_p_0(
  MR_Word HeadVar__1_54,
  MR_Word * HeadVar__2_55)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_54, HeadVar__2_55);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1106__1_2_p_0(
  MR_Word HeadVar__1_48,
  MR_Word * HeadVar__2_49)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_48, HeadVar__2_49);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1064__1_2_p_0(
  MR_Word HeadVar__1_64,
  MR_Word * HeadVar__2_65)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_64, HeadVar__2_65);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1063__1_2_p_0(
  MR_Word HeadVar__1_60,
  MR_Word * HeadVar__2_61)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_60, HeadVar__2_61);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1062__1_2_p_0(
  MR_Word HeadVar__1_56,
  MR_Word * HeadVar__2_57)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_56, HeadVar__2_57);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1061__1_2_p_0(
  MR_Word HeadVar__1_50,
  MR_Word * HeadVar__2_51)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_50, HeadVar__2_51);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_some_all__566__1_2_p_0(
  MR_Word HeadVar__1_83,
  MR_Word * HeadVar__2_84)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_83, HeadVar__2_84);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_some_all__565__1_2_p_0(
  MR_Word HeadVar__1_77,
  MR_Word * HeadVar__2_78)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_77, HeadVar__2_78);
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
                Var_23 = (MR_Word) (&parse_tree__parse_goal_scalar_common_2[17]);
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
        MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[40])));
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

              mercury__solutions__solutions_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[16]), &ValidGradeNames_20);
              Var_72 = parse_tree__error_util__list_to_pieces_1_f_0(ValidGradeNames_20);
              Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_72, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[40])));
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
parse_tree__parse_goal__parse_goal_then_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20)
{
  {
    MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word ThenTerm_13;
    MR_Word Var_21;
    MR_Word Var_22;

    if (succeeded)
    {
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 1))));
      succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ThenTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
        Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1))));
        succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word SemiColonContext_16;
      MR_Word Var_23;
      MR_String Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;

      succeeded = ((MR_tag((MR_Word) ThenTerm_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenTerm_13, (MR_Integer) 0))));
        Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenTerm_13, (MR_Integer) 1))));
        SemiColonContext_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenTerm_13, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
          succeeded = (strcmp(Var_24, (MR_String) ";") == 0);
          if (succeeded)
          {
            succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1))));
              succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1))));
                succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Spec_18;
        MR_Word Var_51;

        {
          Spec_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_then\'/6"));
          MR_hl_field(MR_mktag(1), Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_18, 3) = ((MR_Box) (SemiColonContext_16));
          MR_hl_field(MR_mktag(1), Spec_18, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[79])));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Spec_18));
          MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_51));
        }
        *STATE_VARIABLE_VarSet_20 = STATE_VARIABLE_VarSet_0_19;
      }
      else
      {
        MR_Word Var_53;

        {
          Var_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_4[8]));
          MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (ArgTerms_7));
          MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) (Context_8));
        }
        parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_53_93_95_48_9_p_0(Var_53, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), ContextPieces_9, MaybeGoal_10, STATE_VARIABLE_VarSet_0_19, STATE_VARIABLE_VarSet_20);
      }
    }
    else
    {
      MR_Word Var_119;
      MR_Word Spec_122;

      {
        Spec_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_122, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_then\'/6"));
        MR_hl_field(MR_mktag(1), Spec_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_122, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_122, 3) = ((MR_Box) (Context_8));
        MR_hl_field(MR_mktag(1), Spec_122, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[117])));
      }
      {
        Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (Spec_122));
        MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_119));
      }
      *STATE_VARIABLE_VarSet_20 = STATE_VARIABLE_VarSet_0_19;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_else_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_39,
  MR_Word * STATE_VARIABLE_VarSet_40)
{
  {
    MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word CondThenTerm_12;
    MR_Word ElseTerm_13;
    MR_Word Var_41;
    MR_Word Var_42;

    if (succeeded)
    {
      CondThenTerm_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 0))));
      Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 1))));
      succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ElseTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0))));
        Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 1))));
        succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word CondTerm_14;
      MR_Word ThenTerm_15;
      MR_Word CondContext_17;
      MR_Word Var_43;
      MR_String Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_String Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;

      succeeded = ((MR_tag((MR_Word) CondThenTerm_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_12, (MR_Integer) 0))));
        Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_12, (MR_Integer) 1))));
        CondContext_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_12, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) Var_43)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_44 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 0))));
          succeeded = (strcmp(Var_44, (MR_String) "if") == 0);
          if (succeeded)
          {
            succeeded = (Var_45 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 0))));
              Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 1))));
              succeeded = (Var_52 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 0))));
                  Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_48 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_48, (MR_String) "then") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        CondTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_49, (MR_Integer) 0))));
                        Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_49, (MR_Integer) 1))));
                        succeeded = (Var_50 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ThenTerm_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0))));
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
      if (succeeded)
      {
        MR_Word MaybeCondGoal_18;
        MR_Word MaybeThenGoal_19;
        MR_Word MaybeElseGoal_20;
        MR_Word STATE_VARIABLE_VarSet_53_53;
        MR_Word STATE_VARIABLE_VarSet_54_54;
        MR_Word Vars_21;
        MR_Word StateVars_22;
        MR_Word CondGoal_23;
        MR_Word CondWarningSpecs_24;
        MR_Word ThenGoal_25;
        MR_Word ThenWarningSpecs_26;
        MR_Word ElseGoal_27;
        MR_Word ElseWarningSpecs_28;

        parse_tree__parse_goal__parse_some_vars_goal_5_p_0(CondTerm_14, ContextPieces_9, &MaybeCondGoal_18, STATE_VARIABLE_VarSet_0_39, &STATE_VARIABLE_VarSet_53_53);
        parse_tree__parse_goal__parse_goal_5_p_0(ThenTerm_15, ContextPieces_9, &MaybeThenGoal_19, STATE_VARIABLE_VarSet_53_53, &STATE_VARIABLE_VarSet_54_54);
        parse_tree__parse_goal__parse_goal_5_p_0(ElseTerm_13, ContextPieces_9, &MaybeElseGoal_20, STATE_VARIABLE_VarSet_54_54, STATE_VARIABLE_VarSet_40);
        succeeded = ((MR_tag((MR_Word) MaybeCondGoal_18)) == (MR_Integer) 1);
        if (succeeded)
        {
          Vars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_18, (MR_Integer) 0))));
          StateVars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_18, (MR_Integer) 1))));
          CondGoal_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_18, (MR_Integer) 2))));
          CondWarningSpecs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_18, (MR_Integer) 3))));
          succeeded = ((MR_tag((MR_Word) MaybeThenGoal_19)) == (MR_Integer) 1);
          if (succeeded)
          {
            ThenGoal_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThenGoal_19, (MR_Integer) 0))));
            ThenWarningSpecs_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThenGoal_19, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) MaybeElseGoal_20)) == (MR_Integer) 1);
            if (succeeded)
            {
              ElseGoal_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElseGoal_20, (MR_Integer) 0))));
              ElseWarningSpecs_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElseGoal_20, (MR_Integer) 1))));
            }
          }
        }
        if (succeeded)
        {
          MR_Word Goal_29;
          MR_Word WarningSpecs_30;
          MR_Word Var_56;

          {
            Goal_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Goal_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Goal_29, 1) = ((MR_Box) (CondContext_17));
            MR_hl_field(MR_mktag(3), Goal_29, 2) = ((MR_Box) (Vars_21));
            MR_hl_field(MR_mktag(3), Goal_29, 3) = ((MR_Box) (StateVars_22));
            MR_hl_field(MR_mktag(3), Goal_29, 4) = ((MR_Box) (CondGoal_23));
            MR_hl_field(MR_mktag(3), Goal_29, 5) = ((MR_Box) (ThenGoal_25));
            MR_hl_field(MR_mktag(3), Goal_29, 6) = ((MR_Box) (ElseGoal_27));
          }
          Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ThenWarningSpecs_26, ElseWarningSpecs_28);
          WarningSpecs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), CondWarningSpecs_24, Var_56);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MaybeGoal_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_29));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WarningSpecs_30));
          }
        }
        else
        {
          MR_Word Specs_31;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;

          Var_57 = parse_tree__maybe_error__get_any_errors_warnings4_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeCondGoal_18);
          Var_59 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeThenGoal_19);
          Var_60 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeElseGoal_20);
          Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_59, Var_60);
          Specs_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_57, Var_58);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeGoal_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_31));
          }
        }
      }
      else
      {
        MR_Word ArrowContext_34;
        MR_Word Var_61;
        MR_String Var_62;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_String Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;

        succeeded = ((MR_tag((MR_Word) CondThenTerm_12)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_12, (MR_Integer) 0))));
          Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_12, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_61)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_62 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 0))));
            succeeded = (strcmp(Var_62, (MR_String) "if") == 0);
            if (succeeded)
            {
              succeeded = (Var_63 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_63, (MR_Integer) 0))));
                Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_63, (MR_Integer) 1))));
                succeeded = (Var_70 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_64)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 0))));
                    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 1))));
                    ArrowContext_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 2))));
                    succeeded = ((MR_tag((MR_Word) Var_65)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_66 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_65, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_66, (MR_String) "->") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_67 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_67, (MR_Integer) 1))));
                          succeeded = (Var_68 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 1))));
                            succeeded = (Var_69 == (MR_Word) ((MR_Unsigned) 0U));
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
          MR_Word Spec_37;
          MR_Word Var_94;

          {
            Spec_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_37, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_else\'/6"));
            MR_hl_field(MR_mktag(1), Spec_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_37, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_37, 3) = ((MR_Box) (ArrowContext_34));
            MR_hl_field(MR_mktag(1), Spec_37, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[50])));
          }
          {
            Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Spec_37));
            MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeGoal_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_94));
          }
          *STATE_VARIABLE_VarSet_40 = STATE_VARIABLE_VarSet_0_39;
        }
        else
        {
          MR_Word ArrowContext_176;
          MR_Word Var_96;
          MR_String Var_97;
          MR_Word Var_98;
          MR_Word Var_99;
          MR_Word Var_100;

          succeeded = ((MR_tag((MR_Word) CondThenTerm_12)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_12, (MR_Integer) 0))));
            Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_12, (MR_Integer) 1))));
            ArrowContext_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CondThenTerm_12, (MR_Integer) 2))));
            succeeded = ((MR_tag((MR_Word) Var_96)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_97 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_96, (MR_Integer) 0))));
              succeeded = (strcmp(Var_97, (MR_String) "->") == 0);
              if (succeeded)
              {
                succeeded = (Var_98 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_98, (MR_Integer) 1))));
                  succeeded = (Var_99 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_99, (MR_Integer) 1))));
                    succeeded = (Var_100 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word Var_133;
            MR_Word Spec_173;

            {
              Spec_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_173, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_else\'/6"));
              MR_hl_field(MR_mktag(1), Spec_173, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_173, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_173, 3) = ((MR_Box) (ArrowContext_176));
              MR_hl_field(MR_mktag(1), Spec_173, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[63])));
            }
            {
              Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (Spec_173));
              MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeGoal_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_133));
            }
            *STATE_VARIABLE_VarSet_40 = STATE_VARIABLE_VarSet_0_39;
          }
          else
          {
            MR_Word FullTerm_38;

            {
              FullTerm_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FullTerm_38, 0) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_4[7]));
              MR_hl_field(MR_mktag(0), FullTerm_38, 1) = ((MR_Box) (ArgTerms_7));
              MR_hl_field(MR_mktag(0), FullTerm_38, 2) = ((MR_Box) (Context_8));
            }
            parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_101_108_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_52_93_95_48_8_p_0(FullTerm_38, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), ContextPieces_9, MaybeGoal_10, STATE_VARIABLE_VarSet_0_39, STATE_VARIABLE_VarSet_40);
          }
        }
      }
    }
    else
    {
      MR_Word Var_166;
      MR_Word Spec_180;

      {
        Spec_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_180, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_else\'/6"));
        MR_hl_field(MR_mktag(1), Spec_180, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_180, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_180, 3) = ((MR_Box) (Context_8));
        MR_hl_field(MR_mktag(1), Spec_180, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[73])));
      }
      {
        Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (Spec_180));
        MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_166));
      }
      *STATE_VARIABLE_VarSet_40 = STATE_VARIABLE_VarSet_0_39;
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
parse_tree__parse_goal__parse_goal_event_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_31,
  MR_Word * STATE_VARIABLE_VarSet_32)
{
  {
    MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word SubGoalTerm_12;
    MR_Word Var_33;

    if (succeeded)
    {
      SubGoalTerm_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 0))));
      Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 1))));
      succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word MaybeSubGoal_13;

      parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_12, ContextPieces_9, &MaybeSubGoal_13, STATE_VARIABLE_VarSet_0_31, STATE_VARIABLE_VarSet_32);
      if (((MR_tag((MR_Word) MaybeSubGoal_13)) == (MR_Integer) 0))
        *MaybeGoal_10 = MaybeSubGoal_13;
      else
      {
        MR_Word SubGoal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_13, (MR_Integer) 0))));
        MR_Word SubGoalWarningSpecs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_13, (MR_Integer) 1))));
        MR_Word SubContext_16;
        MR_Word SymName_17;
        MR_Word CallArgs_18;
        MR_Word Purity_19;

        succeeded = ((MR_tag((MR_Word) SubGoal_14)) == (MR_Integer) 1);
        if (succeeded)
        {
          SubContext_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubGoal_14, (MR_Integer) 0))));
          SymName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubGoal_14, (MR_Integer) 1))));
          CallArgs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubGoal_14, (MR_Integer) 2))));
          Purity_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), SubGoal_14, (MR_Integer) 3))) & (MR_Integer) 3);
          {
            MR_String EventName_20;

            succeeded = (Purity_19 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) SymName_17)) == (MR_Integer) 0);
              if (succeeded)
                EventName_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_17, (MR_Integer) 0))));
            }
            if (succeeded)
            {
              MR_Word Goal_21;

              {
                Goal_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Goal_21, 0) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(MR_mktag(3), Goal_21, 1) = ((MR_Box) (Context_8));
                MR_hl_field(MR_mktag(3), Goal_21, 2) = ((MR_Box) (EventName_20));
                MR_hl_field(MR_mktag(3), Goal_21, 3) = ((MR_Box) (CallArgs_18));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *MaybeGoal_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_21));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_15));
              }
            }
            else
            {
              MR_Word STATE_VARIABLE_Specs_51_51;
              MR_Word STATE_VARIABLE_Specs_67_67;
              MR_Word Var_68;

              if (((MR_tag((MR_Word) SymName_17)) == (MR_Integer) 1))
              {
                MR_Word QualPieces_26;
                MR_Word QualSpec_27;
                MR_Word Var_36;

                Var_36 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_9);
                QualPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_36, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[134])));
                {
                  QualSpec_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), QualSpec_27, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_event\'/6"));
                  MR_hl_field(MR_mktag(1), QualSpec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), QualSpec_27, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(1), QualSpec_27, 3) = ((MR_Box) (SubContext_16));
                  MR_hl_field(MR_mktag(1), QualSpec_27, 4) = ((MR_Box) (QualPieces_26));
                }
                {
                  STATE_VARIABLE_Specs_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_51_51, 0) = ((MR_Box) (QualSpec_27));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_51_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              else
                STATE_VARIABLE_Specs_51_51 = (MR_Word) ((MR_Unsigned) 0U);
              switch (Purity_19) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                case (MR_Integer) 1:
                  {
                    MR_Word PurityPieces_28;
                    MR_Word PuritySpec_29;
                    MR_Word Var_52;

                    Var_52 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_9);
                    PurityPieces_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_52, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[139])));
                    {
                      PuritySpec_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), PuritySpec_29, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_event\'/6"));
                      MR_hl_field(MR_mktag(1), PuritySpec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), PuritySpec_29, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(1), PuritySpec_29, 3) = ((MR_Box) (SubContext_16));
                      MR_hl_field(MR_mktag(1), PuritySpec_29, 4) = ((MR_Box) (PurityPieces_28));
                    }
                    {
                      STATE_VARIABLE_Specs_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_67_67, 0) = ((MR_Box) (PuritySpec_29));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_67_67, 1) = ((MR_Box) (STATE_VARIABLE_Specs_51_51));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  STATE_VARIABLE_Specs_67_67 = STATE_VARIABLE_Specs_51_51;
                  break;
              }
              Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_67_67, SubGoalWarningSpecs_15);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeGoal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_68));
              }
            }
          }
        }
        else
        {
          MR_Word Spec_30;
          MR_Word Var_70;

          Spec_30 = parse_tree__parse_goal__should_have_one_call_prefix_3_f_0(ContextPieces_9, Context_8, (MR_String) "event");
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Spec_30));
            MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (SubGoalWarningSpecs_15));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeGoal_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_70));
          }
        }
      }
    }
    else
    {
      MR_Word Var_72;
      MR_Word Spec_74;

      Spec_74 = parse_tree__parse_goal__should_have_one_call_prefix_3_f_0(ContextPieces_9, Context_8, (MR_String) "event");
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Spec_74));
        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_72));
      }
      *STATE_VARIABLE_VarSet_32 = STATE_VARIABLE_VarSet_0_31;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_require_switch_arm_detism_7_p_0(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_29,
  MR_Word * STATE_VARIABLE_VarSet_30)
{
  {
    MR_bool succeeded;
    MR_Word Detism_14;
    MR_Integer slot_0 = ((MR_hash_string4(Functor_8)) & (MR_Integer) 31);
    MR_String str_1 = ((&parse_tree__parse_goal_vector_common_8[0 + slot_0]))->parse_tree__parse_goal__vector_common_type_8_0__vct_8_f_0;
    MR_Word VarsTerm_15;
    MR_Word SubGoalTerm_16;
    MR_Word Var_31;
    MR_Word Var_32;

    // hashed string simple lookup switch
    ;
    // compute the hash value of the input string
    ;
    // no collisions; no hash chain loop
    ;
    // lookup the string for this hash slot
    ;
    // did we find a match?
    ;
    if ((((str_1 != NULL)) && ((strcmp(str_1, Functor_8) == 0))))
    {
      // we found a match; look up the results
      ;
      Detism_14 = ((&parse_tree__parse_goal_vector_common_8[0 + slot_0]))->parse_tree__parse_goal__vector_common_type_8_0__vct_8_f_1;
    }
    succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      VarsTerm_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 0))));
      Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 1))));
      succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SubGoalTerm_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 0))));
        Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 1))));
        succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word ProgVarsTerm_17;
      MR_Word MaybePSDCVars_18;
      MR_Word MaybeSubGoal_19;
      MR_Word PSDCVars0_20;
      MR_Word SubGoal_21;
      MR_Word SubGoalWarningSpecs_22;

      mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_15, &ProgVarsTerm_17);
      parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_17, STATE_VARIABLE_VarSet_0_29, ContextPieces_11, &MaybePSDCVars_18);
      parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_16, ContextPieces_11, &MaybeSubGoal_19, STATE_VARIABLE_VarSet_0_29, STATE_VARIABLE_VarSet_30);
      succeeded = ((MR_tag((MR_Word) MaybePSDCVars_18)) == (MR_Integer) 1);
      if (succeeded)
      {
        PSDCVars0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_18, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeSubGoal_19)) == (MR_Integer) 1);
        if (succeeded)
        {
          SubGoal_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_19, (MR_Integer) 0))));
          SubGoalWarningSpecs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_19, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Word MaybePODVar_23;

        parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_20, SubGoal_21, ContextPieces_11, Functor_8, &MaybePODVar_23);
        if (((MR_tag((MR_Word) MaybePODVar_23)) == (MR_Integer) 0))
        {
          MR_Word RCSSpecs_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePODVar_23, (MR_Integer) 0))));
          MR_Word Var_34;

          Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), RCSSpecs_26, SubGoalWarningSpecs_22);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeGoal_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_34));
          }
        }
        else
        {
          MR_Word PODVar_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_23, (MR_Integer) 0))));
          MR_Word Goal_25;

          {
            Goal_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Goal_25, 0) = ((MR_Box) ((MR_Unsigned) 13U));
            MR_hl_field(MR_mktag(3), Goal_25, 1) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(3), Goal_25, 2) = ((MR_Box) (PODVar_24));
            MR_hl_field(MR_mktag(3), Goal_25, 3) = (MR_Box) ((MR_Unsigned) (Detism_14));
            MR_hl_field(MR_mktag(3), Goal_25, 4) = ((MR_Box) (SubGoal_21));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MaybeGoal_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_25));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_22));
          }
        }
      }
      else
      {
        MR_Word Specs_27;
        MR_Word Var_35;
        MR_Word Var_36;

        Var_35 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_18);
        Var_36 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_19);
        Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_35, Var_36);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_27));
        }
      }
    }
    else
    {
      MR_Word Spec_28;
      MR_Word Var_38;

      Spec_28 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_8);
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Spec_28));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_38));
      }
      *STATE_VARIABLE_VarSet_30 = STATE_VARIABLE_VarSet_0_29;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_require_complete_switch_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27)
{
  {
    MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word VarsTerm_12;
    MR_Word SubGoalTerm_13;
    MR_Word Var_28;
    MR_Word Var_29;

    if (succeeded)
    {
      VarsTerm_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 0))));
      Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 1))));
      succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SubGoalTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 0))));
        Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 1))));
        succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word ProgVarsTerm_14;
      MR_Word MaybePSDCVars_15;
      MR_Word MaybeSubGoal_16;
      MR_Word PSDCVars0_17;
      MR_Word SubGoal_18;
      MR_Word SubGoalWarningSpecs_19;

      mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_12, &ProgVarsTerm_14);
      parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_14, STATE_VARIABLE_VarSet_0_26, ContextPieces_9, &MaybePSDCVars_15);
      parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_13, ContextPieces_9, &MaybeSubGoal_16, STATE_VARIABLE_VarSet_0_26, STATE_VARIABLE_VarSet_27);
      succeeded = ((MR_tag((MR_Word) MaybePSDCVars_15)) == (MR_Integer) 1);
      if (succeeded)
      {
        PSDCVars0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePSDCVars_15, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeSubGoal_16)) == (MR_Integer) 1);
        if (succeeded)
        {
          SubGoal_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_16, (MR_Integer) 0))));
          SubGoalWarningSpecs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_16, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Word MaybePODVar_20;

        parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_17, SubGoal_18, ContextPieces_9, (MR_String) "require_complete_switch", &MaybePODVar_20);
        if (((MR_tag((MR_Word) MaybePODVar_20)) == (MR_Integer) 0))
        {
          MR_Word RCSSpecs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePODVar_20, (MR_Integer) 0))));
          MR_Word Var_32;

          Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), RCSSpecs_23, SubGoalWarningSpecs_19);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeGoal_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_32));
          }
        }
        else
        {
          MR_Word PODVar_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePODVar_20, (MR_Integer) 0))));
          MR_Word Goal_22;

          {
            Goal_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Goal_22, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Goal_22, 1) = ((MR_Box) (Context_8));
            MR_hl_field(MR_mktag(3), Goal_22, 2) = ((MR_Box) (PODVar_21));
            MR_hl_field(MR_mktag(3), Goal_22, 3) = ((MR_Box) (SubGoal_18));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MaybeGoal_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_22));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_19));
          }
        }
      }
      else
      {
        MR_Word Specs_24;
        MR_Word Var_33;
        MR_Word Var_34;

        Var_33 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybePSDCVars_15);
        Var_34 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_16);
        Specs_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_33, Var_34);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_24));
        }
      }
    }
    else
    {
      MR_Word Spec_25;
      MR_Word Var_37;

      Spec_25 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_9, Context_8, (MR_String) "a variable in a singleton list", (MR_String) "require_complete_switch");
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_37));
      }
      *STATE_VARIABLE_VarSet_27 = STATE_VARIABLE_VarSet_0_26;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_require_detism_7_p_0(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23)
{
  {
    MR_bool succeeded;
    MR_Word Detism_14;
    MR_Integer slot_0 = ((MR_hash_string5(Functor_8)) & (MR_Integer) 15);
    MR_String str_1;
    MR_Word SubGoalTerm_15;
    MR_Word Var_24;

    // hashed string simple lookup switch
    ;
    // compute the hash value of the input string
    ;
    // hash chain loop
    ;
    do
    {
      // lookup the string for this hash slot
      ;
      str_1 = ((&parse_tree__parse_goal_vector_common_7[0 + slot_0]))->parse_tree__parse_goal__vector_common_type_7_0__vct_7_f_0;
      // did we find a match?
      ;
      if ((((str_1 != NULL)) && ((strcmp(str_1, Functor_8) == 0))))
      {
        // we found a match; look up the results
        ;
        Detism_14 = ((&parse_tree__parse_goal_vector_common_7[0 + slot_0]))->parse_tree__parse_goal__vector_common_type_7_0__vct_7_f_2;
        // break out of search loop
        ;
        break;
      }
      else
      {
        // no match yet, so get next slot in hash chain
        ;
        slot_0 = ((&parse_tree__parse_goal_vector_common_7[0 + slot_0]))->parse_tree__parse_goal__vector_common_type_7_0__vct_7_f_1;
      }
    }
    while ((slot_0 >= (MR_Integer) 0));
    succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalTerm_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 0))));
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 1))));
      succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word MaybeSubGoal_16;

      parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_15, ContextPieces_11, &MaybeSubGoal_16, STATE_VARIABLE_VarSet_0_22, STATE_VARIABLE_VarSet_23);
      if (((MR_tag((MR_Word) MaybeSubGoal_16)) == (MR_Integer) 0))
        *MaybeGoal_12 = MaybeSubGoal_16;
      else
      {
        MR_Word SubGoal_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_16, (MR_Integer) 0))));
        MR_Word SubGoalWarningSpecs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_16, (MR_Integer) 1))));
        MR_Word Goal_19;

        {
          Goal_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Goal_19, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(MR_mktag(3), Goal_19, 1) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(3), Goal_19, 2) = (MR_Box) ((MR_Unsigned) (Detism_14));
          MR_hl_field(MR_mktag(3), Goal_19, 3) = ((MR_Box) (SubGoal_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_18));
        }
      }
    }
    else
    {
      MR_Word Spec_21;
      MR_Word Var_26;

      Spec_21 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Spec_21));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_26));
      }
      *STATE_VARIABLE_VarSet_23 = STATE_VARIABLE_VarSet_0_22;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_63;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1109__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_63);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_63));
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_59;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1108__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_59);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_59));
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_55;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1107__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_55);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_55));
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_49;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1106__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_49);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_49));
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_arbitrary_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_30,
  MR_Word * STATE_VARIABLE_VarSet_31)
{
  {
    MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word VarsTerm_12;
    MR_Word SubGoalTerm_13;
    MR_Word Var_32;
    MR_Word Var_33;

    if (succeeded)
    {
      VarsTerm_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 0))));
      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 1))));
      succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SubGoalTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 0))));
        Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 1))));
        succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word GenericVarSet_14;
      MR_Word MaybeVars_15;
      MR_Word MaybeSubGoal_16;
      MR_Word Vars0_17;
      MR_Word StateVars0_18;
      MR_Word DotSVars0_19;
      MR_Word ColonSVars0_20;
      MR_Word SubGoal_21;
      MR_Word SubGoalWarningSpecs_22;
      MR_Word Var_35;

      mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_30, &GenericVarSet_14);
      parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_12, GenericVarSet_14, ContextPieces_9, &MaybeVars_15);
      parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_13, ContextPieces_9, &MaybeSubGoal_16, STATE_VARIABLE_VarSet_0_30, STATE_VARIABLE_VarSet_31);
      succeeded = ((MR_tag((MR_Word) MaybeVars_15)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_15, (MR_Integer) 0))));
        Vars0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0))));
        StateVars0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1))));
        DotSVars0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 2))));
        ColonSVars0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 3))));
        succeeded = ((MR_tag((MR_Word) MaybeSubGoal_16)) == (MR_Integer) 1);
        if (succeeded)
        {
          SubGoal_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_16, (MR_Integer) 0))));
          SubGoalWarningSpecs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_16, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Word Vars_23;
        MR_Word StateVars_24;
        MR_Word DotSVars_25;
        MR_Word ColonSVars_26;
        MR_Word Goal_27;

        mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[12]), Vars0_17, &Vars_23);
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[13]), StateVars0_18, &StateVars_24);
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[14]), DotSVars0_19, &DotSVars_25);
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[15]), ColonSVars0_20, &ColonSVars_26);
        {
          Goal_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Goal_27, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(MR_mktag(3), Goal_27, 1) = ((MR_Box) (Context_8));
          MR_hl_field(MR_mktag(3), Goal_27, 2) = ((MR_Box) (Vars_23));
          MR_hl_field(MR_mktag(3), Goal_27, 3) = ((MR_Box) (StateVars_24));
          MR_hl_field(MR_mktag(3), Goal_27, 4) = ((MR_Box) (DotSVars_25));
          MR_hl_field(MR_mktag(3), Goal_27, 5) = ((MR_Box) (ColonSVars_26));
          MR_hl_field(MR_mktag(3), Goal_27, 6) = ((MR_Box) (SubGoal_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_27));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_22));
        }
      }
      else
      {
        MR_Word Specs_28;
        MR_Word Var_40;
        MR_Word Var_41;

        Var_40 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[8]), MaybeVars_15);
        Var_41 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_16);
        Specs_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_40, Var_41);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_28));
        }
      }
    }
    else
    {
      MR_Word Spec_29;
      MR_Word Var_44;

      Spec_29 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_9, Context_8, (MR_String) "a list of variables", (MR_String) "arbitrary");
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Spec_29));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_44));
      }
      *STATE_VARIABLE_VarSet_31 = STATE_VARIABLE_VarSet_0_30;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_65;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1064__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_65);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_65));
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_61;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1063__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_61);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_61));
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_57;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1062__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_57);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_57));
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_51;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1061__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_51);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_51));
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_32,
  MR_Word * STATE_VARIABLE_VarSet_33)
{
  {
    MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word VarsTerm_14;
    MR_Word SubGoalTerm_15;
    MR_Word Var_34;
    MR_Word Var_35;

    if (succeeded)
    {
      VarsTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 0))));
      Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 1))));
      succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SubGoalTerm_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 0))));
        Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 1))));
        succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word GenericVarSet_16;
      MR_Word MaybeVars_17;
      MR_Word MaybeSubGoal_18;
      MR_Word Vars0_19;
      MR_Word StateVars0_20;
      MR_Word DotSVars0_21;
      MR_Word ColonSVars0_22;
      MR_Word SubGoal_23;
      MR_Word SubGoalWarningSpecs_24;
      MR_Word Var_37;

      mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_32, &GenericVarSet_16);
      parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_14, GenericVarSet_16, ContextPieces_11, &MaybeVars_17);
      parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_15, ContextPieces_11, &MaybeSubGoal_18, STATE_VARIABLE_VarSet_0_32, STATE_VARIABLE_VarSet_33);
      succeeded = ((MR_tag((MR_Word) MaybeVars_17)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_17, (MR_Integer) 0))));
        Vars0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 0))));
        StateVars0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 1))));
        DotSVars0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 2))));
        ColonSVars0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 3))));
        succeeded = ((MR_tag((MR_Word) MaybeSubGoal_18)) == (MR_Integer) 1);
        if (succeeded)
        {
          SubGoal_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_18, (MR_Integer) 0))));
          SubGoalWarningSpecs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_18, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Word Vars_25;
        MR_Word StateVars_26;
        MR_Word DotSVars_27;
        MR_Word ColonSVars_28;

        mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[8]), Vars0_19, &Vars_25);
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[9]), StateVars0_20, &StateVars_26);
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[10]), DotSVars0_21, &DotSVars_27);
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[11]), ColonSVars0_22, &ColonSVars_28);
        if ((strcmp(Functor_8, (MR_String) "promise_equivalent_solutions") == 0))
        {
          MR_Word Goal_29;

          {
            Goal_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Goal_29, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(3), Goal_29, 1) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(3), Goal_29, 2) = ((MR_Box) (Vars_25));
            MR_hl_field(MR_mktag(3), Goal_29, 3) = ((MR_Box) (StateVars_26));
            MR_hl_field(MR_mktag(3), Goal_29, 4) = ((MR_Box) (DotSVars_27));
            MR_hl_field(MR_mktag(3), Goal_29, 5) = ((MR_Box) (ColonSVars_28));
            MR_hl_field(MR_mktag(3), Goal_29, 6) = ((MR_Box) (SubGoal_23));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MaybeGoal_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_29));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_24));
          }
        }
        else
        {
          MR_Word Goal_47;

          {
            Goal_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Goal_47, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), Goal_47, 1) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(3), Goal_47, 2) = ((MR_Box) (Vars_25));
            MR_hl_field(MR_mktag(3), Goal_47, 3) = ((MR_Box) (StateVars_26));
            MR_hl_field(MR_mktag(3), Goal_47, 4) = ((MR_Box) (DotSVars_27));
            MR_hl_field(MR_mktag(3), Goal_47, 5) = ((MR_Box) (ColonSVars_28));
            MR_hl_field(MR_mktag(3), Goal_47, 6) = ((MR_Box) (SubGoal_23));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MaybeGoal_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_47));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_24));
          }
        }
      }
      else
      {
        MR_Word Specs_30;
        MR_Word Var_42;
        MR_Word Var_43;

        Var_42 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[8]), MaybeVars_17);
        Var_43 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_18);
        Specs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_42, Var_43);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_30));
        }
      }
    }
    else
    {
      MR_Word Spec_31;
      MR_Word Var_45;

      Spec_31 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of variables", Functor_8);
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Spec_31));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
      }
      *STATE_VARIABLE_VarSet_33 = STATE_VARIABLE_VarSet_0_32;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_atomic_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_28,
  MR_Word * STATE_VARIABLE_VarSet_29)
{
  {
    MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word ParamsTerm_12;
    MR_Word SubGoalsTerm_13;
    MR_Word Var_30;
    MR_Word Var_31;

    if (succeeded)
    {
      ParamsTerm_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 0))));
      Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 1))));
      succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SubGoalsTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0))));
        Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 1))));
        succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word GenericVarSet_14;
      MR_Word MaybeParams_15;
      MR_Word MaybeSubGoals_16;
      MR_Word MaybeSubGoals_53;
      MR_Word Params_17;
      MR_Word MainGoal_18;
      MR_Word OrElseGoals_19;
      MR_Word SubGoalWarningSpecs_20;

      mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_28, &GenericVarSet_14);
      parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_111_109_105_99_95_112_97_114_97_109_115_95_95_91_49_93_95_48_4_p_0(ParamsTerm_12, GenericVarSet_14, &MaybeParams_15);
      parse_tree__parse_goal__parse_atomic_subgoals_as_list_4_p_0(SubGoalsTerm_13, &MaybeSubGoals_53, STATE_VARIABLE_VarSet_0_28, STATE_VARIABLE_VarSet_29);
      if (((MR_tag((MR_Word) MaybeSubGoals_53)) == (MR_Integer) 0))
      {
        MR_Word Specs_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeSubGoals_53, (MR_Integer) 0))));

        {
          MaybeSubGoals_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeSubGoals_16, 0) = ((MR_Box) (Specs_61));
        }
      }
      else
      {
        MR_Word Goals_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoals_53, (MR_Integer) 0))));
        MR_Word WarningSpecs_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoals_53, (MR_Integer) 1))));

        if ((Goals_54 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Context_57;
          MR_Word Spec_58;
          MR_Word Var_71;

          Context_57 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubGoalsTerm_13);
          {
            Spec_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_58, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_subexpr\'/4"));
            MR_hl_field(MR_mktag(1), Spec_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_58, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(1), Spec_58, 3) = ((MR_Box) (Context_57));
            MR_hl_field(MR_mktag(1), Spec_58, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[354])));
          }
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Spec_58));
            MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (WarningSpecs_55));
          }
          {
            MaybeSubGoals_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MaybeSubGoals_16, 0) = ((MR_Box) (Var_71));
          }
        }
        else
        {
          MR_Word MainSubGoal_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_54, (MR_Integer) 0))));
          MR_Word OrElseSubGoals_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_54, (MR_Integer) 1))));

          {
            MaybeSubGoals_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeSubGoals_16, 0) = ((MR_Box) (MainSubGoal_59));
            MR_hl_field(MR_mktag(1), MaybeSubGoals_16, 1) = ((MR_Box) (OrElseSubGoals_60));
            MR_hl_field(MR_mktag(1), MaybeSubGoals_16, 2) = ((MR_Box) (WarningSpecs_55));
          }
        }
      }
      succeeded = ((MR_tag((MR_Word) MaybeParams_15)) == (MR_Integer) 1);
      if (succeeded)
      {
        Params_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeParams_15, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeSubGoals_16)) == (MR_Integer) 1);
        if (succeeded)
        {
          MainGoal_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoals_16, (MR_Integer) 0))));
          OrElseGoals_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoals_16, (MR_Integer) 1))));
          SubGoalWarningSpecs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoals_16, (MR_Integer) 2))));
        }
      }
      if (succeeded)
      {
        MR_Word MaybeComponents_21;
        MR_Word Var_76;

        Var_76 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ParamsTerm_12);
        parse_tree__parse_goal__convert_atomic_params_2_7_p_0(Var_76, Params_17, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &MaybeComponents_21);
        if (((MR_tag((MR_Word) MaybeComponents_21)) == (MR_Integer) 0))
        {
          MR_Word Specs_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeComponents_21, (MR_Integer) 0))));
          MR_Word Var_33;

          Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_26, SubGoalWarningSpecs_20);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeGoal_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_33));
          }
        }
        else
        {
          MR_Word Outer_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_21, (MR_Integer) 0))));
          MR_Word Inner_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_21, (MR_Integer) 1))));
          MR_Word MaybeOutputVars_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_21, (MR_Integer) 2))));
          MR_Word Goal_25;

          {
            Goal_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Goal_25, 0) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(3), Goal_25, 1) = ((MR_Box) (Context_8));
            MR_hl_field(MR_mktag(3), Goal_25, 2) = ((MR_Box) (Outer_22));
            MR_hl_field(MR_mktag(3), Goal_25, 3) = ((MR_Box) (Inner_23));
            MR_hl_field(MR_mktag(3), Goal_25, 4) = ((MR_Box) (MaybeOutputVars_24));
            MR_hl_field(MR_mktag(3), Goal_25, 5) = ((MR_Box) (MainGoal_18));
            MR_hl_field(MR_mktag(3), Goal_25, 6) = ((MR_Box) (OrElseGoals_19));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MaybeGoal_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_25));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_20));
          }
        }
      }
      else
      {
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Specs_40;

        Var_34 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[6]), MaybeParams_15);
        Var_35 = parse_tree__maybe_error__get_any_errors_warnings3_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[7]), MaybeSubGoals_16);
        Specs_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_34, Var_35);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_40));
        }
      }
    }
    else
    {
      MR_Word Spec_27;
      MR_Word Var_38;

      Spec_27 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_9, Context_8, (MR_String) "a list of atomic parameters", (MR_String) "atomic");
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Spec_27));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_38));
      }
      *STATE_VARIABLE_VarSet_29 = STATE_VARIABLE_VarSet_0_28;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_trace_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_28,
  MR_Word * STATE_VARIABLE_VarSet_29)
{
  {
    MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word ParamsTerm_12;
    MR_Word SubGoalTerm_13;
    MR_Word Var_30;
    MR_Word Var_31;

    if (succeeded)
    {
      ParamsTerm_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 0))));
      Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 1))));
      succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SubGoalTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0))));
        Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 1))));
        succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word GenericVarSet_14;
      MR_Word MaybeParams_15;
      MR_Word MaybeSubGoal_16;
      MR_Word Params_17;
      MR_Word SubGoal_18;
      MR_Word SubGoalWarningSpecs_19;

      mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_28, &GenericVarSet_14);
      parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_112_97_114_97_109_115_95_95_91_50_93_95_48_4_p_0(GenericVarSet_14, ParamsTerm_12, &MaybeParams_15);
      parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_13, ContextPieces_9, &MaybeSubGoal_16, STATE_VARIABLE_VarSet_0_28, STATE_VARIABLE_VarSet_29);
      succeeded = ((MR_tag((MR_Word) MaybeParams_15)) == (MR_Integer) 1);
      if (succeeded)
      {
        Params_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeParams_15, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeSubGoal_16)) == (MR_Integer) 1);
        if (succeeded)
        {
          SubGoal_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_16, (MR_Integer) 0))));
          SubGoalWarningSpecs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_16, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Word MaybeComponents_20;

        parse_tree__parse_goal__convert_trace_params_2_7_p_0(Params_17, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &MaybeComponents_20);
        if (((MR_tag((MR_Word) MaybeComponents_20)) == (MR_Integer) 0))
        {
          MR_Word Specs_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeComponents_20, (MR_Integer) 0))));
          MR_Word Var_33;

          Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_26, SubGoalWarningSpecs_19);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeGoal_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_33));
          }
        }
        else
        {
          MR_Word CompileTime_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_20, (MR_Integer) 0))));
          MR_Word RunTime_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_20, (MR_Integer) 1))));
          MR_Word MaybeIO_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_20, (MR_Integer) 2))));
          MR_Word MutVars_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComponents_20, (MR_Integer) 3))));
          MR_Word Goal_25;

          {
            Goal_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Goal_25, 0) = ((MR_Box) ((MR_Unsigned) 15U));
            MR_hl_field(MR_mktag(3), Goal_25, 1) = ((MR_Box) (Context_8));
            MR_hl_field(MR_mktag(3), Goal_25, 2) = ((MR_Box) (CompileTime_21));
            MR_hl_field(MR_mktag(3), Goal_25, 3) = ((MR_Box) (RunTime_22));
            MR_hl_field(MR_mktag(3), Goal_25, 4) = ((MR_Box) (MaybeIO_23));
            MR_hl_field(MR_mktag(3), Goal_25, 5) = ((MR_Box) (MutVars_24));
            MR_hl_field(MR_mktag(3), Goal_25, 6) = ((MR_Box) (SubGoal_18));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MaybeGoal_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_25));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_19));
          }
        }
      }
      else
      {
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Specs_40;

        Var_34 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[5]), MaybeParams_15);
        Var_35 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_16);
        Specs_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_34, Var_35);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_40));
        }
      }
    }
    else
    {
      MR_Word Spec_27;
      MR_Word Var_38;

      Spec_27 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_9, Context_8, (MR_String) "a list of trace parameters", (MR_String) "trace");
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Spec_27));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_38));
      }
      *STATE_VARIABLE_VarSet_29 = STATE_VARIABLE_VarSet_0_28;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_implication_7_p_0(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27)
{
  {
    MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word TermA_14;
    MR_Word TermB_15;
    MR_Word Var_28;
    MR_Word Var_29;

    if (succeeded)
    {
      TermA_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 0))));
      Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 1))));
      succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TermB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 0))));
        Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 1))));
        succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word MaybeGoalA_16;
      MR_Word MaybeGoalB_17;
      MR_Word STATE_VARIABLE_VarSet_30_30;
      MR_Word GoalA_18;
      MR_Word GoalWarningSpecsA_19;
      MR_Word GoalB_20;
      MR_Word GoalWarningSpecsB_21;

      parse_tree__parse_goal__parse_goal_5_p_0(TermA_14, ContextPieces_11, &MaybeGoalA_16, STATE_VARIABLE_VarSet_0_26, &STATE_VARIABLE_VarSet_30_30);
      parse_tree__parse_goal__parse_goal_5_p_0(TermB_15, ContextPieces_11, &MaybeGoalB_17, STATE_VARIABLE_VarSet_30_30, STATE_VARIABLE_VarSet_27);
      succeeded = ((MR_tag((MR_Word) MaybeGoalA_16)) == (MR_Integer) 1);
      if (succeeded)
      {
        GoalA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoalA_16, (MR_Integer) 0))));
        GoalWarningSpecsA_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoalA_16, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) MaybeGoalB_17)) == (MR_Integer) 1);
        if (succeeded)
        {
          GoalB_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoalB_17, (MR_Integer) 0))));
          GoalWarningSpecsB_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoalB_17, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Word Goal_22;
        MR_Word WarningSpecs_23;

        if ((strcmp(Functor_8, (MR_String) "<=") == 0))
          {
            Goal_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Goal_22, 0) = ((MR_Box) ((MR_Unsigned) 18U));
            MR_hl_field(MR_mktag(3), Goal_22, 1) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(3), Goal_22, 2) = ((MR_Box) (GoalB_20));
            MR_hl_field(MR_mktag(3), Goal_22, 3) = ((MR_Box) (GoalB_20));
          }
        else
        if ((strcmp(Functor_8, (MR_String) "=>") == 0))
          {
            Goal_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Goal_22, 0) = ((MR_Box) ((MR_Unsigned) 18U));
            MR_hl_field(MR_mktag(3), Goal_22, 1) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(3), Goal_22, 2) = ((MR_Box) (GoalA_18));
            MR_hl_field(MR_mktag(3), Goal_22, 3) = ((MR_Box) (GoalB_20));
          }
        else
          {
            Goal_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Goal_22, 0) = ((MR_Box) ((MR_Unsigned) 19U));
            MR_hl_field(MR_mktag(3), Goal_22, 1) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(3), Goal_22, 2) = ((MR_Box) (GoalA_18));
            MR_hl_field(MR_mktag(3), Goal_22, 3) = ((MR_Box) (GoalB_20));
          }
        WarningSpecs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), GoalWarningSpecsA_19, GoalWarningSpecsB_21);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_22));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WarningSpecs_23));
        }
      }
      else
      {
        MR_Word Specs_24;
        MR_Word Var_33;
        MR_Word Var_34;

        Var_33 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeGoalA_16);
        Var_34 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeGoalB_17);
        Specs_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_33, Var_34);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_24));
        }
      }
    }
    else
    {
      MR_Word Spec_25;
      MR_Word Var_35;

      Spec_25 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_11, Context_10, Functor_8);
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_35));
      }
      *STATE_VARIABLE_VarSet_27 = STATE_VARIABLE_VarSet_0_26;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_catch_any_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26)
{
  {
    MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word TermA_12;
    MR_Word ArrowTerm_13;
    MR_Word Var_27;
    MR_Word Var_28;

    if (succeeded)
    {
      TermA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 0))));
      Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 1))));
      succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArrowTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0))));
        Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 1))));
        succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word MaybeCatchAnyExpr_14;
      MR_Word STATE_VARIABLE_VarSet_29_29;

      parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_97_116_99_104_95_97_110_121_95_116_101_114_109_95_95_91_50_93_95_48_6_p_0(ArrowTerm_13, ContextPieces_9, &MaybeCatchAnyExpr_14, STATE_VARIABLE_VarSet_0_25, &STATE_VARIABLE_VarSet_29_29);
      if (((MR_tag((MR_Word) MaybeCatchAnyExpr_14)) == (MR_Integer) 0))
      {
        *MaybeGoal_10 = (MR_Word) (MaybeCatchAnyExpr_14);
        *STATE_VARIABLE_VarSet_26 = STATE_VARIABLE_VarSet_29_29;
      }
      else
      {
        MR_Word CatchAnyExpr_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatchAnyExpr_14, (MR_Integer) 0))));
        MR_Word CatchWarningSpecs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatchAnyExpr_14, (MR_Integer) 1))));
        MR_Word MaybeGoal0_19;
        MR_Word TermAArgs_17;
        MR_Word Var_30;
        MR_String Var_31;

        succeeded = ((MR_tag((MR_Word) TermA_12)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermA_12, (MR_Integer) 0))));
          TermAArgs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermA_12, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_31 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0))));
            succeeded = (strcmp(Var_31, (MR_String) "catch") == 0);
          }
        }
        if (succeeded)
        {
          MR_Word Var_32;

          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (CatchAnyExpr_15));
          }
          parse_tree__parse_goal__parse_catch_then_try_term_args_7_p_0(TermAArgs_17, Var_32, Context_8, ContextPieces_9, &MaybeGoal0_19, STATE_VARIABLE_VarSet_29_29, STATE_VARIABLE_VarSet_26);
        }
        else
        {
          MR_Word Var_35;

          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (CatchAnyExpr_15));
          }
          parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_101_108_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_52_93_95_48_8_p_0(TermA_12, (MR_Word) ((MR_Unsigned) 0U), Var_35, ContextPieces_9, &MaybeGoal0_19, STATE_VARIABLE_VarSet_29_29, STATE_VARIABLE_VarSet_26);
        }
        if (((MR_tag((MR_Word) MaybeGoal0_19)) == (MR_Integer) 0))
        {
          MR_Word Specs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeGoal0_19, (MR_Integer) 0))));
          MR_Word Var_37;

          Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), CatchWarningSpecs_16, Specs_22);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeGoal_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_37));
          }
        }
        else
        {
          MR_Word Goal_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal0_19, (MR_Integer) 0))));
          MR_Word GoalWarningSpecs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal0_19, (MR_Integer) 1))));
          MR_Word Var_38;

          Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), CatchWarningSpecs_16, GoalWarningSpecs_21);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MaybeGoal_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_20));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_38));
          }
        }
      }
    }
    else
    {
      MR_Word Spec_24;
      MR_Word Var_68;

      {
        Spec_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_catch_any\'/6"));
        MR_hl_field(MR_mktag(1), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_24, 3) = ((MR_Box) (Context_8));
        MR_hl_field(MR_mktag(1), Spec_24, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[129])));
      }
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Spec_24));
        MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_68));
      }
      *STATE_VARIABLE_VarSet_26 = STATE_VARIABLE_VarSet_0_25;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_semicolon_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_39,
  MR_Word * STATE_VARIABLE_VarSet_40)
{
  {
    MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word SubGoalTermA_12;
    MR_Word SubGoalTermB_13;
    MR_Word Var_41;
    MR_Word Var_42;

    if (succeeded)
    {
      SubGoalTermA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 0))));
      Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 1))));
      succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SubGoalTermB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0))));
        Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 1))));
        succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word CondGoalTerm_14;
      MR_Word ThenGoalTerm_15;
      MR_Word Var_43;
      MR_String Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;

      succeeded = ((MR_tag((MR_Word) SubGoalTermA_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoalTermA_12, (MR_Integer) 0))));
        Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoalTermA_12, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_43)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_44 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 0))));
          succeeded = (strcmp(Var_44, (MR_String) "->") == 0);
          if (succeeded)
          {
            succeeded = (Var_45 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              CondGoalTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 0))));
              Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 1))));
              succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ThenGoalTerm_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 0))));
                Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 1))));
                succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word MaybeCondGoal_18;
        MR_Word MaybeThenGoal_19;
        MR_Word MaybeElseGoal_20;
        MR_Word STATE_VARIABLE_VarSet_48_48;
        MR_Word STATE_VARIABLE_VarSet_49_49;
        MR_Word Vars_21;
        MR_Word StateVars_22;
        MR_Word CondGoal_23;
        MR_Word CondWarningSpecs_24;
        MR_Word ThenGoal_25;
        MR_Word ThenWarningSpecs_26;
        MR_Word ElseGoal_27;
        MR_Word ElseWarningSpecs_28;

        parse_tree__parse_goal__parse_some_vars_goal_5_p_0(CondGoalTerm_14, ContextPieces_9, &MaybeCondGoal_18, STATE_VARIABLE_VarSet_0_39, &STATE_VARIABLE_VarSet_48_48);
        parse_tree__parse_goal__parse_goal_5_p_0(ThenGoalTerm_15, ContextPieces_9, &MaybeThenGoal_19, STATE_VARIABLE_VarSet_48_48, &STATE_VARIABLE_VarSet_49_49);
        parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermB_13, ContextPieces_9, &MaybeElseGoal_20, STATE_VARIABLE_VarSet_49_49, STATE_VARIABLE_VarSet_40);
        succeeded = ((MR_tag((MR_Word) MaybeCondGoal_18)) == (MR_Integer) 1);
        if (succeeded)
        {
          Vars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_18, (MR_Integer) 0))));
          StateVars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_18, (MR_Integer) 1))));
          CondGoal_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_18, (MR_Integer) 2))));
          CondWarningSpecs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCondGoal_18, (MR_Integer) 3))));
          succeeded = ((MR_tag((MR_Word) MaybeThenGoal_19)) == (MR_Integer) 1);
          if (succeeded)
          {
            ThenGoal_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThenGoal_19, (MR_Integer) 0))));
            ThenWarningSpecs_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeThenGoal_19, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) MaybeElseGoal_20)) == (MR_Integer) 1);
            if (succeeded)
            {
              ElseGoal_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElseGoal_20, (MR_Integer) 0))));
              ElseWarningSpecs_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElseGoal_20, (MR_Integer) 1))));
            }
          }
        }
        if (succeeded)
        {
          MR_Word Goal_29;
          MR_Word WarningSpecs_30;
          MR_Word Var_51;

          {
            Goal_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Goal_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Goal_29, 1) = ((MR_Box) (Context_8));
            MR_hl_field(MR_mktag(3), Goal_29, 2) = ((MR_Box) (Vars_21));
            MR_hl_field(MR_mktag(3), Goal_29, 3) = ((MR_Box) (StateVars_22));
            MR_hl_field(MR_mktag(3), Goal_29, 4) = ((MR_Box) (CondGoal_23));
            MR_hl_field(MR_mktag(3), Goal_29, 5) = ((MR_Box) (ThenGoal_25));
            MR_hl_field(MR_mktag(3), Goal_29, 6) = ((MR_Box) (ElseGoal_27));
          }
          Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ThenWarningSpecs_26, ElseWarningSpecs_28);
          WarningSpecs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), CondWarningSpecs_24, Var_51);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MaybeGoal_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_29));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WarningSpecs_30));
          }
        }
        else
        {
          MR_Word Specs_31;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word Var_55;

          Var_52 = parse_tree__maybe_error__get_any_errors_warnings4_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeCondGoal_18);
          Var_54 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeThenGoal_19);
          Var_55 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeElseGoal_20);
          Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_54, Var_55);
          Specs_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_52, Var_53);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeGoal_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_31));
          }
        }
      }
      else
      {
        MR_Word MaybeSubGoalA_32;
        MR_Word MaybeSubGoalB_33;
        MR_Word STATE_VARIABLE_VarSet_56_56;
        MR_Word SubGoalA_34;
        MR_Word GoalWarningSpecsA_35;
        MR_Word SubGoalB_36;
        MR_Word GoalWarningSpecsB_37;

        parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermA_12, ContextPieces_9, &MaybeSubGoalA_32, STATE_VARIABLE_VarSet_0_39, &STATE_VARIABLE_VarSet_56_56);
        parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermB_13, ContextPieces_9, &MaybeSubGoalB_33, STATE_VARIABLE_VarSet_56_56, STATE_VARIABLE_VarSet_40);
        succeeded = ((MR_tag((MR_Word) MaybeSubGoalA_32)) == (MR_Integer) 1);
        if (succeeded)
        {
          SubGoalA_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_32, (MR_Integer) 0))));
          GoalWarningSpecsA_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_32, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) MaybeSubGoalB_33)) == (MR_Integer) 1);
          if (succeeded)
          {
            SubGoalB_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_33, (MR_Integer) 0))));
            GoalWarningSpecsB_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_33, (MR_Integer) 1))));
          }
        }
        if (succeeded)
        {
          MR_Word Goal_63;
          MR_Word WarningSpecs_64;

          {
            Goal_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Goal_63, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), Goal_63, 1) = ((MR_Box) (Context_8));
            MR_hl_field(MR_mktag(3), Goal_63, 2) = ((MR_Box) (SubGoalA_34));
            MR_hl_field(MR_mktag(3), Goal_63, 3) = ((MR_Box) (SubGoalB_36));
          }
          WarningSpecs_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), GoalWarningSpecsA_35, GoalWarningSpecsB_37);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MaybeGoal_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_63));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WarningSpecs_64));
          }
        }
        else
        {
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Specs_65;

          Var_58 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalA_32);
          Var_59 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalB_33);
          Specs_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_58, Var_59);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeGoal_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_65));
          }
        }
      }
    }
    else
    {
      MR_Word Spec_38;
      MR_Word Var_61;

      Spec_38 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_9, Context_8, (MR_String) ";");
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Spec_38));
        MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_61));
      }
      *STATE_VARIABLE_VarSet_40 = STATE_VARIABLE_VarSet_0_39;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_conj_7_p_1(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27)
{
  {
    MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word SubGoalTermA_14;
    MR_Word SubGoalTermB_15;
    MR_Word Var_28;
    MR_Word Var_29;

    if (succeeded)
    {
      SubGoalTermA_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 0))));
      Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 1))));
      succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SubGoalTermB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 0))));
        Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 1))));
        succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word MaybeSubGoalA_16;
      MR_Word MaybeSubGoalB_17;
      MR_Word STATE_VARIABLE_VarSet_30_30;
      MR_Word SubGoalA_18;
      MR_Word GoalWarningSpecsA_19;
      MR_Word SubGoalB_20;
      MR_Word GoalWarningSpecsB_21;

      parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermA_14, ContextPieces_11, &MaybeSubGoalA_16, STATE_VARIABLE_VarSet_0_26, &STATE_VARIABLE_VarSet_30_30);
      parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermB_15, ContextPieces_11, &MaybeSubGoalB_17, STATE_VARIABLE_VarSet_30_30, STATE_VARIABLE_VarSet_27);
      succeeded = ((MR_tag((MR_Word) MaybeSubGoalA_16)) == (MR_Integer) 1);
      if (succeeded)
      {
        SubGoalA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_16, (MR_Integer) 0))));
        GoalWarningSpecsA_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_16, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) MaybeSubGoalB_17)) == (MR_Integer) 1);
        if (succeeded)
        {
          SubGoalB_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_17, (MR_Integer) 0))));
          GoalWarningSpecsB_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_17, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Word Goal_22;
        MR_Word WarningSpecs_23;

        {
          Goal_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Goal_22, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Goal_22, 1) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(3), Goal_22, 2) = ((MR_Box) (SubGoalA_18));
          MR_hl_field(MR_mktag(3), Goal_22, 3) = ((MR_Box) (SubGoalB_20));
        }
        WarningSpecs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), GoalWarningSpecsA_19, GoalWarningSpecsB_21);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_22));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WarningSpecs_23));
        }
      }
      else
      {
        MR_Word Specs_24;
        MR_Word Var_32;
        MR_Word Var_33;

        Var_32 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalA_16);
        Var_33 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalB_17);
        Specs_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_32, Var_33);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_24));
        }
      }
    }
    else
    {
      MR_Word Spec_25;
      MR_Word Var_34;

      Spec_25 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_11, Context_10, Functor_8);
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_34));
      }
      *STATE_VARIABLE_VarSet_27 = STATE_VARIABLE_VarSet_0_26;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_conj_7_p_0(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27)
{
  {
    MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word SubGoalTermA_14;
    MR_Word SubGoalTermB_15;
    MR_Word Var_28;
    MR_Word Var_29;

    if (succeeded)
    {
      SubGoalTermA_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 0))));
      Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 1))));
      succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SubGoalTermB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 0))));
        Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 1))));
        succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word MaybeSubGoalA_16;
      MR_Word MaybeSubGoalB_17;
      MR_Word STATE_VARIABLE_VarSet_30_30;
      MR_Word SubGoalA_18;
      MR_Word GoalWarningSpecsA_19;
      MR_Word SubGoalB_20;
      MR_Word GoalWarningSpecsB_21;

      parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermA_14, ContextPieces_11, &MaybeSubGoalA_16, STATE_VARIABLE_VarSet_0_26, &STATE_VARIABLE_VarSet_30_30);
      parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermB_15, ContextPieces_11, &MaybeSubGoalB_17, STATE_VARIABLE_VarSet_30_30, STATE_VARIABLE_VarSet_27);
      succeeded = ((MR_tag((MR_Word) MaybeSubGoalA_16)) == (MR_Integer) 1);
      if (succeeded)
      {
        SubGoalA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_16, (MR_Integer) 0))));
        GoalWarningSpecsA_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalA_16, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) MaybeSubGoalB_17)) == (MR_Integer) 1);
        if (succeeded)
        {
          SubGoalB_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_17, (MR_Integer) 0))));
          GoalWarningSpecsB_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoalB_17, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Word Goal_22;
        MR_Word WarningSpecs_23;

        {
          Goal_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Goal_22, 0) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(2), Goal_22, 1) = ((MR_Box) (SubGoalA_18));
          MR_hl_field(MR_mktag(2), Goal_22, 2) = ((MR_Box) (SubGoalB_20));
        }
        WarningSpecs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), GoalWarningSpecsA_19, GoalWarningSpecsB_21);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_22));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WarningSpecs_23));
        }
      }
      else
      {
        MR_Word Specs_24;
        MR_Word Var_32;
        MR_Word Var_33;

        Var_32 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalA_16);
        Var_33 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoalB_17);
        Specs_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_32, Var_33);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_24));
        }
      }
    }
    else
    {
      MR_Word Spec_25;
      MR_Word Var_34;

      Spec_25 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_11, Context_10, Functor_8);
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_34));
      }
      *STATE_VARIABLE_VarSet_27 = STATE_VARIABLE_VarSet_0_26;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_some_all_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_84;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_some_all__566__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_84);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_84));
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_some_all_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_78;

    parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_some_all__565__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_78);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_78));
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_some_all_7_p_0(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_36,
  MR_Word * STATE_VARIABLE_VarSet_37)
{
  {
    MR_bool succeeded;
    MR_Word QuantType_14;
    MR_Word VarsTailPieces_15;
    MR_Word QVarsTerm_16;
    MR_Word SubGoalTerm_17;
    MR_Word Var_60;
    MR_Word Var_61;

    if ((strcmp(Functor_8, (MR_String) "all") == 0))
    {
      QuantType_14 = (MR_Integer) 1;
      VarsTailPieces_15 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[38]));
    }
    else
    {
      QuantType_14 = (MR_Integer) 0;
      VarsTailPieces_15 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[21]));
    }
    succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      QVarsTerm_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 0))));
      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 1))));
      succeeded = (Var_60 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SubGoalTerm_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 0))));
        Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 1))));
        succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word GenericVarSet_18;
      MR_Word VarsContextPieces_19;
      MR_Word MaybeVars_20;
      MR_Word MaybeSubGoal_21;
      MR_Word Var_62;
      MR_Word Vars0_22;
      MR_Word StateVars0_23;
      MR_Word SubGoal_24;
      MR_Word SubGoalWarningSpecs_25;
      MR_Word Var_64;

      mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_36, &GenericVarSet_18);
      Var_62 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), VarsTailPieces_15);
      VarsContextPieces_19 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_11, Var_62);
      parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), QVarsTerm_16, GenericVarSet_18, VarsContextPieces_19, &MaybeVars_20);
      parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_17, ContextPieces_11, &MaybeSubGoal_21, STATE_VARIABLE_VarSet_0_36, STATE_VARIABLE_VarSet_37);
      succeeded = ((MR_tag((MR_Word) MaybeVars_20)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVars_20, (MR_Integer) 0))));
        Vars0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 0))));
        StateVars0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) MaybeSubGoal_21)) == (MR_Integer) 1);
        if (succeeded)
        {
          SubGoal_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_21, (MR_Integer) 0))));
          SubGoalWarningSpecs_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_21, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Word Vars_26;
        MR_Word StateVars_27;
        MR_Word Goal1_28;
        MR_Word Goal_31;

        mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[6]), Vars0_22, &Vars_26);
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[7]), StateVars0_23, &StateVars_27);
        if ((StateVars_27 == (MR_Word) ((MR_Unsigned) 0U)))
          Goal1_28 = SubGoal_24;
        else
          {
            Goal1_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Goal1_28, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), Goal1_28, 1) = (MR_Box) (((((MR_Unsigned) (QuantType_14) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(3), Goal1_28, 2) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(3), Goal1_28, 3) = ((MR_Box) (StateVars_27));
            MR_hl_field(MR_mktag(3), Goal1_28, 4) = ((MR_Box) (SubGoal_24));
          }
        if ((Vars_26 == (MR_Word) ((MR_Unsigned) 0U)))
          Goal_31 = Goal1_28;
        else
          {
            Goal_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Goal_31, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), Goal_31, 1) = (MR_Box) (((((MR_Unsigned) (QuantType_14) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
            MR_hl_field(MR_mktag(3), Goal_31, 2) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(3), Goal_31, 3) = ((MR_Box) (Vars_26));
            MR_hl_field(MR_mktag(3), Goal_31, 4) = ((MR_Box) (Goal1_28));
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_31));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_25));
        }
      }
      else
      {
        MR_Word Specs_34;
        MR_Word Var_69;
        MR_Word Var_70;

        Var_69 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[2]), MaybeVars_20);
        Var_70 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_21);
        Specs_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_69, Var_70);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_34));
        }
      }
    }
    else
    {
      MR_Word Spec_35;
      MR_Word Var_72;

      Spec_35 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of variables", Functor_8);
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Spec_35));
        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_72));
      }
      *STATE_VARIABLE_VarSet_37 = STATE_VARIABLE_VarSet_0_36;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_not_7_p_0(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22)
{
  {
    MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word SubGoalTerm_14;
    MR_Word Var_23;

    if (succeeded)
    {
      SubGoalTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 0))));
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 1))));
      succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word MaybeSubGoal_15;

      parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_14, ContextPieces_11, &MaybeSubGoal_15, STATE_VARIABLE_VarSet_0_21, STATE_VARIABLE_VarSet_22);
      if (((MR_tag((MR_Word) MaybeSubGoal_15)) == (MR_Integer) 0))
        *MaybeGoal_12 = MaybeSubGoal_15;
      else
      {
        MR_Word SubGoal_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_15, (MR_Integer) 0))));
        MR_Word SubGoalWarningSpecs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_15, (MR_Integer) 1))));
        MR_Word Goal_18;

        {
          Goal_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Goal_18, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(MR_mktag(3), Goal_18, 1) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(3), Goal_18, 2) = ((MR_Box) (SubGoal_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_17));
        }
      }
    }
    else
    {
      MR_Word Spec_20;
      MR_Word Var_25;

      Spec_20 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Spec_20));
        MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_25));
      }
      *STATE_VARIABLE_VarSet_22 = STATE_VARIABLE_VarSet_0_21;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_disable_warnings_7_p_0(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_39,
  MR_Word * STATE_VARIABLE_VarSet_40)
{
  {
    MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word WarningsTerm_14;
    MR_Word SubGoalTerm_15;
    MR_Word Var_41;
    MR_Word Var_42;

    if (succeeded)
    {
      WarningsTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 0))));
      Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 1))));
      succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SubGoalTerm_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0))));
        Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 1))));
        succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word GenericVarSet_16;
      MR_Word MaybeWarnings_17;
      MR_Word MaybeSubGoal_18;
      MR_Word Warnings_19;
      MR_Word WarningsWarningSpecs_20;
      MR_Word SubGoal_21;
      MR_Word SubGoalWarningSpecs_22;

      mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_39, &GenericVarSet_16);
      parse_tree__parse_goal__parse_warnings_6_p_0(GenericVarSet_16, WarningsTerm_14, Functor_8, ContextPieces_11, (MR_Integer) 1, &MaybeWarnings_17);
      parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_15, ContextPieces_11, &MaybeSubGoal_18, STATE_VARIABLE_VarSet_0_39, STATE_VARIABLE_VarSet_40);
      succeeded = ((MR_tag((MR_Word) MaybeWarnings_17)) == (MR_Integer) 1);
      if (succeeded)
      {
        Warnings_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWarnings_17, (MR_Integer) 0))));
        WarningsWarningSpecs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWarnings_17, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) MaybeSubGoal_18)) == (MR_Integer) 1);
        if (succeeded)
        {
          SubGoal_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_18, (MR_Integer) 0))));
          SubGoalWarningSpecs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_18, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Word WarningSpecs_23;
        MR_Word WarningsContext_24;
        MR_Word WarningsBag_25;
        MR_Word WarningsCounts_26;
        MR_Word NonDuplicateWarnings_27;
        MR_Word DuplicateSpecs_28;
        MR_Word Var_45;

        WarningSpecs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), WarningsWarningSpecs_20, SubGoalWarningSpecs_22);
        WarningsContext_24 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), WarningsTerm_14);
        Var_45 = mercury__bag__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0));
        mercury__bag__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), Warnings_19, Var_45, &WarningsBag_25);
        mercury__bag__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), WarningsBag_25, &WarningsCounts_26);
        parse_tree__parse_goal__generate_warnings_for_duplicate_warnings_5_p_0(WarningsContext_24, ContextPieces_11, WarningsCounts_26, &NonDuplicateWarnings_27, &DuplicateSpecs_28);
        if ((DuplicateSpecs_28 == (MR_Word) ((MR_Unsigned) 0U)))
          if ((NonDuplicateWarnings_27 == (MR_Word) ((MR_Unsigned) 0U)))
            if ((WarningsWarningSpecs_20 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Pieces_32;
              MR_Word Spec_33;
              MR_Word Var_47;
              MR_Word Var_48;
              MR_Word Var_50;
              MR_Word Var_53;
              MR_Word Var_56;
              MR_Word Var_57;
              MR_Word Var_70;

              Var_47 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_11);
              {
                Var_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_57, 0) = ((MR_Box) (Functor_8));
              }
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
                MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[34])));
              }
              {
                Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[381])));
                MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
              }
              {
                Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[355])));
                MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
              }
              {
                Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_50));
              }
              Pieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_47, Var_48);
              {
                Spec_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_33, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_disable_warnings\'/7"));
                MR_hl_field(MR_mktag(1), Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_33, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_33, 3) = ((MR_Box) (WarningsContext_24));
                MR_hl_field(MR_mktag(1), Spec_33, 4) = ((MR_Box) (Pieces_32));
              }
              {
                Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Spec_33));
                MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (WarningSpecs_23));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeGoal_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_70));
              }
            }
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *MaybeGoal_12 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SubGoal_21));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WarningSpecs_23));
              }
          else
          {
            MR_Word HeadWarning_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonDuplicateWarnings_27, (MR_Integer) 0))));
            MR_Word TailWarnings_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonDuplicateWarnings_27, (MR_Integer) 1))));
            MR_Word Goal_31;

            {
              Goal_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Goal_31, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(MR_mktag(3), Goal_31, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), Goal_31, 2) = (MR_Box) ((MR_Unsigned) (HeadWarning_29));
              MR_hl_field(MR_mktag(3), Goal_31, 3) = ((MR_Box) (TailWarnings_30));
              MR_hl_field(MR_mktag(3), Goal_31, 4) = ((MR_Box) (SubGoal_21));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *MaybeGoal_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_31));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WarningSpecs_23));
            }
          }
        else
        {
          MR_Word Var_46;

          Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), DuplicateSpecs_28, WarningSpecs_23);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeGoal_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_46));
          }
        }
      }
      else
      {
        MR_Word Specs_38;
        MR_Word Var_71;
        MR_Word Var_72;

        Var_71 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[3]), MaybeWarnings_17);
        Var_72 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_18);
        Specs_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_71, Var_72);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_38));
        }
      }
    }
    else
    {
      MR_Word Var_74;
      MR_Word Spec_76;

      Spec_76 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of warnings to disable", Functor_8);
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Spec_76));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_74));
      }
      *STATE_VARIABLE_VarSet_40 = STATE_VARIABLE_VarSet_0_39;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_promise_purity_7_p_0(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23)
{
  {
    MR_bool succeeded;
    MR_Word Purity_14;
    MR_Word SubGoalTerm_15;
    MR_Word Var_24;

    if ((strcmp(Functor_8, (MR_String) "promise_pure") == 0))
      Purity_14 = (MR_Integer) 0;
    else
    if ((strcmp(Functor_8, (MR_String) "promise_impure") == 0))
      Purity_14 = (MR_Integer) 2;
    else
      Purity_14 = (MR_Integer) 1;
    succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalTerm_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 0))));
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 1))));
      succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word MaybeSubGoal_16;

      parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_15, ContextPieces_11, &MaybeSubGoal_16, STATE_VARIABLE_VarSet_0_22, STATE_VARIABLE_VarSet_23);
      if (((MR_tag((MR_Word) MaybeSubGoal_16)) == (MR_Integer) 0))
        *MaybeGoal_12 = MaybeSubGoal_16;
      else
      {
        MR_Word SubGoal_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_16, (MR_Integer) 0))));
        MR_Word SubGoalWarningSpecs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubGoal_16, (MR_Integer) 1))));
        MR_Word Goal_19;

        {
          Goal_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Goal_19, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(MR_mktag(3), Goal_19, 1) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(3), Goal_19, 2) = (MR_Box) ((MR_Unsigned) (Purity_14));
          MR_hl_field(MR_mktag(3), Goal_19, 3) = ((MR_Box) (SubGoal_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SubGoalWarningSpecs_18));
        }
      }
    }
    else
    {
      MR_Word Spec_21;
      MR_Word Var_26;

      Spec_21 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Spec_21));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_26));
      }
      *STATE_VARIABLE_VarSet_23 = STATE_VARIABLE_VarSet_0_22;
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_impure_semipure_7_p_0(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_18,
  MR_Word * STATE_VARIABLE_VarSet_19)
{
  {
    MR_bool succeeded;
    MR_Word Purity_14;
    MR_Word SubGoalTerm_15;
    MR_Word Var_20;

    if ((strcmp(Functor_8, (MR_String) "impure") == 0))
      Purity_14 = (MR_Integer) 2;
    else
      Purity_14 = (MR_Integer) 1;
    succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalTerm_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 0))));
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 1))));
      succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word MaybeGoal0_16;

      parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_15, ContextPieces_11, &MaybeGoal0_16, STATE_VARIABLE_VarSet_0_18, STATE_VARIABLE_VarSet_19);
      parse_tree__parse_goal__apply_purity_marker_to_maybe_goal_4_p_0(SubGoalTerm_15, Purity_14, MaybeGoal0_16, MaybeGoal_12);
    }
    else
    {
      MR_Word Spec_17;
      MR_Word Var_22;

      Spec_17 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_8);
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_22));
      }
      *STATE_VARIABLE_VarSet_19 = STATE_VARIABLE_VarSet_0_18;
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
      MaybeVars_16 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_4[6]));
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
        {
          MR_Integer case_num_0 = (MR_Integer) -1;

          switch (MR_nth_code_unit(Name_10, 0)) {
            case (MR_Integer) 38:
              if (MR_offset_streq(1, Name_10, (MR_String) "&"))
                case_num_0 = (MR_Integer) 0;
              break;
            case (MR_Integer) 44:
              if (MR_offset_streq(1, Name_10, (MR_String) ","))
                case_num_0 = (MR_Integer) 1;
              break;
            case (MR_Integer) 59:
              if (MR_offset_streq(1, Name_10, (MR_String) ";"))
                case_num_0 = (MR_Integer) 2;
              break;
            case (MR_Integer) 60:
              if (((MR_nth_code_unit(Name_10, 1)) == (MR_Integer) 61))
                switch (MR_nth_code_unit(Name_10, 2)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 3;
                    break;
                  case (MR_Integer) 62:
                    if (MR_offset_streq(3, Name_10, (MR_String) "<=>"))
                      case_num_0 = (MR_Integer) 3;
                    break;
                }
              break;
            case (MR_Integer) 61:
              switch (MR_nth_code_unit(Name_10, 1)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 4;
                  break;
                case (MR_Integer) 62:
                  if (MR_offset_streq(2, Name_10, (MR_String) "=>"))
                    case_num_0 = (MR_Integer) 3;
                  break;
              }
              break;
            case (MR_Integer) 92:
              if (MR_offset_streq(1, Name_10, (MR_String) "\\+"))
                case_num_0 = (MR_Integer) 5;
              break;
            case (MR_Integer) 97:
              switch (MR_nth_code_unit(Name_10, 1)) {
                case (MR_Integer) 108:
                  if (MR_offset_streq(2, Name_10, (MR_String) "all"))
                    case_num_0 = (MR_Integer) 6;
                  break;
                case (MR_Integer) 114:
                  if (MR_offset_streq(2, Name_10, (MR_String) "arbitrary"))
                    case_num_0 = (MR_Integer) 7;
                  break;
                case (MR_Integer) 116:
                  if (MR_offset_streq(2, Name_10, (MR_String) "atomic"))
                    case_num_0 = (MR_Integer) 8;
                  break;
              }
              break;
            case (MR_Integer) 99:
              if (((((((((MR_nth_code_unit(Name_10, 1)) == (MR_Integer) 97)) && (((MR_nth_code_unit(Name_10, 2)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(Name_10, 3)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(Name_10, 4)) == (MR_Integer) 104))))
                switch (MR_nth_code_unit(Name_10, 5)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 9;
                    break;
                  case (MR_Integer) 95:
                    if (MR_offset_streq(6, Name_10, (MR_String) "catch_any"))
                      case_num_0 = (MR_Integer) 10;
                    break;
                }
              break;
            case (MR_Integer) 100:
              if (((((((((((((((((((((((((((((MR_nth_code_unit(Name_10, 1)) == (MR_Integer) 105)) && (((MR_nth_code_unit(Name_10, 2)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(Name_10, 3)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(Name_10, 4)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(Name_10, 5)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(Name_10, 6)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Name_10, 7)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(Name_10, 8)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(Name_10, 9)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(Name_10, 10)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(Name_10, 11)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(Name_10, 12)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Name_10, 13)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(Name_10, 14)) == (MR_Integer) 103))))
                switch (MR_nth_code_unit(Name_10, 15)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 11;
                    break;
                  case (MR_Integer) 115:
                    if (MR_offset_streq(16, Name_10, (MR_String) "disable_warnings"))
                      case_num_0 = (MR_Integer) 11;
                    break;
                }
              break;
            case (MR_Integer) 101:
              switch (MR_nth_code_unit(Name_10, 1)) {
                case (MR_Integer) 108:
                  if (MR_offset_streq(2, Name_10, (MR_String) "else"))
                    case_num_0 = (MR_Integer) 12;
                  break;
                case (MR_Integer) 118:
                  if (MR_offset_streq(2, Name_10, (MR_String) "event"))
                    case_num_0 = (MR_Integer) 13;
                  break;
              }
              break;
            case (MR_Integer) 102:
              if (MR_offset_streq(1, Name_10, (MR_String) "fail"))
                case_num_0 = (MR_Integer) 14;
              break;
            case (MR_Integer) 105:
              switch (MR_nth_code_unit(Name_10, 1)) {
                case (MR_Integer) 102:
                  if (MR_offset_streq(2, Name_10, (MR_String) "if"))
                    case_num_0 = (MR_Integer) 15;
                  break;
                case (MR_Integer) 109:
                  if (MR_offset_streq(2, Name_10, (MR_String) "impure"))
                    case_num_0 = (MR_Integer) 16;
                  break;
                case (MR_Integer) 115:
                  if (MR_offset_streq(2, Name_10, (MR_String) "is"))
                    case_num_0 = (MR_Integer) 4;
                  break;
              }
              break;
            case (MR_Integer) 110:
              if (MR_offset_streq(1, Name_10, (MR_String) "not"))
                case_num_0 = (MR_Integer) 5;
              break;
            case (MR_Integer) 112:
              if (((((((((((((((MR_nth_code_unit(Name_10, 1)) == (MR_Integer) 114)) && (((MR_nth_code_unit(Name_10, 2)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(Name_10, 3)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(Name_10, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Name_10, 5)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(Name_10, 6)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Name_10, 7)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(Name_10, 8)) {
                  case (MR_Integer) 101:
                    if (((((((((((((((((((((((((((((((((((((MR_nth_code_unit(Name_10, 9)) == (MR_Integer) 113)) && (((MR_nth_code_unit(Name_10, 10)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(Name_10, 11)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Name_10, 12)) == (MR_Integer) 118)))) && (((MR_nth_code_unit(Name_10, 13)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(Name_10, 14)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(Name_10, 15)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Name_10, 16)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(Name_10, 17)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(Name_10, 18)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(Name_10, 19)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(Name_10, 20)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(Name_10, 21)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(Name_10, 22)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(Name_10, 23)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(Name_10, 24)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Name_10, 25)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(Name_10, 26)) == (MR_Integer) 110))))
                      switch (MR_nth_code_unit(Name_10, 27)) {
                        case (MR_Integer) 95:
                          if (MR_offset_streq(28, Name_10, (MR_String) "promise_equivalent_solution_sets"))
                            case_num_0 = (MR_Integer) 17;
                          break;
                        case (MR_Integer) 115:
                          if (MR_offset_streq(28, Name_10, (MR_String) "promise_equivalent_solutions"))
                            case_num_0 = (MR_Integer) 17;
                          break;
                      }
                    break;
                  case (MR_Integer) 105:
                    if (MR_offset_streq(9, Name_10, (MR_String) "promise_impure"))
                      case_num_0 = (MR_Integer) 18;
                    break;
                  case (MR_Integer) 112:
                    if (MR_offset_streq(9, Name_10, (MR_String) "promise_pure"))
                      case_num_0 = (MR_Integer) 18;
                    break;
                  case (MR_Integer) 115:
                    if (MR_offset_streq(9, Name_10, (MR_String) "promise_semipure"))
                      case_num_0 = (MR_Integer) 18;
                    break;
                }
              break;
            case (MR_Integer) 114:
              if (((((((((((((((MR_nth_code_unit(Name_10, 1)) == (MR_Integer) 101)) && (((MR_nth_code_unit(Name_10, 2)) == (MR_Integer) 113)))) && (((MR_nth_code_unit(Name_10, 3)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(Name_10, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Name_10, 5)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(Name_10, 6)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Name_10, 7)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(Name_10, 8)) {
                  case (MR_Integer) 99:
                    switch (MR_nth_code_unit(Name_10, 9)) {
                      case (MR_Integer) 99:
                        if (((MR_nth_code_unit(Name_10, 10)) == (MR_Integer) 95))
                          switch (MR_nth_code_unit(Name_10, 11)) {
                            case (MR_Integer) 109:
                              if (MR_offset_streq(12, Name_10, (MR_String) "require_cc_multi"))
                                case_num_0 = (MR_Integer) 19;
                              break;
                            case (MR_Integer) 110:
                              if (MR_offset_streq(12, Name_10, (MR_String) "require_cc_nondet"))
                                case_num_0 = (MR_Integer) 19;
                              break;
                          }
                        break;
                      case (MR_Integer) 111:
                        if (MR_offset_streq(10, Name_10, (MR_String) "require_complete_switch"))
                          case_num_0 = (MR_Integer) 20;
                        break;
                    }
                    break;
                  case (MR_Integer) 100:
                    if (MR_offset_streq(9, Name_10, (MR_String) "require_det"))
                      case_num_0 = (MR_Integer) 19;
                    break;
                  case (MR_Integer) 101:
                    if (MR_offset_streq(9, Name_10, (MR_String) "require_erroneous"))
                      case_num_0 = (MR_Integer) 19;
                    break;
                  case (MR_Integer) 102:
                    if (MR_offset_streq(9, Name_10, (MR_String) "require_failure"))
                      case_num_0 = (MR_Integer) 19;
                    break;
                  case (MR_Integer) 109:
                    if (MR_offset_streq(9, Name_10, (MR_String) "require_multi"))
                      case_num_0 = (MR_Integer) 19;
                    break;
                  case (MR_Integer) 110:
                    if (MR_offset_streq(9, Name_10, (MR_String) "require_nondet"))
                      case_num_0 = (MR_Integer) 19;
                    break;
                  case (MR_Integer) 115:
                    switch (MR_nth_code_unit(Name_10, 9)) {
                      case (MR_Integer) 101:
                        if (MR_offset_streq(10, Name_10, (MR_String) "require_semidet"))
                          case_num_0 = (MR_Integer) 19;
                        break;
                      case (MR_Integer) 119:
                        if (((((((((((((((((((((MR_nth_code_unit(Name_10, 10)) == (MR_Integer) 105)) && (((MR_nth_code_unit(Name_10, 11)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(Name_10, 12)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(Name_10, 13)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(Name_10, 14)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(Name_10, 15)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(Name_10, 16)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(Name_10, 17)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(Name_10, 18)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(Name_10, 19)) == (MR_Integer) 95))))
                          switch (MR_nth_code_unit(Name_10, 20)) {
                            case (MR_Integer) 99:
                              if (((((MR_nth_code_unit(Name_10, 21)) == (MR_Integer) 99)) && (((MR_nth_code_unit(Name_10, 22)) == (MR_Integer) 95))))
                                switch (MR_nth_code_unit(Name_10, 23)) {
                                  case (MR_Integer) 109:
                                    if (MR_offset_streq(24, Name_10, (MR_String) "require_switch_arms_cc_multi"))
                                      case_num_0 = (MR_Integer) 21;
                                    break;
                                  case (MR_Integer) 110:
                                    if (MR_offset_streq(24, Name_10, (MR_String) "require_switch_arms_cc_nondet"))
                                      case_num_0 = (MR_Integer) 21;
                                    break;
                                }
                              break;
                            case (MR_Integer) 100:
                              if (MR_offset_streq(21, Name_10, (MR_String) "require_switch_arms_det"))
                                case_num_0 = (MR_Integer) 21;
                              break;
                            case (MR_Integer) 101:
                              if (MR_offset_streq(21, Name_10, (MR_String) "require_switch_arms_erroneous"))
                                case_num_0 = (MR_Integer) 21;
                              break;
                            case (MR_Integer) 102:
                              if (MR_offset_streq(21, Name_10, (MR_String) "require_switch_arms_failure"))
                                case_num_0 = (MR_Integer) 21;
                              break;
                            case (MR_Integer) 109:
                              if (MR_offset_streq(21, Name_10, (MR_String) "require_switch_arms_multi"))
                                case_num_0 = (MR_Integer) 21;
                              break;
                            case (MR_Integer) 110:
                              if (MR_offset_streq(21, Name_10, (MR_String) "require_switch_arms_nondet"))
                                case_num_0 = (MR_Integer) 21;
                              break;
                            case (MR_Integer) 115:
                              if (MR_offset_streq(21, Name_10, (MR_String) "require_switch_arms_semidet"))
                                case_num_0 = (MR_Integer) 21;
                              break;
                          }
                        break;
                    }
                    break;
                }
              break;
            case (MR_Integer) 115:
              switch (MR_nth_code_unit(Name_10, 1)) {
                case (MR_Integer) 101:
                  if (MR_offset_streq(2, Name_10, (MR_String) "semipure"))
                    case_num_0 = (MR_Integer) 16;
                  break;
                case (MR_Integer) 111:
                  if (MR_offset_streq(2, Name_10, (MR_String) "some"))
                    case_num_0 = (MR_Integer) 6;
                  break;
              }
              break;
            case (MR_Integer) 116:
              switch (MR_nth_code_unit(Name_10, 1)) {
                case (MR_Integer) 104:
                  if (MR_offset_streq(2, Name_10, (MR_String) "then"))
                    case_num_0 = (MR_Integer) 22;
                  break;
                case (MR_Integer) 114:
                  switch (MR_nth_code_unit(Name_10, 2)) {
                    case (MR_Integer) 97:
                      if (MR_offset_streq(3, Name_10, (MR_String) "trace"))
                        case_num_0 = (MR_Integer) 23;
                      break;
                    case (MR_Integer) 117:
                      if (MR_offset_streq(3, Name_10, (MR_String) "true"))
                        case_num_0 = (MR_Integer) 14;
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
                parse_tree__parse_goal__parse_goal_conj_7_p_1(Name_10, Args_11, Context_12, ContextPieces_7, &MaybeGoalPrime_13, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_20_20);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 1:
              {
                // case ","
                ;
                parse_tree__parse_goal__parse_goal_conj_7_p_0(Name_10, Args_11, Context_12, ContextPieces_7, &MaybeGoalPrime_13, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_20_20);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 2:
              {
                // case ";"
                ;
                parse_tree__parse_goal__parse_goal_semicolon_6_p_0(Args_11, Context_12, ContextPieces_7, &MaybeGoalPrime_13, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_20_20);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 3:
              {
                // case "<=", "<=>", "=>"
                ;
                parse_tree__parse_goal__parse_goal_implication_7_p_0(Name_10, Args_11, Context_12, ContextPieces_7, &MaybeGoalPrime_13, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_20_20);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 4:
              {
                // case "=", "is"
                ;
                parse_tree__parse_goal__parse_goal_equal_7_p_0(Name_10, Args_11, Context_12, ContextPieces_7, &MaybeGoalPrime_13, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_20_20);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 5:
              {
                // case "\+", "not"
                ;
                parse_tree__parse_goal__parse_goal_not_7_p_0(Name_10, Args_11, Context_12, ContextPieces_7, &MaybeGoalPrime_13, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_20_20);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 6:
              {
                // case "all", "some"
                ;
                parse_tree__parse_goal__parse_goal_some_all_7_p_0(Name_10, Args_11, Context_12, ContextPieces_7, &MaybeGoalPrime_13, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_20_20);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 7:
              {
                // case "arbitrary"
                ;
                parse_tree__parse_goal__parse_goal_arbitrary_6_p_0(Args_11, Context_12, ContextPieces_7, &MaybeGoalPrime_13, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_20_20);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 8:
              {
                // case "atomic"
                ;
                parse_tree__parse_goal__parse_goal_atomic_6_p_0(Args_11, Context_12, ContextPieces_7, &MaybeGoalPrime_13, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_20_20);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 9:
              {
                // case "catch"
                ;
                parse_tree__parse_goal__parse_catch_then_try_term_args_7_p_0(Args_11, (MR_Word) ((MR_Unsigned) 0U), Context_12, ContextPieces_7, &MaybeGoalPrime_13, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_20_20);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 10:
              {
                // case "catch_any"
                ;
                parse_tree__parse_goal__parse_goal_catch_any_6_p_0(Args_11, Context_12, ContextPieces_7, &MaybeGoalPrime_13, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_20_20);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 11:
              {
                // case "disable_warning", "disable_warnings"
                ;
                parse_tree__parse_goal__parse_goal_disable_warnings_7_p_0(Name_10, Args_11, Context_12, ContextPieces_7, &MaybeGoalPrime_13, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_20_20);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 12:
              {
                // case "else"
                ;
                parse_tree__parse_goal__parse_goal_else_6_p_0(Args_11, Context_12, ContextPieces_7, &MaybeGoalPrime_13, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_20_20);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 13:
              {
                // case "event"
                ;
                parse_tree__parse_goal__parse_goal_event_6_p_0(Args_11, Context_12, ContextPieces_7, &MaybeGoalPrime_13, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_20_20);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 14:
              {
                // case "fail", "true"
                ;
                parse_tree__parse_goal__parse_goal_true_fail_7_p_0(Name_10, Args_11, Context_12, ContextPieces_7, &MaybeGoalPrime_13, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_20_20);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 15:
              {
                // case "if"
                ;
                parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_103_111_97_108_95_105_102_95_95_91_51_93_95_48_6_p_0(Args_11, Context_12, &MaybeGoalPrime_13, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_20_20);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 16:
              {
                // case "impure", "semipure"
                ;
                parse_tree__parse_goal__parse_goal_impure_semipure_7_p_0(Name_10, Args_11, Context_12, ContextPieces_7, &MaybeGoalPrime_13, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_20_20);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 17:
              {
                // case "promise_equivalent_solution_sets", "promise_equivalent_solutions"
                ;
                parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0(Name_10, Args_11, Context_12, ContextPieces_7, &MaybeGoalPrime_13, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_20_20);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 18:
              {
                // case "promise_impure", "promise_pure", "promise_semipure"
                ;
                parse_tree__parse_goal__parse_goal_promise_purity_7_p_0(Name_10, Args_11, Context_12, ContextPieces_7, &MaybeGoalPrime_13, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_20_20);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 19:
              {
                // case "require_cc_multi", "require_cc_nondet", "require_det", "require_erroneous", "require_failure", "require_multi", "require_nondet", "require_semidet"
                ;
                parse_tree__parse_goal__parse_goal_require_detism_7_p_0(Name_10, Args_11, Context_12, ContextPieces_7, &MaybeGoalPrime_13, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_20_20);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 20:
              {
                // case "require_complete_switch"
                ;
                parse_tree__parse_goal__parse_goal_require_complete_switch_6_p_0(Args_11, Context_12, ContextPieces_7, &MaybeGoalPrime_13, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_20_20);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 21:
              {
                // case "require_switch_arms_cc_multi", "require_switch_arms_cc_nondet", "require_switch_arms_det", "require_switch_arms_erroneous", "require_switch_arms_failure", "require_switch_arms_multi", "require_switch_arms_nondet", "require_switch_arms_semidet"
                ;
                parse_tree__parse_goal__parse_goal_require_switch_arm_detism_7_p_0(Name_10, Args_11, Context_12, ContextPieces_7, &MaybeGoalPrime_13, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_20_20);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 22:
              {
                // case "then"
                ;
                parse_tree__parse_goal__parse_goal_then_6_p_0(Args_11, Context_12, ContextPieces_7, &MaybeGoalPrime_13, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_20_20);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 23:
              {
                // case "trace"
                ;
                parse_tree__parse_goal__parse_goal_trace_6_p_0(Args_11, Context_12, ContextPieces_7, &MaybeGoalPrime_13, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_20_20);
                succeeded = MR_TRUE;
              }
              break;
          }
        }
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
          MR_hl_field(MR_mktag(1), Goal_16, 1) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_4[5]));
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
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_103_111_97_108_95_105_102_95_95_91_51_93_95_48_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_20,
  MR_Word * STATE_VARIABLE_VarSet_21)
{
  {
    MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Spec_19;
    MR_Word Var_103;
    MR_Word ThenGoalTerm_13;
    MR_Word ThenContext_14;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_String Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;

    if (succeeded)
    {
      Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 0))));
      Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 1))));
      succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0))));
          Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1))));
          ThenContext_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 2))));
          succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
            succeeded = (strcmp(Var_24, (MR_String) "then") == 0);
            if (succeeded)
            {
              succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1))));
                succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ThenGoalTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0))));
                  Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1))));
                  succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word SemiColonContext_17;
      MR_Word Var_29;
      MR_String Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;

      succeeded = ((MR_tag((MR_Word) ThenGoalTerm_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenGoalTerm_13, (MR_Integer) 0))));
        Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenGoalTerm_13, (MR_Integer) 1))));
        SemiColonContext_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenGoalTerm_13, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_30 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 0))));
          succeeded = (strcmp(Var_30, (MR_String) ";") == 0);
          if (succeeded)
          {
            succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 1))));
              succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 1))));
                succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
        {
          Spec_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_if\'/6"));
          MR_hl_field(MR_mktag(1), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_19, 3) = ((MR_Box) (SemiColonContext_17));
          MR_hl_field(MR_mktag(1), Spec_19, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[79])));
        }
      else
        {
          Spec_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_if\'/6"));
          MR_hl_field(MR_mktag(1), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_19, 3) = ((MR_Box) (ThenContext_14));
          MR_hl_field(MR_mktag(1), Spec_19, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[85])));
        }
    }
    else
      {
        Spec_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_if\'/6"));
        MR_hl_field(MR_mktag(1), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_19, 3) = ((MR_Box) (Context_8));
        MR_hl_field(MR_mktag(1), Spec_19, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[89])));
      }
    {
      Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Spec_19));
      MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_103));
    }
    *STATE_VARIABLE_VarSet_21 = STATE_VARIABLE_VarSet_0_20;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_equal_7_p_0(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20)
{
  {
    MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word TermA0_14;
    MR_Word TermB0_15;
    MR_Word Var_21;
    MR_Word Var_22;

    if (succeeded)
    {
      TermA0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 0))));
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 1))));
      succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TermB0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
        Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1))));
        succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word TermA_16;
      MR_Word TermB_17;
      MR_Word Var_23;

      mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermA0_14, &TermA_16);
      mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermB0_15, &TermB_17);
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (TermA_16));
        MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) (TermB_17));
        MR_hl_field(MR_mktag(0), Var_23, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word Spec_18;
      MR_Word Var_26;

      Spec_18 = parse_tree__parse_goal__should_have_two_terms_infix_3_f_0(ContextPieces_11, Context_10, Functor_8);
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Spec_18));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_26));
      }
    }
    *STATE_VARIABLE_VarSet_20 = STATE_VARIABLE_VarSet_0_19;
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
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[370])));
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

static void MR_CALL 
parse_tree__parse_goal__parse_goal_true_fail_7_p_0(
  MR_String Functor_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_18,
  MR_Word * STATE_VARIABLE_VarSet_19)
{
  {
    MR_Word Goal_14;

    if ((strcmp(Functor_8, (MR_String) "fail") == 0))
      {
        Goal_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Goal_14, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), Goal_14, 1) = ((MR_Box) (Context_10));
      }
    else
      {
        Goal_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Goal_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Goal_14, 1) = ((MR_Box) (Context_10));
      }
    if ((ArgTerms_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    else
    {
      MR_Word Spec_17;
      MR_Word Var_20;
      MR_Word Pieces_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_31;
      MR_Word Var_34;
      MR_Word Var_35;

      Var_28 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_11);
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (Functor_8));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[141])));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[355])));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
      }
      Pieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_28, Var_29);
      {
        Spec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_17, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_goal.should_have_no_args\'/3"));
        MR_hl_field(MR_mktag(1), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_17, 3) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(1), Spec_17, 4) = ((MR_Box) (Pieces_27));
      }
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
      }
    }
    *STATE_VARIABLE_VarSet_19 = STATE_VARIABLE_VarSet_0_18;
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
      MaybeStateVars_16 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_4[3]));
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
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[377])));
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
      MaybeColonVars_21 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_4[3]));
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
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[377])));
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
      MaybeMaybePlainVar_26 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_4[4]));
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
          MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[377])));
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
      MaybeMaybeDotVar_33 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_4[4]));
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
          MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[377])));
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
            MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[377])));
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
            MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[377])));
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
      *MaybeComponentsContexts_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_4[2]));
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

    parse_tree__parse_goal__IntroducedFrom__pred__parse_atomic_component__2691__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_120);
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
      *MaybeComponentsContexts_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_4[1]));
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
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[40])));
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
                  MR_hl_field(MR_mktag(1), Pieces_250, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[371])));
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
                    MR_hl_field(MR_mktag(1), MutablePieces_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[377])));
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
                MR_hl_field(MR_mktag(1), Var_207, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[40])));
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
        MR_hl_field(MR_mktag(1), Var_222, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[40])));
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
      *MaybeComponentsContexts_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_4[0]));
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
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[376])));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[375])));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
        }
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[374])));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
        }
        {
          Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[373])));
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
              MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[371])));
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
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[40])));
        }
        {
          Pieces_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_96, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[372])));
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
        MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[40])));
      }
      {
        Pieces_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_98, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[372])));
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
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[370])));
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
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[369])));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[368])));
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
      *MaybeWarnings_12 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_goal_scalar_common_1[364]));
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
          MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[367])));
          MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
        }
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[366])));
          MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[365])));
          MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
        }
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
          MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_52));
        }
        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[360])));
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
            result_3 = MR_strcmp(WarningFunctor_15, ((&parse_tree__parse_goal_vector_common_3[0 + mid_2]))->parse_tree__parse_goal__vector_common_type_3_0__vct_3_f_0);
            if ((result_3 == (MR_Integer) 0))
            {
              Warning_17 = ((&parse_tree__parse_goal_vector_common_3[0 + mid_2]))->parse_tree__parse_goal__vector_common_type_3_0__vct_3_f_1;
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
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[363])));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[362])));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[361])));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[360])));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[359])));
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
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[358])));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_goal_scalar_common_1[357])));
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
