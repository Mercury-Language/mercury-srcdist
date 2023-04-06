/*
** Automatically generated from `parse_goal.m'
** by the Mercury compiler,
** version rotd-2023-04-06
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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "solutions.mih"
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
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"



struct parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0_s {
  MR_Box * parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0__wrapper_arg_1;
  MR_Cont parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0__cont;
  void * parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0__cont_env_ptr;
  MR_String parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0__conv0_HeadVar__1_1;
};


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_goal__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_goal_0;

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

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_1;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_2;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_3;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_4;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_5;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_6;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_7;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_8;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_9;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_10;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_11;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_12;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_13;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_14;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_15;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_16;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_17;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_18;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_19;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_20;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_21;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_22;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_23;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_24;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_25;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_26;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_27;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_28;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_29;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_30;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_31;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_32;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_33;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_34;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_35;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_36;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_37;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_38;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_39;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_40;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_41;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_42;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_43;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_44;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_45;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_46;

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_47;

static const MR_EnumFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__enum_ordinal_ordered_goal_kind_0[48];

static const MR_EnumFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__enum_name_ordered_goal_kind_0[48];

static const MR_Integer parse_tree__parse_goal__parse_tree__parse_goal__functor_number_map_goal_kind_0[48];

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
parse_tree__parse_goal__IntroducedFrom__pred__parse_atomic_component__2959__1_2_p_0(
  MR_Word HeadVar__1_119,
  MR_Word * HeadVar__2_120);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1373__1_2_p_0(
  MR_Word HeadVar__1_62,
  MR_Word * HeadVar__2_63);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1372__1_2_p_0(
  MR_Word HeadVar__1_58,
  MR_Word * HeadVar__2_59);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1371__1_2_p_0(
  MR_Word HeadVar__1_54,
  MR_Word * HeadVar__2_55);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1370__1_2_p_0(
  MR_Word HeadVar__1_48,
  MR_Word * HeadVar__2_49);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1327__1_2_p_0(
  MR_Word HeadVar__1_65,
  MR_Word * HeadVar__2_66);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1326__1_2_p_0(
  MR_Word HeadVar__1_61,
  MR_Word * HeadVar__2_62);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1325__1_2_p_0(
  MR_Word HeadVar__1_57,
  MR_Word * HeadVar__2_58);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1324__1_2_p_0(
  MR_Word HeadVar__1_51,
  MR_Word * HeadVar__2_52);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_some_all__738__1_2_p_0(
  MR_Word HeadVar__1_84,
  MR_Word * HeadVar__2_85);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_some_all__737__1_2_p_0(
  MR_Word HeadVar__1_78,
  MR_Word * HeadVar__2_79);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__156__1_2_p_0(
  MR_Word HeadVar__1_63,
  MR_Word * HeadVar__2_64);

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__155__1_2_p_0(
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
parse_tree__parse_goal____Compare____goal_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_goal____Unify____goal_kind_0_0(
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
parse_tree__parse_goal__parse_goal_disjunction_11_p_0(
  MR_Word TermA_12,
  MR_Word TermB_13,
  MR_Word ContextPieces_14,
  MR_Word STATE_VARIABLE_DisjunctsCord_0_34,
  MR_Word * STATE_VARIABLE_DisjunctsCord_35,
  MR_Word STATE_VARIABLE_Warnings_0_36,
  MR_Word * STATE_VARIABLE_Warnings_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39,
  MR_Word STATE_VARIABLE_VarSet_0_40,
  MR_Word * STATE_VARIABLE_VarSet_41);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_conjunction_12_p_0(
  MR_String Functor_13,
  MR_Word TermA_14,
  MR_Word TermB_15,
  MR_Word ContextPieces_16,
  MR_Word STATE_VARIABLE_ConjunctsCord_0_33,
  MR_Word * STATE_VARIABLE_ConjunctsCord_34,
  MR_Word STATE_VARIABLE_Warnings_0_35,
  MR_Word * STATE_VARIABLE_Warnings_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38,
  MR_Word STATE_VARIABLE_VarSet_0_39,
  MR_Word * STATE_VARIABLE_VarSet_40);

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
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_98_95_99_97_116_99_104_95_116_101_114_109_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word Term_7,
  MR_Word ContextPieces_9,
  MR_Word * MaybeCatches_10,
  MR_Word STATE_VARIABLE_VarSet_0_28,
  MR_Word * STATE_VARIABLE_VarSet_29);

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
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_30,
  MR_Word * STATE_VARIABLE_VarSet_31);

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
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24);

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
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_33,
  MR_Word * STATE_VARIABLE_VarSet_34);

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
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_27,
  MR_Word * STATE_VARIABLE_VarSet_28);

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
  MR_Word STATE_VARIABLE_VarSet_0_42,
  MR_Word * STATE_VARIABLE_VarSet_43);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_conj_7_p_1(
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_27,
  MR_Word * STATE_VARIABLE_VarSet_28);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_conj_7_p_0(
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_27,
  MR_Word * STATE_VARIABLE_VarSet_28);

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
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_37,
  MR_Word * STATE_VARIABLE_VarSet_38);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_not_7_p_0(
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_disable_warnings_7_p_0(
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_40,
  MR_Word * STATE_VARIABLE_VarSet_41);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_promise_purity_7_p_0(
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_impure_semipure_7_p_0(
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20);

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
parse_tree__parse_goal__parse_goal_equal_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_17,
  MR_Word * STATE_VARIABLE_VarSet_18);

static void MR_CALL 
parse_tree__parse_goal__parse_goal_true_fail_7_p_0(
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20);

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
  MR_Word TypeInfo_for_T_38,
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
parse_tree__parse_goal__convert_try_params_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * MaybeParams_4);

static void MR_CALL 
parse_tree__parse_goal__append_disjunct_to_cord_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_goal__append_disjunct_to_cord_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_DisjunctsCord_0_10,
  MR_Word * STATE_VARIABLE_DisjunctsCord_11);

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
parse_tree__parse_goal__string_goal_kind_2_p_1(
  MR_String * Functor_3,
  MR_Word GoalKind_4);

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
parse_tree__parse_goal____Unify____goal_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_goal____Compare____goal_kind_0_0_10001(
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


static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_1[388][2];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_2[19][3];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_3[9][1];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_6[3][6];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_7[1][5];

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_11[2][4];


struct parse_tree__parse_goal__vector_common_type_4_0_s {
  const MR_String parse_tree__parse_goal__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct parse_tree__parse_goal__vector_common_type_4_0_s parse_tree__parse_goal_vector_common_4[48];

struct parse_tree__parse_goal__vector_common_type_5_0_s {
  const MR_String parse_tree__parse_goal__vector_common_type_5_0__vct_5_f_0;
  const MR_Word parse_tree__parse_goal__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct parse_tree__parse_goal__vector_common_type_5_0_s parse_tree__parse_goal_vector_common_5[6];

struct parse_tree__parse_goal__vector_common_type_8_0_s {
  const MR_Word parse_tree__parse_goal__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct parse_tree__parse_goal__vector_common_type_8_0_s parse_tree__parse_goal_vector_common_8[8];

struct parse_tree__parse_goal__vector_common_type_9_0_s {
  const MR_Word parse_tree__parse_goal__vector_common_type_9_0__vct_9_f_0;
  const MR_String parse_tree__parse_goal__vector_common_type_9_0__vct_9_f_1;
};

static /* final */ const struct parse_tree__parse_goal__vector_common_type_9_0_s parse_tree__parse_goal_vector_common_9[8];

struct parse_tree__parse_goal__vector_common_type_10_0_s {
  const MR_Word parse_tree__parse_goal__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct parse_tree__parse_goal__vector_common_type_10_0_s parse_tree__parse_goal_vector_common_10[48];



static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_1[388][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_plain_state_vars_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_1[1]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_2[0]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_2[1]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_plain_state_dot_colon_vars_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_plain_state_dot_colon_vars_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_1[1]))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_2[2]))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_expr_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_expr_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_compiletime_0))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "some"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[17])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In first argument of"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[21])))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the prefix operator"))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should precede a single goal."))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the infix operator"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should have two terms as arguments."))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should have two goals as arguments."))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the binary prefix operator"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should precede"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and a goal."))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must list at least one warning."))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "scope"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[40])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "all"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[17])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[44])))
  },
  /* row  46 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[45])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "then"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[48])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "with"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[50])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "->"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[52])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "replace the"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[54])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: malformed if-then-else;"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[56])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "before the condition."))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "if"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[60])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and add an"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[62])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[64])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[66])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[67])))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[68])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[69])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[70])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "( if goal then goal else goal )"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[48])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should occur in expressions of the form"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[73])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "operator"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[75])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "else"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[77])))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the "))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[79])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[48])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[82])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[83])))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[85])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[86])))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has no"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[82])))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[89])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "this"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[90])))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[92])))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[50])))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[94])))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[95])))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[96])))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "clause."))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "catch_any"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[99])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "clauses, and optionally by a single"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[101])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "catch"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[104]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[103])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which in turn may be followed by zero or more"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[105])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[107])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "else failure_goal"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[108])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "optionally followed by"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[110])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[112])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "try [try_params] main_goal then success_goal"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[114]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[113])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or in an expression of the form"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[115])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[117])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[118])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should be used either in an expression of the form"))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[120]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[119])))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "operator,"))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[122]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[121])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[123])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[124])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "variable -> goal"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[48])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and should be followed by an expression of the form"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[128]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[127])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "optional else-clause and zero or more catch clauses,"))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[130]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[129])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a try expression, with a then-clause,"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[131])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "operator should be preceded by"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[133])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[135])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[136])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must not be qualified."))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[138]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the event name"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[139])))
  },
  /* row 142 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[141])))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "impure or semipure."))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[143]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: an event cannot be"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[145]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[144])))
  },
  /* row 147 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[146])))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should have no arguments."))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[148]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should precede a call."))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[150]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the first argument of"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may not contain a state variable pair."))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of a state variable."))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[155]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may not contain a reference to the next value"))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[157]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[156])))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may not contain more than one variable."))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must contain a variable."))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[161]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 163 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "keyword should be"))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "followed by a list of warnings to disable."))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The term"))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not a list."))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[168]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "element"))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of the list following the"))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "keyword,"))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "so the compiler cannot act on it."))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[174]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not the name of a warning,"))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[176]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[175])))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[177])))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the warning"))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is duplicated"))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the list of warnings to disable."))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[181]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: invalid trace goal parameter"))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of compile-time tests."))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[184]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which should be a boolean expression"))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[186]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[185])))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "takes exactly one argument,"))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[188]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[187])))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of run-time tests."))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[190]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[186]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[191])))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[188]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[192])))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the argument of"))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should be a state variable."))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[195]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which should be a state variable name."))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[197]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[188]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[198])))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the name of a mutable variable."))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[200]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should be"))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[202]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[201])))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the second argument of"))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a state variable name."))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[205]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[202]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[206])))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and a state variable name."))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[208]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the name of a mutable variable"))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[210]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[209])))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which should be"))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[212]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[211])))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "takes exactly two arguments,"))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[214]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[213])))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "takes a string as argument."))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[216]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "flag"))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[218]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[217])))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: compile_time parameter"))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[220]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[219])))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "takes just one argument."))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[222]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 224 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[218]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[223])))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[220]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[224])))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "valid grade tests are"))
  },
  /* row 227 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[226]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "invalid grade test;"))
  },
  /* row 229 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[228]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[227])))
  },
  /* row 230 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "grade"))
  },
  /* row 231 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[230]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[223])))
  },
  /* row 232 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[220]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[231])))
  },
  /* row 233 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "as argument."))
  },
  /* row 234 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[233]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 235 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "deep"))
  },
  /* row 236 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[235]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[234])))
  },
  /* row 237 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 238 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[237]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[236])))
  },
  /* row 239 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "shallow"))
  },
  /* row 240 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[239]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[238])))
  },
  /* row 241 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "takes just"))
  },
  /* row 242 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[241]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[240])))
  },
  /* row 243 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "tracelevel"))
  },
  /* row 244 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[243]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[242])))
  },
  /* row 245 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[220]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[244])))
  },
  /* row 246 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[243]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[223])))
  },
  /* row 247 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[220]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[246])))
  },
  /* row 248 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: invalid compile_time parameter"))
  },
  /* row 249 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "tracelevel(deep)"))
  },
  /* row 250 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[249]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 251 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[250])))
  },
  /* row 252 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "tracelevel(shallow)"))
  },
  /* row 253 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[252]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[251])))
  },
  /* row 254 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[253])))
  },
  /* row 255 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "grade(\"grade name\")"))
  },
  /* row 256 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[255]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[254])))
  },
  /* row 257 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[256])))
  },
  /* row 258 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "flag(\"name of --trace-flag parameter\")"))
  },
  /* row 259 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[258]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[257])))
  },
  /* row 260 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[259])))
  },
  /* row 261 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "have one of the following forms:"))
  },
  /* row 262 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[261]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[260])))
  },
  /* row 263 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The acceptable compile_time paramaters"))
  },
  /* row 264 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[263]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[262])))
  },
  /* row 265 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[264])))
  },
  /* row 266 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[265])))
  },
  /* row 267 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 268 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "takes an identifier as argument."))
  },
  /* row 269 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[268]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 270 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "env"))
  },
  /* row 271 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[270]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[269])))
  },
  /* row 272 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: run_time parameter"))
  },
  /* row 273 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[272]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[271])))
  },
  /* row 274 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[270]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[223])))
  },
  /* row 275 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[272]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[274])))
  },
  /* row 276 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: invalid run_time parameter"))
  },
  /* row 277 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "env(\"name of an environment variable\")"))
  },
  /* row 278 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[277]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 279 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The only acceptable run_time paramaters have the form"))
  },
  /* row 280 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[279]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[278])))
  },
  /* row 281 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[280])))
  },
  /* row 282 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[281])))
  },
  /* row 283 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: duplicate compile_time trace parameter."))
  },
  /* row 284 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[283]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 285 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: duplicate io trace parameter."))
  },
  /* row 286 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[285]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 287 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: duplicate run_time trace parameter."))
  },
  /* row 288 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[287]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 289 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should be a variable."))
  },
  /* row 290 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[289]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 291 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[290])))
  },
  /* row 292 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[291])))
  },
  /* row 293 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of a"))
  },
  /* row 294 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[293]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[292])))
  },
  /* row 295 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "operator inside the scope"))
  },
  /* row 296 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[295]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[294])))
  },
  /* row 297 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[296])))
  },
  /* row 298 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the left operand of the"))
  },
  /* row 299 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[298]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[297])))
  },
  /* row 300 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should be followed by an expression of the form"))
  },
  /* row 301 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[300]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[127])))
  },
  /* row 302 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[301])))
  },
  /* row 303 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[302])))
  },
  /* row 304 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[303])))
  },
  /* row 305 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "catch_pattern -> catch_goal"))
  },
  /* row 306 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[305]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[48])))
  },
  /* row 307 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and followed by an expression of the form"))
  },
  /* row 308 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[307]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[306])))
  },
  /* row 309 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[308])))
  },
  /* row 310 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "try [try_params] main_goal then else_goal"))
  },
  /* row 311 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[310]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[309])))
  },
  /* row 312 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should be preceded by a try expression of the form"))
  },
  /* row 313 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[312]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[311])))
  },
  /* row 314 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[313])))
  },
  /* row 315 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[104]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[314])))
  },
  /* row 316 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[315])))
  },
  /* row 317 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[300]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[306])))
  },
  /* row 318 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[317])))
  },
  /* row 319 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[104]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[318])))
  },
  /* row 320 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[319])))
  },
  /* row 321 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[48])))
  },
  /* row 322 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is missing its"))
  },
  /* row 323 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[322]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[321])))
  },
  /* row 324 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[323])))
  },
  /* row 325 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[324])))
  },
  /* row 326 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[325])))
  },
  /* row 327 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should have the form"))
  },
  /* row 328 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[327]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[115])))
  },
  /* row 329 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "goal"))
  },
  /* row 330 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[329]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[328])))
  },
  /* row 331 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "try"))
  },
  /* row 332 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[331]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[330])))
  },
  /* row 333 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 334 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[333]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[332])))
  },
  /* row 335 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 336 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should be followed by a list of try parameters;"))
  },
  /* row 337 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: invalid try goal parameter"))
  },
  /* row 338 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: duplicate io try parameter."))
  },
  /* row 339 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[338]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 340 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Invalid atomic goal parameter."))
  },
  /* row 341 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[340]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 342 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Expected atomic goal parameter, found variable."))
  },
  /* row 343 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[342]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 344 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or a pair of variables."))
  },
  /* row 345 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[344]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 346 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which should be a state variable"))
  },
  /* row 347 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[346]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[345])))
  },
  /* row 348 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[188]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[347])))
  },
  /* row 349 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "found variable."))
  },
  /* row 350 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[349]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 351 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected atomic goal parameter,"))
  },
  /* row 352 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[351]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[350])))
  },
  /* row 353 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "specifier of atomic scope:"))
  },
  /* row 354 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[353]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 355 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "vars"))
  },
  /* row 356 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[355]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[354])))
  },
  /* row 357 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 358 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[357]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[356])))
  },
  /* row 359 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which should be a list of variable names."))
  },
  /* row 360 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[359]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 361 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "takes exact one argument,"))
  },
  /* row 362 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[361]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[360])))
  },
  /* row 363 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the outer and inner STM states."))
  },
  /* row 364 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[363]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 365 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a specification of both"))
  },
  /* row 366 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[365]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[364])))
  },
  /* row 367 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Atomic goal is missing"))
  },
  /* row 368 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[367]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[366])))
  },
  /* row 369 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a specification of the outer STM state."))
  },
  /* row 370 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[369]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 371 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[367]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[370])))
  },
  /* row 372 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a specification of the inner STM state."))
  },
  /* row 373 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[372]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 374 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[367]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[373])))
  },
  /* row 375 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: duplicate inner atomic parameter."))
  },
  /* row 376 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[375]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 377 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: duplicate outer atomic parameter."))
  },
  /* row 378 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[377]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 379 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: duplicate atomic vars parameter."))
  },
  /* row 380 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[379]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 381 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: atomic scope must have a goal."))
  },
  /* row 382 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[381]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[26])))
  },
  /* row 383 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "event"))
  },
  /* row 384 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[383]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[151])))
  },
  /* row 385 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[384])))
  },
  /* row 386 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[385])))
  },
  /* row 387 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[386])))
  },
};

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_2[19][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__parse_goal__parse_tree__parse_goal__type_ctor_info_trace_component_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__parse_goal__parse_tree__parse_goal__type_ctor_info_atomic_component_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__parse_goal__parse_tree__parse_goal__type_ctor_info_try_component_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_goal__append_disjunct_to_cord_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_7[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_atomic_component_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_7[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_some_vars_goal_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_7[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_some_vars_goal_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_7[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_some_all_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_7[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_some_all_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_7[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_7[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_7[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_7[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_7[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_7[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_7[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_7[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_11[0])),
    ((MR_Box) (parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_11[1])),
    ((MR_Box) (parse_tree__parse_goal__parse_trace_runtime_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_3[9][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "call"))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__parse_goal_scalar_common_1[23]))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "else"))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "then"))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_6[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0)),
    ((MR_Box) (&parse_tree__parse_goal__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_goal_0)),
    ((MR_Box) (&parse_tree__parse_goal__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_goal_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_goal__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_goal__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_goal__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_trace_compiletime_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_goal__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_goal__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_goal__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_trace_runtime_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_7[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_goal__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_goal_scalar_common_11[2][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};


static /* final */ const struct parse_tree__parse_goal__vector_common_type_4_0_s parse_tree__parse_goal_vector_common_4[48] = {
  /* row   0 */   { (MR_String) "impure" },
  /* row   1 */   { (MR_String) "semipure" },
  /* row   2 */   { (MR_String) "promise_impure" },
  /* row   3 */   { (MR_String) "promise_semipure" },
  /* row   4 */   { (MR_String) "promise_pure" },
  /* row   5 */   { (MR_String) "disable_warning" },
  /* row   6 */   { (MR_String) "disable_warnings" },
  /* row   7 */   { (MR_String) "not" },
  /* row   8 */   { (MR_String) "\\+" },
  /* row   9 */   { (MR_String) "some" },
  /* row  10 */   { (MR_String) "all" },
  /* row  11 */   { (MR_String) "," },
  /* row  12 */   { (MR_String) "&" },
  /* row  13 */   { (MR_String) ";" },
  /* row  14 */   { (MR_String) "else" },
  /* row  15 */   { (MR_String) "if" },
  /* row  16 */   { (MR_String) "then" },
  /* row  17 */   { (MR_String) "catch" },
  /* row  18 */   { (MR_String) "catch_any" },
  /* row  19 */   { (MR_String) "<=" },
  /* row  20 */   { (MR_String) "=>" },
  /* row  21 */   { (MR_String) "<=>" },
  /* row  22 */   { (MR_String) "trace" },
  /* row  23 */   { (MR_String) "atomic" },
  /* row  24 */   { (MR_String) "promise_equivalent_solutions" },
  /* row  25 */   { (MR_String) "promise_equivalent_solution_sets" },
  /* row  26 */   { (MR_String) "arbitrary" },
  /* row  27 */   { (MR_String) "require_det" },
  /* row  28 */   { (MR_String) "require_semidet" },
  /* row  29 */   { (MR_String) "require_multi" },
  /* row  30 */   { (MR_String) "require_nondet" },
  /* row  31 */   { (MR_String) "require_cc_multi" },
  /* row  32 */   { (MR_String) "require_cc_nondet" },
  /* row  33 */   { (MR_String) "require_erroneous" },
  /* row  34 */   { (MR_String) "require_failure" },
  /* row  35 */   { (MR_String) "require_complete_switch" },
  /* row  36 */   { (MR_String) "require_switch_arms_det" },
  /* row  37 */   { (MR_String) "require_switch_arms_semidet" },
  /* row  38 */   { (MR_String) "require_switch_arms_multi" },
  /* row  39 */   { (MR_String) "require_switch_arms_nondet" },
  /* row  40 */   { (MR_String) "require_switch_arms_cc_multi" },
  /* row  41 */   { (MR_String) "require_switch_arms_cc_nondet" },
  /* row  42 */   { (MR_String) "require_switch_arms_erroneous" },
  /* row  43 */   { (MR_String) "require_switch_arms_failure" },
  /* row  44 */   { (MR_String) "event" },
  /* row  45 */   { (MR_String) "true" },
  /* row  46 */   { (MR_String) "fail" },
  /* row  47 */   { (MR_String) "=" },
};

static /* final */ const struct parse_tree__parse_goal__vector_common_type_5_0_s parse_tree__parse_goal_vector_common_5[6] = {
  /* row   0 */
  {
    (MR_String) "no_solution_disjunct",
    (MR_Integer) 4
  },
  /* row   1 */
  {
    (MR_String) "non_tail_recursive_calls",
    (MR_Integer) 2
  },
  /* row   2 */
  {
    (MR_String) "singleton_vars",
    (MR_Integer) 0
  },
  /* row   3 */
  {
    (MR_String) "suspected_occurs_check_failure",
    (MR_Integer) 1
  },
  /* row   4 */
  {
    (MR_String) "suspicious_recursion",
    (MR_Integer) 3
  },
  /* row   5 */
  {
    (MR_String) "unknown_format_calls",
    (MR_Integer) 5
  },
};

static /* final */ const struct parse_tree__parse_goal__vector_common_type_8_0_s parse_tree__parse_goal_vector_common_8[8] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 3 },
  /* row   4 */   { (MR_Integer) 4 },
  /* row   5 */   { (MR_Integer) 5 },
  /* row   6 */   { (MR_Integer) 6 },
  /* row   7 */   { (MR_Integer) 7 },
};

static /* final */ const struct parse_tree__parse_goal__vector_common_type_9_0_s parse_tree__parse_goal_vector_common_9[8] = {
  /* row   0 */
  {
    (MR_Integer) 0,
    (MR_String) "require_switch_arms_det"
  },
  /* row   1 */
  {
    (MR_Integer) 1,
    (MR_String) "require_switch_arms_semidet"
  },
  /* row   2 */
  {
    (MR_Integer) 2,
    (MR_String) "require_switch_arms_multi"
  },
  /* row   3 */
  {
    (MR_Integer) 3,
    (MR_String) "require_switch_arms_nondet"
  },
  /* row   4 */
  {
    (MR_Integer) 4,
    (MR_String) "require_switch_arms_cc_multi"
  },
  /* row   5 */
  {
    (MR_Integer) 5,
    (MR_String) "require_switch_arms_cc_nondet"
  },
  /* row   6 */
  {
    (MR_Integer) 6,
    (MR_String) "require_switch_arms_erroneous"
  },
  /* row   7 */
  {
    (MR_Integer) 7,
    (MR_String) "require_switch_arms_failure"
  },
};

static /* final */ const struct parse_tree__parse_goal__vector_common_type_10_0_s parse_tree__parse_goal_vector_common_10[48] = {
  /* row   0 */   { (MR_Integer) 12 },
  /* row   1 */   { (MR_Integer) 11 },
  /* row   2 */   { (MR_Integer) 13 },
  /* row   3 */   { (MR_Integer) 19 },
  /* row   4 */   { (MR_Integer) 21 },
  /* row   5 */   { (MR_Integer) 47 },
  /* row   6 */   { (MR_Integer) 20 },
  /* row   7 */   { (MR_Integer) 8 },
  /* row   8 */   { (MR_Integer) 10 },
  /* row   9 */   { (MR_Integer) 26 },
  /* row  10 */   { (MR_Integer) 23 },
  /* row  11 */   { (MR_Integer) 17 },
  /* row  12 */   { (MR_Integer) 18 },
  /* row  13 */   { (MR_Integer) 5 },
  /* row  14 */   { (MR_Integer) 6 },
  /* row  15 */   { (MR_Integer) 14 },
  /* row  16 */   { (MR_Integer) 44 },
  /* row  17 */   { (MR_Integer) 46 },
  /* row  18 */   { (MR_Integer) 15 },
  /* row  19 */   { (MR_Integer) 0 },
  /* row  20 */   { (MR_Integer) 7 },
  /* row  21 */   { (MR_Integer) 25 },
  /* row  22 */   { (MR_Integer) 24 },
  /* row  23 */   { (MR_Integer) 2 },
  /* row  24 */   { (MR_Integer) 4 },
  /* row  25 */   { (MR_Integer) 3 },
  /* row  26 */   { (MR_Integer) 31 },
  /* row  27 */   { (MR_Integer) 32 },
  /* row  28 */   { (MR_Integer) 35 },
  /* row  29 */   { (MR_Integer) 27 },
  /* row  30 */   { (MR_Integer) 33 },
  /* row  31 */   { (MR_Integer) 34 },
  /* row  32 */   { (MR_Integer) 29 },
  /* row  33 */   { (MR_Integer) 30 },
  /* row  34 */   { (MR_Integer) 28 },
  /* row  35 */   { (MR_Integer) 40 },
  /* row  36 */   { (MR_Integer) 41 },
  /* row  37 */   { (MR_Integer) 36 },
  /* row  38 */   { (MR_Integer) 42 },
  /* row  39 */   { (MR_Integer) 43 },
  /* row  40 */   { (MR_Integer) 38 },
  /* row  41 */   { (MR_Integer) 39 },
  /* row  42 */   { (MR_Integer) 37 },
  /* row  43 */   { (MR_Integer) 1 },
  /* row  44 */   { (MR_Integer) 9 },
  /* row  45 */   { (MR_Integer) 16 },
  /* row  46 */   { (MR_Integer) 22 },
  /* row  47 */   { (MR_Integer) 45 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_goal__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0)
  }
};

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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_atomic_component_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_atomic_component_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_goal____Unify____atomic_component_0_0_10001)),
  ((MR_Box) (parse_tree__parse_goal____Compare____atomic_component_0_0_10001)),
  (MR_String) "parse_tree.parse_goal",
  (MR_String) "atomic_component",
  { parse_tree__parse_goal__parse_tree__parse_goal__du_name_ordered_atomic_component_0 },
  { parse_tree__parse_goal__parse_tree__parse_goal__du_ptag_ordered_atomic_component_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__parse_goal__parse_tree__parse_goal__functor_number_map_atomic_component_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_0 = {
  (MR_String) "gk_impure",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_1 = {
  (MR_String) "gk_semipure",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_2 = {
  (MR_String) "gk_promise_impure",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_3 = {
  (MR_String) "gk_promise_semipure",
  INT32_C(3)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_4 = {
  (MR_String) "gk_promise_pure",
  INT32_C(4)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_5 = {
  (MR_String) "gk_disable_warning",
  INT32_C(5)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_6 = {
  (MR_String) "gk_disable_warnings",
  INT32_C(6)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_7 = {
  (MR_String) "gk_not",
  INT32_C(7)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_8 = {
  (MR_String) "gk_not_prolog",
  INT32_C(8)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_9 = {
  (MR_String) "gk_some",
  INT32_C(9)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_10 = {
  (MR_String) "gk_all",
  INT32_C(10)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_11 = {
  (MR_String) "gk_conj",
  INT32_C(11)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_12 = {
  (MR_String) "gk_par_conj",
  INT32_C(12)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_13 = {
  (MR_String) "gk_semicolon",
  INT32_C(13)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_14 = {
  (MR_String) "gk_else",
  INT32_C(14)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_15 = {
  (MR_String) "gk_if",
  INT32_C(15)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_16 = {
  (MR_String) "gk_then",
  INT32_C(16)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_17 = {
  (MR_String) "gk_catch",
  INT32_C(17)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_18 = {
  (MR_String) "gk_catch_any",
  INT32_C(18)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_19 = {
  (MR_String) "gk_imply_to_left",
  INT32_C(19)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_20 = {
  (MR_String) "gk_imply_to_right",
  INT32_C(20)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_21 = {
  (MR_String) "gk_imply_to_both",
  INT32_C(21)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_22 = {
  (MR_String) "gk_trace",
  INT32_C(22)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_23 = {
  (MR_String) "gk_atomic",
  INT32_C(23)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_24 = {
  (MR_String) "gk_promise_eqv_solns",
  INT32_C(24)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_25 = {
  (MR_String) "gk_promise_eqv_soln_sets",
  INT32_C(25)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_26 = {
  (MR_String) "gk_arbitrary",
  INT32_C(26)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_27 = {
  (MR_String) "gk_require_det",
  INT32_C(27)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_28 = {
  (MR_String) "gk_require_semidet",
  INT32_C(28)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_29 = {
  (MR_String) "gk_require_multi",
  INT32_C(29)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_30 = {
  (MR_String) "gk_require_nondet",
  INT32_C(30)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_31 = {
  (MR_String) "gk_require_cc_multi",
  INT32_C(31)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_32 = {
  (MR_String) "gk_require_cc_nondet",
  INT32_C(32)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_33 = {
  (MR_String) "gk_require_erroneous",
  INT32_C(33)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_34 = {
  (MR_String) "gk_require_failure",
  INT32_C(34)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_35 = {
  (MR_String) "gk_require_complete_switch",
  INT32_C(35)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_36 = {
  (MR_String) "gk_require_arms_det",
  INT32_C(36)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_37 = {
  (MR_String) "gk_require_arms_semidet",
  INT32_C(37)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_38 = {
  (MR_String) "gk_require_arms_multi",
  INT32_C(38)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_39 = {
  (MR_String) "gk_require_arms_nondet",
  INT32_C(39)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_40 = {
  (MR_String) "gk_require_arms_cc_multi",
  INT32_C(40)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_41 = {
  (MR_String) "gk_require_arms_cc_nondet",
  INT32_C(41)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_42 = {
  (MR_String) "gk_require_arms_erroneous",
  INT32_C(42)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_43 = {
  (MR_String) "gk_require_arms_failure",
  INT32_C(43)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_44 = {
  (MR_String) "gk_event",
  INT32_C(44)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_45 = {
  (MR_String) "gk_true",
  INT32_C(45)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_46 = {
  (MR_String) "gk_fail",
  INT32_C(46)
};

static const MR_EnumFunctorDesc parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_47 = {
  (MR_String) "gk_equal",
  INT32_C(47)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__enum_ordinal_ordered_goal_kind_0[48] = {
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_0,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_1,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_2,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_3,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_4,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_5,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_6,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_7,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_8,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_9,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_10,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_11,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_12,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_13,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_14,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_15,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_16,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_17,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_18,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_19,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_20,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_21,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_22,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_23,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_24,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_25,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_26,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_27,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_28,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_29,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_30,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_31,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_32,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_33,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_34,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_35,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_36,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_37,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_38,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_39,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_40,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_41,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_42,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_43,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_44,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_45,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_46,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_47
};

static const MR_EnumFunctorDescPtr parse_tree__parse_goal__parse_tree__parse_goal__enum_name_ordered_goal_kind_0[48] = {
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_10,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_26,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_23,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_17,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_18,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_11,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_5,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_6,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_14,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_47,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_44,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_46,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_15,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_21,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_19,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_20,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_0,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_7,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_8,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_12,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_25,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_24,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_2,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_4,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_3,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_40,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_41,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_36,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_42,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_43,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_38,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_39,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_37,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_31,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_32,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_35,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_27,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_33,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_34,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_29,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_30,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_28,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_13,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_1,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_9,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_16,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_22,
  &parse_tree__parse_goal__parse_tree__parse_goal__enum_functor_desc_goal_kind_0_45
};

static const MR_Integer parse_tree__parse_goal__parse_tree__parse_goal__functor_number_map_goal_kind_0[48] = {
  (MR_Integer) 16,
  (MR_Integer) 43,
  (MR_Integer) 22,
  (MR_Integer) 24,
  (MR_Integer) 23,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 17,
  (MR_Integer) 18,
  (MR_Integer) 44,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 19,
  (MR_Integer) 42,
  (MR_Integer) 8,
  (MR_Integer) 12,
  (MR_Integer) 45,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 14,
  (MR_Integer) 15,
  (MR_Integer) 13,
  (MR_Integer) 46,
  (MR_Integer) 2,
  (MR_Integer) 21,
  (MR_Integer) 20,
  (MR_Integer) 1,
  (MR_Integer) 36,
  (MR_Integer) 41,
  (MR_Integer) 39,
  (MR_Integer) 40,
  (MR_Integer) 33,
  (MR_Integer) 34,
  (MR_Integer) 37,
  (MR_Integer) 38,
  (MR_Integer) 35,
  (MR_Integer) 27,
  (MR_Integer) 32,
  (MR_Integer) 30,
  (MR_Integer) 31,
  (MR_Integer) 25,
  (MR_Integer) 26,
  (MR_Integer) 28,
  (MR_Integer) 29,
  (MR_Integer) 10,
  (MR_Integer) 47,
  (MR_Integer) 11,
  (MR_Integer) 9
};

const MR_TypeCtorInfo_Struct parse_tree__parse_goal__parse_tree__parse_goal__type_ctor_info_goal_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_goal____Unify____goal_kind_0_0_10001)),
  ((MR_Box) (parse_tree__parse_goal____Compare____goal_kind_0_0_10001)),
  (MR_String) "parse_tree.parse_goal",
  (MR_String) "goal_kind",
  { parse_tree__parse_goal__parse_tree__parse_goal__enum_name_ordered_goal_kind_0 },
  { parse_tree__parse_goal__parse_tree__parse_goal__enum_ordinal_ordered_goal_kind_0 },
  (MR_Integer) 48,
  UINT16_C(12),
  parse_tree__parse_goal__parse_tree__parse_goal__functor_number_map_goal_kind_0,

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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_trace_component_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_trace_component_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_goal__parse_tree__parse_goal__du_stag_ordered_trace_component_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_goal____Unify____trace_component_0_0_10001)),
  ((MR_Box) (parse_tree__parse_goal____Compare____trace_component_0_0_10001)),
  (MR_String) "parse_tree.parse_goal",
  (MR_String) "trace_component",
  { parse_tree__parse_goal__parse_tree__parse_goal__du_name_ordered_trace_component_0 },
  { parse_tree__parse_goal__parse_tree__parse_goal__du_ptag_ordered_trace_component_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  parse_tree__parse_goal__parse_tree__parse_goal__functor_number_map_trace_component_0,

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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__parse_goal____Unify____try_component_0_0_10001)),
  ((MR_Box) (parse_tree__parse_goal____Compare____try_component_0_0_10001)),
  (MR_String) "parse_tree.parse_goal",
  (MR_String) "try_component",
  { &parse_tree__parse_goal__parse_tree__parse_goal__notag_functor_desc_try_component_0 },
  { &parse_tree__parse_goal__parse_tree__parse_goal__notag_functor_desc_try_component_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__parse_goal__parse_tree__parse_goal__functor_number_map_try_component_0,

};

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_atomic_component__2959__1_2_p_0(
  MR_Word HeadVar__1_119,
  MR_Word * HeadVar__2_120)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_119, HeadVar__2_120);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1373__1_2_p_0(
  MR_Word HeadVar__1_62,
  MR_Word * HeadVar__2_63)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_62, HeadVar__2_63);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1372__1_2_p_0(
  MR_Word HeadVar__1_58,
  MR_Word * HeadVar__2_59)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_58, HeadVar__2_59);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1371__1_2_p_0(
  MR_Word HeadVar__1_54,
  MR_Word * HeadVar__2_55)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_54, HeadVar__2_55);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1370__1_2_p_0(
  MR_Word HeadVar__1_48,
  MR_Word * HeadVar__2_49)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_48, HeadVar__2_49);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1327__1_2_p_0(
  MR_Word HeadVar__1_65,
  MR_Word * HeadVar__2_66)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_65, HeadVar__2_66);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1326__1_2_p_0(
  MR_Word HeadVar__1_61,
  MR_Word * HeadVar__2_62)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_61, HeadVar__2_62);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1325__1_2_p_0(
  MR_Word HeadVar__1_57,
  MR_Word * HeadVar__2_58)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_57, HeadVar__2_58);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1324__1_2_p_0(
  MR_Word HeadVar__1_51,
  MR_Word * HeadVar__2_52)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_51, HeadVar__2_52);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_some_all__738__1_2_p_0(
  MR_Word HeadVar__1_84,
  MR_Word * HeadVar__2_85)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_84, HeadVar__2_85);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_some_all__737__1_2_p_0(
  MR_Word HeadVar__1_78,
  MR_Word * HeadVar__2_79)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_78, HeadVar__2_79);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__156__1_2_p_0(
  MR_Word HeadVar__1_63,
  MR_Word * HeadVar__2_64)
{
  mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_63, HeadVar__2_64);
}

static void MR_CALL 
parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__155__1_2_p_0(
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

static MR_bool MR_CALL 
parse_tree__parse_goal____Unify____try_component_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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

static void MR_CALL 
parse_tree__parse_goal____Compare____trace_component_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
          MR_Word Var_42 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[15]), HeadVar__1_1, ((MR_Box) (Var_42)), ((MR_Box) (ArgY1_5)));
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
          MR_Word Var_45 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[14]), HeadVar__1_1, ((MR_Box) (Var_45)), ((MR_Box) (ArgY1_15)));
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
          MR_Word Var_43 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_43)), ((MR_Box) (ArgY1_25)));
              }
              break;
          }
        }
        break;
    }
}

static MR_bool MR_CALL 
parse_tree__parse_goal____Unify____trace_component_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_13_13 = (MR_Word) (&parse_tree__parse_goal_scalar_common_1[15]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_16_16;
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_16_16 = (MR_Word) (&parse_tree__parse_goal_scalar_common_1[14]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word TypeInfo_14_14;
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_14_14 = (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_goal____Compare____goal_kind_0_0(
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
parse_tree__parse_goal____Unify____goal_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__parse_goal____Compare____atomic_component_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
          MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

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
          MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

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
          MR_Word Var_29 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Var_29)), ((MR_Box) (ArgY1_21)));
              }
              break;
          }
        }
        break;
    }
}

static MR_bool MR_CALL 
parse_tree__parse_goal____Unify____atomic_component_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = parse_tree__prog_data____Unify____atomic_component_state_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = parse_tree__prog_data____Unify____atomic_component_state_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_13_13;
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_13_13 = (MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
          }
        }
        break;
    }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_goal__env_var_is_acceptable_char_1_p_0(
  MR_Char Char_2)
{
  MR_bool succeeded;

  succeeded = mercury__char__is_alnum_1_p_0(Char_2);
  if (!(succeeded))
    succeeded = (Char_2 == (MR_Char) 95);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_goal__parse_trace_runtime_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_goal__env_var_is_acceptable_char_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_goal__parse_trace_runtime_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeRuntime_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word SubTerms_8;
  MR_Word TermContext_9;
  MR_String Atom_10;
  MR_Word Functor_7;

  if (succeeded)
  {
    Functor_7 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
    SubTerms_8 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
    TermContext_9 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Functor_7)) == (MR_Integer) 0);
    if (succeeded)
      Atom_10 = ((MR_String) ((MR_hl_field(0, Functor_7, (MR_Integer) 0))));
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
        SubTerm_11 = ((MR_Word) ((MR_hl_field(1, SubTerms_8, (MR_Integer) 0))));
        Var_21 = ((MR_Word) ((MR_hl_field(1, SubTerms_8, (MR_Integer) 1))));
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
          SubFunctor_12 = ((MR_Word) ((MR_hl_field(0, SubTerm_11, (MR_Integer) 0))));
          Var_22 = ((MR_Word) ((MR_hl_field(0, SubTerm_11, (MR_Integer) 1))));
          succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            if (((MR_tag((MR_Word) SubFunctor_12)) == (MR_Integer) 0))
            {
              EnvVarName_14 = ((MR_String) ((MR_hl_field(0, SubFunctor_12, (MR_Integer) 0))));
              succeeded = MR_TRUE;
            }
            else
            if (((MR_tag((MR_Word) SubFunctor_12)) == (MR_Integer) 2))
            {
              EnvVarName_14 = ((MR_String) ((MR_hl_field(2, SubFunctor_12, (MR_Integer) 0))));
              succeeded = MR_TRUE;
            }
            else
              succeeded = MR_FALSE;
            if (succeeded)
            {
              EnvVarChars_15 = mercury__string__to_char_list_1_f_0(EnvVarName_14);
              Var_23 = (MR_Word) (&parse_tree__parse_goal_scalar_common_2[18]);
              Var_24 = (MR_Word) ((MR_Unsigned) 0U);
              TypeCtorInfo_105_105 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0);
              mercury__list__filter_4_p_0(TypeCtorInfo_105_105, Var_23, EnvVarChars_15, &Var_16, &Var_109);
              TypeInfo_110_110 = (MR_Word) (&parse_tree__parse_goal_scalar_common_1[267]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_110_110, ((MR_Box) (Var_24)), ((MR_Box) (Var_109)));
            }
          }
        }
        if (succeeded)
        {
          MR_Word Runtime_17 = (MR_Word) (EnvVarName_14);

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeRuntime_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Runtime_17));
          }
        }
        else
        {
          MR_Word Spec_19;
          MR_Word Var_39;
          MR_Word Var_40;

          Var_39 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubTerm_11);
          {
            Spec_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_runtime\'/3"));
            MR_hl_field(1, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(1, Spec_19, 3) = ((MR_Box) (Var_39));
            MR_hl_field(1, Spec_19, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[273])));
          }
          {
            Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_40, 0) = ((MR_Box) (Spec_19));
            MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeRuntime_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_40));
          }
        }
      }
      else
      {
        MR_Word Var_56;
        MR_Word Spec_98;

        {
          Spec_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_98, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_runtime\'/3"));
          MR_hl_field(1, Spec_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_98, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(1, Spec_98, 3) = ((MR_Box) (TermContext_9));
          MR_hl_field(1, Spec_98, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[275])));
        }
        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (Spec_98));
          MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeRuntime_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_56));
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
        Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_61, 1) = ((MR_Box) (TermStr_20));
      }
      {
        Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
        MR_hl_field(1, Var_60, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[282])));
      }
      {
        Pieces_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_99, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[276])));
        MR_hl_field(1, Pieces_99, 1) = ((MR_Box) (Var_60));
      }
      {
        Spec_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_100, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_runtime\'/3"));
        MR_hl_field(1, Spec_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_100, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_100, 3) = ((MR_Box) (TermContext_9));
        MR_hl_field(1, Spec_100, 4) = ((MR_Box) (Pieces_99));
      }
      {
        Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_79, 0) = ((MR_Box) (Spec_100));
        MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeRuntime_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_79));
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
      Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_84, 1) = ((MR_Box) (TermStr_103));
    }
    {
      Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
      MR_hl_field(1, Var_83, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[48])));
    }
    {
      Pieces_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_101, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[276])));
      MR_hl_field(1, Pieces_101, 1) = ((MR_Box) (Var_83));
    }
    Var_94 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_102, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_runtime\'/3"));
      MR_hl_field(1, Spec_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_102, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_102, 3) = ((MR_Box) (Var_94));
      MR_hl_field(1, Spec_102, 4) = ((MR_Box) (Pieces_101));
    }
    {
      Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_95, 0) = ((MR_Box) (Spec_102));
      MR_hl_field(1, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRuntime_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_95));
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_trace_compiletime_3_p_0_1(
  void * env_ptr_arg)
{
  struct parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0_s * env_ptr = (struct parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0__conv0_HeadVar__1_1));
  ((env_ptr)->parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0__cont)((env_ptr)->parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
parse_tree__parse_goal__parse_trace_compiletime_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
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

static void MR_CALL 
parse_tree__parse_goal__parse_trace_compiletime_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * MaybeCompiletime_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word SubTerms_8;
  MR_Word TermContext_9;
  MR_String Atom_10;
  MR_Word Functor_7;

  if (succeeded)
  {
    Functor_7 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
    SubTerms_8 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
    TermContext_9 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Functor_7)) == (MR_Integer) 0);
    if (succeeded)
      Atom_10 = ((MR_String) ((MR_hl_field(0, Functor_7, (MR_Integer) 0))));
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
        SubTerm_11 = ((MR_Word) ((MR_hl_field(1, SubTerms_8, (MR_Integer) 0))));
        Var_25 = ((MR_Word) ((MR_hl_field(1, SubTerms_8, (MR_Integer) 1))));
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
          Var_26 = ((MR_Word) ((MR_hl_field(0, SubTerm_11, (MR_Integer) 0))));
          Var_27 = ((MR_Word) ((MR_hl_field(0, SubTerm_11, (MR_Integer) 1))));
          succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_Integer) 2);
            if (succeeded)
              FlagName_12 = ((MR_String) ((MR_hl_field(2, Var_26, (MR_Integer) 0))));
          }
        }
        if (succeeded)
        {
          MR_Word Compiletime_14;

          {
            Compiletime_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Compiletime_14, 0) = ((MR_Box) (FlagName_12));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeCompiletime_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Compiletime_14));
          }
        }
        else
        {
          MR_Word Spec_16;
          MR_Word Var_42;

          {
            Spec_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_compiletime\'/3"));
            MR_hl_field(1, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(1, Spec_16, 3) = ((MR_Box) (TermContext_9));
            MR_hl_field(1, Spec_16, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[221])));
          }
          {
            Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_42, 0) = ((MR_Box) (Spec_16));
            MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeCompiletime_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_42));
          }
        }
      }
      else
      {
        MR_Word Var_58;
        MR_Word Spec_235;

        {
          Spec_235 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_235, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_compiletime\'/3"));
          MR_hl_field(1, Spec_235, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_235, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(1, Spec_235, 3) = ((MR_Box) (TermContext_9));
          MR_hl_field(1, Spec_235, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[225])));
        }
        {
          Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_58, 0) = ((MR_Box) (Spec_235));
          MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeCompiletime_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_58));
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
          SubTerm_244 = ((MR_Word) ((MR_hl_field(1, SubTerms_8, (MR_Integer) 0))));
          Var_60 = ((MR_Word) ((MR_hl_field(1, SubTerms_8, (MR_Integer) 1))));
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
            Var_61 = ((MR_Word) ((MR_hl_field(0, SubTerm_244, (MR_Integer) 0))));
            Var_62 = ((MR_Word) ((MR_hl_field(0, SubTerm_244, (MR_Integer) 1))));
            succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_61)) == (MR_Integer) 0);
              if (succeeded)
              {
                GradeName_17 = ((MR_String) ((MR_hl_field(0, Var_61, (MR_Integer) 0))));
                succeeded = parse_tree__prog_data__parse_trace_grade_name_2_p_0(GradeName_17, &TraceGrade_19);
              }
            }
          }
          if (succeeded)
          {
            MR_Word Compiletime_236;

            {
              Compiletime_236 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Compiletime_236, 0) = (MR_Box) ((MR_Unsigned) (TraceGrade_19));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeCompiletime_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Compiletime_236));
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

            mercury__solutions__solutions_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[17]), &ValidGradeNames_20);
            Var_72 = parse_tree__error_spec__list_to_pieces_1_f_0(ValidGradeNames_20);
            Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_72, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[48])));
            Pieces_237 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[229])), Var_71);
            {
              Spec_238 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_238, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_compiletime\'/3"));
              MR_hl_field(1, Spec_238, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_238, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(1, Spec_238, 3) = ((MR_Box) (TermContext_9));
              MR_hl_field(1, Spec_238, 4) = ((MR_Box) (Pieces_237));
            }
            {
              Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_82, 0) = ((MR_Box) (Spec_238));
              MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeCompiletime_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_82));
            }
          }
        }
        else
        {
          MR_Word Var_98;
          MR_Word Spec_243;

          {
            Spec_243 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_243, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_compiletime\'/3"));
            MR_hl_field(1, Spec_243, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_243, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(1, Spec_243, 3) = ((MR_Box) (TermContext_9));
            MR_hl_field(1, Spec_243, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[232])));
          }
          {
            Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_98, 0) = ((MR_Box) (Spec_243));
            MR_hl_field(1, Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeCompiletime_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_98));
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
            SubTerm_256 = ((MR_Word) ((MR_hl_field(1, SubTerms_8, (MR_Integer) 0))));
            Var_100 = ((MR_Word) ((MR_hl_field(1, SubTerms_8, (MR_Integer) 1))));
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
              Var_101 = ((MR_Word) ((MR_hl_field(0, SubTerm_256, (MR_Integer) 0))));
              Var_102 = ((MR_Word) ((MR_hl_field(0, SubTerm_256, (MR_Integer) 1))));
              succeeded = (Var_102 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Var_101)) == (MR_Integer) 0);
                if (succeeded)
                {
                  LevelName_21 = ((MR_String) ((MR_hl_field(0, Var_101, (MR_Integer) 0))));
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
                Compiletime_248 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Compiletime_248, 0) = (MR_Box) ((MR_Unsigned) (Level_23));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeCompiletime_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Compiletime_248));
              }
            }
            else
            {
              MR_Word Var_129;
              MR_Word Spec_250;

              {
                Spec_250 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_250, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_compiletime\'/3"));
                MR_hl_field(1, Spec_250, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_250, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(1, Spec_250, 3) = ((MR_Box) (TermContext_9));
                MR_hl_field(1, Spec_250, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[245])));
              }
              {
                Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_129, 0) = ((MR_Box) (Spec_250));
                MR_hl_field(1, Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeCompiletime_6 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_129));
              }
            }
          }
          else
          {
            MR_Word Var_145;
            MR_Word Spec_255;

            {
              Spec_255 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_255, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_compiletime\'/3"));
              MR_hl_field(1, Spec_255, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_255, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(1, Spec_255, 3) = ((MR_Box) (TermContext_9));
              MR_hl_field(1, Spec_255, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[247])));
            }
            {
              Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_145, 0) = ((MR_Box) (Spec_255));
              MR_hl_field(1, Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeCompiletime_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_145));
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
            Var_150 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_150, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_150, 1) = ((MR_Box) (TermStr_24));
          }
          {
            Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_149, 0) = ((MR_Box) (Var_150));
            MR_hl_field(1, Var_149, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[266])));
          }
          {
            Pieces_260 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_260, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[248])));
            MR_hl_field(1, Pieces_260, 1) = ((MR_Box) (Var_149));
          }
          {
            Spec_261 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_261, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_compiletime\'/3"));
            MR_hl_field(1, Spec_261, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_261, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(1, Spec_261, 3) = ((MR_Box) (TermContext_9));
            MR_hl_field(1, Spec_261, 4) = ((MR_Box) (Pieces_260));
          }
          {
            Var_188 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_188, 0) = ((MR_Box) (Spec_261));
            MR_hl_field(1, Var_188, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeCompiletime_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_188));
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
      Var_193 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_193, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_193, 1) = ((MR_Box) (TermStr_272));
    }
    {
      Var_192 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_192, 0) = ((MR_Box) (Var_193));
      MR_hl_field(1, Var_192, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[266])));
    }
    {
      Pieces_270 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_270, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[248])));
      MR_hl_field(1, Pieces_270, 1) = ((MR_Box) (Var_192));
    }
    Var_231 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
    {
      Spec_271 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_271, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_compiletime\'/3"));
      MR_hl_field(1, Spec_271, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_271, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_271, 3) = ((MR_Box) (Var_231));
      MR_hl_field(1, Spec_271, 4) = ((MR_Box) (Pieces_270));
    }
    {
      Var_232 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_232, 0) = ((MR_Box) (Spec_271));
      MR_hl_field(1, Var_232, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeCompiletime_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_232));
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
  MR_bool succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0);
  MR_Word ArgTerms_11;
  MR_Word Context_12;
  MR_Word GoalKind_13;
  MR_String Name_10;
  MR_Word Var_19;

  if (succeeded)
  {
    Var_19 = ((MR_Word) ((MR_hl_field(0, Term_6, (MR_Integer) 0))));
    ArgTerms_11 = ((MR_Word) ((MR_hl_field(0, Term_6, (MR_Integer) 1))));
    Context_12 = ((MR_Word) ((MR_hl_field(0, Term_6, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
    if (succeeded)
    {
      Name_10 = ((MR_String) ((MR_hl_field(0, Var_19, (MR_Integer) 0))));
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
                    case_num_0 = (MR_Integer) 4;
                  break;
              }
            break;
          case (MR_Integer) 61:
            switch (MR_nth_code_unit(Name_10, 1)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 5;
                break;
              case (MR_Integer) 62:
                if (MR_offset_streq(2, Name_10, (MR_String) "=>"))
                  case_num_0 = (MR_Integer) 6;
                break;
            }
            break;
          case (MR_Integer) 92:
            if (MR_offset_streq(1, Name_10, (MR_String) "\\+"))
              case_num_0 = (MR_Integer) 7;
            break;
          case (MR_Integer) 97:
            switch (MR_nth_code_unit(Name_10, 1)) {
              case (MR_Integer) 108:
                if (MR_offset_streq(2, Name_10, (MR_String) "all"))
                  case_num_0 = (MR_Integer) 8;
                break;
              case (MR_Integer) 114:
                if (MR_offset_streq(2, Name_10, (MR_String) "arbitrary"))
                  case_num_0 = (MR_Integer) 9;
                break;
              case (MR_Integer) 116:
                if (MR_offset_streq(2, Name_10, (MR_String) "atomic"))
                  case_num_0 = (MR_Integer) 10;
                break;
            }
            break;
          case (MR_Integer) 99:
            if (((((((((MR_nth_code_unit(Name_10, 1)) == (MR_Integer) 97)) && (((MR_nth_code_unit(Name_10, 2)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(Name_10, 3)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(Name_10, 4)) == (MR_Integer) 104))))
              switch (MR_nth_code_unit(Name_10, 5)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 11;
                  break;
                case (MR_Integer) 95:
                  if (MR_offset_streq(6, Name_10, (MR_String) "catch_any"))
                    case_num_0 = (MR_Integer) 12;
                  break;
              }
            break;
          case (MR_Integer) 100:
            if (((((((((((((((((((((((((((((MR_nth_code_unit(Name_10, 1)) == (MR_Integer) 105)) && (((MR_nth_code_unit(Name_10, 2)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(Name_10, 3)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(Name_10, 4)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(Name_10, 5)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(Name_10, 6)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Name_10, 7)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(Name_10, 8)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(Name_10, 9)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(Name_10, 10)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(Name_10, 11)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(Name_10, 12)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Name_10, 13)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(Name_10, 14)) == (MR_Integer) 103))))
              switch (MR_nth_code_unit(Name_10, 15)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 13;
                  break;
                case (MR_Integer) 115:
                  if (MR_offset_streq(16, Name_10, (MR_String) "disable_warnings"))
                    case_num_0 = (MR_Integer) 14;
                  break;
              }
            break;
          case (MR_Integer) 101:
            switch (MR_nth_code_unit(Name_10, 1)) {
              case (MR_Integer) 108:
                if (MR_offset_streq(2, Name_10, (MR_String) "else"))
                  case_num_0 = (MR_Integer) 15;
                break;
              case (MR_Integer) 118:
                if (MR_offset_streq(2, Name_10, (MR_String) "event"))
                  case_num_0 = (MR_Integer) 16;
                break;
            }
            break;
          case (MR_Integer) 102:
            if (MR_offset_streq(1, Name_10, (MR_String) "fail"))
              case_num_0 = (MR_Integer) 17;
            break;
          case (MR_Integer) 105:
            switch (MR_nth_code_unit(Name_10, 1)) {
              case (MR_Integer) 102:
                if (MR_offset_streq(2, Name_10, (MR_String) "if"))
                  case_num_0 = (MR_Integer) 18;
                break;
              case (MR_Integer) 109:
                if (MR_offset_streq(2, Name_10, (MR_String) "impure"))
                  case_num_0 = (MR_Integer) 19;
                break;
            }
            break;
          case (MR_Integer) 110:
            if (MR_offset_streq(1, Name_10, (MR_String) "not"))
              case_num_0 = (MR_Integer) 20;
            break;
          case (MR_Integer) 112:
            if (((((((((((((((MR_nth_code_unit(Name_10, 1)) == (MR_Integer) 114)) && (((MR_nth_code_unit(Name_10, 2)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(Name_10, 3)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(Name_10, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Name_10, 5)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(Name_10, 6)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Name_10, 7)) == (MR_Integer) 95))))
              switch (MR_nth_code_unit(Name_10, 8)) {
                case (MR_Integer) 101:
                  if (((((((((((((((((((((((((((((((((((((MR_nth_code_unit(Name_10, 9)) == (MR_Integer) 113)) && (((MR_nth_code_unit(Name_10, 10)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(Name_10, 11)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Name_10, 12)) == (MR_Integer) 118)))) && (((MR_nth_code_unit(Name_10, 13)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(Name_10, 14)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(Name_10, 15)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Name_10, 16)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(Name_10, 17)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(Name_10, 18)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(Name_10, 19)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(Name_10, 20)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(Name_10, 21)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(Name_10, 22)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(Name_10, 23)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(Name_10, 24)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Name_10, 25)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(Name_10, 26)) == (MR_Integer) 110))))
                    switch (MR_nth_code_unit(Name_10, 27)) {
                      case (MR_Integer) 95:
                        if (MR_offset_streq(28, Name_10, (MR_String) "promise_equivalent_solution_sets"))
                          case_num_0 = (MR_Integer) 21;
                        break;
                      case (MR_Integer) 115:
                        if (MR_offset_streq(28, Name_10, (MR_String) "promise_equivalent_solutions"))
                          case_num_0 = (MR_Integer) 22;
                        break;
                    }
                  break;
                case (MR_Integer) 105:
                  if (MR_offset_streq(9, Name_10, (MR_String) "promise_impure"))
                    case_num_0 = (MR_Integer) 23;
                  break;
                case (MR_Integer) 112:
                  if (MR_offset_streq(9, Name_10, (MR_String) "promise_pure"))
                    case_num_0 = (MR_Integer) 24;
                  break;
                case (MR_Integer) 115:
                  if (MR_offset_streq(9, Name_10, (MR_String) "promise_semipure"))
                    case_num_0 = (MR_Integer) 25;
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
                              case_num_0 = (MR_Integer) 26;
                            break;
                          case (MR_Integer) 110:
                            if (MR_offset_streq(12, Name_10, (MR_String) "require_cc_nondet"))
                              case_num_0 = (MR_Integer) 27;
                            break;
                        }
                      break;
                    case (MR_Integer) 111:
                      if (MR_offset_streq(10, Name_10, (MR_String) "require_complete_switch"))
                        case_num_0 = (MR_Integer) 28;
                      break;
                  }
                  break;
                case (MR_Integer) 100:
                  if (MR_offset_streq(9, Name_10, (MR_String) "require_det"))
                    case_num_0 = (MR_Integer) 29;
                  break;
                case (MR_Integer) 101:
                  if (MR_offset_streq(9, Name_10, (MR_String) "require_erroneous"))
                    case_num_0 = (MR_Integer) 30;
                  break;
                case (MR_Integer) 102:
                  if (MR_offset_streq(9, Name_10, (MR_String) "require_failure"))
                    case_num_0 = (MR_Integer) 31;
                  break;
                case (MR_Integer) 109:
                  if (MR_offset_streq(9, Name_10, (MR_String) "require_multi"))
                    case_num_0 = (MR_Integer) 32;
                  break;
                case (MR_Integer) 110:
                  if (MR_offset_streq(9, Name_10, (MR_String) "require_nondet"))
                    case_num_0 = (MR_Integer) 33;
                  break;
                case (MR_Integer) 115:
                  switch (MR_nth_code_unit(Name_10, 9)) {
                    case (MR_Integer) 101:
                      if (MR_offset_streq(10, Name_10, (MR_String) "require_semidet"))
                        case_num_0 = (MR_Integer) 34;
                      break;
                    case (MR_Integer) 119:
                      if (((((((((((((((((((((MR_nth_code_unit(Name_10, 10)) == (MR_Integer) 105)) && (((MR_nth_code_unit(Name_10, 11)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(Name_10, 12)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(Name_10, 13)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(Name_10, 14)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(Name_10, 15)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(Name_10, 16)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(Name_10, 17)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(Name_10, 18)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(Name_10, 19)) == (MR_Integer) 95))))
                        switch (MR_nth_code_unit(Name_10, 20)) {
                          case (MR_Integer) 99:
                            if (((((MR_nth_code_unit(Name_10, 21)) == (MR_Integer) 99)) && (((MR_nth_code_unit(Name_10, 22)) == (MR_Integer) 95))))
                              switch (MR_nth_code_unit(Name_10, 23)) {
                                case (MR_Integer) 109:
                                  if (MR_offset_streq(24, Name_10, (MR_String) "require_switch_arms_cc_multi"))
                                    case_num_0 = (MR_Integer) 35;
                                  break;
                                case (MR_Integer) 110:
                                  if (MR_offset_streq(24, Name_10, (MR_String) "require_switch_arms_cc_nondet"))
                                    case_num_0 = (MR_Integer) 36;
                                  break;
                              }
                            break;
                          case (MR_Integer) 100:
                            if (MR_offset_streq(21, Name_10, (MR_String) "require_switch_arms_det"))
                              case_num_0 = (MR_Integer) 37;
                            break;
                          case (MR_Integer) 101:
                            if (MR_offset_streq(21, Name_10, (MR_String) "require_switch_arms_erroneous"))
                              case_num_0 = (MR_Integer) 38;
                            break;
                          case (MR_Integer) 102:
                            if (MR_offset_streq(21, Name_10, (MR_String) "require_switch_arms_failure"))
                              case_num_0 = (MR_Integer) 39;
                            break;
                          case (MR_Integer) 109:
                            if (MR_offset_streq(21, Name_10, (MR_String) "require_switch_arms_multi"))
                              case_num_0 = (MR_Integer) 40;
                            break;
                          case (MR_Integer) 110:
                            if (MR_offset_streq(21, Name_10, (MR_String) "require_switch_arms_nondet"))
                              case_num_0 = (MR_Integer) 41;
                            break;
                          case (MR_Integer) 115:
                            if (MR_offset_streq(21, Name_10, (MR_String) "require_switch_arms_semidet"))
                              case_num_0 = (MR_Integer) 42;
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
                  case_num_0 = (MR_Integer) 43;
                break;
              case (MR_Integer) 111:
                if (MR_offset_streq(2, Name_10, (MR_String) "some"))
                  case_num_0 = (MR_Integer) 44;
                break;
            }
            break;
          case (MR_Integer) 116:
            switch (MR_nth_code_unit(Name_10, 1)) {
              case (MR_Integer) 104:
                if (MR_offset_streq(2, Name_10, (MR_String) "then"))
                  case_num_0 = (MR_Integer) 45;
                break;
              case (MR_Integer) 114:
                switch (MR_nth_code_unit(Name_10, 2)) {
                  case (MR_Integer) 97:
                    if (MR_offset_streq(3, Name_10, (MR_String) "trace"))
                      case_num_0 = (MR_Integer) 46;
                    break;
                  case (MR_Integer) 117:
                    if (MR_offset_streq(3, Name_10, (MR_String) "true"))
                      case_num_0 = (MR_Integer) 47;
                    break;
                }
                break;
            }
            break;
        }
        if ((case_num_0 < (MR_Integer) 0))
          succeeded = MR_FALSE;
        else
        {
          // we found a match; look up the results
          ;
          GoalKind_13 = ((&parse_tree__parse_goal_vector_common_10[0 + case_num_0]))->parse_tree__parse_goal__vector_common_type_10_0__vct_10_f_0;
          succeeded = MR_TRUE;
        }
      }
    }
  }
  if (succeeded)
    switch (GoalKind_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 10:
      case (MR_Integer) 9:
        parse_tree__parse_goal__parse_goal_some_all_7_p_0(GoalKind_13, ArgTerms_11, Context_12, ContextPieces_7, MaybeGoal_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
        break;
      case (MR_Integer) 26:
        parse_tree__parse_goal__parse_goal_arbitrary_6_p_0(ArgTerms_11, Context_12, ContextPieces_7, MaybeGoal_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
        break;
      case (MR_Integer) 23:
        parse_tree__parse_goal__parse_goal_atomic_6_p_0(ArgTerms_11, Context_12, ContextPieces_7, MaybeGoal_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
        break;
      case (MR_Integer) 17:
        parse_tree__parse_goal__parse_catch_then_try_term_args_7_p_0(ArgTerms_11, (MR_Word) ((MR_Unsigned) 0U), Context_12, ContextPieces_7, MaybeGoal_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
        break;
      case (MR_Integer) 18:
        parse_tree__parse_goal__parse_goal_catch_any_6_p_0(ArgTerms_11, Context_12, ContextPieces_7, MaybeGoal_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
        break;
      case (MR_Integer) 11:
        parse_tree__parse_goal__parse_goal_conj_7_p_0(GoalKind_13, ArgTerms_11, Context_12, ContextPieces_7, MaybeGoal_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
        break;
      case (MR_Integer) 5:
      case (MR_Integer) 6:
        parse_tree__parse_goal__parse_goal_disable_warnings_7_p_0(GoalKind_13, ArgTerms_11, Context_12, ContextPieces_7, MaybeGoal_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
        break;
      case (MR_Integer) 14:
        parse_tree__parse_goal__parse_goal_else_6_p_0(ArgTerms_11, Context_12, ContextPieces_7, MaybeGoal_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
        break;
      case (MR_Integer) 47:
        parse_tree__parse_goal__parse_goal_equal_6_p_0(ArgTerms_11, Context_12, ContextPieces_7, MaybeGoal_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
        break;
      case (MR_Integer) 44:
        parse_tree__parse_goal__parse_goal_event_6_p_0(ArgTerms_11, Context_12, ContextPieces_7, MaybeGoal_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
        break;
      case (MR_Integer) 46:
      case (MR_Integer) 45:
        parse_tree__parse_goal__parse_goal_true_fail_7_p_0(GoalKind_13, ArgTerms_11, Context_12, ContextPieces_7, MaybeGoal_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
        break;
      case (MR_Integer) 15:
        parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_103_111_97_108_95_105_102_95_95_91_51_93_95_48_6_p_0(ArgTerms_11, Context_12, MaybeGoal_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
        break;
      case (MR_Integer) 21:
      case (MR_Integer) 19:
      case (MR_Integer) 20:
        parse_tree__parse_goal__parse_goal_implication_7_p_0(GoalKind_13, ArgTerms_11, Context_12, ContextPieces_7, MaybeGoal_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        parse_tree__parse_goal__parse_goal_impure_semipure_7_p_0(GoalKind_13, ArgTerms_11, Context_12, ContextPieces_7, MaybeGoal_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
        break;
      case (MR_Integer) 7:
      case (MR_Integer) 8:
        parse_tree__parse_goal__parse_goal_not_7_p_0(GoalKind_13, ArgTerms_11, Context_12, ContextPieces_7, MaybeGoal_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
        break;
      case (MR_Integer) 12:
        parse_tree__parse_goal__parse_goal_conj_7_p_1(GoalKind_13, ArgTerms_11, Context_12, ContextPieces_7, MaybeGoal_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
        break;
      case (MR_Integer) 25:
      case (MR_Integer) 24:
        parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0(GoalKind_13, ArgTerms_11, Context_12, ContextPieces_7, MaybeGoal_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 4:
      case (MR_Integer) 3:
        parse_tree__parse_goal__parse_goal_promise_purity_7_p_0(GoalKind_13, ArgTerms_11, Context_12, ContextPieces_7, MaybeGoal_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
        break;
      case (MR_Integer) 40:
      case (MR_Integer) 41:
      case (MR_Integer) 36:
      case (MR_Integer) 42:
      case (MR_Integer) 43:
      case (MR_Integer) 38:
      case (MR_Integer) 39:
      case (MR_Integer) 37:
        parse_tree__parse_goal__parse_goal_require_switch_arm_detism_7_p_0(GoalKind_13, ArgTerms_11, Context_12, ContextPieces_7, MaybeGoal_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
        break;
      case (MR_Integer) 31:
      case (MR_Integer) 32:
      case (MR_Integer) 27:
      case (MR_Integer) 33:
      case (MR_Integer) 34:
      case (MR_Integer) 29:
      case (MR_Integer) 30:
      case (MR_Integer) 28:
        parse_tree__parse_goal__parse_goal_require_detism_7_p_0(GoalKind_13, ArgTerms_11, Context_12, ContextPieces_7, MaybeGoal_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
        break;
      case (MR_Integer) 35:
        parse_tree__parse_goal__parse_goal_require_complete_switch_6_p_0(ArgTerms_11, Context_12, ContextPieces_7, MaybeGoal_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
        break;
      case (MR_Integer) 13:
        parse_tree__parse_goal__parse_goal_semicolon_6_p_0(ArgTerms_11, Context_12, ContextPieces_7, MaybeGoal_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
        break;
      case (MR_Integer) 16:
        parse_tree__parse_goal__parse_goal_then_6_p_0(ArgTerms_11, Context_12, ContextPieces_7, MaybeGoal_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
        break;
      case (MR_Integer) 22:
        parse_tree__parse_goal__parse_goal_trace_6_p_0(ArgTerms_11, Context_12, ContextPieces_7, MaybeGoal_8, STATE_VARIABLE_VarSet_0_17, STATE_VARIABLE_VarSet_18);
        break;
    }
  else
  {
    MR_Word ProgTerm_14;
    MR_Word Goal_16;
    MR_Word Context_30;
    MR_Word SymName_15;
    MR_Word ArgTerms_28;

    Context_30 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_6);
    mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Term_6, &ProgTerm_14);
    succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgTerm_14, &SymName_15, &ArgTerms_28);
    if (succeeded)
      {
        Goal_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Goal_16, 0) = ((MR_Box) (Context_30));
        MR_hl_field(1, Goal_16, 1) = ((MR_Box) (SymName_15));
        MR_hl_field(1, Goal_16, 2) = ((MR_Box) (ArgTerms_28));
        MR_hl_field(1, Goal_16, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    else
    {
      MR_Word Var_24;

      {
        Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_24, 0) = ((MR_Box) (ProgTerm_14));
        MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Goal_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Goal_16, 0) = ((MR_Box) (Context_30));
        MR_hl_field(1, Goal_16, 1) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[0]));
        MR_hl_field(1, Goal_16, 2) = ((MR_Box) (Var_24));
        MR_hl_field(1, Goal_16, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MaybeGoal_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_16));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_VarSet_18 = STATE_VARIABLE_VarSet_0_17;
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
  MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word ThenTerm_13;
  MR_Word Var_21;
  MR_Word Var_22;

  if (succeeded)
  {
    Var_21 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, (MR_Integer) 1))));
    succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ThenTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_21, (MR_Integer) 0))));
      Var_22 = ((MR_Word) ((MR_hl_field(1, Var_21, (MR_Integer) 1))));
      succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word SemiColonContext_16;
    MR_Word Var_27;
    MR_Word Var_23;
    MR_String Var_24;
    MR_Word Var_25;
    MR_Word Var_26;

    succeeded = ((MR_tag((MR_Word) ThenTerm_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_23 = ((MR_Word) ((MR_hl_field(0, ThenTerm_13, (MR_Integer) 0))));
      Var_25 = ((MR_Word) ((MR_hl_field(0, ThenTerm_13, (MR_Integer) 1))));
      SemiColonContext_16 = ((MR_Word) ((MR_hl_field(0, ThenTerm_13, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_24 = ((MR_String) ((MR_hl_field(0, Var_23, (MR_Integer) 0))));
        succeeded = (strcmp(Var_24, (MR_String) ";") == 0);
        if (succeeded)
        {
          succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_26 = ((MR_Word) ((MR_hl_field(1, Var_25, (MR_Integer) 1))));
            succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_27 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 1))));
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
        Spec_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_then\'/6"));
        MR_hl_field(1, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_18, 3) = ((MR_Box) (SemiColonContext_16));
        MR_hl_field(1, Spec_18, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[87])));
      }
      {
        Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_51, 0) = ((MR_Box) (Spec_18));
        MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_27));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_51));
      }
      *STATE_VARIABLE_VarSet_20 = STATE_VARIABLE_VarSet_0_19;
    }
    else
    {
      MR_Word Var_53;

      {
        Var_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_53, 0) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[3]));
        MR_hl_field(0, Var_53, 1) = ((MR_Box) (ArgTerms_7));
        MR_hl_field(0, Var_53, 2) = ((MR_Box) (Context_8));
      }
      parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_53_93_95_48_9_p_0(Var_53, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), ContextPieces_9, MaybeGoal_10, STATE_VARIABLE_VarSet_0_19, STATE_VARIABLE_VarSet_20);
    }
  }
  else
  {
    MR_Word Var_119;
    MR_Word Spec_122;

    {
      Spec_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_122, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_then\'/6"));
      MR_hl_field(1, Spec_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_122, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_122, 3) = ((MR_Box) (Context_8));
      MR_hl_field(1, Spec_122, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[125])));
    }
    {
      Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_119, 0) = ((MR_Box) (Spec_122));
      MR_hl_field(1, Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_119));
    }
    *STATE_VARIABLE_VarSet_20 = STATE_VARIABLE_VarSet_0_19;
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
  MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word CondThenTerm_12;
  MR_Word ElseTerm_13;
  MR_Word Var_41;
  MR_Word Var_42;

  if (succeeded)
  {
    CondThenTerm_12 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, (MR_Integer) 0))));
    Var_41 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, (MR_Integer) 1))));
    succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ElseTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 0))));
      Var_42 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 1))));
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
      Var_43 = ((MR_Word) ((MR_hl_field(0, CondThenTerm_12, (MR_Integer) 0))));
      Var_45 = ((MR_Word) ((MR_hl_field(0, CondThenTerm_12, (MR_Integer) 1))));
      CondContext_17 = ((MR_Word) ((MR_hl_field(0, CondThenTerm_12, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_43)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_44 = ((MR_String) ((MR_hl_field(0, Var_43, (MR_Integer) 0))));
        succeeded = (strcmp(Var_44, (MR_String) "if") == 0);
        if (succeeded)
        {
          succeeded = (Var_45 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_46 = ((MR_Word) ((MR_hl_field(1, Var_45, (MR_Integer) 0))));
            Var_52 = ((MR_Word) ((MR_hl_field(1, Var_45, (MR_Integer) 1))));
            succeeded = (Var_52 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_47 = ((MR_Word) ((MR_hl_field(0, Var_46, (MR_Integer) 0))));
                Var_49 = ((MR_Word) ((MR_hl_field(0, Var_46, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_48 = ((MR_String) ((MR_hl_field(0, Var_47, (MR_Integer) 0))));
                  succeeded = (strcmp(Var_48, (MR_String) "then") == 0);
                  if (succeeded)
                  {
                    succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      CondTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_49, (MR_Integer) 0))));
                      Var_50 = ((MR_Word) ((MR_hl_field(1, Var_49, (MR_Integer) 1))));
                      succeeded = (Var_50 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ThenTerm_15 = ((MR_Word) ((MR_hl_field(1, Var_50, (MR_Integer) 0))));
                        Var_51 = ((MR_Word) ((MR_hl_field(1, Var_50, (MR_Integer) 1))));
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
        Vars_21 = ((MR_Word) ((MR_hl_field(1, MaybeCondGoal_18, (MR_Integer) 0))));
        StateVars_22 = ((MR_Word) ((MR_hl_field(1, MaybeCondGoal_18, (MR_Integer) 1))));
        CondGoal_23 = ((MR_Word) ((MR_hl_field(1, MaybeCondGoal_18, (MR_Integer) 2))));
        CondWarningSpecs_24 = ((MR_Word) ((MR_hl_field(1, MaybeCondGoal_18, (MR_Integer) 3))));
        succeeded = ((MR_tag((MR_Word) MaybeThenGoal_19)) == (MR_Integer) 1);
        if (succeeded)
        {
          ThenGoal_25 = ((MR_Word) ((MR_hl_field(1, MaybeThenGoal_19, (MR_Integer) 0))));
          ThenWarningSpecs_26 = ((MR_Word) ((MR_hl_field(1, MaybeThenGoal_19, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) MaybeElseGoal_20)) == (MR_Integer) 1);
          if (succeeded)
          {
            ElseGoal_27 = ((MR_Word) ((MR_hl_field(1, MaybeElseGoal_20, (MR_Integer) 0))));
            ElseWarningSpecs_28 = ((MR_Word) ((MR_hl_field(1, MaybeElseGoal_20, (MR_Integer) 1))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word Goal_29;
        MR_Word WarningSpecs_30;
        MR_Word Var_56;

        {
          Goal_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Goal_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Goal_29, 1) = ((MR_Box) (CondContext_17));
          MR_hl_field(3, Goal_29, 2) = ((MR_Box) (Vars_21));
          MR_hl_field(3, Goal_29, 3) = ((MR_Box) (StateVars_22));
          MR_hl_field(3, Goal_29, 4) = ((MR_Box) (CondGoal_23));
          MR_hl_field(3, Goal_29, 5) = ((MR_Box) (ThenGoal_25));
          MR_hl_field(3, Goal_29, 6) = ((MR_Box) (ElseGoal_27));
        }
        Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ThenWarningSpecs_26, ElseWarningSpecs_28);
        WarningSpecs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), CondWarningSpecs_24, Var_56);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Goal_29));
          MR_hl_field(1, base, 1) = ((MR_Box) (WarningSpecs_30));
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
        Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_59, Var_60);
        Specs_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_57, Var_58);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_31));
        }
      }
    }
    else
    {
      MR_Word ArrowContext_34;
      MR_Word Var_70;
      MR_Word Var_61;
      MR_String Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_String Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;

      succeeded = ((MR_tag((MR_Word) CondThenTerm_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_61 = ((MR_Word) ((MR_hl_field(0, CondThenTerm_12, (MR_Integer) 0))));
        Var_63 = ((MR_Word) ((MR_hl_field(0, CondThenTerm_12, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_61)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_62 = ((MR_String) ((MR_hl_field(0, Var_61, (MR_Integer) 0))));
          succeeded = (strcmp(Var_62, (MR_String) "if") == 0);
          if (succeeded)
          {
            succeeded = (Var_63 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_64 = ((MR_Word) ((MR_hl_field(1, Var_63, (MR_Integer) 0))));
              Var_70 = ((MR_Word) ((MR_hl_field(1, Var_63, (MR_Integer) 1))));
              succeeded = (Var_70 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Var_64)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_65 = ((MR_Word) ((MR_hl_field(0, Var_64, (MR_Integer) 0))));
                  Var_67 = ((MR_Word) ((MR_hl_field(0, Var_64, (MR_Integer) 1))));
                  ArrowContext_34 = ((MR_Word) ((MR_hl_field(0, Var_64, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) Var_65)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_66 = ((MR_String) ((MR_hl_field(0, Var_65, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_66, (MR_String) "->") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_67 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_68 = ((MR_Word) ((MR_hl_field(1, Var_67, (MR_Integer) 1))));
                        succeeded = (Var_68 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_69 = ((MR_Word) ((MR_hl_field(1, Var_68, (MR_Integer) 1))));
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
          Spec_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_37, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_else\'/6"));
          MR_hl_field(1, Spec_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_37, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(1, Spec_37, 3) = ((MR_Box) (ArrowContext_34));
          MR_hl_field(1, Spec_37, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[58])));
        }
        {
          Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_94, 0) = ((MR_Box) (Spec_37));
          MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_70));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_94));
        }
        *STATE_VARIABLE_VarSet_40 = STATE_VARIABLE_VarSet_0_39;
      }
      else
      {
        MR_Word Var_100;
        MR_Word ArrowContext_176;
        MR_Word Var_96;
        MR_String Var_97;
        MR_Word Var_98;
        MR_Word Var_99;

        succeeded = ((MR_tag((MR_Word) CondThenTerm_12)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_96 = ((MR_Word) ((MR_hl_field(0, CondThenTerm_12, (MR_Integer) 0))));
          Var_98 = ((MR_Word) ((MR_hl_field(0, CondThenTerm_12, (MR_Integer) 1))));
          ArrowContext_176 = ((MR_Word) ((MR_hl_field(0, CondThenTerm_12, (MR_Integer) 2))));
          succeeded = ((MR_tag((MR_Word) Var_96)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_97 = ((MR_String) ((MR_hl_field(0, Var_96, (MR_Integer) 0))));
            succeeded = (strcmp(Var_97, (MR_String) "->") == 0);
            if (succeeded)
            {
              succeeded = (Var_98 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_99 = ((MR_Word) ((MR_hl_field(1, Var_98, (MR_Integer) 1))));
                succeeded = (Var_99 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_100 = ((MR_Word) ((MR_hl_field(1, Var_99, (MR_Integer) 1))));
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
            Spec_173 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_173, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_else\'/6"));
            MR_hl_field(1, Spec_173, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_173, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(1, Spec_173, 3) = ((MR_Box) (ArrowContext_176));
            MR_hl_field(1, Spec_173, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[71])));
          }
          {
            Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_133, 0) = ((MR_Box) (Spec_173));
            MR_hl_field(1, Var_133, 1) = ((MR_Box) (Var_100));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeGoal_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_133));
          }
          *STATE_VARIABLE_VarSet_40 = STATE_VARIABLE_VarSet_0_39;
        }
        else
        {
          MR_Word FullTerm_38;

          {
            FullTerm_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, FullTerm_38, 0) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_3[2]));
            MR_hl_field(0, FullTerm_38, 1) = ((MR_Box) (ArgTerms_7));
            MR_hl_field(0, FullTerm_38, 2) = ((MR_Box) (Context_8));
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
      Spec_180 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_180, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_else\'/6"));
      MR_hl_field(1, Spec_180, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_180, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_180, 3) = ((MR_Box) (Context_8));
      MR_hl_field(1, Spec_180, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[81])));
    }
    {
      Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_166, 0) = ((MR_Box) (Spec_180));
      MR_hl_field(1, Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_166));
    }
    *STATE_VARIABLE_VarSet_40 = STATE_VARIABLE_VarSet_0_39;
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
    Var_32 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 0))));
    Var_34 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_33 = ((MR_String) ((MR_hl_field(0, Var_32, (MR_Integer) 0))));
      succeeded = (strcmp(Var_33, (MR_String) "else") == 0);
      if (succeeded)
      {
        succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ThenTerm_16 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 0))));
          Var_35 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 1))));
          succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ElseTerm_17 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 0))));
            Var_36 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 1))));
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
      MR_Word ElseGoal_20 = ((MR_Word) ((MR_hl_field(1, MaybeElseGoal0_19, (MR_Integer) 0))));
      MR_Word ElseWarningSpecs_21 = ((MR_Word) ((MR_hl_field(1, MaybeElseGoal0_19, (MR_Integer) 1))));
      MR_Word MaybeTryGoal_22;
      MR_Word Var_38;
      MR_Word ThenContext_26;
      MR_Word Var_40;
      MR_String Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;

      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (ElseGoal_20));
      }
      parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_53_93_95_48_9_p_0(ThenTerm_16, Var_38, CatchExprs_10, MaybeCatchAnyExpr_11, ContextPieces_13, &MaybeTryGoal_22, STATE_VARIABLE_VarSet_37_37, STATE_VARIABLE_VarSet_31);
      succeeded = ((MR_tag((MR_Word) MaybeTryGoal_22)) == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) ThenTerm_16)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_40 = ((MR_Word) ((MR_hl_field(0, ThenTerm_16, (MR_Integer) 0))));
          Var_42 = ((MR_Word) ((MR_hl_field(0, ThenTerm_16, (MR_Integer) 1))));
          ThenContext_26 = ((MR_Word) ((MR_hl_field(0, ThenTerm_16, (MR_Integer) 2))));
          succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_41 = ((MR_String) ((MR_hl_field(0, Var_40, (MR_Integer) 0))));
            succeeded = (strcmp(Var_41, (MR_String) "then") == 0);
            if (succeeded)
            {
              succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_43 = ((MR_Word) ((MR_hl_field(1, Var_42, (MR_Integer) 1))));
                succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_44 = ((MR_Word) ((MR_hl_field(1, Var_43, (MR_Integer) 1))));
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
          Spec_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_else_then_try_term\'/8"));
          MR_hl_field(1, Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(1, Spec_28, 3) = ((MR_Box) (ThenContext_26));
          MR_hl_field(1, Spec_28, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[326])));
        }
        {
          Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_68, 0) = ((MR_Box) (Spec_28));
          MR_hl_field(1, Var_68, 1) = ((MR_Box) (ElseWarningSpecs_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_68));
        }
      }
      else
        *MaybeGoal_14 = MaybeTryGoal_22;
    }
  }
  else
    parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_53_93_95_48_9_p_0(Term_9, (MR_Word) ((MR_Unsigned) 0U), CatchExprs_10, MaybeCatchAnyExpr_11, ContextPieces_13, MaybeGoal_14, STATE_VARIABLE_VarSet_0_30, STATE_VARIABLE_VarSet_31);
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_disjunction_11_p_0(
  MR_Word TermA_12,
  MR_Word TermB_13,
  MR_Word ContextPieces_14,
  MR_Word STATE_VARIABLE_DisjunctsCord_0_34,
  MR_Word * STATE_VARIABLE_DisjunctsCord_35,
  MR_Word STATE_VARIABLE_Warnings_0_36,
  MR_Word * STATE_VARIABLE_Warnings_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39,
  MR_Word STATE_VARIABLE_VarSet_0_40,
  MR_Word * STATE_VARIABLE_VarSet_41)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MaybeGoalA_19;
    MR_Word STATE_VARIABLE_VarSet_42_42;
    MR_Word STATE_VARIABLE_DisjunctsCord_43_43;
    MR_Word STATE_VARIABLE_Warnings_44_44;
    MR_Word STATE_VARIABLE_Specs_45_45;
    MR_Word TermBA_25;
    MR_Word TermBB_26;
    MR_Word ArgTermsB_23;
    MR_Word Var_46;
    MR_String Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_String Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_goal__parse_goal_5_p_0(TermA_12, ContextPieces_14, &MaybeGoalA_19, STATE_VARIABLE_VarSet_0_40, &STATE_VARIABLE_VarSet_42_42);
    if (((MR_tag((MR_Word) MaybeGoalA_19)) == (MR_Integer) 0))
    {
      MR_Word SpecsA_22 = ((MR_Word) ((MR_hl_field(0, MaybeGoalA_19, (MR_Integer) 0))));

      STATE_VARIABLE_Specs_45_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_0_38, SpecsA_22);
      STATE_VARIABLE_DisjunctsCord_43_43 = STATE_VARIABLE_DisjunctsCord_0_34;
      STATE_VARIABLE_Warnings_44_44 = STATE_VARIABLE_Warnings_0_36;
    }
    else
    {
      MR_Word DisjunctA_20 = ((MR_Word) ((MR_hl_field(1, MaybeGoalA_19, (MR_Integer) 0))));
      MR_Word WarningsA_21 = ((MR_Word) ((MR_hl_field(1, MaybeGoalA_19, (MR_Integer) 1))));

      parse_tree__parse_goal__append_disjunct_to_cord_3_p_0(DisjunctA_20, STATE_VARIABLE_DisjunctsCord_0_34, &STATE_VARIABLE_DisjunctsCord_43_43);
      STATE_VARIABLE_Warnings_44_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), WarningsA_21, STATE_VARIABLE_Warnings_0_36);
      STATE_VARIABLE_Specs_45_45 = STATE_VARIABLE_Specs_0_38;
    }
    succeeded = ((MR_tag((MR_Word) TermB_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_46 = ((MR_Word) ((MR_hl_field(0, TermB_13, (MR_Integer) 0))));
      ArgTermsB_23 = ((MR_Word) ((MR_hl_field(0, TermB_13, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_47 = ((MR_String) ((MR_hl_field(0, Var_46, (MR_Integer) 0))));
        succeeded = (strcmp(Var_47, (MR_String) ";") == 0);
        if (succeeded)
        {
          succeeded = (ArgTermsB_23 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TermBA_25 = ((MR_Word) ((MR_hl_field(1, ArgTermsB_23, (MR_Integer) 0))));
            Var_48 = ((MR_Word) ((MR_hl_field(1, ArgTermsB_23, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) TermBA_25)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_50 = ((MR_Word) ((MR_hl_field(0, TermBA_25, (MR_Integer) 0))));
              Var_52 = ((MR_Word) ((MR_hl_field(0, TermBA_25, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_51 = ((MR_String) ((MR_hl_field(0, Var_50, (MR_Integer) 0))));
                succeeded = (strcmp(Var_51, (MR_String) "->") == 0);
                if (succeeded)
                {
                  succeeded = (Var_52 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_53 = ((MR_Word) ((MR_hl_field(1, Var_52, (MR_Integer) 1))));
                    succeeded = (Var_53 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_54 = ((MR_Word) ((MR_hl_field(1, Var_53, (MR_Integer) 1))));
                      succeeded = (Var_54 == (MR_Word) ((MR_Unsigned) 0U));
                    }
                  }
                }
              }
            }
            succeeded = !(succeeded);
            if (succeeded)
            {
              succeeded = (Var_48 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TermBB_26 = ((MR_Word) ((MR_hl_field(1, Var_48, (MR_Integer) 0))));
                Var_49 = ((MR_Word) ((MR_hl_field(1, Var_48, (MR_Integer) 1))));
                succeeded = (Var_49 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_TermA_12 = TermBA_25;
      MR_Word next_value_of_TermB_13 = TermBB_26;
      MR_Word next_value_of_STATE_VARIABLE_DisjunctsCord_0_34 = STATE_VARIABLE_DisjunctsCord_43_43;
      MR_Word next_value_of_STATE_VARIABLE_Warnings_0_36 = STATE_VARIABLE_Warnings_44_44;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_38 = STATE_VARIABLE_Specs_45_45;
      MR_Word next_value_of_STATE_VARIABLE_VarSet_0_40 = STATE_VARIABLE_VarSet_42_42;

      // direct tailcall eliminated
      ;
      TermA_12 = next_value_of_TermA_12;
      TermB_13 = next_value_of_TermB_13;
      STATE_VARIABLE_DisjunctsCord_0_34 = next_value_of_STATE_VARIABLE_DisjunctsCord_0_34;
      STATE_VARIABLE_Warnings_0_36 = next_value_of_STATE_VARIABLE_Warnings_0_36;
      STATE_VARIABLE_Specs_0_38 = next_value_of_STATE_VARIABLE_Specs_0_38;
      STATE_VARIABLE_VarSet_0_40 = next_value_of_STATE_VARIABLE_VarSet_0_40;
      continue;
    }
    else
    {
      MR_Word MaybeGoalB_30;

      parse_tree__parse_goal__parse_goal_5_p_0(TermB_13, ContextPieces_14, &MaybeGoalB_30, STATE_VARIABLE_VarSet_42_42, STATE_VARIABLE_VarSet_41);
      if (((MR_tag((MR_Word) MaybeGoalB_30)) == (MR_Integer) 0))
      {
        MR_Word SpecsB_33 = ((MR_Word) ((MR_hl_field(0, MaybeGoalB_30, (MR_Integer) 0))));

        *STATE_VARIABLE_Specs_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_45_45, SpecsB_33);
        *STATE_VARIABLE_DisjunctsCord_35 = STATE_VARIABLE_DisjunctsCord_43_43;
        *STATE_VARIABLE_Warnings_37 = STATE_VARIABLE_Warnings_44_44;
      }
      else
      {
        MR_Word DisjunctB_31 = ((MR_Word) ((MR_hl_field(1, MaybeGoalB_30, (MR_Integer) 0))));
        MR_Word WarningsB_32 = ((MR_Word) ((MR_hl_field(1, MaybeGoalB_30, (MR_Integer) 1))));

        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), ((MR_Box) (DisjunctB_31)), STATE_VARIABLE_DisjunctsCord_43_43, STATE_VARIABLE_DisjunctsCord_35);
        *STATE_VARIABLE_Warnings_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_Warnings_44_44, WarningsB_32);
        *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_45_45;
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_conjunction_12_p_0(
  MR_String Functor_13,
  MR_Word TermA_14,
  MR_Word TermB_15,
  MR_Word ContextPieces_16,
  MR_Word STATE_VARIABLE_ConjunctsCord_0_33,
  MR_Word * STATE_VARIABLE_ConjunctsCord_34,
  MR_Word STATE_VARIABLE_Warnings_0_35,
  MR_Word * STATE_VARIABLE_Warnings_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38,
  MR_Word STATE_VARIABLE_VarSet_0_39,
  MR_Word * STATE_VARIABLE_VarSet_40)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MaybeGoalA_21;
    MR_Word STATE_VARIABLE_VarSet_41_41;
    MR_Word STATE_VARIABLE_ConjunctsCord_42_42;
    MR_Word STATE_VARIABLE_Warnings_43_43;
    MR_Word STATE_VARIABLE_Specs_44_44;
    MR_Word TermBA_27;
    MR_Word TermBB_28;
    MR_Word ArgTermsB_25;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_String Var_54;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__parse_goal__parse_goal_5_p_0(TermA_14, ContextPieces_16, &MaybeGoalA_21, STATE_VARIABLE_VarSet_0_39, &STATE_VARIABLE_VarSet_41_41);
    if (((MR_tag((MR_Word) MaybeGoalA_21)) == (MR_Integer) 0))
    {
      MR_Word SpecsA_24 = ((MR_Word) ((MR_hl_field(0, MaybeGoalA_21, (MR_Integer) 0))));

      STATE_VARIABLE_Specs_44_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_0_37, SpecsA_24);
      STATE_VARIABLE_ConjunctsCord_42_42 = STATE_VARIABLE_ConjunctsCord_0_33;
      STATE_VARIABLE_Warnings_43_43 = STATE_VARIABLE_Warnings_0_35;
    }
    else
    {
      MR_Word ConjunctA_22 = ((MR_Word) ((MR_hl_field(1, MaybeGoalA_21, (MR_Integer) 0))));
      MR_Word WarningsA_23 = ((MR_Word) ((MR_hl_field(1, MaybeGoalA_21, (MR_Integer) 1))));

      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), ((MR_Box) (ConjunctA_22)), STATE_VARIABLE_ConjunctsCord_0_33, &STATE_VARIABLE_ConjunctsCord_42_42);
      STATE_VARIABLE_Warnings_43_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), WarningsA_23, STATE_VARIABLE_Warnings_0_35);
      STATE_VARIABLE_Specs_44_44 = STATE_VARIABLE_Specs_0_37;
    }
    succeeded = ((MR_tag((MR_Word) TermB_15)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_45 = ((MR_Word) ((MR_hl_field(0, TermB_15, (MR_Integer) 0))));
      ArgTermsB_25 = ((MR_Word) ((MR_hl_field(0, TermB_15, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_54 = ((MR_String) ((MR_hl_field(0, Var_45, (MR_Integer) 0))));
        succeeded = (strcmp(Functor_13, Var_54) == 0);
        if (succeeded)
        {
          succeeded = (ArgTermsB_25 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TermBA_27 = ((MR_Word) ((MR_hl_field(1, ArgTermsB_25, (MR_Integer) 0))));
            Var_46 = ((MR_Word) ((MR_hl_field(1, ArgTermsB_25, (MR_Integer) 1))));
            succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TermBB_28 = ((MR_Word) ((MR_hl_field(1, Var_46, (MR_Integer) 0))));
              Var_47 = ((MR_Word) ((MR_hl_field(1, Var_46, (MR_Integer) 1))));
              succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_TermA_14 = TermBA_27;
      MR_Word next_value_of_TermB_15 = TermBB_28;
      MR_Word next_value_of_STATE_VARIABLE_ConjunctsCord_0_33 = STATE_VARIABLE_ConjunctsCord_42_42;
      MR_Word next_value_of_STATE_VARIABLE_Warnings_0_35 = STATE_VARIABLE_Warnings_43_43;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_37 = STATE_VARIABLE_Specs_44_44;
      MR_Word next_value_of_STATE_VARIABLE_VarSet_0_39 = STATE_VARIABLE_VarSet_41_41;

      // direct tailcall eliminated
      ;
      TermA_14 = next_value_of_TermA_14;
      TermB_15 = next_value_of_TermB_15;
      STATE_VARIABLE_ConjunctsCord_0_33 = next_value_of_STATE_VARIABLE_ConjunctsCord_0_33;
      STATE_VARIABLE_Warnings_0_35 = next_value_of_STATE_VARIABLE_Warnings_0_35;
      STATE_VARIABLE_Specs_0_37 = next_value_of_STATE_VARIABLE_Specs_0_37;
      STATE_VARIABLE_VarSet_0_39 = next_value_of_STATE_VARIABLE_VarSet_0_39;
      continue;
    }
    else
    {
      MR_Word MaybeGoalB_29;

      parse_tree__parse_goal__parse_goal_5_p_0(TermB_15, ContextPieces_16, &MaybeGoalB_29, STATE_VARIABLE_VarSet_41_41, STATE_VARIABLE_VarSet_40);
      if (((MR_tag((MR_Word) MaybeGoalB_29)) == (MR_Integer) 0))
      {
        MR_Word SpecsB_32 = ((MR_Word) ((MR_hl_field(0, MaybeGoalB_29, (MR_Integer) 0))));

        *STATE_VARIABLE_Specs_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_44_44, SpecsB_32);
        *STATE_VARIABLE_ConjunctsCord_34 = STATE_VARIABLE_ConjunctsCord_42_42;
        *STATE_VARIABLE_Warnings_36 = STATE_VARIABLE_Warnings_43_43;
      }
      else
      {
        MR_Word ConjunctB_30 = ((MR_Word) ((MR_hl_field(1, MaybeGoalB_29, (MR_Integer) 0))));
        MR_Word WarningsB_31 = ((MR_Word) ((MR_hl_field(1, MaybeGoalB_29, (MR_Integer) 1))));

        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), ((MR_Box) (ConjunctB_30)), STATE_VARIABLE_ConjunctsCord_42_42, STATE_VARIABLE_ConjunctsCord_34);
        *STATE_VARIABLE_Warnings_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_Warnings_43_43, WarningsB_31);
        *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_44_44;
      }
    }
    break;
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
    Var_42 = ((MR_Word) ((MR_hl_field(0, ThenTryTerm_10, (MR_Integer) 0))));
    Var_44 = ((MR_Word) ((MR_hl_field(0, ThenTryTerm_10, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_43 = ((MR_String) ((MR_hl_field(0, Var_42, (MR_Integer) 0))));
      succeeded = (strcmp(Var_43, (MR_String) "then") == 0);
      if (succeeded)
      {
        succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TryTerm_18 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 0))));
          Var_45 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 1))));
          succeeded = (Var_45 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ThenTerm_19 = ((MR_Word) ((MR_hl_field(1, Var_45, (MR_Integer) 0))));
            Var_46 = ((MR_Word) ((MR_hl_field(1, Var_45, (MR_Integer) 1))));
            succeeded = (Var_46 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) TryTerm_18)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_47 = ((MR_Word) ((MR_hl_field(0, TryTerm_18, (MR_Integer) 0))));
                Var_49 = ((MR_Word) ((MR_hl_field(0, TryTerm_18, (MR_Integer) 1))));
                TryContext_23 = ((MR_Word) ((MR_hl_field(0, TryTerm_18, (MR_Integer) 2))));
                succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_48 = ((MR_String) ((MR_hl_field(0, Var_47, (MR_Integer) 0))));
                  succeeded = (strcmp(Var_48, (MR_String) "try") == 0);
                  if (succeeded)
                  {
                    succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      ParamsTerm_21 = ((MR_Word) ((MR_hl_field(1, Var_49, (MR_Integer) 0))));
                      Var_50 = ((MR_Word) ((MR_hl_field(1, Var_49, (MR_Integer) 1))));
                      succeeded = (Var_50 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        TryGoalTerm_22 = ((MR_Word) ((MR_hl_field(1, Var_50, (MR_Integer) 0))));
                        Var_51 = ((MR_Word) ((MR_hl_field(1, Var_50, (MR_Integer) 1))));
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
      Params_28 = ((MR_Word) ((MR_hl_field(1, MaybeParams_25, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeTryGoal_26)) == (MR_Integer) 1);
      if (succeeded)
      {
        TryGoal_29 = ((MR_Word) ((MR_hl_field(1, MaybeTryGoal_26, (MR_Integer) 0))));
        TryWarningSpecs_30 = ((MR_Word) ((MR_hl_field(1, MaybeTryGoal_26, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) MaybeThenGoal_27)) == (MR_Integer) 1);
        if (succeeded)
        {
          ThenGoal_31 = ((MR_Word) ((MR_hl_field(1, MaybeThenGoal_27, (MR_Integer) 0))));
          ThenWarningSpecs_32 = ((MR_Word) ((MR_hl_field(1, MaybeThenGoal_27, (MR_Integer) 1))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word WarningSpecs_33;
      MR_Word MaybeComponents_34;

      WarningSpecs_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), TryWarningSpecs_30, ThenWarningSpecs_32);
      parse_tree__parse_goal__convert_try_params_2_4_p_0(Params_28, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &MaybeComponents_34);
      if (((MR_tag((MR_Word) MaybeComponents_34)) == (MR_Integer) 0))
      {
        MR_Word Specs_37 = ((MR_Word) ((MR_hl_field(0, MaybeComponents_34, (MR_Integer) 0))));
        MR_Word Var_54;

        Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Specs_37, WarningSpecs_33);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_16 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_54));
        }
      }
      else
      {
        MR_Word MaybeIO_35 = ((MR_Word) ((MR_hl_field(1, MaybeComponents_34, (MR_Integer) 0))));
        MR_Word Goal_36;

        {
          Goal_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Goal_36, 0) = ((MR_Box) ((MR_Unsigned) 17U));
          MR_hl_field(3, Goal_36, 1) = ((MR_Box) (TryContext_23));
          MR_hl_field(3, Goal_36, 2) = ((MR_Box) (MaybeIO_35));
          MR_hl_field(3, Goal_36, 3) = ((MR_Box) (TryGoal_29));
          MR_hl_field(3, Goal_36, 4) = ((MR_Box) (ThenGoal_31));
          MR_hl_field(3, Goal_36, 5) = ((MR_Box) (MaybeElse_11));
          MR_hl_field(3, Goal_36, 6) = ((MR_Box) (CatchExprs_12));
          MR_hl_field(3, Goal_36, 7) = ((MR_Box) (MaybeCatchAnyExpr_13));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Goal_36));
          MR_hl_field(1, base, 1) = ((MR_Box) (WarningSpecs_33));
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

      Var_55 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[13]), MaybeParams_25);
      Var_57 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeTryGoal_26);
      Var_58 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeThenGoal_27);
      Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_57, Var_58);
      Specs_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_55, Var_56);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_16 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_109));
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
      Spec_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_39, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_then_try_term\'/9"));
      MR_hl_field(1, Spec_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_39, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_39, 3) = ((MR_Box) (Var_106));
      MR_hl_field(1, Spec_39, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[334])));
    }
    {
      Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_107, 0) = ((MR_Box) (Spec_39));
      MR_hl_field(1, Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_107));
    }
    *STATE_VARIABLE_VarSet_41 = STATE_VARIABLE_VarSet_0_40;
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
    Var_30 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 0))));
    Var_32 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_31 = ((MR_String) ((MR_hl_field(0, Var_30, (MR_Integer) 0))));
      succeeded = (strcmp(Var_31, (MR_String) "catch") == 0);
      if (succeeded)
      {
        succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          CatchArrowTerm_12 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 0))));
          Var_33 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 1))));
          succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SubTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_33, (MR_Integer) 0))));
            Var_34 = ((MR_Word) ((MR_hl_field(1, Var_33, (MR_Integer) 1))));
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
    MR_Word PatternTerm0_46;
    MR_Word GoalTerm_47;
    MR_Word Var_57;
    MR_String Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word HeadCatch_17;
    MR_Word HeadWarningSpecs_18;
    MR_Word TailCatches_19;
    MR_Word TailWarningSpecs_20;

    succeeded = ((MR_tag((MR_Word) CatchArrowTerm_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_57 = ((MR_Word) ((MR_hl_field(0, CatchArrowTerm_12, (MR_Integer) 0))));
      Var_59 = ((MR_Word) ((MR_hl_field(0, CatchArrowTerm_12, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_57)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_58 = ((MR_String) ((MR_hl_field(0, Var_57, (MR_Integer) 0))));
        succeeded = (strcmp(Var_58, (MR_String) "->") == 0);
        if (succeeded)
        {
          succeeded = (Var_59 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            PatternTerm0_46 = ((MR_Word) ((MR_hl_field(1, Var_59, (MR_Integer) 0))));
            Var_60 = ((MR_Word) ((MR_hl_field(1, Var_59, (MR_Integer) 1))));
            succeeded = (Var_60 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              GoalTerm_47 = ((MR_Word) ((MR_hl_field(1, Var_60, (MR_Integer) 0))));
              Var_61 = ((MR_Word) ((MR_hl_field(1, Var_60, (MR_Integer) 1))));
              succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word PatternTerm_49;
      MR_Word MaybeGoal_50;

      mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PatternTerm0_46, &PatternTerm_49);
      parse_tree__parse_goal__parse_goal_5_p_0(GoalTerm_47, ContextPieces_9, &MaybeGoal_50, STATE_VARIABLE_VarSet_0_28, &STATE_VARIABLE_VarSet_35_35);
      if (((MR_tag((MR_Word) MaybeGoal_50)) == (MR_Integer) 0))
        HeadMaybeCatch_15 = (MR_Word) (MaybeGoal_50);
      else
      {
        MR_Word Goal_51 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_50, (MR_Integer) 0))));
        MR_Word GoalWarningSpecs_52 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_50, (MR_Integer) 1))));
        MR_Word Catch_53;

        {
          Catch_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Catch_53, 0) = ((MR_Box) (PatternTerm_49));
          MR_hl_field(0, Catch_53, 1) = ((MR_Box) (Goal_51));
        }
        {
          HeadMaybeCatch_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadMaybeCatch_15, 0) = ((MR_Box) (Catch_53));
          MR_hl_field(1, HeadMaybeCatch_15, 1) = ((MR_Box) (GoalWarningSpecs_52));
        }
      }
    }
    else
    {
      MR_Word Spec_56;
      MR_Word Var_65;
      MR_Word Var_66;

      Var_65 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), CatchArrowTerm_12);
      {
        Spec_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_56, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_catch_arrow_term\'/6"));
        MR_hl_field(1, Spec_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_56, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_56, 3) = ((MR_Box) (Var_65));
        MR_hl_field(1, Spec_56, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[320])));
      }
      {
        Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_66, 0) = ((MR_Box) (Spec_56));
        MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        HeadMaybeCatch_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadMaybeCatch_15, 0) = ((MR_Box) (Var_66));
      }
      STATE_VARIABLE_VarSet_35_35 = STATE_VARIABLE_VarSet_0_28;
    }
    parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_98_95_99_97_116_99_104_95_116_101_114_109_115_95_95_91_50_93_95_48_6_p_0(SubTerm_13, ContextPieces_9, &TailMaybeCatches_16, STATE_VARIABLE_VarSet_35_35, STATE_VARIABLE_VarSet_29);
    succeeded = ((MR_tag((MR_Word) HeadMaybeCatch_15)) == (MR_Integer) 1);
    if (succeeded)
    {
      HeadCatch_17 = ((MR_Word) ((MR_hl_field(1, HeadMaybeCatch_15, (MR_Integer) 0))));
      HeadWarningSpecs_18 = ((MR_Word) ((MR_hl_field(1, HeadMaybeCatch_15, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) TailMaybeCatches_16)) == (MR_Integer) 1);
      if (succeeded)
      {
        TailCatches_19 = ((MR_Word) ((MR_hl_field(1, TailMaybeCatches_16, (MR_Integer) 0))));
        TailWarningSpecs_20 = ((MR_Word) ((MR_hl_field(1, TailMaybeCatches_16, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Word Catches_21;
      MR_Word WarningSpecs_22;

      {
        Catches_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Catches_21, 0) = ((MR_Box) (HeadCatch_17));
        MR_hl_field(1, Catches_21, 1) = ((MR_Box) (TailCatches_19));
      }
      WarningSpecs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), HeadWarningSpecs_18, TailWarningSpecs_20);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeCatches_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Catches_21));
        MR_hl_field(1, base, 1) = ((MR_Box) (WarningSpecs_22));
      }
    }
    else
    {
      MR_Word Specs_23;
      MR_Word Var_37;
      MR_Word Var_38;

      Var_37 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0), HeadMaybeCatch_15);
      Var_38 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[12]), TailMaybeCatches_16);
      Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_37, Var_38);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCatches_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_23));
      }
    }
  }
  else
  {
    MR_Word PatternTerm0_71;
    MR_Word GoalTerm_72;
    MR_Word Var_82;
    MR_String Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;

    succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_82 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 0))));
      Var_84 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_82)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_83 = ((MR_String) ((MR_hl_field(0, Var_82, (MR_Integer) 0))));
        succeeded = (strcmp(Var_83, (MR_String) "->") == 0);
        if (succeeded)
        {
          succeeded = (Var_84 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            PatternTerm0_71 = ((MR_Word) ((MR_hl_field(1, Var_84, (MR_Integer) 0))));
            Var_85 = ((MR_Word) ((MR_hl_field(1, Var_84, (MR_Integer) 1))));
            succeeded = (Var_85 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              GoalTerm_72 = ((MR_Word) ((MR_hl_field(1, Var_85, (MR_Integer) 0))));
              Var_86 = ((MR_Word) ((MR_hl_field(1, Var_85, (MR_Integer) 1))));
              succeeded = (Var_86 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word PatternTerm_74;
      MR_Word MaybeGoal_75;

      mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PatternTerm0_71, &PatternTerm_74);
      parse_tree__parse_goal__parse_goal_5_p_0(GoalTerm_72, ContextPieces_9, &MaybeGoal_75, STATE_VARIABLE_VarSet_0_28, STATE_VARIABLE_VarSet_29);
      if (((MR_tag((MR_Word) MaybeGoal_75)) == (MR_Integer) 0))
      {
        MR_Word MaybeCatch_24 = (MR_Word) (MaybeGoal_75);

        *MaybeCatches_10 = (MR_Word) (MaybeCatch_24);
      }
      else
      {
        MR_Word Catch_25;
        MR_Word CatchWarningSpecs_26 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_75, (MR_Integer) 1))));
        MR_Word Var_40;
        MR_Word Goal_76 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_75, (MR_Integer) 0))));

        {
          Catch_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Catch_25, 0) = ((MR_Box) (PatternTerm_74));
          MR_hl_field(0, Catch_25, 1) = ((MR_Box) (Goal_76));
        }
        {
          Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_40, 0) = ((MR_Box) (Catch_25));
          MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeCatches_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_40));
          MR_hl_field(1, base, 1) = ((MR_Box) (CatchWarningSpecs_26));
        }
      }
    }
    else
    {
      MR_Word Spec_81;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word MaybeCatch_96;

      Var_90 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_81, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_catch_arrow_term\'/6"));
        MR_hl_field(1, Spec_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_81, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_81, 3) = ((MR_Box) (Var_90));
        MR_hl_field(1, Spec_81, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[320])));
      }
      {
        Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_91, 0) = ((MR_Box) (Spec_81));
        MR_hl_field(1, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeCatch_96 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeCatch_96, 0) = ((MR_Box) (Var_91));
      }
      *STATE_VARIABLE_VarSet_29 = STATE_VARIABLE_VarSet_0_28;
      *MaybeCatches_10 = (MR_Word) (MaybeCatch_96);
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
    Var_25 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
    Var_27 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_26 = ((MR_String) ((MR_hl_field(0, Var_25, (MR_Integer) 0))));
      succeeded = (strcmp(Var_26, (MR_String) "or_else") == 0);
      if (succeeded)
      {
        succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          LeftGoal_8 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 0))));
          Var_28 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 1))));
          succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RightGoal_9 = ((MR_Word) ((MR_hl_field(1, Var_28, (MR_Integer) 0))));
            Var_29 = ((MR_Word) ((MR_hl_field(1, Var_28, (MR_Integer) 1))));
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
      LeftGoalList_13 = ((MR_Word) ((MR_hl_field(1, MaybeLeftGoalList_11, (MR_Integer) 0))));
      LeftWarningSpecs_14 = ((MR_Word) ((MR_hl_field(1, MaybeLeftGoalList_11, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) MaybeRightGoalList_12)) == (MR_Integer) 1);
      if (succeeded)
      {
        RightGoalList_15 = ((MR_Word) ((MR_hl_field(1, MaybeRightGoalList_12, (MR_Integer) 0))));
        RightWarningSpecs_16 = ((MR_Word) ((MR_hl_field(1, MaybeRightGoalList_12, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Word Goals_17;
      MR_Word WarningSpecs_18;

      Goals_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), LeftGoalList_13, RightGoalList_15);
      WarningSpecs_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), LeftWarningSpecs_14, RightWarningSpecs_16);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoals_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goals_17));
        MR_hl_field(1, base, 1) = ((MR_Box) (WarningSpecs_18));
      }
    }
    else
    {
      MR_Word Specs_19;
      MR_Word Var_32;
      MR_Word Var_33;

      Var_32 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[8]), MaybeLeftGoalList_11);
      Var_33 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[8]), MaybeRightGoalList_12);
      Specs_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_32, Var_33);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoals_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_19));
      }
    }
  }
  else
  {
    MR_Word ContextPieces_20;
    MR_Word MaybeSubGoal_21;

    ContextPieces_20 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0));
    parse_tree__parse_goal__parse_goal_5_p_0(Term_5, ContextPieces_20, &MaybeSubGoal_21, STATE_VARIABLE_VarSet_0_23, STATE_VARIABLE_VarSet_24);
    if (((MR_tag((MR_Word) MaybeSubGoal_21)) == (MR_Integer) 0))
      *MaybeGoals_6 = (MR_Word) (MaybeSubGoal_21);
    else
    {
      MR_Word SubGoal_22 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_21, (MR_Integer) 0))));
      MR_Word Var_35;
      MR_Word WarningSpecs_37 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_21, (MR_Integer) 1))));

      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (SubGoal_22));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoals_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_35));
        MR_hl_field(1, base, 1) = ((MR_Box) (WarningSpecs_37));
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
  MR_bool succeeded = (CatchTermArgs_8 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word TermA_14;
  MR_Word TermB_15;
  MR_Word Var_27;
  MR_Word Var_28;

  if (succeeded)
  {
    TermA_14 = ((MR_Word) ((MR_hl_field(1, CatchTermArgs_8, (MR_Integer) 0))));
    Var_27 = ((MR_Word) ((MR_hl_field(1, CatchTermArgs_8, (MR_Integer) 1))));
    succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TermB_15 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 0))));
      Var_28 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 1))));
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
      MR_Word Catches_17 = ((MR_Word) ((MR_hl_field(1, MaybeCatches_16, (MR_Integer) 0))));
      MR_Word CatchWarningSpecs_18 = ((MR_Word) ((MR_hl_field(1, MaybeCatches_16, (MR_Integer) 1))));
      MR_Word MaybeGoal0_19;
      MR_Word ThenTerm_70;
      MR_Word ElseTerm_71;
      MR_Word Var_84;
      MR_String Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;

      succeeded = ((MR_tag((MR_Word) TermA_14)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_84 = ((MR_Word) ((MR_hl_field(0, TermA_14, (MR_Integer) 0))));
        Var_86 = ((MR_Word) ((MR_hl_field(0, TermA_14, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_84)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_85 = ((MR_String) ((MR_hl_field(0, Var_84, (MR_Integer) 0))));
          succeeded = (strcmp(Var_85, (MR_String) "else") == 0);
          if (succeeded)
          {
            succeeded = (Var_86 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ThenTerm_70 = ((MR_Word) ((MR_hl_field(1, Var_86, (MR_Integer) 0))));
              Var_87 = ((MR_Word) ((MR_hl_field(1, Var_86, (MR_Integer) 1))));
              succeeded = (Var_87 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ElseTerm_71 = ((MR_Word) ((MR_hl_field(1, Var_87, (MR_Integer) 0))));
                Var_88 = ((MR_Word) ((MR_hl_field(1, Var_87, (MR_Integer) 1))));
                succeeded = (Var_88 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word MaybeElseGoal0_73;
        MR_Word STATE_VARIABLE_VarSet_37_89;

        parse_tree__parse_goal__parse_goal_5_p_0(ElseTerm_71, ContextPieces_11, &MaybeElseGoal0_73, STATE_VARIABLE_VarSet_29_29, &STATE_VARIABLE_VarSet_37_89);
        if (((MR_tag((MR_Word) MaybeElseGoal0_73)) == (MR_Integer) 0))
        {
          MaybeGoal0_19 = MaybeElseGoal0_73;
          *STATE_VARIABLE_VarSet_26 = STATE_VARIABLE_VarSet_37_89;
        }
        else
        {
          MR_Word ElseGoal_74 = ((MR_Word) ((MR_hl_field(1, MaybeElseGoal0_73, (MR_Integer) 0))));
          MR_Word ElseWarningSpecs_75 = ((MR_Word) ((MR_hl_field(1, MaybeElseGoal0_73, (MR_Integer) 1))));
          MR_Word MaybeTryGoal_76;
          MR_Word Var_90;
          MR_Word ThenContext_80;
          MR_Word Var_91;
          MR_String Var_92;
          MR_Word Var_93;
          MR_Word Var_94;
          MR_Word Var_95;

          {
            Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_90, 0) = ((MR_Box) (ElseGoal_74));
          }
          parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_53_93_95_48_9_p_0(ThenTerm_70, Var_90, Catches_17, MaybeCatchAnyExpr_9, ContextPieces_11, &MaybeTryGoal_76, STATE_VARIABLE_VarSet_37_89, STATE_VARIABLE_VarSet_26);
          succeeded = ((MR_tag((MR_Word) MaybeTryGoal_76)) == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) ThenTerm_70)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_91 = ((MR_Word) ((MR_hl_field(0, ThenTerm_70, (MR_Integer) 0))));
              Var_93 = ((MR_Word) ((MR_hl_field(0, ThenTerm_70, (MR_Integer) 1))));
              ThenContext_80 = ((MR_Word) ((MR_hl_field(0, ThenTerm_70, (MR_Integer) 2))));
              succeeded = ((MR_tag((MR_Word) Var_91)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_92 = ((MR_String) ((MR_hl_field(0, Var_91, (MR_Integer) 0))));
                succeeded = (strcmp(Var_92, (MR_String) "then") == 0);
                if (succeeded)
                {
                  succeeded = (Var_93 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_94 = ((MR_Word) ((MR_hl_field(1, Var_93, (MR_Integer) 1))));
                    succeeded = (Var_94 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_95 = ((MR_Word) ((MR_hl_field(1, Var_94, (MR_Integer) 1))));
                      succeeded = (Var_95 == (MR_Word) ((MR_Unsigned) 0U));
                    }
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word Spec_82;
            MR_Word Var_99;

            {
              Spec_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_82, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_else_then_try_term\'/8"));
              MR_hl_field(1, Spec_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_82, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(1, Spec_82, 3) = ((MR_Box) (ThenContext_80));
              MR_hl_field(1, Spec_82, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[326])));
            }
            {
              Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_99, 0) = ((MR_Box) (Spec_82));
              MR_hl_field(1, Var_99, 1) = ((MR_Box) (ElseWarningSpecs_75));
            }
            {
              MaybeGoal0_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, MaybeGoal0_19, 0) = ((MR_Box) (Var_99));
            }
          }
          else
            MaybeGoal0_19 = MaybeTryGoal_76;
        }
      }
      else
        parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_53_93_95_48_9_p_0(TermA_14, (MR_Word) ((MR_Unsigned) 0U), Catches_17, MaybeCatchAnyExpr_9, ContextPieces_11, &MaybeGoal0_19, STATE_VARIABLE_VarSet_29_29, STATE_VARIABLE_VarSet_26);
      if (((MR_tag((MR_Word) MaybeGoal0_19)) == (MR_Integer) 0))
      {
        MR_Word Specs_22 = ((MR_Word) ((MR_hl_field(0, MaybeGoal0_19, (MR_Integer) 0))));
        MR_Word Var_32;

        Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), CatchWarningSpecs_18, Specs_22);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_32));
        }
      }
      else
      {
        MR_Word Goal_20 = ((MR_Word) ((MR_hl_field(1, MaybeGoal0_19, (MR_Integer) 0))));
        MR_Word GoalWarningSpecs_21 = ((MR_Word) ((MR_hl_field(1, MaybeGoal0_19, (MR_Integer) 1))));
        MR_Word Var_31;

        Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), CatchWarningSpecs_18, GoalWarningSpecs_21);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Goal_20));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_31));
        }
      }
    }
  }
  else
  {
    MR_Word Spec_24;
    MR_Word Var_65;

    {
      Spec_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_catch_then_try_term_args\'/7"));
      MR_hl_field(1, Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_24, 3) = ((MR_Box) (Context_10));
      MR_hl_field(1, Spec_24, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[316])));
    }
    {
      Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_65, 0) = ((MR_Box) (Spec_24));
      MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_65));
    }
    *STATE_VARIABLE_VarSet_26 = STATE_VARIABLE_VarSet_0_25;
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
  MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word SubGoalTerm_12;
  MR_Word Var_33;

  if (succeeded)
  {
    SubGoalTerm_12 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, (MR_Integer) 0))));
    Var_33 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, (MR_Integer) 1))));
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
      MR_Word SubGoal_14 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_13, (MR_Integer) 0))));
      MR_Word SubGoalWarningSpecs_15 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_13, (MR_Integer) 1))));
      MR_Word SubContext_16;
      MR_Word SymName_17;
      MR_Word CallArgs_18;
      MR_Word Purity_19;

      succeeded = ((MR_tag((MR_Word) SubGoal_14)) == (MR_Integer) 1);
      if (succeeded)
      {
        SubContext_16 = ((MR_Word) ((MR_hl_field(1, SubGoal_14, (MR_Integer) 0))));
        SymName_17 = ((MR_Word) ((MR_hl_field(1, SubGoal_14, (MR_Integer) 1))));
        CallArgs_18 = ((MR_Word) ((MR_hl_field(1, SubGoal_14, (MR_Integer) 2))));
        Purity_19 = ((MR_Unsigned) ((MR_hl_field(1, SubGoal_14, (MR_Integer) 3))) & (MR_Integer) 3);
        {
          MR_String EventName_20;

          succeeded = (Purity_19 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) SymName_17)) == (MR_Integer) 0);
            if (succeeded)
              EventName_20 = ((MR_String) ((MR_hl_field(0, SymName_17, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Word Goal_21;

            {
              Goal_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Goal_21, 0) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(3, Goal_21, 1) = ((MR_Box) (Context_8));
              MR_hl_field(3, Goal_21, 2) = ((MR_Box) (EventName_20));
              MR_hl_field(3, Goal_21, 3) = ((MR_Box) (CallArgs_18));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *MaybeGoal_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Goal_21));
              MR_hl_field(1, base, 1) = ((MR_Box) (SubGoalWarningSpecs_15));
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

              Var_36 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_9);
              QualPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[142])));
              {
                QualSpec_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, QualSpec_27, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_event\'/6"));
                MR_hl_field(1, QualSpec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, QualSpec_27, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(1, QualSpec_27, 3) = ((MR_Box) (SubContext_16));
                MR_hl_field(1, QualSpec_27, 4) = ((MR_Box) (QualPieces_26));
              }
              {
                STATE_VARIABLE_Specs_51_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_51_51, 0) = ((MR_Box) (QualSpec_27));
                MR_hl_field(1, STATE_VARIABLE_Specs_51_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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

                  Var_52 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_9);
                  PurityPieces_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_52, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[147])));
                  {
                    PuritySpec_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, PuritySpec_29, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_event\'/6"));
                    MR_hl_field(1, PuritySpec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(1, PuritySpec_29, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                    MR_hl_field(1, PuritySpec_29, 3) = ((MR_Box) (SubContext_16));
                    MR_hl_field(1, PuritySpec_29, 4) = ((MR_Box) (PurityPieces_28));
                  }
                  {
                    STATE_VARIABLE_Specs_67_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_Specs_67_67, 0) = ((MR_Box) (PuritySpec_29));
                    MR_hl_field(1, STATE_VARIABLE_Specs_67_67, 1) = ((MR_Box) (STATE_VARIABLE_Specs_51_51));
                  }
                }
                break;
              case (MR_Integer) 0:
                STATE_VARIABLE_Specs_67_67 = STATE_VARIABLE_Specs_51_51;
                break;
            }
            Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_67_67, SubGoalWarningSpecs_15);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeGoal_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_68));
            }
          }
        }
      }
      else
      {
        MR_Word Spec_30;
        MR_Word Var_70;
        MR_Word Pieces_78;
        MR_Word Var_79;

        Var_79 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_9);
        Pieces_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_79, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[387])));
        {
          Spec_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_30, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_goal.should_have_one_call_prefix\'/3"));
          MR_hl_field(1, Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(1, Spec_30, 3) = ((MR_Box) (Context_8));
          MR_hl_field(1, Spec_30, 4) = ((MR_Box) (Pieces_78));
        }
        {
          Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_70, 0) = ((MR_Box) (Spec_30));
          MR_hl_field(1, Var_70, 1) = ((MR_Box) (SubGoalWarningSpecs_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_70));
        }
      }
    }
  }
  else
  {
    MR_Word Var_72;
    MR_Word Spec_74;
    MR_Word Pieces_95;
    MR_Word Var_96;

    Var_96 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_9);
    Pieces_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[387])));
    {
      Spec_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_74, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_goal.should_have_one_call_prefix\'/3"));
      MR_hl_field(1, Spec_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_74, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_74, 3) = ((MR_Box) (Context_8));
      MR_hl_field(1, Spec_74, 4) = ((MR_Box) (Pieces_95));
    }
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (Spec_74));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_72));
    }
    *STATE_VARIABLE_VarSet_32 = STATE_VARIABLE_VarSet_0_31;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_require_switch_arm_detism_7_p_0(
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_30,
  MR_Word * STATE_VARIABLE_VarSet_31)
{
  MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Detism_14 = ((&parse_tree__parse_goal_vector_common_9[0 + (MR_Integer) ((MR_Unsigned) GoalKind_8 - (MR_Unsigned) 36)]))->parse_tree__parse_goal__vector_common_type_9_0__vct_9_f_0;
  MR_String Functor_15 = ((&parse_tree__parse_goal_vector_common_9[0 + (MR_Integer) ((MR_Unsigned) GoalKind_8 - (MR_Unsigned) 36)]))->parse_tree__parse_goal__vector_common_type_9_0__vct_9_f_1;
  MR_Word VarsTerm_16;
  MR_Word SubGoalTerm_17;
  MR_Word Var_32;
  MR_Word Var_33;

  if (succeeded)
  {
    VarsTerm_16 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 0))));
    Var_32 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 1))));
    succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalTerm_17 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 0))));
      Var_33 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 1))));
      succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word ProgVarsTerm_18;
    MR_Word MaybePSDCVars_19;
    MR_Word MaybeSubGoal_20;
    MR_Word PSDCVars0_21;
    MR_Word SubGoal_22;
    MR_Word SubGoalWarningSpecs_23;

    mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsTerm_16, &ProgVarsTerm_18);
    parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarsTerm_18, STATE_VARIABLE_VarSet_0_30, ContextPieces_11, &MaybePSDCVars_19);
    parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_17, ContextPieces_11, &MaybeSubGoal_20, STATE_VARIABLE_VarSet_0_30, STATE_VARIABLE_VarSet_31);
    succeeded = ((MR_tag((MR_Word) MaybePSDCVars_19)) == (MR_Integer) 1);
    if (succeeded)
    {
      PSDCVars0_21 = ((MR_Word) ((MR_hl_field(1, MaybePSDCVars_19, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeSubGoal_20)) == (MR_Integer) 1);
      if (succeeded)
      {
        SubGoal_22 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_20, (MR_Integer) 0))));
        SubGoalWarningSpecs_23 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_20, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Word MaybePODVar_24;

      parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_21, SubGoal_22, ContextPieces_11, Functor_15, &MaybePODVar_24);
      if (((MR_tag((MR_Word) MaybePODVar_24)) == (MR_Integer) 0))
      {
        MR_Word RCSSpecs_27 = ((MR_Word) ((MR_hl_field(0, MaybePODVar_24, (MR_Integer) 0))));
        MR_Word Var_35;

        Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), RCSSpecs_27, SubGoalWarningSpecs_23);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_35));
        }
      }
      else
      {
        MR_Word PODVar_25 = ((MR_Word) ((MR_hl_field(1, MaybePODVar_24, (MR_Integer) 0))));
        MR_Word Goal_26;

        {
          Goal_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Goal_26, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(3, Goal_26, 1) = ((MR_Box) (Context_10));
          MR_hl_field(3, Goal_26, 2) = ((MR_Box) (PODVar_25));
          MR_hl_field(3, Goal_26, 3) = (MR_Box) ((MR_Unsigned) (Detism_14));
          MR_hl_field(3, Goal_26, 4) = ((MR_Box) (SubGoal_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Goal_26));
          MR_hl_field(1, base, 1) = ((MR_Box) (SubGoalWarningSpecs_23));
        }
      }
    }
    else
    {
      MR_Word Specs_28;
      MR_Word Var_36;
      MR_Word Var_37;

      Var_36 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[10]), MaybePSDCVars_19);
      Var_37 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_20);
      Specs_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_36, Var_37);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_28));
      }
    }
  }
  else
  {
    MR_Word Spec_29;
    MR_Word Var_39;

    Spec_29 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a variable in a singleton list", Functor_15);
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (Spec_29));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_39));
    }
    *STATE_VARIABLE_VarSet_31 = STATE_VARIABLE_VarSet_0_30;
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
  MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word VarsTerm_12;
  MR_Word SubGoalTerm_13;
  MR_Word Var_28;
  MR_Word Var_29;

  if (succeeded)
  {
    VarsTerm_12 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, (MR_Integer) 0))));
    Var_28 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, (MR_Integer) 1))));
    succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_28, (MR_Integer) 0))));
      Var_29 = ((MR_Word) ((MR_hl_field(1, Var_28, (MR_Integer) 1))));
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
      PSDCVars0_17 = ((MR_Word) ((MR_hl_field(1, MaybePSDCVars_15, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeSubGoal_16)) == (MR_Integer) 1);
      if (succeeded)
      {
        SubGoal_18 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_16, (MR_Integer) 0))));
        SubGoalWarningSpecs_19 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_16, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Word MaybePODVar_20;

      parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(PSDCVars0_17, SubGoal_18, ContextPieces_9, (MR_String) "require_complete_switch", &MaybePODVar_20);
      if (((MR_tag((MR_Word) MaybePODVar_20)) == (MR_Integer) 0))
      {
        MR_Word RCSSpecs_23 = ((MR_Word) ((MR_hl_field(0, MaybePODVar_20, (MR_Integer) 0))));
        MR_Word Var_32;

        Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), RCSSpecs_23, SubGoalWarningSpecs_19);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_32));
        }
      }
      else
      {
        MR_Word PODVar_21 = ((MR_Word) ((MR_hl_field(1, MaybePODVar_20, (MR_Integer) 0))));
        MR_Word Goal_22;

        {
          Goal_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Goal_22, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(3, Goal_22, 1) = ((MR_Box) (Context_8));
          MR_hl_field(3, Goal_22, 2) = ((MR_Box) (PODVar_21));
          MR_hl_field(3, Goal_22, 3) = ((MR_Box) (SubGoal_18));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Goal_22));
          MR_hl_field(1, base, 1) = ((MR_Box) (SubGoalWarningSpecs_19));
        }
      }
    }
    else
    {
      MR_Word Specs_24;
      MR_Word Var_33;
      MR_Word Var_34;

      Var_33 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[10]), MaybePSDCVars_15);
      Var_34 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_16);
      Specs_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_33, Var_34);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_24));
      }
    }
  }
  else
  {
    MR_Word Spec_25;
    MR_Word Var_37;

    Spec_25 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_9, Context_8, (MR_String) "a variable in a singleton list", (MR_String) "require_complete_switch");
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Spec_25));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_37));
    }
    *STATE_VARIABLE_VarSet_27 = STATE_VARIABLE_VarSet_0_26;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_require_detism_7_p_0(
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24)
{
  MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Detism_14 = ((&parse_tree__parse_goal_vector_common_8[0 + (MR_Integer) ((MR_Unsigned) GoalKind_8 - (MR_Unsigned) 27)]))->parse_tree__parse_goal__vector_common_type_8_0__vct_8_f_0;
  MR_Word SubGoalTerm_15;
  MR_Word Var_25;

  if (succeeded)
  {
    SubGoalTerm_15 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 0))));
    Var_25 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 1))));
    succeeded = (Var_25 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word MaybeSubGoal_16;

    parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_15, ContextPieces_11, &MaybeSubGoal_16, STATE_VARIABLE_VarSet_0_23, STATE_VARIABLE_VarSet_24);
    if (((MR_tag((MR_Word) MaybeSubGoal_16)) == (MR_Integer) 0))
      *MaybeGoal_12 = MaybeSubGoal_16;
    else
    {
      MR_Word SubGoal_17 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_16, (MR_Integer) 0))));
      MR_Word SubGoalWarningSpecs_18 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_16, (MR_Integer) 1))));
      MR_Word Goal_19;

      {
        Goal_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Goal_19, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(3, Goal_19, 1) = ((MR_Box) (Context_10));
        MR_hl_field(3, Goal_19, 2) = (MR_Box) ((MR_Unsigned) (Detism_14));
        MR_hl_field(3, Goal_19, 3) = ((MR_Box) (SubGoal_17));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_19));
        MR_hl_field(1, base, 1) = ((MR_Box) (SubGoalWarningSpecs_18));
      }
    }
  }
  else
  {
    MR_String Functor_21;
    MR_Word Spec_22;
    MR_Word Var_27;

    parse_tree__parse_goal__string_goal_kind_2_p_1(&Functor_21, GoalKind_8);
    Spec_22 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_21);
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (Spec_22));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_27));
    }
    *STATE_VARIABLE_VarSet_24 = STATE_VARIABLE_VarSet_0_23;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_63;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1373__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_63);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_63));
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_59;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1372__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_59);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_59));
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_55;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1371__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_55);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_55));
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_arbitrary_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_49;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_arbitrary__1370__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_49);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_49));
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
  MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word VarsTerm_12;
  MR_Word SubGoalTerm_13;
  MR_Word Var_32;
  MR_Word Var_33;

  if (succeeded)
  {
    VarsTerm_12 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, (MR_Integer) 0))));
    Var_32 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, (MR_Integer) 1))));
    succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 0))));
      Var_33 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 1))));
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
      Var_35 = ((MR_Word) ((MR_hl_field(1, MaybeVars_15, (MR_Integer) 0))));
      Vars0_17 = ((MR_Word) ((MR_hl_field(0, Var_35, (MR_Integer) 0))));
      StateVars0_18 = ((MR_Word) ((MR_hl_field(0, Var_35, (MR_Integer) 1))));
      DotSVars0_19 = ((MR_Word) ((MR_hl_field(0, Var_35, (MR_Integer) 2))));
      ColonSVars0_20 = ((MR_Word) ((MR_hl_field(0, Var_35, (MR_Integer) 3))));
      succeeded = ((MR_tag((MR_Word) MaybeSubGoal_16)) == (MR_Integer) 1);
      if (succeeded)
      {
        SubGoal_21 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_16, (MR_Integer) 0))));
        SubGoalWarningSpecs_22 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_16, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Word Vars_23;
      MR_Word StateVars_24;
      MR_Word DotSVars_25;
      MR_Word ColonSVars_26;
      MR_Word Goal_27;

      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[13]), Vars0_17, &Vars_23);
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[14]), StateVars0_18, &StateVars_24);
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[15]), DotSVars0_19, &DotSVars_25);
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[16]), ColonSVars0_20, &ColonSVars_26);
      {
        Goal_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Goal_27, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(3, Goal_27, 1) = ((MR_Box) (Context_8));
        MR_hl_field(3, Goal_27, 2) = ((MR_Box) (Vars_23));
        MR_hl_field(3, Goal_27, 3) = ((MR_Box) (StateVars_24));
        MR_hl_field(3, Goal_27, 4) = ((MR_Box) (DotSVars_25));
        MR_hl_field(3, Goal_27, 5) = ((MR_Box) (ColonSVars_26));
        MR_hl_field(3, Goal_27, 6) = ((MR_Box) (SubGoal_21));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_27));
        MR_hl_field(1, base, 1) = ((MR_Box) (SubGoalWarningSpecs_22));
      }
    }
    else
    {
      MR_Word Specs_28;
      MR_Word Var_40;
      MR_Word Var_41;

      Var_40 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybeVars_15);
      Var_41 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_16);
      Specs_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_40, Var_41);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_28));
      }
    }
  }
  else
  {
    MR_Word Spec_29;
    MR_Word Var_44;

    Spec_29 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_9, Context_8, (MR_String) "a list of variables", (MR_String) "arbitrary");
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (Spec_29));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_44));
    }
    *STATE_VARIABLE_VarSet_31 = STATE_VARIABLE_VarSet_0_30;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_66;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1327__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_66);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_66));
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_62;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1326__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_62);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_62));
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_58;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1325__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_58);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_58));
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_52;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_promise_eqv_solns__1324__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_52);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_52));
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_promise_eqv_solns_7_p_0(
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_33,
  MR_Word * STATE_VARIABLE_VarSet_34)
{
  MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word VarsTerm_14;
  MR_Word SubGoalTerm_15;
  MR_Word Var_35;
  MR_Word Var_36;

  if (succeeded)
  {
    VarsTerm_14 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 0))));
    Var_35 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 1))));
    succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalTerm_15 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 0))));
      Var_36 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 1))));
      succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
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
    MR_Word Var_38;

    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_33, &GenericVarSet_16);
    parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_14, GenericVarSet_16, ContextPieces_11, &MaybeVars_17);
    parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_15, ContextPieces_11, &MaybeSubGoal_18, STATE_VARIABLE_VarSet_0_33, STATE_VARIABLE_VarSet_34);
    succeeded = ((MR_tag((MR_Word) MaybeVars_17)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_38 = ((MR_Word) ((MR_hl_field(1, MaybeVars_17, (MR_Integer) 0))));
      Vars0_19 = ((MR_Word) ((MR_hl_field(0, Var_38, (MR_Integer) 0))));
      StateVars0_20 = ((MR_Word) ((MR_hl_field(0, Var_38, (MR_Integer) 1))));
      DotSVars0_21 = ((MR_Word) ((MR_hl_field(0, Var_38, (MR_Integer) 2))));
      ColonSVars0_22 = ((MR_Word) ((MR_hl_field(0, Var_38, (MR_Integer) 3))));
      succeeded = ((MR_tag((MR_Word) MaybeSubGoal_18)) == (MR_Integer) 1);
      if (succeeded)
      {
        SubGoal_23 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_18, (MR_Integer) 0))));
        SubGoalWarningSpecs_24 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_18, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Word Vars_25;
      MR_Word StateVars_26;
      MR_Word DotSVars_27;
      MR_Word ColonSVars_28;

      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[9]), Vars0_19, &Vars_25);
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[10]), StateVars0_20, &StateVars_26);
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[11]), DotSVars0_21, &DotSVars_27);
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[12]), ColonSVars0_22, &ColonSVars_28);
      switch (GoalKind_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 25:
          {
            MR_Word Goal_48;

            {
              Goal_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Goal_48, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Goal_48, 1) = ((MR_Box) (Context_10));
              MR_hl_field(3, Goal_48, 2) = ((MR_Box) (Vars_25));
              MR_hl_field(3, Goal_48, 3) = ((MR_Box) (StateVars_26));
              MR_hl_field(3, Goal_48, 4) = ((MR_Box) (DotSVars_27));
              MR_hl_field(3, Goal_48, 5) = ((MR_Box) (ColonSVars_28));
              MR_hl_field(3, Goal_48, 6) = ((MR_Box) (SubGoal_23));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *MaybeGoal_12 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Goal_48));
              MR_hl_field(1, base, 1) = ((MR_Box) (SubGoalWarningSpecs_24));
            }
          }
          break;
        case (MR_Integer) 24:
          {
            MR_Word Goal_29;

            {
              Goal_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Goal_29, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, Goal_29, 1) = ((MR_Box) (Context_10));
              MR_hl_field(3, Goal_29, 2) = ((MR_Box) (Vars_25));
              MR_hl_field(3, Goal_29, 3) = ((MR_Box) (StateVars_26));
              MR_hl_field(3, Goal_29, 4) = ((MR_Box) (DotSVars_27));
              MR_hl_field(3, Goal_29, 5) = ((MR_Box) (ColonSVars_28));
              MR_hl_field(3, Goal_29, 6) = ((MR_Box) (SubGoal_23));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *MaybeGoal_12 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Goal_29));
              MR_hl_field(1, base, 1) = ((MR_Box) (SubGoalWarningSpecs_24));
            }
          }
          break;
      }
    }
    else
    {
      MR_Word Specs_30;
      MR_Word Var_43;
      MR_Word Var_44;

      Var_43 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[9]), MaybeVars_17);
      Var_44 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_18);
      Specs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_43, Var_44);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_30));
      }
    }
  }
  else
  {
    MR_String Functor_31;
    MR_Word Spec_32;
    MR_Word Var_46;

    parse_tree__parse_goal__string_goal_kind_2_p_1(&Functor_31, GoalKind_8);
    Spec_32 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of variables", Functor_31);
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (Spec_32));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_46));
    }
    *STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_0_33;
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
  MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word ParamsTerm_12;
  MR_Word SubGoalsTerm_13;
  MR_Word Var_30;
  MR_Word Var_31;

  if (succeeded)
  {
    ParamsTerm_12 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, (MR_Integer) 0))));
    Var_30 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, (MR_Integer) 1))));
    succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalsTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_30, (MR_Integer) 0))));
      Var_31 = ((MR_Word) ((MR_hl_field(1, Var_30, (MR_Integer) 1))));
      succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word GenericVarSet_14;
    MR_Word MaybeParams_15;
    MR_Word MaybeSubGoals_16;
    MR_Word MaybeSubGoals_48;
    MR_Word Params_17;
    MR_Word MainGoal_18;
    MR_Word OrElseGoals_19;
    MR_Word SubGoalWarningSpecs_20;

    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_28, &GenericVarSet_14);
    parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_111_109_105_99_95_112_97_114_97_109_115_95_95_91_49_93_95_48_4_p_0(ParamsTerm_12, GenericVarSet_14, &MaybeParams_15);
    parse_tree__parse_goal__parse_atomic_subgoals_as_list_4_p_0(SubGoalsTerm_13, &MaybeSubGoals_48, STATE_VARIABLE_VarSet_0_28, STATE_VARIABLE_VarSet_29);
    if (((MR_tag((MR_Word) MaybeSubGoals_48)) == (MR_Integer) 0))
    {
      MR_Word Specs_56 = ((MR_Word) ((MR_hl_field(0, MaybeSubGoals_48, (MR_Integer) 0))));

      {
        MaybeSubGoals_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeSubGoals_16, 0) = ((MR_Box) (Specs_56));
      }
    }
    else
    {
      MR_Word Goals_49 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoals_48, (MR_Integer) 0))));
      MR_Word WarningSpecs_50 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoals_48, (MR_Integer) 1))));

      if ((Goals_49 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Context_52;
        MR_Word Spec_53;
        MR_Word Var_60;

        Context_52 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubGoalsTerm_13);
        {
          Spec_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_53, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_subexpr\'/4"));
          MR_hl_field(1, Spec_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_53, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(1, Spec_53, 3) = ((MR_Box) (Context_52));
          MR_hl_field(1, Spec_53, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[382])));
        }
        {
          Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_60, 0) = ((MR_Box) (Spec_53));
          MR_hl_field(1, Var_60, 1) = ((MR_Box) (WarningSpecs_50));
        }
        {
          MaybeSubGoals_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeSubGoals_16, 0) = ((MR_Box) (Var_60));
        }
      }
      else
      {
        MR_Word MainSubGoal_54 = ((MR_Word) ((MR_hl_field(1, Goals_49, (MR_Integer) 0))));
        MR_Word OrElseSubGoals_55 = ((MR_Word) ((MR_hl_field(1, Goals_49, (MR_Integer) 1))));

        {
          MaybeSubGoals_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeSubGoals_16, 0) = ((MR_Box) (MainSubGoal_54));
          MR_hl_field(1, MaybeSubGoals_16, 1) = ((MR_Box) (OrElseSubGoals_55));
          MR_hl_field(1, MaybeSubGoals_16, 2) = ((MR_Box) (WarningSpecs_50));
        }
      }
    }
    succeeded = ((MR_tag((MR_Word) MaybeParams_15)) == (MR_Integer) 1);
    if (succeeded)
    {
      Params_17 = ((MR_Word) ((MR_hl_field(1, MaybeParams_15, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeSubGoals_16)) == (MR_Integer) 1);
      if (succeeded)
      {
        MainGoal_18 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoals_16, (MR_Integer) 0))));
        OrElseGoals_19 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoals_16, (MR_Integer) 1))));
        SubGoalWarningSpecs_20 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoals_16, (MR_Integer) 2))));
      }
    }
    if (succeeded)
    {
      MR_Word MaybeComponents_21;
      MR_Word Var_62;

      Var_62 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ParamsTerm_12);
      parse_tree__parse_goal__convert_atomic_params_2_7_p_0(Var_62, Params_17, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &MaybeComponents_21);
      if (((MR_tag((MR_Word) MaybeComponents_21)) == (MR_Integer) 0))
      {
        MR_Word Specs_26 = ((MR_Word) ((MR_hl_field(0, MaybeComponents_21, (MR_Integer) 0))));
        MR_Word Var_33;

        Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Specs_26, SubGoalWarningSpecs_20);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_33));
        }
      }
      else
      {
        MR_Word Outer_22 = ((MR_Word) ((MR_hl_field(1, MaybeComponents_21, (MR_Integer) 0))));
        MR_Word Inner_23 = ((MR_Word) ((MR_hl_field(1, MaybeComponents_21, (MR_Integer) 1))));
        MR_Word MaybeOutputVars_24 = ((MR_Word) ((MR_hl_field(1, MaybeComponents_21, (MR_Integer) 2))));
        MR_Word Goal_25;

        {
          Goal_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Goal_25, 0) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(3, Goal_25, 1) = ((MR_Box) (Context_8));
          MR_hl_field(3, Goal_25, 2) = ((MR_Box) (Outer_22));
          MR_hl_field(3, Goal_25, 3) = ((MR_Box) (Inner_23));
          MR_hl_field(3, Goal_25, 4) = ((MR_Box) (MaybeOutputVars_24));
          MR_hl_field(3, Goal_25, 5) = ((MR_Box) (MainGoal_18));
          MR_hl_field(3, Goal_25, 6) = ((MR_Box) (OrElseGoals_19));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Goal_25));
          MR_hl_field(1, base, 1) = ((MR_Box) (SubGoalWarningSpecs_20));
        }
      }
    }
    else
    {
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Specs_40;

      Var_34 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[7]), MaybeParams_15);
      Var_35 = parse_tree__maybe_error__get_any_errors_warnings3_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[8]), MaybeSubGoals_16);
      Specs_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_34, Var_35);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_40));
      }
    }
  }
  else
  {
    MR_Word Spec_27;
    MR_Word Var_38;

    Spec_27 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_9, Context_8, (MR_String) "a list of atomic parameters", (MR_String) "atomic");
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Spec_27));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_38));
    }
    *STATE_VARIABLE_VarSet_29 = STATE_VARIABLE_VarSet_0_28;
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
  MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word ParamsTerm_12;
  MR_Word SubGoalTerm_13;
  MR_Word Var_30;
  MR_Word Var_31;

  if (succeeded)
  {
    ParamsTerm_12 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, (MR_Integer) 0))));
    Var_30 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, (MR_Integer) 1))));
    succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_30, (MR_Integer) 0))));
      Var_31 = ((MR_Word) ((MR_hl_field(1, Var_30, (MR_Integer) 1))));
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
      Params_17 = ((MR_Word) ((MR_hl_field(1, MaybeParams_15, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeSubGoal_16)) == (MR_Integer) 1);
      if (succeeded)
      {
        SubGoal_18 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_16, (MR_Integer) 0))));
        SubGoalWarningSpecs_19 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_16, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Word MaybeComponents_20;

      parse_tree__parse_goal__convert_trace_params_2_7_p_0(Params_17, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &MaybeComponents_20);
      if (((MR_tag((MR_Word) MaybeComponents_20)) == (MR_Integer) 0))
      {
        MR_Word Specs_26 = ((MR_Word) ((MR_hl_field(0, MaybeComponents_20, (MR_Integer) 0))));
        MR_Word Var_33;

        Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Specs_26, SubGoalWarningSpecs_19);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_33));
        }
      }
      else
      {
        MR_Word CompileTime_21 = ((MR_Word) ((MR_hl_field(1, MaybeComponents_20, (MR_Integer) 0))));
        MR_Word RunTime_22 = ((MR_Word) ((MR_hl_field(1, MaybeComponents_20, (MR_Integer) 1))));
        MR_Word MaybeIO_23 = ((MR_Word) ((MR_hl_field(1, MaybeComponents_20, (MR_Integer) 2))));
        MR_Word MutVars_24 = ((MR_Word) ((MR_hl_field(1, MaybeComponents_20, (MR_Integer) 3))));
        MR_Word Goal_25;

        {
          Goal_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Goal_25, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(3, Goal_25, 1) = ((MR_Box) (Context_8));
          MR_hl_field(3, Goal_25, 2) = ((MR_Box) (CompileTime_21));
          MR_hl_field(3, Goal_25, 3) = ((MR_Box) (RunTime_22));
          MR_hl_field(3, Goal_25, 4) = ((MR_Box) (MaybeIO_23));
          MR_hl_field(3, Goal_25, 5) = ((MR_Box) (MutVars_24));
          MR_hl_field(3, Goal_25, 6) = ((MR_Box) (SubGoal_18));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Goal_25));
          MR_hl_field(1, base, 1) = ((MR_Box) (SubGoalWarningSpecs_19));
        }
      }
    }
    else
    {
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Specs_40;

      Var_34 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[6]), MaybeParams_15);
      Var_35 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_16);
      Specs_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_34, Var_35);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_40));
      }
    }
  }
  else
  {
    MR_Word Spec_27;
    MR_Word Var_38;

    Spec_27 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_9, Context_8, (MR_String) "a list of trace parameters", (MR_String) "trace");
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Spec_27));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_38));
    }
    *STATE_VARIABLE_VarSet_29 = STATE_VARIABLE_VarSet_0_28;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_implication_7_p_0(
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_27,
  MR_Word * STATE_VARIABLE_VarSet_28)
{
  MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word TermA_14;
  MR_Word TermB_15;
  MR_Word Var_29;
  MR_Word Var_30;

  if (succeeded)
  {
    TermA_14 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 0))));
    Var_29 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 1))));
    succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TermB_15 = ((MR_Word) ((MR_hl_field(1, Var_29, (MR_Integer) 0))));
      Var_30 = ((MR_Word) ((MR_hl_field(1, Var_29, (MR_Integer) 1))));
      succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word MaybeGoalA_16;
    MR_Word MaybeGoalB_17;
    MR_Word STATE_VARIABLE_VarSet_31_31;
    MR_Word GoalA_18;
    MR_Word GoalWarningSpecsA_19;
    MR_Word GoalB_20;
    MR_Word GoalWarningSpecsB_21;

    parse_tree__parse_goal__parse_goal_5_p_0(TermA_14, ContextPieces_11, &MaybeGoalA_16, STATE_VARIABLE_VarSet_0_27, &STATE_VARIABLE_VarSet_31_31);
    parse_tree__parse_goal__parse_goal_5_p_0(TermB_15, ContextPieces_11, &MaybeGoalB_17, STATE_VARIABLE_VarSet_31_31, STATE_VARIABLE_VarSet_28);
    succeeded = ((MR_tag((MR_Word) MaybeGoalA_16)) == (MR_Integer) 1);
    if (succeeded)
    {
      GoalA_18 = ((MR_Word) ((MR_hl_field(1, MaybeGoalA_16, (MR_Integer) 0))));
      GoalWarningSpecsA_19 = ((MR_Word) ((MR_hl_field(1, MaybeGoalA_16, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) MaybeGoalB_17)) == (MR_Integer) 1);
      if (succeeded)
      {
        GoalB_20 = ((MR_Word) ((MR_hl_field(1, MaybeGoalB_17, (MR_Integer) 0))));
        GoalWarningSpecsB_21 = ((MR_Word) ((MR_hl_field(1, MaybeGoalB_17, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Word Goal_22;
      MR_Word WarningSpecs_23;

      switch (GoalKind_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 21:
          {
            Goal_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Goal_22, 0) = ((MR_Box) ((MR_Unsigned) 19U));
            MR_hl_field(3, Goal_22, 1) = ((MR_Box) (Context_10));
            MR_hl_field(3, Goal_22, 2) = ((MR_Box) (GoalA_18));
            MR_hl_field(3, Goal_22, 3) = ((MR_Box) (GoalB_20));
          }
          break;
        case (MR_Integer) 19:
          {
            Goal_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Goal_22, 0) = ((MR_Box) ((MR_Unsigned) 18U));
            MR_hl_field(3, Goal_22, 1) = ((MR_Box) (Context_10));
            MR_hl_field(3, Goal_22, 2) = ((MR_Box) (GoalB_20));
            MR_hl_field(3, Goal_22, 3) = ((MR_Box) (GoalA_18));
          }
          break;
        case (MR_Integer) 20:
          {
            Goal_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Goal_22, 0) = ((MR_Box) ((MR_Unsigned) 18U));
            MR_hl_field(3, Goal_22, 1) = ((MR_Box) (Context_10));
            MR_hl_field(3, Goal_22, 2) = ((MR_Box) (GoalA_18));
            MR_hl_field(3, Goal_22, 3) = ((MR_Box) (GoalB_20));
          }
          break;
      }
      WarningSpecs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), GoalWarningSpecsA_19, GoalWarningSpecsB_21);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_22));
        MR_hl_field(1, base, 1) = ((MR_Box) (WarningSpecs_23));
      }
    }
    else
    {
      MR_Word Specs_24;
      MR_Word Var_33;
      MR_Word Var_34;

      Var_33 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeGoalA_16);
      Var_34 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeGoalB_17);
      Specs_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_33, Var_34);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_24));
      }
    }
  }
  else
  {
    MR_String Functor_25;
    MR_Word Spec_26;
    MR_Word Var_35;

    parse_tree__parse_goal__string_goal_kind_2_p_1(&Functor_25, GoalKind_8);
    Spec_26 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_11, Context_10, Functor_25);
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (Spec_26));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_35));
    }
    *STATE_VARIABLE_VarSet_28 = STATE_VARIABLE_VarSet_0_27;
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
  MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word TermA_12;
  MR_Word ArrowTerm_13;
  MR_Word Var_27;
  MR_Word Var_28;

  if (succeeded)
  {
    TermA_12 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, (MR_Integer) 0))));
    Var_27 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, (MR_Integer) 1))));
    succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArrowTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 0))));
      Var_28 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 1))));
      succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word VarTerm0_73;
    MR_Word GoalTerm_74;
    MR_Word Var_90;
    MR_Word Var_86;
    MR_String Var_87;
    MR_Word Var_88;
    MR_Word Var_89;

    succeeded = ((MR_tag((MR_Word) ArrowTerm_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_86 = ((MR_Word) ((MR_hl_field(0, ArrowTerm_13, (MR_Integer) 0))));
      Var_88 = ((MR_Word) ((MR_hl_field(0, ArrowTerm_13, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_86)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_87 = ((MR_String) ((MR_hl_field(0, Var_86, (MR_Integer) 0))));
        succeeded = (strcmp(Var_87, (MR_String) "->") == 0);
        if (succeeded)
        {
          succeeded = (Var_88 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            VarTerm0_73 = ((MR_Word) ((MR_hl_field(1, Var_88, (MR_Integer) 0))));
            Var_89 = ((MR_Word) ((MR_hl_field(1, Var_88, (MR_Integer) 1))));
            succeeded = (Var_89 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              GoalTerm_74 = ((MR_Word) ((MR_hl_field(1, Var_89, (MR_Integer) 0))));
              Var_90 = ((MR_Word) ((MR_hl_field(1, Var_89, (MR_Integer) 1))));
              succeeded = (Var_90 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var0_76;

      succeeded = ((MR_tag((MR_Word) VarTerm0_73)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var0_76 = ((MR_Word) ((MR_hl_field(1, VarTerm0_73, (MR_Integer) 0))));
        {
          MR_Word STATE_VARIABLE_VarSet_29_29;
          MR_Word Var_78;
          MR_Word MaybeGoal_79;

          mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var0_76, &Var_78);
          parse_tree__parse_goal__parse_goal_5_p_0(GoalTerm_74, ContextPieces_9, &MaybeGoal_79, STATE_VARIABLE_VarSet_0_25, &STATE_VARIABLE_VarSet_29_29);
          if (((MR_tag((MR_Word) MaybeGoal_79)) == (MR_Integer) 0))
          {
            MR_Word MaybeCatchAnyExpr_14 = (MR_Word) (MaybeGoal_79);

            *MaybeGoal_10 = (MR_Word) (MaybeCatchAnyExpr_14);
            *STATE_VARIABLE_VarSet_26 = STATE_VARIABLE_VarSet_29_29;
          }
          else
          {
            MR_Word CatchAnyExpr_15;
            MR_Word CatchWarningSpecs_16 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_79, (MR_Integer) 1))));
            MR_Word MaybeGoal0_19;
            MR_Word Goal_80 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_79, (MR_Integer) 0))));
            MR_Word TermAArgs_17;
            MR_Word Var_30;
            MR_String Var_31;

            {
              CatchAnyExpr_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, CatchAnyExpr_15, 0) = ((MR_Box) (Var_78));
              MR_hl_field(0, CatchAnyExpr_15, 1) = ((MR_Box) (Goal_80));
            }
            succeeded = ((MR_tag((MR_Word) TermA_12)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_30 = ((MR_Word) ((MR_hl_field(0, TermA_12, (MR_Integer) 0))));
              TermAArgs_17 = ((MR_Word) ((MR_hl_field(0, TermA_12, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_31 = ((MR_String) ((MR_hl_field(0, Var_30, (MR_Integer) 0))));
                succeeded = (strcmp(Var_31, (MR_String) "catch") == 0);
              }
            }
            if (succeeded)
            {
              MR_Word Var_32;

              {
                Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_32, 0) = ((MR_Box) (CatchAnyExpr_15));
              }
              parse_tree__parse_goal__parse_catch_then_try_term_args_7_p_0(TermAArgs_17, Var_32, Context_8, ContextPieces_9, &MaybeGoal0_19, STATE_VARIABLE_VarSet_29_29, STATE_VARIABLE_VarSet_26);
            }
            else
            {
              MR_Word Var_35;

              {
                Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_35, 0) = ((MR_Box) (CatchAnyExpr_15));
              }
              parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_101_108_115_101_95_116_104_101_110_95_116_114_121_95_116_101_114_109_95_95_91_52_93_95_48_8_p_0(TermA_12, (MR_Word) ((MR_Unsigned) 0U), Var_35, ContextPieces_9, &MaybeGoal0_19, STATE_VARIABLE_VarSet_29_29, STATE_VARIABLE_VarSet_26);
            }
            if (((MR_tag((MR_Word) MaybeGoal0_19)) == (MR_Integer) 0))
            {
              MR_Word Specs_22 = ((MR_Word) ((MR_hl_field(0, MaybeGoal0_19, (MR_Integer) 0))));
              MR_Word Var_38;

              Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), CatchWarningSpecs_16, Specs_22);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeGoal_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_38));
              }
            }
            else
            {
              MR_Word Goal_20 = ((MR_Word) ((MR_hl_field(1, MaybeGoal0_19, (MR_Integer) 0))));
              MR_Word GoalWarningSpecs_21 = ((MR_Word) ((MR_hl_field(1, MaybeGoal0_19, (MR_Integer) 1))));
              MR_Word Var_37;

              Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), CatchWarningSpecs_16, GoalWarningSpecs_21);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *MaybeGoal_10 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Goal_20));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_37));
              }
            }
          }
        }
      }
      else
      {
        MR_Word Spec_85;
        MR_Word Var_94;
        MR_Word Var_95;
        MR_Word MaybeCatchAnyExpr_221;

        Var_94 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArrowTerm_13);
        {
          Spec_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_85, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_catch_any_term\'/6"));
          MR_hl_field(1, Spec_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_85, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(1, Spec_85, 3) = ((MR_Box) (Var_94));
          MR_hl_field(1, Spec_85, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[299])));
        }
        {
          Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_95, 0) = ((MR_Box) (Spec_85));
          MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_90));
        }
        {
          MaybeCatchAnyExpr_221 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeCatchAnyExpr_221, 0) = ((MR_Box) (Var_95));
        }
        *MaybeGoal_10 = (MR_Word) (MaybeCatchAnyExpr_221);
        *STATE_VARIABLE_VarSet_26 = STATE_VARIABLE_VarSet_0_25;
      }
    }
    else
    {
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Spec_104;
      MR_Word MaybeCatchAnyExpr_153;

      Var_100 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ArrowTerm_13);
      {
        Spec_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_104, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_catch_any_term\'/6"));
        MR_hl_field(1, Spec_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_104, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_104, 3) = ((MR_Box) (Var_100));
        MR_hl_field(1, Spec_104, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[304])));
      }
      {
        Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_101, 0) = ((MR_Box) (Spec_104));
        MR_hl_field(1, Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeCatchAnyExpr_153 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeCatchAnyExpr_153, 0) = ((MR_Box) (Var_101));
      }
      *MaybeGoal_10 = (MR_Word) (MaybeCatchAnyExpr_153);
      *STATE_VARIABLE_VarSet_26 = STATE_VARIABLE_VarSet_0_25;
    }
  }
  else
  {
    MR_Word Spec_24;
    MR_Word Var_68;

    {
      Spec_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_catch_any\'/6"));
      MR_hl_field(1, Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_24, 3) = ((MR_Box) (Context_8));
      MR_hl_field(1, Spec_24, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[137])));
    }
    {
      Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_68, 0) = ((MR_Box) (Spec_24));
      MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_68));
    }
    *STATE_VARIABLE_VarSet_26 = STATE_VARIABLE_VarSet_0_25;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_semicolon_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_42,
  MR_Word * STATE_VARIABLE_VarSet_43)
{
  MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word SubGoalTermA_12;
  MR_Word SubGoalTermB_13;
  MR_Word Var_44;
  MR_Word Var_45;

  if (succeeded)
  {
    SubGoalTermA_12 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, (MR_Integer) 0))));
    Var_44 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, (MR_Integer) 1))));
    succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalTermB_13 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 0))));
      Var_45 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 1))));
      succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word CondGoalTerm_14;
    MR_Word ThenGoalTerm_15;
    MR_Word Var_46;
    MR_String Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;

    succeeded = ((MR_tag((MR_Word) SubGoalTermA_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_46 = ((MR_Word) ((MR_hl_field(0, SubGoalTermA_12, (MR_Integer) 0))));
      Var_48 = ((MR_Word) ((MR_hl_field(0, SubGoalTermA_12, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_47 = ((MR_String) ((MR_hl_field(0, Var_46, (MR_Integer) 0))));
        succeeded = (strcmp(Var_47, (MR_String) "->") == 0);
        if (succeeded)
        {
          succeeded = (Var_48 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            CondGoalTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_48, (MR_Integer) 0))));
            Var_49 = ((MR_Word) ((MR_hl_field(1, Var_48, (MR_Integer) 1))));
            succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ThenGoalTerm_15 = ((MR_Word) ((MR_hl_field(1, Var_49, (MR_Integer) 0))));
              Var_50 = ((MR_Word) ((MR_hl_field(1, Var_49, (MR_Integer) 1))));
              succeeded = (Var_50 == (MR_Word) ((MR_Unsigned) 0U));
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
      MR_Word STATE_VARIABLE_VarSet_51_51;
      MR_Word STATE_VARIABLE_VarSet_52_52;
      MR_Word Vars_21;
      MR_Word StateVars_22;
      MR_Word CondGoal_23;
      MR_Word CondWarningSpecs_24;
      MR_Word ThenGoal_25;
      MR_Word ThenWarningSpecs_26;
      MR_Word ElseGoal_27;
      MR_Word ElseWarningSpecs_28;

      parse_tree__parse_goal__parse_some_vars_goal_5_p_0(CondGoalTerm_14, ContextPieces_9, &MaybeCondGoal_18, STATE_VARIABLE_VarSet_0_42, &STATE_VARIABLE_VarSet_51_51);
      parse_tree__parse_goal__parse_goal_5_p_0(ThenGoalTerm_15, ContextPieces_9, &MaybeThenGoal_19, STATE_VARIABLE_VarSet_51_51, &STATE_VARIABLE_VarSet_52_52);
      parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTermB_13, ContextPieces_9, &MaybeElseGoal_20, STATE_VARIABLE_VarSet_52_52, STATE_VARIABLE_VarSet_43);
      succeeded = ((MR_tag((MR_Word) MaybeCondGoal_18)) == (MR_Integer) 1);
      if (succeeded)
      {
        Vars_21 = ((MR_Word) ((MR_hl_field(1, MaybeCondGoal_18, (MR_Integer) 0))));
        StateVars_22 = ((MR_Word) ((MR_hl_field(1, MaybeCondGoal_18, (MR_Integer) 1))));
        CondGoal_23 = ((MR_Word) ((MR_hl_field(1, MaybeCondGoal_18, (MR_Integer) 2))));
        CondWarningSpecs_24 = ((MR_Word) ((MR_hl_field(1, MaybeCondGoal_18, (MR_Integer) 3))));
        succeeded = ((MR_tag((MR_Word) MaybeThenGoal_19)) == (MR_Integer) 1);
        if (succeeded)
        {
          ThenGoal_25 = ((MR_Word) ((MR_hl_field(1, MaybeThenGoal_19, (MR_Integer) 0))));
          ThenWarningSpecs_26 = ((MR_Word) ((MR_hl_field(1, MaybeThenGoal_19, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) MaybeElseGoal_20)) == (MR_Integer) 1);
          if (succeeded)
          {
            ElseGoal_27 = ((MR_Word) ((MR_hl_field(1, MaybeElseGoal_20, (MR_Integer) 0))));
            ElseWarningSpecs_28 = ((MR_Word) ((MR_hl_field(1, MaybeElseGoal_20, (MR_Integer) 1))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word Goal_29;
        MR_Word WarningSpecs_30;
        MR_Word Var_54;

        {
          Goal_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Goal_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Goal_29, 1) = ((MR_Box) (Context_8));
          MR_hl_field(3, Goal_29, 2) = ((MR_Box) (Vars_21));
          MR_hl_field(3, Goal_29, 3) = ((MR_Box) (StateVars_22));
          MR_hl_field(3, Goal_29, 4) = ((MR_Box) (CondGoal_23));
          MR_hl_field(3, Goal_29, 5) = ((MR_Box) (ThenGoal_25));
          MR_hl_field(3, Goal_29, 6) = ((MR_Box) (ElseGoal_27));
        }
        Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ThenWarningSpecs_26, ElseWarningSpecs_28);
        WarningSpecs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), CondWarningSpecs_24, Var_54);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Goal_29));
          MR_hl_field(1, base, 1) = ((MR_Box) (WarningSpecs_30));
        }
      }
      else
      {
        MR_Word Specs_31;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_58;

        Var_55 = parse_tree__maybe_error__get_any_errors_warnings4_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeCondGoal_18);
        Var_57 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeThenGoal_19);
        Var_58 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeElseGoal_20);
        Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_57, Var_58);
        Specs_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_55, Var_56);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_31));
        }
      }
    }
    else
    {
      MR_Word DisjunctsCord_32;
      MR_Word ErrorSpecs_33;
      MR_Word Var_59;
      MR_Word WarningSpecs_73;

      Var_59 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0));
      parse_tree__parse_goal__parse_goal_disjunction_11_p_0(SubGoalTermA_12, SubGoalTermB_13, ContextPieces_9, Var_59, &DisjunctsCord_32, (MR_Word) ((MR_Unsigned) 0U), &WarningSpecs_73, (MR_Word) ((MR_Unsigned) 0U), &ErrorSpecs_33, STATE_VARIABLE_VarSet_0_42, STATE_VARIABLE_VarSet_43);
      if ((ErrorSpecs_33 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Disjuncts_34;
        MR_Word Disjunct1_36;
        MR_Word Disjunct2_37;
        MR_Word Disjuncts3plus_38;
        MR_Word Goal_70;

        Disjuncts_34 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), DisjunctsCord_32);
        if ((Disjuncts_34 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_semicolon\'/6", (MR_String) "less than two disjuncts");
            return;
          }
        else
        {
          MR_Word Var_83 = ((MR_Word) ((MR_hl_field(1, Disjuncts_34, (MR_Integer) 1))));
          MR_Word Var_84 = ((MR_Word) ((MR_hl_field(1, Disjuncts_34, (MR_Integer) 0))));

          if ((Var_83 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_semicolon\'/6", (MR_String) "less than two disjuncts");
              return;
            }
          else
          {
            Disjunct1_36 = Var_84;
            Disjunct2_37 = ((MR_Word) ((MR_hl_field(1, Var_83, (MR_Integer) 0))));
            Disjuncts3plus_38 = ((MR_Word) ((MR_hl_field(1, Var_83, (MR_Integer) 1))));
          }
        }
        {
          Goal_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Goal_70, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Goal_70, 1) = ((MR_Box) (Context_8));
          MR_hl_field(3, Goal_70, 2) = ((MR_Box) (Disjunct1_36));
          MR_hl_field(3, Goal_70, 3) = ((MR_Box) (Disjunct2_37));
          MR_hl_field(3, Goal_70, 4) = ((MR_Box) (Disjuncts3plus_38));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeGoal_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Goal_70));
          MR_hl_field(1, base, 1) = ((MR_Box) (WarningSpecs_73));
        }
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (ErrorSpecs_33));
        }
    }
  }
  else
  {
    MR_Word Spec_41;
    MR_Word Var_68;

    Spec_41 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_9, Context_8, (MR_String) ";");
    {
      Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_68, 0) = ((MR_Box) (Spec_41));
      MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_68));
    }
    *STATE_VARIABLE_VarSet_43 = STATE_VARIABLE_VarSet_0_42;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_conj_7_p_1(
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_27,
  MR_Word * STATE_VARIABLE_VarSet_28)
{
  MR_bool succeeded;
  MR_String Functor_14;
  MR_Word SubGoalTermA_15;
  MR_Word SubGoalTermB_16;
  MR_Word Var_29;
  MR_Word Var_30;

  parse_tree__parse_goal__string_goal_kind_2_p_1(&Functor_14, GoalKind_8);
  succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    SubGoalTermA_15 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 0))));
    Var_29 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 1))));
    succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalTermB_16 = ((MR_Word) ((MR_hl_field(1, Var_29, (MR_Integer) 0))));
      Var_30 = ((MR_Word) ((MR_hl_field(1, Var_29, (MR_Integer) 1))));
      succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word ConjunctsCord_17;
    MR_Word WarningSpecs_18;
    MR_Word ErrorSpecs_19;
    MR_Word Var_31;

    Var_31 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0));
    parse_tree__parse_goal__parse_goal_conjunction_12_p_0(Functor_14, SubGoalTermA_15, SubGoalTermB_16, ContextPieces_11, Var_31, &ConjunctsCord_17, (MR_Word) ((MR_Unsigned) 0U), &WarningSpecs_18, (MR_Word) ((MR_Unsigned) 0U), &ErrorSpecs_19, STATE_VARIABLE_VarSet_0_27, STATE_VARIABLE_VarSet_28);
    if ((ErrorSpecs_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Conjuncts_20;
      MR_Word Conjunct1_21;
      MR_Word Conjuncts2plus_22;
      MR_Word Goal_23;

      Conjuncts_20 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), ConjunctsCord_17);
      if ((Conjuncts_20 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_conj\'/7", (MR_String) "no Conjuncts");
          return;
        }
      else
      {
        Conjunct1_21 = ((MR_Word) ((MR_hl_field(1, Conjuncts_20, (MR_Integer) 0))));
        Conjuncts2plus_22 = ((MR_Word) ((MR_hl_field(1, Conjuncts_20, (MR_Integer) 1))));
      }
      {
        Goal_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Goal_23, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Goal_23, 1) = ((MR_Box) (Context_10));
        MR_hl_field(3, Goal_23, 2) = ((MR_Box) (Conjunct1_21));
        MR_hl_field(3, Goal_23, 3) = ((MR_Box) (Conjuncts2plus_22));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_23));
        MR_hl_field(1, base, 1) = ((MR_Box) (WarningSpecs_18));
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (ErrorSpecs_19));
      }
  }
  else
  {
    MR_Word Spec_26;
    MR_Word Var_37;

    Spec_26 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_11, Context_10, Functor_14);
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Spec_26));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_37));
    }
    *STATE_VARIABLE_VarSet_28 = STATE_VARIABLE_VarSet_0_27;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_conj_7_p_0(
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_27,
  MR_Word * STATE_VARIABLE_VarSet_28)
{
  MR_bool succeeded;
  MR_String Functor_14;
  MR_Word SubGoalTermA_15;
  MR_Word SubGoalTermB_16;
  MR_Word Var_29;
  MR_Word Var_30;

  parse_tree__parse_goal__string_goal_kind_2_p_1(&Functor_14, GoalKind_8);
  succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    SubGoalTermA_15 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 0))));
    Var_29 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 1))));
    succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalTermB_16 = ((MR_Word) ((MR_hl_field(1, Var_29, (MR_Integer) 0))));
      Var_30 = ((MR_Word) ((MR_hl_field(1, Var_29, (MR_Integer) 1))));
      succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word ConjunctsCord_17;
    MR_Word WarningSpecs_18;
    MR_Word ErrorSpecs_19;
    MR_Word Var_31;

    Var_31 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0));
    parse_tree__parse_goal__parse_goal_conjunction_12_p_0(Functor_14, SubGoalTermA_15, SubGoalTermB_16, ContextPieces_11, Var_31, &ConjunctsCord_17, (MR_Word) ((MR_Unsigned) 0U), &WarningSpecs_18, (MR_Word) ((MR_Unsigned) 0U), &ErrorSpecs_19, STATE_VARIABLE_VarSet_0_27, STATE_VARIABLE_VarSet_28);
    if ((ErrorSpecs_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Conjuncts_20;
      MR_Word Conjunct1_21;
      MR_Word Conjuncts2plus_22;
      MR_Word Goal_23;

      Conjuncts_20 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), ConjunctsCord_17);
      if ((Conjuncts_20 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_conj\'/7", (MR_String) "no Conjuncts");
          return;
        }
      else
      {
        Conjunct1_21 = ((MR_Word) ((MR_hl_field(1, Conjuncts_20, (MR_Integer) 0))));
        Conjuncts2plus_22 = ((MR_Word) ((MR_hl_field(1, Conjuncts_20, (MR_Integer) 1))));
      }
      {
        Goal_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Goal_23, 0) = ((MR_Box) (Context_10));
        MR_hl_field(2, Goal_23, 1) = ((MR_Box) (Conjunct1_21));
        MR_hl_field(2, Goal_23, 2) = ((MR_Box) (Conjuncts2plus_22));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_23));
        MR_hl_field(1, base, 1) = ((MR_Box) (WarningSpecs_18));
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (ErrorSpecs_19));
      }
  }
  else
  {
    MR_Word Spec_26;
    MR_Word Var_37;

    Spec_26 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(ContextPieces_11, Context_10, Functor_14);
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Spec_26));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_37));
    }
    *STATE_VARIABLE_VarSet_28 = STATE_VARIABLE_VarSet_0_27;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_some_all_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_85;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_some_all__738__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_85);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_85));
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_some_all_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_79;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_goal_some_all__737__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_79);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_79));
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_some_all_7_p_0(
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_37,
  MR_Word * STATE_VARIABLE_VarSet_38)
{
  MR_bool succeeded;
  MR_String Functor_14;
  MR_Word QuantType_15;
  MR_Word VarsTailPieces_16;
  MR_Word QVarsTerm_17;
  MR_Word SubGoalTerm_18;
  MR_Word Var_61;
  MR_Word Var_62;

  switch (GoalKind_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 10:
      {
        Functor_14 = (MR_String) "all";
        QuantType_15 = (MR_Integer) 1;
        VarsTailPieces_16 = (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[46]));
      }
      break;
    case (MR_Integer) 9:
      {
        Functor_14 = (MR_String) "some";
        QuantType_15 = (MR_Integer) 0;
        VarsTailPieces_16 = (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[22]));
      }
      break;
  }
  succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    QVarsTerm_17 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 0))));
    Var_61 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 1))));
    succeeded = (Var_61 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalTerm_18 = ((MR_Word) ((MR_hl_field(1, Var_61, (MR_Integer) 0))));
      Var_62 = ((MR_Word) ((MR_hl_field(1, Var_61, (MR_Integer) 1))));
      succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word GenericVarSet_19;
    MR_Word VarsContextPieces_20;
    MR_Word MaybeVars_21;
    MR_Word MaybeSubGoal_22;
    MR_Word Var_63;
    MR_Word Vars0_23;
    MR_Word StateVars0_24;
    MR_Word SubGoal_25;
    MR_Word SubGoalWarningSpecs_26;
    MR_Word Var_65;

    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_37, &GenericVarSet_19);
    Var_63 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), VarsTailPieces_16);
    VarsContextPieces_20 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_11, Var_63);
    parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), QVarsTerm_17, GenericVarSet_19, VarsContextPieces_20, &MaybeVars_21);
    parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_18, ContextPieces_11, &MaybeSubGoal_22, STATE_VARIABLE_VarSet_0_37, STATE_VARIABLE_VarSet_38);
    succeeded = ((MR_tag((MR_Word) MaybeVars_21)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_65 = ((MR_Word) ((MR_hl_field(1, MaybeVars_21, (MR_Integer) 0))));
      Vars0_23 = ((MR_Word) ((MR_hl_field(0, Var_65, (MR_Integer) 0))));
      StateVars0_24 = ((MR_Word) ((MR_hl_field(0, Var_65, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) MaybeSubGoal_22)) == (MR_Integer) 1);
      if (succeeded)
      {
        SubGoal_25 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_22, (MR_Integer) 0))));
        SubGoalWarningSpecs_26 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_22, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Word Vars_27;
      MR_Word StateVars_28;
      MR_Word Goal1_29;
      MR_Word Goal_32;

      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[7]), Vars0_23, &Vars_27);
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[8]), StateVars0_24, &StateVars_28);
      if ((StateVars_28 == (MR_Word) ((MR_Unsigned) 0U)))
        Goal1_29 = SubGoal_25;
      else
        {
          Goal1_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Goal1_29, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Goal1_29, 1) = (MR_Box) (((((MR_Unsigned) (QuantType_15) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
          MR_hl_field(3, Goal1_29, 2) = ((MR_Box) (Context_10));
          MR_hl_field(3, Goal1_29, 3) = ((MR_Box) (StateVars_28));
          MR_hl_field(3, Goal1_29, 4) = ((MR_Box) (SubGoal_25));
        }
      if ((Vars_27 == (MR_Word) ((MR_Unsigned) 0U)))
        Goal_32 = Goal1_29;
      else
        {
          Goal_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Goal_32, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Goal_32, 1) = (MR_Box) (((((MR_Unsigned) (QuantType_15) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
          MR_hl_field(3, Goal_32, 2) = ((MR_Box) (Context_10));
          MR_hl_field(3, Goal_32, 3) = ((MR_Box) (Vars_27));
          MR_hl_field(3, Goal_32, 4) = ((MR_Box) (Goal1_29));
        }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_32));
        MR_hl_field(1, base, 1) = ((MR_Box) (SubGoalWarningSpecs_26));
      }
    }
    else
    {
      MR_Word Specs_35;
      MR_Word Var_70;
      MR_Word Var_71;

      Var_70 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[2]), MaybeVars_21);
      Var_71 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_22);
      Specs_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_70, Var_71);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_35));
      }
    }
  }
  else
  {
    MR_Word Spec_36;
    MR_Word Var_73;

    Spec_36 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of variables", Functor_14);
    {
      Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_73, 0) = ((MR_Box) (Spec_36));
      MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_73));
    }
    *STATE_VARIABLE_VarSet_38 = STATE_VARIABLE_VarSet_0_37;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_not_7_p_0(
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23)
{
  MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word SubGoalTerm_14;
  MR_Word Var_24;

  if (succeeded)
  {
    SubGoalTerm_14 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 0))));
    Var_24 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 1))));
    succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word MaybeSubGoal_15;

    parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_14, ContextPieces_11, &MaybeSubGoal_15, STATE_VARIABLE_VarSet_0_22, STATE_VARIABLE_VarSet_23);
    if (((MR_tag((MR_Word) MaybeSubGoal_15)) == (MR_Integer) 0))
      *MaybeGoal_12 = MaybeSubGoal_15;
    else
    {
      MR_Word SubGoal_16 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_15, (MR_Integer) 0))));
      MR_Word SubGoalWarningSpecs_17 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_15, (MR_Integer) 1))));
      MR_Word Goal_18;

      {
        Goal_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Goal_18, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, Goal_18, 1) = ((MR_Box) (Context_10));
        MR_hl_field(3, Goal_18, 2) = ((MR_Box) (SubGoal_16));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (SubGoalWarningSpecs_17));
      }
    }
  }
  else
  {
    MR_String Functor_20;
    MR_Word Spec_21;
    MR_Word Var_26;

    parse_tree__parse_goal__string_goal_kind_2_p_1(&Functor_20, GoalKind_8);
    Spec_21 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_20);
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (Spec_21));
      MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_26));
    }
    *STATE_VARIABLE_VarSet_23 = STATE_VARIABLE_VarSet_0_22;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_disable_warnings_7_p_0(
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_40,
  MR_Word * STATE_VARIABLE_VarSet_41)
{
  MR_bool succeeded;
  MR_String Functor_14;
  MR_Word WarningsTerm_15;
  MR_Word SubGoalTerm_16;
  MR_Word Var_42;
  MR_Word Var_43;

  parse_tree__parse_goal__string_goal_kind_2_p_1(&Functor_14, GoalKind_8);
  succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    WarningsTerm_15 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 0))));
    Var_42 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 1))));
    succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SubGoalTerm_16 = ((MR_Word) ((MR_hl_field(1, Var_42, (MR_Integer) 0))));
      Var_43 = ((MR_Word) ((MR_hl_field(1, Var_42, (MR_Integer) 1))));
      succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word GenericVarSet_17;
    MR_Word MaybeWarnings_18;
    MR_Word MaybeSubGoal_19;
    MR_Word Warnings_20;
    MR_Word WarningsWarningSpecs_21;
    MR_Word SubGoal_22;
    MR_Word SubGoalWarningSpecs_23;

    mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), STATE_VARIABLE_VarSet_0_40, &GenericVarSet_17);
    parse_tree__parse_goal__parse_warnings_6_p_0(GenericVarSet_17, WarningsTerm_15, Functor_14, ContextPieces_11, (MR_Integer) 1, &MaybeWarnings_18);
    parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_16, ContextPieces_11, &MaybeSubGoal_19, STATE_VARIABLE_VarSet_0_40, STATE_VARIABLE_VarSet_41);
    succeeded = ((MR_tag((MR_Word) MaybeWarnings_18)) == (MR_Integer) 1);
    if (succeeded)
    {
      Warnings_20 = ((MR_Word) ((MR_hl_field(1, MaybeWarnings_18, (MR_Integer) 0))));
      WarningsWarningSpecs_21 = ((MR_Word) ((MR_hl_field(1, MaybeWarnings_18, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) MaybeSubGoal_19)) == (MR_Integer) 1);
      if (succeeded)
      {
        SubGoal_22 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_19, (MR_Integer) 0))));
        SubGoalWarningSpecs_23 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_19, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Word WarningSpecs_24;
      MR_Word WarningsContext_25;
      MR_Word WarningsBag_26;
      MR_Word WarningsCounts_27;
      MR_Word NonDuplicateWarnings_28;
      MR_Word DuplicateSpecs_29;
      MR_Word Var_46;

      WarningSpecs_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), WarningsWarningSpecs_21, SubGoalWarningSpecs_23);
      WarningsContext_25 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), WarningsTerm_15);
      Var_46 = mercury__bag__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0));
      mercury__bag__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), Warnings_20, Var_46, &WarningsBag_26);
      mercury__bag__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), WarningsBag_26, &WarningsCounts_27);
      parse_tree__parse_goal__generate_warnings_for_duplicate_warnings_5_p_0(WarningsContext_25, ContextPieces_11, WarningsCounts_27, &NonDuplicateWarnings_28, &DuplicateSpecs_29);
      if ((DuplicateSpecs_29 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((NonDuplicateWarnings_28 == (MR_Word) ((MR_Unsigned) 0U)))
          if ((WarningsWarningSpecs_21 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Pieces_33;
            MR_Word Spec_34;
            MR_Word Var_47;
            MR_Word Var_48;
            MR_Word Var_50;
            MR_Word Var_53;
            MR_Word Var_56;
            MR_Word Var_57;
            MR_Word Var_70;

            Var_47 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_11);
            {
              Var_57 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_57, 0) = ((MR_Box) (Functor_14));
            }
            {
              Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
              MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[42])));
            }
            {
              Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[38])));
              MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
            }
            {
              Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[24])));
              MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
            }
            {
              Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_50));
            }
            Pieces_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, Var_48);
            {
              Spec_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_34, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_disable_warnings\'/7"));
              MR_hl_field(1, Spec_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_34, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(1, Spec_34, 3) = ((MR_Box) (WarningsContext_25));
              MR_hl_field(1, Spec_34, 4) = ((MR_Box) (Pieces_33));
            }
            {
              Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_70, 0) = ((MR_Box) (Spec_34));
              MR_hl_field(1, Var_70, 1) = ((MR_Box) (WarningSpecs_24));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeGoal_12 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_70));
            }
          }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *MaybeGoal_12 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (SubGoal_22));
              MR_hl_field(1, base, 1) = ((MR_Box) (WarningSpecs_24));
            }
        else
        {
          MR_Word HeadWarning_30 = ((MR_Word) ((MR_hl_field(1, NonDuplicateWarnings_28, (MR_Integer) 0))));
          MR_Word TailWarnings_31 = ((MR_Word) ((MR_hl_field(1, NonDuplicateWarnings_28, (MR_Integer) 1))));
          MR_Word Goal_32;

          {
            Goal_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Goal_32, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(3, Goal_32, 1) = ((MR_Box) (Context_10));
            MR_hl_field(3, Goal_32, 2) = (MR_Box) ((MR_Unsigned) (HeadWarning_30));
            MR_hl_field(3, Goal_32, 3) = ((MR_Box) (TailWarnings_31));
            MR_hl_field(3, Goal_32, 4) = ((MR_Box) (SubGoal_22));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MaybeGoal_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Goal_32));
            MR_hl_field(1, base, 1) = ((MR_Box) (WarningSpecs_24));
          }
        }
      else
      {
        MR_Word Var_71;

        Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), DuplicateSpecs_29, WarningSpecs_24);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeGoal_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_71));
        }
      }
    }
    else
    {
      MR_Word Specs_39;
      MR_Word Var_72;
      MR_Word Var_73;

      Var_72 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[3]), MaybeWarnings_18);
      Var_73 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeSubGoal_19);
      Specs_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_72, Var_73);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_39));
      }
    }
  }
  else
  {
    MR_Word Var_75;
    MR_Word Spec_77;

    Spec_77 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(ContextPieces_11, Context_10, (MR_String) "a list of warnings to disable", Functor_14);
    {
      Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_75, 0) = ((MR_Box) (Spec_77));
      MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_75));
    }
    *STATE_VARIABLE_VarSet_41 = STATE_VARIABLE_VarSet_0_40;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_promise_purity_7_p_0(
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24)
{
  MR_bool succeeded;
  MR_Word Purity_14;
  MR_Word SubGoalTerm_15;
  MR_Word Var_25;

  switch (GoalKind_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      Purity_14 = (MR_Integer) 2;
      break;
    case (MR_Integer) 4:
      Purity_14 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      Purity_14 = (MR_Integer) 1;
      break;
  }
  succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    SubGoalTerm_15 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 0))));
    Var_25 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 1))));
    succeeded = (Var_25 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word MaybeSubGoal_16;

    parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_15, ContextPieces_11, &MaybeSubGoal_16, STATE_VARIABLE_VarSet_0_23, STATE_VARIABLE_VarSet_24);
    if (((MR_tag((MR_Word) MaybeSubGoal_16)) == (MR_Integer) 0))
      *MaybeGoal_12 = MaybeSubGoal_16;
    else
    {
      MR_Word SubGoal_17 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_16, (MR_Integer) 0))));
      MR_Word SubGoalWarningSpecs_18 = ((MR_Word) ((MR_hl_field(1, MaybeSubGoal_16, (MR_Integer) 1))));
      MR_Word Goal_19;

      {
        Goal_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Goal_19, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(3, Goal_19, 1) = ((MR_Box) (Context_10));
        MR_hl_field(3, Goal_19, 2) = (MR_Box) ((MR_Unsigned) (Purity_14));
        MR_hl_field(3, Goal_19, 3) = ((MR_Box) (SubGoal_17));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_19));
        MR_hl_field(1, base, 1) = ((MR_Box) (SubGoalWarningSpecs_18));
      }
    }
  }
  else
  {
    MR_String Functor_21;
    MR_Word Spec_22;
    MR_Word Var_27;

    parse_tree__parse_goal__string_goal_kind_2_p_1(&Functor_21, GoalKind_8);
    Spec_22 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_21);
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (Spec_22));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_27));
    }
    *STATE_VARIABLE_VarSet_24 = STATE_VARIABLE_VarSet_0_23;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_impure_semipure_7_p_0(
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20)
{
  MR_bool succeeded;
  MR_Word Purity_14;
  MR_Word SubGoalTerm_15;
  MR_Word Var_21;

  switch (GoalKind_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Purity_14 = (MR_Integer) 2;
      break;
    case (MR_Integer) 1:
      Purity_14 = (MR_Integer) 1;
      break;
  }
  succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    SubGoalTerm_15 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 0))));
    Var_21 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 1))));
    succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word MaybeGoal0_16;

    parse_tree__parse_goal__parse_goal_5_p_0(SubGoalTerm_15, ContextPieces_11, &MaybeGoal0_16, STATE_VARIABLE_VarSet_0_19, STATE_VARIABLE_VarSet_20);
    parse_tree__parse_goal__apply_purity_marker_to_maybe_goal_4_p_0(SubGoalTerm_15, Purity_14, MaybeGoal0_16, MaybeGoal_12);
  }
  else
  {
    MR_String Functor_17;
    MR_Word Spec_18;
    MR_Word Var_23;

    parse_tree__parse_goal__string_goal_kind_2_p_1(&Functor_17, GoalKind_8);
    Spec_18 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(ContextPieces_11, Context_10, Functor_17);
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (Spec_18));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_23));
    }
    *STATE_VARIABLE_VarSet_20 = STATE_VARIABLE_VarSet_0_19;
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_some_vars_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_64;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__156__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_64);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_64));
}

static void MR_CALL 
parse_tree__parse_goal__parse_some_vars_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_58;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_some_vars_goal__155__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_58);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_58));
}

void MR_CALL 
parse_tree__parse_goal__parse_some_vars_goal_5_p_0(
  MR_Word Term_6,
  MR_Word ContextPieces_7,
  MR_Word * MaybeVarsAndGoal_8,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27)
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
    Var_28 = ((MR_Word) ((MR_hl_field(0, Term_6, (MR_Integer) 0))));
    Var_30 = ((MR_Word) ((MR_hl_field(0, Term_6, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_29 = ((MR_String) ((MR_hl_field(0, Var_28, (MR_Integer) 0))));
      succeeded = (strcmp(Var_29, (MR_String) "some") == 0);
      if (succeeded)
      {
        succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          VarsTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_30, (MR_Integer) 0))));
          Var_31 = ((MR_Word) ((MR_hl_field(1, Var_30, (MR_Integer) 1))));
          succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SubGoalTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_31, (MR_Integer) 0))));
            Var_32 = ((MR_Word) ((MR_hl_field(1, Var_31, (MR_Integer) 1))));
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
    Var_44 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[22])));
    VarsContextPieces_15 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_7, Var_44);
    parse_tree__parse_vars__parse_vars_state_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_10, GenericVarSet_13, VarsContextPieces_15, &MaybeVars_16);
    GoalTerm_17 = SubGoalTerm_11;
  }
  else
  {
    MaybeVars_16 = (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_3[1]));
    GoalTerm_17 = Term_6;
  }
  parse_tree__parse_goal__parse_goal_5_p_0(GoalTerm_17, ContextPieces_7, &MaybeGoal_18, STATE_VARIABLE_VarSet_0_26, STATE_VARIABLE_VarSet_27);
  succeeded = ((MR_tag((MR_Word) MaybeVars_16)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_49 = ((MR_Word) ((MR_hl_field(1, MaybeVars_16, (MR_Integer) 0))));
    Vars0_19 = ((MR_Word) ((MR_hl_field(0, Var_49, (MR_Integer) 0))));
    StateVars0_20 = ((MR_Word) ((MR_hl_field(0, Var_49, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) MaybeGoal_18)) == (MR_Integer) 1);
    if (succeeded)
    {
      Goal_21 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_18, (MR_Integer) 0))));
      SubGoalWarningSpecs_22 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_18, (MR_Integer) 1))));
    }
  }
  if (succeeded)
  {
    MR_Word Vars_23;
    MR_Word StateVars_24;

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[5]), Vars0_19, &Vars_23);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[6]), StateVars0_20, &StateVars_24);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *MaybeVarsAndGoal_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Vars_23));
      MR_hl_field(1, base, 1) = ((MR_Box) (StateVars_24));
      MR_hl_field(1, base, 2) = ((MR_Box) (Goal_21));
      MR_hl_field(1, base, 3) = ((MR_Box) (SubGoalWarningSpecs_22));
    }
  }
  else
  {
    MR_Word Specs_25;
    MR_Word Var_52;
    MR_Word Var_53;

    Var_52 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[2]), MaybeVars_16);
    Var_53 = parse_tree__maybe_error__get_any_errors_warnings2_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), MaybeGoal_18);
    Specs_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_52, Var_53);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeVarsAndGoal_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_25));
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
    Var_22 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, (MR_Integer) 0))));
    Var_28 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, (MR_Integer) 1))));
    succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_23 = ((MR_Word) ((MR_hl_field(0, Var_22, (MR_Integer) 0))));
        Var_25 = ((MR_Word) ((MR_hl_field(0, Var_22, (MR_Integer) 1))));
        ThenContext_14 = ((MR_Word) ((MR_hl_field(0, Var_22, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_24 = ((MR_String) ((MR_hl_field(0, Var_23, (MR_Integer) 0))));
          succeeded = (strcmp(Var_24, (MR_String) "then") == 0);
          if (succeeded)
          {
            succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_26 = ((MR_Word) ((MR_hl_field(1, Var_25, (MR_Integer) 1))));
              succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ThenGoalTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 0))));
                Var_27 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 1))));
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
      Var_29 = ((MR_Word) ((MR_hl_field(0, ThenGoalTerm_13, (MR_Integer) 0))));
      Var_31 = ((MR_Word) ((MR_hl_field(0, ThenGoalTerm_13, (MR_Integer) 1))));
      SemiColonContext_17 = ((MR_Word) ((MR_hl_field(0, ThenGoalTerm_13, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_30 = ((MR_String) ((MR_hl_field(0, Var_29, (MR_Integer) 0))));
        succeeded = (strcmp(Var_30, (MR_String) ";") == 0);
        if (succeeded)
        {
          succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_32 = ((MR_Word) ((MR_hl_field(1, Var_31, (MR_Integer) 1))));
            succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_33 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 1))));
              succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
      {
        Spec_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_if\'/6"));
        MR_hl_field(1, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_19, 3) = ((MR_Box) (SemiColonContext_17));
        MR_hl_field(1, Spec_19, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[87])));
      }
    else
      {
        Spec_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_if\'/6"));
        MR_hl_field(1, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_19, 3) = ((MR_Box) (ThenContext_14));
        MR_hl_field(1, Spec_19, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[93])));
      }
  }
  else
    {
      Spec_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_goal_if\'/6"));
      MR_hl_field(1, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_19, 3) = ((MR_Box) (Context_8));
      MR_hl_field(1, Spec_19, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[97])));
    }
  {
    Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_103, 0) = ((MR_Box) (Spec_19));
    MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *MaybeGoal_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_103));
  }
  *STATE_VARIABLE_VarSet_21 = STATE_VARIABLE_VarSet_0_20;
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_equal_6_p_0(
  MR_Word ArgTerms_7,
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_VarSet_0_17,
  MR_Word * STATE_VARIABLE_VarSet_18)
{
  MR_bool succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word TermA0_12;
  MR_Word TermB0_13;
  MR_Word Var_19;
  MR_Word Var_20;

  if (succeeded)
  {
    TermA0_12 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, (MR_Integer) 0))));
    Var_19 = ((MR_Word) ((MR_hl_field(1, ArgTerms_7, (MR_Integer) 1))));
    succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TermB0_13 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 0))));
      Var_20 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 1))));
      succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    MR_Word TermA_14;
    MR_Word TermB_15;
    MR_Word Var_21;

    mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermA0_12, &TermA_14);
    mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermB0_13, &TermB_15);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (Context_8));
      MR_hl_field(0, Var_21, 1) = ((MR_Box) (TermA_14));
      MR_hl_field(0, Var_21, 2) = ((MR_Box) (TermB_15));
      MR_hl_field(0, Var_21, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MaybeGoal_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_21));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_Word Spec_16;
    MR_Word Var_25;

    Spec_16 = parse_tree__parse_goal__should_have_two_terms_infix_3_f_0(ContextPieces_9, Context_8, (MR_String) "=");
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (Spec_16));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_25));
    }
  }
  *STATE_VARIABLE_VarSet_18 = STATE_VARIABLE_VarSet_0_17;
}

MR_Word MR_CALL 
parse_tree__parse_goal__should_have_two_terms_infix_3_f_0(
  MR_Word ContextPieces_5,
  MR_Word Context_6,
  MR_String Functor_7)
{
  MR_Word Spec_8;
  MR_Word Pieces_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_13;
  MR_Word Var_16;
  MR_Word Var_19;
  MR_Word Var_20;

  Var_10 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5);
  {
    Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_20, 1) = ((MR_Box) (Functor_7));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[31])));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[29])));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_19));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[24])));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_16));
  }
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) (Var_13));
  }
  Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_10, Var_11);
  {
    Spec_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_goal.should_have_two_terms_infix\'/3"));
    MR_hl_field(1, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 20U));
    MR_hl_field(1, Spec_8, 3) = ((MR_Box) (Context_6));
    MR_hl_field(1, Spec_8, 4) = ((MR_Box) (Pieces_9));
  }
  return Spec_8;
}

static void MR_CALL 
parse_tree__parse_goal__parse_goal_true_fail_7_p_0(
  MR_Word GoalKind_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word * MaybeGoal_12,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20)
{
  MR_Word Goal_14;

  switch (GoalKind_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 46:
      {
        Goal_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Goal_14, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, Goal_14, 1) = ((MR_Box) (Context_10));
      }
      break;
    case (MR_Integer) 45:
      {
        Goal_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Goal_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Goal_14, 1) = ((MR_Box) (Context_10));
      }
      break;
  }
  if ((ArgTerms_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MaybeGoal_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_14));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  else
  {
    MR_String Functor_17;
    MR_Word Spec_18;
    MR_Word Var_22;
    MR_Word Pieces_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word Var_31;
    MR_Word Var_32;

    parse_tree__parse_goal__string_goal_kind_2_p_1(&Functor_17, GoalKind_8);
    Var_25 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_11);
    {
      Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_32, 1) = ((MR_Box) (Functor_17));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[149])));
    }
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[24])));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_28));
    }
    Pieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, Var_26);
    {
      Spec_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_18, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_goal.should_have_no_args\'/3"));
      MR_hl_field(1, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_18, 3) = ((MR_Box) (Context_10));
      MR_hl_field(1, Spec_18, 4) = ((MR_Box) (Pieces_24));
    }
    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (Spec_18));
      MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeGoal_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_22));
    }
  }
  *STATE_VARIABLE_VarSet_20 = STATE_VARIABLE_VarSet_0_19;
}

static void MR_CALL 
parse_tree__parse_goal__parse_one_plain_or_dot_var_5_p_0(
  MR_Word PSDCVars_6,
  MR_Word Goal_7,
  MR_Word ContextPieces_8,
  MR_String ConstructName_9,
  MR_Word * MaybePODVar_10)
{
  MR_bool succeeded;
  MR_Word PlainVars_11 = ((MR_Word) ((MR_hl_field(0, PSDCVars_6, (MR_Integer) 0))));
  MR_Word StateVars_12 = ((MR_Word) ((MR_hl_field(0, PSDCVars_6, (MR_Integer) 1))));
  MR_Word DotVars_13 = ((MR_Word) ((MR_hl_field(0, PSDCVars_6, (MR_Integer) 2))));
  MR_Word ColonVars_14 = ((MR_Word) ((MR_hl_field(0, PSDCVars_6, (MR_Integer) 3))));
  MR_Word Context_15;
  MR_Word MaybeStateVars_16;
  MR_Word MaybeColonVars_21;
  MR_Word MaybeMaybePlainVar_26;
  MR_Word MaybeMaybeDotVar_33;
  MR_Word MaybePlainVar_42;
  MR_Word MaybeDotVar_43;

  Context_15 = parse_tree__prog_item__get_goal_context_1_f_0(Goal_7);
  if ((StateVars_12 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeStateVars_16 = (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_3[4]));
  else
  {
    MR_Word StatePieces_19;
    MR_Word StateSpec_20;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_67;

    Var_52 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
    {
      Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_57, 1) = ((MR_Box) (ConstructName_9));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[154])));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[152])));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
    }
    StatePieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_52, Var_53);
    {
      StateSpec_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, StateSpec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_one_plain_or_dot_var\'/5"));
      MR_hl_field(1, StateSpec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, StateSpec_20, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, StateSpec_20, 3) = ((MR_Box) (Context_15));
      MR_hl_field(1, StateSpec_20, 4) = ((MR_Box) (StatePieces_19));
    }
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (StateSpec_20));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MaybeStateVars_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MaybeStateVars_16, 0) = ((MR_Box) (Var_67));
    }
  }
  if ((ColonVars_14 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeColonVars_21 = (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_3[4]));
  else
  {
    MR_Word ColonPieces_24;
    MR_Word ColonSpec_25;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_88;

    Var_70 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
    {
      Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_75, 1) = ((MR_Box) (ConstructName_9));
    }
    {
      Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
      MR_hl_field(1, Var_74, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[158])));
    }
    {
      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_71, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[152])));
      MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_74));
    }
    ColonPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_70, Var_71);
    {
      ColonSpec_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ColonSpec_25, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_one_plain_or_dot_var\'/5"));
      MR_hl_field(1, ColonSpec_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, ColonSpec_25, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, ColonSpec_25, 3) = ((MR_Box) (Context_15));
      MR_hl_field(1, ColonSpec_25, 4) = ((MR_Box) (ColonPieces_24));
    }
    {
      Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_88, 0) = ((MR_Box) (ColonSpec_25));
      MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MaybeColonVars_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MaybeColonVars_21, 0) = ((MR_Box) (Var_88));
    }
  }
  if ((PlainVars_11 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeMaybePlainVar_26 = (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_3[5]));
  else
  {
    MR_Word Var_185 = ((MR_Word) ((MR_hl_field(1, PlainVars_11, (MR_Integer) 1))));
    MR_Word Var_186 = ((MR_Word) ((MR_hl_field(1, PlainVars_11, (MR_Integer) 0))));

    if ((Var_185 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_92;

      {
        Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_186));
      }
      {
        MaybeMaybePlainVar_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeMaybePlainVar_26, 0) = ((MR_Box) (Var_92));
      }
    }
    else
    {
      MR_Word PlainPieces_31;
      MR_Word PlainSpec_32;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_109;

      Var_94 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
      {
        Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_99, 1) = ((MR_Box) (ConstructName_9));
      }
      {
        Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
        MR_hl_field(1, Var_98, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[160])));
      }
      {
        Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_95, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[152])));
        MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_98));
      }
      PlainPieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_94, Var_95);
      {
        PlainSpec_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, PlainSpec_32, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_one_plain_or_dot_var\'/5"));
        MR_hl_field(1, PlainSpec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, PlainSpec_32, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, PlainSpec_32, 3) = ((MR_Box) (Context_15));
        MR_hl_field(1, PlainSpec_32, 4) = ((MR_Box) (PlainPieces_31));
      }
      {
        Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_109, 0) = ((MR_Box) (PlainSpec_32));
        MR_hl_field(1, Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeMaybePlainVar_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeMaybePlainVar_26, 0) = ((MR_Box) (Var_109));
      }
    }
  }
  if ((DotVars_13 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeMaybeDotVar_33 = (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_3[5]));
  else
  {
    MR_Word Var_187 = ((MR_Word) ((MR_hl_field(1, DotVars_13, (MR_Integer) 1))));
    MR_Word Var_188 = ((MR_Word) ((MR_hl_field(1, DotVars_13, (MR_Integer) 0))));

    if ((Var_187 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_113;

      {
        Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_113, 0) = ((MR_Box) (Var_188));
      }
      {
        MaybeMaybeDotVar_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeMaybeDotVar_33, 0) = ((MR_Box) (Var_113));
      }
    }
    else
    {
      MR_Word DotPieces_38;
      MR_Word DotSpec_39;
      MR_Word Var_115;
      MR_Word Var_116;
      MR_Word Var_119;
      MR_Word Var_120;
      MR_Word Var_130;

      Var_115 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
      {
        Var_120 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_120, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_120, 1) = ((MR_Box) (ConstructName_9));
      }
      {
        Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_119, 0) = ((MR_Box) (Var_120));
        MR_hl_field(1, Var_119, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[160])));
      }
      {
        Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_116, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[152])));
        MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_119));
      }
      DotPieces_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_115, Var_116);
      {
        DotSpec_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, DotSpec_39, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_one_plain_or_dot_var\'/5"));
        MR_hl_field(1, DotSpec_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, DotSpec_39, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, DotSpec_39, 3) = ((MR_Box) (Context_15));
        MR_hl_field(1, DotSpec_39, 4) = ((MR_Box) (DotPieces_38));
      }
      {
        Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_130, 0) = ((MR_Box) (DotSpec_39));
        MR_hl_field(1, Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeMaybeDotVar_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeMaybeDotVar_33, 0) = ((MR_Box) (Var_130));
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
        MaybePlainVar_42 = ((MR_Word) ((MR_hl_field(1, MaybeMaybePlainVar_26, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeMaybeDotVar_33)) == (MR_Integer) 1);
        if (succeeded)
          MaybeDotVar_43 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeDotVar_33, (MR_Integer) 0))));
      }
    }
  }
  if (succeeded)
    if ((MaybePlainVar_42 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((MaybeDotVar_43 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_44;
        MR_Word Spec_45;
        MR_Word Var_132;
        MR_Word Var_133;
        MR_Word Var_136;
        MR_Word Var_137;
        MR_Word Var_147;

        Var_132 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
        {
          Var_137 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_137, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_137, 1) = ((MR_Box) (ConstructName_9));
        }
        {
          Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_136, 0) = ((MR_Box) (Var_137));
          MR_hl_field(1, Var_136, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[162])));
        }
        {
          Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_133, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[152])));
          MR_hl_field(1, Var_133, 1) = ((MR_Box) (Var_136));
        }
        Pieces_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_132, Var_133);
        {
          Spec_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_45, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_one_plain_or_dot_var\'/5"));
          MR_hl_field(1, Spec_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_45, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(1, Spec_45, 3) = ((MR_Box) (Context_15));
          MR_hl_field(1, Spec_45, 4) = ((MR_Box) (Pieces_44));
        }
        {
          Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_147, 0) = ((MR_Box) (Spec_45));
          MR_hl_field(1, Var_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybePODVar_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_147));
        }
      }
      else
      {
        MR_Word DotVar_47 = ((MR_Word) ((MR_hl_field(1, MaybeDotVar_43, (MR_Integer) 0))));
        MR_Word Var_150;

        {
          Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_150, 0) = ((MR_Box) (DotVar_47));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePODVar_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_150));
        }
      }
    else
    {
      MR_Word Var_189 = ((MR_Word) ((MR_hl_field(1, MaybePlainVar_42, (MR_Integer) 0))));

      if ((MaybeDotVar_43 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_149;

        {
          Var_149 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_149, 0) = ((MR_Box) (Var_189));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePODVar_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_149));
        }
      }
      else
      {
        MR_Word Var_151;
        MR_Word Var_152;
        MR_Word Var_155;
        MR_Word Var_156;
        MR_Word Var_166;
        MR_Word Pieces_174;
        MR_Word Spec_175;

        Var_151 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
        {
          Var_156 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_156, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_156, 1) = ((MR_Box) (ConstructName_9));
        }
        {
          Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_155, 0) = ((MR_Box) (Var_156));
          MR_hl_field(1, Var_155, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[160])));
        }
        {
          Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_152, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[152])));
          MR_hl_field(1, Var_152, 1) = ((MR_Box) (Var_155));
        }
        Pieces_174 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_151, Var_152);
        {
          Spec_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_175, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_one_plain_or_dot_var\'/5"));
          MR_hl_field(1, Spec_175, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_175, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(1, Spec_175, 3) = ((MR_Box) (Context_15));
          MR_hl_field(1, Spec_175, 4) = ((MR_Box) (Pieces_174));
        }
        {
          Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_166, 0) = ((MR_Box) (Spec_175));
          MR_hl_field(1, Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybePODVar_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_166));
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
    Var_172 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[11]), MaybeMaybePlainVar_26);
    Var_173 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[11]), MaybeMaybeDotVar_33);
    Var_171 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_172, Var_173);
    Var_169 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_170, Var_171);
    Specs_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_168, Var_169);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybePODVar_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_50));
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_111_109_105_99_95_112_97_114_97_109_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word Term_6,
  MR_Word VarSet_7,
  MR_Word * MaybeComponentsContexts_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0);
  MR_Word Var_24;
  MR_String Var_25;
  MR_Word Var_26;

  if (succeeded)
  {
    Var_24 = ((MR_Word) ((MR_hl_field(0, Term_6, (MR_Integer) 0))));
    Var_26 = ((MR_Word) ((MR_hl_field(0, Term_6, (MR_Integer) 1))));
    succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_25 = ((MR_String) ((MR_hl_field(0, Var_24, (MR_Integer) 0))));
        succeeded = (strcmp(Var_25, (MR_String) "[]") == 0);
      }
    }
  }
  if (succeeded)
    *MaybeComponentsContexts_8 = (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_3[8]));
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
      Var_28 = ((MR_Word) ((MR_hl_field(0, Term_6, (MR_Integer) 0))));
      Var_30 = ((MR_Word) ((MR_hl_field(0, Term_6, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_29 = ((MR_String) ((MR_hl_field(0, Var_28, (MR_Integer) 0))));
        succeeded = (strcmp(Var_29, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_30, (MR_Integer) 0))));
            Var_31 = ((MR_Word) ((MR_hl_field(1, Var_30, (MR_Integer) 1))));
            succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TailTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_31, (MR_Integer) 0))));
              Var_32 = ((MR_Word) ((MR_hl_field(1, Var_31, (MR_Integer) 1))));
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
        HeadComponent_15 = ((MR_Word) ((MR_hl_field(1, MaybeHeadComponent_13, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeTailComponentsContexts_14)) == (MR_Integer) 1);
        if (succeeded)
          TailComponentsContexts_16 = ((MR_Word) ((MR_hl_field(1, MaybeTailComponentsContexts_14, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word Var_33;

        {
          Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_33, 0) = ((MR_Box) (HeadComponent_15));
          MR_hl_field(1, Var_33, 1) = ((MR_Box) (TailComponentsContexts_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeComponentsContexts_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_33));
        }
      }
      else
      {
        MR_Word Specs_17;
        MR_Word Var_34;
        MR_Word Var_35;

        Var_34 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_2[1]), MaybeHeadComponent_13);
        Var_35 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[7]), MaybeTailComponentsContexts_14);
        Specs_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_34, Var_35);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeComponentsContexts_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_17));
        }
      }
    }
    else
    if (((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0))
    {
      MR_Word TermContext_20 = ((MR_Word) ((MR_hl_field(0, Term_6, (MR_Integer) 2))));
      MR_Word Spec_22;
      MR_Word Var_44;

      {
        Spec_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_params\'/4"));
        MR_hl_field(1, Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_22, 3) = ((MR_Box) (TermContext_20));
        MR_hl_field(1, Spec_22, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[341])));
      }
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (Spec_22));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeComponentsContexts_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_44));
      }
    }
    else
    {
      MR_Word Var_54;
      MR_Word TermContext_56 = ((MR_Word) ((MR_hl_field(1, Term_6, (MR_Integer) 1))));
      MR_Word Spec_58;

      {
        Spec_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_58, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_params\'/4"));
        MR_hl_field(1, Spec_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_58, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_58, 3) = ((MR_Box) (TermContext_56));
        MR_hl_field(1, Spec_58, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[343])));
      }
      {
        Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_54, 0) = ((MR_Box) (Spec_58));
        MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeComponentsContexts_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_54));
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
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_120;

  parse_tree__parse_goal__IntroducedFrom__pred__parse_atomic_component__2959__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_120);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_120));
}

static void MR_CALL 
parse_tree__parse_goal__parse_atomic_component_4_p_0(
  MR_Word ErrorTerm_5,
  MR_Word Term_6,
  MR_Word VarSet_7,
  MR_Word * MaybeComponentContext_8)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0))
  {
    MR_Word Functor_9 = ((MR_Word) ((MR_hl_field(0, Term_6, (MR_Integer) 0))));
    MR_Word SubTerms_10 = ((MR_Word) ((MR_hl_field(0, Term_6, (MR_Integer) 1))));
    MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, Term_6, (MR_Integer) 2))));
    MR_String Atom_12;

    succeeded = ((MR_tag((MR_Word) Functor_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Atom_12 = ((MR_String) ((MR_hl_field(0, Functor_9, (MR_Integer) 0))));
      succeeded = (strcmp(Atom_12, (MR_String) "outer") == 0);
      if (succeeded)
      {
        MR_Word MaybeComponentSubTerm_13;

        parse_tree__parse_goal__parse_atomic_subterm_4_p_0(Atom_12, ErrorTerm_5, Term_6, &MaybeComponentSubTerm_13);
        if (((MR_tag((MR_Word) MaybeComponentSubTerm_13)) == (MR_Integer) 0))
          *MaybeComponentContext_8 = (MR_Word) (MaybeComponentSubTerm_13);
        else
        {
          MR_Word CompTerm_14 = ((MR_Word) ((MR_hl_field(1, MaybeComponentSubTerm_13, (MR_Integer) 0))));
          MR_Word Component_15;
          MR_Word Var_26;

          {
            Component_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Component_15, 0) = ((MR_Box) (CompTerm_14));
          }
          {
            Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_26, 0) = ((MR_Box) (Component_15));
            MR_hl_field(0, Var_26, 1) = ((MR_Box) (Context_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeComponentContext_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_26));
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
            MR_Word Var_27;
            MR_Word CompTerm_87 = ((MR_Word) ((MR_hl_field(1, MaybeComponentSubTerm_93, (MR_Integer) 0))));
            MR_Word Component_88;

            {
              Component_88 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Component_88, 0) = ((MR_Box) (CompTerm_87));
            }
            {
              Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_27, 0) = ((MR_Box) (Component_88));
              MR_hl_field(0, Var_27, 1) = ((MR_Box) (Context_11));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeComponentContext_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_27));
            }
          }
        }
        else
        {
          succeeded = (strcmp(Atom_12, (MR_String) "vars") == 0);
          if (succeeded)
          {
            MR_Word SubTerm_17;
            MR_Word Var_28;

            succeeded = (SubTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SubTerm_17 = ((MR_Word) ((MR_hl_field(1, SubTerms_10, (MR_Integer) 0))));
              Var_28 = ((MR_Word) ((MR_hl_field(1, SubTerms_10, (MR_Integer) 1))));
              succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
            {
              MR_Word ContextPieces_18;
              MR_Word MaybeVars_19;

              ContextPieces_18 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[358])));
              parse_tree__parse_vars__parse_possibly_repeated_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubTerm_17, VarSet_7, ContextPieces_18, &MaybeVars_19);
              if (((MR_tag((MR_Word) MaybeVars_19)) == (MR_Integer) 0))
                *MaybeComponentContext_8 = (MR_Word) (MaybeVars_19);
              else
              {
                MR_Word Vars_20 = ((MR_Word) ((MR_hl_field(1, MaybeVars_19, (MR_Integer) 0))));
                MR_Word ProgVars_21;
                MR_Word Var_40;
                MR_Word Component_97;

                mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[4]), Vars_20, &ProgVars_21);
                {
                  Component_97 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Component_97, 0) = ((MR_Box) (ProgVars_21));
                }
                {
                  Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_40, 0) = ((MR_Box) (Component_97));
                  MR_hl_field(0, Var_40, 1) = ((MR_Box) (Context_11));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeComponentContext_8 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_40));
                }
              }
            }
            else
            {
              MR_Word Pieces_22;
              MR_Word Spec_23;
              MR_Word Var_41;
              MR_Word Var_54;

              {
                Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_41, 1) = ((MR_Box) (Atom_12));
              }
              {
                Pieces_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_22, 0) = ((MR_Box) (Var_41));
                MR_hl_field(1, Pieces_22, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[362])));
              }
              {
                Spec_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_component\'/4"));
                MR_hl_field(1, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(1, Spec_23, 3) = ((MR_Box) (Context_11));
                MR_hl_field(1, Spec_23, 4) = ((MR_Box) (Pieces_22));
              }
              {
                Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_54, 0) = ((MR_Box) (Spec_23));
                MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeComponentContext_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_54));
              }
            }
          }
          else
          {
            MR_Word Var_64;
            MR_Word Spec_106;

            {
              Spec_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_106, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_component\'/4"));
              MR_hl_field(1, Spec_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_106, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(1, Spec_106, 3) = ((MR_Box) (Context_11));
              MR_hl_field(1, Spec_106, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[341])));
            }
            {
              Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_64, 0) = ((MR_Box) (Spec_106));
              MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeComponentContext_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_64));
            }
          }
        }
      }
    }
    else
    {
      MR_Word Var_74;
      MR_Word Spec_114;

      {
        Spec_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_114, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_component\'/4"));
        MR_hl_field(1, Spec_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_114, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_114, 3) = ((MR_Box) (Context_11));
        MR_hl_field(1, Spec_114, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[341])));
      }
      {
        Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_74, 0) = ((MR_Box) (Spec_114));
        MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeComponentContext_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_74));
      }
    }
  }
  else
  {
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Spec_116;

    Var_84 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_5);
    {
      Spec_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_116, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_component\'/4"));
      MR_hl_field(1, Spec_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_116, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_116, 3) = ((MR_Box) (Var_84));
      MR_hl_field(1, Spec_116, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[343])));
    }
    {
      Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_85, 0) = ((MR_Box) (Spec_116));
      MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeComponentContext_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_85));
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
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0))
  {
    MR_Word SubTerms_10 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 1))));
    MR_Word TermContext_11 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 2))));
    MR_Word ComponentState_12;
    MR_Word Var_56;
    MR_Word Term_55;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_String Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;

    succeeded = (SubTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Term_55 = ((MR_Word) ((MR_hl_field(1, SubTerms_10, (MR_Integer) 0))));
      Var_68 = ((MR_Word) ((MR_hl_field(1, SubTerms_10, (MR_Integer) 1))));
      succeeded = (Var_68 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Term_55)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_69 = ((MR_Word) ((MR_hl_field(0, Term_55, (MR_Integer) 0))));
          Var_71 = ((MR_Word) ((MR_hl_field(0, Term_55, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_69)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_70 = ((MR_String) ((MR_hl_field(0, Var_69, (MR_Integer) 0))));
            succeeded = (strcmp(Var_70, (MR_String) "!") == 0);
            if (succeeded)
            {
              succeeded = (Var_71 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_72 = ((MR_Word) ((MR_hl_field(1, Var_71, (MR_Integer) 0))));
                Var_73 = ((MR_Word) ((MR_hl_field(1, Var_71, (MR_Integer) 1))));
                succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_72)) == (MR_Integer) 1);
                  if (succeeded)
                    Var_56 = ((MR_Word) ((MR_hl_field(1, Var_72, (MR_Integer) 0))));
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word ProgVar_59;

      mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_56, &ProgVar_59);
      {
        ComponentState_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ComponentState_12, 0) = ((MR_Box) (ProgVar_59));
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeCtorInfo_28_78;
      MR_Word TypeCtorInfo_29_79;
      MR_Word TermA_60;
      MR_Word TermB_61;
      MR_Word VarA_62;
      MR_Word VarB_64;
      MR_Word ProgVarA_66;
      MR_Word ProgVarB_67;
      MR_Word Var_74;
      MR_Word Var_75;

      succeeded = (SubTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TermA_60 = ((MR_Word) ((MR_hl_field(1, SubTerms_10, (MR_Integer) 0))));
        Var_74 = ((MR_Word) ((MR_hl_field(1, SubTerms_10, (MR_Integer) 1))));
        succeeded = (Var_74 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TermB_61 = ((MR_Word) ((MR_hl_field(1, Var_74, (MR_Integer) 0))));
          Var_75 = ((MR_Word) ((MR_hl_field(1, Var_74, (MR_Integer) 1))));
          succeeded = (Var_75 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) TermA_60)) == (MR_Integer) 1);
            if (succeeded)
            {
              VarA_62 = ((MR_Word) ((MR_hl_field(1, TermA_60, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) TermB_61)) == (MR_Integer) 1);
              if (succeeded)
              {
                VarB_64 = ((MR_Word) ((MR_hl_field(1, TermB_61, (MR_Integer) 0))));
                TypeCtorInfo_28_78 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                TypeCtorInfo_29_79 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                mercury__term__coerce_var_2_p_0(TypeCtorInfo_28_78, TypeCtorInfo_29_79, VarA_62, &ProgVarA_66);
                mercury__term__coerce_var_2_p_0(TypeCtorInfo_28_78, TypeCtorInfo_29_79, VarB_64, &ProgVarB_67);
                {
                  ComponentState_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ComponentState_12, 0) = ((MR_Box) (ProgVarA_66));
                  MR_hl_field(1, ComponentState_12, 1) = ((MR_Box) (ProgVarB_67));
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
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeComponentState_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ComponentState_12));
      }
    else
    {
      MR_Word Pieces_13;
      MR_Word Spec_14;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_36;

      {
        Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_20, 1) = ((MR_Box) (Name_5));
      }
      {
        Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
        MR_hl_field(1, Var_19, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[348])));
      }
      {
        Pieces_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_13, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[24])));
        MR_hl_field(1, Pieces_13, 1) = ((MR_Box) (Var_19));
      }
      {
        Spec_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_subterm\'/4"));
        MR_hl_field(1, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_14, 3) = ((MR_Box) (TermContext_11));
        MR_hl_field(1, Spec_14, 4) = ((MR_Box) (Pieces_13));
      }
      {
        Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_36, 0) = ((MR_Box) (Spec_14));
        MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeComponentState_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_36));
      }
    }
  }
  else
  {
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Spec_53;

    Var_49 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_6);
    {
      Spec_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_53, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_atomic_subterm\'/4"));
      MR_hl_field(1, Spec_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_53, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_53, 3) = ((MR_Box) (Var_49));
      MR_hl_field(1, Spec_53, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[352])));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (Spec_53));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeComponentState_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_50));
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
            MR_Word Var_62;
            MR_Word Spec_67;

            {
              Spec_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_67, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.convert_atomic_params_2\'/7"));
              MR_hl_field(1, Spec_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_67, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(1, Spec_67, 3) = ((MR_Box) (Context_1));
              MR_hl_field(1, Spec_67, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[368])));
            }
            {
              Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_62, 0) = ((MR_Box) (Spec_67));
              MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeParams_7 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_62));
            }
          }
          else
          {
            MR_Word Var_46;
            MR_Word Spec_65;

            {
              Spec_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_65, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.convert_atomic_params_2\'/7"));
              MR_hl_field(1, Spec_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_65, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(1, Spec_65, 3) = ((MR_Box) (Context_1));
              MR_hl_field(1, Spec_65, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[371])));
            }
            {
              Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_46, 0) = ((MR_Box) (Spec_65));
              MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeParams_7 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_46));
            }
          }
        else
        {
          MR_Word Var_137 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

          if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Spec_18;
            MR_Word Var_33;

            {
              Spec_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.convert_atomic_params_2\'/7"));
              MR_hl_field(1, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(1, Spec_18, 3) = ((MR_Box) (Context_1));
              MR_hl_field(1, Spec_18, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[374])));
            }
            {
              Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_33, 0) = ((MR_Box) (Spec_18));
              MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeParams_7 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_33));
            }
          }
          else
          {
            MR_Word Inner_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *MaybeParams_7 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_137));
              MR_hl_field(1, base, 1) = ((MR_Box) (Inner_15));
              MR_hl_field(1, base, 2) = ((MR_Box) (HeadVar__5_5));
            }
          }
        }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeParams_7 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (HeadVar__6_6));
        }
    else
    {
      MR_Word Component_69;
      MR_Word CompContext_70;
      MR_Word ComponentsContexts_71 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_89 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_MaybeOuter_90_90;
      MR_Word STATE_VARIABLE_Specs_99_99;
      MR_Word STATE_VARIABLE_MaybeInner_102_102;
      MR_Word STATE_VARIABLE_MaybeVars_114_114;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_HeadVar__6_6;

      Component_69 = ((MR_Word) ((MR_hl_field(0, Var_89, (MR_Integer) 0))));
      CompContext_70 = ((MR_Word) ((MR_hl_field(0, Var_89, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) Component_69)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Inner_81 = ((MR_Word) ((MR_hl_field(0, Component_69, (MR_Integer) 0))));

            if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                STATE_VARIABLE_MaybeInner_102_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_MaybeInner_102_102, 0) = ((MR_Box) (Inner_81));
              }
              STATE_VARIABLE_Specs_99_99 = HeadVar__6_6;
            }
            else
            {
              MR_Word Var_112;
              MR_Word Spec_127;

              {
                Spec_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_127, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.convert_atomic_params_2\'/7"));
                MR_hl_field(1, Spec_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_127, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(1, Spec_127, 3) = ((MR_Box) (CompContext_70));
                MR_hl_field(1, Spec_127, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[376])));
              }
              {
                Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_112, 0) = ((MR_Box) (Spec_127));
                MR_hl_field(1, Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_Specs_99_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), HeadVar__6_6, Var_112);
              STATE_VARIABLE_MaybeInner_102_102 = HeadVar__4_4;
            }
            STATE_VARIABLE_MaybeOuter_90_90 = HeadVar__3_3;
            STATE_VARIABLE_MaybeVars_114_114 = HeadVar__5_5;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Outer_77 = ((MR_Word) ((MR_hl_field(1, Component_69, (MR_Integer) 0))));

            if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                STATE_VARIABLE_MaybeOuter_90_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_MaybeOuter_90_90, 0) = ((MR_Box) (Outer_77));
              }
              STATE_VARIABLE_Specs_99_99 = HeadVar__6_6;
            }
            else
            {
              MR_Word Spec_80;
              MR_Word Var_100;

              {
                Spec_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_80, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.convert_atomic_params_2\'/7"));
                MR_hl_field(1, Spec_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_80, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(1, Spec_80, 3) = ((MR_Box) (CompContext_70));
                MR_hl_field(1, Spec_80, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[378])));
              }
              {
                Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_100, 0) = ((MR_Box) (Spec_80));
                MR_hl_field(1, Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_Specs_99_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), HeadVar__6_6, Var_100);
              STATE_VARIABLE_MaybeOuter_90_90 = HeadVar__3_3;
            }
            STATE_VARIABLE_MaybeInner_102_102 = HeadVar__4_4;
            STATE_VARIABLE_MaybeVars_114_114 = HeadVar__5_5;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Vars_83 = ((MR_Word) ((MR_hl_field(2, Component_69, (MR_Integer) 0))));

            if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                STATE_VARIABLE_MaybeVars_114_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_MaybeVars_114_114, 0) = ((MR_Box) (Vars_83));
              }
              STATE_VARIABLE_Specs_99_99 = HeadVar__6_6;
            }
            else
            {
              MR_Word Var_124;
              MR_Word Spec_133;

              {
                Spec_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_133, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.convert_atomic_params_2\'/7"));
                MR_hl_field(1, Spec_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_133, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(1, Spec_133, 3) = ((MR_Box) (CompContext_70));
                MR_hl_field(1, Spec_133, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[380])));
              }
              {
                Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_124, 0) = ((MR_Box) (Spec_133));
                MR_hl_field(1, Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_Specs_99_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), HeadVar__6_6, Var_124);
              STATE_VARIABLE_MaybeVars_114_114 = HeadVar__5_5;
            }
            STATE_VARIABLE_MaybeOuter_90_90 = HeadVar__3_3;
            STATE_VARIABLE_MaybeInner_102_102 = HeadVar__4_4;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ComponentsContexts_71;
      next_value_of_HeadVar__3_3 = STATE_VARIABLE_MaybeOuter_90_90;
      next_value_of_HeadVar__4_4 = STATE_VARIABLE_MaybeInner_102_102;
      next_value_of_HeadVar__5_5 = STATE_VARIABLE_MaybeVars_114_114;
      next_value_of_HeadVar__6_6 = STATE_VARIABLE_Specs_99_99;
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
  MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
  MR_Word Var_21;
  MR_String Var_22;
  MR_Word Var_23;

  if (succeeded)
  {
    Var_21 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 0))));
    Var_23 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 1))));
    succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_22 = ((MR_String) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
        succeeded = (strcmp(Var_22, (MR_String) "[]") == 0);
      }
    }
  }
  if (succeeded)
    *MaybeComponentsContexts_8 = (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_3[6]));
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
      Var_25 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 0))));
      Var_27 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_26 = ((MR_String) ((MR_hl_field(0, Var_25, (MR_Integer) 0))));
        succeeded = (strcmp(Var_26, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 0))));
            Var_28 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 1))));
            succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TailTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_28, (MR_Integer) 0))));
              Var_29 = ((MR_Word) ((MR_hl_field(1, Var_28, (MR_Integer) 1))));
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
        HeadComponentContext_15 = ((MR_Word) ((MR_hl_field(1, MaybeHeadComponentContext_13, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeTailComponentsContexts_14)) == (MR_Integer) 1);
        if (succeeded)
          TailComponentsContexts_16 = ((MR_Word) ((MR_hl_field(1, MaybeTailComponentsContexts_14, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word Var_30;

        {
          Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_30, 0) = ((MR_Box) (HeadComponentContext_15));
          MR_hl_field(1, Var_30, 1) = ((MR_Box) (TailComponentsContexts_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeComponentsContexts_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_30));
        }
      }
      else
      {
        MR_Word Specs_17;
        MR_Word Var_31;
        MR_Word Var_32;

        Var_31 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_2[0]), MaybeHeadComponentContext_13);
        Var_32 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[6]), MaybeTailComponentsContexts_14);
        Specs_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_31, Var_32);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeComponentsContexts_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_17));
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
        Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_36, 1) = ((MR_Box) (TermStr_18));
      }
      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[48])));
      }
      {
        Pieces_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_19, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[183])));
        MR_hl_field(1, Pieces_19, 1) = ((MR_Box) (Var_35));
      }
      Var_46 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_params\'/4"));
        MR_hl_field(1, Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_20, 3) = ((MR_Box) (Var_46));
        MR_hl_field(1, Spec_20, 4) = ((MR_Box) (Pieces_19));
      }
      {
        Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_47, 0) = ((MR_Box) (Spec_20));
        MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeComponentsContexts_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_47));
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
  MR_Box closure = closure_arg;
  MR_Word conv1_MaybeRuntime_6;

  parse_tree__parse_goal__parse_trace_runtime_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_MaybeRuntime_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_MaybeRuntime_6));
}

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_99_111_109_112_111_110_101_110_116_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeCompiletime_6;

  parse_tree__parse_goal__parse_trace_compiletime_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeCompiletime_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeCompiletime_6));
}

static void MR_CALL 
parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_99_111_109_112_111_110_101_110_116_95_95_91_50_93_95_48_4_p_0(
  MR_Word VarSet_5,
  MR_Word Term_7,
  MR_Word * MaybeComponentContext_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
  MR_Word SubTerms_10;
  MR_Word Context_11;
  MR_String Atom_12;
  MR_Word Functor_9;

  if (succeeded)
  {
    Functor_9 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 0))));
    SubTerms_10 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 1))));
    Context_11 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Functor_9)) == (MR_Integer) 0);
    if (succeeded)
      Atom_12 = ((MR_String) ((MR_hl_field(0, Functor_9, (MR_Integer) 0))));
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
        SubTerm_13 = ((MR_Word) ((MR_hl_field(1, SubTerms_10, (MR_Integer) 0))));
        Var_42 = ((MR_Word) ((MR_hl_field(1, SubTerms_10, (MR_Integer) 1))));
        succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Word MaybeCompileTime_14;
        MR_Word Var_43;

        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_43, 0) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[1]));
          MR_hl_field(0, Var_43, 1) = ((MR_Box) (parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_99_111_109_112_111_110_101_110_116_95_95_91_50_93_95_48_4_p_0_1));
          MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_43, 3) = ((MR_Box) (VarSet_5));
        }
        parse_tree__parse_goal__parse_trace_tree_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_compiletime_0), Var_43, SubTerm_13, &MaybeCompileTime_14);
        if (((MR_tag((MR_Word) MaybeCompileTime_14)) == (MR_Integer) 0))
          *MaybeComponentContext_8 = (MR_Word) (MaybeCompileTime_14);
        else
        {
          MR_Word CompileTime_15 = ((MR_Word) ((MR_hl_field(1, MaybeCompileTime_14, (MR_Integer) 0))));
          MR_Word Component_16;
          MR_Word Var_44;

          {
            Component_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Component_16, 0) = ((MR_Box) (CompileTime_15));
          }
          {
            Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_44, 0) = ((MR_Box) (Component_16));
            MR_hl_field(0, Var_44, 1) = ((MR_Box) (Context_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeComponentContext_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_44));
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
          Var_48 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_48, 0) = ((MR_Box) (Atom_12));
        }
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[189])));
        }
        {
          Pieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_18, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[24])));
          MR_hl_field(1, Pieces_18, 1) = ((MR_Box) (Var_47));
        }
        {
          Spec_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component\'/4"));
          MR_hl_field(1, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(1, Spec_19, 3) = ((MR_Box) (Context_11));
          MR_hl_field(1, Spec_19, 4) = ((MR_Box) (Pieces_18));
        }
        {
          Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_64, 0) = ((MR_Box) (Spec_19));
          MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeComponentContext_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_64));
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
          SubTerm_244 = ((MR_Word) ((MR_hl_field(1, SubTerms_10, (MR_Integer) 0))));
          Var_66 = ((MR_Word) ((MR_hl_field(1, SubTerms_10, (MR_Integer) 1))));
          succeeded = (Var_66 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          MR_Word MaybeRunTime_20;
          MR_Word Var_67;

          {
            Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_67, 0) = ((MR_Box) (&parse_tree__parse_goal_scalar_common_6[2]));
            MR_hl_field(0, Var_67, 1) = ((MR_Box) (parse_tree__parse_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_114_97_99_101_95_99_111_109_112_111_110_101_110_116_95_95_91_50_93_95_48_4_p_0_2));
            MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_67, 3) = ((MR_Box) (VarSet_5));
          }
          parse_tree__parse_goal__parse_trace_tree_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0), Var_67, SubTerm_244, &MaybeRunTime_20);
          if (((MR_tag((MR_Word) MaybeRunTime_20)) == (MR_Integer) 0))
            *MaybeComponentContext_8 = (MR_Word) (MaybeRunTime_20);
          else
          {
            MR_Word RunTime_21 = ((MR_Word) ((MR_hl_field(1, MaybeRunTime_20, (MR_Integer) 0))));
            MR_Word Var_68;
            MR_Word Component_236;

            {
              Component_236 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Component_236, 0) = ((MR_Box) (RunTime_21));
            }
            {
              Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_68, 0) = ((MR_Box) (Component_236));
              MR_hl_field(0, Var_68, 1) = ((MR_Box) (Context_11));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeComponentContext_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_68));
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
            Var_72 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_72, 0) = ((MR_Box) (Atom_12));
          }
          {
            Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
            MR_hl_field(1, Var_71, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[193])));
          }
          {
            Pieces_242 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_242, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[24])));
            MR_hl_field(1, Pieces_242, 1) = ((MR_Box) (Var_71));
          }
          {
            Spec_243 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_243, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component\'/4"));
            MR_hl_field(1, Spec_243, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_243, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(1, Spec_243, 3) = ((MR_Box) (Context_11));
            MR_hl_field(1, Spec_243, 4) = ((MR_Box) (Pieces_242));
          }
          {
            Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_88, 0) = ((MR_Box) (Spec_243));
            MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeComponentContext_8 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_88));
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
            SubTerm_257 = ((MR_Word) ((MR_hl_field(1, SubTerms_10, (MR_Integer) 0))));
            Var_90 = ((MR_Word) ((MR_hl_field(1, SubTerms_10, (MR_Integer) 1))));
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
              Var_91 = ((MR_Word) ((MR_hl_field(0, SubTerm_257, (MR_Integer) 0))));
              Var_93 = ((MR_Word) ((MR_hl_field(0, SubTerm_257, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_91)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_92 = ((MR_String) ((MR_hl_field(0, Var_91, (MR_Integer) 0))));
                succeeded = (strcmp(Var_92, (MR_String) "!") == 0);
                if (succeeded)
                {
                  succeeded = (Var_93 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_94 = ((MR_Word) ((MR_hl_field(1, Var_93, (MR_Integer) 0))));
                    Var_95 = ((MR_Word) ((MR_hl_field(1, Var_93, (MR_Integer) 1))));
                    succeeded = (Var_95 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_94)) == (MR_Integer) 1);
                      if (succeeded)
                        Var_22 = ((MR_Word) ((MR_hl_field(1, Var_94, (MR_Integer) 0))));
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
                Component_249 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Component_249, 0) = ((MR_Box) (ProgVar_25));
              }
              {
                Var_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_96, 0) = ((MR_Box) (Component_249));
                MR_hl_field(0, Var_96, 1) = ((MR_Box) (Context_11));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeComponentContext_8 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_96));
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
                Var_100 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_100, 0) = ((MR_Box) (Atom_12));
              }
              {
                Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_99, 0) = ((MR_Box) (Var_100));
                MR_hl_field(1, Var_99, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[196])));
              }
              {
                Pieces_250 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_250, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[194])));
                MR_hl_field(1, Pieces_250, 1) = ((MR_Box) (Var_99));
              }
              Var_110 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubTerm_257);
              {
                Spec_251 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_251, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component\'/4"));
                MR_hl_field(1, Spec_251, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_251, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(1, Spec_251, 3) = ((MR_Box) (Var_110));
                MR_hl_field(1, Spec_251, 4) = ((MR_Box) (Pieces_250));
              }
              {
                Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_111, 0) = ((MR_Box) (Spec_251));
                MR_hl_field(1, Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeComponentContext_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_111));
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
              Var_116 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_116, 0) = ((MR_Box) (Atom_12));
            }
            {
              Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_115, 0) = ((MR_Box) (Var_116));
              MR_hl_field(1, Var_115, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[199])));
            }
            {
              Pieces_255 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_255, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[24])));
              MR_hl_field(1, Pieces_255, 1) = ((MR_Box) (Var_115));
            }
            {
              Spec_256 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_256, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component\'/4"));
              MR_hl_field(1, Spec_256, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_256, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(1, Spec_256, 3) = ((MR_Box) (Context_11));
              MR_hl_field(1, Spec_256, 4) = ((MR_Box) (Pieces_255));
            }
            {
              Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_129, 0) = ((MR_Box) (Spec_256));
              MR_hl_field(1, Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeComponentContext_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_129));
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
              SubTermA_26 = ((MR_Word) ((MR_hl_field(1, SubTerms_10, (MR_Integer) 0))));
              Var_131 = ((MR_Word) ((MR_hl_field(1, SubTerms_10, (MR_Integer) 1))));
              succeeded = (Var_131 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SubTermB_27 = ((MR_Word) ((MR_hl_field(1, Var_131, (MR_Integer) 0))));
                Var_132 = ((MR_Word) ((MR_hl_field(1, Var_131, (MR_Integer) 1))));
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
                Var_133 = ((MR_Word) ((MR_hl_field(0, SubTermA_26, (MR_Integer) 0))));
                Var_134 = ((MR_Word) ((MR_hl_field(0, SubTermA_26, (MR_Integer) 1))));
                succeeded = (Var_134 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_133)) == (MR_Integer) 0);
                  if (succeeded)
                    MutableName_28 = ((MR_String) ((MR_hl_field(0, Var_133, (MR_Integer) 0))));
                }
              }
              if (succeeded)
                {
                  MaybeMutable_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeMutable_30, 0) = ((MR_Box) (MutableName_28));
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
                  Var_138 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_138, 0) = ((MR_Box) (Atom_12));
                }
                {
                  Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_137, 0) = ((MR_Box) (Var_138));
                  MR_hl_field(1, Var_137, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[203])));
                }
                {
                  MutablePieces_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MutablePieces_31, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[152])));
                  MR_hl_field(1, MutablePieces_31, 1) = ((MR_Box) (Var_137));
                }
                Var_151 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubTermA_26);
                {
                  MutableSpec_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MutableSpec_32, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component\'/4"));
                  MR_hl_field(1, MutableSpec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, MutableSpec_32, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(1, MutableSpec_32, 3) = ((MR_Box) (Var_151));
                  MR_hl_field(1, MutableSpec_32, 4) = ((MR_Box) (MutablePieces_31));
                }
                {
                  Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_152, 0) = ((MR_Box) (MutableSpec_32));
                  MR_hl_field(1, Var_152, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MaybeMutable_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, MaybeMutable_30, 0) = ((MR_Box) (Var_152));
                }
              }
              succeeded = ((MR_tag((MR_Word) SubTermB_27)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_154 = ((MR_Word) ((MR_hl_field(0, SubTermB_27, (MR_Integer) 0))));
                Var_156 = ((MR_Word) ((MR_hl_field(0, SubTermB_27, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_154)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_155 = ((MR_String) ((MR_hl_field(0, Var_154, (MR_Integer) 0))));
                  succeeded = (strcmp(Var_155, (MR_String) "!") == 0);
                  if (succeeded)
                  {
                    succeeded = (Var_156 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_157 = ((MR_Word) ((MR_hl_field(1, Var_156, (MR_Integer) 0))));
                      Var_158 = ((MR_Word) ((MR_hl_field(1, Var_156, (MR_Integer) 1))));
                      succeeded = (Var_158 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) Var_157)) == (MR_Integer) 1);
                        if (succeeded)
                          Var_261 = ((MR_Word) ((MR_hl_field(1, Var_157, (MR_Integer) 0))));
                      }
                    }
                  }
                }
              }
              if (succeeded)
                {
                  MaybeVar_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeVar_35, 0) = ((MR_Box) (Var_261));
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
                  Var_162 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_162, 0) = ((MR_Box) (Atom_12));
                }
                {
                  Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_161, 0) = ((MR_Box) (Var_162));
                  MR_hl_field(1, Var_161, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[207])));
                }
                {
                  VarPieces_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, VarPieces_36, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[204])));
                  MR_hl_field(1, VarPieces_36, 1) = ((MR_Box) (Var_161));
                }
                Var_175 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubTermB_27);
                {
                  VarSpec_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, VarSpec_37, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component\'/4"));
                  MR_hl_field(1, VarSpec_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(1, VarSpec_37, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(1, VarSpec_37, 3) = ((MR_Box) (Var_175));
                  MR_hl_field(1, VarSpec_37, 4) = ((MR_Box) (VarPieces_36));
                }
                {
                  Var_176 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_176, 0) = ((MR_Box) (VarSpec_37));
                  MR_hl_field(1, Var_176, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MaybeVar_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, MaybeVar_35, 0) = ((MR_Box) (Var_176));
                }
              }
              succeeded = ((MR_tag((MR_Word) MaybeMutable_30)) == (MR_Integer) 1);
              if (succeeded)
              {
                FinalMutable_38 = ((MR_String) ((MR_hl_field(1, MaybeMutable_30, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) MaybeVar_35)) == (MR_Integer) 1);
                if (succeeded)
                  FinalVar_39 = ((MR_Word) ((MR_hl_field(1, MaybeVar_35, (MR_Integer) 0))));
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
                  MR_hl_field(0, MutableVar_40, 0) = ((MR_Box) (FinalMutable_38));
                  MR_hl_field(0, MutableVar_40, 1) = ((MR_Box) (ProgVar_263));
                }
                Component_262 = (MR_Word) ((MR_Word) (MutableVar_40));
                {
                  Var_178 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_178, 0) = ((MR_Box) (Component_262));
                  MR_hl_field(0, Var_178, 1) = ((MR_Box) (Context_11));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeComponentContext_8 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_178));
                }
              }
              else
              {
                MR_Word Var_179;
                MR_Word Var_180;
                MR_Word Specs_264;

                Var_179 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[0]), MaybeVar_35);
                Var_180 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeMutable_30);
                Specs_264 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_179, Var_180);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeComponentContext_8 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Specs_264));
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
                Var_184 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_184, 0) = ((MR_Box) (Atom_12));
              }
              {
                Var_183 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_183, 0) = ((MR_Box) (Var_184));
                MR_hl_field(1, Var_183, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[215])));
              }
              {
                Pieces_272 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_272, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[24])));
                MR_hl_field(1, Pieces_272, 1) = ((MR_Box) (Var_183));
              }
              {
                Spec_273 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_273, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component\'/4"));
                MR_hl_field(1, Spec_273, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_273, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(1, Spec_273, 3) = ((MR_Box) (Context_11));
                MR_hl_field(1, Spec_273, 4) = ((MR_Box) (Pieces_272));
              }
              {
                Var_203 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_203, 0) = ((MR_Box) (Spec_273));
                MR_hl_field(1, Var_203, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeComponentContext_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_203));
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
              Var_208 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_208, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_208, 1) = ((MR_Box) (TermStr_41));
            }
            {
              Var_207 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_207, 0) = ((MR_Box) (Var_208));
              MR_hl_field(1, Var_207, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[48])));
            }
            {
              Pieces_280 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_280, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[183])));
              MR_hl_field(1, Pieces_280, 1) = ((MR_Box) (Var_207));
            }
            {
              Spec_281 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_281, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component\'/4"));
              MR_hl_field(1, Spec_281, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_281, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(1, Spec_281, 3) = ((MR_Box) (Context_11));
              MR_hl_field(1, Spec_281, 4) = ((MR_Box) (Pieces_280));
            }
            {
              Var_218 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_218, 0) = ((MR_Box) (Spec_281));
              MR_hl_field(1, Var_218, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeComponentContext_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_218));
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
      Var_223 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_223, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_223, 1) = ((MR_Box) (TermStr_300));
    }
    {
      Var_222 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_222, 0) = ((MR_Box) (Var_223));
      MR_hl_field(1, Var_222, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[48])));
    }
    {
      Pieces_298 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_298, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[183])));
      MR_hl_field(1, Pieces_298, 1) = ((MR_Box) (Var_222));
    }
    Var_233 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
    {
      Spec_299 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_299, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_trace_component\'/4"));
      MR_hl_field(1, Spec_299, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_299, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_299, 3) = ((MR_Box) (Var_233));
      MR_hl_field(1, Spec_299, 4) = ((MR_Box) (Pieces_298));
    }
    {
      Var_234 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_234, 0) = ((MR_Box) (Spec_299));
      MR_hl_field(1, Var_234, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeComponentContext_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_234));
    }
  }
}

static void MR_CALL 
parse_tree__parse_goal__parse_trace_tree_3_p_0(
  MR_Word TypeInfo_for_T_38,
  MR_Word BaseParser_4,
  MR_Word Term_5,
  MR_Word * MaybeTree_6)
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
    Var_24 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
    Var_25 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
    if (succeeded)
    {
      Atom_7 = ((MR_String) ((MR_hl_field(0, Var_24, (MR_Integer) 0))));
      succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        LTerm_8 = ((MR_Word) ((MR_hl_field(1, Var_25, (MR_Integer) 0))));
        Var_26 = ((MR_Word) ((MR_hl_field(1, Var_25, (MR_Integer) 1))));
        succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          RTerm_9 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 0))));
          Var_27 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 1))));
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

    parse_tree__parse_goal__parse_trace_tree_3_p_0(TypeInfo_for_T_38, BaseParser_4, LTerm_8, &MaybeLExpr_12);
    parse_tree__parse_goal__parse_trace_tree_3_p_0(TypeInfo_for_T_38, BaseParser_4, RTerm_9, &MaybeRExpr_13);
    succeeded = ((MR_tag((MR_Word) MaybeLExpr_12)) == (MR_Integer) 1);
    if (succeeded)
    {
      LExpr_14 = ((MR_Word) ((MR_hl_field(1, MaybeLExpr_12, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeRExpr_13)) == (MR_Integer) 1);
      if (succeeded)
        RExpr_15 = ((MR_Word) ((MR_hl_field(1, MaybeRExpr_13, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word Var_28;

      {
        Var_28 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_28, 0) = (MR_Box) ((MR_Unsigned) (Op_11));
        MR_hl_field(2, Var_28, 1) = ((MR_Box) (LExpr_14));
        MR_hl_field(2, Var_28, 2) = ((MR_Box) (RExpr_15));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeTree_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_28));
      }
    }
    else
    {
      MR_Word TypeInfo_41_41;
      MR_Word Specs_16;
      MR_Word Var_29;
      MR_Word Var_30;

      {
        TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_41_41, 0) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_expr_1));
        MR_hl_field(0, TypeInfo_41_41, 1) = ((MR_Box) (TypeInfo_for_T_38));
      }
      Var_29 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_41_41, (MR_Word) (MaybeLExpr_12));
      Var_30 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_41_41, (MR_Word) (MaybeRExpr_13));
      Specs_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_29, Var_30);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTree_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_16));
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
      Var_31 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
      Var_33 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_32 = ((MR_String) ((MR_hl_field(0, Var_31, (MR_Integer) 0))));
        succeeded = (strcmp(Var_32, (MR_String) "not") == 0);
        if (succeeded)
        {
          succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SubTerm_17 = ((MR_Word) ((MR_hl_field(1, Var_33, (MR_Integer) 0))));
            Var_34 = ((MR_Word) ((MR_hl_field(1, Var_33, (MR_Integer) 1))));
            succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeSubExpr_19;
      MR_Word SubExpr_20;

      parse_tree__parse_goal__parse_trace_tree_3_p_0(TypeInfo_for_T_38, BaseParser_4, SubTerm_17, &MaybeSubExpr_19);
      succeeded = ((MR_tag((MR_Word) MaybeSubExpr_19)) == (MR_Integer) 1);
      if (succeeded)
      {
        SubExpr_20 = ((MR_Word) ((MR_hl_field(1, MaybeSubExpr_19, (MR_Integer) 0))));
        {
          MR_Word Var_35;

          {
            Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_35, 0) = ((MR_Box) (SubExpr_20));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeTree_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_35));
          }
        }
      }
      else
      {
        MR_Word TypeInfo_43_43;
        MR_Word SubSpecs_21;

        {
          TypeInfo_43_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_43_43, 0) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_expr_1));
          MR_hl_field(0, TypeInfo_43_43, 1) = ((MR_Box) (TypeInfo_for_T_38));
        }
        SubSpecs_21 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_43_43, (MR_Word) (MaybeSubExpr_19));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeTree_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (SubSpecs_21));
        }
      }
    }
    else
    {
      MR_Word MaybeBase_22;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, BaseParser_4, (MR_Integer) 1))));
      MR_Box conv1_MaybeBase_22;

      func_0(((MR_Box) (BaseParser_4)), ((MR_Box) (Term_5)), &conv1_MaybeBase_22);
      MaybeBase_22 = ((MR_Word) (conv1_MaybeBase_22));
      if (((MR_tag((MR_Word) MaybeBase_22)) == (MR_Integer) 0))
        *MaybeTree_6 = (MR_Word) (MaybeBase_22);
      else
      {
        MR_Box Base_23 = (MR_hl_field(1, MaybeBase_22, (MR_Integer) 0));
        MR_Word Var_36;

        {
          Var_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_36, 0) = Base_23;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeTree_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_36));
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
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *MaybeParams_7 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(1, base, 1) = ((MR_Box) (HeadVar__3_3));
          MR_hl_field(1, base, 2) = ((MR_Box) (HeadVar__4_4));
          MR_hl_field(1, base, 3) = ((MR_Box) (HeadVar__5_5));
        }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeParams_7 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (HeadVar__6_6));
        }
    else
    {
      MR_Word Component_16;
      MR_Word Context_17;
      MR_Word ComponentsContexts_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_MaybeCompileTime_40_40;
      MR_Word STATE_VARIABLE_Specs_49_49;
      MR_Word STATE_VARIABLE_MaybeRunTime_50_50;
      MR_Word STATE_VARIABLE_MaybeIO_60_60;
      MR_Word STATE_VARIABLE_MutableVars_70_70;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_HeadVar__6_6;

      Component_16 = ((MR_Word) ((MR_hl_field(0, Var_39, (MR_Integer) 0))));
      Context_17 = ((MR_Word) ((MR_hl_field(0, Var_39, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) Component_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MutableVar_33 = (MR_Word) ((MR_Word) (Component_16));
            MR_Word Var_71;

            {
              Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_71, 0) = ((MR_Box) (MutableVar_33));
              MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            STATE_VARIABLE_MutableVars_70_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), HeadVar__5_5, Var_71);
            STATE_VARIABLE_MaybeCompileTime_40_40 = HeadVar__2_2;
            STATE_VARIABLE_MaybeRunTime_50_50 = HeadVar__3_3;
            STATE_VARIABLE_MaybeIO_60_60 = HeadVar__4_4;
            STATE_VARIABLE_Specs_49_49 = HeadVar__6_6;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CompileTime_25 = ((MR_Word) ((MR_hl_field(1, Component_16, (MR_Integer) 0))));

            if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                STATE_VARIABLE_MaybeCompileTime_40_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_MaybeCompileTime_40_40, 0) = ((MR_Box) (CompileTime_25));
              }
              STATE_VARIABLE_Specs_49_49 = HeadVar__6_6;
            }
            else
            {
              MR_Word Spec_28;

              {
                Spec_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.convert_trace_params_2\'/7"));
                MR_hl_field(1, Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(1, Spec_28, 3) = ((MR_Box) (Context_17));
                MR_hl_field(1, Spec_28, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[284])));
              }
              {
                STATE_VARIABLE_Specs_49_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_49_49, 0) = ((MR_Box) (Spec_28));
                MR_hl_field(1, STATE_VARIABLE_Specs_49_49, 1) = ((MR_Box) (HeadVar__6_6));
              }
              STATE_VARIABLE_MaybeCompileTime_40_40 = HeadVar__2_2;
            }
            STATE_VARIABLE_MaybeRunTime_50_50 = HeadVar__3_3;
            STATE_VARIABLE_MaybeIO_60_60 = HeadVar__4_4;
            STATE_VARIABLE_MutableVars_70_70 = HeadVar__5_5;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word RunTime_29 = ((MR_Word) ((MR_hl_field(2, Component_16, (MR_Integer) 0))));

            if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                STATE_VARIABLE_MaybeRunTime_50_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_MaybeRunTime_50_50, 0) = ((MR_Box) (RunTime_29));
              }
              STATE_VARIABLE_Specs_49_49 = HeadVar__6_6;
            }
            else
            {
              MR_Word Spec_74;

              {
                Spec_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_74, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.convert_trace_params_2\'/7"));
                MR_hl_field(1, Spec_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_74, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(1, Spec_74, 3) = ((MR_Box) (Context_17));
                MR_hl_field(1, Spec_74, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[288])));
              }
              {
                STATE_VARIABLE_Specs_49_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_49_49, 0) = ((MR_Box) (Spec_74));
                MR_hl_field(1, STATE_VARIABLE_Specs_49_49, 1) = ((MR_Box) (HeadVar__6_6));
              }
              STATE_VARIABLE_MaybeRunTime_50_50 = HeadVar__3_3;
            }
            STATE_VARIABLE_MaybeCompileTime_40_40 = HeadVar__2_2;
            STATE_VARIABLE_MaybeIO_60_60 = HeadVar__4_4;
            STATE_VARIABLE_MutableVars_70_70 = HeadVar__5_5;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word IOStateVar_31 = ((MR_Word) ((MR_hl_field(3, Component_16, (MR_Integer) 0))));

            if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                STATE_VARIABLE_MaybeIO_60_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_MaybeIO_60_60, 0) = ((MR_Box) (IOStateVar_31));
              }
              STATE_VARIABLE_Specs_49_49 = HeadVar__6_6;
            }
            else
            {
              MR_Word Spec_80;

              {
                Spec_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_80, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.convert_trace_params_2\'/7"));
                MR_hl_field(1, Spec_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_80, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(1, Spec_80, 3) = ((MR_Box) (Context_17));
                MR_hl_field(1, Spec_80, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[286])));
              }
              {
                STATE_VARIABLE_Specs_49_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_49_49, 0) = ((MR_Box) (Spec_80));
                MR_hl_field(1, STATE_VARIABLE_Specs_49_49, 1) = ((MR_Box) (HeadVar__6_6));
              }
              STATE_VARIABLE_MaybeIO_60_60 = HeadVar__4_4;
            }
            STATE_VARIABLE_MaybeCompileTime_40_40 = HeadVar__2_2;
            STATE_VARIABLE_MaybeRunTime_50_50 = HeadVar__3_3;
            STATE_VARIABLE_MutableVars_70_70 = HeadVar__5_5;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ComponentsContexts_18;
      next_value_of_HeadVar__2_2 = STATE_VARIABLE_MaybeCompileTime_40_40;
      next_value_of_HeadVar__3_3 = STATE_VARIABLE_MaybeRunTime_50_50;
      next_value_of_HeadVar__4_4 = STATE_VARIABLE_MaybeIO_60_60;
      next_value_of_HeadVar__5_5 = STATE_VARIABLE_MutableVars_70_70;
      next_value_of_HeadVar__6_6 = STATE_VARIABLE_Specs_49_49;
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
  MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
  MR_Word Var_21;
  MR_String Var_22;
  MR_Word Var_23;

  if (succeeded)
  {
    Var_21 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 0))));
    Var_23 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 1))));
    succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_22 = ((MR_String) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
        succeeded = (strcmp(Var_22, (MR_String) "[]") == 0);
      }
    }
  }
  if (succeeded)
    *MaybeComponentsContexts_8 = (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_3[7]));
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
      Var_25 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 0))));
      Var_27 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_26 = ((MR_String) ((MR_hl_field(0, Var_25, (MR_Integer) 0))));
        succeeded = (strcmp(Var_26, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 0))));
            Var_28 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 1))));
            succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TailTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_28, (MR_Integer) 0))));
              Var_29 = ((MR_Word) ((MR_hl_field(1, Var_28, (MR_Integer) 1))));
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
        HeadComponentContext_15 = ((MR_Word) ((MR_hl_field(1, MaybeHeadComponentContext_13, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeTailComponentsContexts_14)) == (MR_Integer) 1);
        if (succeeded)
          TailComponentsContexts_16 = ((MR_Word) ((MR_hl_field(1, MaybeTailComponentsContexts_14, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word Var_30;

        {
          Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_30, 0) = ((MR_Box) (HeadComponentContext_15));
          MR_hl_field(1, Var_30, 1) = ((MR_Box) (TailComponentsContexts_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeComponentsContexts_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_30));
        }
      }
      else
      {
        MR_Word Specs_17;
        MR_Word Var_31;
        MR_Word Var_32;

        Var_31 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_2[2]), MaybeHeadComponentContext_13);
        Var_32 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_goal_scalar_common_1[13]), MaybeTailComponentsContexts_14);
        Specs_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_31, Var_32);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeComponentsContexts_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_17));
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
        Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_45, 1) = ((MR_Box) (TermStr_18));
      }
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[169])));
      }
      {
        Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_41, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[336])));
        MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_44));
      }
      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[76])));
        MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[331])));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
      }
      {
        Pieces_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_19, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[335])));
        MR_hl_field(1, Pieces_19, 1) = ((MR_Box) (Var_35));
      }
      Var_55 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_try_params\'/4"));
        MR_hl_field(1, Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_20, 3) = ((MR_Box) (Var_55));
        MR_hl_field(1, Spec_20, 4) = ((MR_Box) (Pieces_19));
      }
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (Spec_20));
        MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeComponentsContexts_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_56));
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
  MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
  MR_Word SubTerms_10;
  MR_Word Context_11;
  MR_String Atom_12;
  MR_Word Functor_9;

  if (succeeded)
  {
    Functor_9 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 0))));
    SubTerms_10 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 1))));
    Context_11 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Functor_9)) == (MR_Integer) 0);
    if (succeeded)
      Atom_12 = ((MR_String) ((MR_hl_field(0, Functor_9, (MR_Integer) 0))));
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
        SubTerm_13 = ((MR_Word) ((MR_hl_field(1, SubTerms_10, (MR_Integer) 0))));
        Var_22 = ((MR_Word) ((MR_hl_field(1, SubTerms_10, (MR_Integer) 1))));
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
          Var_23 = ((MR_Word) ((MR_hl_field(0, SubTerm_13, (MR_Integer) 0))));
          Var_25 = ((MR_Word) ((MR_hl_field(0, SubTerm_13, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_24 = ((MR_String) ((MR_hl_field(0, Var_23, (MR_Integer) 0))));
            succeeded = (strcmp(Var_24, (MR_String) "!") == 0);
            if (succeeded)
            {
              succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_26 = ((MR_Word) ((MR_hl_field(1, Var_25, (MR_Integer) 0))));
                Var_27 = ((MR_Word) ((MR_hl_field(1, Var_25, (MR_Integer) 1))));
                succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_Integer) 1);
                  if (succeeded)
                    Var_14 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 0))));
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
            MR_hl_field(0, Var_28, 0) = ((MR_Box) (Component_18));
            MR_hl_field(0, Var_28, 1) = ((MR_Box) (Context_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeComponentContext_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_28));
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
            Var_32 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_32, 0) = ((MR_Box) (Atom_12));
          }
          {
            Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
            MR_hl_field(1, Var_31, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[196])));
          }
          {
            Pieces_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_19, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[194])));
            MR_hl_field(1, Pieces_19, 1) = ((MR_Box) (Var_31));
          }
          Var_42 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubTerm_13);
          {
            Spec_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_try_param\'/4"));
            MR_hl_field(1, Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(1, Spec_20, 3) = ((MR_Box) (Var_42));
            MR_hl_field(1, Spec_20, 4) = ((MR_Box) (Pieces_19));
          }
          {
            Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_43, 0) = ((MR_Box) (Spec_20));
            MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeComponentContext_8 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_43));
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
          Var_48 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_48, 0) = ((MR_Box) (Atom_12));
        }
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[199])));
        }
        {
          Pieces_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_94, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[24])));
          MR_hl_field(1, Pieces_94, 1) = ((MR_Box) (Var_47));
        }
        {
          Spec_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_95, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_try_param\'/4"));
          MR_hl_field(1, Spec_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_95, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(1, Spec_95, 3) = ((MR_Box) (Context_11));
          MR_hl_field(1, Spec_95, 4) = ((MR_Box) (Pieces_94));
        }
        {
          Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_61, 0) = ((MR_Box) (Spec_95));
          MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeComponentContext_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_61));
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
        Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_66, 1) = ((MR_Box) (TermStr_21));
      }
      {
        Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
        MR_hl_field(1, Var_65, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[48])));
      }
      {
        Pieces_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_96, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[337])));
        MR_hl_field(1, Pieces_96, 1) = ((MR_Box) (Var_65));
      }
      {
        Spec_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_97, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_try_param\'/4"));
        MR_hl_field(1, Spec_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_97, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_97, 3) = ((MR_Box) (Context_11));
        MR_hl_field(1, Spec_97, 4) = ((MR_Box) (Pieces_96));
      }
      {
        Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_76, 0) = ((MR_Box) (Spec_97));
        MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeComponentContext_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_76));
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
      Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_81, 1) = ((MR_Box) (TermStr_100));
    }
    {
      Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
      MR_hl_field(1, Var_80, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[48])));
    }
    {
      Pieces_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_98, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[337])));
      MR_hl_field(1, Pieces_98, 1) = ((MR_Box) (Var_80));
    }
    Var_91 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
    {
      Spec_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_99, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_try_param\'/4"));
      MR_hl_field(1, Spec_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_99, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_99, 3) = ((MR_Box) (Var_91));
      MR_hl_field(1, Spec_99, 4) = ((MR_Box) (Pieces_98));
    }
    {
      Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_92, 0) = ((MR_Box) (Spec_99));
      MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeComponentContext_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_92));
    }
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
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeParams_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (HeadVar__2_2));
        }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeParams_4 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (HeadVar__3_3));
        }
    else
    {
      MR_Word Component_10;
      MR_Word Context_11;
      MR_Word ComponentsContexts_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word IOStateVar_16;
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_MaybeIO_23_23;
      MR_Word STATE_VARIABLE_Specs_32_32;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      Component_10 = ((MR_Word) ((MR_hl_field(0, Var_22, (MR_Integer) 0))));
      Context_11 = ((MR_Word) ((MR_hl_field(0, Var_22, (MR_Integer) 1))));
      IOStateVar_16 = (MR_Word) (Component_10);
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_MaybeIO_23_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_MaybeIO_23_23, 0) = ((MR_Box) (IOStateVar_16));
        }
        STATE_VARIABLE_Specs_32_32 = HeadVar__3_3;
      }
      else
      {
        MR_Word Spec_19;

        {
          Spec_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.convert_try_params_2\'/4"));
          MR_hl_field(1, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(1, Spec_19, 3) = ((MR_Box) (Context_11));
          MR_hl_field(1, Spec_19, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[339])));
        }
        {
          STATE_VARIABLE_Specs_32_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_32_32, 0) = ((MR_Box) (Spec_19));
          MR_hl_field(1, STATE_VARIABLE_Specs_32_32, 1) = ((MR_Box) (HeadVar__3_3));
        }
        STATE_VARIABLE_MaybeIO_23_23 = HeadVar__2_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ComponentsContexts_12;
      next_value_of_HeadVar__2_2 = STATE_VARIABLE_MaybeIO_23_23;
      next_value_of_HeadVar__3_3 = STATE_VARIABLE_Specs_32_32;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_goal__append_disjunct_to_cord_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_DisjunctsCord_11;

  parse_tree__parse_goal__append_disjunct_to_cord_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DisjunctsCord_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DisjunctsCord_11));
}

static void MR_CALL 
parse_tree__parse_goal__append_disjunct_to_cord_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_DisjunctsCord_0_10,
  MR_Word * STATE_VARIABLE_DisjunctsCord_11)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) Goal_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Goal_4, (MR_Integer) 0)))) == (MR_Integer) 2)));
  MR_Word Disjunct1_7;
  MR_Word Disjunct2_8;
  MR_Word Disjuncts3plus_9;

  if (succeeded)
  {
    Disjunct1_7 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 2))));
    Disjunct2_8 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));
    Disjuncts3plus_9 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 4))));
    {
      MR_Word STATE_VARIABLE_DisjunctsCord_12_12;
      MR_Word STATE_VARIABLE_DisjunctsCord_13_13;
      MR_Box conv1_STATE_VARIABLE_DisjunctsCord_11;

      parse_tree__parse_goal__append_disjunct_to_cord_3_p_0(Disjunct1_7, STATE_VARIABLE_DisjunctsCord_0_10, &STATE_VARIABLE_DisjunctsCord_12_12);
      parse_tree__parse_goal__append_disjunct_to_cord_3_p_0(Disjunct2_8, STATE_VARIABLE_DisjunctsCord_12_12, &STATE_VARIABLE_DisjunctsCord_13_13);
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&parse_tree__parse_goal_scalar_common_1[5]), (MR_Word) (&parse_tree__parse_goal_scalar_common_2[3]), Disjuncts3plus_9, ((MR_Box) (STATE_VARIABLE_DisjunctsCord_13_13)), &conv1_STATE_VARIABLE_DisjunctsCord_11);
      *STATE_VARIABLE_DisjunctsCord_11 = ((MR_Word) (conv1_STATE_VARIABLE_DisjunctsCord_11));
    }
  }
  else
    mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), ((MR_Box) (Goal_4)), STATE_VARIABLE_DisjunctsCord_0_10, STATE_VARIABLE_DisjunctsCord_11);
}

MR_Word MR_CALL 
parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(
  MR_Word ContextPieces_5,
  MR_Word Context_6,
  MR_String Functor_7)
{
  MR_Word Spec_8;
  MR_Word Pieces_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_13;
  MR_Word Var_16;
  MR_Word Var_19;
  MR_Word Var_20;

  Var_10 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5);
  {
    Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_20, 1) = ((MR_Box) (Functor_7));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[33])));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[29])));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_19));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[24])));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_16));
  }
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) (Var_13));
  }
  Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_10, Var_11);
  {
    Spec_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_goal.should_have_two_goals_infix\'/3"));
    MR_hl_field(1, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 20U));
    MR_hl_field(1, Spec_8, 3) = ((MR_Box) (Context_6));
    MR_hl_field(1, Spec_8, 4) = ((MR_Box) (Pieces_9));
  }
  return Spec_8;
}

static void MR_CALL 
parse_tree__parse_goal__generate_warnings_for_duplicate_warnings_5_p_0(
  MR_Word Context_1,
  MR_Word ContextPieces_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word WarningCount_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word WarningsCounts_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word TailNonDupWarnings_14;
    MR_Word TailDupSpecs_15;
    MR_Word Warning_16;
    MR_Integer Count_17;

    parse_tree__parse_goal__generate_warnings_for_duplicate_warnings_5_p_0(Context_1, ContextPieces_2, WarningsCounts_11, &TailNonDupWarnings_14, &TailDupSpecs_15);
    Warning_16 = ((MR_Word) ((MR_hl_field(0, WarningCount_10, (MR_Integer) 0))));
    Count_17 = ((MR_Integer) ((MR_hl_field(0, WarningCount_10, (MR_Integer) 1))));
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
      Var_24 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_2);
      {
        Var_34 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_34, 0) = ((MR_Box) (WarningStr_18));
      }
      {
        Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_39, 1) = ((MR_Box) (MoreThanOnce_19));
      }
      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[182])));
      }
      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[180])));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_30, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[179])));
        MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[24])));
        MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
      }
      {
        Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_27));
      }
      Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_25);
      {
        Spec_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.generate_warnings_for_duplicate_warnings\'/5"));
        MR_hl_field(1, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_21, 3) = ((MR_Box) (Context_1));
        MR_hl_field(1, Spec_21, 4) = ((MR_Box) (Pieces_20));
      }
      *HeadVar__4_4 = TailNonDupWarnings_14;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_21));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailDupSpecs_15));
      }
    }
    else
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Warning_16));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailNonDupWarnings_14));
      }
      *HeadVar__5_5 = TailDupSpecs_15;
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
  MR_bool succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_Integer) 0);
  MR_Word Var_29;
  MR_String Var_30;
  MR_Word Var_31;

  if (succeeded)
  {
    Var_29 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 0))));
    Var_31 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 1))));
    succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_30 = ((MR_String) ((MR_hl_field(0, Var_29, (MR_Integer) 0))));
        succeeded = (strcmp(Var_30, (MR_String) "[]") == 0);
      }
    }
  }
  if (succeeded)
    *MaybeWarnings_12 = (MR_Word) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[163]));
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
      Var_34 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 0))));
      Var_36 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_35 = ((MR_String) ((MR_hl_field(0, Var_34, (MR_Integer) 0))));
        succeeded = (strcmp(Var_35, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Var_36 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_36, (MR_Integer) 0))));
            Var_37 = ((MR_Word) ((MR_hl_field(1, Var_36, (MR_Integer) 1))));
            succeeded = (Var_37 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TailTerm_15 = ((MR_Word) ((MR_hl_field(1, Var_37, (MR_Integer) 0))));
              Var_38 = ((MR_Word) ((MR_hl_field(1, Var_37, (MR_Integer) 1))));
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
        MR_Word TailSpecs_24 = ((MR_Word) ((MR_hl_field(0, MaybeTailWarnings_19, (MR_Integer) 0))));
        MR_Word Specs_25;

        Specs_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), HeadWarningSpecs_18, TailSpecs_24);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeWarnings_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_25));
        }
      }
      else
      {
        MR_Word TailWarnings_20 = ((MR_Word) ((MR_hl_field(1, MaybeTailWarnings_19, (MR_Integer) 0))));
        MR_Word TailWarningSpecs_21 = ((MR_Word) ((MR_hl_field(1, MaybeTailWarnings_19, (MR_Integer) 1))));
        MR_Word Warnings_22;
        MR_Word WarningSpecs_23;

        Warnings_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), HeadWarnings_17, TailWarnings_20);
        WarningSpecs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), HeadWarningSpecs_18, TailWarningSpecs_21);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeWarnings_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Warnings_22));
          MR_hl_field(1, base, 1) = ((MR_Box) (WarningSpecs_23));
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
      Var_41 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_10);
      {
        Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_51, 1) = ((MR_Box) (ScopeFunctor_9));
      }
      {
        Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_62, 1) = ((MR_Box) (TermStr_26));
      }
      {
        Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
        MR_hl_field(1, Var_61, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[169])));
      }
      {
        Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_58, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[167])));
        MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_61));
      }
      {
        Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[166])));
        MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
      }
      {
        Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_52, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[165])));
        MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_55));
      }
      {
        Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_52));
      }
      {
        Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[164])));
        MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
      }
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[24])));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_47));
      }
      {
        Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_44));
      }
      Pieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, Var_42);
      Var_72 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_8);
      {
        Spec_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_warnings\'/6"));
        MR_hl_field(1, Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(1, Spec_28, 3) = ((MR_Box) (Var_72));
        MR_hl_field(1, Spec_28, 4) = ((MR_Box) (Pieces_27));
      }
      {
        Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_73, 0) = ((MR_Box) (Spec_28));
        MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeWarnings_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_73));
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
  MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
  MR_Word Warning_17;
  MR_Word Var_22;
  MR_String WarningFunctor_15;
  MR_Word Var_21;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

  if (succeeded)
  {
    Var_21 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 0))));
    Var_22 = ((MR_Word) ((MR_hl_field(0, Term_9, (MR_Integer) 1))));
    succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
      if (succeeded)
      {
        WarningFunctor_15 = ((MR_String) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
        // binary string simple lookup switch
        ;
        lo_0 = (MR_Integer) 0;
        hi_1 = (MR_Integer) 5;
        do
        {
          mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
          result_3 = MR_strcmp(WarningFunctor_15, ((&parse_tree__parse_goal_vector_common_5[0 + mid_2]))->parse_tree__parse_goal__vector_common_type_5_0__vct_5_f_0);
          if ((result_3 == (MR_Integer) 0))
          {
            Warning_17 = ((&parse_tree__parse_goal_vector_common_5[0 + mid_2]))->parse_tree__parse_goal__vector_common_type_5_0__vct_5_f_1;
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
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Warnings_13 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Warning_17));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_22));
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
    Var_24 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_11);
    {
      Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_34, 1) = ((MR_Box) (WarningNum_12));
    }
    {
      Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_42, 1) = ((MR_Box) (ScopeFunctor_10));
    }
    {
      Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_47, 1) = ((MR_Box) (TermStr_18));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[178])));
    }
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[173])));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[172])));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[171])));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[164])));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[170])));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_27));
    }
    Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_25);
    Var_63 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
    {
      Spec_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_goal.parse_warning\'/7"));
      MR_hl_field(1, Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(1, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(1, Spec_20, 3) = ((MR_Box) (Var_63));
      MR_hl_field(1, Spec_20, 4) = ((MR_Box) (Pieces_19));
    }
    *Warnings_13 = (MR_Word) ((MR_Unsigned) 0U);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *WarningSpecs_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_20));
      MR_hl_field(1, base, 1) = ((MR_Box) (*Warnings_13));
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

  Var_12 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_6);
  {
    Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_22, 1) = ((MR_Box) (Functor_9));
  }
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (X_8));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[37])));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[35])));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_23));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[34])));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_21));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[24])));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_18));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_15));
  }
  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_12, Var_13);
  {
    Spec_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_10, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_goal.should_have_one_x_one_goal_prefix\'/4"));
    MR_hl_field(1, Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_10, 2) = ((MR_Box) ((MR_Unsigned) 20U));
    MR_hl_field(1, Spec_10, 3) = ((MR_Box) (Context_7));
    MR_hl_field(1, Spec_10, 4) = ((MR_Box) (Pieces_11));
  }
  return Spec_10;
}

static void MR_CALL 
parse_tree__parse_goal__string_goal_kind_2_p_1(
  MR_String * Functor_3,
  MR_Word GoalKind_4)
{
  *Functor_3 = ((&parse_tree__parse_goal_vector_common_4[0 + GoalKind_4]))->parse_tree__parse_goal__vector_common_type_4_0__vct_4_f_0;
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
    MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(1, MaybeGoal0_7, (MR_Integer) 0))));
    MR_Word WarningSpecs0_10 = ((MR_Word) ((MR_hl_field(1, MaybeGoal0_7, (MR_Integer) 1))));
    MR_Word Goal_15;

    switch (MR_tag((MR_Word) Goal0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ProgTerm1_16 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 1))));
          MR_Word ProgTerm2_17 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 2))));
          MR_Word Context_108 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 0))));
          MR_Word Purity0_109 = ((MR_Unsigned) ((MR_hl_field(0, Goal0_9, (MR_Integer) 3))) & (MR_Integer) 3);

          switch (Purity0_109) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              Goal_15 = parse_tree__parse_goal__bad_purity_goal_3_f_0(GoalTerm_5, Context_108, Purity_6);
              break;
            case (MR_Integer) 0:
              {
                Goal_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Goal_15, 0) = ((MR_Box) (Context_108));
                MR_hl_field(0, Goal_15, 1) = ((MR_Box) (ProgTerm1_16));
                MR_hl_field(0, Goal_15, 2) = ((MR_Box) (ProgTerm2_17));
                MR_hl_field(0, Goal_15, 3) = (MR_Box) ((MR_Unsigned) (Purity_6));
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Context_11 = ((MR_Word) ((MR_hl_field(1, Goal0_9, (MR_Integer) 0))));
          MR_Word Pred_12 = ((MR_Word) ((MR_hl_field(1, Goal0_9, (MR_Integer) 1))));
          MR_Word Args_13 = ((MR_Word) ((MR_hl_field(1, Goal0_9, (MR_Integer) 2))));
          MR_Word Purity0_14 = ((MR_Unsigned) ((MR_hl_field(1, Goal0_9, (MR_Integer) 3))) & (MR_Integer) 3);

          switch (Purity0_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              Goal_15 = parse_tree__parse_goal__bad_purity_goal_3_f_0(GoalTerm_5, Context_11, Purity_6);
              break;
            case (MR_Integer) 0:
              {
                Goal_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Goal_15, 0) = ((MR_Box) (Context_11));
                MR_hl_field(1, Goal_15, 1) = ((MR_Box) (Pred_12));
                MR_hl_field(1, Goal_15, 2) = ((MR_Box) (Args_13));
                MR_hl_field(1, Goal_15, 3) = (MR_Box) ((MR_Unsigned) (Purity_6));
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_107;

          Var_107 = parse_tree__prog_item__get_goal_context_1_f_0(Goal0_9);
          Goal_15 = parse_tree__parse_goal__bad_purity_goal_3_f_0(GoalTerm_5, Var_107, Purity_6);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_107;

          Var_107 = parse_tree__prog_item__get_goal_context_1_f_0(Goal0_9);
          Goal_15 = parse_tree__parse_goal__bad_purity_goal_3_f_0(GoalTerm_5, Var_107, Purity_6);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MaybeGoal_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (WarningSpecs0_10));
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_goal__bad_purity_goal_3_f_0(
  MR_Word GoalTerm0_5,
  MR_Word Context_6,
  MR_Word Purity_7)
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
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (PurityString_10));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (GoalTerm_9));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Goal_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Goal_8, 0) = ((MR_Box) (Context_6));
    MR_hl_field(1, Goal_8, 1) = ((MR_Box) (Var_11));
    MR_hl_field(1, Goal_8, 2) = ((MR_Box) (Var_12));
    MR_hl_field(1, Goal_8, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  return Goal_8;
}

MR_Word MR_CALL 
parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(
  MR_Word ContextPieces_5,
  MR_Word Context_6,
  MR_String Functor_7)
{
  MR_Word Spec_8;
  MR_Word Pieces_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_13;
  MR_Word Var_16;
  MR_Word Var_19;
  MR_Word Var_20;

  Var_10 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5);
  {
    Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_20, 1) = ((MR_Box) (Functor_7));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_goal_scalar_common_1[28])));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[25])));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_19));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_goal_scalar_common_1[24])));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_16));
  }
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) (Var_13));
  }
  Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_10, Var_11);
  {
    Spec_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_goal.should_have_one_goal_prefix\'/3"));
    MR_hl_field(1, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 20U));
    MR_hl_field(1, Spec_8, 3) = ((MR_Box) (Context_6));
    MR_hl_field(1, Spec_8, 4) = ((MR_Box) (Pieces_9));
  }
  return Spec_8;
}

static MR_bool MR_CALL 
parse_tree__parse_goal____Unify____atomic_component_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_goal____Unify____atomic_component_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_goal____Compare____atomic_component_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_goal____Compare____atomic_component_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_goal____Unify____goal_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_goal____Unify____goal_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_goal____Compare____goal_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_goal____Compare____goal_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_goal____Unify____trace_component_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_goal____Unify____trace_component_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_goal____Compare____trace_component_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_goal____Compare____trace_component_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_goal____Unify____try_component_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_goal____Unify____try_component_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_goal____Compare____try_component_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_goal____Compare____try_component_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&parse_tree__parse_goal__parse_tree__parse_goal__type_ctor_info_goal_kind_0);
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
